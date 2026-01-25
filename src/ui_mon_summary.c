#include "global.h"
#include "main.h"
#include "battle_main.h"
#include "battle_anim.h"
#include "text.h"
#include "bg.h"
#include "pokemon.h"
#include "window.h"
#include "sprite.h"
#include "gpu_regs.h"
#include "string_util.h"
#include "international_string_util.h"
#include "decompress.h"
#include "scanline_effect.h"
#include "sound.h"
#include "palette.h"
#include "task.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "text_window.h"
#include "overworld.h"
#include "pokemon_icon.h"
#include "graphics.h"
#include "data.h"
#include "pokedex.h"
#include "strings.h"
#include "party_menu.h"
#include "tv.h"
#include "item.h"
#include "region_map.h"
#include "color_variation.h"
#include "item_icon.h"
#include "pokeball.h"
#include "line_break.h"
#include "ui_mon_summary.h"
#include "constants/ui_mon_summary.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/party_menu.h"

// ram
static EWRAM_DATA struct MonSummaryResources *sMonSummaryDataPtr = NULL;

// declarations
static void MonSummary_FreeResources(void);
static void CB2_MonSummary(void);
static void VBlankCB_MonSummary(void);
static void Task_MonSummary_WaitFadeAndExit(u8);

static void SummarySetup_Backgrounds(void);
static void SummarySetup_Graphics(void);
static void SummarySetup_Sprites(void);
static void SummarySetup_Windows(void);
static void CB2_SummarySetup(void);
static void Task_SummarySetup_WaitFade(u8);

static void SummaryInput_UpdatePage(s32);
static void SummaryInput_UpdateMon(s32);
static void SummaryInput_SetIndex(u32);
static u32 SummaryInput_GetIndex(void);
static void SummaryInput_SetTotalIndex(u32);
static u32 SummaryInput_GetTotalIndex(void);
static void SummaryInput_SetSubMode(u32);
static u32 SummaryInput_IsWithinSubMode(void);
static void SummaryInput_SetUpdateText(bool32);
static bool32 SummaryInput_GetUpdateText(void);
static bool32 SummaryInput_IsInputAdditive(s32);
static void Task_SummaryInput_InfosInput(u8);
static void Task_SummaryInput_StatsInput(u8);
static void Task_SummaryInput_MovesInput(u8);
static void Task_SummaryInput_MovesOptionInput(u8);
static void Task_SummaryInput_MovesForgetInput(u8, s32);
static void SummaryInput_TryReorderMoves(void);
static void SummaryInput_TryStartReorderMode(void);

static void SummaryMon_SetStruct(void);
static struct MonSummary *SummaryMon_GetStruct(void);
static void SummaryMon_CopyCurrentRawMon(void);
static void SummaryMon_GetNatureFlavors(u8 *);

static void SummaryMode_SetValue(enum MonSummaryModes);
static enum MonSummaryModes SummaryMode_GetValue(void);
static TaskFunc SummaryMode_GetInputFunc(enum MonSummaryModes);
static void *SummaryPage_GetHandleFrontEndFunc(enum MonSummaryPages);
static void *SummaryPage_GetHandleUpdateTextFunc(enum MonSummaryPages);
static const u8 *SummaryPage_GetHelpBarText(enum MonSummaryPages);
static void Task_SummaryMode_DefaultInput(u8);

static void SummaryPage_SetValue(enum MonSummaryPages);
static enum MonSummaryPages SummaryPage_GetValue(void);
static void SummaryPage_TogglePageSlot(void);
static u32 SummaryPage_GetPageSlot(void);
static const struct MonSummaryPageInfo *SummaryPage_GetInfo(enum MonSummaryPages);
static const u8 *SummaryPage_GetName(enum MonSummaryPages);
static const u32 *SummaryPage_GetTilemap(enum MonSummaryPages);
static struct Coords8 SummaryPage_GetMainSpriteCoords(enum MonSummaryPages, enum MonSummaryMainSprites);
static TaskFunc SummaryPage_GetInputFunc(enum MonSummaryPages);
static void SummaryPage_UnloadDynamicSprites(void);
static void SummaryPage_LoadTilemap(void);
static void SummaryPage_Reload(enum MonSummaryReloadModes);

static void SummarySprite_SetSpriteId(u8, u8);
static u8 SummarySprite_GetSpriteId(u8);
static void SummarySprite_SetDynamicSpriteId(u8, u8);
static u8 SummarySprite_GetDynamicSpriteId(u8);
static const struct MonSummarySprite *SummarySprite_GetMainStruct(u32);
static void SummarySprite_InjectHpBar(struct Sprite *);
static void SummarySprite_InjectExpBar(struct Sprite *);
static void SummarySprite_InjectFriendshipBar(struct Sprite *);
static void SummarySprite_CreateMonSprite(void);
static void SummarySprite_InjectPokemon(void);
static u32 SummarySprite_GetPokemonPaletteSlot(void);
static void SummarySprite_PlayPokemonCry(void);
static void SummarySprite_MonHeldItem(u32, s32, s32);
static u32 SummarySprite_GetHeldItemTag(void);
static void SummarySprite_MonPokeBall(u32, s32, s32);
static void SummarySprite_MonTypes(u32, s32, s32);
static u32 SummarySprite_GetTypePaletteTag(enum Type);
static void SummarySprite_PrepareMonMovesGfx(void);
static void SummarySprite_MonMove(u32, s32, s32);
static struct MonSpritesGfxManager *SummarySprite_GetGfxManager(void);
static void SpriteCB_SummarySprite_ShinySymbol(struct Sprite *);
static void SpriteCB_SummarySprite_HpBar(struct Sprite *);
static void SpriteCB_SummarySprite_ExpBar(struct Sprite *);
static void SpriteCB_SummarySprite_FriendshipBar(struct Sprite *);

static void SummaryPrint_AddText(u32, u32, u32, u32, enum MonSummaryFontColors, const u8 *);
static const struct WindowTemplate *SummaryPrint_GetMainWindowTemplate(u32);
static void SummaryPrint_Header(void);
static void SummaryPrint_BlitPageTabs(u32, u32, u32);
static void SummaryPrint_BlitStatusSymbol(u32, u32);
static UNUSED void SummaryPrint_BlitMonMarkings(u32, u32, u32);
static void SummaryPrint_HelpBar(void);
static void SummaryPrint_TextBox(const u8 *);
static void SummaryPrint_MonName(u32, u32, u32);
static void SummaryPrint_MonGender(u32, u32);
static void SummaryPrint_MonLevel(u32, u32);
static void SummaryPrint_MonHeldItem(u32, u32, u32);
static void SummaryPrint_MonAbilityName(u32, u32, u32);
static void SummaryPrint_MonAbilityDesc(u32, u32, u32);
static void SummaryPrint_MonStat(enum Stat, u32, u32);
static void SummaryPrint_MoveName(u32, u32, u32);
static void SummaryPrint_BlitMoveType(u32, u32, u32);
static void Task_SummaryPrint_UpdateText(u8);

static void DummyPage_Handle(void);

static void InfosPage_HandleFrontEnd(void);
static void InfosPage_HandleUpdateText(void);
static void InfosPage_HandleHeader(void);
static void InfosPage_HandleGeneral(void);
static void InfosPageGeneral_PrintMonTyping(struct MonSummary *);
static void InfosPageGeneral_PrintTrainerInfo(struct MonSummary *);
static void InfosPageGeneral_PrintNeededExperience(struct MonSummary *);
static void InfosPageGeneral_PrintNatureInfo(struct MonSummary *);
static void InfosPage_HandleMisc(void);
static void InfosPageMisc_PrintTextBox(void);
static void InfosPageMisc_TrySpawnDescCursor(void);
static void SpriteCB_InfosPageMisc_Cursor(struct Sprite *);
static void SpriteCB_InfosPageMisc_ScrollIndicator(struct Sprite *);

static void StatsPage_HandleFrontEnd(void);
static void StatsPage_HandleUpdateText(void);
static void StatsPage_HandleHeader(void);
static void StatsPage_HandleGeneral(void);
static void StatsPage_HandleMisc(void);
static void StatsPageMisc_MonTotalEVs(void);
static void StatsPageMisc_TrySpawnCursors(void);
static void StatsPageMisc_SetRow(u32);
static u32 StatsPageMisc_GetRow(void);
static void StatsPageMisc_UpdateRow(s32);
static void StatsPageMisc_UpdateCurrentRowEVs(s32);
static u32 StatsPageMisc_CalculateAvailableEVs(void);
static u32 StatsPageMisc_UpdateTotalEVs(void);
static void SpriteCB_StatsPageMisc_StatCursor(struct Sprite *);
static void SpriteCB_StatsPageMisc_UpArrow(struct Sprite *);
static void SpriteCB_StatsPageMisc_DownArrow(struct Sprite *);

static void MovesPage_HandleFrontEnd(void);
static void MovesPage_HandleUpdateText(void);
static void MovesPage_HandleHeader(void);
static void MovesPage_HandleGeneral(void);
static void MovesPage_HandleMisc(void);
static void MovesPageMisc_PutMenuTilemap(enum MonSummaryMovesSubModes);
static void MovesPageMisc_PrintDetails(u32);
static void MovesPageMisc_PrintOptions(void);
static void MovesPageMisc_PrintForgetConfirmation(void);
static void MovesPageMisc_PrintDescription(void);
static void MovesPageMisc_TrySpawnCursors(void);
static void MovesPageMisc_UpdateIndex(s32);
static void MovesPageMisc_SetIndex(u32);
static u32 MovesPageMisc_GetIndex(void);
static u32 MovesPageMisc_GetMaxIndex(void);
static void MovesPageMisc_SetSlotIndex(u32);
static u32 MovesPageMisc_GetSlotIndex(void);
static void MovesPageMisc_SetOptionIndex(u32);
static u32 MovesPageMisc_GetOptionIndex(void);
static void MovesPageMisc_SetNewSlotIndex(u32);
static u32 MovesPageMisc_GetNewSlotIndex(void);
static void MovesPageMisc_SetForgetConfirmationIndex(u32);
static u32 MovesPageMisc_GetForgetConfirmationIndex(void);
static void MovesPageMisc_SwapMoves(void);
static void MovesPageMisc_ForgetMove(void);
static void SpriteCB_MovesPageMisc_Arrows(struct Sprite *);
static void SpriteCB_MovesPageMisc_SlotCursor(struct Sprite *);
static void SpriteCB_MovesPageMisc_NewSlotCursor(struct Sprite *);
static void SpriteCB_MovesPageMisc_OptionCursor(struct Sprite *);

// const data
#include "data/ui_mon_summary.h"

// code
void MonSummary_OpenDefault(void)
{
    MonSummary_Init(
        &(const struct MonSummaryConfigs){
            .mode = SUMMARY_MODE_DEFAULT,
            .mons = gPlayerParty,
            .currIdx = 0, .totalIdx = gPlayerPartyCount - 1,
            .arg.value = 0
        },
        CB2_ReturnToFieldContinueScript);
}

void MonSummary_Init(const struct MonSummaryConfigs *config, MainCallback callback)
{
    sMonSummaryDataPtr = AllocZeroed(sizeof(struct MonSummaryResources));

    struct MonSpritesGfxManager *gfxMan = CreateMonSpritesGfxManager(MON_SPR_GFX_MANAGER_A, MON_SPR_GFX_MODE_NORMAL);

    if (!sMonSummaryDataPtr
     || !config
     || !gfxMan
     || config->mode >= NUM_SUMMARY_MODES)
    {
        DestroyMonSpritesGfxManager(MON_SPR_GFX_MANAGER_A);
        TRY_FREE_AND_SET_NULL(sMonSummaryDataPtr);
        SetMainCallback2(callback);
        return;
    }

    sMonSummaryDataPtr->gfxMan = gfxMan;

    enum MonSummaryPages page = SUMMARY_PAGE_INFOS;

    switch (config->mode)
    {
    default:
        break;
    case SUMMARY_MODE_BOX:
        sMonSummaryDataPtr->useBoxMon = TRUE;
        break;
    }

    sMonSummaryDataPtr->savedCallback = callback;
    sMonSummaryDataPtr->list.mons = config->mons;

    SummaryInput_SetIndex(config->currIdx);
    SummaryInput_SetTotalIndex(config->totalIdx);
    SummaryPage_SetValue(page);
    SummaryMode_SetValue(config->mode);
    memset(sMonSummaryDataPtr->spriteIds, SPRITE_NONE, ARRAY_COUNT(sMonSummaryDataPtr->spriteIds));

    SetMainCallback2(CB2_SummarySetup);
}

static void MonSummary_FreeResources(void)
{
    DestroyMonSpritesGfxManager(MON_SPR_GFX_MANAGER_A);
    TRY_FREE_AND_SET_NULL(sMonSummaryDataPtr->tilemapBufs[SUMMARY_PAGE_SLOT_1]);
    TRY_FREE_AND_SET_NULL(sMonSummaryDataPtr->tilemapBufs[SUMMARY_PAGE_SLOT_2]);
    TRY_FREE_AND_SET_NULL(sMonSummaryDataPtr);
    FreeItemIconTemporaryBuffers();
    FreeAllWindowBuffers();
    ResetSpriteData();
}

static void CB2_MonSummary(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void VBlankCB_MonSummary(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void Task_MonSummary_WaitFadeAndExit(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        MainCallback cb = sMonSummaryDataPtr->savedCallback;

        SetMainCallback2(cb);
        MonSummary_FreeResources();
        DestroyTask(taskId);
    }
}

static void SummarySetup_Backgrounds(void)
{
    u32 tilemapSize = BG_SCREEN_SIZE * 2;

    sMonSummaryDataPtr->tilemapBufs[SUMMARY_PAGE_SLOT_1] = AllocZeroed(tilemapSize);
    sMonSummaryDataPtr->tilemapBufs[SUMMARY_PAGE_SLOT_2] = AllocZeroed(tilemapSize);

    if (!sMonSummaryDataPtr->tilemapBufs[SUMMARY_PAGE_SLOT_1]
     || !sMonSummaryDataPtr->tilemapBufs[SUMMARY_PAGE_SLOT_2])
    {
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        CreateTask(Task_MonSummary_WaitFadeAndExit, 0);
        SetVBlankCallback(VBlankCB_MonSummary);
        SetMainCallback2(CB2_MonSummary);
        return;
    }

    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sSummarySetup_BgTemplates, NELEMS(sSummarySetup_BgTemplates));
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);

    SetBgTilemapBuffer(SUMMARY_BG_PAGE_1, sMonSummaryDataPtr->tilemapBufs[SUMMARY_PAGE_SLOT_1]);
    SetBgTilemapBuffer(SUMMARY_BG_PAGE_2, sMonSummaryDataPtr->tilemapBufs[SUMMARY_PAGE_SLOT_2]);

    for (enum MonSummaryBackgrounds bg = 0; bg < NUM_SUMMARY_BACKGROUNDS; bg++)
    {
        ScheduleBgCopyTilemapToVram(bg);
        ShowBg(bg);
    }
}

static void SummarySetup_Graphics(void)
{
    FreeTempTileDataBuffersIfPossible();
    ResetTempTileDataBuffers();

    DecompressAndCopyTileDataToVram(SUMMARY_BG_PAGE_1, sMonSummary_MainTiles, 0, 0, 0);
    LoadPalette(sMonSummary_MainPalette, BG_PLTT_ID(0), PLTT_SIZE_4BPP);

    LoadSpritePalette(&(const struct SpritePalette){
        .data = sMonSummary_MainPalette,
        .tag = TAG_SUMMARY_UNIVERSAL_PAL
    });

    LoadCompressedSpriteSheet(&sStatsPageHeader_TypeSpriteSheet);
    LoadSpritePalettes(sStatsPageHeader_TypeSpritePalettes);

    // ensure neither of these gets overwritten by other sprite palettes
    AllocSpritePalette(TAG_SUMMARY_POKEMON_SLOT_1);
    AllocSpritePalette(TAG_SUMMARY_POKEMON_SLOT_2);
    AllocSpritePalette(TAG_SUMMARY_HELD_ITEM_1);
    AllocSpritePalette(TAG_SUMMARY_HELD_ITEM_2);

    AllocItemIconTemporaryBuffers();

    SummaryPage_LoadTilemap();
    CopyBgTilemapBufferToVram(SUMMARY_BG_PAGE_1);
}

