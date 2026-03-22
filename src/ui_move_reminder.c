#include "global.h"
#include "main.h"
#include "bg.h"
#include "window.h"
#include "palette.h"
#include "task.h"
#include "malloc.h"
#include "menu_helpers.h"
#include "menu.h"
#include "scanline_effect.h"
#include "sprite.h"
#include "decompress.h"
#include "sound.h"
#include "sprite.h"
#include "string_util.h"
#include "pokemon_icon.h"
#include "graphics.h"
#include "data.h"
#include "gpu_regs.h"
#include "overworld.h"
#include "party_menu.h"
#include "strings.h"
#include "move.h"
#include "item.h"
#include "daycare.h"
#include "ui_pokedex.h"
#include "ui_move_reminder.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/characters.h"
#include "constants/daycare.h"
#include "constants/ui_pokedex.h"
#include "constants/ui_move_reminder.h"

static EWRAM_DATA struct MoveReminderResources *sMoveReminderResourcesPtr = NULL;

static void CB2_MoveReminder(void);
static void VBlankCB_MoveReminder(void);
static void MoveReminder_FreeResources(void);

static void Task_MReminderInput_Main(u8);
static void Task_MReminderInput_WaitFadeAndExit(u8);

static void CB2_MReminderSetup(void);
static void MReminderSetup_InitMonData(void);
static bool32 MReminderSetup_InitBgs(void);
static void MReminderSetup_InitGraphics(void);
static void MReminderSetup_InitWindows(void);
static void MReminderSetup_InitSprites(void);
static void Task_MReminderSetup_WaitFade(u8);

static void TilemapBuffer_SetPtr(enum MoveReminderBackgroundBuffers, u8 *);
static u8 *TilemapBuffer_GetPtr(enum MoveReminderBackgroundBuffers);

static enum MoveReminderModes MReminderMode_GetValue(void);
static enum MoveReminderModes MReminderMode_SetValue(enum MoveReminderModes);

static const struct MoveReminderPageInfo *MReminderPage_GetInfo(enum MoveReminderPages);
static const u32 *MReminderPage_GetTilemap(enum MoveReminderPages);
static const u8 *MReminderPage_GetHelpBarStr(enum MoveReminderPages);
static UpdateFrontEndFunc MReminderPage_GetUpdateFrontEndFunc(enum MoveReminderPages);
static void MReminderPage_ReloadTilemap(void);
static void MReminderPage_PrintHelpBar(void);
static void MReminderPage_UpdateFrontEnd(void);
static enum MoveReminderPages MReminderPage_GetValue(void);
static enum MoveReminderPages MReminderPage_SetValue(enum MoveReminderPages);

static struct MoveReminderMon *MReminderMon_Get(void);

static void MReminderMoves_PopulateList(void);
static void MReminderMoves_SortList(void);
static SortListFunc MReminderMoves_GetSortListFunc(void);
static void MReminderMoves_ProcessDefaultList(u32 *);
static void MReminderMoves_ProcessLevelUpLearnset(const struct LevelUpMove *, u32 *);
static void MReminderMoves_ProcessEggLearnset(const u16 *, u32 *);
static void MReminderMoves_ProcessMachineLearnset(const u16 *, u32 *);
static bool32 MReminderMoves_CanMonLearnMove(const u16 *, u32, u32);
static bool32 MReminderMoves_IsMoveAlreadyAdded(u32, u32);
static u32 MReminderMoves_GetIdxFromMove(u32, u32);
static void MReminderMoves_AddMoveToIdx(u32, enum MoveReminderMethod, u32 *);
static void MReminderMoves_UpdateMoveInIdx(u32, enum MoveReminderMethod, u32);
static void MReminderMoves_SetMoveToIdx(u32, u32);
static u32 MReminderMoves_GetMoveFromIdx(u32);
static void MReminderMoves_SetMethodToIdx(u32, enum MoveReminderMethod);
static u32 MReminderMoves_GetMethodFromIdx(u32);
static void MReminderMoves_SetNumberOfMoves(u32);
static u32 MReminderMoves_GetNumberOfMoves(void);
static void MReminderMoves_SetMoveToList(u32, u32);
static u32 MReminderMoves_GetMoveFromList(u32);

