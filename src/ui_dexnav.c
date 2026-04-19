#include "global.h"
#include "dexnav.h"
#include "wild_encounter.h"
#include "item_use.h"
#include "string_util.h"
#include "pokedex.h"
#include "window.h"
#include "palette.h"
#include "task.h"
#include "sprite.h"
#include "menu.h"
#include "dma3.h"
#include "bg.h"
#include "frontier_pass.h"
#include "scanline_effect.h"
#include "menu_helpers.h"
#include "gpu_regs.h"
#include "ui_start_menu.h"
#include "options_visual.h"
#include "sound.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "malloc.h"
#include "constants/ui_adventure_guide.h"
#include "ui_dexnav.h"
#include "ui_adventure_guide.h"
#include "event_data.h"

static void Dexnav_VBlankCB(void);
static void Dexnav_MainCB(void);
static bool8 Dexnav_InitalizeBackgrounds(void);
static void Dexnav_ReturnFromAdventureGuide(void);
static bool8 Dexnav_AllocateStructs(void);
static bool8 AllocZeroedTilemapBuffers(void);
static void Dexnav_SaveSpriteId(enum DexnavSpriteIds spriteId, u32 id);
static u32 Dexnav_GetSpriteId(enum DexnavSpriteIds spriteId);
static void Dexnav_ResetAllSpriteIds(void);
static void HandleAndShowBgs(void);
static void SetBackgroundTransparency(void);
static void SetScheduleBgs(enum DexnavBackgrounds backgroundId);
static bool8 AreTilesOrTilemapEmpty(enum DexnavBackgrounds backgroundId);
static void LoadGraphics(void);
static void LoadDexnavPalettes(void);
static void ClearWindowCopyToVram(enum DexnavWindows windowId);
static void PlaySoundStartFadeQuitApp(u8 taskId);
static void Task_WaitFadeAndExitGracefully(u8 taskId);
static void FreeSpritePalettesResetSpriteData(void);
static void Dexnav_FreeResources(void);
static void Dexnav_FreeStructs(void);
static void Dexnav_FreeBackgrounds(void);
static void Dexnav_InitializeAndSaveCallback(MainCallback callback);
static void SaveCallbackToDexnav(MainCallback callback);
static void Dexnav_InitWindows(void);
static void Task_HandleInput(u8 taskId);
static void DisplayHelpBar(enum DexnavWindows windowId);
static void Dexnav_SetMode(enum DexnavMode mode);
static enum DexnavMode Dexnav_GetMode(void);
static void Dexnav_PrintHelpBarText(enum DexnavWindows windowId);
static bool8 Dexnav_HasMultipleHabitats(void);
static void Dexnav_InitializeBackgroundsAndLoadBackgroundGraphics(void);
static u8 Dexnav_GetNumberHabitatMons(enum DexnavHabitats habitat);
static void Dexnav_LoadEncounterData(void);
static enum DexnavHabitats Dexnav_CalculateInitialHabitat(void);
static bool8 Dexnav_ShouldHideCompletionMark(void);
static u8 Dexnav_CreateCompletionSprite(void);
static void Dexnav_HandleHabitatHeader(void);

struct DexnavState *sDexnavState = NULL;
static u8 *sBgTilemapBuffer[BG_DEXNAV_COUNT] = {NULL};

static const struct BgTemplate sDexnavBgTemplates[] = 
{
    [BG0_DEXNAV_TEXT] =
    {
        .bg = BG0_DEXNAV_TEXT,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 0,
    },
    [BG1_DEXNAV_WHEEL] =
    {
        .bg = BG1_DEXNAV_WHEEL,
        .charBaseIndex = 1,
        .mapBaseIndex = 30,
        .priority = 1,
    },
    [BG2_DEXNAV_UI] =
    {
        .bg = BG2_DEXNAV_UI,
        .charBaseIndex = 2,
        .mapBaseIndex = 29,
        .priority = 2,
    },
    [BG3_DEXNAV_BACKGROUNDS] =
    {
        .bg = BG3_DEXNAV_BACKGROUNDS,
        .charBaseIndex = 3,
        .mapBaseIndex = 28,
        .priority = 2,
    },
};