static void SummarySetup_Sprites(void)
{
    // excludes e.g. mon sprite
    for (u32 i = 0; i < ARRAY_COUNT(sSummarySetup_MainSprites); i++)
    {
        const struct MonSummarySprite *config = SummarySprite_GetMainStruct(i);
        struct Coords8 coords = SummaryPage_GetMainSpriteCoords(SummaryPage_GetValue(), config->id);
        struct SpriteTemplate template =
        {
            .tileTag = config->tileTag,
            .paletteTag = TAG_SUMMARY_UNIVERSAL_PAL,
            .oam = config->oam,
            .anims = config->anims,
            .images = NULL,
            .affineAnims = gDummySpriteAffineAnimTable,
            .callback = config->callback,
        };

        struct CompressedSpriteSheet sheet = { .tag = config->tileTag };

        if (IsCompressedData(config->gfx))
        {
            sheet.data = config->gfx;
            sheet.size = GetDecompressedDataSize(config->gfx);
        }
        else
        {
            sheet.data = gBlankGfxCompressed;
            sheet.size = config->size;
        }

        LoadCompressedSpriteSheet(&sheet);
        SummarySprite_SetSpriteId(config->id,
            CreateSprite(&template, coords.x, coords.y, 0));
        gSprites[SummarySprite_GetSpriteId(config->id)].sMonIndex = -1;
        gSprites[SummarySprite_GetSpriteId(config->id)].invisible = (coords.x == 0 && coords.y == 0);

        if (config->subsprites)
        {
            SetSubspriteTables(&gSprites[SummarySprite_GetSpriteId(config->id)], config->subsprites);
        }
    }

    SummarySprite_CreateMonSprite();
}

static void SummarySetup_Windows(void)
{
    InitWindows(sSummarySetup_MainWindows);
    DeactivateAllTextPrinters();
    ScheduleBgCopyTilemapToVram(0);

    for (u32 i = 0, baseBlock = 1; i < NUM_SUMMARY_MAIN_WINDOWS; i++)
    {
        SetWindowAttribute(i, WINDOW_BASE_BLOCK, baseBlock);
        FillWindowPixelBuffer(i, PIXEL_FILL(0));
        PutWindowTilemap(i);

        const struct WindowTemplate *template = SummaryPrint_GetMainWindowTemplate(i);
        baseBlock += template->width * template->height;
    }

    LoadMessageBoxGfx(SUMMARY_MAIN_WIN_TEXT_BOX, SUMMARY_TEXT_BOX_BASE_TILE, BG_PLTT_ID(SUMMARY_TEXT_BOX_PALETTE));
    void (*func)(void) = SummaryPage_GetHandleFrontEndFunc(SummaryPage_GetValue());
    func();

    SummaryPrint_Header();
    SummaryPrint_HelpBar();

    CopyWindowToVram(SUMMARY_MAIN_WIN_PAGE_TEXT, COPYWIN_GFX);
    ScheduleBgCopyTilemapToVram(SUMMARY_BG_TEXT);
}

static void CB2_SummarySetup(void)
{
    enum MonSummarySetupSteps steps = gMain.state;

    switch (steps)
    {
    case SUMMARY_SETUP_RESET:
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
        break;
    case SUMMARY_SETUP_MONDATA:
        SummaryMon_SetStruct();
        break;
    case SUMMARY_SETUP_BACKGROUNDS:
        SummarySetup_Backgrounds();
        break;
    case SUMMARY_SETUP_GRAPHICS:
        SummarySetup_Graphics();
        break;
    case SUMMARY_SETUP_WINDOWS:
        SummarySetup_Windows();
        break;
    case SUMMARY_SETUP_SPRITES:
        SummarySetup_Sprites();
        break;
    case SUMMARY_SETUP_FADE:
        BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        CreateTask(Task_SummarySetup_WaitFade, 0);
        break;
    case SUMMARY_SETUP_FINISH:
        SetVBlankCallback(VBlankCB_MonSummary);
        SetMainCallback2(CB2_MonSummary);
        return;
    default:
        DebugPrintf("WARNING unused step at: %d", steps);
        break;
    }

    gMain.state++;
}

static void Task_SummarySetup_WaitFade(u8 taskId)
{
    if (!gPaletteFade.active && ++gTasks[taskId].tDelay >= 5)
    {
        CreateTask(Task_SummaryPrint_UpdateText, 10);
        SummarySprite_PlayPokemonCry();
        gTasks[taskId].tDelay = 0;
        gTasks[taskId].func = SummaryMode_GetInputFunc(SummaryMode_GetValue());
    }
}

static void SummaryInput_UpdatePage(s32 delta)
{
    enum MonSummaryPages page = SummaryPage_GetValue();
    u32 count = NUM_SUMMARY_PAGES - 1;
    bool32 additiveDelta = SummaryInput_IsInputAdditive(delta);

    if ((!page && !additiveDelta) || (page == count && additiveDelta))
    {
        return;
    }

    PlaySE(SE_CLICK);
    SummaryPage_SetValue(page + delta);
    SummaryPage_Reload(SUMMARY_RELOAD_PAGE);
}

static void SummaryInput_UpdateMon(s32 delta)
{
    u32 idx = SummaryInput_GetIndex();
    u32 count = SummaryInput_GetTotalIndex();
    bool32 additiveDelta = SummaryInput_IsInputAdditive(delta);

    if (!idx && !additiveDelta)
    {
        SummaryInput_SetIndex(count);
    }
    else if (idx == count && additiveDelta)
    {
        SummaryInput_SetIndex(0);
    }
    else
    {
        SummaryInput_SetIndex(idx + delta);
    }

    PlaySE(SE_CLICK);
    SummaryPage_Reload(SUMMARY_RELOAD_MON);
}

static void SummaryInput_SetIndex(u32 index)
{
    sMonSummaryDataPtr->currIdx = index;
}

static u32 SummaryInput_GetIndex(void)
{
    return sMonSummaryDataPtr->currIdx;
}

static void SummaryInput_SetTotalIndex(u32 index)
{
    sMonSummaryDataPtr->totalIdx = index;
}

static u32 SummaryInput_GetTotalIndex(void)
{
    return sMonSummaryDataPtr->totalIdx;
}

static void SummaryInput_SetSubMode(u32 flag)
{
    sMonSummaryDataPtr->subMode = flag;
}

static u32 SummaryInput_IsWithinSubMode(void)
{
    return sMonSummaryDataPtr->subMode;
}

static void SummaryInput_SetUpdateText(bool32 flag)
{
    sMonSummaryDataPtr->updateText = flag;
}

static bool32 SummaryInput_GetUpdateText(void)
{
    return sMonSummaryDataPtr->updateText;
}

static bool32 SummaryInput_IsInputAdditive(s32 delta)
{
    return delta >= 1;
}

static void Task_SummaryMode_DefaultInput(u8 taskId)
{
    if (JOY_NEW(DPAD_LEFT | L_BUTTON))
    {
        SummaryInput_UpdatePage(-1);
        return;
    }

    if (JOY_NEW(DPAD_RIGHT | R_BUTTON))
    {
        SummaryInput_UpdatePage(1);
        return;
    }

    if (JOY_NEW(DPAD_UP))
    {
        SummaryInput_UpdateMon(-1);
        return;
    }

    if (JOY_NEW(DPAD_DOWN))
    {
        SummaryInput_UpdateMon(1);
        return;
    }

    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        SummaryInput_SetSubMode(TRUE);
        SummaryPage_Reload(SUMMARY_RELOAD_PAGE);
        gTasks[taskId].func = SummaryPage_GetInputFunc(SummaryPage_GetValue());
        return;
    }

    if (JOY_NEW(B_BUTTON) && IsCryFinished())
    {
        PlaySE(SE_PC_OFF);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_MonSummary_WaitFadeAndExit;
        return;
    }
}

// TODO proper functionalities to sub menu functions

static void Task_SummaryInput_InfosInput(u8 taskId)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT | DPAD_UP | DPAD_DOWN))
    {
        PlaySE(SE_SELECT);
        sMonSummaryDataPtr->arg.infosDescState ^= 1;

        SummaryPage_Reload(SUMMARY_RELOAD_FRONT_END);

        return;
    }

    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        sMonSummaryDataPtr->arg.value = 0;

        SummaryInput_SetSubMode(SUMMARY_INFOS_SUB_MODE_NONE);
        SummaryPage_Reload(SUMMARY_RELOAD_PAGE);

        gTasks[taskId].func = SummaryMode_GetInputFunc(SummaryMode_GetValue());

        return;
    }
}

static void Task_SummaryInput_StatsInput(u8 taskId)
{
    u32 subMode = SummaryInput_IsWithinSubMode();

    if (JOY_NEW(DPAD_UP))
    {
        switch (subMode)
        {
        default:
            break;
        case SUMMARY_STATS_SUB_MODE_SELECT_ROW:
            StatsPageMisc_UpdateRow(-1);
            break;
        case SUMMARY_STATS_SUB_MODE_ADJUST_VALUE:
            StatsPageMisc_UpdateCurrentRowEVs(1);
            break;
        }

        return;
    }

    if (JOY_NEW(DPAD_DOWN))
    {
        switch (subMode)
        {
        default:
            break;
        case SUMMARY_STATS_SUB_MODE_SELECT_ROW:
            StatsPageMisc_UpdateRow(1);
            break;
        case SUMMARY_STATS_SUB_MODE_ADJUST_VALUE:
            StatsPageMisc_UpdateCurrentRowEVs(-1);
            break;
        }

        return;
    }

    if (JOY_NEW(L_BUTTON) || GetLRKeysPressed() == MENU_L_PRESSED)
    {
        switch (subMode)
        {
        default:
            break;
        case SUMMARY_STATS_SUB_MODE_ADJUST_VALUE:
            StatsPageMisc_UpdateCurrentRowEVs(SUMMARY_STATS_MIN_EVS);
            break;
        }

        return;
    }

    if (JOY_NEW(R_BUTTON) || GetLRKeysPressed() == MENU_R_PRESSED)
    {
        switch (subMode)
        {
        default:
            break;
        case SUMMARY_STATS_SUB_MODE_ADJUST_VALUE:
            StatsPageMisc_UpdateCurrentRowEVs(SUMMARY_STATS_MAX_EVS);
            break;
        }

        return;
    }

    if (JOY_NEW(DPAD_LEFT))
    {
        switch (subMode)
        {
        default:
            break;
        case SUMMARY_STATS_SUB_MODE_ADJUST_VALUE:
            StatsPageMisc_UpdateCurrentRowEVs(-10);
            break;
        }

        return;
    }

    if (JOY_NEW(DPAD_RIGHT))
    {
        switch (subMode)
        {
        default:
            break;
        case SUMMARY_STATS_SUB_MODE_ADJUST_VALUE:
            StatsPageMisc_UpdateCurrentRowEVs(10);
            break;
        }

        return;
    }

    if (JOY_NEW(A_BUTTON))
    {
        switch (subMode)
        {
        default:
            sMonSummaryDataPtr->arg.stats.subMode = subMode;
            SummaryInput_SetSubMode(subMode + 1);
            break;
        case SUMMARY_STATS_SUB_MODE_ERROR:
            SummaryInput_SetSubMode(sMonSummaryDataPtr->arg.stats.subMode);
            break;
        case SUMMARY_STATS_SUB_MODE_ADJUST_VALUE:
            return; // don't play the sound effect below
        }

        SummaryPage_Reload(SUMMARY_RELOAD_FRONT_END);
        PlaySE(SE_SELECT);
        return;
    }

    if (JOY_NEW(B_BUTTON))
    {
        switch (subMode)
        {
        default:
            sMonSummaryDataPtr->arg.stats.subMode = subMode;
            SummaryInput_SetSubMode(subMode - 1);
            SummaryPage_Reload(SUMMARY_RELOAD_FRONT_END);
            break;
        case SUMMARY_STATS_SUB_MODE_ERROR:
            SummaryInput_SetSubMode(sMonSummaryDataPtr->arg.stats.subMode);
            SummaryPage_Reload(SUMMARY_RELOAD_FRONT_END);
            break;
        case SUMMARY_STATS_SUB_MODE_SELECT_ROW:
            if (StatsPageMisc_CalculateAvailableEVs())
            {
                PlaySE(SE_BOO);
                sMonSummaryDataPtr->arg.stats.subMode = subMode;
                SummaryInput_SetSubMode(SUMMARY_STATS_SUB_MODE_ERROR);
                SummaryPage_Reload(SUMMARY_RELOAD_FRONT_END);
                return;
            }

            // update referenced mon struct and update
            // we'll assume that EV/IV editing is NOT done within the PC/battle
            CopyMon(&sMonSummaryDataPtr->list.mons[sMonSummaryDataPtr->currIdx], &sMonSummaryDataPtr->mon, sizeof(struct Pokemon));
            SummaryMon_SetStruct();
            SummaryInput_SetSubMode(FALSE);
            sMonSummaryDataPtr->arg.value = 0;
            SummaryPage_Reload(SUMMARY_RELOAD_PAGE);
            gTasks[taskId].func = SummaryMode_GetInputFunc(SummaryMode_GetValue());
            break;
        }

        PlaySE(SE_SELECT);
        return;
    }
}

static void Task_SummaryInput_MovesInput(u8 taskId)
{
    enum MonSummaryMovesSubModes subMode = SummaryInput_IsWithinSubMode();

    if (JOY_NEW(DPAD_DOWN))
    {
        switch (subMode)
        {
        default:
            break;
        case SUMMARY_MOVES_SUB_MODE_DETAILS:
        case SUMMARY_MOVES_SUB_MODE_OPTIONS:
        case SUMMARY_MOVES_SUB_MODE_REORDER:
        case SUMMARY_MOVES_SUB_MODE_FORGET:
            MovesPageMisc_UpdateIndex(1);
            break;
        }

        return;
    }

    if (JOY_NEW(DPAD_UP))
    {
        switch (subMode)
        {
        default:
            break;
        case SUMMARY_MOVES_SUB_MODE_DETAILS:
        case SUMMARY_MOVES_SUB_MODE_OPTIONS:
        case SUMMARY_MOVES_SUB_MODE_REORDER:
        case SUMMARY_MOVES_SUB_MODE_FORGET:
            MovesPageMisc_UpdateIndex(-1);
            break;
        }

        return;
    }

    if (JOY_NEW(A_BUTTON))
    {
        switch (subMode)
        {
        default:
            return;
        case SUMMARY_MOVES_SUB_MODE_DETAILS:
            SummaryInput_SetSubMode(subMode + 1);
            break;
        case SUMMARY_MOVES_SUB_MODE_OPTIONS:
            Task_SummaryInput_MovesOptionInput(taskId);
            return;
        case SUMMARY_MOVES_SUB_MODE_REORDER:
            SummaryInput_TryReorderMoves();
            return;
        case SUMMARY_MOVES_SUB_MODE_FORGET:
            Task_SummaryInput_MovesForgetInput(taskId, 1);
            return;
        }

        SummaryPage_Reload(SUMMARY_RELOAD_FRONT_END);
        PlaySE(SE_SELECT);
        return;
    }

    if (JOY_NEW(B_BUTTON))
    {
        switch (subMode)
        {
        case SUMMARY_MOVES_SUB_MODE_OPTIONS:
            MovesPageMisc_SetOptionIndex(0);
            // fallthrough
        default:
            SummaryInput_SetSubMode(subMode - 1);
            break;
        case SUMMARY_MOVES_SUB_MODE_DETAILS:
            sMonSummaryDataPtr->arg.value = 0;
            SummaryInput_SetSubMode(FALSE);
            gTasks[taskId].func = SummaryMode_GetInputFunc(SummaryMode_GetValue());
            break;
        case SUMMARY_MOVES_SUB_MODE_REORDER:
            sMonSummaryDataPtr->arg.moves.reorderFail = FALSE;
            SummaryInput_SetSubMode(sMonSummaryDataPtr->arg.moves.subMode);
            break;
        case SUMMARY_MOVES_SUB_MODE_FORGET:
            Task_SummaryInput_MovesForgetInput(taskId, -1);
            return;
        }

        SummaryPage_Reload(SUMMARY_RELOAD_FRONT_END);
        PlaySE(SE_SELECT);
        return;
    }

    if (JOY_NEW(SELECT_BUTTON))
    {
        if (subMode != SUMMARY_MOVES_SUB_MODE_DETAILS) return;

        SummaryInput_TryStartReorderMode();
        SummaryPage_Reload(SUMMARY_RELOAD_FRONT_END);
        return;
    }
}