static void MReminderWindow_Print(enum MoveReminderWindows, const u8 *, u32, u32, u32, enum MoveReminderTextColors);

static void MainPage_UpdateFrontEnd(void);
static void MainPage_PrintMonGender(void);
static void MainPage_PrintMonLevel(void);
static void MainPage_PrintMonStat(enum Stat, u32, u32, u32, u32);

static void FilterPage_UpdateFrontEnd(void);

#include "data/ui_move_reminder.h"

void MoveReminder_Init(enum MoveReminderModes mode, MainCallback callback, void *mon, u32 moveSlot)
{
    sMoveReminderResourcesPtr = AllocZeroed(sizeof(struct MoveReminderResources));
    if (sMoveReminderResourcesPtr == NULL)
    {
        SetMainCallback2(callback);
        return;
    }

    MReminderMode_SetValue(mode);
    MReminderPage_SetValue(MREMINDER_PAGE_MAIN);
    sMoveReminderResourcesPtr->ptr.mon = mon;
    sMoveReminderResourcesPtr->moveSlot = moveSlot;
    sMoveReminderResourcesPtr->savedCallback = callback;

    SetMainCallback2(CB2_MReminderSetup);
}

static void CB2_MoveReminder(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void VBlankCB_MoveReminder(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void MoveReminder_FreeResources(void)
{
    for (enum MoveReminderBackgroundBuffers buf = 0; buf < NUM_MREMINDER_BACKGROUND_BUFFERS; buf++)
    {
        u8 *ptr = TilemapBuffer_GetPtr(buf);
        TRY_FREE_AND_SET_NULL(ptr);
    }

    TRY_FREE_AND_SET_NULL(sMoveReminderResourcesPtr);
    FreeTempTileDataBuffersIfPossible();
    FreeAllWindowBuffers();
    ResetSpriteData();
}

static void Task_MReminderInput_Main(u8 taskId)
{
    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_PC_OFF);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_MReminderInput_WaitFadeAndExit;
        return;
    }

    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        return;
    }
}

static void Task_MReminderInput_WaitFadeAndExit(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sMoveReminderResourcesPtr->savedCallback);
        MoveReminder_FreeResources();
        DestroyTask(taskId);
    }
}

static void CB2_MReminderSetup(void)
{
    enum MoveReminderSetupSteps steps = gMain.state;

    switch (steps)
    {
    case MREMINDER_SETUP_RESET:
        FillPalette(RGB_BLACK, 0, PLTT_SIZEOF(512));
        ResetVramOamAndBgCntRegs();
        ResetAllBgsCoordinatesAndBgCntRegs();
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetVBlankHBlankCallbacksToNull();
        ClearScheduledBgCopiesToVram();
        ScanlineEffect_Stop();
        FreeAllSpritePalettes();
        ResetPaletteFade();
        FreeAllWindowBuffers();
        ResetSpriteData();
        ResetTasks();
        gMain.state++;
        break;
    case MREMINDER_SETUP_MONDATA:
        MReminderSetup_InitMonData();
        gMain.state++;
        break;
    case MREMINDER_SETUP_LEARNSET:
        MReminderMoves_PopulateList();
        gMain.state++;
        break;
    case MREMINDER_SETUP_BACKGROUNDS:
        if (!MReminderSetup_InitBgs())
        {
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
            CreateTask(Task_MReminderInput_WaitFadeAndExit, 0);
            SetVBlankCallback(VBlankCB_MoveReminder);
            SetMainCallback2(CB2_MoveReminder);
            return;
        }
        gMain.state++;
        break;
    case MREMINDER_SETUP_GRAPHICS:
        MReminderSetup_InitGraphics();
        gMain.state++;
        break;
    case MREMINDER_SETUP_WINDOWS:
        MReminderSetup_InitWindows();
        gMain.state++;
        break;
    case MREMINDER_SETUP_SPRITES:
        MReminderSetup_InitSprites();
        gMain.state++;
        break;
    case MREMINDER_SETUP_FADE:
        BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        CreateTask(Task_MReminderSetup_WaitFade, 0);
        gMain.state++;
        break;
    case MREMINDER_SETUP_FINISH:
        SetVBlankCallback(VBlankCB_MoveReminder);
        SetMainCallback2(CB2_MoveReminder);
        gMain.state++;
        break;
    default:
        DebugPrintf("WARNING unused step at: %d", steps);
        gMain.state++;
        break;
    }
}

