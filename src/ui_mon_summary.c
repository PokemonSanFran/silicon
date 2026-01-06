#include "global.h"
#include "main.h"
#include "battle_main.h"
#include "battle_anim.h"
#include "bg.h"
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
#include "overworld.h"
#include "pokemon_icon.h"
#include "graphics.h"
#include "data.h"
#include "pokedex.h"
#include "strings.h"
#include "party_menu.h"
#include "tv.h"
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
static bool32 SummaryInput_IsInputAdditive(s32);
static void Task_SummaryInput_InfosInput(u8);

static void SummaryMon_SetStruct(void);
static struct MonSummary *SummaryMon_GetStruct(void);
static void SummaryMon_CopyCurrentRawMon(void);

static void SummaryMode_SetValue(enum MonSummaryModes);
static enum MonSummaryModes SummaryMode_GetValue(void);
static TaskFunc SummaryMode_GetInputFunc(enum MonSummaryModes);
static void *SummaryPage_GetHandleFrontEndFunc(enum MonSummaryPages);
static void Task_SummaryMode_DefaultInput(u8);

static void SummaryPage_SetValue(enum MonSummaryPages);
static enum MonSummaryPages SummaryPage_GetValue(void);
static u32 SummaryPage_SanitizeWindowId(u32);
static void SummaryPage_SetWindowId(u32, u32);
static u8 SummaryPage_GetWindowId(u32);
static void SummaryPage_TogglePageSlot(void);
static u32 SummaryPage_GetPageSlot(void);
static const struct MonSummaryPageInfo *SummaryPage_GetInfo(enum MonSummaryPages);
static const u8 *SummaryPage_GetName(enum MonSummaryPages);
static struct WindowTemplate SummaryPage_FillDynamicWindowTemplate(enum MonSummaryPages, u32);
static u32 SummaryPage_GetDynamicWindowBaseBlock(u32);
static const u32 *SummaryPage_GetTilemap(enum MonSummaryPages);
static struct Coords8 SummaryPage_GetMainSpriteCoords(enum MonSummaryPages, enum MonSummaryMainSprites);
static TaskFunc SummaryPage_GetInputFunc(enum MonSummaryPages);
static void SummaryPage_LoadDynamicWindows(void);
static void SummaryPage_UnloadDynamicWindows(void);
static void SummaryPage_LoadTilemap(void);
static void SummaryPage_Reload(void);

static void SummarySprite_SetSpriteId(u8, u8);
static u8 SummarySprite_GetSpriteId(u8);
static const struct MonSummarySprite *SummarySprite_GetMainStruct(enum MonSummaryMainSprites);
static void SummarySprite_InjectHpBar(struct Sprite *);
static void SpriteCB_SummarySprite_ShinySymbol(struct Sprite *);
static void SpriteCB_SummarySprite_HpBar(struct Sprite *);

static void SummaryPrint_AddText(u32, u32, u32, u32, enum MonSummaryFontColors, const u8 *);
static const struct WindowTemplate *SummaryPrint_GetMainWindowTemplate(u32);
static void SummaryPrint_Header(void);
static void SummaryPrint_BlitPageTabs(u32, u32, u32);
static void SummaryPrint_BlitStatusSymbol(u32, u32, u32);
static void SummaryPrint_HelpBar(void);

static void DummyPage_HandleFrontEnd(void);

static void InfosPage_HandleFrontEnd(void);
static void InfosPage_HandleHeader(void);
static void InfosPageHeader_PrintMonNameGender(struct MonSummary *);
static void InfosPageHeader_PrintLevel(struct MonSummary *);
static void InfosPageHeader_BlitStatusSymbol(struct MonSummary *);
static void InfosPage_HandleSummary(void);
static void InfosPageSummary_PrintMonTyping(struct MonSummary *);
static void InfosPageSummary_PrintTrainerInfo(struct MonSummary *);
static void InfosPageSummary_PrintNeededExperience(struct MonSummary *);
static void InfosPageSummary_PrintMiscMonInfo(struct MonSummary *);

// const data
static const struct BgTemplate sSummarySetup_BgTemplates[NUM_MON_SUMMARY_BACKGROUNDS] =
{
    {
        .bg = MON_SUMMARY_BG_TEXT,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 0
    },
    {
        .bg = MON_SUMMARY_BG_PAGE_1,
        .charBaseIndex = 2,
        .mapBaseIndex = 28,
        .screenSize = 1,
        .priority = 1
    },
    {
        .bg = MON_SUMMARY_BG_PAGE_2,
        .charBaseIndex = 2,
        .mapBaseIndex = 26,
        .screenSize = 1,
        .priority = 1
    },
};

static const struct WindowTemplate sSummarySetup_MainWindows[NUM_MON_SUMMARY_MAIN_WINDOWS + 1] =
{
    [MON_SUMMARY_MAIN_WIN_HEADER] =
    {
        .bg = MON_SUMMARY_BG_TEXT,
        .tilemapLeft = 23,
        .tilemapTop = 0,
        .width = 4,
        .height = 4,
    },

    [MON_SUMMARY_MAIN_WIN_HELP_BAR] =
    {
        .bg = MON_SUMMARY_BG_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = DISPLAY_TILE_WIDTH,
        .height = 2,
    },

    // MON_SUMMARY_MAIN_WIN_DYNAMIC uses AddWindow

    DUMMY_WIN_TEMPLATE
};