static void Task_SummaryInput_MovesOptionInput(u8 taskId)
{
    switch (MovesPageMisc_GetOptionIndex())
    {
    default:
        return;
    case SUMMARY_MOVES_OPTION_INSPECT:
        SummaryInput_SetSubMode(SUMMARY_MOVES_SUB_MODE_DETAILS);
        break;
    case SUMMARY_MOVES_OPTION_LEARN:
        // add move_reminder feature here
        break;
    case SUMMARY_MOVES_OPTION_REORDER:
        SummaryInput_TryStartReorderMode();
        break;
    case SUMMARY_MOVES_OPTION_FORGET:
        sMonSummaryDataPtr->arg.moves.forgottenMove = SummaryMon_GetStruct()->moves[MovesPageMisc_GetSlotIndex()];
        if (SummaryMon_GetStruct()->totalMoves > 1)
        {
            sMonSummaryDataPtr->arg.moves.forgetState = SUMMARY_MOVES_FORGET_STATE_CONFIRM;
            PlaySE(SE_SELECT);
        }
        else
        {
            sMonSummaryDataPtr->arg.moves.forgetState = SUMMARY_MOVES_FORGET_STATE_FAILURE;
            PlaySE(SE_BOO);
        }

        MovesPageMisc_SetForgetConfirmationIndex(SUMMARY_MOVES_FORGET_CONFIRM_NO);
        SummaryInput_SetSubMode(SUMMARY_MOVES_SUB_MODE_FORGET);
        break;
    }

    SummaryPage_Reload(SUMMARY_RELOAD_FRONT_END);
}

static void Task_SummaryInput_MovesForgetInput(u8 taskId, s32 delta)
{
    bool32 additiveDelta = SummaryInput_IsInputAdditive(delta);

    switch (sMonSummaryDataPtr->arg.moves.forgetState)
    {
    default:
        break;

    case SUMMARY_MOVES_FORGET_STATE_CONFIRM:
        if (additiveDelta && MovesPageMisc_GetForgetConfirmationIndex() == SUMMARY_MOVES_FORGET_CONFIRM_YES)
        {
            MovesPageMisc_ForgetMove();
            sMonSummaryDataPtr->arg.moves.forgetState = SUMMARY_MOVES_FORGET_STATE_SUCCESS;
            SummaryPage_Reload(SUMMARY_RELOAD_PAGE);
            PlaySE(SE_SUCCESS);
            return;
        }
        // fallthrough
    case SUMMARY_MOVES_FORGET_STATE_SUCCESS:
    case SUMMARY_MOVES_FORGET_STATE_FAILURE:
        sMonSummaryDataPtr->arg.moves.forgetState = 0;
        sMonSummaryDataPtr->arg.moves.forgottenMove = 0;
        SummaryInput_SetSubMode(SUMMARY_MOVES_SUB_MODE_OPTIONS);
        PlaySE(SE_SELECT);
        break;
    }

    SummaryPage_Reload(SUMMARY_RELOAD_FRONT_END);
}

static void SummaryInput_TryStartReorderMode(void)
{
    sMonSummaryDataPtr->arg.moves.reorderFail = FALSE;
    MovesPageMisc_SetNewSlotIndex(MovesPageMisc_GetSlotIndex());

    if (SummaryMon_GetStruct()->totalMoves > 1)
    {
        PlaySE(SE_SELECT);
    }
    else
    {
        sMonSummaryDataPtr->arg.moves.reorderFail = TRUE;
        PlaySE(SE_BOO);
    }

    sMonSummaryDataPtr->arg.moves.subMode = SummaryInput_IsWithinSubMode();
    SummaryInput_SetSubMode(SUMMARY_MOVES_SUB_MODE_REORDER);
}

static void SummaryInput_TryReorderMoves(void)
{
    if (!sMonSummaryDataPtr->arg.moves.reorderFail)
    {
        MovesPageMisc_SwapMoves();

        u32 bak = MovesPageMisc_GetSlotIndex();
        MovesPageMisc_SetSlotIndex(MovesPageMisc_GetNewSlotIndex());
        MovesPageMisc_SetNewSlotIndex(bak);

        PlaySE(SE_SUCCESS);
    }
    else
    {
        PlaySE(SE_SELECT);
    }

    SummaryInput_SetSubMode(sMonSummaryDataPtr->arg.moves.subMode);
    sMonSummaryDataPtr->arg.moves.reorderFail = FALSE;
    sMonSummaryDataPtr->arg.moves.subMode = 0;
    SummaryPage_Reload(SUMMARY_RELOAD_PAGE);
}

static void SummaryMon_SetStruct(void)
{
    SummaryMon_CopyCurrentRawMon();

    struct MonSummaryResources *res = sMonSummaryDataPtr;
    struct Pokemon *mon = &res->mon;

    res->summary.species = GetMonData(mon, MON_DATA_SPECIES);
    res->summary.species2 = GetMonData(mon, MON_DATA_SPECIES_OR_EGG);
    res->summary.exp = GetMonData(mon, MON_DATA_EXP);
    res->summary.level = GetMonData(mon, MON_DATA_LEVEL);
    res->summary.abilityNum = GetMonData(mon, MON_DATA_ABILITY_NUM);
    res->summary.item = GetMonData(mon, MON_DATA_HELD_ITEM);
    res->summary.personality = GetMonData(mon, MON_DATA_PERSONALITY);
    res->summary.sanity = GetMonData(mon, MON_DATA_SANITY_IS_BAD_EGG);

    if (res->summary.sanity)
    {
        res->summary.isEgg = TRUE;
    }
    else
    {
        res->summary.isEgg = GetMonData(mon, MON_DATA_IS_EGG);
    }

    res->summary.totalMoves = 0;

    for (u32 i = 0; i < MAX_MON_MOVES; i++)
    {
        res->summary.moves[i] = GetMonData(mon, MON_DATA_MOVE1 + i);
        res->summary.pp[i] = GetMonData(mon, MON_DATA_PP1 + i);

        if (res->summary.moves[i] > MOVE_NONE && res->summary.moves[i] < MOVES_COUNT)
        {
            res->summary.totalMoves++;
        }
    }

    res->summary.ppBonuses = GetMonData(mon, MON_DATA_PP_BONUSES);
    res->summary.nature = GetNature(mon);
    res->summary.mintNature = GetMonData(mon, MON_DATA_HIDDEN_NATURE);
    res->summary.currHp = GetMonData(mon, MON_DATA_HP);

    GetMonData(mon, MON_DATA_OT_NAME, res->summary.trainerName);
    ConvertInternationalString(res->summary.trainerName, GetMonData(mon, MON_DATA_LANGUAGE));
    res->summary.ailment = GetMonAilment(mon);
    res->summary.trainerGender = GetMonData(mon, MON_DATA_OT_GENDER);
    res->summary.trainerId = GetMonData(mon, MON_DATA_OT_ID);
    res->summary.metLocation = GetMonData(mon, MON_DATA_MET_LOCATION);
    res->summary.metLevel = GetMonData(mon, MON_DATA_MET_LEVEL);
    res->summary.metGame = GetMonData(mon, MON_DATA_MET_GAME);
    res->summary.friendship = GetMonData(mon, MON_DATA_FRIENDSHIP);

    res->summary.ribbonCount = GetMonData(mon, MON_DATA_RIBBON_COUNT);
    res->summary.isShiny = GetMonData(mon, MON_DATA_IS_SHINY);

    res->summary.totalValues[SUMMARY_TOTAL_IVS] = 0;

    for (enum Stat i = 0; i < NUM_STATS; i++)
    {
        res->summary.totalValues[SUMMARY_TOTAL_IVS] += GetMonData(mon, MON_DATA_HP_IV + i);
    }

    res->summary.totalValues[SUMMARY_TOTAL_EVS] = GetMonEVCount(mon);

    GetMonNickname(mon, res->summary.nickname);
    res->summary.gender = GetMonGender(mon);
    res->summary.markings = GetMonData(mon, MON_DATA_MARKINGS);
    res->summary.ball = GetMonData(mon, MON_DATA_POKEBALL);
    SummaryMon_GetNatureFlavors(res->summary.flavors);
}

static struct MonSummary *SummaryMon_GetStruct(void)
{
    return &sMonSummaryDataPtr->summary;
}

static void SummaryMon_CopyCurrentRawMon(void)
{
    struct MonSummaryResources *res = sMonSummaryDataPtr;

    if (sMonSummaryDataPtr->useBoxMon)
    {
        struct BoxPokemon *boxMon = &res->list.boxMons[res->currIdx];
        BoxMonToMon(boxMon, &res->mon);
    }
    else
    {
        res->mon = res->list.mons[res->currIdx];
    }
}

static void SummaryMon_GetNatureFlavors(u8 *flavors)
{
    struct Pokemon *mon = &sMonSummaryDataPtr->mon;

    memset(flavors, FLAVOR_COUNT, sizeof(u8) * 2);

    for (u32 i = 0; i < FLAVOR_COUNT; i++)
    {
        s8 flavor = GetMonFlavorRelation(mon, i);

        if (flavor != 0)
        {
            flavors[SUMMARY_MON_LIKED_FLAVOR + (flavor == -1)] = i;
        }
    }
}

static void SummaryMode_SetValue(enum MonSummaryModes mode)
{
    sMonSummaryDataPtr->mode = mode;
}

static enum MonSummaryModes SummaryMode_GetValue(void)
{
    return sMonSummaryDataPtr->mode;
}

static TaskFunc SummaryMode_GetInputFunc(enum MonSummaryModes mode)
{
    TaskFunc func = sSummaryMode_InputFuncs[mode];
    if (!func) return TaskDummy;

    return func;
}

static void SummaryPage_SetValue(enum MonSummaryPages page)
{
    sMonSummaryDataPtr->page = page;
}

static enum MonSummaryPages SummaryPage_GetValue(void)
{
    return sMonSummaryDataPtr->page;
}

static void SummaryPage_TogglePageSlot(void)
{
    sMonSummaryDataPtr->pageSlot ^= 1;
}

static u32 SummaryPage_GetPageSlot(void)
{
    return sMonSummaryDataPtr->pageSlot;
}

static const struct MonSummaryPageInfo *SummaryPage_GetInfo(enum MonSummaryPages page)
{
    if (page >= NUM_SUMMARY_PAGES) return NULL;

    return &sSummaryPage_Info[page];
}

static const u8 *SummaryPage_GetName(enum MonSummaryPages page)
{
    const struct MonSummaryPageInfo *info = SummaryPage_GetInfo(page);
    if (!info || !info->name) return gText_EmptyString2;

    return info->name;
}

static const u32 *SummaryPage_GetTilemap(enum MonSummaryPages page)
{
    const struct MonSummaryPageInfo *info = SummaryPage_GetInfo(page);

    if (!info || !info->tilemap) return sMonSummary_MainTilemap;

    return info->tilemap;
}

static struct Coords8 SummaryPage_GetMainSpriteCoords(enum MonSummaryPages page, enum MonSummaryMainSprites sprite)
{
    const struct MonSummaryPageInfo *info = SummaryPage_GetInfo(page);

    if (!info) return (struct Coords8){ DISPLAY_WIDTH, DISPLAY_HEIGHT };

    return info->mainSpriteCoords[sprite];
}

static TaskFunc SummaryPage_GetInputFunc(enum MonSummaryPages page)
{
    const struct MonSummaryPageInfo *info = SummaryPage_GetInfo(page);

    if (!info || !info->input) return TaskDummy;

    return info->input;
}

static void *SummaryPage_GetHandleFrontEndFunc(enum MonSummaryPages page)
{
    const struct MonSummaryPageInfo *info = SummaryPage_GetInfo(page);

    if (!info || !info->handleFrontEnd) return DummyPage_Handle;

    return info->handleFrontEnd;
}

static void *SummaryPage_GetHandleUpdateTextFunc(enum MonSummaryPages page)
{
    const struct MonSummaryPageInfo *info = SummaryPage_GetInfo(page);

    if (!info || !info->handleUpdateText) return DummyPage_Handle;

    return info->handleUpdateText;
}

static const u8 *SummaryPage_GetHelpBarText(enum MonSummaryPages page)
{
    const struct MonSummaryPageInfo *info = SummaryPage_GetInfo(page);

    if (!info || !info->helpBar[SummaryInput_IsWithinSubMode()])
    {
        return gText_EmptyString2;
    }

    return info->helpBar[SummaryInput_IsWithinSubMode()];
}

static void SummaryPage_UnloadDynamicSprites(void)
{
    for (u32 i = 0; i < TOTAL_SUMMARY_DYNAMIC_SPRITES; i++)
    {
        u32 spriteId = SummarySprite_GetDynamicSpriteId(i);
        if (spriteId == SPRITE_NONE) continue;

        struct Sprite *sprite = &gSprites[spriteId];
        u32 tileTag = (u16)sprite->sTileTag, paletteTag = (u16)sprite->sPaletteTag;

        FreeSpriteOamMatrix(sprite);
        DestroySprite(&gSprites[spriteId]);
        FreeSpriteTilesByTag(tileTag);
        FreeSpritePaletteByTag(paletteTag);

        SummarySprite_SetDynamicSpriteId(i, SPRITE_NONE);
    }
}

static void SummaryPage_LoadTilemap(void)
{
    enum MonSummaryBackgrounds nextBg = SUMMARY_BG_PAGE_1;

    CopyToBgTilemapBuffer(nextBg, SummaryPage_GetTilemap(SummaryPage_GetValue()), 0, 0);
    SetGpuReg(REG_OFFSET_BG2HOFS, 8);
}

static void SummaryPage_Reload(enum MonSummaryReloadModes mode)
{
    SummaryPage_TogglePageSlot();

    for (u32 i = 0; i < NUM_SUMMARY_MAIN_WINDOWS; i++)
    {
        FillWindowPixelBuffer(i, PIXEL_FILL(0));
        PutWindowTilemap(i);
    }

    ClearDialogWindowAndFrameToTransparent(SUMMARY_MAIN_WIN_TEXT_BOX, FALSE);

    SummaryPrint_Header();
    SummaryPrint_HelpBar();

    void (*handleFrontEnd)(void) = SummaryPage_GetHandleFrontEndFunc(SummaryPage_GetValue());

    switch (mode)
    {
    default:
        break;
    case SUMMARY_RELOAD_MON:
        SummaryMon_SetStruct();
        SummarySprite_PlayPokemonCry();
        break;
    case SUMMARY_RELOAD_PAGE:
        {
            for (enum MonSummaryMainSprites i = 0; i < ARRAY_COUNT(sSummarySetup_MainSprites); i++)
            {
                struct Coords8 coords = SummaryPage_GetMainSpriteCoords(SummaryPage_GetValue(), i);
                u32 spriteId = SummarySprite_GetSpriteId(i);

                gSprites[spriteId].x = coords.x;
                gSprites[spriteId].y = coords.y;
                gSprites[spriteId].invisible = (coords.x == 0 && coords.y == 0);
            }

            SummaryPage_LoadTilemap();
            break;
        }
    case SUMMARY_RELOAD_FRONT_END:
        {
            FillWindowPixelBuffer(SUMMARY_MAIN_WIN_PAGE_TEXT, PIXEL_FILL(0));
            PutWindowTilemap(SUMMARY_MAIN_WIN_PAGE_TEXT);

            handleFrontEnd();

            CopyWindowToVram(SUMMARY_MAIN_WIN_PAGE_TEXT, COPYWIN_GFX);
            CopyBgTilemapBufferToVram(SUMMARY_BG_PAGE_1);
            CopyBgTilemapBufferToVram(SUMMARY_BG_PAGE_TEXT);
            CopyBgTilemapBufferToVram(SUMMARY_BG_TEXT);
            return;
        }
    }

    SummarySprite_CreateMonSprite();
    SummaryPage_UnloadDynamicSprites();

    handleFrontEnd();

    CopyWindowToVram(SUMMARY_MAIN_WIN_PAGE_TEXT, COPYWIN_GFX);
    CopyBgTilemapBufferToVram(SUMMARY_BG_PAGE_1);
    CopyBgTilemapBufferToVram(SUMMARY_BG_PAGE_TEXT);
    CopyBgTilemapBufferToVram(SUMMARY_BG_TEXT);
}