static const struct {
    const u32 *tiles;
    const u32 *tilemap;
} sDexnav_BackgroundGraphics[BG_DEXNAV_COUNT] =
{
    [BG0_DEXNAV_TEXT] =
    {
        .tiles = NULL,
        .tilemap = NULL,
    },
    [BG1_DEXNAV_WHEEL] =
    {
        .tiles = (const u32[])INCBIN_U32("graphics/ui_menus/dexnav/wheel.4bpp.smol"),
        .tilemap = (const u32[])INCBIN_U32("graphics/ui_menus/dexnav/wheel.bin.smolTM"),
    },
    [BG2_DEXNAV_UI] =
    {
        .tiles = (const u32[])INCBIN_U32("graphics/ui_menus/dexnav/interface.4bpp.smol"),
        .tilemap = (const u32[])INCBIN_U32("graphics/ui_menus/dexnav/interface.bin.smolTM"),
    },
    [BG3_DEXNAV_BACKGROUNDS] =
    {
        .tiles = (const u32[])INCBIN_U32("graphics/ui_menus/dexnav/background.4bpp.smol"),
        .tilemap = (const u32[])INCBIN_U32("graphics/ui_menus/dexnav/background.bin.smolTM"),
    },
};

static const struct WindowTemplate sDexnavWindows[] =
{
    [WIN_DEXNAV_HEADER] =
    {
        .bg = BG0_DEXNAV_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 14,
        .height = 2,
        .paletteNum = DEXNAV_PALETTE_TEXT_ID,
    },
    [WIN_DEXNAV_INTERFACE_INSIGHT] =
    {
        .bg = BG0_DEXNAV_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 2,
        .width = 8,
        .height = 3,
        .paletteNum = DEXNAV_PALETTE_TEXT_ID,
    },
    [WIN_DEXNAV_INTERFACE_MON_INFO] =
    {
        .bg = BG0_DEXNAV_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 8,
        .width = 9,
        .height = 2,
        .paletteNum = DEXNAV_PALETTE_TEXT_ID,
    },
    [WIN_DEXNAV_INTERFACE_STREAK] =
    {
        .bg = BG0_DEXNAV_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 14,
        .width = 8,
        .height = 3,
        .paletteNum = DEXNAV_PALETTE_TEXT_ID,
    },
    [WIN_DEXNAV_HELP_BAR] =
    {
        .bg = BG0_DEXNAV_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = 30,
        .height = 2,
        .paletteNum = DEXNAV_PALETTE_TEXT_ID,
    },
    [WIN_DEXNAV_HABITAT_HEADER] =
    {
        .bg = BG3_DEXNAV_BACKGROUNDS,
        .tilemapLeft = 13,
        .tilemapTop = 0,
        .width = 17,
        .height = 2,
        .paletteNum = DEXNAV_PALETTE_HABITAT_ID,
    },
    DUMMY_WIN_TEMPLATE
};

const u8 sDexnavWindowFontColors[DEXNAV_FONT_COLOR_COUNT][3] =
{
    [DEXNAV_FONT_COLOR_BLACK]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_DARK_GRAY, TEXT_COLOR_TRANSPARENT},
    [DEXNAV_FONT_COLOR_WHITE]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_WHITE,  TEXT_COLOR_TRANSPARENT},
};

static const struct DexnavSpriteSheet sDexnavSpriteSheets[DEXNAV_SPRITEIDS_COUNT] = 
{
    [DEXNAV_SPRITEID_COMPLETION_MARK] = 
    {
        {
            .data = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/completion.4bpp"),
            .size = TILE_OFFSET_4BPP(4),
            .tag = DEXNAV_SPRITETAG_COMPLETION,
        },
        {
            .data = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/completion.gbapal"),
            .tag = DEXNAV_PALTAG_COMPLETION,
        },
    },
    [DEXNAV_SPRITEID_INSIGHT_POSITION_0] = 
    {
        {
            .data = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/star.4bpp"),
            .size = TILE_OFFSET_4BPP(32),
            .tag = DEXNAV_SPRITETAG_STAR,
        },
        {
            .data = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/star.gbapal"),
            .tag = DEXNAV_PALTAG_STAR,
        },
    },
    [DEXNAV_SPRITEID_INDICATOR_ABILITY] = 
    {
        {
            .data = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/indicators.4bpp"),
            .size = TILE_OFFSET_4BPP(16),
            .tag = DEXNAV_SPRITETAG_INDICATOR,
        },
        {
            .data = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/indicators.gbapal"),
            .tag = DEXNAV_PALTAG_INDICATOR,
        },
    },
    [DEXNAV_SPRITEID_ARROW_UP] = 
    {
        {
            .data = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/arrows.4bpp"),
            .size = TILE_OFFSET_4BPP(64),
            .tag = DEXNAV_SPRITETAG_ARROW,
        },
        {
            .data = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/arrows.gbapal"),
            .tag = DEXNAV_PALTAG_ARROW,
        },
    },
    [DEXNAV_SPRITEID_FAB] = 
    {
        {
            .data = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/fab.4bpp"),
            .size = TILE_OFFSET_4BPP(32),
            .tag = DEXNAV_SPRITETAG_FAB,
        },
        {
            .data = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/fab.gbapal"),
            .tag = DEXNAV_PALTAG_FAB,
        },
    },
    [DEXNAV_SPRITEID_INDICATOR_IV_0] = 
    {
        {
            .data = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/iv.4bpp"),
            .size = TILE_OFFSET_4BPP(64),
            .tag = DEXNAV_SPRITETAG_IV,
        },
        {
            .data = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/iv.gbapal"),
            .tag = DEXNAV_PALTAG_IV,
        },
    },
};

