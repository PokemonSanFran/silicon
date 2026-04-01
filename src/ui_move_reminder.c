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
#include "qol_field_moves.h"
#include "ui_pokedex.h"
#include "ui_mon_summary.h"
#include "ui_move_reminder.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/characters.h"
#include "constants/daycare.h"
#include "constants/ui_pokedex.h"
#include "constants/ui_move_reminder.h"

static EWRAM_DATA struct MoveReminderData *sMoveReminderDataPtr = NULL;

static void CB2_MoveReminder(void);
static void VBlankCB_MoveReminder(void);

static void Task_MReminderInput_Main(u8);
static void Task_MReminderInput_WaitFadeAndExit(u8);

static void CB2_InitSetup(void);
static void InitSetup_MonData(void);
static bool32 InitSetup_Backgrounds(void);
static void InitSetup_Graphics(void);
static void InitSetup_Windows(void);
static void InitSetup_Sprites(void);
static void Task_InitSetup_WaitFade(u8);

static void TilemapBuffer_SetPtr(enum MoveReminderBackgroundBuffers, u8 *);
static u8 *TilemapBuffer_GetPtr(enum MoveReminderBackgroundBuffers);

static void MoveBar_Init(void);
static void MoveBar_Update(void);
static enum MoveReminderSpriteTags MoveBar_GetPalTagByType(enum Type);
static u32 MoveBar_GetSpriteId(u32);
static void MoveBar_SetSpriteId(u32, u32);
static void SpriteCB_MoveBar(struct Sprite *);
static void SpriteCB_MoveCursor(struct Sprite *);

static enum MoveReminderModes MReminderMode_GetValue(void);
static enum MoveReminderModes MReminderMode_SetValue(enum MoveReminderModes);

static const struct PageInterfaceInfo *PageInterface_GetInfo(enum PageInterfaces);
static const u32 *PageInterface_GetTilemap(enum PageInterfaces);
static const u8 *PageInterface_GetHelpBarStr(enum PageInterfaces);
static UpdateFrontEndFunc PageInterface_GetUpdateFrontEndFunc(enum PageInterfaces);
static HandleInputFunc PageInterface_GetHandleInputFunc(enum PageInterfaces);
static void PageInterface_ReloadTilemap(void);
static void PageInterface_PrintHelpBar(void);
static void PageInterface_UpdateFrontEnd(void);
static enum PageInterfaces PageInterface_GetValue(void);
static enum PageInterfaces PageInterface_SetValue(enum PageInterfaces);

static void MovePool_PopulateList(void);
static void MovePool_ProcessLevelUpLearnset(const struct LevelUpMove *, u32 *);
static void MovePool_ProcessMachineLearnset(const u16 *, u32 *);
static void MovePool_ProcessEggLearnset(const u16 *, u32 *);
static UNUSED bool32 MovePool_MonHasMove(u32);
static u32 MovePool_GetIdxFromMove(u32);
static void MovePool_AddMoveToIdx(u32, enum MovePoolMethods, u32 *);
static void MovePool_UpdateMethodInIdx(u32, enum MovePoolMethods);
static void MovePool_SetMoveToIdx(u32, u32);
static u32 MovePool_GetMoveFromIdx(u32);
static void MovePool_SetMethodToIdx(u32, enum MovePoolMethods);
static bool32 MovePool_IsMethodInIdx(u32, enum MovePoolMethods);
static u32 MovePool_GetMethodFromIdx(u32);
static void MovePool_SetNumberOfMoves(u32);
static u32 MovePool_GetNumberOfMoves(void);
static void MovePool_SetMoveToList(u32, u32);
static u32 MovePool_GetMoveFromList(u32);

static void MovePool_Sort(void);
static MovePoolSortFunc MovePool_GetSortFunc(void);
static void MovePoolSort_Default(u32 *);

static void MiscUtil_FreeResources(void);
static struct MoveReminderMon *MiscUtil_GetMon(void);
static void MiscUtil_AddTextPrinter(enum MoveReminderWindows, const u8 *, u32, u32, u32, enum MoveReminderTextColors);