static void SummarySprite_SetSpriteId(u8 id, u8 value)
{
    sMonSummaryDataPtr->spriteIds[id] = value;
}

static u8 SummarySprite_GetSpriteId(u8 id)
{
    return sMonSummaryDataPtr->spriteIds[id];
}

static void SummarySprite_SetDynamicSpriteId(u8 id, u8 value)
{
    sMonSummaryDataPtr->spriteIds[id + NUM_SUMMARY_MAIN_SPRITES] = value;
}

static u8 SummarySprite_GetDynamicSpriteId(u8 id)
{
    return sMonSummaryDataPtr->spriteIds[id + NUM_SUMMARY_MAIN_SPRITES];
}

static const struct MonSummarySprite *SummarySprite_GetMainStruct(u32 idx)
{
    return &sSummarySetup_MainSprites[idx];
}

static void SummarySprite_InjectHpBar(struct Sprite *sprite)
{
    struct WindowTemplate template = { .width = 8, .height  = 4 }; // 64x32
    u32 windowId = AddWindow(&template);

    const u8 *blit = SummarySprite_GetMainStruct(SUMMARY_MAIN_SPRITE_HP_BAR)->gfx;
    BlitBitmapToWindow(windowId, blit, 0, 0, TILE_TO_PIXELS(template.width), TILE_TO_PIXELS(template.height));

    struct MonSummary *mon = SummaryMon_GetStruct();
    u32 currHp = mon->currHp;
    u32 maxHp = GetMonData(&sMonSummaryDataPtr->mon, MON_DATA_MAX_HP);

    u32 hpPercentage = (currHp * 100) / maxHp;
    enum MonSummaryHpBarColors color = hpPercentage / 33;
    if (color > SUMMARY_HP_BAR_CLR_GREEN) color = SUMMARY_HP_BAR_CLR_GREEN;

    LoadPalette(&sSummarySprite_HpBarColors[1 + (color * 2)], OBJ_PLTT_ID(sprite->oam.paletteNum) + 6, PLTT_SIZEOF(2));

    ConvertUIntToDecimalStringN(gStringVar1, currHp, STR_CONV_MODE_LEFT_ALIGN, 4);
    ConvertUIntToDecimalStringN(gStringVar2, maxHp, STR_CONV_MODE_LEFT_ALIGN, 4);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("{STR_VAR_1}/{STR_VAR_2}"));

    u32 width = TILE_TO_PIXELS(7) - 1; // 55
    u32 fontId = GetOutlineFontIdToFit(gStringVar4, width);
    u32 x = GetStringCenterAlignXOffsetWithLetterSpacing(fontId, gStringVar4, width, -1);
    SummaryPrint_AddText(windowId, fontId, x, 0, SUMMARY_FNTCLR_INTERFACE, gStringVar4);

    u8 *tileData = (u8 *)GetWindowAttribute(windowId, WINDOW_TILE_DATA);
    u32 tileNum = TILE_OFFSET_4BPP(sprite->oam.tileNum);
    CpuCopy32(tileData, (void *)(OBJ_VRAM0 + tileNum), TILE_OFFSET_4BPP(template.width * template.height));

    RemoveWindow(windowId);
}

// the FillWindowPixelRect width calc can be improved
// as i am not very mathy
static void SummarySprite_InjectExpBar(struct Sprite *sprite)
{
    struct WindowTemplate template = { .width = 8, .height  = 1 }; // 64x8, uses subsprite
    u32 windowId = AddWindow(&template);

    const u8 *blit = SummarySprite_GetMainStruct(SUMMARY_MAIN_SPRITE_EXP_BAR)->gfx;
    BlitBitmapToWindow(windowId, blit, 0, 0, TILE_TO_PIXELS(template.width), TILE_TO_PIXELS(template.height));

    struct MonSummary *mon = SummaryMon_GetStruct();
    u32 maxExp = gExperienceTables[gSpeciesInfo[mon->species].growthRate][mon->level];
    u32 currExp = mon->exp - maxExp;
    maxExp -= gExperienceTables[gSpeciesInfo[mon->species].growthRate][mon->level - 1];

    u32 expPercentage = (currExp * 100) / maxExp;
    u32 width = uq4_12_divide(expPercentage, UQ_4_12(1.92));

    FillWindowPixelRect(windowId, PIXEL_FILL(15), 0, 0, width, 4);

    u8 *tileData = (u8 *)GetWindowAttribute(windowId, WINDOW_TILE_DATA);
    u32 tileNum = TILE_OFFSET_4BPP(sprite->oam.tileNum);
    CpuCopy32(tileData, (void *)(OBJ_VRAM0 + tileNum), TILE_OFFSET_4BPP(template.width * template.height));

    RemoveWindow(windowId);
}

static void SummarySprite_InjectFriendshipBar(struct Sprite *sprite)
{
    struct WindowTemplate template = { .width = 5, .height  = 1 }; // 48x8, uses subsprite
    u32 windowId = AddWindow(&template);

    const u8 *blit = SummarySprite_GetMainStruct(SUMMARY_MAIN_SPRITE_FRIENDSHIP_BAR)->gfx;
    BlitBitmapToWindow(windowId, blit, 0, 0, TILE_TO_PIXELS(template.width), TILE_TO_PIXELS(template.height));

    struct MonSummary *mon = SummaryMon_GetStruct();
    u32 friendship = mon->friendship;
    u32 percentage = (friendship * 100) / MAX_FRIENDSHIP;
    u32 width = percentage / 4; // 25 pixels

    FillWindowPixelRect(windowId, PIXEL_FILL(12), 0, 2, width, 4);

    u8 *tileData = (u8 *)GetWindowAttribute(windowId, WINDOW_TILE_DATA);
    u32 tileNum = TILE_OFFSET_4BPP(sprite->oam.tileNum);
    CpuCopy32(tileData, (void *)(OBJ_VRAM0 + tileNum), TILE_OFFSET_4BPP(template.width * template.height));

    RemoveWindow(windowId);
}

static void SummarySprite_CreateMonSprite(void)
{
    if (SummarySprite_GetSpriteId(SUMMARY_MAIN_SPRITE_POKEMON) != SPRITE_NONE)
    {
        DestroySpriteAndFreeResources(&gSprites[SummarySprite_GetSpriteId(SUMMARY_MAIN_SPRITE_POKEMON)]);
    }

    u32 coord = SummaryPage_GetValue() == SUMMARY_PAGE_INFOS ? 32 : 16;

    SummarySprite_InjectPokemon();
    SummarySprite_SetSpriteId(SUMMARY_MAIN_SPRITE_POKEMON,
        CreateSprite(&gMultiuseSpriteTemplate, coord, coord, 0));

    u32 mainSpriteId = SummarySprite_GetSpriteId(SUMMARY_MAIN_SPRITE_POKEMON);
    struct Sprite *sprite = &gSprites[mainSpriteId];

    FreeSpriteOamMatrix(sprite);
    sprite->oam.priority = 0;
    sprite->callback = SpriteCallbackDummy;
    sprite->hFlip = IsMonSpriteNotFlipped(SummaryMon_GetStruct()->species2);
    sprite->oam.paletteNum = SummarySprite_GetPokemonPaletteSlot();

    sprite->invisible = FALSE;
}

// switch between buffers
static void SummarySprite_InjectPokemon(void)
{
    u32 position = SUMMARY_GFX_MAN_MON; // B_POSITION_OPPONENT_LEFT
    struct MonSummary *mon = SummaryMon_GetStruct();
    u8 *gfx = MonSpritesGfxManager_GetSpritePtr(MON_SPR_GFX_MANAGER_A, position);

    u32 index = SummarySprite_GetPokemonPaletteSlot();
    CpuFill32(0, gfx, 512);

    if (SummaryPage_GetValue() == SUMMARY_PAGE_INFOS)
    {
        HandleLoadSpecialPokePic(TRUE, gfx, mon->species2, mon->personality);

        LoadPalette(
            GetMonSpritePalFromSpeciesAndPersonality(mon->species, mon->isShiny, mon->personality),
            OBJ_PLTT_ID(index), PLTT_SIZE_4BPP);
        UniquePalette(OBJ_PLTT_ID(index), &sMonSummaryDataPtr->mon.box);
        CpuCopy32(&gPlttBufferFaded[OBJ_PLTT_ID(index)], &gPlttBufferUnfaded[OBJ_PLTT_ID(index)], PLTT_SIZEOF(16));

    }
    else
    {
        CpuCopy32(GetMonIconTiles(mon->species2, mon->personality), gfx, 512);
        LoadPalette(GetValidMonIconPalettePtr(mon->species2), OBJ_PLTT_ID(index), PLTT_SIZE_4BPP);
    }

    SetMultiuseSpriteTemplateToPokemon(TAG_NONE, position);

    if (SummaryPage_GetValue() != SUMMARY_PAGE_INFOS)
    {
        gMultiuseSpriteTemplate.oam = &sSummaryPage_MonIconOam;
    }
}

static u32 SummarySprite_GetPokemonPaletteSlot(void)
{
    return IndexOfSpritePaletteTag(TAG_SUMMARY_POKEMON_SLOT_1 + SummaryPage_GetPageSlot());
}

static void SummarySprite_PlayPokemonCry(void)
{
    struct MonSummary *mon = SummaryMon_GetStruct();

    if (mon->isEgg) return;

    u32 cryMode =
        ShouldPlayNormalMonCry(&sMonSummaryDataPtr->mon) ? CRY_MODE_NORMAL : CRY_MODE_WEAK;

    PlayCry_ByMode(mon->species2, 0, cryMode);
}

static void SummarySprite_MonHeldItem(u32 spriteArrId, s32 x, s32 y)
{
    struct MonSummary *mon = SummaryMon_GetStruct();
    u32 itemId = mon->item, spriteId = SummarySprite_GetDynamicSpriteId(spriteArrId);

    if (itemId == ITEM_NONE || itemId >= ITEMS_COUNT) return;

    if (spriteId == SPRITE_NONE)
    {
        DecompressDataWithHeaderWram(GetItemIconPic(itemId), gItemIconDecompressionBuffer);
        CopyItemIconPicTo4x4Buffer(gItemIconDecompressionBuffer, gItemIcon4x4Buffer);

        u32 tag = SummarySprite_GetHeldItemTag();

        LoadPalette(GetItemIconPalette(itemId), OBJ_PLTT_ID(IndexOfSpritePaletteTag(tag)), PLTT_SIZE_4BPP);

        sMonSummaryDataPtr->heldItemImage.data = gItemIcon4x4Buffer;
        sMonSummaryDataPtr->heldItemImage.relativeFrames = TRUE;
        sMonSummaryDataPtr->heldItemImage.size = TILE_OFFSET_4BPP(16);

        struct SpriteTemplate template = gItemIconSpriteTemplate;
        template.tileTag = TAG_NONE;
        template.images = &sMonSummaryDataPtr->heldItemImage;
        template.paletteTag = tag;

        spriteId = CreateSprite(&template, x, y, 0);

        SummarySprite_SetDynamicSpriteId(spriteArrId, spriteId);
    }
}

static u32 SummarySprite_GetHeldItemTag(void)
{
    return TAG_SUMMARY_HELD_ITEM_1 + SummaryPage_GetPageSlot();
}

static void SummarySprite_MonPokeBall(u32 spriteArrId, s32 x, s32 y)
{
    struct MonSummary *mon = SummaryMon_GetStruct();
    enum PokeBall ball = mon->ball;

    if (SummarySprite_GetDynamicSpriteId(spriteArrId) != SPRITE_NONE) return;

    LoadBallGfx(ball);
    u32 spriteId = CreateSprite(&gBallSpriteTemplates[ball], x, y, 0);

    gSprites[spriteId].callback = SpriteCallbackDummy;
    gSprites[spriteId].oam.priority = 0;
    gSprites[spriteId].sTileTag = gBallSpriteTemplates[ball].tileTag;
    gSprites[spriteId].sPaletteTag = gBallSpriteTemplates[ball].paletteTag;

    SummarySprite_SetDynamicSpriteId(spriteArrId, spriteId);
}

static void SummarySprite_MonTypes(u32 spriteArrId, s32 x, s32 y)
{
    struct MonSummary *mon = SummaryMon_GetStruct();
    enum Type types[2] = { GetSpeciesType(mon->species, 0), GetSpeciesType(mon->species, 1) };
    u32 tag = SummarySprite_GetTypePaletteTag(types[0]);
    struct SpriteTemplate template = sStatsPageHeader_TypeSpriteTemplate;
    u32 spriteId = 0;

    if (SummarySprite_GetDynamicSpriteId(spriteArrId) == SPRITE_NONE)
    {
        template.paletteTag = tag;
        spriteId = CreateSprite(&template, x, y, 0);

        gSprites[spriteId].callback = SpriteCallbackDummy;
        gSprites[spriteId].oam.priority = 0;

        SummarySprite_SetDynamicSpriteId(spriteArrId, spriteId);
        StartSpriteAnim(&gSprites[spriteId], types[0]);
    }

    if (types[1] == types[0]) return;

    if (SummarySprite_GetDynamicSpriteId(spriteArrId + 1) == SPRITE_NONE)
    {
        x += 12;
        tag = SummarySprite_GetTypePaletteTag(types[1]);

        template.paletteTag = tag;
        spriteId = CreateSprite(&template, x, y, 0);

        gSprites[spriteId].callback = SpriteCallbackDummy;
        gSprites[spriteId].oam.priority = 0;

        SummarySprite_SetDynamicSpriteId(spriteArrId + 1, spriteId);
        StartSpriteAnim(&gSprites[spriteId], types[1]);
    }
}

static u32 SummarySprite_GetTypePaletteTag(enum Type type)
{
    return TAG_SUMMARY_TYPE_1 + (type >= TYPE_MYSTERY);
}

static void SummarySprite_PrepareMonMovesGfx(void)
{
    u16 *moves = SummaryMon_GetStruct()->moves;

    for (u32 i = 0; i < MAX_MON_MOVES; i++)
    {
        u32 tileNum = GetMoveType(moves[i]) * 32;
        CpuCopy32(sMovesPageGeneral_MoveBarGfx + TILE_OFFSET_4BPP(tileNum), (void *)sMonSummaryDataPtr->moveBarGfx[i], TILE_OFFSET_4BPP(32));
    }

    struct MonSpritesGfxManager *gfxMan = SummarySprite_GetGfxManager();
    enum MonSummaryGfxManagerIdx idx = SUMMARY_GFX_MAN_MOVE_BAR;

    gfxMan->frameImages[idx] = *sMovesPageGeneral_MoveBarSpriteTemplate.images;
    gfxMan->frameImages[idx].data = sMonSummaryDataPtr->moveBarGfx;

    gfxMan->templates[idx] = sMovesPageGeneral_MoveBarSpriteTemplate;
    gfxMan->templates[idx].images = (const struct SpriteFrameImage *)gfxMan->frameImages;
}

static void SummarySprite_MonMove(u32 idx, s32 x, s32 y)
{
    idx %= MAX_MON_MOVES;

    struct MonSummary *mon = SummaryMon_GetStruct();
    u32 move = mon->moves[idx];
    enum Type type = GetMoveType(move);

    if (move == MOVE_NONE || move >= MOVES_COUNT
     || SummarySprite_GetDynamicSpriteId(SUMMARY_MOVES_SPRITE_MOVE_1 + idx) != SPRITE_NONE) return;

    u32 spriteId = CreateSprite(&SummarySprite_GetGfxManager()->templates[SUMMARY_GFX_MAN_MOVE_BAR], x, y, 2);

    gSprites[spriteId].oam.paletteNum = IndexOfSpritePaletteTag(SummarySprite_GetTypePaletteTag(type));
    SetSubspriteTables(&gSprites[spriteId], sSummarySprite_128x16SubspriteTable);
    StartSpriteAnim(&gSprites[spriteId], idx);

    SummarySprite_SetDynamicSpriteId(SUMMARY_MOVES_SPRITE_MOVE_1 + idx, spriteId);
}