static const struct MonSummarySprite sSummarySetup_MainSprites[NUM_MON_SUMMARY_MAIN_SPRITES] =
{
    {
        .id = MON_SUMMARY_MAIN_SPRITE_SHINY_SYMBOL,
        .oam = &(const struct OamData){
            .shape = SPRITE_SHAPE(16x16), .size = SPRITE_SIZE(16x16),
            .priority = 0
        },
        .tileTag = TAG_SUMMARY_SHINY_SYMBOL,
        .gfx = (const u32[])INCBIN_U32("graphics/ui_menus/mon_summary/shiny_symbol.4bpp.smol"),
        .anims = gDummySpriteAnimTable,
        .callback = SpriteCB_SummarySprite_ShinySymbol
    },
    {
        .id = MON_SUMMARY_MAIN_SPRITE_HP_BAR,
        .oam = &(const struct OamData){
            .shape = SPRITE_SHAPE(64x32), .size = SPRITE_SIZE(64x32),
            .priority = 0
        },
        .tileTag = TAG_SUMMARY_HP_BAR,
        .gfx = gBlankGfxCompressed,
        .anims = gDummySpriteAnimTable,
        .callback = SpriteCB_SummarySprite_HpBar
    },
};

static const u8 sSummarySprite_HpBarBlit[] = INCBIN_U8("graphics/ui_menus/mon_summary/hp_bar.4bpp");
static const u16 sSummarySprite_HpBarColors[] = INCBIN_U16("graphics/ui_menus/mon_summary/hp_bar_states.gbapal");

static const TaskFunc sSummaryMode_InputFuncs[NUM_MON_SUMMARY_MODES] =
{
    [MON_SUMMARY_MODE_DEFAULT] = Task_SummaryMode_DefaultInput,
};

static const struct MonSummaryPageInfo sSummaryPage_Info[NUM_MON_SUMMARY_PAGES] =
{
    [MON_SUMMARY_PAGE_INFOS] =
    {
        .name = COMPOUND_STRING("Info"),
        .windows =
        {
            {
                .id = MON_SUMMARY_INFOS_WIN_HEADER,
                .left = 8, .top = 0,
                .width = 9, .height = 4
            },
            {
                .id = MON_SUMMARY_INFOS_WIN_SUMMARY,
                .left = 15, .top = 4,
                .width = 15, .height = 10
            },
            MON_SUMMARY_DYNAMIC_WIN_DUMMY
        },
        .tilemap = (const u32[])INCBIN_U32("graphics/ui_menus/mon_summary/pages/infos.bin.smolTM"),
        .mainSpriteCoords =
        {
            [MON_SUMMARY_MAIN_SPRITE_SHINY_SYMBOL] = { MON_SUMMARY_INFOS_HEADER_SHINY_X, MON_SUMMARY_INFOS_HEADER_SHINY_Y },
            [MON_SUMMARY_MAIN_SPRITE_HP_BAR]       = { MON_SUMMARY_INFOS_HEADER_HP_BAR_X, MON_SUMMARY_INFOS_HEADER_HP_BAR_Y },
        },
        .input = Task_SummaryInput_InfosInput,
        .handleFrontEnd = InfosPage_HandleFrontEnd,
    },
    [MON_SUMMARY_PAGE_STATS] =
    {
        .name = COMPOUND_STRING("Stats"),
        .windows =
        {
            MON_SUMMARY_DYNAMIC_WIN_DUMMY
        },
        .tilemap = (const u32[])INCBIN_U32("graphics/ui_menus/mon_summary/pages/stats.bin.smolTM"),
    },
    [MON_SUMMARY_PAGE_MOVES] =
    {
        .name = COMPOUND_STRING("Moves"),
        .windows =
        {
            MON_SUMMARY_DYNAMIC_WIN_DUMMY
        },
        .tilemap = (const u32[])INCBIN_U32("graphics/ui_menus/mon_summary/pages/moves.bin.smolTM"),
    },
};

static const u32 sMonSummary_MainTiles[] = INCBIN_U32("graphics/ui_menus/mon_summary/pages/tiles.4bpp.smol");
static const u32 sMonSummary_MainTilemap[] = INCBIN_U32("graphics/ui_menus/mon_summary/pages/blank.bin");
static const u16 sMonSummary_MainPalette[] = INCBIN_U16("graphics/ui_menus/mon_summary/pages/tiles.gbapal");

static const u8 sSummaryPrint_PageTabsBlit[] = INCBIN_U8("graphics/ui_menus/mon_summary/page_tabs.4bpp");
static const u8 sSummaryPrint_StatusSymbolsBlit[] = INCBIN_U8("graphics/ui_menus/mon_summary/status_symbols.4bpp");
static const u8 sSummaryPrint_FontColors[NUM_MON_SUMMARY_FNTCLRS][3] =
{
    [MON_SUMMARY_FNTCLR_INTERFACE] = { 0, 2, 1 },
    [MON_SUMMARY_FNTCLR_MALE]      = { 0, 2, 15 },
    [MON_SUMMARY_FNTCLR_FEMALE]    = { 0, 2, 12 },
    [MON_SUMMARY_FNTCLR_TEXTBOX]   = { 0, 2, 0 },
    [MON_SUMMARY_FNTCLR_HELP_BAR]  = { 0, 1, 0 },
};

static const u8 *const sInfosPageSummary_BerryFlavorNames[FLAVOR_COUNT] =
{
    [FLAVOR_SPICY]  = COMPOUND_STRING("Spicy"),
    [FLAVOR_DRY]    = COMPOUND_STRING("Dry"),
    [FLAVOR_SWEET]  = COMPOUND_STRING("Sweet"),
    [FLAVOR_BITTER] = COMPOUND_STRING("Bitter"),
    [FLAVOR_SOUR]   = COMPOUND_STRING("Sour"),
};