static void MainPage_HandleInput(u8);
static void MainPage_NavigatePage(s32, u32);
static void MainPage_UpdateListIdx(s32);
static bool32 MainPage_IsInputAdditive(s32);
static void MainPage_SetCurrListIdx(u32);
static u32 MainPage_GetCurrListIdx(void);
static void MainPage_SetFirstListIdx(u32);
static u32 MainPage_GetFirstListIdx(void);
static void MainPage_SetGridListIdx(u32);
static u32 MainPage_GetGridListIdx(void);
static void MainPage_UpdateFrontEnd(void);
static void MainPage_PrintMonGender(void);
static void MainPage_PrintMonLevel(void);
static void MainPage_PrintMonStats(void);
static void MainPage_PrintMonIndividualStat(enum Stat, u32, u32, u32, u32);

static void FilterPage_HandleInput(u8);
static void FilterPage_UpdateFrontEnd(void);

#include "data/ui_move_reminder.h"

void MoveReminder_Init(enum MoveReminderModes mode, MainCallback callback, void *mon, u32 moveSlot)
{
    sMoveReminderDataPtr = AllocZeroed(sizeof(struct MoveReminderData));
    if (sMoveReminderDataPtr == NULL)
    {
        SetMainCallback2(callback);
        return;
    }

    MReminderMode_SetValue(mode);
    PageInterface_SetValue(PAGE_INTERFACE_MAIN);
    sMoveReminderDataPtr->ptr.mon = mon;
    sMoveReminderDataPtr->moveSlot = moveSlot;
    sMoveReminderDataPtr->savedCallback = callback;

    SetMainCallback2(CB2_InitSetup);
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

static void Task_MReminderInput_Main(u8 taskId)
{
    HandleInputFunc inputFunc = PageInterface_GetHandleInputFunc(PageInterface_GetValue());
    inputFunc(taskId);
}

static void Task_MReminderInput_WaitFadeAndExit(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sMoveReminderDataPtr->savedCallback);
        MiscUtil_FreeResources();
        DestroyTask(taskId);
    }
}