static void MReminderSetup_InitMonData(void)
{
    struct Pokemon oldMon;

    if (MReminderMode_GetValue() == MREMINDER_MODE_BOX)
        BoxMonToMon(sMoveReminderResourcesPtr->ptr.boxMon, &oldMon);
    else
        CopyMon(&oldMon, sMoveReminderResourcesPtr->ptr.mon, sizeof(struct Pokemon));

    struct MoveReminderMon *newMon = &sMoveReminderResourcesPtr->mon;

    newMon->species = GetMonData(&oldMon, MON_DATA_SPECIES);

    GetMonNickname(&oldMon, newMon->nickname);
    newMon->gender = GetMonGender(&oldMon);
    newMon->level = GetMonData(&oldMon, MON_DATA_LEVEL);

    for (enum Stat stat = 0; stat < NUM_STATS; stat++)
        newMon->stats[stat] = GetMonData(&oldMon, MON_DATA_MAX_HP + stat);

    for (u32 i = 0; i < MAX_MON_MOVES; i++)
        newMon->moves[i] = GetMonData(&oldMon, MON_DATA_MOVE1 + i);
}

static bool32 MReminderSetup_InitBgs(void)
{
    ResetAllBgsCoordinates();

    bool32 allocFail = FALSE;

    for (enum MoveReminderBackgroundBuffers buf = 0; buf < NUM_MREMINDER_BACKGROUND_BUFFERS; buf++)
    {
        TilemapBuffer_SetPtr(buf, AllocZeroed(BG_SCREEN_SIZE));

        if (!TilemapBuffer_GetPtr(buf))
        {
            allocFail = TRUE;
            break;
        }
    }

    if (allocFail)
        return FALSE;

    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sMoveReminderBgTemplates, NUM_MREMINDER_BACKGROUNDS);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);

    SetBgTilemapBuffer(MREMINDER_BG_TILEMAP, sMoveReminderResourcesPtr->tilemapBufs[MREMINDER_BGBUF_TILEMAP]);

    for (enum MoveReminderBackgrounds bg = 0; bg < NUM_MREMINDER_BACKGROUNDS; bg++)
    {
        ScheduleBgCopyTilemapToVram(bg);
        ShowBg(bg);
    }

    return TRUE;
}

