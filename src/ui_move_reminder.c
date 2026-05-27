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
#include "line_break.h"
#include "international_string_util.h"
#include "battle_main.h"
#include "quests.h"
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
static void SpriteCB_MoveCursorArrows(struct Sprite *);

static void TypeIcon_Init(void);
static void TypeIcon_Update(void);
static void TypeIcon_SetSpriteId(u32, u32);
static void SpriteCB_TypeIcon(struct Sprite *);

static enum MoveReminderModes MReminderMode_GetValue(void);
static enum MoveReminderModes MReminderMode_SetValue(enum MoveReminderModes);
static bool32 MReminderMode_UseBoxMon(void);

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
static enum SubPageInterfaces PageInterface_GetSubValue(void);
static enum SubPageInterfaces PageInterface_SetSubValue(enum SubPageInterfaces);

static void MovePool_PopulateList(void);
static void MovePool_ProcessLevelUpLearnset(const struct LevelUpMove *, u32 *);
static void MovePool_ProcessMachineLearnset(u32, u32 *);
static void MovePool_ProcessEggLearnset(u32, u32 *);
static void MovePool_ProcessMoveCriterias(u32, u32 *);
static u32 MovePool_GetIdxFromMove(enum Move);
static void MovePool_AddMoveToIdx(enum Move, enum MovePoolMethods, u32 *);
static void MovePool_UpdateMethodInIdx(u32, enum MovePoolMethods);
static void MovePool_SetMoveToIdx(u32, enum Move);
static u32 MovePool_GetMoveFromIdx(u32);
static void MovePool_SetMethodToIdx(u32, enum MovePoolMethods);
static bool32 MovePool_IsMethodInIdx(u32, enum MovePoolMethods);
static u32 MovePool_GetMethodFromIdx(u32);
static void MovePool_SetCategoryToIdx(u32, enum DamageCategory);
static enum DamageCategory MovePool_GetCategoryFromIdx(u32);
static void MovePool_SetTypeToIdx(u32, enum Type);
static enum Type MovePool_GetTypeFromIdx(u32);
static void MovePool_SetNumberOfMoves(u32);
static u32 MovePool_GetNumberOfMoves(void);
static void MovePool_SetMoveToList(u32, enum Move);
static u32 MovePool_GetMoveFromList(u32);
static u32 MovePool_SanitizeTypeFlag(enum Type);
static bool32 MovePool_DoTypeFilterMatch(enum Type);
static bool32 MovePool_DoCategoryFilterMatch(enum DamageCategory);
static bool32 MovePool_DoMethodFilterMatch(enum MovePoolMethods);
static bool32 MovePool_IsAnyFilterActive(void);
static bool32 MovePool_DoMoveMatchFilter(enum Move);

static void MovePool_SetSort(enum MovePoolSorts sort);
static enum MovePoolSorts MovePool_GetSort(void);
static void MovePool_Sort(void);
static const struct MovePoolSortInfo *MovePool_GetSortInfo(enum MovePoolSorts);
static MovePoolSortFunc MovePool_GetSortFunc(void);
static const u8 *MovePool_GetSortTitle(void);
static void MovePool_CopySortTitle(void);
static void MovePoolSort_BasePower(u32 *);
static void MovePoolSort_Accuracy(u32 *);
static void MovePoolSort_PP(u32 *);
static void MovePoolSort_Name(u32 *);
static void MovePoolSort_MoveID(u32 *);
static void MovePoolSort_Default(u32 *);

static void MiscUtil_FreeResources(void);
static struct MoveReminderMon *MiscUtil_GetMon(void);
static struct BoxPokemon *MiscUtil_GetBoxMon(void);
static void MiscUtil_TeachMove(void);
static void MiscUtil_CancelTeachMove(void);
static void MiscUtil_AddTextPrinter(enum MoveReminderWindows, const u8 *, u32, u32, u32, enum MoveReminderTextColors);
static bool32 MiscUtil_IsInputAdditive(s32);

static void MainPage_ChooseMoveToTeach(u8);
static void MainPage_ChooseMoveToForget(u8);
static void MainPage_WaitCloseMessage(u8);
static void MainPage_ResetListIdx(void);
static void MainPage_NavigateList(s32, u32);
static void MainPage_UpdateListIdx(s32);
static u32 MainPage_GetNumberOfItems(void);
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
static void MainPage_PrintTextBox(enum Move);
static void MainPage_PrepareDialogue(const u8 *);
static void MainPage_PrintMoveSummary(enum Move);
static void MainPage_PrintMovePP(u32, u32);
static void MainPage_PrintMoveCategory(enum Move);
static void MainPage_PrintMovePower(enum Move);
static void MainPage_PrintMoveAccuracy(enum Move);

static void FilterPage_Init(void);
static void FilterPage_Reset(void);
static void FilterPage_Save(void);
static void FilterPage_HandleInput(u8);
static void FilterPage_NavigateGrid(s32, s32);
static void FilterPage_UpdateGridX(s32);
static void FilterPage_UpdateGridY(s32);
static void FilterPage_FixGridX(void);
static void FilterPage_SetGridX(u32);
static u32 FilterPage_GetGridX(void);
static void FilterPage_SetGridY(u32);
static u32 FilterPage_GetGridY(void);
static u32 FilterPage_GetMaxGridX(void);
static u32 FilterPage_GetMaxGridY(void);
static void FilterPage_ToggleTypeFilter(enum Type);
static bool32 FilterPage_IsTypeFilterActive(enum Type);
static void FilterPage_ToggleCategoryFilter(enum DamageCategory);
static bool32 FilterPage_IsCategoryFilterActive(enum DamageCategory);
static void FilterPage_ToggleMethodFilter(enum MovePoolMethods);
static bool32 FilterPage_IsMethodFilterActive(enum MovePoolMethods);
static void FilterPage_UpdateFrontEnd(void);
static void FilterPage_PrintType(void);
static void FilterPage_PrintCategory(void);
static void FilterPage_PrintMethod(void);
static void FilterPage_PrintOption(void);
static void FilterPage_PrintCursor(void);
static u32 FilterPage_ConvertGridPosToTypeIdx(void);

#include "data/ui_move_reminder.h"