// code
void MonSummary_OpenDefault(void)
{
    MonSummary_Init(
        &(const struct MonSummaryConfigs){
            .mode = MON_SUMMARY_MODE_DEFAULT,
            .mons = gPlayerParty,
            .currIdx = 0, .totalIdx = gPlayerPartyCount - 1,
            .arg.value = 0
        },
        CB2_ReturnToFieldContinueScript);
}

void MonSummary_Init(const struct MonSummaryConfigs *config, MainCallback callback)
{
    sMonSummaryDataPtr = AllocZeroed(sizeof(struct MonSummaryResources));

    if (!sMonSummaryDataPtr
     || !config
     || config->mode >= NUM_MON_SUMMARY_MODES)
    {
        TRY_FREE_AND_SET_NULL(sMonSummaryDataPtr);
        SetMainCallback2(callback);
        return;
    }

    enum MonSummaryPages page = MON_SUMMARY_PAGE_INFOS;

    switch (config->mode)
    {
    default:
        break;
    case MON_SUMMARY_MODE_BOX:
        sMonSummaryDataPtr->useBoxMon = TRUE;
        break;
    }

    sMonSummaryDataPtr->savedCallback = callback;
    sMonSummaryDataPtr->list.mons = config->mons;

    SummaryInput_SetIndex(config->currIdx);
    SummaryInput_SetTotalIndex(config->totalIdx);
    SummaryPage_SetValue(page);
    SummaryMode_SetValue(config->mode);
    memset(sMonSummaryDataPtr->windowIds, WINDOW_NONE, ARRAY_COUNT(sMonSummaryDataPtr->windowIds));

    SetMainCallback2(CB2_SummarySetup);
}

static void MonSummary_FreeResources(void)
{
    TRY_FREE_AND_SET_NULL(sMonSummaryDataPtr->tilemapBufs[MON_SUMMARY_BG_PAGE_SLOT_1]);
    TRY_FREE_AND_SET_NULL(sMonSummaryDataPtr->tilemapBufs[MON_SUMMARY_BG_PAGE_SLOT_2]);
    TRY_FREE_AND_SET_NULL(sMonSummaryDataPtr);
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

    sMonSummaryDataPtr->tilemapBufs[MON_SUMMARY_BG_PAGE_SLOT_1] = AllocZeroed(tilemapSize);
    sMonSummaryDataPtr->tilemapBufs[MON_SUMMARY_BG_PAGE_SLOT_2] = AllocZeroed(tilemapSize);

    if (!sMonSummaryDataPtr->tilemapBufs[MON_SUMMARY_BG_PAGE_SLOT_1]
     || !sMonSummaryDataPtr->tilemapBufs[MON_SUMMARY_BG_PAGE_SLOT_2])
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

    SetBgTilemapBuffer(MON_SUMMARY_BG_PAGE_1, sMonSummaryDataPtr->tilemapBufs[MON_SUMMARY_BG_PAGE_SLOT_1]);
    SetBgTilemapBuffer(MON_SUMMARY_BG_PAGE_2, sMonSummaryDataPtr->tilemapBufs[MON_SUMMARY_BG_PAGE_SLOT_2]);

    for (enum MonSummaryBackgrounds bg = 0; bg < NUM_MON_SUMMARY_BACKGROUNDS; bg++)
    {
        ScheduleBgCopyTilemapToVram(bg);
        ShowBg(bg);
    }
}

static void SummarySetup_Graphics(void)
{
    FreeTempTileDataBuffersIfPossible();
    ResetTempTileDataBuffers();

    DecompressAndCopyTileDataToVram(MON_SUMMARY_BG_PAGE_1, sMonSummary_MainTiles, 0, 0, 0);
    LoadPalette(sMonSummary_MainPalette, BG_PLTT_ID(0), PLTT_SIZE_4BPP);

    LoadSpritePalette(&(const struct SpritePalette){
        .data = sMonSummary_MainPalette,
        .tag = TAG_SUMMARY_UNIVERSAL_PAL
    });

    SummaryPage_LoadTilemap();
}

static void SummarySetup_Sprites(void)
{
    for (enum MonSummaryMainSprites i = 0; i < NUM_MON_SUMMARY_MAIN_SPRITES; i++)
    {
        const struct MonSummarySprite *config = SummarySprite_GetMainStruct(i);
        struct Coords8 coords = SummaryPage_GetMainSpriteCoords(SummaryPage_GetValue(), i);
        struct SpriteTemplate template =
        {
            .tileTag = config->tileTag,
            .paletteTag = TAG_SUMMARY_UNIVERSAL_PAL,
            .oam = config->oam,
            .anims = config->anims,
            .images = &(struct SpriteFrameImage){ config->gfx },
            .affineAnims = gDummySpriteAffineAnimTable,
            .callback = config->callback,
        };

        LoadCompressedSpriteSheetByTemplate(&template, 0);
        SummarySprite_SetSpriteId(config->id,
            CreateSprite(&template, coords.x, coords.y, 0));
    }
}

static void SummarySetup_Windows(void)
{
    InitWindows(sSummarySetup_MainWindows);
    DeactivateAllTextPrinters();
    ScheduleBgCopyTilemapToVram(0);

    for (u32 i = 0, baseBlock = 1; i < NUM_MON_SUMMARY_MAIN_WINDOWS; i++)
    {
        SetWindowAttribute(i, WINDOW_BASE_BLOCK, baseBlock);
        FillWindowPixelBuffer(i, PIXEL_FILL(0));
        PutWindowTilemap(i);

        const struct WindowTemplate *template = SummaryPrint_GetMainWindowTemplate(i);
        baseBlock += template->width * template->height;
    }

    SummaryPage_LoadDynamicWindows();
    SummaryPrint_Header();
    SummaryPrint_HelpBar();

    void (*func)(void) = SummaryPage_GetHandleFrontEndFunc(SummaryPage_GetValue());
    func();

    ScheduleBgCopyTilemapToVram(MON_SUMMARY_BG_TEXT);
}