static u8 Dexnav_CreateCompletionSprite(void)
{
    struct SpriteTemplate TempSpriteTemplate = gDummySpriteTemplate;

    TempSpriteTemplate.tileTag = DEXNAV_SPRITETAG_COMPLETION;
    TempSpriteTemplate.callback = SpriteCallbackDummy;
    TempSpriteTemplate.paletteTag = DEXNAV_PALTAG_COMPLETION;

    u32 spriteId = CreateSprite(&TempSpriteTemplate, 8, 4, 0);
    gSprites[spriteId].oam.shape = SPRITE_SHAPE(16x16);
    gSprites[spriteId].oam.size = SPRITE_SIZE(16x16);
    gSprites[spriteId].oam.priority = 0;
    gSprites[spriteId].invisible = Dexnav_ShouldHideCompletionMark();
    return spriteId;
}

static bool8 Dexnav_ShouldHideCompletionMark(void)
{
    for (enum DexnavHabitats habitat = 0; habitat < DEXNAV_HABITAT_COUNT; habitat++)
    {
        for (u32 speciesIndex = 0; speciesIndex < 20; speciesIndex++)
        {
            u32 species = sDexnavState->dexnavSpecies[habitat][speciesIndex];

            if (species == SPECIES_NONE)
                return FALSE;

            if (GetSetPokedexFlag(SpeciesToNationalPokedexNum(species),FLAG_GET_CAUGHT) == FALSE)
                return TRUE;
        }
    }
    return FALSE;
}

static void Dexnav_SetHabitat(enum DexnavHabitats habitat)
{
    sDexnavState->habitat = habitat;
}

static enum DexnavHabitats Dexnav_GetHabitat(void)
{
    return sDexnavState->habitat;
}

static void Dexnav_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void Dexnav_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static bool8 Dexnav_InitalizeBackgrounds(void)
{
    ResetAllBgsCoordinates();

    if (!AllocZeroedTilemapBuffers())
        return FALSE;

   HandleAndShowBgs();

    return TRUE;
}

static bool8 AllocZeroedTilemapBuffers(void)
{
    for (enum DexnavBackgrounds backgroundId = 0; backgroundId < BG_DEXNAV_COUNT; backgroundId++)
    {
        sBgTilemapBuffer[backgroundId] = AllocZeroed(BG_SCREEN_SIZE);

        if (sBgTilemapBuffer[backgroundId] == NULL)
            return FALSE;

        memset(sBgTilemapBuffer[backgroundId],0,BG_SCREEN_SIZE);
    }
    return TRUE;
}

static void HandleAndShowBgs(void)
{
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sDexnavBgTemplates, NELEMS(sDexnavBgTemplates));

    for (enum DexnavBackgrounds backgroundId = 0; backgroundId < BG_DEXNAV_COUNT; backgroundId++)
    {
        SetScheduleBgs(backgroundId);
        ShowBg(backgroundId);
    }
    SetBackgroundTransparency();
}

static void SetBackgroundTransparency(void)
{
    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG3 | BLDCNT_TGT1_BG1);
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(6, 6));
    SetGpuRegBits(REG_OFFSET_WININ, WININ_WIN0_CLR);
    ShowBg(BG1_DEXNAV_WHEEL);
}

