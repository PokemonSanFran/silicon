#include "global.h"
#include "bg.h"
#include "decompress.h"
#include "gpu_regs.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "overworld.h"
#include "palette.h"
#include "scanline_effect.h"
#include "sound.h"
#include "sprite.h"
#include "task.h"
#include "window.h"
#include "options_visual.h"
#include "ui_options_menu.h"
#include "ui_party_menu.h"
#include "constants/rgb.h"
#include "constants/songs.h"

enum PartyMenuBackgrounds
{
    PARTY_BG_WALLPAPER = 3,
};

enum PartyMenuSetupSteps
{
    PARTY_SETUP_RESET = 0,
    PARTY_SETUP_BG,
    PARTY_SETUP_GFX,
    PARTY_SETUP_FADE,
    PARTY_SETUP_FINISH
};

struct PartyMenuData
{
    MainCallback savedCB;
};

static EWRAM_DATA struct PartyMenuData *sPartyMenuDataPtr = NULL;

static void Task_PartyMenu_WaitForFade(u8);
static void Task_PartyMenu_HandleInput(u8);
static void Task_PartyMenu_Exit(u8);
static void CB2_PartyMenu_Setup(void);
static void CB2_PartyMenu_Idle(void);
static void VBlankCB_PartyMenu_Idle(void);
static void PartySetup_Bgs(void);
static void PartySetup_Graphics(void);
static void PartyMenu_Free(void);

static const struct BgTemplate sPartyMenu_BackgroundTemplates[] =
{
    {
        .bg = PARTY_BG_WALLPAPER,
        .charBaseIndex = 1,
        .mapBaseIndex = 30,
        .screenSize = 0,
        .priority = 3
    },
};

static const u32 sPartyMenu_WallpaperTiles[] = INCGFX_U32("graphics/ui_menus/start_menu/tiles.png", ".4bpp.smol");
static const u16 sPartyMenu_WallpaperTilemap[] = INCBIN_U16("graphics/ui_menus/start_menu/wallpaper.bin");

static const u16 *const sPartyMenu_WallpaperPalettes[VISUAL_OPTION_COLOR_COUNT] =
{
    [VISUAL_OPTION_COLOR_RED]      = (const u16[]) INCGFX_U16("graphics/ui_menus/options_menu/palettes/red.pal", ".gbapal"),
    [VISUAL_OPTION_COLOR_GREEN]    = (const u16[]) INCGFX_U16("graphics/ui_menus/options_menu/palettes/green.pal", ".gbapal"),
    [VISUAL_OPTION_COLOR_BLUE]     = (const u16[]) INCGFX_U16("graphics/ui_menus/options_menu/palettes/blue.pal", ".gbapal"),
    [VISUAL_OPTION_COLOR_YELLOW]   = (const u16[]) INCGFX_U16("graphics/ui_menus/options_menu/palettes/yellow.pal", ".gbapal"),
    [VISUAL_OPTION_COLOR_BLACK]    = (const u16[]) INCGFX_U16("graphics/ui_menus/options_menu/palettes/black.pal", ".gbapal"),
    [VISUAL_OPTION_COLOR_WHITE]    = (const u16[]) INCGFX_U16("graphics/ui_menus/options_menu/palettes/white.pal", ".gbapal"),
    [VISUAL_OPTION_COLOR_PLATINUM] = (const u16[]) INCGFX_U16("graphics/ui_menus/options_menu/palettes/platinum.pal", ".gbapal"),
    [VISUAL_OPTION_COLOR_SCARLET]  = (const u16[]) INCGFX_U16("graphics/ui_menus/options_menu/palettes/scarlet.pal", ".gbapal"),
    [VISUAL_OPTION_COLOR_VIOLET]   = (const u16[]) INCGFX_U16("graphics/ui_menus/options_menu/palettes/violet.pal", ".gbapal"),
    [VISUAL_OPTION_COLOR_CUSTOM]   = (const u16[]) INCGFX_U16("graphics/ui_menus/options_menu/palette_custom.pal", ".gbapal"),
};

void PartyMenu_Init(MainCallback callback)
{
    sPartyMenuDataPtr = AllocZeroed(sizeof(struct PartyMenuData));
    if (!sPartyMenuDataPtr)
    {
        SetMainCallback2(callback);
        return;
    }

    sPartyMenuDataPtr->savedCB = callback;
    gMain.state = 0;
    SetMainCallback2(CB2_PartyMenu_Setup);
}

static void Task_PartyMenu_WaitForFade(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_PartyMenu_HandleInput;
}

static void Task_PartyMenu_HandleInput(u8 taskId)
{
    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_PC_OFF);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_PartyMenu_Exit;
    }
}

static void Task_PartyMenu_Exit(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sPartyMenuDataPtr->savedCB);
        PartyMenu_Free();
        DestroyTask(taskId);
    }
}

static void CB2_PartyMenu_Setup(void)
{
    enum PartyMenuSetupSteps steps = gMain.state;

    switch (steps)
    {
    case PARTY_SETUP_RESET:
        CpuFill16(0, (void *)VRAM, VRAM_SIZE);
        FillPalette(RGB_BLACK, BG_PLTT_ID(0), PLTT_SIZEOF(512));
        ResetVramOamAndBgCntRegs();
        ResetAllBgsCoordinatesAndBgCntRegs();
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        FieldClearVBlankHBlankCallbacks();
        ClearScheduledBgCopiesToVram();
        ScanlineEffect_Stop();
        FreeAllSpritePalettes();
        ResetPaletteFade();
        FreeAllWindowBuffers();
        ResetSpriteData();
        ResetTasks();
        break;
    case PARTY_SETUP_BG:
        PartySetup_Bgs();
        break;
    case PARTY_SETUP_GFX:
        PartySetup_Graphics();
        break;
    case PARTY_SETUP_FADE:
        BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        break;
    case PARTY_SETUP_FINISH:
        CreateTask(Task_PartyMenu_WaitForFade, 0);
        SetVBlankCallback(VBlankCB_PartyMenu_Idle);
        SetMainCallback2(CB2_PartyMenu_Idle);
        return;
    default:
        break;
    }

    gMain.state++;
}

static void CB2_PartyMenu_Idle(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void VBlankCB_PartyMenu_Idle(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void PartySetup_Bgs(void)
{
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sPartyMenu_BackgroundTemplates, NELEMS(sPartyMenu_BackgroundTemplates));
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
    ShowBg(PARTY_BG_WALLPAPER);
}

static void PartySetup_Graphics(void)
{
    DecompressDataWithHeaderVram(sPartyMenu_WallpaperTiles, (void *)BG_CHAR_ADDR(GetBgAttribute(PARTY_BG_WALLPAPER, BG_ATTR_CHARBASEINDEX)));
    LoadBgTilemap(PARTY_BG_WALLPAPER, sPartyMenu_WallpaperTilemap, BG_SCREEN_SIZE, 0);
    LoadPalette(sPartyMenu_WallpaperPalettes[OptionsMenu_GetSavedOptions(VISUAL_SETTINGS, VISUAL_OPTIONS_COLOR)],
                BG_PLTT_ID(0), PLTT_SIZE_4BPP);
    SetBackdropFromColor(RGB_BLACK);
}

static void PartyMenu_Free(void)
{
    TRY_FREE_AND_SET_NULL(sPartyMenuDataPtr);
}