static void CB2_SummarySetup(void)
{
    enum MonSummarySetupSteps steps = gMain.state;

    switch (steps)
    {
    case MON_SUMMARY_SETUP_RESET:
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
    case MON_SUMMARY_SETUP_MONDATA:
        SummaryMon_SetStruct();
        break;
    case MON_SUMMARY_SETUP_BACKGROUNDS:
        SummarySetup_Backgrounds();
        break;
    case MON_SUMMARY_SETUP_GRAPHICS:
        SummarySetup_Graphics();
        break;
    case MON_SUMMARY_SETUP_WINDOWS:
        SummarySetup_Windows();
        break;
    case MON_SUMMARY_SETUP_SPRITES:
        SummarySetup_Sprites();
        break;
    case MON_SUMMARY_SETUP_FADE:
        BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        CreateTask(Task_SummarySetup_WaitFade, 0);
        break;
    case MON_SUMMARY_SETUP_FINISH:
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
    if (!gPaletteFade.active)
    {
        gTasks[taskId].func = SummaryMode_GetInputFunc(SummaryMode_GetValue());
    }
}

static void SummaryInput_UpdatePage(s32 delta)
{
    enum MonSummaryPages page = SummaryPage_GetValue();
    u32 count = NUM_MON_SUMMARY_PAGES - 1;
    bool32 additiveDelta = SummaryInput_IsInputAdditive(delta);

    if ((!page && !additiveDelta) || (page == count && additiveDelta))
    {
        return;
    }

    PlaySE(SE_CLICK);
    SummaryPage_SetValue(page + delta);
    SummaryPage_Reload();
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
    SummaryMon_SetStruct();
    SummaryPage_Reload();
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

static bool32 SummaryInput_IsInputAdditive(s32 delta)
{
    return delta == 1;
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

    if (JOY_NEW(DPAD_UP)
     && SummaryPage_GetValue() == MON_SUMMARY_PAGE_INFOS)
    {
        SummaryInput_UpdateMon(-1);
        return;
    }

    if (JOY_NEW(DPAD_DOWN)
     && SummaryPage_GetValue() == MON_SUMMARY_PAGE_INFOS)
    {
        SummaryInput_UpdateMon(1);
        return;
    }

    if (JOY_NEW(A_BUTTON))
    {
        gTasks[taskId].func = SummaryPage_GetInputFunc(SummaryPage_GetValue());
        return;
    }

    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_PC_OFF);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_MonSummary_WaitFadeAndExit;
        return;
    }
}

static void Task_SummaryInput_InfosInput(u8 taskId)
{
    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        return;
    }

    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        gTasks[taskId].func = SummaryMode_GetInputFunc(SummaryMode_GetValue());
        return;
    }
}