static void SetScheduleBgs(enum DexnavBackgrounds backgroundId)
{
    SetBgTilemapBuffer(backgroundId, sBgTilemapBuffer[backgroundId]);
    ScheduleBgCopyTilemapToVram(backgroundId);
}

static const u32 sHabitatBackgounds[] = INCBIN_U32("graphics/ui_menus/dexnav/habitatHeader.4bpp");

static const u16* const sDexnavPalettesLUT[] = 
{
    [VISUAL_OPTION_COLOR_RED] = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/palettes/red.gbapal"),
    [VISUAL_OPTION_COLOR_GREEN] = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/palettes/green.gbapal"),
    [VISUAL_OPTION_COLOR_BLUE] = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/palettes/blue.gbapal"),
    [VISUAL_OPTION_COLOR_YELLOW] = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/palettes/yellow.gbapal"),
    [VISUAL_OPTION_COLOR_BLACK] = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/palettes/black.gbapal"),
    [VISUAL_OPTION_COLOR_WHITE] = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/palettes/white.gbapal"),
    [VISUAL_OPTION_COLOR_PLATINUM] = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/palettes/platinum.gbapal"),
    [VISUAL_OPTION_COLOR_SCARLET] = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/palettes/scarlet.gbapal"),
    [VISUAL_OPTION_COLOR_VIOLET] = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/palettes/violet.gbapal"),
    [VISUAL_OPTION_COLOR_CUSTOM] = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/palettes/platinum.gbapal"),
    [VISUAL_OPTION_COLOR_COUNT] = (const u16[])INCBIN_U16("graphics/ui_menus/dexnav/palettes/platinum.gbapal"),
};

static const u16 dexnavPalettesText[] = INCBIN_U16("graphics/ui_menus/dexnav/palettes/text.gbapal");
static const u16 dexnavPalettesHabitat[] = INCBIN_U16("graphics/ui_menus/dexnav/habitatHeader.gbapal");

static bool8 AreTilesOrTilemapEmpty(enum DexnavBackgrounds backgroundId)
{
    return (sDexnav_BackgroundGraphics[backgroundId].tiles == NULL || sDexnav_BackgroundGraphics[backgroundId].tilemap== NULL);
}

static void LoadGraphics(void)
{
    ResetTempTileDataBuffers();

    for (enum DexnavBackgrounds backgroundId = BG0_DEXNAV_TEXT; backgroundId < BG_DEXNAV_COUNT; backgroundId++)
    {
        if (AreTilesOrTilemapEmpty(backgroundId))
            continue;

        DecompressAndLoadBgGfxUsingHeap(backgroundId, sDexnav_BackgroundGraphics[backgroundId].tiles,0,0,0);
        CopyToBgTilemapBuffer(backgroundId, sDexnav_BackgroundGraphics[backgroundId].tilemap,0,0);
    }
    LoadDexnavPalettes();

    for (u32 spriteId = 0; spriteId < DEXNAV_SPRITEIDS_COUNT; spriteId++)
    {
        if (sDexnavSpriteSheets[spriteId].spriteSheet.tag == 0)
            continue;

        LoadSpriteSheets(&sDexnavSpriteSheets[spriteId].spriteSheet);
        LoadSpritePalette(&sDexnavSpriteSheets[spriteId].palette);
    }
}

static void LoadDexnavPalettes(void)
{
    LoadPalette(sDexnavPalettesLUT[GetVisualColor()], DEXNAV_PALETTE_INTERFACE_SLOT, PLTT_SIZE_4BPP);
    LoadPalette(dexnavPalettesText, DEXNAV_PALETTE_TEXT_SLOT, PLTT_SIZE_4BPP);
    LoadPalette(dexnavPalettesHabitat, DEXNAV_PALETTE_HABITAT_SLOT, PLTT_SIZE_4BPP);
}

static void ClearWindowCopyToVram(enum DexnavWindows windowId)
{
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    PutWindowTilemap(windowId);
    CopyWindowToVram(windowId, COPYWIN_FULL);
}

static void PlaySoundStartFadeQuitApp(u8 taskId)
{
    PlaySE(SE_PC_OFF);
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_WaitFadeAndExitGracefully;
}

static void Task_WaitFadeAndExitGracefully(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    SetMainCallback2(sDexnavState->savedCallback);
    Dexnav_FreeResources();
    DestroyTask(taskId);
}