static struct MonSpritesGfxManager *SummarySprite_GetGfxManager(void)
{
    return sMonSummaryDataPtr->gfxMan;
}

static void SpriteCB_SummarySprite_ShinySymbol(struct Sprite *sprite)
{
    sprite->invisible = SummaryMon_GetStruct()->isShiny ^ 1;
}

static void SpriteCB_SummarySprite_HpBar(struct Sprite *sprite)
{
    u32 index = SummaryInput_GetIndex();

    if (index == sprite->sMonIndex) return;

    SummarySprite_InjectHpBar(sprite);
    sprite->sMonIndex = index;
}

static void SpriteCB_SummarySprite_ExpBar(struct Sprite *sprite)
{
    u32 index = SummaryInput_GetIndex();

    if (index == sprite->sMonIndex) return;

    SummarySprite_InjectExpBar(sprite);
    sprite->sMonIndex = index;
}

static void SpriteCB_SummarySprite_FriendshipBar(struct Sprite *sprite)
{
    u32 index = SummaryInput_GetIndex();

    if (index == sprite->sMonIndex) return;

    SummarySprite_InjectFriendshipBar(sprite);
    sprite->sMonIndex = index;
}

// dynamic windows handles the id on its own
static void SummaryPrint_AddText(u32 windowId, u32 fontId, u32 x, u32 y, enum MonSummaryFontColors color, const u8 *str)
{
    AddTextPrinterParameterized4(windowId, fontId, x, y, 0, 0, sSummaryPrint_FontColors[color], TEXT_SKIP_DRAW, str);
}

static const struct WindowTemplate *SummaryPrint_GetMainWindowTemplate(u32 windowId)
{
    if (windowId >= ARRAY_COUNT(sSummarySetup_MainWindows)
     || windowId >= NUM_SUMMARY_MAIN_WINDOWS)
    {
        return &gDummyWindowTemplate;
    }

    return &sSummarySetup_MainWindows[windowId];
}

static void SummaryPrint_Header(void)
{
    // blit
    u32 winId = SUMMARY_MAIN_WIN_HEADER;
    SummaryPrint_BlitPageTabs(winId, 1, 4);

    // title
    const u8 *str = SummaryPage_GetName(SummaryPage_GetValue());
    u32 width = TILE_TO_PIXELS(SummaryPrint_GetMainWindowTemplate(winId)->width);

    u32 fontId = GetOutlineFontIdToFit(str, width);
    u32 x = GetStringCenterAlignXOffsetWithLetterSpacing(fontId, str, width, -1);

    SummaryPrint_AddText(winId, fontId, x, 16, SUMMARY_FNTCLR_INTERFACE, str);
    CopyWindowToVram(winId, COPYWIN_GFX);
}

static void SummaryPrint_BlitPageTabs(u32 windowId, u32 x, u32 y)
{
    for (enum MonSummaryPages page = 0; page < NUM_SUMMARY_PAGES; page++)
    {
        bool32 selected = page == SummaryPage_GetValue();

        BlitBitmapRectToWindow(windowId, sSummaryPrint_PageTabsBlit, selected * 8, 0, 16, 8, x, y, 8, 8);
        x += 11;
    }
}

static void SummaryPrint_BlitStatusSymbol(u32 x, u32 y)
{
    u32 ailment = SummaryMon_GetStruct()->ailment;
    if (ailment == AILMENT_NONE) return;
    ailment--;

    BlitBitmapRectToWindow(SUMMARY_MAIN_WIN_PAGE_TEXT,
        sSummaryPrint_StatusSymbolsBlit,
        0, ailment * 8,
        24, 64,
        x, y,
        24, 8);
}

static UNUSED void SummaryPrint_BlitMonMarkings(u32 windowId, u32 x, u32 y)
{

}

static void SummaryPrint_HelpBar(void)
{
    enum MonSummaryPages page = SummaryPage_GetValue();
    const u8 *str = SummaryPage_GetHelpBarText(page);

    if (page == SUMMARY_PAGE_MOVES)
    {
        switch (SummaryInput_IsWithinSubMode())
        {
        default:
            break;
        case SUMMARY_MOVES_SUB_MODE_REORDER:
            str = sMovesPageMisc_ReorderTexts[sMonSummaryDataPtr->arg.moves.reorderFail].help;
            break;
        case SUMMARY_MOVES_SUB_MODE_FORGET:
            str = sMovesPageMisc_ForgetStateTexts[sMonSummaryDataPtr->arg.moves.forgetState].help;
            break;
        }
    }

    SummaryPrint_AddText(SUMMARY_MAIN_WIN_HELP_BAR, FONT_SMALL, 10, 1, SUMMARY_FNTCLR_HELP_BAR, str);
    CopyWindowToVram(SUMMARY_MAIN_WIN_HELP_BAR, COPYWIN_GFX);
}

static void SummaryPrint_TextBox(const u8 *str)
{
    DrawDialogFrameWithCustomTileAndPalette(SUMMARY_MAIN_WIN_TEXT_BOX, FALSE, SUMMARY_TEXT_BOX_BASE_TILE, SUMMARY_TEXT_BOX_PALETTE);
    SummaryPrint_AddText(SUMMARY_MAIN_WIN_TEXT_BOX, FONT_NORMAL, 0, 1, SUMMARY_FNTCLR_TEXT_BOX, str);
    CopyWindowToVram(SUMMARY_MAIN_WIN_TEXT_BOX, COPYWIN_GFX);
}

static void SummaryPrint_MonName(u32 x, u32 y, u32 maxWidth)
{
    struct MonSummary *mon = SummaryMon_GetStruct();
    const u8 *str = SummaryInput_GetUpdateText() ? GetSpeciesName(mon->species2) : mon->nickname;
    u32 fontId = GetOutlineFontIdToFit(str, maxWidth);
    u32 windowId = SUMMARY_MAIN_WIN_PAGE_TEXT;

    FillWindowPixelRect(windowId, PIXEL_FILL(0), x, y, maxWidth, 16);
    PutWindowTilemap(windowId);

    SummaryPrint_AddText(windowId, fontId, x, y, SUMMARY_FNTCLR_INTERFACE, str);
}

static void SummaryPrint_MonGender(u32 x, u32 y)
{
    struct MonSummary *mon = SummaryMon_GetStruct();
    u32 species = mon->species2, gender = mon->gender;

    if ((species == SPECIES_NIDORAN_M || species == SPECIES_NIDORAN_F)
     || gender == MON_GENDERLESS)
    {
        return;
    }

    u32 femaleMon = gender == MON_FEMALE;
    enum MonSummaryFontColors color = SUMMARY_FNTCLR_MALE + femaleMon;
    const u8 *str = femaleMon ? gText_FemaleSymbol : gText_MaleSymbol;

    SummaryPrint_AddText(SUMMARY_MAIN_WIN_PAGE_TEXT, FONT_OUTLINED, x, y, color, str);
}

static void SummaryPrint_MonLevel(u32 x, u32 y)
{
    struct MonSummary *mon = SummaryMon_GetStruct();

    ConvertUIntToDecimalStringN(gStringVar1, mon->level, STR_CONV_MODE_LEFT_ALIGN, CountDigits(MAX_LEVEL));
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("{SHADOW 13}{LV}{SHADOW 1}{STR_VAR_1}"));

    SummaryPrint_AddText(SUMMARY_MAIN_WIN_PAGE_TEXT, FONT_OUTLINED, x, y, SUMMARY_FNTCLR_INTERFACE, gStringVar4);
}

static void SummaryPrint_MonHeldItem(u32 x, u32 y, u32 maxWidth)
{
    struct MonSummary *mon = SummaryMon_GetStruct();
    u32 itemId = mon->item;

    if (itemId == ITEM_NONE || itemId >= ITEMS_COUNT) return;

    const u8 *str = GetItemName(itemId);
    u32 fontId = GetOutlineFontIdToFit(str, maxWidth);

    SummaryPrint_AddText(SUMMARY_MAIN_WIN_PAGE_TEXT, fontId, x, y, SUMMARY_FNTCLR_INTERFACE, str);
}

static void SummaryPrint_MonAbilityName(u32 x, u32 y, u32 maxWidth)
{
    struct MonSummary *mon = SummaryMon_GetStruct();
    enum Ability ability = GetSpeciesAbility(mon->species, mon->abilityNum);
    const u8 *str = GetAbilityName(ability);
    u32 fontId = GetOutlineFontIdToFit(str, maxWidth);

    SummaryPrint_AddText(SUMMARY_MAIN_WIN_PAGE_TEXT, fontId, x, y, SUMMARY_FNTCLR_INTERFACE, str);
}

static void SummaryPrint_MonAbilityDesc(u32 x, u32 y, u32 maxWidth)
{
    struct MonSummary *mon = SummaryMon_GetStruct();
    enum Ability ability = GetSpeciesAbility(mon->species2, mon->abilityNum);
    const u8 *str = GetAbilityDesc(ability);
    u32 fontId = GetFontIdToFit(str, FONT_SMALL, 0, maxWidth);

    SummaryPrint_AddText(SUMMARY_MAIN_WIN_PAGE_TEXT, fontId, x, y, SUMMARY_FNTCLR_INTERFACE, str);
}

static void SummaryPrint_MonStat(enum Stat statIdx, u32 flag, u32 y)
{
    struct MonSummary *mon = SummaryMon_GetStruct();
    u32 windowId = SUMMARY_MAIN_WIN_PAGE_TEXT;

    if (flag & SUMMARY_STATS_FLAG_NAME)
    {
        enum MonSummaryFontColors color = SUMMARY_FNTCLR_NEU_STAT;
        u32 x2 = SUMMARY_STATS_GENERAL_NATURE_X;

        if (statIdx == gNaturesInfo[mon->nature].statUp)
        {
            color = SUMMARY_FNTCLR_POS_STAT;
            SummaryPrint_AddText(windowId, FONT_OUTLINED, x2, y, SUMMARY_FNTCLR_INTERFACE, COMPOUND_STRING("+"));
        }
        else if (statIdx == gNaturesInfo[mon->nature].statDown)
        {
            color = SUMMARY_FNTCLR_NEG_STAT;
            SummaryPrint_AddText(windowId, FONT_OUTLINED, x2, y, SUMMARY_FNTCLR_INTERFACE, COMPOUND_STRING("-"));
        }

        SummaryPrint_AddText(windowId, FONT_OUTLINED,
            SUMMARY_STATS_GENERAL_NAME_X, y,
            color, sStatsPageGeneral_StatsNames[statIdx]);
    }

    if (flag & SUMMARY_STATS_FLAG_EVS)
    {
        u32 ev = GetMonData(&sMonSummaryDataPtr->mon, MON_DATA_HP_EV + statIdx);

        ConvertUIntToDecimalStringN(gStringVar1, ev, STR_CONV_MODE_LEFT_ALIGN, 3);
        u32 centerAlign = GetStringCenterAlignXOffsetWithLetterSpacing(FONT_OUTLINED,
                                gStringVar1, TILE_TO_PIXELS(2), -1);

        SummaryPrint_AddText(windowId, FONT_OUTLINED,
            SUMMARY_STATS_GENERAL_EVS_X + centerAlign, y,
            SUMMARY_FNTCLR_INTERFACE, gStringVar1);
    }

    if (flag & SUMMARY_STATS_FLAG_IVS)
    {
        u32 iv = GetMonData(&sMonSummaryDataPtr->mon, MON_DATA_HP_IV + statIdx);

        ConvertUIntToDecimalStringN(gStringVar1, iv, STR_CONV_MODE_LEFT_ALIGN, 2);
        u32 centerAlign = GetStringCenterAlignXOffsetWithLetterSpacing(FONT_OUTLINED, gStringVar1, 11, -1);

        SummaryPrint_AddText(windowId, FONT_OUTLINED,
            SUMMARY_STATS_GENERAL_IVS_X + centerAlign, y,
            SUMMARY_FNTCLR_INTERFACE, gStringVar1);
    }

    if (flag & SUMMARY_STATS_FLAG_STATS)
    {
        u32 stat = GetMonData(&sMonSummaryDataPtr->mon, MON_DATA_MAX_HP + statIdx);

        ConvertUIntToDecimalStringN(gStringVar1, stat, STR_CONV_MODE_LEFT_ALIGN, 4);
        u32 centerAlign = GetStringCenterAlignXOffsetWithLetterSpacing(FONT_OUTLINED, gStringVar1, TILE_TO_PIXELS(3) - 3, -1);

        SummaryPrint_AddText(windowId, FONT_OUTLINED,
            SUMMARY_STATS_GENERAL_STATS_X + centerAlign, y,
            SUMMARY_FNTCLR_INTERFACE, gStringVar1);
    }
}

static void SummaryPrint_MoveName(u32 idx, u32 x, u32 y)
{
    idx %= MAX_MON_MOVES;

    struct MonSummary *mon = SummaryMon_GetStruct();
    u32 move = mon->moves[idx];

    if (move == MOVE_NONE || move >= MOVES_COUNT) return;

    const u8 *str = GetMoveName(move);
    u32 fontId = GetOutlineFontIdToFit(str, TILE_TO_PIXELS(10));

    SummaryPrint_AddText(SUMMARY_MAIN_WIN_PAGE_TEXT, fontId, x, y, SUMMARY_FNTCLR_INTERFACE, str);
}

static void SummaryPrint_BlitMoveType(u32 idx, u32 x, u32 y)
{
    idx %= MAX_MON_MOVES;

    struct MonSummary *mon = SummaryMon_GetStruct();
    u32 move = mon->moves[idx];

    if (move == MOVE_NONE || move >= MOVES_COUNT) return;

    enum Type type = GetMoveType(move);
    BlitBitmapRectToWindow(SUMMARY_MAIN_WIN_PAGE_TEXT, sMovesPageGeneral_MoveTypeGfx,
        0, type * 16,
        16, 16 * NUMBER_OF_MON_TYPES,
        x, y,
        16, 16);
}

static void Task_SummaryPrint_UpdateText(u8 taskId)
{
    if ((++gTasks[taskId].tUpdateText % 600) == 0)
    {
        SummaryInput_SetUpdateText(SummaryInput_GetUpdateText() ^ 1);
        void (*updateTextFunc)(void) = SummaryPage_GetHandleUpdateTextFunc(SummaryPage_GetValue());
        updateTextFunc();
        CopyWindowToVram(SUMMARY_MAIN_WIN_PAGE_TEXT, COPYWIN_GFX);

        return;
    }
}

static void DummyPage_Handle(void)
{
    StringCopy(gStringVar4, COMPOUND_STRING(" "));
}

static void InfosPage_HandleFrontEnd(void)
{
    InfosPage_HandleHeader();
    InfosPage_HandleGeneral();
    InfosPage_HandleMisc();
}

static void InfosPage_HandleUpdateText(void)
{
    SummaryPrint_MonName(SUMMARY_INFOS_HEADER_NAME_X, SUMMARY_INFOS_HEADER_NAME_Y, TILE_TO_PIXELS(8) - 2);
    InfosPageGeneral_PrintNatureInfo(SummaryMon_GetStruct());
}

static void InfosPage_HandleHeader(void)
{
    SummaryPrint_MonName(SUMMARY_INFOS_HEADER_NAME_X, SUMMARY_INFOS_HEADER_NAME_Y, TILE_TO_PIXELS(8) - 2);
    SummaryPrint_MonGender(SUMMARY_INFOS_HEADER_GENDER_X, SUMMARY_INFOS_HEADER_GENDER_Y);
    SummaryPrint_MonLevel(SUMMARY_INFOS_HEADER_LEVEL_X, SUMMARY_INFOS_HEADER_LEVEL_Y);
    SummaryPrint_BlitStatusSymbol(SUMMARY_INFOS_HEADER_STATUS_X, SUMMARY_INFOS_HEADER_STATUS_Y);
}