static void SummaryMon_SetStruct(void)
{
    SummaryMon_CopyCurrentRawMon();

    struct MonSummaryResources *res = sMonSummaryDataPtr;
    struct Pokemon *mon = res->mon;

    res->summary.species = GetMonData(mon, MON_DATA_SPECIES);
    res->summary.species2 = GetMonData(mon, MON_DATA_SPECIES_OR_EGG);
    res->summary.exp = GetMonData(mon, MON_DATA_EXP);
    res->summary.level = GetMonData(mon, MON_DATA_LEVEL);
    res->summary.abilityNum = GetMonData(mon, MON_DATA_ABILITY_NUM);
    res->summary.item = GetMonData(mon, MON_DATA_HELD_ITEM);
    res->summary.pid = GetMonData(mon, MON_DATA_PERSONALITY);
    res->summary.sanity = GetMonData(mon, MON_DATA_SANITY_IS_BAD_EGG);

    if (res->summary.sanity)
        res->summary.isEgg = TRUE;
    else
        res->summary.isEgg = GetMonData(mon, MON_DATA_IS_EGG);

    for (u32 i = 0; i < MAX_MON_MOVES; i++)
    {
        res->summary.moves[i] = GetMonData(mon, MON_DATA_MOVE1 + i);
        res->summary.pp[i] = GetMonData(mon, MON_DATA_PP1 + i);
    }

    res->summary.ppBonuses = GetMonData(mon, MON_DATA_PP_BONUSES);
    res->summary.nature = GetNature(mon);
    res->summary.mintNature = GetMonData(mon, MON_DATA_HIDDEN_NATURE);
    res->summary.currentHP = GetMonData(mon, MON_DATA_HP);
    res->summary.maxHP = GetMonData(mon, MON_DATA_MAX_HP);
    res->summary.atk = GetMonData(mon, MON_DATA_ATK);
    res->summary.def = GetMonData(mon, MON_DATA_DEF);
    res->summary.spAtk = GetMonData(mon, MON_DATA_SPATK);
    res->summary.spDef = GetMonData(mon, MON_DATA_SPDEF);
    res->summary.spd = GetMonData(mon, MON_DATA_SPEED);

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
    res->summary.teraType = GetMonData(mon, MON_DATA_TERA_TYPE);
    res->summary.isShiny = GetMonData(mon, MON_DATA_IS_SHINY);

    res->summary.hpIVs = GetMonData(mon, MON_DATA_HP_IV);
    res->summary.atkIVs = GetMonData(mon, MON_DATA_ATK_IV);
    res->summary.defIVs = GetMonData(mon, MON_DATA_DEF_IV);
    res->summary.spAtkIVs = GetMonData(mon, MON_DATA_SPATK_IV);
    res->summary.spDefIVs = GetMonData(mon, MON_DATA_SPDEF_IV);
    res->summary.spdIVs = GetMonData(mon, MON_DATA_SPEED_IV);

    res->summary.hpEVs = GetMonData(mon, MON_DATA_HP_EV);
    res->summary.atkEVs = GetMonData(mon, MON_DATA_ATK_EV);
    res->summary.defEVs = GetMonData(mon, MON_DATA_DEF_EV);
    res->summary.spAtkEVs = GetMonData(mon, MON_DATA_SPATK_EV);
    res->summary.spDefEVs = GetMonData(mon, MON_DATA_SPDEF_EV);
    res->summary.spdEVs = GetMonData(mon, MON_DATA_SPEED_EV);

    GetMonNickname(mon, res->summary.nickname);
    res->summary.gender = GetMonGender(mon);
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
        BoxMonToMon(boxMon, res->mon);
    }
    else
    {
        res->mon = &res->list.mons[res->currIdx];
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

static u32 SummaryPage_SanitizeWindowId(u32 id)
{
    return id % TOTAL_MON_SUMMARY_DYNAMIC_WINDOWS;
}

static void SummaryPage_SetWindowId(u32 id, u32 value)
{
    sMonSummaryDataPtr->windowIds[SummaryPage_SanitizeWindowId(id)] = value;
}

static u8 SummaryPage_GetWindowId(u32 id)
{
    return sMonSummaryDataPtr->windowIds[SummaryPage_SanitizeWindowId(id)];
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
    if (page >= NUM_MON_SUMMARY_PAGES) return NULL;

    return &sSummaryPage_Info[page];
}

static const u8 *SummaryPage_GetName(enum MonSummaryPages page)
{
    const struct MonSummaryPageInfo *info = SummaryPage_GetInfo(page);
    if (!info || !info->name) return gText_EmptyString2;

    return info->name;
}

// translates .window struct onto a proper WindowTemplate
// since every page has its own enums, we'll use u32 instead.
// unless there's a better way to do this other than union.
static struct WindowTemplate SummaryPage_FillDynamicWindowTemplate(enum MonSummaryPages page, u32 windowId)
{
    const struct MonSummaryPageInfo *info = SummaryPage_GetInfo(page);
    windowId = SummaryPage_SanitizeWindowId(windowId);

    if (!info
     || info->windows[windowId].id == WINDOW_NONE
     || info->windows[windowId].id != windowId)
    {
        return (struct WindowTemplate)DUMMY_WIN_TEMPLATE;
    }

    const struct MonSummaryDynamicWindow *window = &info->windows[windowId];

    return (struct WindowTemplate){
        .bg = MON_SUMMARY_BG_TEXT,
        .tilemapLeft = window->left, .tilemapTop = window->top,
        .width = window->width, .height = window->width,
        .paletteNum = 0,
        .baseBlock = SummaryPage_GetDynamicWindowBaseBlock(windowId)
    };
}

static u32 SummaryPage_GetDynamicWindowBaseBlock(u32 windowId)
{
    windowId = SummaryPage_SanitizeWindowId(windowId);
    u32 baseBlock = 1;

    // add static window baseBlock
    for (u32 i = 0; i < NUM_MON_SUMMARY_MAIN_WINDOWS; i++)
    {
        const struct WindowTemplate *template = SummaryPrint_GetMainWindowTemplate(i);
        if (template->bg == gDummyWindowTemplate.bg) break;

        baseBlock += template->width * template->height;
    }

    // if this is the very first window, just return default baseBlock
    if (!windowId) return baseBlock;

    // add dynamic window baseBlock
    for (u32 i = 0; i < windowId; i++)
    {
        struct WindowTemplate template = SummaryPage_FillDynamicWindowTemplate(SummaryPage_GetValue(), i);
        if (template.bg == gDummyWindowTemplate.bg) break;

        baseBlock += template.width * template.height;
    }

    return baseBlock;
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

    if (!info || !info->handleFrontEnd) return DummyPage_HandleFrontEnd;

    return info->handleFrontEnd;
}

static void SummaryPage_LoadDynamicWindows(void)
{
    for (u32 i = 0; i < TOTAL_MON_SUMMARY_DYNAMIC_WINDOWS; i++)
    {
        struct WindowTemplate template = SummaryPage_FillDynamicWindowTemplate(SummaryPage_GetValue(), i);
        if (template.bg == gDummyWindowTemplate.bg) break;

        SummaryPage_SetWindowId(i, AddWindow(&template));
        u32 windowId = SummaryPage_GetWindowId(i);
        if (windowId == WINDOW_NONE) break;

        FillWindowPixelBuffer(windowId, PIXEL_FILL(0));
        PutWindowTilemap(windowId);
    }
}

static void SummaryPage_UnloadDynamicWindows(void)
{
    for (u32 i = 0; i < TOTAL_MON_SUMMARY_DYNAMIC_WINDOWS; i++)
    {
        u32 windowId = SummaryPage_GetWindowId(i);
        if (windowId == WINDOW_NONE) break;

        FillWindowPixelBuffer(windowId, PIXEL_FILL(0));
        ClearWindowTilemap(windowId);
        RemoveWindow(windowId);
        SummaryPage_SetWindowId(i, WINDOW_NONE);
    }

    ScheduleBgCopyTilemapToVram(MON_SUMMARY_BG_TEXT);
}

static void SummaryPage_LoadTilemap(void)
{
    enum MonSummaryBackgrounds nextBg = MON_SUMMARY_BG_PAGE_1;

    CopyToBgTilemapBuffer(nextBg, SummaryPage_GetTilemap(SummaryPage_GetValue()), 0, 0);
    SetGpuReg(REG_OFFSET_BG1HOFS, 8);
    CopyBgTilemapBufferToVram(nextBg);

    SummaryPage_TogglePageSlot();
}

static void SummaryPage_Reload(void)
{
    for (u32 i = 0; i < ARRAY_COUNT(sSummarySetup_MainWindows); i++)
    {
        FillWindowPixelBuffer(i, PIXEL_FILL(0));
    }

    SummaryPage_UnloadDynamicWindows();
    SummaryPage_LoadTilemap();
    SummaryPage_LoadDynamicWindows();

    for (enum MonSummaryMainSprites i = 0; i < ARRAY_COUNT(sSummarySetup_MainSprites); i++)
    {
        struct Coords8 coords = SummaryPage_GetMainSpriteCoords(SummaryPage_GetValue(), i);
        u32 spriteId = SummarySprite_GetSpriteId(i);

        gSprites[spriteId].x = coords.x;
        gSprites[spriteId].y = coords.y;
    }

    SummaryPrint_Header();
    SummaryPrint_HelpBar();

    void (*func)(void) = SummaryPage_GetHandleFrontEndFunc(SummaryPage_GetValue());
    func();

    ScheduleBgCopyTilemapToVram(MON_SUMMARY_BG_TEXT);
}

static void SummarySprite_SetSpriteId(u8 id, u8 value)
{
    sMonSummaryDataPtr->spriteIds[id] = value;
}

static u8 SummarySprite_GetSpriteId(u8 id)
{
    return sMonSummaryDataPtr->spriteIds[id];
}

static const struct MonSummarySprite *SummarySprite_GetMainStruct(enum MonSummaryMainSprites sprite)
{
    return &sSummarySetup_MainSprites[sprite];
}

static void SummarySprite_InjectHpBar(struct Sprite *sprite)
{
    struct WindowTemplate template = { .width = 8, .height  = 4 }; // 64x32
    u32 windowId = AddWindow(&template);

    BlitBitmapToWindow(windowId, sSummarySprite_HpBarBlit,
        0, 0,
        TILE_TO_PIXELS(template.width), TILE_TO_PIXELS(template.height));

    struct MonSummary *mon = SummaryMon_GetStruct();
    u32 currHp = mon->currentHP;
    u32 maxHp = mon->maxHP;

    u32 hpPercentage = (currHp * 100) / maxHp;
    enum MonSummaryHpBarColors color = hpPercentage / 33;
    if (color > MON_SUMMARY_HP_BAR_CLR_GREEN) color = MON_SUMMARY_HP_BAR_CLR_GREEN;

    LoadPalette(&sSummarySprite_HpBarColors[1 + (color * 2)], OBJ_PLTT_ID(sprite->oam.paletteNum) + 6, PLTT_SIZEOF(2));

    ConvertUIntToDecimalStringN(gStringVar1, currHp, STR_CONV_MODE_LEFT_ALIGN, 4);
    ConvertUIntToDecimalStringN(gStringVar2, maxHp, STR_CONV_MODE_LEFT_ALIGN, 4);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("{STR_VAR_1}/{STR_VAR_2}"));

    u32 width = TILE_TO_PIXELS(7) - 1; // 55
    u32 fontId = GetOutlineFontIdToFit(gStringVar4, width);
    u32 x = GetStringCenterAlignXOffsetWithLetterSpacing(fontId, gStringVar4, width, -1);
    SummaryPrint_AddText(windowId, fontId, x, 0, MON_SUMMARY_FNTCLR_INTERFACE, gStringVar4);

    u8 *tileData = (u8 *)GetWindowAttribute(windowId, WINDOW_TILE_DATA);
    u32 tileNum = TILE_OFFSET_4BPP(sprite->oam.tileNum);
    CpuCopy32(tileData, (void *)(OBJ_VRAM0 + tileNum), TILE_OFFSET_4BPP(template.width * template.height));

    RemoveWindow(windowId);
}