void Dexnav_FadescreenAndExitGracefully(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_WaitFadeAndExitGracefully,0);
    SetVBlankCallback(Dexnav_VBlankCB);
    SetMainCallback2(Dexnav_MainCB);
}

static void FreeSpritePalettesResetSpriteData(void)
{
    ResetSpriteData();
    FreeSpriteTileRanges();
    FreeAllSpritePalettes();
    ClearDma3Requests();
}

static void Dexnav_FreeResources(void)
{
    FreeSpritePalettesResetSpriteData();
    Dexnav_FreeStructs();
    Dexnav_FreeBackgrounds();
    FreeAllWindowBuffers();
    ResetSpriteData();
}

static void Dexnav_FreeStructs(void)
{
    if (sDexnavState != NULL)
        Free(sDexnavState);
}

static void Dexnav_FreeBackgrounds(void)
{
    for (enum DexnavBackgrounds backgroundId = 0; backgroundId < BG_DEXNAV_COUNT; backgroundId++)
        if (sBgTilemapBuffer[backgroundId] != NULL)
            Free(sBgTilemapBuffer[backgroundId]);
}

void CB2_DexnavFromStartMenu(void)
{
    Dexnav_InitializeAndSaveCallback(CB2_StartMenu_ReturnToUI);
}

static void Dexnav_InitializeAndSaveCallback(MainCallback callback)
{
    enum AdventureGuideList targetGuide = GUIDE_DEXNAV;

    if (!shouldSkipGuide(targetGuide))
    {
        VarSet(VAR_ADVENTURE_GUIDE_TO_OPEN,targetGuide);
        gMain.savedCallback = callback;
        Adventure_Guide_Init(Dexnav_ReturnFromAdventureGuide);
        return;
    }

    if (Dexnav_AllocateStructs())
    {
        SetMainCallback2(callback);
        return;
    }
    SaveCallbackToDexnav(callback);
    SetMainCallback2(Dexnav_SetupCallback);
}

static void Dexnav_ReturnFromAdventureGuide(void)
{
    Dexnav_InitializeAndSaveCallback(gMain.savedCallback);
}

static bool8 Dexnav_AllocateStructs(void)
{
    sDexnavState = AllocZeroed(sizeof(struct DexnavState));

    return (sDexnavState == NULL
           );
}

static void SaveCallbackToDexnav(MainCallback callback)
{
    sDexnavState->savedCallback = callback;
}

void Dexnav_SetupCallback(void)
{
    switch (gMain.state)
    {
        case 0:
            ResetGpuRegsAndBgs();
            DmaClearLarge16(3, (void *)VRAM, VRAM_SIZE, 0x1000);
            SetVBlankHBlankCallbacksToNull();
            ClearScheduledBgCopiesToVram();
            gMain.state++;
            break;
        case 1:
            ScanlineEffect_Stop();
            ResetPaletteFade();
            ResetTasks();
            FreeSpritePalettesResetSpriteData();
            Dexnav_ResetAllSpriteIds();
            gMain.state++;
            break;
        case 2:
            CreateTask(Task_HandleInput,0);
            Dexnav_LoadEncounterData();
            Dexnav_SetHabitat(Dexnav_CalculateInitialHabitat());
            Dexnav_InitializeBackgroundsAndLoadBackgroundGraphics();
            Dexnav_CreateCompletionSprite();
            gMain.state++;
            break;
        case 3:
            Dexnav_InitWindows();
            Dexnav_HandleHabitatHeader();
            DisplayHelpBar(WIN_DEXNAV_HELP_BAR);
            gMain.state++;
            break;
        case 4:
            BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
            SetVBlankCallback(Dexnav_VBlankCB);
            SetMainCallback2(Dexnav_MainCB);
            break;
    }
}

static void Dexnav_InitializeBackgroundsAndLoadBackgroundGraphics(void)
{
    if (Dexnav_InitalizeBackgrounds())
        LoadGraphics();
    else
        Dexnav_FadescreenAndExitGracefully();
}

static void Dexnav_ResetAllSpriteIds(void)
{
    for (enum DexnavSpriteIds spriteId = 0; spriteId < DEXNAV_SPRITEIDS_COUNT; spriteId++)
        Dexnav_SaveSpriteId(spriteId, SPRITE_NONE);
}

static void Dexnav_SaveSpriteId(enum DexnavSpriteIds spriteId, u32 id)
{
    sDexnavState->spriteId[spriteId] = id;
}