static void InfosPage_HandleGeneral(void)
{
    struct MonSummary *mon = SummaryMon_GetStruct();

    InfosPageGeneral_PrintMonTyping(mon);
    InfosPageGeneral_PrintTrainerInfo(mon);
    InfosPageGeneral_PrintNeededExperience(mon);
    InfosPageGeneral_PrintNatureInfo(mon);
}

static void InfosPageGeneral_PrintMonTyping(struct MonSummary *mon)
{
    u32 windowId = SUMMARY_MAIN_WIN_PAGE_TEXT;
    u32 fontId = FONT_OUTLINED;

    SummaryPrint_AddText(windowId, fontId,
        SUMMARY_INFOS_GENERAL_X, SUMMARY_INFOS_GENERAL_Y,
        SUMMARY_FNTCLR_INTERFACE, COMPOUND_STRING("Type:"));

    u32 species = mon->species;
    enum Type types[2] = { GetSpeciesType(species, 0), GetSpeciesType(species, 1) };

    SummaryPrint_AddText(windowId, fontId,
        SUMMARY_INFOS_GENERAL_X2, SUMMARY_INFOS_GENERAL_Y,
        SUMMARY_FNTCLR_INTERFACE, gTypesInfo[types[0]].shortName);

    if (types[1] != types[0])
    {
        SummaryPrint_AddText(windowId, fontId,
            SUMMARY_INFOS_GENERAL_X3, SUMMARY_INFOS_GENERAL_Y,
            SUMMARY_FNTCLR_INTERFACE, gTypesInfo[types[1]].shortName);
    }
}

static void InfosPageGeneral_PrintTrainerInfo(struct MonSummary *mon)
{
    u32 windowId = SUMMARY_MAIN_WIN_PAGE_TEXT;
    u32 fontId = FONT_OUTLINED;

    // OT: <trainer name>
    SummaryPrint_AddText(windowId, fontId,
        SUMMARY_INFOS_GENERAL_X, SUMMARY_INFOS_GENERAL_Y2,
        SUMMARY_FNTCLR_INTERFACE, COMPOUND_STRING("OT:"));
    SummaryPrint_AddText(windowId, fontId,
        SUMMARY_INFOS_GENERAL_X2, SUMMARY_INFOS_GENERAL_Y2,
        SUMMARY_FNTCLR_INTERFACE, mon->trainerName);

    // ID: <numbers>
    ConvertIntToDecimalStringN(gStringVar1, (u16)mon->trainerId, STR_CONV_MODE_LEADING_ZEROS, 5);
    SummaryPrint_AddText(windowId, fontId,
        SUMMARY_INFOS_GENERAL_X, SUMMARY_INFOS_GENERAL_Y3,
        SUMMARY_FNTCLR_INTERFACE, COMPOUND_STRING("ID:"));
    SummaryPrint_AddText(windowId, fontId,
        SUMMARY_INFOS_GENERAL_X2, SUMMARY_INFOS_GENERAL_Y3,
        SUMMARY_FNTCLR_INTERFACE, gStringVar1);
}

static void InfosPageGeneral_PrintNeededExperience(struct MonSummary *mon)
{
    u32 windowId = SUMMARY_MAIN_WIN_PAGE_TEXT;
    u32 fontId = FONT_OUTLINED;

    // EXP: <numbers> to Lv <next level>
    SummaryPrint_AddText(windowId, fontId,
        SUMMARY_INFOS_GENERAL_X, SUMMARY_INFOS_GENERAL_Y4,
        SUMMARY_FNTCLR_INTERFACE, COMPOUND_STRING("EXP:"));

    u32 species = mon->species;
    u32 level = mon->level;

    u32 exp = 0;
    if (level < MAX_LEVEL)
    {
        exp = gExperienceTables[gSpeciesInfo[species].growthRate][level + 1] - mon->exp;
        level += 1;
    }

    ConvertUIntToDecimalStringN(gStringVar1, exp, STR_CONV_MODE_LEFT_ALIGN, 7);
    ConvertUIntToDecimalStringN(gStringVar2, level, STR_CONV_MODE_LEFT_ALIGN, CountDigits(MAX_LEVEL));
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("{STR_VAR_1} to {LV} {STR_VAR_2}"));

    SummaryPrint_AddText(windowId, fontId,
        SUMMARY_INFOS_GENERAL_X2, SUMMARY_INFOS_GENERAL_Y4,
        SUMMARY_FNTCLR_INTERFACE, gStringVar4);
}

// <nature> nature <fav flavor> combined, will be called more often
static void InfosPageGeneral_PrintNatureInfo(struct MonSummary *mon)
{
    u32 windowId = SUMMARY_MAIN_WIN_PAGE_TEXT;
    u32 winWidth = WindowWidthPx(windowId);
    u32 fontId = FONT_OUTLINED;

    StringCopy(gStringVar1, gNaturesInfo[mon->nature].name);
    if (mon->flavors[0] != FLAVOR_COUNT && mon->flavors[1] != FLAVOR_COUNT)
    {
        if (SummaryInput_GetUpdateText())
        {
            StringCopy(gStringVar2, COMPOUND_STRING("{BIG_MULT_X} "));
            StringAppend(gStringVar2, sInfosPageGeneral_BerryFlavorNames[mon->flavors[SUMMARY_MON_DISLIKED_FLAVOR]]);
        }
        else
        {
            StringCopy(gStringVar2, COMPOUND_STRING("{EMOJI_HEART} "));
            StringAppend(gStringVar2, sInfosPageGeneral_BerryFlavorNames[mon->flavors[SUMMARY_MON_LIKED_FLAVOR]]);
        }
    }
    else
    {
        StringCopy(gStringVar2, COMPOUND_STRING(" "));
    }

    const u8 *strTemplate = COMPOUND_STRING("{STR_VAR_1} Nature {STR_VAR_2}");

    StringExpandPlaceholders(gStringVar4, strTemplate);
    fontId = GetOutlineFontIdToFit(gStringVar4, winWidth);

    FillWindowPixelRect(windowId, PIXEL_FILL(0), SUMMARY_INFOS_GENERAL_X, SUMMARY_INFOS_GENERAL_Y5, winWidth, 16);
    PutWindowTilemap(windowId);

    SummaryPrint_AddText(windowId, fontId,
        SUMMARY_INFOS_GENERAL_X, SUMMARY_INFOS_GENERAL_Y5,
        SUMMARY_FNTCLR_INTERFACE, gStringVar4);
}

static void InfosPage_HandleMisc(void)
{
    // PSF TODO update and use SummaryPrint_BlitMonMarkings once all 6 markings are implemented

    SummaryPrint_MonHeldItem(SUMMARY_INFOS_MISC_ITEM_NAME_X, SUMMARY_INFOS_MISC_ITEM_NAME_Y, TILE_TO_PIXELS(8));
    SummaryPrint_MonAbilityName(SUMMARY_INFOS_MISC_ABILITY_NAME_X, SUMMARY_INFOS_MISC_ABILITY_NAME_Y, TILE_TO_PIXELS(10));

    SummarySprite_MonHeldItem(SUMMARY_INFOS_SPRITE_HELD_ITEM,
        SUMMARY_INFOS_MISC_HELD_ITEM_X, SUMMARY_INFOS_MISC_HELD_ITEM_Y);

    SummarySprite_MonPokeBall(SUMMARY_INFOS_SPRITE_POKE_BALL,
        SUMMARY_INFOS_MISC_POKE_BALL_X, SUMMARY_INFOS_MISC_POKE_BALL_Y);

    InfosPageMisc_PrintTextBox();
    InfosPageMisc_TrySpawnDescCursor();
}

static void InfosPageMisc_PrintTextBox(void)
{
    struct MonSummary *mon = SummaryMon_GetStruct();
    u32 x = SUMMARY_INFOS_MISC_TEXT_BOX_X, y = SUMMARY_INFOS_MISC_TEXT_BOX_Y;
    enum MonSummaryFontColors color = SUMMARY_FNTCLR_INTERFACE;

    if (!SummaryInput_IsWithinSubMode())
    {
        ConvertUIntToDecimalStringN(gStringVar1, mon->metLevel, STR_CONV_MODE_LEFT_ALIGN, CountDigits(MAX_LEVEL));
        GetMapName(gStringVar2, mon->metLocation, 0);
        StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Met at {LV} {STR_VAR_1}, {STR_VAR_2}."));
        SummaryPrint_AddText(SUMMARY_MAIN_WIN_PAGE_TEXT, FONT_NORMAL, x, y, color, gStringVar4);
    }
    else
    {
        u32 maxWidth = TILE_TO_PIXELS(23);

        if (sMonSummaryDataPtr->arg.infosDescState)
        {
            u32 itemId = mon->item;
            u32 fontId = FONT_NORMAL;

            if (itemId == ITEM_NONE || itemId >= ITEMS_COUNT) return;

            StringCopy(gStringVar4, GetItemDescription(itemId));

            StripLineBreaks(gStringVar4);
            BreakStringAutomatic(gStringVar4, maxWidth, 3, fontId, HIDE_SCROLL_PROMPT);

            SummaryPrint_AddText(SUMMARY_MAIN_WIN_PAGE_TEXT, fontId, x, y, SUMMARY_FNTCLR_INTERFACE, gStringVar4);
        }
        else
        {
            SummaryPrint_MonAbilityDesc(SUMMARY_INFOS_MISC_TEXT_BOX_X, SUMMARY_INFOS_MISC_TEXT_BOX_Y, maxWidth);
        }
    }
}

static void InfosPageMisc_TrySpawnDescCursor(void)
{
    u32 spriteId = SummarySprite_GetDynamicSpriteId(SUMMARY_INFOS_SPRITE_DESC_CURSOR);

    if (spriteId != SPRITE_NONE) return;

    spriteId = CreateSprite(&sInfosPageMisc_CursorSpriteTemplate,
        SUMMARY_INFOS_MISC_DESC_CURSOR_X, SUMMARY_INFOS_MISC_DESC_CURSOR_Y, 0);

    SetSubspriteTables(&gSprites[spriteId], sSummarySprite_128x16SubspriteTable);
    SummarySprite_SetDynamicSpriteId(SUMMARY_INFOS_SPRITE_DESC_CURSOR, spriteId);

    LoadCompressedSpriteSheetByTemplate(&sInfosPageMisc_ScrollIndicatorSpriteTemplate, 0);
    spriteId = CreateSprite(&sInfosPageMisc_ScrollIndicatorSpriteTemplate,
        SUMMARY_INFOS_MISC_SCROLL_INDICATOR_X, SUMMARY_INFOS_MISC_SCROLL_INDICATOR_Y, 0);

    gSprites[spriteId].sTileTag = sInfosPageMisc_ScrollIndicatorSpriteTemplate.tileTag;
    SummarySprite_SetDynamicSpriteId(SUMMARY_INFOS_SPRITE_SCROLL_INDICATOR, spriteId);
}

static void SpriteCB_InfosPageMisc_Cursor(struct Sprite *sprite)
{
    sprite->invisible = !SummaryInput_IsWithinSubMode();
    if (sprite->invisible) return;

    u32 state = sMonSummaryDataPtr->arg.infosDescState;

    sprite->y2 = -(state * 16);
    StartSpriteAnimIfDifferent(sprite, state);
}

static void SpriteCB_InfosPageMisc_ScrollIndicator(struct Sprite *sprite)
{
    sprite->invisible = !SummaryInput_IsWithinSubMode();
    if (sprite->invisible) return;

    u32 state = sMonSummaryDataPtr->arg.infosDescState;

    sprite->x2 = state * 8;
    sprite->y2 = -(state * 16);
}

static void StatsPage_HandleFrontEnd(void)
{
    StatsPage_HandleHeader();
    StatsPage_HandleGeneral();
    StatsPage_HandleMisc();
}

static void StatsPage_HandleUpdateText(void)
{
    SummaryPrint_MonName(SUMMARY_STATS_HEADER_NAME_X, SUMMARY_STATS_HEADER_Y, TILE_TO_PIXELS(8));
}

static void StatsPage_HandleHeader(void)
{
    SummaryPrint_MonName(SUMMARY_STATS_HEADER_NAME_X, SUMMARY_STATS_HEADER_Y, TILE_TO_PIXELS(8));
    SummaryPrint_MonGender(SUMMARY_STATS_HEADER_GENDER_X, SUMMARY_STATS_HEADER_Y);
    SummaryPrint_MonLevel(SUMMARY_STATS_HEADER_LEVEL_X, SUMMARY_STATS_HEADER_Y);
    SummarySprite_MonTypes(SUMMARY_STATS_SPRITE_TYPE_1, SUMMARY_STATS_HEADER_TYPINGS_X, SUMMARY_STATS_HEADER_TYPINGS_Y);
}

// thanks middle speed..
static void StatsPage_HandleGeneral(void)
{
    u32 y = SUMMARY_STATS_GENERAL_Y;
    SummaryPrint_MonStat(STAT_HP,    SUMMARY_STATS_FLAG_ALL, y);

    y += SUMMARY_STATS_GENERAL_ADDITIVE_Y;
    SummaryPrint_MonStat(STAT_ATK,   SUMMARY_STATS_FLAG_ALL, y);

    y += SUMMARY_STATS_GENERAL_ADDITIVE_Y;
    SummaryPrint_MonStat(STAT_DEF,   SUMMARY_STATS_FLAG_ALL, y);

    y += SUMMARY_STATS_GENERAL_ADDITIVE_Y;
    SummaryPrint_MonStat(STAT_SPATK, SUMMARY_STATS_FLAG_ALL, y);

    y += SUMMARY_STATS_GENERAL_ADDITIVE_Y;
    SummaryPrint_MonStat(STAT_SPDEF, SUMMARY_STATS_FLAG_ALL, y);

    y += SUMMARY_STATS_GENERAL_ADDITIVE_Y;
    SummaryPrint_MonStat(STAT_SPEED, SUMMARY_STATS_FLAG_ALL, y);
}

static void StatsPage_HandleMisc(void)
{
    // PSF TODO update and use SummaryPrint_BlitMonMarkings once all 6 markings are implemented

    StatsPageMisc_MonTotalEVs();

    SummaryPrint_MonHeldItem(
        SUMMARY_STATS_MISC_ITEM_NAME_X, SUMMARY_STATS_MISC_ITEM_NAME_Y,
        TILE_TO_PIXELS(8));

    SummaryPrint_MonAbilityName(
        SUMMARY_STATS_MISC_ABILITY_NAME_X, SUMMARY_STATS_MISC_ABILITY_NAME_Y,
        TILE_TO_PIXELS(8));

    SummarySprite_MonHeldItem(SUMMARY_INFOS_SPRITE_HELD_ITEM,
        SUMMARY_STATS_MISC_HELD_ITEM_X, SUMMARY_STATS_MISC_HELD_ITEM_Y);

    if (SummaryInput_IsWithinSubMode() == SUMMARY_STATS_SUB_MODE_ERROR)
    {
        ConvertUIntToDecimalStringN(gStringVar1, StatsPageMisc_CalculateAvailableEVs(), STR_CONV_MODE_LEFT_ALIGN, 3);
        StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("You still have {STR_VAR_1} Effort Values!\nAssign them to a stat."));
        SummaryPrint_TextBox(gStringVar4);
    }

    StatsPageMisc_TrySpawnCursors();
}

static void StatsPageMisc_MonTotalEVs(void)
{
    struct MonSummary *mon = SummaryMon_GetStruct();
    u32 usedEVs = 0;

    for (enum Stat statIdx = 0; statIdx < NUM_STATS; statIdx++)
    {
        usedEVs += GetMonData(&sMonSummaryDataPtr->mon, MON_DATA_HP_EV + statIdx);
    }

    ConvertUIntToDecimalStringN(gStringVar1, usedEVs, STR_CONV_MODE_LEFT_ALIGN, 3);
    ConvertUIntToDecimalStringN(gStringVar2, mon->totalValues[SUMMARY_TOTAL_EVS], STR_CONV_MODE_LEFT_ALIGN, 3);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("EVs: {STR_VAR_1}/{STR_VAR_2}"));

    SummaryPrint_AddText(SUMMARY_MAIN_WIN_PAGE_TEXT, FONT_OUTLINED,
        SUMMARY_STATS_MISC_TOTAL_EVS_X, SUMMARY_STATS_MISC_TOTAL_EVS_Y,
        SUMMARY_FNTCLR_INTERFACE, gStringVar4);
}