static void SpriteCB_SummarySprite_ShinySymbol(struct Sprite *sprite)
{
    sprite->invisible = SummaryMon_GetStruct()->isShiny ^ 1;
}

static void SpriteCB_SummarySprite_HpBar(struct Sprite *sprite)
{
    u32 maxHp = SummaryMon_GetStruct()->maxHP;

    if (maxHp == sprite->data[0]) return;

    SummarySprite_InjectHpBar(sprite);
    sprite->data[0] = maxHp;
}

// dynamic windows handles the id on its own
static void SummaryPrint_AddText(u32 windowId, u32 fontId, u32 x, u32 y, enum MonSummaryFontColors color, const u8 *str)
{
    AddTextPrinterParameterized4(windowId, fontId, x, y, 0, 0, sSummaryPrint_FontColors[color], TEXT_SKIP_DRAW, str);
}

static const struct WindowTemplate *SummaryPrint_GetMainWindowTemplate(u32 windowId)
{
    if (windowId >= ARRAY_COUNT(sSummarySetup_MainWindows)
     || windowId >= NUM_MON_SUMMARY_MAIN_WINDOWS)
    {
        return &gDummyWindowTemplate;
    }

    return &sSummarySetup_MainWindows[windowId];
}

static void SummaryPrint_Header(void)
{
    // blit
    u32 winId = MON_SUMMARY_MAIN_WIN_HEADER;
    SummaryPrint_BlitPageTabs(winId, 1, 4);

    // title
    const u8 *str = SummaryPage_GetName(SummaryPage_GetValue());
    u32 width = TILE_TO_PIXELS(SummaryPrint_GetMainWindowTemplate(winId)->width);

    u32 fontId = GetOutlineFontIdToFit(str, width);
    u32 x = GetStringCenterAlignXOffsetWithLetterSpacing(fontId, str, width, -1);

    SummaryPrint_AddText(winId, fontId, x, 16, MON_SUMMARY_FNTCLR_INTERFACE, str);
    CopyWindowToVram(winId, COPYWIN_GFX);
}