static u32 Dexnav_GetSpriteId(enum DexnavSpriteIds spriteId)
{
    return sDexnavState->spriteId[spriteId];
}

static void Dexnav_InitWindows(void)
{
    const struct WindowTemplate *templates = sDexnavWindows;

    InitWindows(templates);

    u32 baseBlock = 1;
    for (enum DexnavWindows windowId = 0; windowId < ARRAY_COUNT(sDexnavWindows); windowId++)
    {
        SetWindowAttribute(windowId, WINDOW_BASE_BLOCK, baseBlock);
        ClearWindowCopyToVram(windowId);
        baseBlock += (templates[windowId].width * templates[windowId].height);
    }
    DeactivateAllTextPrinters();
}

static void Task_HandleInput(u8 taskId)
{
    if (JOY_NEW(B_BUTTON) || JOY_REPEAT(B_BUTTON) )
    {
        PlaySoundStartFadeQuitApp(taskId);
        return;
    }

    if (JOY_NEW(A_BUTTON) || JOY_REPEAT(A_BUTTON) )
    {
        return;
    }

    if (JOY_NEW(DPAD_DOWN) || JOY_REPEAT(DPAD_DOWN) )
    {
        return;
    }

    if (JOY_NEW(DPAD_UP) || JOY_REPEAT(DPAD_UP) )
    {
        return;
    }

    if (JOY_NEW(DPAD_LEFT) || JOY_REPEAT(DPAD_LEFT) )
    {
        return;
    }

    if (JOY_NEW(DPAD_RIGHT) || JOY_REPEAT(DPAD_RIGHT) )
    {
        return;
    }

    if (JOY_NEW(L_BUTTON) || JOY_REPEAT(L_BUTTON) )
    {
        return;
    }

    if (JOY_NEW(R_BUTTON) || JOY_REPEAT(R_BUTTON) )
    {
        return;
    }

    if (JOY_NEW(START_BUTTON) || JOY_REPEAT(START_BUTTON) )
    {
        return;
    }

    if (JOY_NEW(SELECT_BUTTON) || JOY_REPEAT(SELECT_BUTTON) )
    {
        return;
    }
}

static void DisplayHelpBar(enum DexnavWindows windowId)
{
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    Dexnav_PrintHelpBarText(windowId);
    CopyWindowToVram(windowId, COPYWIN_GFX);
}

static enum DexnavMode Dexnav_GetMode(void)
{
    return sDexnavState->mode;
}

static void Dexnav_SetMode(enum DexnavMode mode)
{
    sDexnavState->mode = mode;
}

static void Dexnav_PrintHelpBarText(enum DexnavWindows windowId)
{
    u32 x = 4;
    u32 y = 0;
    u32 fontId = FONT_DEXNAV_HELPBAR;
    u32 lineSpacing = GetFontAttribute(fontId, FONTATTR_LINE_SPACING);
    u32 letterSpacing = GetFontAttribute(fontId, FONTATTR_LETTER_SPACING);

    bool32 isScanMode = (Dexnav_GetMode() == DEXNAV_MODE_SCAN);

    if (isScanMode)
        StringCopy(gStringVar4, COMPOUND_STRING("{A_BUTTON} Cancel Search {START_BUTTON} Return"));
    else
        StringCopy(gStringVar4, COMPOUND_STRING("{L_BUTTON} Pokedex {R_BUTTON} Register"));

    if (Dexnav_HasMultipleHabitats())
        StringAppend(gStringVar4,COMPOUND_STRING(" {SELECT_BUTTON} Switch Habitat"));

    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sDexnavWindowFontColors[DEXNAV_FONT_COLOR_WHITE], TEXT_SKIP_DRAW, gStringVar4);
}

static bool8 Dexnav_HasMultipleHabitats(void)
{
    u32 land = Dexnav_GetNumberHabitatMons(DEXNAV_HABITAT_LAND);
    u32 water = Dexnav_GetNumberHabitatMons(DEXNAV_HABITAT_WATER);
    
    return ((land > 0) && (water > 0));
}

static enum DexnavHabitats Dexnav_CalculateInitialHabitat(void)
{
    u32 land = Dexnav_GetNumberHabitatMons(DEXNAV_HABITAT_LAND);
    u32 water = Dexnav_GetNumberHabitatMons(DEXNAV_HABITAT_WATER);

    if (land > 0)
        return DEXNAV_HABITAT_LAND;