static void StatsPageMisc_TrySpawnCursors(void)
{
    u32 spriteId;

    spriteId = SummarySprite_GetDynamicSpriteId(SUMMARY_STATS_SPRITE_STAT_CURSOR);
    if (spriteId == SPRITE_NONE)
    {
        spriteId = CreateSprite(&sStatsPageMisc_StatCursorSpriteTemplate, SUMMARY_STATS_MISC_CURSOR_X, SUMMARY_STATS_MISC_CURSOR_Y, 3);

        SetSubspriteTables(&gSprites[spriteId], sSummarySprite_128x16SubspriteTable);
        SummarySprite_SetDynamicSpriteId(SUMMARY_STATS_SPRITE_STAT_CURSOR, spriteId);
    }

    spriteId = SummarySprite_GetDynamicSpriteId(SUMMARY_STATS_SPRITE_UP_ARROW);
    if (spriteId == SPRITE_NONE)
    {
        spriteId = CreateSprite(&sStatsPageMisc_ArrowSpriteTemplate, SUMMARY_STATS_MISC_UP_ARROW_X, SUMMARY_STATS_MISC_UP_ARROW_Y, 0);

        gSprites[spriteId].callback = SpriteCB_StatsPageMisc_UpArrow;
        SummarySprite_SetDynamicSpriteId(SUMMARY_STATS_SPRITE_UP_ARROW, spriteId);
    }

    spriteId = SummarySprite_GetDynamicSpriteId(SUMMARY_STATS_SPRITE_DOWN_ARROW);
    if (spriteId == SPRITE_NONE)
    {
        spriteId = CreateSprite(&sStatsPageMisc_ArrowSpriteTemplate, SUMMARY_STATS_MISC_DOWN_ARROW_X, SUMMARY_STATS_MISC_DOWN_ARROW_Y, 0);

        gSprites[spriteId].vFlip = TRUE;
        gSprites[spriteId].callback = SpriteCB_StatsPageMisc_DownArrow;
        SummarySprite_SetDynamicSpriteId(SUMMARY_STATS_SPRITE_DOWN_ARROW, spriteId);
    }
}

// TODO refactor to work for IVs as well

static void StatsPageMisc_SetRow(u32 val)
{
    sMonSummaryDataPtr->arg.stats.row = val;
}

static u32 StatsPageMisc_GetRow(void)
{
    return sMonSummaryDataPtr->arg.stats.row;
}

static void StatsPageMisc_UpdateRow(s32 delta)
{
    bool32 additiveDelta = SummaryInput_IsInputAdditive(delta);
    u32 currVal = StatsPageMisc_GetRow(), maxVal = NUM_STATS - 1;

    if (!additiveDelta && !currVal)
    {
        StatsPageMisc_SetRow(maxVal);
    }
    else if (additiveDelta && currVal == maxVal)
    {
        StatsPageMisc_SetRow(0);
    }
    else
    {
        StatsPageMisc_SetRow(currVal + delta);
    }

    if (currVal != StatsPageMisc_GetRow())
    {
        PlaySE(SE_SELECT);
    }
}

static void StatsPageMisc_UpdateCurrentRowEVs(s32 delta)
{
    u32 trueRow = sStatsPageMisc_MonDataValuesOrders[SUMMARY_TOTAL_EVS][StatsPageMisc_GetRow()];
    u32 availableEvs = StatsPageMisc_CalculateAvailableEVs();
    u32 evs = GetMonData(&sMonSummaryDataPtr->mon, trueRow);
    bool32 additiveDelta = SummaryInput_IsInputAdditive(delta);
    s32 res = evs + delta;

    if (delta == SUMMARY_STATS_MAX_EVS)
    {
        res = MAX_PER_STAT_EVS;
    }
    else if (delta == SUMMARY_STATS_MIN_EVS)
    {
        res = 0;
    }

    if (additiveDelta)
    {
        while (res > (s32)(evs + availableEvs) || res > MAX_PER_STAT_EVS)
        {
            res--;
        }
    }
    else if (!additiveDelta)
    {
        while (res < 0)
        {
            res++;
        }
    }

    evs = res;
    SetMonData(&sMonSummaryDataPtr->mon, trueRow, &evs);
    CalculateMonStats(&sMonSummaryDataPtr->mon);
    SummaryPage_Reload(SUMMARY_RELOAD_FRONT_END);

    if (availableEvs != StatsPageMisc_CalculateAvailableEVs())
    {
        PlaySE(SE_SELECT);
    }
}

// only "useable" when within the evs changing mode
// since we're comparing the OG evs _and_ the edited evs that are stored by the UI
static u32 StatsPageMisc_CalculateAvailableEVs(void)
{
    struct MonSummary *mon = SummaryMon_GetStruct();
    u32 ogTotalValues = mon->totalValues[SUMMARY_TOTAL_EVS];
    u32 totalValues = StatsPageMisc_UpdateTotalEVs();

    if (totalValues == ogTotalValues) return 0;

    return ogTotalValues - totalValues;
}

// fills using the evs array
static u32 StatsPageMisc_UpdateTotalEVs(void)
{
     sMonSummaryDataPtr->arg.stats.totalEvs = 0;

    for (u32 idx = 0; idx < NUM_STATS; idx++)
    {
        sMonSummaryDataPtr->arg.stats.totalEvs += GetMonData(&sMonSummaryDataPtr->mon, MON_DATA_HP_EV + idx);
    }

    return sMonSummaryDataPtr->arg.stats.totalEvs;
}

static void SpriteCB_StatsPageMisc_StatCursor(struct Sprite *sprite)
{
    u32 subMode = SummaryInput_IsWithinSubMode();
    sprite->invisible = subMode < SUMMARY_STATS_SUB_MODE_SELECT_ROW;
    if (sprite->invisible) return;

    sprite->y2 = SUMMARY_STATS_GENERAL_ADDITIVE_Y * sMonSummaryDataPtr->arg.stats.row;
    StartSpriteAnimIfDifferent(sprite, subMode == SUMMARY_STATS_SUB_MODE_ADJUST_VALUE);
}

static void SpriteCB_StatsPageMisc_UpArrow(struct Sprite *sprite)
{
    bool32 notAdjustValue = SummaryInput_IsWithinSubMode() != SUMMARY_STATS_SUB_MODE_ADJUST_VALUE;
    sprite->invisible = notAdjustValue;
    if (notAdjustValue) return;

    sprite->invisible = !StatsPageMisc_CalculateAvailableEVs();
    sprite->y2 = SUMMARY_STATS_GENERAL_ADDITIVE_Y * sMonSummaryDataPtr->arg.stats.row;
}

static void SpriteCB_StatsPageMisc_DownArrow(struct Sprite *sprite)
{
    bool32 notAdjustValue = SummaryInput_IsWithinSubMode() != SUMMARY_STATS_SUB_MODE_ADJUST_VALUE;
    sprite->invisible = notAdjustValue;
    if (notAdjustValue) return;

    sprite->invisible = !GetMonData(&sMonSummaryDataPtr->mon, sStatsPageMisc_MonDataValuesOrders[SUMMARY_TOTAL_EVS][StatsPageMisc_GetRow()]);
    sprite->y2 = SUMMARY_STATS_GENERAL_ADDITIVE_Y * sMonSummaryDataPtr->arg.stats.row;
}

static void MovesPage_HandleFrontEnd(void)
{
    MovesPage_HandleHeader();
    MovesPage_HandleGeneral();
    MovesPage_HandleMisc();
}

static void MovesPage_HandleUpdateText(void)
{
    SummaryPrint_MonName(SUMMARY_MOVES_HEADER_NAME_X, SUMMARY_MOVES_HEADER_Y, TILE_TO_PIXELS(8));
}

static void MovesPage_HandleHeader(void)
{
    SummaryPrint_MonName(SUMMARY_MOVES_HEADER_NAME_X, SUMMARY_MOVES_HEADER_Y, TILE_TO_PIXELS(8));
    SummaryPrint_MonGender(SUMMARY_MOVES_HEADER_GENDER_X, SUMMARY_MOVES_HEADER_Y);
    SummaryPrint_MonLevel(SUMMARY_MOVES_HEADER_LEVEL_X, SUMMARY_MOVES_HEADER_Y);
    SummarySprite_MonTypes(SUMMARY_MOVES_SPRITE_TYPE_1, SUMMARY_MOVES_HEADER_TYPINGS_X, SUMMARY_MOVES_HEADER_TYPINGS_Y);
}

static void MovesPage_HandleGeneral(void)
{
    SummarySprite_PrepareMonMovesGfx();

    for (u32 i = 0, y = SUMMARY_MOVES_GENERAL_Y; i < MAX_MON_MOVES; i++, y += SUMMARY_MOVES_GENERAL_ADDITIVE_Y)
    {
        SummarySprite_MonMove(i, SUMMARY_MOVES_GENERAL_SPRITE_BAR_X, y);
        SummaryPrint_MoveName(i, SUMMARY_MOVES_GENERAL_NAME_X, y);
        SummaryPrint_BlitMoveType(i, SUMMARY_MOVES_GENERAL_ICON_BLIT_X, y);
    }
}

static void MovesPage_HandleMisc(void)
{
    enum MonSummaryMovesSubModes subMode = SummaryInput_IsWithinSubMode();

    MovesPageMisc_TrySpawnCursors();

    switch (subMode)
    {
    default:
        if (sMovesPageMisc_MenuTilemaps[subMode] != NULL)
            MovesPageMisc_PutMenuTilemap(subMode);
        else
            MovesPageMisc_PutMenuTilemap(0);
        break;

    case SUMMARY_MOVES_SUB_MODE_FORGET:
        switch (sMonSummaryDataPtr->arg.moves.forgetState)
        {
        default:
            MovesPageMisc_PutMenuTilemap(0);
            break;
        case SUMMARY_MOVES_FORGET_STATE_CONFIRM:
            MovesPageMisc_PutMenuTilemap(subMode);
            break;
        }
        break;

    case SUMMARY_MOVES_SUB_MODE_REORDER:
        if (sMonSummaryDataPtr->arg.moves.reorderFail)
            MovesPageMisc_PutMenuTilemap(0);
        else
            MovesPageMisc_PutMenuTilemap(sMonSummaryDataPtr->arg.moves.subMode);
        break;
    }

    if (!SummaryInput_IsWithinSubMode()) return;

    u32 slotIdx = MovesPageMisc_GetSlotIndex();

    if (subMode == SUMMARY_MOVES_SUB_MODE_REORDER && !sMonSummaryDataPtr->arg.moves.reorderFail)
    {
        subMode = sMonSummaryDataPtr->arg.moves.subMode;
        slotIdx = MovesPageMisc_GetNewSlotIndex();
    }

    switch (subMode)
    {
    default:
        break;
    case SUMMARY_MOVES_SUB_MODE_DETAILS:
        MovesPageMisc_PrintDetails(SummaryMon_GetStruct()->moves[slotIdx]);
        break;
    case SUMMARY_MOVES_SUB_MODE_OPTIONS:
        MovesPageMisc_PrintOptions();
        break;
    case SUMMARY_MOVES_SUB_MODE_FORGET:
        MovesPageMisc_PrintForgetConfirmation();
        break;
    }

    MovesPageMisc_PrintDescription();
}

static void MovesPageMisc_PutMenuTilemap(enum MonSummaryMovesSubModes subMode)
{
    CopyToBgTilemapBufferRect(SUMMARY_BG_PAGE_1, sMovesPageMisc_MenuTilemaps[subMode], 1, 4, 16, 8);
}

static void MovesPageMisc_PrintDetails(u32 move)
{
    struct MonSummary *mon = SummaryMon_GetStruct();
    u32 windowId = SUMMARY_MAIN_WIN_PAGE_TEXT;
    u32 fontId = FONT_OUTLINED;
    u32 x, val;

    val = GetMovePower(move);
    if (val)
        ConvertUIntToDecimalStringN(gStringVar1, val, STR_CONV_MODE_LEFT_ALIGN, 3);
    else
        StringCopy(gStringVar1, COMPOUND_STRING("---"));

    x = GetStringCenterAlignXOffsetWithLetterSpacing(fontId, gStringVar1, SUMMARY_MOVES_MISC_VALUE_TEXT_WIDTH, -1);
    SummaryPrint_AddText(windowId, fontId, SUMMARY_MOVES_MISC_NAME_X, SUMMARY_MOVES_MISC_POWER_Y, SUMMARY_FNTCLR_INTERFACE, COMPOUND_STRING("Pwr:"));
    SummaryPrint_AddText(windowId, fontId, SUMMARY_MOVES_MISC_VALUE_X + x, SUMMARY_MOVES_MISC_POWER_Y, SUMMARY_FNTCLR_INTERFACE, gStringVar1);

    val = GetMoveAccuracy(move);
    if (val)
        ConvertUIntToDecimalStringN(gStringVar1, val, STR_CONV_MODE_LEFT_ALIGN, 3);
    else
        StringCopy(gStringVar1, COMPOUND_STRING("---"));

    x = GetStringCenterAlignXOffsetWithLetterSpacing(fontId, gStringVar1, SUMMARY_MOVES_MISC_VALUE_TEXT_WIDTH, -1);
    SummaryPrint_AddText(windowId, fontId, SUMMARY_MOVES_MISC_NAME_X, SUMMARY_MOVES_MISC_ACCURACY_Y, SUMMARY_FNTCLR_INTERFACE, COMPOUND_STRING("Acc:"));
    SummaryPrint_AddText(windowId, fontId, SUMMARY_MOVES_MISC_VALUE_X + x, SUMMARY_MOVES_MISC_ACCURACY_Y, SUMMARY_FNTCLR_INTERFACE, gStringVar1);

    ConvertUIntToDecimalStringN(gStringVar1, mon->pp[MovesPageMisc_GetSlotIndex()], STR_CONV_MODE_LEFT_ALIGN, 2);
    ConvertUIntToDecimalStringN(gStringVar2,
        CalculatePPWithBonus(move, mon->ppBonuses, MovesPageMisc_GetSlotIndex()), STR_CONV_MODE_LEFT_ALIGN, 2);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("{STR_VAR_1}/{STR_VAR_2}"));
    x = GetStringCenterAlignXOffsetWithLetterSpacing(fontId, gStringVar4, 26, -1);
    SummaryPrint_AddText(windowId, fontId, SUMMARY_MOVES_MISC_NAME_X, SUMMARY_MOVES_MISC_PP_Y, SUMMARY_FNTCLR_INTERFACE, COMPOUND_STRING("PP:"));
    SummaryPrint_AddText(windowId, fontId, SUMMARY_MOVES_MISC_VALUE_X + x, SUMMARY_MOVES_MISC_PP_Y, SUMMARY_FNTCLR_INTERFACE, gStringVar4);

    SummaryPrint_AddText(windowId, fontId, SUMMARY_MOVES_MISC_CATEGORY_X, SUMMARY_MOVES_MISC_CATEGORY_Y, SUMMARY_FNTCLR_INTERFACE, GetMoveCategoryName(move));
}

static void MovesPageMisc_PrintOptions(void)
{
    u32 windowId = SUMMARY_MAIN_WIN_PAGE_TEXT, fontId = FONT_OUTLINED;

    for (enum MonSummaryMovesOptions i = 0; i < MAX_MON_MOVES; i++)
    {
        SummaryPrint_AddText(windowId, fontId,
            SUMMARY_MOVES_MISC_OPTION_X, SUMMARY_MOVES_MISC_OPTION_Y + (SUMMARY_MOVES_GENERAL_ADDITIVE_Y * i),
            SUMMARY_FNTCLR_INTERFACE, sMovesPageMisc_OptionInfo[i].name);
    }
}