static void CB2_InitSetup(void)
{
    enum InitSetupSteps steps = gMain.state;

    switch (steps)
    {
    case INIT_SETUP_RESET:
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
    case INIT_SETUP_MONDATA:
        InitSetup_MonData();
        gMain.state++;
        break;
    case INIT_SETUP_LEARNSET:
        MovePool_PopulateList();
        gMain.state++;
        break;
    case INIT_SETUP_BACKGROUNDS:
        if (!InitSetup_Backgrounds())
        {
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
            CreateTask(Task_MReminderInput_WaitFadeAndExit, 0);
            SetVBlankCallback(VBlankCB_MoveReminder);
            SetMainCallback2(CB2_MoveReminder);
            return;
        }
        gMain.state++;
        break;
    case INIT_SETUP_GRAPHICS:
        InitSetup_Graphics();
        gMain.state++;
        break;
    case INIT_SETUP_WINDOWS:
        InitSetup_Windows();
        gMain.state++;
        break;
    case INIT_SETUP_SPRITES:
        InitSetup_Sprites();
        gMain.state++;
        break;
    case INIT_SETUP_FADE:
        BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        CreateTask(Task_InitSetup_WaitFade, 0);
        gMain.state++;
        break;
    case INIT_SETUP_FINISH:
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

static void InitSetup_MonData(void)
{
    struct Pokemon oldMon;

    if (MReminderMode_GetValue() == MREMINDER_MODE_BOX)
        BoxMonToMon(sMoveReminderDataPtr->ptr.boxMon, &oldMon);
    else
        CopyMon(&oldMon, sMoveReminderDataPtr->ptr.mon, sizeof(struct Pokemon));

    struct MoveReminderMon *newMon = &sMoveReminderDataPtr->mon;

    newMon->species = GetMonData(&oldMon, MON_DATA_SPECIES);

    GetMonNickname(&oldMon, newMon->nickname);
    newMon->gender = GetMonGender(&oldMon);
    newMon->level = GetMonData(&oldMon, MON_DATA_LEVEL);

    for (enum Stat stat = 0; stat < NUM_STATS; stat++)
        newMon->stats[stat] = GetMonData(&oldMon, MON_DATA_MAX_HP + stat);

    for (u32 i = 0; i < MAX_MON_MOVES; i++)
        newMon->moves[i] = GetMonData(&oldMon, MON_DATA_MOVE1 + i);
}

static bool32 InitSetup_Backgrounds(void)
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

    SetBgTilemapBuffer(MREMINDER_BG_TILEMAP, sMoveReminderDataPtr->tilemapBufs[MREMINDER_BGBUF_TILEMAP]);

    for (enum MoveReminderBackgrounds bg = 0; bg < NUM_MREMINDER_BACKGROUNDS; bg++)
    {
        ScheduleBgCopyTilemapToVram(bg);
        ShowBg(bg);
    }

    return TRUE;
}

static void InitSetup_Graphics(void)
{
    FreeTempTileDataBuffersIfPossible();
    ResetTempTileDataBuffers();

    DecompressAndCopyTileDataToVram(MREMINDER_BG_TILEMAP, sMoveReminder_Tiles, 0, 0, 0);
    LoadPalette(sMoveReminder_Palette, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
    // tilemap will be loaded with the front end later

    LoadSpritePalettes((const struct SpritePalette[]){
        { gMonSummary_TypeSpritePalettes[0].data, MREMINDER_TAG_TYPE_PAL_1 },
        { gMonSummary_TypeSpritePalettes[1].data, MREMINDER_TAG_TYPE_PAL_2 },
        { sMoveReminder_Palette, MREMINDER_TAG_UNIVERSAL },
    });
}

static void InitSetup_Windows(void)
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

    PageInterface_UpdateFrontEnd();
}

static void InitSetup_Sprites(void)
{
    MoveBar_Init();
    MoveBar_Update();
}

static void Task_InitSetup_WaitFade(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_MReminderInput_Main;
}

static void TilemapBuffer_SetPtr(enum MoveReminderBackgroundBuffers buf, u8 *addr)
{
    sMoveReminderDataPtr->tilemapBufs[buf] = addr;
}

static u8 *TilemapBuffer_GetPtr(enum MoveReminderBackgroundBuffers buf)
{
    return sMoveReminderDataPtr->tilemapBufs[buf];
}

// customized data e.g. palette/texts is handled in another function
static void MoveBar_Init(void)
{
    const struct SpriteTemplate *template = &gMonSummary_MoveBarSpriteTemplate;
    struct Sprite *sprite;

    for (u32 i = 0, y = PAGE_MAIN_MOVE_BAR_Y; i < MAX_MREMINDER_BAR_SPRITES + 1; i++, y += PAGE_MAIN_MOVE_BAR_SPACER_Y)
    {
        // reset back for cursor
        if (i == MREMINDER_BAR_SPRITE_ID_CURSOR)
        {
            y = PAGE_MAIN_MOVE_BAR_Y;
            template = &gMonSummary_SlotCursorSpriteTemplate;
        }

        //                                                   set subpriority for move bars to be right below the cursor
        u32 spriteId = CreateSprite(template, PAGE_MAIN_MOVE_BAR_X, y, i != MREMINDER_BAR_SPRITE_ID_CURSOR);
        sprite = &gSprites[spriteId];

        sprite->sMoveBar_Idx = i;
        sprite->callback = SpriteCB_MoveBar;
        SetSubspriteTables(sprite, gMonSummary_128x16SubspriteTable);
        MoveBar_SetSpriteId(i, spriteId);
    }

    // cursor
    sprite->oam.paletteNum = IndexOfSpritePaletteTag(MREMINDER_TAG_UNIVERSAL);
    sprite->callback = SpriteCB_MoveCursor;
}

static void MoveBar_Update(void)
{
    enum MoveReminderWindows win = MREMINDER_WINDOW_MAIN;
    u32 nameY = PAGE_MAIN_MOVE_BAR_NAME_Y, typeY = PAGE_MAIN_MOVE_BAR_TYPE_Y;

    for (u32 i = 0; i < MAX_MREMINDER_BAR_SPRITES; i++, nameY += PAGE_MAIN_MOVE_BAR_SPACER_Y, typeY += PAGE_MAIN_MOVE_BAR_SPACER_Y)
    {
        u32 spriteId = MoveBar_GetSpriteId(i);
        struct Sprite *sprite = &gSprites[spriteId];

        u32 move = MovePool_GetMoveFromList(i + MainPage_GetFirstListIdx());
        enum Type moveType = GetMoveType(move);

        sprite->oam.paletteNum = IndexOfSpritePaletteTag(MoveBar_GetPalTagByType(moveType));
        StartSpriteAnim(sprite, moveType);

        if (move == MOVE_NONE)
            continue;

        MiscUtil_AddTextPrinter(win, GetMoveName(move), FONT_OUTLINED, PAGE_MAIN_MOVE_BAR_NAME_X, nameY, MREMINDER_TXTCLR_DEFAULT);
        BlitBitmapRectToWindow(win, gMonSummary_MoveTypeGfx,
            0, moveType * 16,
            16, 16 * NUMBER_OF_MON_TYPES,
            PAGE_MAIN_MOVE_BAR_TYPE_X, typeY,
            16, 16);
    }
}

static enum MoveReminderSpriteTags MoveBar_GetPalTagByType(enum Type type)
{
    return MREMINDER_TAG_TYPE_PAL_1 + (type >= TYPE_MYSTERY);
}

static u32 MoveBar_GetSpriteId(u32 idx)
{
    return sMoveReminderDataPtr->moveBarSpriteIds[idx];
}

static void MoveBar_SetSpriteId(u32 idx, u32 spriteId)
{
    sMoveReminderDataPtr->moveBarSpriteIds[idx] = spriteId;
}

static void SpriteCB_MoveBar(struct Sprite *sprite)
{
    sprite->invisible = (PageInterface_GetValue() != PAGE_INTERFACE_MAIN
                         || sprite->sMoveBar_Idx >= MovePool_GetNumberOfMoves());
}

static void SpriteCB_MoveCursor(struct Sprite *sprite)
{
    sprite->y2 = PAGE_MAIN_MOVE_BAR_SPACER_Y * MainPage_GetGridListIdx();
}

static enum MoveReminderModes MReminderMode_GetValue(void)
{
    return sMoveReminderDataPtr->mode;
}

static enum MoveReminderModes MReminderMode_SetValue(enum MoveReminderModes mode)
{
    sMoveReminderDataPtr->mode = mode;
    return MReminderMode_GetValue();
}

static const struct PageInterfaceInfo *PageInterface_GetInfo(enum PageInterfaces page)
{
    return &sPageInterfaceInfos[page];
}

static const u32 *PageInterface_GetTilemap(enum PageInterfaces page)
{
    return PageInterface_GetInfo(page)->tilemap;
}

static const u8 *PageInterface_GetHelpBarStr(enum PageInterfaces page)
{
    return PageInterface_GetInfo(page)->helpBarStr;
}

static UpdateFrontEndFunc PageInterface_GetUpdateFrontEndFunc(enum PageInterfaces page)
{
    return PageInterface_GetInfo(page)->updateFrontEndFunc;
}

static HandleInputFunc PageInterface_GetHandleInputFunc(enum PageInterfaces page)
{
    return PageInterface_GetInfo(page)->handleInputFunc;
}

static void PageInterface_ReloadTilemap(void)
{
    DecompressDataWithHeaderWram(
        PageInterface_GetTilemap(PageInterface_GetValue()),
        TilemapBuffer_GetPtr(MREMINDER_BGBUF_TILEMAP));
}

static void PageInterface_PrintHelpBar(void)
{
    const u8 *str = PageInterface_GetHelpBarStr(PageInterface_GetValue());

    if (str == NULL)
        str = gText_EmptyString2;

    MiscUtil_AddTextPrinter(MREMINDER_WINDOW_FOOTER, str, FONT_SMALL,
        HELPBAR_FOOTER_X, HELPBAR_FOOTER_Y, MREMINDER_TXTCLR_HELP_BAR);
}

static void PageInterface_UpdateFrontEnd(void)
{
    for (enum MoveReminderWindows window = 0; window < NUM_MREMINDER_WINDOWS; window++)
    {
        FillWindowPixelBuffer(window, PIXEL_FILL(0));
        PutWindowTilemap(window);
    }

    PageInterface_ReloadTilemap();
    PageInterface_PrintHelpBar();

    UpdateFrontEndFunc func = PageInterface_GetUpdateFrontEndFunc(PageInterface_GetValue());
    func();

    for (enum MoveReminderWindows window = 0; window < NUM_MREMINDER_WINDOWS; window++)
        CopyWindowToVram(window, COPYWIN_GFX);

    for (enum MoveReminderBackgrounds bg = 0; bg < NUM_MREMINDER_BACKGROUNDS; bg++)
        CopyBgTilemapBufferToVram(bg);
}

static enum PageInterfaces PageInterface_GetValue(void)
{
    return sMoveReminderDataPtr->page;
}

static enum PageInterfaces PageInterface_SetValue(enum PageInterfaces page)
{
    sMoveReminderDataPtr->page = page;
    return PageInterface_GetValue();
}

static void MovePool_PopulateList(void)
{
    u32 numMoves = 0;
    u32 species = MiscUtil_GetMon()->species;

    MovePool_ProcessLevelUpLearnset(GetSpeciesLevelUpLearnset(species), &numMoves);
    MovePool_ProcessMachineLearnset(GetSpeciesTeachableLearnset(species), &numMoves);
    MovePool_ProcessEggLearnset(GetSpeciesEggMoves(GetEggSpecies(species)), &numMoves);
    MovePool_Sort();
}

static void MovePool_ProcessLevelUpLearnset(const struct LevelUpMove *learnset, u32 *numMoves)
{
    s32 idx = 0;

    // is there a way to ARRAY_COUNT for pointers?
    while (learnset[idx].move != LEVEL_UP_MOVE_END)
        idx++;

    // no moves found
    if (!idx)
        return;

    while (idx >= 0)
    {
        u32 move = learnset[idx].move;

        idx--;

        if (!IsMoveInSilicon(move))
            continue;

        if (MiscUtil_GetMon()->level < learnset[idx].level)
            continue;

        MovePool_AddMoveToIdx(move, MP_METHOD_LEVEL_UP, numMoves);
    }
}

static void MovePool_ProcessMachineLearnset(const u16 *learnset, u32 *numMoves)
{
    for (enum TMHMIndex idx = 0; idx < NUM_TECHNICAL_MACHINES; idx++)
    {
        u32 move = GetTMHMMoveId(idx);

        if (!CanLearnTeachableMove(MiscUtil_GetMon()->species, move))
            continue;

        if (!CheckBagHasItem(GetTMHMItemId(idx), 1))
            continue;

        u32 existingIdx = MovePool_GetIdxFromMove(move);

        if (existingIdx != MOVE_UNAVAILABLE)
            MovePool_UpdateMethodInIdx(existingIdx, MP_METHOD_MACHINE);
        else
            MovePool_AddMoveToIdx(move, MP_METHOD_MACHINE, numMoves);
    }
}

static void MovePool_ProcessEggLearnset(const u16 *learnset, u32 *numMoves)
{
    for (u32 move = MOVE_NONE + 1; move < MOVES_COUNT; move++)
    {
        if (!IsMoveInSilicon(move))
            continue;

        if (!SpeciesCanLearnEggMove(MiscUtil_GetMon()->species, move))
            continue;

        u32 existingIdx = MovePool_GetIdxFromMove(move);

        if (existingIdx != MOVE_UNAVAILABLE)
            MovePool_UpdateMethodInIdx(existingIdx, MP_METHOD_EGG);
        else
            MovePool_AddMoveToIdx(move, MP_METHOD_EGG, numMoves);
    }
}

// will be used to check when trying to teach
static UNUSED bool32 MovePool_MonHasMove(u32 move)
{
    for (u32 i = 0; i < MAX_MON_MOVES; i++)
    {
        if (MiscUtil_GetMon()->moves[i] == move)
            return TRUE;
    }

    return FALSE;
}

static u32 MovePool_GetIdxFromMove(u32 move)
{
    for (u32 idx = 0; MovePool_GetMoveFromIdx(idx) != MOVE_NONE; idx++)
    {
        if (MovePool_GetMoveFromIdx(idx) == move)
            return idx;
    }

    return MOVE_UNAVAILABLE;
}

static void MovePool_AddMoveToIdx(u32 move, enum MovePoolMethods method, u32 *numMoves)
{
    MovePool_SetMoveToIdx(*numMoves, move);
    MovePool_SetMethodToIdx(*numMoves, method);
    (*numMoves)++;
}

static void MovePool_UpdateMethodInIdx(u32 idx, enum MovePoolMethods newMethod)
{
    if (MovePool_IsMethodInIdx(idx, newMethod))
        return;

    MovePool_SetMethodToIdx(idx, newMethod);
}

static void MovePool_SetMoveToIdx(u32 idx, u32 move)
{
    sMoveReminderDataPtr->movePool[idx].move = move;
}

static u32 MovePool_GetMoveFromIdx(u32 idx)
{
    return sMoveReminderDataPtr->movePool[idx].move;
}

static void MovePool_SetMethodToIdx(u32 idx, enum MovePoolMethods method)
{
    sMoveReminderDataPtr->movePool[idx].method = 1 << method;
}

static bool32 MovePool_IsMethodInIdx(u32 idx, enum MovePoolMethods method)
{
    return (MovePool_GetMethodFromIdx(idx) & method) != 0;
}

static u32 MovePool_GetMethodFromIdx(u32 idx)
{
    return sMoveReminderDataPtr->movePool[idx].method;
}

static void MovePool_SetNumberOfMoves(u32 numMoves)
{
    sMoveReminderDataPtr->numMoves = numMoves;
}

static u32 MovePool_GetNumberOfMoves(void)
{
    return sMoveReminderDataPtr->numMoves;
}

static void MovePool_SetMoveToList(u32 idx, u32 move)
{
    sMoveReminderDataPtr->movesList[idx] = move;
}

static u32 MovePool_GetMoveFromList(u32 idx)
{
    return sMoveReminderDataPtr->movesList[idx];
}

static void MovePool_Sort(void)
{
    MovePoolSortFunc func = MovePool_GetSortFunc();
    u32 numMoves = 0;

    func(&numMoves);
    MovePool_SetNumberOfMoves(numMoves);
}

static MovePoolSortFunc MovePool_GetSortFunc(void)
{
    return sMovePoolSortFunctions[MOVE_POOL_SORT_DEFAULT];
}

static void MovePoolSort_Default(u32 *numMoves)
{
    while (*numMoves < UI_MOVES_COUNT_TOTAL)
    {
        u32 move = MovePool_GetMoveFromIdx(*numMoves);

        if (move == MOVE_NONE)
            break;

        MovePool_SetMoveToList(*numMoves, move);
        (*numMoves)++;
    }
}

static void MiscUtil_FreeResources(void)
{
    for (enum MoveReminderBackgroundBuffers buf = 0; buf < NUM_MREMINDER_BACKGROUND_BUFFERS; buf++)
    {
        u8 *ptr = TilemapBuffer_GetPtr(buf);
        TRY_FREE_AND_SET_NULL(ptr);
    }

    TRY_FREE_AND_SET_NULL(sMoveReminderDataPtr);
    FreeTempTileDataBuffersIfPossible();
    FreeAllWindowBuffers();
    ResetSpriteData();
}

static struct MoveReminderMon *MiscUtil_GetMon(void)
{
    return &sMoveReminderDataPtr->mon;
}

static void MiscUtil_AddTextPrinter(enum MoveReminderWindows window, const u8 *str, u32 fontId, u32 x, u32 y, enum MoveReminderTextColors color)
{
    AddTextPrinterParameterized4(window, fontId, x, y, 0, 0, sMoveReminderTextColors[color], TEXT_SKIP_DRAW, str);
}

static void MainPage_HandleInput(u8 taskId)
{
    if (JOY_NEW(DPAD_UP))
    {
        MainPage_NavigatePage(MREMINDER_INPUT_DEC, MREMINDER_INPUT_PM_1);
        return;
    }

    if (JOY_NEW(DPAD_LEFT))
    {
        MainPage_NavigatePage(MREMINDER_INPUT_DEC, MREMINDER_INPUT_PM_5);
        return;
    }

    if (JOY_NEW(DPAD_DOWN))
    {
        MainPage_NavigatePage(MREMINDER_INPUT_INC, MREMINDER_INPUT_PM_1);
        return;
    }

    if (JOY_NEW(DPAD_RIGHT))
    {
        MainPage_NavigatePage(MREMINDER_INPUT_INC, MREMINDER_INPUT_PM_5);
        return;
    }

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

static void MainPage_NavigatePage(s32 delta, u32 count)
{
    u32 currIdx = MainPage_GetCurrListIdx();

    for (u32 i = 0; i < count; i++)
        MainPage_UpdateListIdx(delta);

    if (currIdx == MainPage_GetCurrListIdx())
        return;

    PlaySE(SE_RG_BAG_CURSOR);
    PageInterface_UpdateFrontEnd();
}

static void MainPage_UpdateListIdx(s32 delta)
{
    bool32 isAdditive = MainPage_IsInputAdditive(delta);
    u32 numMoves = MovePool_GetNumberOfMoves() - 1;
    u32 halfScreen = MAX_MREMINDER_BAR_SPRITES / 2;
    bool32 scroll = (numMoves + 1) > MAX_MREMINDER_BAR_SPRITES;
    u32 finalHalfScreen = numMoves - halfScreen;
    s32 currIdx = MainPage_GetCurrListIdx();
    s32 firstIdx = MainPage_GetFirstListIdx();
    u32 gridIdx = MainPage_GetGridListIdx();

    if (((currIdx >= halfScreen && currIdx < finalHalfScreen && isAdditive)
        || (currIdx > halfScreen && currIdx <= finalHalfScreen && !isAdditive))
        && scroll)
    {
        currIdx += delta;
        firstIdx += delta;
        gridIdx = halfScreen;
    }
    else if (currIdx >= numMoves && isAdditive)
    {
        currIdx = 0;
        firstIdx = 0;
        gridIdx = 0;
    }
    else if (!currIdx && !isAdditive)
    {
        currIdx = numMoves;

        if (scroll)
            firstIdx = numMoves - (MAX_MREMINDER_BAR_SPRITES - 1);

        if (numMoves >= (MAX_MREMINDER_BAR_SPRITES - 1))
            gridIdx = MAX_MREMINDER_BAR_SPRITES - 1;
        else
            gridIdx = numMoves;
    }
    else
    {
        currIdx += delta;
        gridIdx += delta;
    }

    MainPage_SetCurrListIdx(currIdx);
    MainPage_SetFirstListIdx(firstIdx);
    MainPage_SetGridListIdx(gridIdx);
}

static bool32 MainPage_IsInputAdditive(s32 delta)
{
    return delta >= 1;
}

static void MainPage_SetCurrListIdx(u32 idx)
{
    sMoveReminderDataPtr->pageData.main.currIdx = idx;
}

static u32 MainPage_GetCurrListIdx(void)
{
    return sMoveReminderDataPtr->pageData.main.currIdx;
}

static void MainPage_SetFirstListIdx(u32 idx)
{
    sMoveReminderDataPtr->pageData.main.firstIdx = idx;
}

static u32 MainPage_GetFirstListIdx(void)
{
    return sMoveReminderDataPtr->pageData.main.firstIdx;
}

static void MainPage_SetGridListIdx(u32 idx)
{
    sMoveReminderDataPtr->pageData.main.gridIdx = idx;
}

static u32 MainPage_GetGridListIdx(void)
{
    return sMoveReminderDataPtr->pageData.main.gridIdx;
}

static void MainPage_UpdateFrontEnd(void)
{
    struct MoveReminderMon *mon = MiscUtil_GetMon();

    MiscUtil_AddTextPrinter(MREMINDER_WINDOW_MAIN, mon->nickname, FONT_OUTLINED, 2, 0, MREMINDER_TXTCLR_DEFAULT);
    MainPage_PrintMonGender();
    MainPage_PrintMonLevel();

    MainPage_PrintMonStats();

    MoveBar_Update();
}

static void MainPage_PrintMonGender(void)
{
    struct MoveReminderMon *mon = MiscUtil_GetMon();
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

    MiscUtil_AddTextPrinter(MREMINDER_WINDOW_MAIN, str, FONT_OUTLINED, 66, 0, color);
}

static void MainPage_PrintMonLevel(void)
{
    struct MoveReminderMon *mon = MiscUtil_GetMon();

    ConvertUIntToDecimalStringN(gStringVar1, mon->level, STR_CONV_MODE_LEFT_ALIGN, 3);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("{SHADOW 13}{LV}{SHADOW 1}{STR_VAR_1}"));
    MiscUtil_AddTextPrinter(MREMINDER_WINDOW_MAIN, gStringVar4, FONT_OUTLINED, 82, 0, MREMINDER_TXTCLR_DEFAULT);
}

static void MainPage_PrintMonStats(void)
{
    MainPage_PrintMonIndividualStat(STAT_HP,  PAGE_MAIN_STATS_1_NAME_X, PAGE_MAIN_STATS_1_Y, PAGE_MAIN_STATS_1_VALUE_X, PAGE_MAIN_STATS_1_Y);
    MainPage_PrintMonIndividualStat(STAT_ATK, PAGE_MAIN_STATS_1_NAME_X, PAGE_MAIN_STATS_2_Y, PAGE_MAIN_STATS_1_VALUE_X, PAGE_MAIN_STATS_2_Y);
    MainPage_PrintMonIndividualStat(STAT_DEF, PAGE_MAIN_STATS_1_NAME_X, PAGE_MAIN_STATS_3_Y, PAGE_MAIN_STATS_1_VALUE_X, PAGE_MAIN_STATS_3_Y);

    MainPage_PrintMonIndividualStat(STAT_SPATK, PAGE_MAIN_STATS_2_NAME_X, PAGE_MAIN_STATS_1_Y, PAGE_MAIN_STATS_2_VALUE_X, PAGE_MAIN_STATS_1_Y);
    MainPage_PrintMonIndividualStat(STAT_SPDEF, PAGE_MAIN_STATS_2_NAME_X, PAGE_MAIN_STATS_2_Y, PAGE_MAIN_STATS_2_VALUE_X, PAGE_MAIN_STATS_2_Y);

    MainPage_PrintMonIndividualStat(STAT_SPEED, PAGE_MAIN_STATS_3_NAME_X, PAGE_MAIN_STATS_3_Y, PAGE_MAIN_STATS_3_VALUE_X, PAGE_MAIN_STATS_3_Y);
}

// x/y1 for stat's name, x/y2 for stat's number
static void MainPage_PrintMonIndividualStat(enum Stat stat, u32 x1, u32 y1, u32 x2, u32 y2)
{
    u32 value = MiscUtil_GetMon()->stats[stat];

    MiscUtil_AddTextPrinter(MREMINDER_WINDOW_MAIN, sMoveReminder_StatNames[stat],
        FONT_OUTLINED, x1, y1, MREMINDER_TXTCLR_DEFAULT);

    ConvertUIntToDecimalStringN(gStringVar1, value, STR_CONV_MODE_LEFT_ALIGN, 4);
    MiscUtil_AddTextPrinter(MREMINDER_WINDOW_MAIN, gStringVar1,
        FONT_OUTLINED, x2, y2, MREMINDER_TXTCLR_DEFAULT);
}

static void FilterPage_HandleInput(u8 taskId)
{

}

static void FilterPage_UpdateFrontEnd(void)
{

}