static void MReminderSetup_InitGraphics(void)
{
    FreeTempTileDataBuffersIfPossible();
    ResetTempTileDataBuffers();

    DecompressAndCopyTileDataToVram(MREMINDER_BG_TILEMAP, sMoveReminder_Tiles, 0, 0, 0);
    LoadPalette(sMoveReminder_Palette, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
    // tilemap will be loaded with the front end later
}

static void MReminderSetup_InitWindows(void)
{
    InitWindows(sMoveReminderWindowTemplates);
    DeactivateAllTextPrinters();
    ScheduleBgCopyTilemapToVram(MREMINDER_BG_TEXT);

    u32 baseBlock = 1;

    for (enum MoveReminderWindows window = 0; window < NUM_MREMINDER_WINDOWS; window++)
    {
        SetWindowAttribute(window, WINDOW_BASE_BLOCK, baseBlock);
        FillWindowPixelBuffer(window, PIXEL_FILL(0));
        PutWindowTilemap(window);

        const struct WindowTemplate *template = &gWindows[window].window;
        baseBlock += template->width * template->height;
    }

    MReminderPage_UpdateFrontEnd();
}

static void MReminderSetup_InitSprites(void)
{

}

static void Task_MReminderSetup_WaitFade(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_MReminderInput_Main;
}

static void TilemapBuffer_SetPtr(enum MoveReminderBackgroundBuffers buf, u8 *addr)
{
    sMoveReminderResourcesPtr->tilemapBufs[buf] = addr;
}

static u8 *TilemapBuffer_GetPtr(enum MoveReminderBackgroundBuffers buf)
{
    return sMoveReminderResourcesPtr->tilemapBufs[buf];
}

static enum MoveReminderModes MReminderMode_GetValue(void)
{
    return sMoveReminderResourcesPtr->mode;
}

static enum MoveReminderModes MReminderMode_SetValue(enum MoveReminderModes mode)
{
    sMoveReminderResourcesPtr->mode = mode;
    return MReminderMode_GetValue();
}

static const struct MoveReminderPageInfo *MReminderPage_GetInfo(enum MoveReminderPages page)
{
    return &sMoveReminder_PagesInfo[page];
}

static const u32 *MReminderPage_GetTilemap(enum MoveReminderPages page)
{
    return MReminderPage_GetInfo(page)->tilemap;
}

static const u8 *MReminderPage_GetHelpBarStr(enum MoveReminderPages page)
{
    return MReminderPage_GetInfo(page)->helpBarStr;
}

static UpdateFrontEndFunc MReminderPage_GetUpdateFrontEndFunc(enum MoveReminderPages page)
{
    return MReminderPage_GetInfo(page)->updateFrontEndFunc;
}

static void MReminderPage_ReloadTilemap(void)
{
    DecompressDataWithHeaderWram(
        MReminderPage_GetTilemap(MReminderPage_GetValue()),
        TilemapBuffer_GetPtr(MREMINDER_BGBUF_TILEMAP));
}

static void MReminderPage_PrintHelpBar(void)
{
    const u8 *str = MReminderPage_GetHelpBarStr(MReminderPage_GetValue());

    if (str == NULL)
        str = gText_EmptyString2;

    MReminderWindow_Print(MREMINDER_WINDOW_FOOTER, str, FONT_SMALL,
        MREMINDER_HELPBAR_FOOTER_X, MREMINDER_HELPBAR_FOOTER_Y, MREMINDER_TXTCLR_HELP_BAR);
}

static void MReminderPage_UpdateFrontEnd(void)
{
    for (enum MoveReminderWindows window = 0; window < NUM_MREMINDER_WINDOWS; window++)
    {
        FillWindowPixelBuffer(window, PIXEL_FILL(0));
        PutWindowTilemap(window);
    }

    MReminderPage_ReloadTilemap();
    MReminderPage_PrintHelpBar();

    UpdateFrontEndFunc func = MReminderPage_GetUpdateFrontEndFunc(MReminderPage_GetValue());
    func();

    for (enum MoveReminderWindows window = 0; window < NUM_MREMINDER_WINDOWS; window++)
        CopyWindowToVram(window, COPYWIN_GFX);

    for (enum MoveReminderBackgrounds bg = 0; bg < NUM_MREMINDER_BACKGROUNDS; bg++)
        CopyBgTilemapBufferToVram(bg);
}

static enum MoveReminderPages MReminderPage_GetValue(void)
{
    return sMoveReminderResourcesPtr->page;
}

static enum MoveReminderPages MReminderPage_SetValue(enum MoveReminderPages page)
{
    sMoveReminderResourcesPtr->page = page;
    return MReminderPage_GetValue();
}

static struct MoveReminderMon *MReminderMon_Get(void)
{
    return &sMoveReminderResourcesPtr->mon;
}

static void MReminderMoves_PopulateList(void)
{
    u32 numMoves = 0;
    u32 species = MReminderMon_Get()->species;

    MReminderMoves_ProcessLevelUpLearnset(GetSpeciesLevelUpLearnset(species), &numMoves);
    MReminderMoves_ProcessEggLearnset(GetSpeciesEggMoves(GetEggSpecies(species)), &numMoves);
    MReminderMoves_ProcessMachineLearnset(GetSpeciesTeachableLearnset(species), &numMoves);

    MReminderMoves_SortList();

    for (u32 i = 0; MReminderMoves_GetMoveFromIdx(i) != MOVE_NONE; i++)
        DebugPrintf("list[%d]: { %S, %d }", i, GetMoveName(MReminderMoves_GetMoveFromIdx(i)), MReminderMoves_GetMethodFromIdx(i));
}

static void MReminderMoves_SortList(void)
{
    SortListFunc func = MReminderMoves_GetSortListFunc();
    u32 numMoves = 0;

    func(&numMoves);
    MReminderMoves_SetNumberOfMoves(numMoves);
}

static SortListFunc MReminderMoves_GetSortListFunc(void)
{
    return sMoveReminder_SortListFuncs[MREMINDER_SORT_DEFAULT];
}

static void MReminderMoves_ProcessDefaultList(u32 *numMoves)
{
    for (u32 i = 0; MReminderMoves_GetMoveFromIdx(i) != MOVE_NONE; i++)
    {
        u32 move = MReminderMoves_GetMoveFromIdx(i);
        if (move == MOVE_NONE || move == MOVE_UNAVAILABLE)
            break;

        MReminderMoves_SetMoveToList(i, move);
        (*numMoves)++;
    }
}

static void MReminderMoves_ProcessLevelUpLearnset(const struct LevelUpMove *learnset, u32 *numMoves)
{
    u32 arrayCount = 0;

    // not all mons has the maximum amount of level up moves
    while (learnset[arrayCount].move != MOVE_UNAVAILABLE)
        arrayCount++;

    for (u32 idx = arrayCount; idx > 0; idx--)
    {
        if (learnset[idx].move == MOVE_NONE || learnset[idx].move == MOVE_UNAVAILABLE)
            continue;

        if (!IsMoveInSilicon(learnset[idx].move))
            continue;

        if (learnset[idx].level > MReminderMon_Get()->level)
            continue;

        if (!MReminderMoves_IsMoveAlreadyAdded(learnset[idx].move, *numMoves))
            MReminderMoves_AddMoveToIdx(learnset[idx].move, MREMINDER_METHOD_LEVEL_UP, numMoves);
    }
}

static void MReminderMoves_ProcessEggLearnset(const u16 *learnset, u32 *numMoves)
{
    for (u32 idx = 0; idx < MOVES_COUNT; idx++)
    {
        if (learnset[idx] == MOVE_NONE || learnset[idx] == MOVE_UNAVAILABLE)
            break;

        if (!IsMoveInSilicon(idx) || !MReminderMoves_CanMonLearnMove(learnset, idx, EGG_MOVES_ARRAY_COUNT))
            continue;

        if (!MReminderMoves_IsMoveAlreadyAdded(learnset[idx], *numMoves))
            MReminderMoves_AddMoveToIdx(learnset[idx], MREMINDER_METHOD_EGG, numMoves);
        else
            MReminderMoves_UpdateMoveInIdx(MReminderMoves_GetIdxFromMove(learnset[idx], *numMoves), MREMINDER_METHOD_EGG, *numMoves);
    }
}

static void MReminderMoves_ProcessMachineLearnset(const u16 *learnset, u32 *numMoves)
{
    for (u32 idx = 0; idx < NUM_TECHNICAL_MACHINES; idx++)
    {
        u32 move = GetTMHMMoveId(idx);

        if (!MReminderMoves_CanMonLearnMove(learnset, move, NUM_TECHNICAL_MACHINES))
            continue;

        if (!CheckBagHasItem(GetTMHMItemIdFromMoveId(move), 1))
            continue;

        if (!MReminderMoves_IsMoveAlreadyAdded(move, *numMoves))
            MReminderMoves_AddMoveToIdx(move, MREMINDER_METHOD_MACHINE, numMoves);
        else
            MReminderMoves_UpdateMoveInIdx(MReminderMoves_GetIdxFromMove(move, *numMoves), MREMINDER_METHOD_MACHINE, *numMoves);
    }
}

static bool32 MReminderMoves_CanMonLearnMove(const u16 *learnset, u32 machineMove, u32 numMoves)
{
    for (u32 i = 0; i < numMoves; i++)
    {
        if (learnset[i] == MOVE_NONE || learnset[i] == MOVE_UNAVAILABLE)
            break;

        if (learnset[i] == machineMove)
            return TRUE;
    }

    return FALSE;
}

static bool32 MReminderMoves_IsMoveAlreadyAdded(u32 move, u32 numMoves)
{
    return MReminderMoves_GetIdxFromMove(move, numMoves) != MOVE_UNAVAILABLE;
}

static u32 MReminderMoves_GetIdxFromMove(u32 move, u32 numMoves)
{
    for (u32 idx = 0; idx < numMoves; idx++)
    {
        if (MReminderMoves_GetMoveFromIdx(idx) == move)
            return idx;
    }

    return MOVE_UNAVAILABLE;
}

static void MReminderMoves_AddMoveToIdx(u32 move, enum MoveReminderMethod method, u32 *numMoves)
{
    MReminderMoves_SetMoveToIdx(*numMoves, move);
    MReminderMoves_SetMethodToIdx(*numMoves, method);
    (*numMoves)++;
}

static void MReminderMoves_UpdateMoveInIdx(u32 move, enum MoveReminderMethod newMethod, u32 numMoves)
{
    for (u32 idx = 0; idx < numMoves; idx++)
    {
        if (MReminderMoves_GetMoveFromIdx(idx) != move)
            continue;

        switch (MReminderMoves_GetMethodFromIdx(idx))
        {
        case MREMINDER_METHOD_LEVEL_UP:
            if (newMethod == MREMINDER_METHOD_EGG)
                MReminderMoves_SetMethodToIdx(idx, MREMINDER_METHOD_LEVEL_EGG);
            else if (newMethod == MREMINDER_METHOD_MACHINE)
                MReminderMoves_SetMethodToIdx(idx, MREMINDER_METHOD_MACHINE_LEVEL);
            break;
        case MREMINDER_METHOD_EGG:
            if (newMethod == MREMINDER_METHOD_MACHINE)
                MReminderMoves_SetMethodToIdx(idx, MREMINDER_METHOD_EGG_MACHINE);
            break;
        case MREMINDER_METHOD_MACHINE:
            if (newMethod == MREMINDER_METHOD_EGG)
                MReminderMoves_SetMethodToIdx(idx, MREMINDER_METHOD_EGG_MACHINE);
            break;
        default:
            break;
        }
    }
}

static void MReminderMoves_SetMoveToIdx(u32 idx, u32 move)
{
    sMoveReminderResourcesPtr->learnsets[idx].move = move;
}

static u32 MReminderMoves_GetMoveFromIdx(u32 idx)
{
    return sMoveReminderResourcesPtr->learnsets[idx].move;
}

static void MReminderMoves_SetMethodToIdx(u32 idx, enum MoveReminderMethod method)
{
    sMoveReminderResourcesPtr->learnsets[idx].method = method;
}

static u32 MReminderMoves_GetMethodFromIdx(u32 idx)
{
    return sMoveReminderResourcesPtr->learnsets[idx].method;
}

static void MReminderMoves_SetNumberOfMoves(u32 numMoves)
{
    sMoveReminderResourcesPtr->numMoves = numMoves;
}

static u32 MReminderMoves_GetNumberOfMoves(void)
{
    return sMoveReminderResourcesPtr->numMoves;
}

static void MReminderMoves_SetMoveToList(u32 idx, u32 move)
{
    sMoveReminderResourcesPtr->movesList[idx] = move;
}

static u32 MReminderMoves_GetMoveFromList(u32 idx)
{
    return sMoveReminderResourcesPtr->movesList[idx];
}

static void MReminderWindow_Print(enum MoveReminderWindows window, const u8 *str, u32 fontId, u32 x, u32 y, enum MoveReminderTextColors color)
{
    AddTextPrinterParameterized4(window, fontId, x, y, 0, 0, sMoveReminderTextColors[color], TEXT_SKIP_DRAW, str);
}

static void MainPage_UpdateFrontEnd(void)
{
    struct MoveReminderMon *mon = MReminderMon_Get();

    MReminderWindow_Print(MREMINDER_WINDOW_MAIN, mon->nickname, FONT_OUTLINED, 2, 0, MREMINDER_TXTCLR_DEFAULT);
    MainPage_PrintMonGender();
    MainPage_PrintMonLevel();

    MainPage_PrintMonStat(STAT_HP,  PAGE_MAIN_STATS_1_NAME_X, PAGE_MAIN_STATS_1_Y, PAGE_MAIN_STATS_1_VALUE_X, PAGE_MAIN_STATS_1_Y);
    MainPage_PrintMonStat(STAT_ATK, PAGE_MAIN_STATS_1_NAME_X, PAGE_MAIN_STATS_2_Y, PAGE_MAIN_STATS_1_VALUE_X, PAGE_MAIN_STATS_2_Y);
    MainPage_PrintMonStat(STAT_DEF, PAGE_MAIN_STATS_1_NAME_X, PAGE_MAIN_STATS_3_Y, PAGE_MAIN_STATS_1_VALUE_X, PAGE_MAIN_STATS_3_Y);

    MainPage_PrintMonStat(STAT_SPATK, PAGE_MAIN_STATS_2_NAME_X, PAGE_MAIN_STATS_1_Y, PAGE_MAIN_STATS_2_VALUE_X, PAGE_MAIN_STATS_1_Y);
    MainPage_PrintMonStat(STAT_SPDEF, PAGE_MAIN_STATS_2_NAME_X, PAGE_MAIN_STATS_2_Y, PAGE_MAIN_STATS_2_VALUE_X, PAGE_MAIN_STATS_2_Y);

    MainPage_PrintMonStat(STAT_SPEED, PAGE_MAIN_STATS_3_NAME_X, PAGE_MAIN_STATS_3_Y, PAGE_MAIN_STATS_3_VALUE_X, PAGE_MAIN_STATS_3_Y);
}

static void MainPage_PrintMonGender(void)
{
    struct MoveReminderMon *mon = MReminderMon_Get();
    u32 species = mon->species;
    u32 gender = mon->gender;

    if ((species == SPECIES_NIDORAN_M || species == SPECIES_NIDORAN_F)
     && gender == MON_GENDERLESS)
    {
        return;
    }

    bool32 femaleMon = gender == MON_FEMALE;
    enum MoveReminderTextColors color = MREMINDER_TXTCLR_MALE + femaleMon;
    const u8 *str = femaleMon ? gText_FemaleSymbol : gText_MaleSymbol;

    MReminderWindow_Print(MREMINDER_WINDOW_MAIN, str, FONT_OUTLINED, 66, 0, color);
}

static void MainPage_PrintMonLevel(void)
{
    struct MoveReminderMon *mon = MReminderMon_Get();

    ConvertUIntToDecimalStringN(gStringVar1, mon->level, STR_CONV_MODE_LEFT_ALIGN, 3);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("{SHADOW 13}{LV}{SHADOW 1}{STR_VAR_1}"));
    MReminderWindow_Print(MREMINDER_WINDOW_MAIN, gStringVar4, FONT_OUTLINED, 82, 0, MREMINDER_TXTCLR_DEFAULT);
}

// x/y1 for stat's name, x/y2 for stat's number
static void MainPage_PrintMonStat(enum Stat stat, u32 x1, u32 y1, u32 x2, u32 y2)
{
    u32 value = MReminderMon_Get()->stats[stat];

    MReminderWindow_Print(MREMINDER_WINDOW_MAIN, sMoveReminder_StatNames[stat],
        FONT_OUTLINED, x1, y1, MREMINDER_TXTCLR_DEFAULT);

    ConvertUIntToDecimalStringN(gStringVar1, value, STR_CONV_MODE_LEFT_ALIGN, 4);
    MReminderWindow_Print(MREMINDER_WINDOW_MAIN, gStringVar1,
        FONT_OUTLINED, x2, y2, MREMINDER_TXTCLR_DEFAULT);
}

static void FilterPage_UpdateFrontEnd(void)
{

}