void MoveReminder_Init(enum MoveReminderModes mode, MainCallback callback, void *mon, bool32 useBoxMon)
{
    sMoveReminderDataPtr = AllocZeroed(sizeof(struct MoveReminderData));
    if (sMoveReminderDataPtr == NULL)
    {
        SetMainCallback2(callback);
        return;
    }

    MReminderMode_SetValue(mode);
    PageInterface_SetValue(PAGE_INTERFACE_MAIN);
    sMoveReminderDataPtr->target.mon = mon;
    sMoveReminderDataPtr->useBoxMon = useBoxMon;
    sMoveReminderDataPtr->savedCallback = callback;
    MovePool_SetSort(MOVE_POOL_SORT_DEFAULT);

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

    if (MReminderMode_UseBoxMon())
        BoxMonToMon(sMoveReminderDataPtr->target.boxMon, &oldMon);
    else
        CopyMon(&oldMon, sMoveReminderDataPtr->target.mon, sizeof(struct Pokemon));

    struct MoveReminderMon *newMon = &sMoveReminderDataPtr->mon;

    newMon->species = GetMonData(&oldMon, MON_DATA_SPECIES);

    GetMonNickname(&oldMon, newMon->nickname);
    newMon->gender = GetMonGender(&oldMon);
    newMon->level = GetMonData(&oldMon, MON_DATA_LEVEL);

    for (enum Stat stat = 0; stat < NUM_STATS; stat++)
        newMon->stats[stat] = GetMonData(&oldMon, MON_DATA_MAX_HP + stat);

    for (u32 i = 0; i < MAX_MON_MOVES; i++)
    {
        newMon->moves[i] = GetMonData(&oldMon, MON_DATA_MOVE1 + i);
        newMon->PP[i] = CalculatePPWithBonus(newMon->moves[i], GetMonData(&oldMon, MON_DATA_PP_BONUSES), i);
        newMon->remainingPP[i] = GetMonData(&oldMon, MON_DATA_PP1 + i);
    }
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

    LoadCompressedSpriteSheet(&(const struct CompressedSpriteSheet){
        .data = gTypes_Gfx13x11,
        .size = NUMBER_OF_MON_TYPES * (16 * 16),
        .tag = MREMINDER_TAG_TYPE_FILTER
    });

    LoadPalette(gTypes_Palettes, OBJ_PLTT_ID(13), 3 * PLTT_SIZE_4BPP);
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

    // don't update now since we're not in the Filter page by default
    TypeIcon_Init();
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
    u32 spriteId;

    for (u32 i = 0, y = PAGE_MAIN_MOVE_BAR_Y; i < MAX_MREMINDER_BAR_SPRITES + 1; i++, y += PAGE_MAIN_MOVE_BAR_SPACER_Y)
    {
        // reset back for cursor
        if (i == MREMINDER_BAR_SPRITE_ID_CURSOR)
        {
            y = PAGE_MAIN_MOVE_BAR_Y;
            template = &gMonSummary_SlotCursorSpriteTemplate;
        }

        // set subpriority for move bars to be right below the cursor
        spriteId = CreateSprite(template, PAGE_MAIN_MOVE_BAR_X, y, i != MREMINDER_BAR_SPRITE_ID_CURSOR);
        sprite = &gSprites[spriteId];

        sprite->sMoveBar_Idx = i;
        sprite->callback = SpriteCB_MoveBar;
        SetSubspriteTables(sprite, gMonSummary_128x16SubspriteTable);
        MoveBar_SetSpriteId(i, spriteId);
    }

    // cursor
    sprite->oam.paletteNum = IndexOfSpritePaletteTag(MREMINDER_TAG_UNIVERSAL);
    sprite->callback = SpriteCB_MoveCursor;

    // vertical arrows notating the cursor for extra visual clarity
    spriteId = CreateSprite(&gMonSummary_CursorArrowsSpriteTemplate, PAGE_MAIN_MOVE_BAR_ARROWS_X, PAGE_MAIN_MOVE_BAR_ARROWS_Y, 0);
    sprite = &gSprites[spriteId];

    sprite->oam.paletteNum = IndexOfSpritePaletteTag(MREMINDER_TAG_UNIVERSAL);
    sprite->callback = SpriteCB_MoveCursorArrows;
}

