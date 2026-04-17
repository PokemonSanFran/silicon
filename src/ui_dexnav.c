#include "global.h"
#include "dexnav.h"
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
static void Dexnav_InitializeBackgroundsAndLoadBackgroundGraphics(void);

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
        .mapBaseIndex = 28,
        .priority = 2,
    },
    [BG3_DEXNAV_BACKGROUNDS] =
    {
        .bg = BG3_DEXNAV_BACKGROUNDS,
        .charBaseIndex = 3,
        .mapBaseIndex = 26,
        .priority = 2,
    },
        /*
        */
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
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = WAVES_PALETTE_TEXT_ID,
    },
    [WIN_DEXNAV_INTERFACE_INSIGHT] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 2,
        .width = 9,
        .height = 5,
        .paletteNum = WAVES_PALETTE_TEXT_ID,
    },
    [WIN_DEXNAV_INTERFACE_MON_INFO] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 7,
        .width = 9,
        .height = 5,
        .paletteNum = WAVES_PALETTE_TEXT_ID,
    },
    [WIN_DEXNAV_INTERFACE_STREAK] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 12,
        .width = 9,
        .height = 5,
        .paletteNum = WAVES_PALETTE_TEXT_ID,
    },
    [WIN_DEXNAV_MAIN_WINDOW] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 21,
        .height = 16,
        .paletteNum = WAVES_PALETTE_TEXT_ID,
    },
    [WIN_DEXNAV_HELP_BAR] =
    {
        .bg = BG0_WAVES_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = 30,
        .height = 2,
        .paletteNum = WAVES_PALETTE_TEXT_ID,
    },
    DUMMY_WIN_TEMPLATE
};

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
}

static void SetScheduleBgs(enum DexnavBackgrounds backgroundId)
{
    SetBgTilemapBuffer(backgroundId, sBgTilemapBuffer[backgroundId]);
    ScheduleBgCopyTilemapToVram(backgroundId);
}

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
}

static void LoadDexnavPalettes(void)
{
    LoadPalette(sDexnavPalettesLUT[GetVisualColor()], DEXNAV_PALETTE_INTERFACE_SLOT, PLTT_SIZE_4BPP);
    LoadPalette(dexnavPalettesText, DEXNAV_PALETTE_TEXT_SLOT, PLTT_SIZE_4BPP);
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
            Dexnav_InitializeBackgroundsAndLoadBackgroundGraphics();
            gMain.state++;
            break;
        case 3:
            Dexnav_InitWindows();
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