static void SummaryPrint_BlitPageTabs(u32 windowId, u32 x, u32 y)
{
    for (enum MonSummaryPages page = 0; page < NUM_MON_SUMMARY_PAGES; page++)
    {
        bool32 selected = page == SummaryPage_GetValue();

        BlitBitmapRectToWindow(windowId, sSummaryPrint_PageTabsBlit, selected * 8, 0, 16, 8, x, y, 8, 8);
        x += 11;
    }
}

static void SummaryPrint_BlitStatusSymbol(u32 windowId, u32 x, u32 y)
{
    u32 ailment = SummaryMon_GetStruct()->ailment;
    if (ailment == AILMENT_NONE) return;
    ailment--;

    BlitBitmapRectToWindow(windowId, sSummaryPrint_StatusSymbolsBlit, 0, ailment * 8, 24, 64, x, y, 24, 8);
}

// TODO actual helping bar
static void SummaryPrint_HelpBar(void)
{
    SummaryPrint_AddText(MON_SUMMARY_MAIN_WIN_HELP_BAR, FONT_NORMAL, 10, 1, MON_SUMMARY_FNTCLR_HELP_BAR, COMPOUND_STRING("test!"));
    CopyWindowToVram(MON_SUMMARY_MAIN_WIN_HELP_BAR, COPYWIN_GFX);
}

static void DummyPage_HandleFrontEnd(void)
{

}

static void InfosPage_HandleFrontEnd(void)
{
    InfosPage_HandleHeader();
    InfosPage_HandleSummary();
}

static void InfosPage_HandleHeader(void)
{
    struct MonSummary *mon = SummaryMon_GetStruct();

    InfosPageHeader_PrintMonNameGender(mon);
    InfosPageHeader_PrintLevel(mon);
    InfosPageHeader_BlitStatusSymbol(mon);

    CopyWindowToVram(SummaryPage_GetWindowId(MON_SUMMARY_INFOS_WIN_HEADER), COPYWIN_GFX);
}

static void InfosPageHeader_PrintMonNameGender(struct MonSummary *mon)
{
    u32 windowId = SummaryPage_GetWindowId(MON_SUMMARY_INFOS_WIN_HEADER);
    u32 fontId = FONT_OUTLINED;
    u32 x = MON_SUMMARY_INFOS_HEADER_X, x2 = MON_SUMMARY_INFOS_HEADER_GENDER_X;
    u32 winWidth = WindowWidthPx(windowId);

    // <name>
    const u8 *str = mon->nickname;
    fontId = GetOutlineFontIdToFit(str, (winWidth - x) + (winWidth - x2));

    SummaryPrint_AddText(windowId, fontId, x, MON_SUMMARY_INFOS_HEADER_Y, MON_SUMMARY_FNTCLR_INTERFACE, str);

    // <gender> (if necessary)
    u32 species = mon->species2, gender = mon->gender;
    if ((species == SPECIES_NIDORAN_M || species == SPECIES_NIDORAN_F)
     || gender == MON_GENDERLESS)
    {
        return;
    }

    u32 femaleMon = gender == MON_FEMALE;
    enum MonSummaryFontColors color = MON_SUMMARY_FNTCLR_MALE + femaleMon;

    fontId = FONT_OUTLINED;
    str = femaleMon ? gText_FemaleSymbol : gText_MaleSymbol;

    SummaryPrint_AddText(windowId, fontId, x2, MON_SUMMARY_INFOS_HEADER_Y, color, str);
}

static void InfosPageHeader_PrintLevel(struct MonSummary *mon)
{
    u32 windowId = SummaryPage_GetWindowId(MON_SUMMARY_INFOS_WIN_HEADER);
    u32 fontId = FONT_OUTLINED;

    ConvertUIntToDecimalStringN(gStringVar1, mon->level, STR_CONV_MODE_LEFT_ALIGN, CountDigits(MAX_LEVEL));
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("{SHADOW 13}{LV}{SHADOW 1}{STR_VAR_1}"));

    SummaryPrint_AddText(windowId, fontId,
        MON_SUMMARY_INFOS_HEADER_X, MON_SUMMARY_INFOS_HEADER_Y2,
        MON_SUMMARY_FNTCLR_INTERFACE, gStringVar4);
}

static void InfosPageHeader_BlitStatusSymbol(struct MonSummary *mon)
{
    SummaryPrint_BlitStatusSymbol(SummaryPage_GetWindowId(MON_SUMMARY_INFOS_WIN_HEADER),
        MON_SUMMARY_INFOS_HEADER_STATUS_X, MON_SUMMARY_INFOS_HEADER_STATUS_Y);
}