static void MoveBar_Update(void)
{
    enum MoveReminderWindows win = MREMINDER_WINDOW_MAIN;

    MovePool_CopySortTitle();

    u32 totalWidth = TILE_TO_PIXELS(10) + 2;
    u32 fontId = GetFontIdToFit(gStringVar1, FONT_OUTLINED, 0, totalWidth);
    u32 offsetX = GetStringCenterAlignXOffsetWithLetterSpacing(fontId, gStringVar1, totalWidth, -1);

    MiscUtil_AddTextPrinter(win, gStringVar1, fontId, PAGE_MAIN_MOVES_LIST_TITLE_X + offsetX, PAGE_MAIN_MOVES_LIST_TITLE_Y, MREMINDER_TXTCLR_DEFAULT);

    bool32 isMain = PageInterface_GetSubValue() == SUBPAGE_INTERFACE_MAIN_DEFAULT;
    if (MovePool_IsAnyFilterActive() && isMain)
        BlitBitmapToWindow(win, sMoveReminder_FilterIndicatorBlit, PAGE_MAIN_MOVES_LIST_FILTER_X, PAGE_MAIN_MOVES_LIST_FILTER_Y, 24, 16);

    if (isMain && !MovePool_GetNumberOfMoves())
    {
        return;
    }

    u32 nameY = PAGE_MAIN_MOVE_BAR_NAME_Y, typeY = PAGE_MAIN_MOVE_BAR_TYPE_Y;

    for (u32 i = 0; i < MAX_MREMINDER_BAR_SPRITES; i++, nameY += PAGE_MAIN_MOVE_BAR_SPACER_Y, typeY += PAGE_MAIN_MOVE_BAR_SPACER_Y)
    {
        if (isMain && i >= MovePool_GetNumberOfMoves())
            break;

        u32 spriteId = MoveBar_GetSpriteId(i);
        struct Sprite *sprite = &gSprites[spriteId];
        enum Move move;

        if (!isMain)
            move = (i == MAX_MON_MOVES) ? sMoveReminderDataPtr->moveToTeach : MiscUtil_GetMon()->moves[i];
        else
            move = MovePool_GetMoveFromList(i + MainPage_GetFirstListIdx());

        enum Type moveType = GetMoveType(move);

        sprite->oam.paletteNum = IndexOfSpritePaletteTag(MoveBar_GetPalTagByType(moveType));
        StartSpriteAnim(sprite, moveType);

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
    if ((PageInterface_GetSubValue() == SUBPAGE_INTERFACE_MAIN_DEFAULT
     && sprite->sMoveBar_Idx >= MovePool_GetNumberOfMoves())
     || PageInterface_GetValue() == PAGE_INTERFACE_FILTER)
    {
        sprite->invisible = TRUE;
        return;
    }

    sprite->invisible = FALSE;
}

static void SpriteCB_MoveCursor(struct Sprite *sprite)
{
    if ((PageInterface_GetSubValue() == SUBPAGE_INTERFACE_MAIN_DEFAULT && !MovePool_GetNumberOfMoves())
     || PageInterface_GetValue() == PAGE_INTERFACE_FILTER)
    {
        sprite->invisible = TRUE;
        return;
    }

    sprite->invisible = FALSE;
    sprite->y2 = PAGE_MAIN_MOVE_BAR_SPACER_Y * MainPage_GetGridListIdx();
}

static void SpriteCB_MoveCursorArrows(struct Sprite *sprite)
{
    if ((PageInterface_GetSubValue() == SUBPAGE_INTERFACE_MAIN_DEFAULT && MovePool_GetNumberOfMoves() <= 1)
     || PageInterface_GetValue() == PAGE_INTERFACE_FILTER)
    {
        sprite->invisible = TRUE;
        return;
    }

    sprite->invisible = FALSE;
    sprite->y2 = PAGE_MAIN_MOVE_BAR_SPACER_Y * MainPage_GetGridListIdx();
}

static void TypeIcon_Init(void)
{
    for (u32 i = 0; i < NUM_TYPE_ICONS; i++)
    {
        s32 x = sMoveReminderFilterPageTypesInfo[i].x, y = sMoveReminderFilterPageTypesInfo[i].y;
        enum Type type = sMoveReminderFilterPageTypesInfo[i].type;

        sMoveReminderDataPtr->typeIcons[i].template = gSpriteTemplate_Type13x11;
        sMoveReminderDataPtr->typeIcons[i].template.tileTag = MREMINDER_TAG_TYPE_FILTER;
        sMoveReminderDataPtr->typeIcons[i].template.paletteTag = TAG_NONE;

        u32 spriteId = CreateSprite(&sMoveReminderDataPtr->typeIcons[i].template, x + 8, y + 8, 0);
        struct Sprite *sprite = &gSprites[spriteId];

        StartSpriteAnim(sprite, type);
        sprite->oam.paletteNum = gTypesInfo[type].palette;
        sprite->callback = SpriteCB_TypeIcon;

        TypeIcon_SetSpriteId(i, spriteId);
    }
}

static void TypeIcon_Update(void)
{
    for (u32 i = 0; i < NUM_TYPE_ICONS; i++)
    {
        enum Type type = sMoveReminderFilterPageTypesInfo[i].type;
        u32 filter = FilterPage_IsTypeFilterActive(type);

        if (!filter)
            continue;

        u32 x = sMoveReminderFilterPageTypesInfo[i].x - 1;
        u32 y = sMoveReminderFilterPageTypesInfo[i].y - 1;

        BlitBitmapToWindow(MREMINDER_WINDOW_MAIN, sMoveReminder_TypeFilterIndicatorBlit, x, y, 16, 16);
    }
}

static void TypeIcon_SetSpriteId(u32 idx, u32 spriteId)
{
    sMoveReminderDataPtr->typeIcons[idx].spriteId = spriteId;
}

static void SpriteCB_TypeIcon(struct Sprite *sprite)
{
    sprite->invisible = PageInterface_GetValue() != PAGE_INTERFACE_FILTER;
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

static bool32 MReminderMode_UseBoxMon(void)
{
    return sMoveReminderDataPtr->useBoxMon;
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
    return PageInterface_GetInfo(page)->helpBarStr[PageInterface_GetSubValue()];
}

static UpdateFrontEndFunc PageInterface_GetUpdateFrontEndFunc(enum PageInterfaces page)
{
    return PageInterface_GetInfo(page)->updateFrontEndFunc;
}

static HandleInputFunc PageInterface_GetHandleInputFunc(enum PageInterfaces page)
{
    return PageInterface_GetInfo(page)->handleInputFunc[PageInterface_GetSubValue()];
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

    if (sMoveReminderDataPtr->printingDialogue)
        str = gText_CancelOverwrite;

    MiscUtil_AddTextPrinter(MREMINDER_WINDOW_MAIN, str, FONT_SMALL,
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

    CopyWindowToVram(MREMINDER_WINDOW_MAIN, COPYWIN_GFX);
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

static enum SubPageInterfaces PageInterface_GetSubValue(void)
{
    return sMoveReminderDataPtr->subPage;
}

static enum SubPageInterfaces PageInterface_SetSubValue(enum SubPageInterfaces subPage)
{
    sMoveReminderDataPtr->subPage = subPage;
    return PageInterface_GetSubValue();
}

static void MovePool_PopulateList(void)
{
    u32 numMoves = 0;
    u32 species = MiscUtil_GetMon()->species;

    MovePool_ProcessLevelUpLearnset(GetSpeciesLevelUpLearnset(species), &numMoves);
    MovePool_ProcessMachineLearnset(species, &numMoves);
    MovePool_ProcessEggLearnset(species, &numMoves);
    MovePool_ProcessMoveCriterias(species, &numMoves);

    /*
    for (u32 i = 0; i < numMoves; i++)
    {
        DebugPrintf("move: %S, method: %d, category: %S, type: %S",
            GetMoveName(MovePool_GetMoveFromIdx(i)),
            MovePool_GetMethodFromIdx(i),
            gDamageCategoryNames[MovePool_GetCategoryFromIdx(i)],
            gTypesInfo[MovePool_GetTypeFromIdx(i)].name);
    }
    */

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

    u32 monLevel = MiscUtil_GetMon()->level;

    while (idx >= 0)
    {
        enum Move move = learnset[idx].move;
        u32 level = learnset[idx].level;

        idx--;

        if (!IsMoveInSilicon(move))
            continue;

        if (monLevel < level)
            continue;

        MovePool_AddMoveToIdx(move, MP_METHOD_LEVEL_UP, numMoves);
    }
}

static void MovePool_ProcessMachineLearnset(u32 species, u32 *numMoves)
{
    for (enum TMHMIndex idx = 0; idx < NUM_TECHNICAL_MACHINES; idx++)
    {
        enum Move move = GetTMHMMoveId(idx);

        if (!CanLearnTeachableMove(species, move))
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

static void MovePool_ProcessEggLearnset(u32 species, u32 *numMoves)
{
    for (enum Move move = MOVE_NONE + 1; move < MOVES_COUNT; move++)
    {
        if (!IsMoveInSilicon(move))
            continue;

        if (!SpeciesCanLearnEggMove(species, move))
            continue;

        u32 existingIdx = MovePool_GetIdxFromMove(move);

        if (existingIdx != MOVE_UNAVAILABLE)
            MovePool_UpdateMethodInIdx(existingIdx, MP_METHOD_EGG);
        else
            MovePool_AddMoveToIdx(move, MP_METHOD_EGG, numMoves);
    }
}

static void MovePool_ProcessMoveCriterias(u32 species, u32 *numMoves)
{
    for (enum Move move = MOVE_NONE + 1; move < MOVES_COUNT; move++)
    {
        MoveCriteriaFunc func = GetMoveCriteriaFunc(move);
        if (!func(move))
            continue;

        if (!CanMonEverLearnMove(species, move))
            continue;

        u32 existingIdx = MovePool_GetIdxFromMove(move);

        // Set as machine method so that its filter-able.
        if (existingIdx != MOVE_UNAVAILABLE)
            MovePool_UpdateMethodInIdx(existingIdx, MP_METHOD_MACHINE);
        else
            MovePool_AddMoveToIdx(move, MP_METHOD_MACHINE, numMoves);
    }
}

static u32 MovePool_GetIdxFromMove(enum Move move)
{
    for (u32 idx = 0; MovePool_GetMoveFromIdx(idx) != MOVE_NONE; idx++)
    {
        if (MovePool_GetMoveFromIdx(idx) == move)
            return idx;
    }

    return MOVE_UNAVAILABLE;
}

static void MovePool_AddMoveToIdx(enum Move move, enum MovePoolMethods method, u32 *numMoves)
{
    MovePool_SetMoveToIdx(*numMoves, move);
    MovePool_SetMethodToIdx(*numMoves, method);
    MovePool_SetCategoryToIdx(*numMoves, GetMoveCategory(move));
    MovePool_SetTypeToIdx(*numMoves, GetMoveType(move));
    (*numMoves)++;
}

static void MovePool_UpdateMethodInIdx(u32 idx, enum MovePoolMethods newMethod)
{
    if (MovePool_IsMethodInIdx(idx, newMethod))
        return;

    MovePool_SetMethodToIdx(idx, newMethod);
}

static void MovePool_SetMoveToIdx(u32 idx, enum Move move)
{
    sMoveReminderDataPtr->movePool[idx].move = move;
}

static u32 MovePool_GetMoveFromIdx(u32 idx)
{
    return sMoveReminderDataPtr->movePool[idx].move;
}

static void MovePool_SetMethodToIdx(u32 idx, enum MovePoolMethods method)
{
    sMoveReminderDataPtr->movePool[idx].method |= (1 << method);
}

static bool32 MovePool_IsMethodInIdx(u32 idx, enum MovePoolMethods method)
{
    return (MovePool_GetMethodFromIdx(idx) & method) != 0;
}

static u32 MovePool_GetMethodFromIdx(u32 idx)
{
    return sMoveReminderDataPtr->movePool[idx].method;
}

static void MovePool_SetCategoryToIdx(u32 idx, enum DamageCategory category)
{
    sMoveReminderDataPtr->movePool[idx].category = category;
}

static enum DamageCategory MovePool_GetCategoryFromIdx(u32 idx)
{
    return sMoveReminderDataPtr->movePool[idx].category;
}

static void MovePool_SetTypeToIdx(u32 idx, enum Type type)
{
    sMoveReminderDataPtr->movePool[idx].type = type;
}

static enum Type MovePool_GetTypeFromIdx(u32 idx)
{
    return sMoveReminderDataPtr->movePool[idx].type;
}

static void MovePool_SetNumberOfMoves(u32 numMoves)
{
    sMoveReminderDataPtr->numMoves = numMoves;
}

static u32 MovePool_GetNumberOfMoves(void)
{
    return sMoveReminderDataPtr->numMoves;
}

static void MovePool_SetMoveToList(u32 idx, enum Move move)
{
    sMoveReminderDataPtr->movesList[idx] = move;
}

static u32 MovePool_GetMoveFromList(u32 idx)
{
    return sMoveReminderDataPtr->movesList[idx];
}

static u32 MovePool_SanitizeTypeFlag(enum Type type)
{
    return type - 1; // exclude TYPE_NONE
}

static bool32 MovePool_DoTypeFilterMatch(enum Type type)
{
    type = MovePool_SanitizeTypeFlag(type);
    if (type == (-1))
        return FALSE;

    return sMoveReminderDataPtr->typeFilter & (1 << type);
}

static bool32 MovePool_DoCategoryFilterMatch(enum DamageCategory category)
{
    return sMoveReminderDataPtr->categoryFilter & (1 << category);
}

static bool32 MovePool_DoMethodFilterMatch(enum MovePoolMethods method)
{
    return sMoveReminderDataPtr->methodFilter & method;
}

static bool32 MovePool_IsAnyFilterActive(void)
{
    u32 score = 0;

    if (sMoveReminderDataPtr->typeFilter)
        score |= MP_FILTER_FLAG_TYPE;

    if (sMoveReminderDataPtr->methodFilter)
        score |= MP_FILTER_FLAG_METHOD;

    if (sMoveReminderDataPtr->categoryFilter)
        score |= MP_FILTER_FLAG_CATEGORY;

    return score;
}

static bool32 MovePool_DoMoveMatchFilter(enum Move move)
{
    u32 idx = MovePool_GetIdxFromMove(move);
    u32 filter = MovePool_IsAnyFilterActive();
    u32 score = 0;

    if (idx == MOVE_UNAVAILABLE)
        return FALSE;

    if (!filter)
        return TRUE;

    if (filter & MP_FILTER_FLAG_TYPE
     && MovePool_DoTypeFilterMatch(MovePool_GetTypeFromIdx(idx)))
    {
        score |= MP_FILTER_FLAG_TYPE;
    }

    if (filter & MP_FILTER_FLAG_CATEGORY
     && MovePool_DoCategoryFilterMatch(MovePool_GetCategoryFromIdx(idx)))
    {
        score |= MP_FILTER_FLAG_CATEGORY;
    }

    if (filter & MP_FILTER_FLAG_METHOD
     && MovePool_DoMethodFilterMatch(MovePool_GetMethodFromIdx(idx)))
    {
        score |= MP_FILTER_FLAG_METHOD;
    }

    if (score == filter)
        return TRUE;

    return FALSE;
}

static void MovePool_SetSort(enum MovePoolSorts sort)
{
    sMoveReminderDataPtr->sort = sort;
}

static enum MovePoolSorts MovePool_GetSort(void)
{
    return sMoveReminderDataPtr->sort;
}

static void MovePool_Sort(void)
{
    MovePoolSortFunc func = MovePool_GetSortFunc();
    u32 numMoves = 0;

    func(&numMoves);
    MovePool_SetNumberOfMoves(numMoves);
}

static const struct MovePoolSortInfo *MovePool_GetSortInfo(enum MovePoolSorts sort)
{
    return &sMovePoolSortInfos[sort];
}

static MovePoolSortFunc MovePool_GetSortFunc(void)
{
    return MovePool_GetSortInfo(MovePool_GetSort())->sortingFunc;
}

static const u8 *MovePool_GetSortTitle(void)
{
    return MovePool_GetSortInfo(MovePool_GetSort())->title;
}

static void MovePool_CopySortTitle(void)
{
    enum MovePoolSorts sort = MovePool_GetSort();
    const u8 *title = MovePool_GetSortTitle();
    u8 *strbuf = gStringVar1;

    if (PageInterface_GetSubValue() != SUBPAGE_INTERFACE_MAIN_DEFAULT)
    {
        StringCopy(strbuf, COMPOUND_STRING("Forget which?"));
        return;
    }

    if (sort == MOVE_POOL_SORT_DEFAULT)
    {
        StringCopy(strbuf, title);
        return;
    }

    StringCopy(strbuf, COMPOUND_STRING("Sort: "));
    StringAppend(strbuf, title);
}

static void MovePoolSort_BasePower(u32 *numMoves)
{
    MovePoolSort_Default(numMoves);
    if (*numMoves <= 1)
        return;

    for (u32 i = 0; i < (*numMoves) - 1; i++)
    {
        for (u32 j = i + 1; j < *numMoves; j++)
        {
            u32 iMove = MovePool_GetMoveFromList(i);
            u32 jMove = MovePool_GetMoveFromList(j);

            if (GetMovePower(iMove) < GetMovePower(jMove))
            {
                MovePool_SetMoveToList(i, jMove);
                MovePool_SetMoveToList(j, iMove);
            }
        }
    }
}

static void MovePoolSort_Accuracy(u32 *numMoves)
{
    MovePoolSort_Default(numMoves);
    if (*numMoves <= 1)
        return;

    for (u32 i = 0; i < (*numMoves) - 1; i++)
    {
        for (u32 j = i + 1; j < *numMoves; j++)
        {
            u32 iMove = MovePool_GetMoveFromList(i);
            u32 jMove = MovePool_GetMoveFromList(j);

            if (GetMoveAccuracy(iMove) < GetMoveAccuracy(jMove))
            {
                MovePool_SetMoveToList(i, jMove);
                MovePool_SetMoveToList(j, iMove);
            }
        }
    }
}

static void MovePoolSort_PP(u32 *numMoves)
{
    MovePoolSort_Default(numMoves);
    if (*numMoves <= 1)
        return;

    for (u32 i = 0; i < (*numMoves) - 1; i++)
    {
        for (u32 j = i + 1; j < *numMoves; j++)
        {
            u32 iMove = MovePool_GetMoveFromList(i);
            u32 jMove = MovePool_GetMoveFromList(j);

            if (GetMovePP(iMove) < GetMovePP(jMove))
            {
                MovePool_SetMoveToList(i, jMove);
                MovePool_SetMoveToList(j, iMove);
            }
        }
    }
}

static void MovePoolSort_Name(u32 *numMoves)
{
    for (u32 idx = 0; idx < MOVES_COUNT; idx++)
    {
        if (*numMoves == UI_MOVES_COUNT_TOTAL)
            break;

        enum Move move = residoMovesAZ[POKEDEX_FILTER_ALPHABET_ALL][idx];
        if (!MovePool_DoMoveMatchFilter(move))
            continue;

        MovePool_SetMoveToList(*numMoves, move);
        (*numMoves)++;
    }
}

static void MovePoolSort_MoveID(u32 *numMoves)
{
    for (enum Move move = MOVE_NONE + 1; move < MOVES_COUNT; move++)
    {
        if (*numMoves == UI_MOVES_COUNT_TOTAL)
            break;

        if (!MovePool_DoMoveMatchFilter(move))
            continue;

        MovePool_SetMoveToList(*numMoves, move);
        (*numMoves)++;
    }
}

static void MovePoolSort_Default(u32 *numMoves)
{
    u32 idx = 0;

    while (idx < UI_MOVES_COUNT_TOTAL)
    {
        enum Move move = MovePool_GetMoveFromIdx(idx);
        if (move == MOVE_NONE)
            break;

        if (MovePool_DoMoveMatchFilter(move))
        {
            MovePool_SetMoveToList(*numMoves, move);
            (*numMoves)++;
        }

        idx++;
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

static struct BoxPokemon *MiscUtil_GetBoxMon(void)
{
    if (MReminderMode_UseBoxMon())
        return sMoveReminderDataPtr->target.boxMon;
    else
        return &sMoveReminderDataPtr->target.mon->box;
}

static void MiscUtil_TeachMove(void)
{
    PlaySE(SE_SUCCESS);

    struct BoxPokemon *boxMon = MiscUtil_GetBoxMon();
    enum Move move = sMoveReminderDataPtr->moveToTeach;
    u32 slot = sMoveReminderDataPtr->moveSlot;

    SetBoxMonData(boxMon, MON_DATA_MOVE1 + slot, &move);

    u32 PP = GetMovePP(move);
    SetBoxMonData(boxMon, MON_DATA_PP1 + slot, &PP);

    u32 bonuses = GetBoxMonData(boxMon, MON_DATA_PP_BONUSES, NULL);
    bonuses &= gPPUpClearMask[slot];
    SetBoxMonData(boxMon, MON_DATA_PP_BONUSES, &bonuses);

    InitSetup_MonData();
}

static void MiscUtil_CancelTeachMove(void)
{
    PlaySE(SE_SELECT);
    MainPage_SetCurrListIdx(0); // resets moveSlot
    PageInterface_SetSubValue(SUBPAGE_INTERFACE_MAIN_DEFAULT);
    sMoveReminderDataPtr->printingDialogue = FALSE;
    PageInterface_UpdateFrontEnd();
}

static void MiscUtil_AddTextPrinter(enum MoveReminderWindows window, const u8 *str, u32 fontId, u32 x, u32 y, enum MoveReminderTextColors color)
{
    AddTextPrinterParameterized4(window, fontId, x, y, 0, 0, sMoveReminderTextColors[color], TEXT_SKIP_DRAW, str);
}

static bool32 MiscUtil_IsInputAdditive(s32 delta)
{
    return delta >= 1;
}

static void MainPage_ChooseMoveToTeach(u8 taskId)
{
    if (JOY_REPEAT(DPAD_UP))
    {
        MainPage_NavigateList(MREMINDER_INPUT_DEC, MREMINDER_INPUT_PM_1);
        return;
    }

    if (JOY_REPEAT(DPAD_LEFT))
    {
        MainPage_NavigateList(MREMINDER_INPUT_DEC, MREMINDER_INPUT_PM_5);
        return;
    }

    if (JOY_REPEAT(DPAD_DOWN))
    {
        MainPage_NavigateList(MREMINDER_INPUT_INC, MREMINDER_INPUT_PM_1);
        return;
    }

    if (JOY_REPEAT(DPAD_RIGHT))
    {
        MainPage_NavigateList(MREMINDER_INPUT_INC, MREMINDER_INPUT_PM_5);
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
        if (!MovePool_GetNumberOfMoves())
        {
            PlaySE(SE_FAILURE);
            return;
        }

        enum Move move = MovePool_GetMoveFromList(MainPage_GetCurrListIdx());
        sMoveReminderDataPtr->moveToTeach = move;

        struct BoxPokemon *boxMon = MiscUtil_GetBoxMon();

        StringCopy_Nickname(gStringVar1, MiscUtil_GetMon()->nickname);
        StringCopy(gStringVar2, GetMoveName(move));

        u32 moveStatus = GiveMoveToBoxMon(boxMon, move);

        switch (moveStatus)
        {
        case MON_ALREADY_KNOWS_MOVE:
            PlaySE(SE_FAILURE);
            MainPage_PrepareDialogue(COMPOUND_STRING(
                "{STR_VAR_1} already know {STR_VAR_2}!"));
            break;
        case MON_HAS_MAX_MOVES:
            PlaySE(SE_SELECT);
            sMoveReminderDataPtr->moveSlot = 0;
            PageInterface_SetSubValue(SUBPAGE_INTERFACE_MAIN_CHOOSE_MOVE);
            break;
        default:
            PlaySE(SE_SUCCESS);
            MainPage_PrepareDialogue(COMPOUND_STRING(
                "{STR_VAR_1} learns {STR_VAR_2}!"));
            InitSetup_MonData();
            break;
        }

        PageInterface_UpdateFrontEnd();
        if (moveStatus == MON_HAS_MAX_MOVES) return;

        SetTaskFuncWithFollowupFunc(taskId, MainPage_WaitCloseMessage, Task_MReminderInput_Main);
        return;
    }

    if (JOY_NEW(START_BUTTON))
    {
        if (!MovePool_GetNumberOfMoves())
        {
            PlaySE(SE_FAILURE);
            return;
        }

        enum MovePoolSorts sort = MovePool_GetSort();

        if (sort == (NUM_MOVE_POOL_SORTS - 1))
            MovePool_SetSort(0);
        else
            MovePool_SetSort(sort + 1);

        MovePool_Sort();
        PlaySE(SE_SUCCESS);
        MainPage_ResetListIdx();
        PageInterface_UpdateFrontEnd();
        return;
    }

    if (JOY_NEW(SELECT_BUTTON))
    {
        PlaySE(SE_SELECT);
        FilterPage_Init();
        return;
    }
}

static void MainPage_ChooseMoveToForget(u8 taskId)
{
    if (JOY_NEW(DPAD_UP))
    {
        MainPage_NavigateList(MREMINDER_INPUT_DEC, MREMINDER_INPUT_PM_1);
        return;
    }

    if (JOY_NEW(DPAD_DOWN))
    {
        MainPage_NavigateList(MREMINDER_INPUT_INC, MREMINDER_INPUT_PM_1);
        return;
    }

    if (JOY_NEW(A_BUTTON))
    {
        if (MainPage_GetCurrListIdx() == MAX_MON_MOVES)
        {
            MiscUtil_CancelTeachMove();
            return;
        }

        struct MoveReminderMon *mon = MiscUtil_GetMon();
        u32 moveSlot = MainPage_GetCurrListIdx();

        StringCopy_Nickname(gStringVar1, mon->nickname);
        StringCopy(gStringVar2, GetMoveName(mon->moves[moveSlot]));
        StringCopy(gStringVar3, GetMoveName(sMoveReminderDataPtr->moveToTeach));
        MainPage_PrepareDialogue(COMPOUND_STRING(
            "{STR_VAR_1} forgot {STR_VAR_2} and learned {STR_VAR_3}!"));
        PageInterface_UpdateFrontEnd();

        MiscUtil_TeachMove();
        SetTaskFuncWithFollowupFunc(taskId, MainPage_WaitCloseMessage, Task_MReminderInput_Main);
        return;
    }

    if (JOY_NEW(B_BUTTON))
    {
        MiscUtil_CancelTeachMove();
        return;
    }
}

static void MainPage_WaitCloseMessage(u8 taskId)
{
    #define PROGRESS_BUTTONS (A_BUTTON | B_BUTTON | L_BUTTON | R_BUTTON | START_BUTTON | SELECT_BUTTON)
    if (JOY_NEW(PROGRESS_BUTTONS))
    {
        PageInterface_SetSubValue(SUBPAGE_INTERFACE_MAIN_DEFAULT);
        sMoveReminderDataPtr->printingDialogue = FALSE;
        PageInterface_UpdateFrontEnd();
        SwitchTaskToFollowupFunc(taskId);
        return;
    }
    #undef PROGRESS_BUTTONS
}

static void MainPage_ResetListIdx(void)
{
    MainPage_SetCurrListIdx(0);
    MainPage_SetFirstListIdx(0);
    MainPage_SetGridListIdx(0);
}

static void MainPage_NavigateList(s32 delta, u32 count)
{
    if (!MovePool_GetNumberOfMoves())
    {
        PlaySE(SE_FAILURE);
        return;
    }

    u32 currListIdx = MainPage_GetCurrListIdx();

    for (u32 i = 0; i < count; i++)
        MainPage_UpdateListIdx(delta);

    if (currListIdx == MainPage_GetCurrListIdx())
        return;

    PlaySE(SE_RG_BAG_CURSOR);
    PageInterface_UpdateFrontEnd();
}

static void MainPage_UpdateListIdx(s32 delta)
{
    bool32 isAdditive = MiscUtil_IsInputAdditive(delta);
    u32 numItems = MainPage_GetNumberOfItems();
    u32 halfScreen = MAX_MREMINDER_BAR_SPRITES / 2;
    bool32 scroll = (numItems + 1) > MAX_MREMINDER_BAR_SPRITES;
    u32 finalHalfScreen = numItems - halfScreen;
    s32 currListIdx = MainPage_GetCurrListIdx();
    s32 firstListIdx = MainPage_GetFirstListIdx();
    u32 gridListIdx = MainPage_GetGridListIdx();

    if (((currListIdx >= halfScreen && currListIdx < finalHalfScreen && isAdditive)
        || (currListIdx > halfScreen && currListIdx <= finalHalfScreen && !isAdditive))
        && scroll)
    {
        currListIdx += delta;
        firstListIdx += delta;
        gridListIdx = halfScreen;
    }
    else if (currListIdx >= numItems && isAdditive)
    {
        currListIdx = 0;
        firstListIdx = 0;
        gridListIdx = 0;
    }
    else if (!currListIdx && !isAdditive)
    {
        currListIdx = numItems;

        if (scroll)
            firstListIdx = numItems - (MAX_MREMINDER_BAR_SPRITES - 1);

        if (numItems >= (MAX_MREMINDER_BAR_SPRITES - 1))
            gridListIdx = MAX_MREMINDER_BAR_SPRITES - 1;
        else
            gridListIdx = numItems;
    }
    else
    {
        currListIdx += delta;
        gridListIdx += delta;
    }

    MainPage_SetCurrListIdx(currListIdx);
    MainPage_SetFirstListIdx(firstListIdx);
    MainPage_SetGridListIdx(gridListIdx);
}

static u32 MainPage_GetNumberOfItems(void)
{
    switch (PageInterface_GetSubValue())
    {
    default:
        return MAX_MON_MOVES;
    case SUBPAGE_INTERFACE_MAIN_DEFAULT:
        return MovePool_GetNumberOfMoves() - 1;
    }
}

static void MainPage_SetCurrListIdx(u32 idx)
{
    switch (PageInterface_GetSubValue())
    {
    default:
        sMoveReminderDataPtr->moveSlot = idx;
        break;
    case SUBPAGE_INTERFACE_MAIN_DEFAULT:
        sMoveReminderDataPtr->currListIdx = idx;
        break;
    }
}

static u32 MainPage_GetCurrListIdx(void)
{
    switch (PageInterface_GetSubValue())
    {
    default:
        return sMoveReminderDataPtr->moveSlot;
    case SUBPAGE_INTERFACE_MAIN_DEFAULT:
        return sMoveReminderDataPtr->currListIdx;
    }
}

static void MainPage_SetFirstListIdx(u32 idx)
{
    switch (PageInterface_GetSubValue())
    {
    default:
        return;
    case SUBPAGE_INTERFACE_MAIN_DEFAULT:
        sMoveReminderDataPtr->firstListIdx = idx;
        break;
    }
}

static u32 MainPage_GetFirstListIdx(void)
{
    switch (PageInterface_GetSubValue())
    {
    default:
        return 0;
    case SUBPAGE_INTERFACE_MAIN_DEFAULT:
        return sMoveReminderDataPtr->firstListIdx;
    }
}

static void MainPage_SetGridListIdx(u32 idx)
{
    switch (PageInterface_GetSubValue())
    {
    default:
        return;
    case SUBPAGE_INTERFACE_MAIN_DEFAULT:
        sMoveReminderDataPtr->gridListIdx = idx;
        break;
    }
}

static u32 MainPage_GetGridListIdx(void)
{
    switch (PageInterface_GetSubValue())
    {
    default:
        return sMoveReminderDataPtr->moveSlot;
    case SUBPAGE_INTERFACE_MAIN_DEFAULT:
        return sMoveReminderDataPtr->gridListIdx;
    }
}

static void MainPage_UpdateFrontEnd(void)
{
    struct MoveReminderMon *mon = MiscUtil_GetMon();

    MiscUtil_AddTextPrinter(MREMINDER_WINDOW_MAIN, mon->nickname, FONT_OUTLINED, 2, 0, MREMINDER_TXTCLR_DEFAULT);
    MainPage_PrintMonGender();
    MainPage_PrintMonLevel();
    MainPage_PrintMonStats();

    enum Move move;
    u32 currListIdx = MainPage_GetCurrListIdx();

    if (PageInterface_GetSubValue() != SUBPAGE_INTERFACE_MAIN_DEFAULT)
        move = (currListIdx == MAX_MON_MOVES) ? sMoveReminderDataPtr->moveToTeach : MiscUtil_GetMon()->moves[currListIdx];
    else
        move = MovePool_GetMoveFromList(currListIdx);

    MainPage_PrintTextBox(move);
    MainPage_PrintMoveSummary(move);

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
    StringExpandPlaceholders(gStringVar2, COMPOUND_STRING("{SHADOW 13}{LV}{SHADOW 1}{STR_VAR_1}"));
    MiscUtil_AddTextPrinter(MREMINDER_WINDOW_MAIN, gStringVar2, FONT_OUTLINED, 82, 0, MREMINDER_TXTCLR_DEFAULT);
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

static void MainPage_PrintTextBox(enum Move move)
{
    u32 scrollPrompt = SHOW_SCROLL_PROMPT;
    u32 maxWidth = TILE_TO_PIXELS(18);

    if (!sMoveReminderDataPtr->printingDialogue)
    {
        if (!MovePool_GetNumberOfMoves())
            StringCopy(gStringVar4, COMPOUND_STRING("No moves to teach can be found."));
        else
            StringCopy(gStringVar4, GetMoveDescription(move));

        scrollPrompt = HIDE_SCROLL_PROMPT;
        maxWidth = TILE_TO_PIXELS(28);
    }

    StripLineBreaks(gStringVar4);
    BreakStringAutomatic(gStringVar4, maxWidth, 3, FONT_SMALL, scrollPrompt);

    MiscUtil_AddTextPrinter(MREMINDER_WINDOW_MAIN,
        gStringVar4, FONT_SMALL,
        PAGE_MAIN_MOVE_DETAILS_DESC_X, PAGE_MAIN_MOVE_DETAILS_DESC_Y,
        MREMINDER_TXTCLR_TEXT_BOX);
}

static void MainPage_PrepareDialogue(const u8 *dialogue)
{
    StringExpandPlaceholders(gStringVar4, dialogue);
    sMoveReminderDataPtr->printingDialogue = TRUE;
}

static void MainPage_PrintMoveSummary(enum Move move)
{
    u32 PP = 0, remainingPP = 0;

    if (PageInterface_GetSubValue() != SUBPAGE_INTERFACE_MAIN_DEFAULT)
    {
        u32 moveSlot = MainPage_GetCurrListIdx();
        if (moveSlot == MAX_MON_MOVES)
        {
            move = sMoveReminderDataPtr->moveToTeach;
            PP = GetMovePP(move);
            remainingPP = PP;
        }
        else
        {
            PP = MiscUtil_GetMon()->PP[moveSlot];
            remainingPP = MiscUtil_GetMon()->remainingPP[moveSlot];
        }
    }
    else if (!MovePool_GetNumberOfMoves())
    {
        move = MOVE_NONE;
    }
    else
    {
        PP = GetMovePP(move);
        remainingPP = PP;
    }

    MainPage_PrintMovePP(PP, remainingPP);
    MainPage_PrintMoveCategory(move);
    MainPage_PrintMovePower(move);
    MainPage_PrintMoveAccuracy(move);
}

static void MainPage_PrintMovePP(u32 pp, u32 remainingPP)
{
    if (pp == 0)
    {
        StringCopy(gStringVar1, gText_TwoDashes);
        StringCopy(gStringVar2, gText_TwoDashes);
    }
    else
    {
        ConvertUIntToDecimalStringN(gStringVar1, remainingPP,   STR_CONV_MODE_RIGHT_ALIGN, MAX_DIGITS(99));
        ConvertUIntToDecimalStringN(gStringVar2, pp,            STR_CONV_MODE_LEFT_ALIGN, MAX_DIGITS(99));
    }

    StringExpandPlaceholders(gStringVar3, COMPOUND_STRING("PP: {STR_VAR_1}/{STR_VAR_2}"));
    MiscUtil_AddTextPrinter(MREMINDER_WINDOW_MAIN, gStringVar3, FONT_SMALL,
        PAGE_MAIN_MOVE_DETAILS_1_X, PAGE_MAIN_MOVE_DETAILS_1_Y, MREMINDER_TXTCLR_TEXT_BOX);
}

static void MainPage_PrintMoveCategory(enum Move move)
{
    enum DamageCategory category;
    const u8 *str;

    if (move != MOVE_NONE)
    {
        category = GetMoveCategory(move);
        str = GetMoveCategoryName(move);
    }
    else
    {
        str = gText_ThreeDashes;
    }

    u32 fontId = GetFontIdToFit(str, FONT_SMALL, 0, TILE_TO_PIXELS(4));
    MiscUtil_AddTextPrinter(MREMINDER_WINDOW_MAIN, str, fontId, PAGE_MAIN_MOVE_DETAILS_1_X, PAGE_MAIN_MOVE_DETAILS_2_Y, MREMINDER_TXTCLR_TEXT_BOX);
    if (move == MOVE_NONE) return;

    BlitBitmapRectToWindow(MREMINDER_WINDOW_MAIN, sMoveReminder_CategoriesBlit,
        0, category * 16,
        16, 16 * DAMAGE_CATEGORY_COUNT,
        PAGE_MAIN_MOVE_DETAILS_CAT_X, PAGE_MAIN_MOVE_DETAILS_CAT_Y,
        11, 9);
}

static void MainPage_PrintMovePower(enum Move move)
{
    u32 pwr = GetMovePower(move);

    if (pwr > 1)
        ConvertUIntToDecimalStringN(gStringVar1, pwr, STR_CONV_MODE_LEFT_ALIGN, MAX_DIGITS(255));
    else
        StringCopy(gStringVar1, gText_ThreeDashes);

    StringExpandPlaceholders(gStringVar2, COMPOUND_STRING("PWR: {STR_VAR_1}"));

    MiscUtil_AddTextPrinter(MREMINDER_WINDOW_MAIN, gStringVar2, FONT_SMALL, PAGE_MAIN_MOVE_DETAILS_2_X, PAGE_MAIN_MOVE_DETAILS_1_Y, MREMINDER_TXTCLR_TEXT_BOX);
}

static void MainPage_PrintMoveAccuracy(enum Move move)
{
    u32 accuracy = GetMoveAccuracy(move);

    if (accuracy > 0)
        ConvertUIntToDecimalStringN(gStringVar1, accuracy, STR_CONV_MODE_LEFT_ALIGN, MAX_DIGITS(255));
    else
        StringCopy(gStringVar1, gText_ThreeDashes);

    StringExpandPlaceholders(gStringVar2, COMPOUND_STRING("ACC: {STR_VAR_1}"));

    MiscUtil_AddTextPrinter(MREMINDER_WINDOW_MAIN, gStringVar2, FONT_SMALL, PAGE_MAIN_MOVE_DETAILS_2_X, PAGE_MAIN_MOVE_DETAILS_2_Y, MREMINDER_TXTCLR_TEXT_BOX);
}

static void FilterPage_Init(void)
{
    sMoveReminderDataPtr->filterPage.typeFilter = sMoveReminderDataPtr->typeFilter;
    sMoveReminderDataPtr->filterPage.categoryFilter = sMoveReminderDataPtr->categoryFilter;
    sMoveReminderDataPtr->filterPage.methodFilter = sMoveReminderDataPtr->methodFilter;

    FilterPage_SetGridX(0);
    FilterPage_SetGridY(0);

    PageInterface_SetValue(PAGE_INTERFACE_FILTER);
    PageInterface_UpdateFrontEnd();
}

static void FilterPage_Reset(void)
{
    sMoveReminderDataPtr->filterPage.typeFilter = 0;
    sMoveReminderDataPtr->filterPage.categoryFilter = 0;
    sMoveReminderDataPtr->filterPage.methodFilter = 0;
}

static void FilterPage_Save(void)
{
   sMoveReminderDataPtr->typeFilter = sMoveReminderDataPtr->filterPage.typeFilter;
   sMoveReminderDataPtr->categoryFilter = sMoveReminderDataPtr->filterPage.categoryFilter;
   sMoveReminderDataPtr->methodFilter = sMoveReminderDataPtr->filterPage.methodFilter;

   MovePool_Sort();
   MainPage_ResetListIdx();
   PageInterface_SetValue(PAGE_INTERFACE_MAIN);
}

static void FilterPage_HandleInput(u8 taskId)
{
    if (JOY_REPEAT(DPAD_DOWN))
    {
        FilterPage_NavigateGrid(0, MREMINDER_INPUT_INC);
        return;
    }

    if (JOY_REPEAT(DPAD_UP))
    {
        FilterPage_NavigateGrid(0, MREMINDER_INPUT_DEC);
        return;
    }

    if (JOY_REPEAT(DPAD_RIGHT))
    {
        FilterPage_NavigateGrid(MREMINDER_INPUT_INC, 0);
        return;
    }

    if (JOY_REPEAT(DPAD_LEFT))
    {
        FilterPage_NavigateGrid(MREMINDER_INPUT_DEC, 0);
        return;
    }

    if (JOY_NEW(B_BUTTON))
    {
        FilterPage_Save();
        PlaySE(SE_SUCCESS);
        PageInterface_UpdateFrontEnd();
        return;
    }

    if (JOY_NEW(A_BUTTON))
    {
        switch (FilterPage_GetGridY())
        {
        case FILTER_GRID_Y_TYPE_1:
        case FILTER_GRID_Y_TYPE_2:
            u32 idx = FilterPage_ConvertGridPosToTypeIdx();
            enum Type type = sMoveReminderFilterPageTypesInfo[idx].type;
            FilterPage_ToggleTypeFilter(type);
            break;
        case FILTER_GRID_Y_CATEGORY:
            FilterPage_ToggleCategoryFilter(FilterPage_GetGridX());
            break;
        case FILTER_GRID_Y_METHOD:
            FilterPage_ToggleMethodFilter(FilterPage_GetGridX());
            break;
        case FILTER_GRID_Y_OPTIONS:
            if (FilterPage_GetGridX())
                FilterPage_Save();
            else
                FilterPage_Reset();
            PlaySE(SE_SUCCESS);
            PageInterface_UpdateFrontEnd();
            return;
        default:
            return;
        }

        PlaySE(SE_SELECT);
        PageInterface_UpdateFrontEnd();
        return;
    }

    if (JOY_NEW(SELECT_BUTTON))
    {
        PlaySE(SE_SUCCESS);
        FilterPage_Reset();
        PageInterface_UpdateFrontEnd();
        return;
    }
}

static void FilterPage_NavigateGrid(s32 deltaX, s32 deltaY)
{
    if (deltaX != 0)
        FilterPage_UpdateGridX(deltaX);

    if (deltaY != 0)
        FilterPage_UpdateGridY(deltaY);

    PlaySE(SE_RG_BAG_CURSOR);
    PageInterface_UpdateFrontEnd();
}

static void FilterPage_UpdateGridX(s32 delta)
{
    bool32 isAdditive = MiscUtil_IsInputAdditive(delta);
    u32 maxGrid = FilterPage_GetMaxGridX();
    u32 gridIdx = FilterPage_GetGridX();

    if (gridIdx >= maxGrid && isAdditive)
        gridIdx = 0;
    else if (!gridIdx && !isAdditive)
        gridIdx = maxGrid;
    else
        gridIdx += delta;

    FilterPage_SetGridX(gridIdx);
}

static void FilterPage_UpdateGridY(s32 delta)
{
    bool32 isAdditive = MiscUtil_IsInputAdditive(delta);
    u32 maxGrid = FilterPage_GetMaxGridY();
    u32 gridIdx = FilterPage_GetGridY();

    if (gridIdx >= maxGrid && isAdditive)
        gridIdx = 0;
    else if (!gridIdx && !isAdditive)
        gridIdx = maxGrid;
    else
        gridIdx += delta;

    FilterPage_SetGridY(gridIdx);
    FilterPage_FixGridX();
}

static void FilterPage_FixGridX(void)
{
    u32 maxGrid = FilterPage_GetMaxGridX();
    u32 gridIdx = FilterPage_GetGridX();

    while (gridIdx > maxGrid)
        gridIdx--;

    FilterPage_SetGridX(gridIdx);
}

static void FilterPage_SetGridX(u32 x)
{
    sMoveReminderDataPtr->filterPage.gridX = x;
}

static u32 FilterPage_GetGridX(void)
{
    return sMoveReminderDataPtr->filterPage.gridX;
}

static void FilterPage_SetGridY(u32 y)
{
    sMoveReminderDataPtr->filterPage.gridY = y;
}

static u32 FilterPage_GetGridY(void)
{
    return sMoveReminderDataPtr->filterPage.gridY;
}

static u32 FilterPage_GetMaxGridX(void)
{
    switch (FilterPage_GetGridY())
    {
    case FILTER_GRID_Y_TYPE_1:
    case FILTER_GRID_Y_TYPE_2:
        return FILTER_GRID_X_8;
    case FILTER_GRID_Y_OPTIONS:
        return FILTER_GRID_X_1;
    default:
        return FILTER_GRID_X_2;
    }
}

static u32 FilterPage_GetMaxGridY(void)
{
    return MAX_FILTER_GRID_Y;
}

static void FilterPage_ToggleTypeFilter(enum Type type)
{
    type = MovePool_SanitizeTypeFlag(type);
    if (type == (-1))
        return;

    sMoveReminderDataPtr->filterPage.typeFilter ^= (1 << type);
}

static bool32 FilterPage_IsTypeFilterActive(enum Type type)
{
    type = MovePool_SanitizeTypeFlag(type);
    if (type == (-1))
        return FALSE;

    return sMoveReminderDataPtr->filterPage.typeFilter & (1 << type);
}

static void FilterPage_ToggleCategoryFilter(enum DamageCategory category)
{
    sMoveReminderDataPtr->filterPage.categoryFilter ^= (1 << category);
}

static bool32 FilterPage_IsCategoryFilterActive(enum DamageCategory category)
{
    return sMoveReminderDataPtr->filterPage.categoryFilter & (1 << category);
}

static void FilterPage_ToggleMethodFilter(enum MovePoolMethods method)
{
    sMoveReminderDataPtr->filterPage.methodFilter ^= (1 << method);
}

static bool32 FilterPage_IsMethodFilterActive(enum MovePoolMethods method)
{
    return sMoveReminderDataPtr->filterPage.methodFilter & (1 << method);
}

static void FilterPage_UpdateFrontEnd(void)
{
    MiscUtil_AddTextPrinter(MREMINDER_WINDOW_MAIN,
        COMPOUND_STRING("Filter Mode"), FONT_OUTLINED,
        PAGE_FILTER_HEADER_MODE_X, PAGE_FILTER_HEADER_Y,
        MREMINDER_TXTCLR_DEFAULT);

    FilterPage_PrintType();
    FilterPage_PrintCategory();
    FilterPage_PrintMethod();
    FilterPage_PrintOption();
    FilterPage_PrintCursor();
}

static void FilterPage_PrintType(void)
{
    MiscUtil_AddTextPrinter(MREMINDER_WINDOW_MAIN,
        COMPOUND_STRING("Type"), FONT_OUTLINED,
        PAGE_FILTER_HEADER_X, PAGE_FILTER_HEADER_TYPE_Y,
        MREMINDER_TXTCLR_DEFAULT);

    TypeIcon_Update();
}

static void FilterPage_PrintCategory(void)
{
    MiscUtil_AddTextPrinter(MREMINDER_WINDOW_MAIN,
        COMPOUND_STRING("Classification"), FONT_OUTLINED,
        PAGE_FILTER_HEADER_X, PAGE_FILTER_HEADER_CLASSIFICATION_Y,
        MREMINDER_TXTCLR_DEFAULT);

    u32 x = PAGE_FILTER_CLASSIFICATION_BASE_X, y = PAGE_FILTER_CLASSIFICATION_BASE_Y;
    for (enum DamageCategory category = 0; category < DAMAGE_CATEGORY_COUNT; category++)
    {
        bool32 filter = FilterPage_IsCategoryFilterActive(category);
        enum MoveReminderTextColors txtClr = filter ? MREMINDER_TXTCLR_FILTER : MREMINDER_TXTCLR_DEFAULT;

        MiscUtil_AddTextPrinter(MREMINDER_WINDOW_MAIN, gDamageCategoryNames[category], FONT_OUTLINED, x, y, txtClr);

        x += PAGE_FILTER_CLASSIFICATION_BASE_PADDING;
        if (category) x += category;
    }
}

static void FilterPage_PrintMethod(void)
{
    MiscUtil_AddTextPrinter(MREMINDER_WINDOW_MAIN,
        COMPOUND_STRING("Method"), FONT_OUTLINED,
        PAGE_FILTER_HEADER_X, PAGE_FILTER_HEADER_METHOD_Y,
        MREMINDER_TXTCLR_DEFAULT);

    u32 x = PAGE_FILTER_METHOD_BASE_X, y = PAGE_FILTER_METHOD_BASE_Y;
    for (enum MovePoolMethods method = 0; method < NUM_MP_METHODS; method++)
    {
        bool32 filter = FilterPage_IsMethodFilterActive(method);
        enum MoveReminderTextColors txtClr = filter ? MREMINDER_TXTCLR_FILTER : MREMINDER_TXTCLR_DEFAULT;

        MiscUtil_AddTextPrinter(MREMINDER_WINDOW_MAIN, sFilterPageMethodNames[method], FONT_OUTLINED, x, y, txtClr);

        x += PAGE_FILTER_METHOD_BASE_PADDING;
        if (method) x += PAGE_FILTER_METHOD_BASE_PADDING2;
    }
}

static void FilterPage_PrintOption(void)
{
    MiscUtil_AddTextPrinter(MREMINDER_WINDOW_MAIN,
        COMPOUND_STRING("Reset"), FONT_OUTLINED,
        PAGE_FILTER_OPTION_RESET_X, PAGE_FILTER_OPTION_Y,
        MREMINDER_TXTCLR_DEFAULT);

    MiscUtil_AddTextPrinter(MREMINDER_WINDOW_MAIN,
        COMPOUND_STRING("OK"), FONT_OUTLINED,
        PAGE_FILTER_OPTION_OK_X, PAGE_FILTER_OPTION_Y,
        MREMINDER_TXTCLR_DEFAULT);
}

static void FilterPage_PrintCursor(void)
{
    u32 x, y;

    switch (FilterPage_GetGridY())
    {
    case FILTER_GRID_Y_TYPE_1:
    case FILTER_GRID_Y_TYPE_2:
        u32 idx = FilterPage_ConvertGridPosToTypeIdx();
        x = sMoveReminderFilterPageTypesInfo[idx].x - PAGE_FILTER_CURSOR_TYPE_OFFSET_X;
        y = sMoveReminderFilterPageTypesInfo[idx].y - PAGE_FILTER_CURSOR_TYPE_OFFSET_Y;
        break;
    case FILTER_GRID_Y_CATEGORY:
        u32 gridX = FilterPage_GetGridX();
        x = PAGE_FILTER_CURSOR_CLASSIFICATION_BASE_X + (PAGE_FILTER_CURSOR_CLASSIFICATION_PADDING * gridX);
        if (gridX)
            x += gridX - 1;
        y = PAGE_FILTER_CURSOR_CLASSIFICATION_Y;
        break;
    case FILTER_GRID_Y_METHOD:
        switch (FilterPage_GetGridX())
        {
        default:
        case MP_METHOD_EGG:
            x = PAGE_FILTER_CURSOR_METHOD_EGG_X;
            break;
        case MP_METHOD_MACHINE:
            x = PAGE_FILTER_CURSOR_METHOD_MACHINE_X;
            break;
        case MP_METHOD_LEVEL_UP:
            x = PAGE_FILTER_CURSOR_METHOD_LEVEL_X;
            break;
        }
        y = PAGE_FILTER_CURSOR_METHOD_Y;
        break;
    case FILTER_GRID_Y_OPTIONS:
        if (FilterPage_GetGridX())
            x = PAGE_FILTER_CURSOR_OPTION_OK_X;
        else
            x = PAGE_FILTER_CURSOR_OPTION_RESET_X;
        y = PAGE_FILTER_CURSOR_OPTION_Y;
        break;
    default:
        return;
    }

    BlitBitmapToWindow(MREMINDER_WINDOW_MAIN, sMoveReminder_FilterCursorBlit, x, y, 16, 16);
}

static u32 FilterPage_ConvertGridPosToTypeIdx(void)
{
    return FilterPage_GetGridX() + (FilterPage_GetGridY() == FILTER_GRID_Y_TYPE_2 ? NUM_FILTER_GRID_X : 0);
}

bool32 MoveCriteria_ByNothing(enum Move move)
{
    return FALSE;
}

bool32 MoveCriteria_ByQuestId(enum Move move)
{
    union MoveCriteriaGoal goal = GetMoveCriteriaGoal(move);
    if (ReturnQuestState(goal.quest.id) == goal.quest.state)
        return TRUE;

    return FALSE;
}