    if (water == 0)
        return DEXNAV_HABITAT_NONE;

    if (QuestMenu_GetSetQuestState(QUEST_HANG20,FLAG_GET_INACTIVE) == FALSE)
        return DEXNAV_HABITAT_WATER;
    else
        return DEXNAV_HABITAT_NONE;
}

static void Dexnav_SaveNumberHabitatMons(enum DexnavHabitats habitat, u32 count)
{
    sDexnavState->numHabitatMons[habitat] = count;
}

static u8 Dexnav_GetNumberHabitatMons(enum DexnavHabitats habitat)
{
    return sDexnavState->numHabitatMons[habitat];
}

static bool32 Dexnav_SpeciesAlreadyInHabitat(u32 species, u32 habitat, u32 count)
{
    for (u32 i = 0; i < count; i++)
    {
        if (sDexnavState->dexnavSpecies[habitat][i] == species)
            return TRUE;
    }
    return FALSE;
}

static u32 Dexnav_PopulateHabitat(const struct WildPokemonInfo *monsInfo, u32 wildCount, u32 habitat, u32 startCount)
{
    if (monsInfo == NULL || monsInfo->encounterRate == 0)
        return startCount;

    for (u32 i = 0; i < wildCount; i++)
    {
        u32 species = monsInfo->wildPokemon[i].species;

        if (species == SPECIES_NONE)
            continue;

        if (Dexnav_SpeciesAlreadyInHabitat(species, habitat, startCount))
            continue;

        sDexnavState->dexnavSpecies[habitat][startCount++] = species;
    }

    return startCount;
}

static void Dexnav_LoadEncounterData(void)
{
    memset(sDexnavState->dexnavSpecies, 0, sizeof(sDexnavState->dexnavSpecies));

    u32 headerId = GetCurrentMapWildMonHeaderId();

    if (headerId == HEADER_NONE)
    {
        u32 count = 0;
        Dexnav_SaveNumberHabitatMons(DEXNAV_HABITAT_WATER, count);
        Dexnav_SaveNumberHabitatMons(DEXNAV_HABITAT_LAND, count);
        return;
    }

    enum TimeOfDay timeOfDay = GetTimeOfDayForEncounters(headerId, WILD_AREA_LAND);
    const struct WildPokemonInfo *monsInfo = gWildMonHeaders[headerId].encounterTypes[timeOfDay].landMonsInfo;
    u32 count = Dexnav_PopulateHabitat(monsInfo, LAND_WILD_COUNT, DEXNAV_HABITAT_LAND, 0);
    Dexnav_SaveNumberHabitatMons(DEXNAV_HABITAT_LAND, count);

    timeOfDay = GetTimeOfDayForEncounters(headerId, WILD_AREA_WATER);
    monsInfo = gWildMonHeaders[headerId].encounterTypes[timeOfDay].waterMonsInfo;
    count = Dexnav_PopulateHabitat(monsInfo, WATER_WILD_COUNT, DEXNAV_HABITAT_WATER, 0);

    if (QuestMenu_GetSetQuestState(QUEST_TEACHATRAINERTOFISH,FLAG_GET_INACTIVE) == FALSE)
    {
        timeOfDay = GetTimeOfDayForEncounters(headerId, WILD_AREA_FISHING);
        monsInfo = gWildMonHeaders[headerId].encounterTypes[timeOfDay].fishingMonsInfo;
        count = Dexnav_PopulateHabitat(monsInfo, FISH_WILD_COUNT, DEXNAV_HABITAT_WATER, count);
    }
    Dexnav_SaveNumberHabitatMons(DEXNAV_HABITAT_WATER, count);
}

static void Dexnav_HandleHabitatHeader(void)
{
    enum DexnavWindows windowId = WIN_DEXNAV_HABITAT_HEADER;
    u32 habitat = Dexnav_GetHabitat();

    if ((habitat == DEXNAV_HABITAT_LAND) && (CanUseDigOrEscapeRopeOnCurMap()))
        habitat = 3;

    u32 tileOffset = habitat * DEXNAV_HABITAT_HEADER_WIDTH;

    const u8* baseGfx = ((const u8*)sHabitatBackgounds) + tileOffset;

    CopyToWindowPixelBuffer(windowId, baseGfx, DEXNAV_HABITAT_HEADER_WIDTH, 0);

    PutWindowTilemap(windowId);
    CopyWindowToVram(windowId, COPYWIN_FULL);
}