static void InfosPage_HandleSummary(void)
{
    struct MonSummary *mon = SummaryMon_GetStruct();

    InfosPageSummary_PrintMonTyping(mon);
    InfosPageSummary_PrintTrainerInfo(mon);
    InfosPageSummary_PrintNeededExperience(mon);
    InfosPageSummary_PrintMiscMonInfo(mon);

    CopyWindowToVram(SummaryPage_GetWindowId(MON_SUMMARY_INFOS_WIN_SUMMARY), COPYWIN_GFX);
}

static void InfosPageSummary_PrintMonTyping(struct MonSummary *mon)
{
    u32 windowId = SummaryPage_GetWindowId(MON_SUMMARY_INFOS_WIN_SUMMARY);
    u32 fontId = FONT_OUTLINED;

    SummaryPrint_AddText(windowId, fontId,
        MON_SUMMARY_INFOS_SUMMARY_X, MON_SUMMARY_INFOS_SUMMARY_Y,
        MON_SUMMARY_FNTCLR_INTERFACE, COMPOUND_STRING("Type:"));

    u32 species = mon->species;
    enum Type types[2] = { GetSpeciesType(species, 0), GetSpeciesType(species, 1) };

    SummaryPrint_AddText(windowId, fontId,
        MON_SUMMARY_INFOS_SUMMARY_X2, MON_SUMMARY_INFOS_SUMMARY_Y,
        MON_SUMMARY_FNTCLR_INTERFACE, gTypesInfo[types[0]].shortName);

    if (types[1] != types[0])
    {
        SummaryPrint_AddText(windowId, fontId,
            MON_SUMMARY_INFOS_SUMMARY_X3, MON_SUMMARY_INFOS_SUMMARY_Y,
            MON_SUMMARY_FNTCLR_INTERFACE, gTypesInfo[types[1]].shortName);
    }
}

static void InfosPageSummary_PrintTrainerInfo(struct MonSummary *mon)
{
    u32 windowId = SummaryPage_GetWindowId(MON_SUMMARY_INFOS_WIN_SUMMARY);
    u32 fontId = FONT_OUTLINED;

    // OT: <trainer name>
    SummaryPrint_AddText(windowId, fontId,
        MON_SUMMARY_INFOS_SUMMARY_X, MON_SUMMARY_INFOS_SUMMARY_Y2,
        MON_SUMMARY_FNTCLR_INTERFACE, COMPOUND_STRING("OT:"));
    SummaryPrint_AddText(windowId, fontId,
        MON_SUMMARY_INFOS_SUMMARY_X2, MON_SUMMARY_INFOS_SUMMARY_Y2,
        MON_SUMMARY_FNTCLR_INTERFACE, mon->trainerName);

    // ID: <numbers>
    ConvertIntToDecimalStringN(gStringVar1, (u16)mon->trainerId, STR_CONV_MODE_LEADING_ZEROS, 5);
    SummaryPrint_AddText(windowId, fontId,
        MON_SUMMARY_INFOS_SUMMARY_X, MON_SUMMARY_INFOS_SUMMARY_Y3,
        MON_SUMMARY_FNTCLR_INTERFACE, COMPOUND_STRING("ID:"));
    SummaryPrint_AddText(windowId, fontId,
        MON_SUMMARY_INFOS_SUMMARY_X2, MON_SUMMARY_INFOS_SUMMARY_Y3,
        MON_SUMMARY_FNTCLR_INTERFACE, gStringVar1);
}

static void InfosPageSummary_PrintNeededExperience(struct MonSummary *mon)
{
    u32 windowId = SummaryPage_GetWindowId(MON_SUMMARY_INFOS_WIN_SUMMARY);
    u32 fontId = FONT_OUTLINED;

    // EXP: <numbers> to Lv <next level>
    SummaryPrint_AddText(windowId, fontId,
        MON_SUMMARY_INFOS_SUMMARY_X, MON_SUMMARY_INFOS_SUMMARY_Y4,
        MON_SUMMARY_FNTCLR_INTERFACE, COMPOUND_STRING("EXP:"));

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
        MON_SUMMARY_INFOS_SUMMARY_X2, MON_SUMMARY_INFOS_SUMMARY_Y4,
        MON_SUMMARY_FNTCLR_INTERFACE, gStringVar4);
}

// <nature> nature <fav flavor> combined, will be called more often
static void InfosPageSummary_PrintMiscMonInfo(struct MonSummary *mon)
{
    u32 windowId = SummaryPage_GetWindowId(MON_SUMMARY_INFOS_WIN_SUMMARY);
    u32 winWidth = WindowWidthPx(windowId);
    u32 fontId = FONT_OUTLINED;

    FillWindowPixelRect(windowId, PIXEL_FILL(0),
        MON_SUMMARY_INFOS_SUMMARY_X, MON_SUMMARY_INFOS_SUMMARY_Y5,
        winWidth - MON_SUMMARY_INFOS_SUMMARY_X, 16);

    // TODO implement menu blink
    StringCopy(gStringVar1, gNaturesInfo[mon->nature].name);
    StringCopy(gStringVar2, COMPOUND_STRING("{EMOJI_HEART} "));
    StringAppend(gStringVar2, sInfosPageSummary_BerryFlavorNames[FLAVOR_SPICY]);

    const u8 *strTemplate = COMPOUND_STRING("{STR_VAR_1} Nature {STR_VAR_2}");

    StringExpandPlaceholders(gStringVar4, strTemplate);
    fontId = GetOutlineFontIdToFit(gStringVar4, winWidth);

    SummaryPrint_AddText(windowId, fontId,
        MON_SUMMARY_INFOS_SUMMARY_X, MON_SUMMARY_INFOS_SUMMARY_Y5,
        MON_SUMMARY_FNTCLR_INTERFACE, gStringVar4);
}