static void MovesPageMisc_PrintForgetConfirmation(void)
{
    if (sMonSummaryDataPtr->arg.moves.forgetState != SUMMARY_MOVES_FORGET_STATE_CONFIRM) return;

    u32 windowId = SUMMARY_MAIN_WIN_PAGE_TEXT, fontId = FONT_OUTLINED;
    u32 idx = MovesPageMisc_GetForgetConfirmationIndex();

    BlitBitmapRectToWindow(windowId, sMovesPageMisc_ForgetConfirmationBlit,
        0, 0,
        88, 32,
        SUMMARY_MOVES_MISC_FORGET_CONFIRM_X, SUMMARY_MOVES_MISC_FORGET_CONFIRM_Y + (SUMMARY_MOVES_GENERAL_ADDITIVE_Y * idx),
        88, 16);

    SummaryPrint_AddText(windowId, fontId,
        SUMMARY_MOVES_MISC_CONFIRM_TEXT_X, SUMMARY_MOVES_MISC_FORGET_CONFIRM_Y,
        SUMMARY_FNTCLR_INTERFACE, gText_YesNo);
}

static void MovesPageMisc_PrintDescription(void)
{
    u32 windowId = SUMMARY_MAIN_WIN_PAGE_TEXT, fontId = FONT_NORMAL;
    const u8 *str = gText_EmptyString2;
    struct MonSummary *mon = SummaryMon_GetStruct();

    StringCopy_Nickname(gStringVar1, mon->nickname);

    if (sMonSummaryDataPtr->arg.moves.forgottenMove)
        StringCopy(gStringVar2, GetMoveName(sMonSummaryDataPtr->arg.moves.forgottenMove));
    else
        StringCopy(gStringVar2, GetMoveName(mon->moves[MovesPageMisc_GetSlotIndex()]));

    switch (SummaryInput_IsWithinSubMode())
    {
    default:
        break;
    case SUMMARY_MOVES_SUB_MODE_DETAILS:
        str = GetMoveDescription(mon->moves[MovesPageMisc_GetSlotIndex()]);
        break;
    case SUMMARY_MOVES_SUB_MODE_OPTIONS:
        str = sMovesPageMisc_OptionInfo[MovesPageMisc_GetOptionIndex()].desc;
        break;
    case SUMMARY_MOVES_SUB_MODE_REORDER:
        str = sMovesPageMisc_ReorderTexts[sMonSummaryDataPtr->arg.moves.reorderFail].desc;
        break;
    case SUMMARY_MOVES_SUB_MODE_FORGET:
        str = sMovesPageMisc_ForgetStateTexts[sMonSummaryDataPtr->arg.moves.forgetState].desc;
        break;
    }

    StringExpandPlaceholders(gStringVar4, str);
    StripLineBreaks(gStringVar4);
    BreakStringAutomatic(gStringVar4, TILE_TO_PIXELS(28), 3, fontId, HIDE_SCROLL_PROMPT);
    SummaryPrint_AddText(windowId, fontId,
        SUMMARY_MOVES_MISC_DESCRIPTION_X, SUMMARY_MOVES_MISC_DESCRIPTION_Y,
        SUMMARY_FNTCLR_INTERFACE, gStringVar4);
}

static void MovesPageMisc_TrySpawnCursors(void)
{
    u32 spriteId;

    spriteId = SummarySprite_GetDynamicSpriteId(SUMMARY_MOVES_SPRITE_SLOT_CURSOR);
    if (spriteId == SPRITE_NONE)
    {
        spriteId = CreateSprite(&sMovesPageMisc_SlotCursorSpriteTemplate, SUMMARY_MOVES_GENERAL_SPRITE_BAR_X, SUMMARY_MOVES_GENERAL_Y, 0);

        SetSubspriteTables(&gSprites[spriteId], sSummarySprite_128x16SubspriteTable);
        SummarySprite_SetDynamicSpriteId(SUMMARY_MOVES_SPRITE_SLOT_CURSOR, spriteId);
    }

    spriteId = SummarySprite_GetDynamicSpriteId(SUMMARY_MOVES_SPRITE_NEW_SLOT_CURSOR);
    if (spriteId == SPRITE_NONE)
    {
        spriteId = CreateSprite(&sMovesPageMisc_SlotCursorSpriteTemplate, SUMMARY_MOVES_GENERAL_SPRITE_BAR_X, SUMMARY_MOVES_GENERAL_Y, 0);

        gSprites[spriteId].callback = SpriteCB_MovesPageMisc_NewSlotCursor;
        SetSubspriteTables(&gSprites[spriteId], sSummarySprite_128x16SubspriteTable);
        SummarySprite_SetDynamicSpriteId(SUMMARY_MOVES_SPRITE_NEW_SLOT_CURSOR, spriteId);
    }

    spriteId = SummarySprite_GetDynamicSpriteId(SUMMARY_MOVES_SPRITE_OPTION_CURSOR);
    if (spriteId == SPRITE_NONE)
    {
        spriteId = CreateSprite(&sMovesPageMisc_OptionCursorSpriteTemplate, SUMMARY_MOVES_MISC_OPTION_CURSOR_X, SUMMARY_MOVES_MISC_OPTION_Y, 0);

        SetSubspriteTables(&gSprites[spriteId], sSummarySprite_128x16SubspriteTable);
        SummarySprite_SetDynamicSpriteId(SUMMARY_MOVES_SPRITE_OPTION_CURSOR, spriteId);
    }

    spriteId = SummarySprite_GetDynamicSpriteId(SUMMARY_MOVES_SPRITE_ARROWS);
    if (spriteId == SPRITE_NONE)
    {
        spriteId = CreateSprite(&sMovesPageMisc_ArrowsSpriteTemplate, SUMMARY_MOVES_GENERAL_ARROWS_X, SUMMARY_MOVES_GENERAL_ARROWS_Y, 0);
        SummarySprite_SetDynamicSpriteId(SUMMARY_MOVES_SPRITE_ARROWS, spriteId);
    }
}

static void MovesPageMisc_UpdateIndex(s32 delta)
{
    bool32 additiveDelta = SummaryInput_IsInputAdditive(delta);
    u32 currVal = MovesPageMisc_GetIndex(), maxVal = MovesPageMisc_GetMaxIndex();

    if (!additiveDelta && !currVal)
    {
        MovesPageMisc_SetIndex(maxVal);
    }
    else if (additiveDelta && currVal == maxVal)
    {
        MovesPageMisc_SetIndex(0);
    }
    else
    {
        MovesPageMisc_SetIndex(currVal + delta);
    }

    if (currVal != MovesPageMisc_GetIndex())
    {
        PlaySE(SE_SELECT);
        SummaryPage_Reload(SUMMARY_RELOAD_FRONT_END);
    }
}

static void MovesPageMisc_SetIndex(u32 idx)
{
    switch (SummaryInput_IsWithinSubMode())
    {
    default:
        break;
    case SUMMARY_MOVES_SUB_MODE_DETAILS:
        MovesPageMisc_SetSlotIndex(idx);
        break;
    case SUMMARY_MOVES_SUB_MODE_OPTIONS:
        MovesPageMisc_SetOptionIndex(idx);
        break;
    case SUMMARY_MOVES_SUB_MODE_REORDER:
        MovesPageMisc_SetNewSlotIndex(idx);
        break;
    case SUMMARY_MOVES_SUB_MODE_FORGET:
        MovesPageMisc_SetForgetConfirmationIndex(idx);
        break;
    }
}

static u32 MovesPageMisc_GetIndex(void)
{
    switch (SummaryInput_IsWithinSubMode())
    {
    default:
        break;
    case SUMMARY_MOVES_SUB_MODE_DETAILS:
        return MovesPageMisc_GetSlotIndex();
        break;
    case SUMMARY_MOVES_SUB_MODE_OPTIONS:
        return MovesPageMisc_GetOptionIndex();
        break;
    case SUMMARY_MOVES_SUB_MODE_REORDER:
        return MovesPageMisc_GetNewSlotIndex();
        break;
    case SUMMARY_MOVES_SUB_MODE_FORGET:
        return MovesPageMisc_GetForgetConfirmationIndex();
        break;
    }

    return 0;
}

static u32 MovesPageMisc_GetMaxIndex(void)
{
    u32 val = 1;

    switch (SummaryInput_IsWithinSubMode())
    {
    default:
        break;
    case SUMMARY_MOVES_SUB_MODE_OPTIONS:
        val = MAX_MON_MOVES;
        break;
    case SUMMARY_MOVES_SUB_MODE_REORDER:
    case SUMMARY_MOVES_SUB_MODE_DETAILS:
        val = SummaryMon_GetStruct()->totalMoves;
        break;
    case SUMMARY_MOVES_SUB_MODE_FORGET:
        val = NUM_SUMMARY_MOVES_FORGET_CONFIRMS; // Yes/No
        break;
    }

    return val - 1;
}

static void MovesPageMisc_SetSlotIndex(u32 idx)
{
    sMonSummaryDataPtr->arg.moves.slotIdx = idx;
}

static u32 MovesPageMisc_GetSlotIndex(void)
{
    return sMonSummaryDataPtr->arg.moves.slotIdx;
}

static void MovesPageMisc_SetOptionIndex(u32 idx)
{
    sMonSummaryDataPtr->arg.moves.optionIdx = idx;
}

static u32 MovesPageMisc_GetOptionIndex(void)
{
    return sMonSummaryDataPtr->arg.moves.optionIdx;
}

static void MovesPageMisc_SetNewSlotIndex(u32 idx)
{
    sMonSummaryDataPtr->arg.moves.newSlotIdx = idx;
}

static u32 MovesPageMisc_GetNewSlotIndex(void)
{
    return sMonSummaryDataPtr->arg.moves.newSlotIdx;
}

static void MovesPageMisc_SetForgetConfirmationIndex(u32 idx)
{
    if (sMonSummaryDataPtr->arg.moves.forgetState != SUMMARY_MOVES_FORGET_STATE_CONFIRM) return;

    sMonSummaryDataPtr->arg.moves.yesNoIdx = idx;
}

static u32 MovesPageMisc_GetForgetConfirmationIndex(void)
{
    return sMonSummaryDataPtr->arg.moves.yesNoIdx;
}

// TODO do a bag menu-like swapping instead
static void MovesPageMisc_SwapMoves(void)
{
    u32 firstSlotIdx = MovesPageMisc_GetSlotIndex();
    u32 secondSlotIdx = MovesPageMisc_GetNewSlotIndex();

    struct Pokemon *mon = &sMonSummaryDataPtr->mon;
    struct MonSummary *summary = SummaryMon_GetStruct();

    u32 firstMove = summary->moves[firstSlotIdx];
    u32 secondMove = summary->moves[secondSlotIdx];
    u32 firstPp = summary->pp[firstSlotIdx];
    u32 secondPp = summary->pp[secondSlotIdx];
    u32 ppBonuses = summary->ppBonuses;

    u8 firstPpUpMask = gPPUpGetMask[firstSlotIdx];
    u8 firstPpBonus = (ppBonuses & firstPpUpMask) >> (firstSlotIdx * 2);
    u8 secondPpUpMask = gPPUpGetMask[secondSlotIdx];
    u8 secondPpBonus = (ppBonuses & secondPpUpMask) >> (secondSlotIdx * 2);
    ppBonuses &= ~firstPpUpMask;
    ppBonuses &= ~secondPpUpMask;
    ppBonuses |= (firstPpBonus << (secondSlotIdx * 2)) + (secondPpBonus << (firstSlotIdx * 2));

    SetMonData(mon, MON_DATA_MOVE1 + firstSlotIdx, &secondMove);
    SetMonData(mon, MON_DATA_MOVE1 + secondSlotIdx, &firstMove);
    SetMonData(mon, MON_DATA_PP1 + firstSlotIdx, &secondPp);
    SetMonData(mon, MON_DATA_PP1 + secondSlotIdx, &firstPp);
    SetMonData(mon, MON_DATA_PP_BONUSES, &ppBonuses);

    CopyMon(&sMonSummaryDataPtr->list.mons[sMonSummaryDataPtr->currIdx], &sMonSummaryDataPtr->mon, sizeof(struct Pokemon));
    SummaryMon_SetStruct();
}

static void MovesPageMisc_ForgetMove(void)
{
    u32 firstSlotIdx = MovesPageMisc_GetSlotIndex();
    struct Pokemon *mon = &sMonSummaryDataPtr->mon;

    SetMonMoveSlot(mon, MOVE_NONE, firstSlotIdx);
    RemoveMonPPBonus(mon, firstSlotIdx);

    for (u32 i = firstSlotIdx; i < MAX_MON_MOVES - 1; i++)
        ShiftMoveSlot(mon, i, i + 1);

    CopyMon(&sMonSummaryDataPtr->list.mons[sMonSummaryDataPtr->currIdx], &sMonSummaryDataPtr->mon, sizeof(struct Pokemon));
    SummaryMon_SetStruct();

    // fixup slot to not point towards any MOVE_NONE
    struct MonSummary *summary = SummaryMon_GetStruct();
    while (summary->moves[firstSlotIdx] == MOVE_NONE && firstSlotIdx > 0)
        firstSlotIdx--;

    MovesPageMisc_SetSlotIndex(firstSlotIdx);
}

static void SpriteCB_MovesPageMisc_Arrows(struct Sprite *sprite)
{
    enum MonSummaryMovesSubModes subMode = SummaryInput_IsWithinSubMode();

    sprite->invisible = !subMode
        || (subMode == SUMMARY_MOVES_SUB_MODE_FORGET && sMonSummaryDataPtr->arg.moves.forgetState != SUMMARY_MOVES_FORGET_STATE_CONFIRM)
        || ((subMode == SUMMARY_MOVES_SUB_MODE_DETAILS || subMode == SUMMARY_MOVES_SUB_MODE_REORDER) && SummaryMon_GetStruct()->totalMoves <= 1);

    if (sprite->invisible) return;

    sprite->y2 = SUMMARY_MOVES_GENERAL_ADDITIVE_Y * MovesPageMisc_GetIndex();

    switch (subMode)
    {
    default:
        break;
    case SUMMARY_MOVES_SUB_MODE_DETAILS:
    case SUMMARY_MOVES_SUB_MODE_REORDER:
        sprite->x2 = 0;
        break;
    case SUMMARY_MOVES_SUB_MODE_FORGET:
        sprite->y2 += SUMMARY_MOVES_GENERAL_ADDITIVE_Y * NUM_SUMMARY_MOVES_FORGET_CONFIRMS;
        // fallthrough
    case SUMMARY_MOVES_SUB_MODE_OPTIONS:
        sprite->x2 = -127;
        sprite->y2 -= 2;
        break;
    }
}

static void SpriteCB_MovesPageMisc_SlotCursor(struct Sprite *sprite)
{
    enum MonSummaryMovesSubModes subMode = SummaryInput_IsWithinSubMode();

    sprite->invisible = !subMode;
    if (sprite->invisible) return;

    sprite->y2 = SUMMARY_MOVES_GENERAL_ADDITIVE_Y * MovesPageMisc_GetSlotIndex();
}

static void SpriteCB_MovesPageMisc_NewSlotCursor(struct Sprite *sprite)
{
    enum MonSummaryMovesSubModes subMode = SummaryInput_IsWithinSubMode();

    sprite->invisible = subMode != SUMMARY_MOVES_SUB_MODE_REORDER;
    if (sprite->invisible) return;

    sprite->y2 = SUMMARY_MOVES_GENERAL_ADDITIVE_Y * MovesPageMisc_GetNewSlotIndex();
}

static void SpriteCB_MovesPageMisc_OptionCursor(struct Sprite *sprite)
{
    enum MonSummaryMovesSubModes subMode = SummaryInput_IsWithinSubMode();

    sprite->invisible = subMode < SUMMARY_MOVES_SUB_MODE_OPTIONS || subMode > SUMMARY_MOVES_SUB_MODE_REORDER || sMonSummaryDataPtr->arg.moves.reorderFail;
    if (sprite->invisible) return;

    sprite->y2 = SUMMARY_MOVES_GENERAL_ADDITIVE_Y * MovesPageMisc_GetOptionIndex();
}
