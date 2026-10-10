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
#include "pokemon.h"
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

#define PARTY_SLOT_COLUMNS      2
#define PARTY_SLOT_LEFT         1
#define PARTY_SLOT_WIDTH        14
#define PARTY_SLOT_MAIN_HEIGHT  5
#define PARTY_SLOT_MID_HEIGHT   6

// pal 0 comes from the BG3 wallpaper
#define PARTY_PAL_SLOT_FIRST   1
#define PARTY_PAL_SLOT_SLOTS   1

enum PartyMenuBackgrounds
{
    PARTY_BG_SLOTS = 2,
    PARTY_BG_WALLPAPER,
};

enum PartyMenuSlotRows
{
    PARTY_SLOT_ROW_TOP,
    PARTY_SLOT_ROW_MID,
    PARTY_SLOT_ROW_BOTTOM,
    NUM_PARTY_SLOT_ROWS
};

enum PartyMenuSetupSteps
{
    PARTY_SETUP_RESET = 0,
    PARTY_SETUP_BG,
    PARTY_SETUP_GFX,
    PARTY_SETUP_SLOTS,
    PARTY_SETUP_FADE,
    PARTY_SETUP_FINISH
};

struct PartyMenuData
{
    MainCallback savedCB;
    u16 slotsTilemapBuf[BG_SCREEN_SIZE / sizeof(u16)];
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
static void PartySetup_Slots(void);
static void PartyMenu_Free(void);

static const struct BgTemplate sPartyMenu_BackgroundTemplates[] =
{
    {
        .bg = PARTY_BG_SLOTS,
        .charBaseIndex = 2,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .priority = 2
    },
    {
        .bg = PARTY_BG_WALLPAPER,
        .charBaseIndex = 1,
        .mapBaseIndex = 30,
        .screenSize = 0,
        .priority = 3
    },
};

// silicon color theme pals
static const u32 sPartyMenu_WallpaperTiles[]            = INCGFX_U32("graphics/ui_menus/start_menu/tiles.png", ".4bpp.smol");
static const u16 sPartyMenu_WallpaperTilemap[]          = INCBIN_U16("graphics/ui_menus/start_menu/wallpaper.bin");
static const u16 sPartyMenu_WallpaperPal_Red[]          = INCGFX_U16("graphics/ui_menus/options_menu/palettes/red.pal", ".gbapal");
static const u16 sPartyMenu_WallpaperPal_Green[]        = INCGFX_U16("graphics/ui_menus/options_menu/palettes/green.pal", ".gbapal");
static const u16 sPartyMenu_WallpaperPal_Blue[]         = INCGFX_U16("graphics/ui_menus/options_menu/palettes/blue.pal", ".gbapal");
static const u16 sPartyMenu_WallpaperPal_Yellow[]       = INCGFX_U16("graphics/ui_menus/options_menu/palettes/yellow.pal", ".gbapal");
static const u16 sPartyMenu_WallpaperPal_Black[]        = INCGFX_U16("graphics/ui_menus/options_menu/palettes/black.pal", ".gbapal");
static const u16 sPartyMenu_WallpaperPal_White[]        = INCGFX_U16("graphics/ui_menus/options_menu/palettes/white.pal", ".gbapal");
static const u16 sPartyMenu_WallpaperPal_Platinum[]     = INCGFX_U16("graphics/ui_menus/options_menu/palettes/platinum.pal", ".gbapal");
static const u16 sPartyMenu_WallpaperPal_Scarlet[]      = INCGFX_U16("graphics/ui_menus/options_menu/palettes/scarlet.pal", ".gbapal");
static const u16 sPartyMenu_WallpaperPal_Violet[]       = INCGFX_U16("graphics/ui_menus/options_menu/palettes/violet.pal", ".gbapal");
static const u16 sPartyMenu_WallpaperPal_Custom[]       = INCGFX_U16("graphics/ui_menus/options_menu/palette_custom.pal", ".gbapal");

// party BG tiles
static const u32 sPartyMenu_Tiles[]                     = INCGFX_U32("graphics/ui_menus/party_menu/tiles.png", ".4bpp.smol");
static const u16 sPartyMenu_Palette[]                   = INCGFX_U16("graphics/ui_menus/party_menu/tiles.png", ".gbapal");
static const u8 sPartyMenu_SlotMainTilemap[]            = INCBIN_U8("graphics/ui_menus/party_menu/slot_main.bin");
static const u8 sPartyMenu_SlotMainEmptyTilemap[]       = INCBIN_U8("graphics/ui_menus/party_menu/slot_main_empty.bin");
static const u8 sPartyMenu_SlotMidTilemap[]             = INCBIN_U8("graphics/ui_menus/party_menu/slot_mid.bin");
static const u8 sPartyMenu_SlotMidEmptyTilemap[]        = INCBIN_U8("graphics/ui_menus/party_menu/slot_mid_empty.bin");

static const struct {
    const u8 *tilemap;
    const u8 *emptyTilemap;
    u8 top;
    u8 height;
} sPartyMenu_SlotRows[NUM_PARTY_SLOT_ROWS] =
{
    [PARTY_SLOT_ROW_TOP] =
    {
        .tilemap = sPartyMenu_SlotMainTilemap,
        .emptyTilemap = sPartyMenu_SlotMainEmptyTilemap,
        .top = 2,
        .height = PARTY_SLOT_MAIN_HEIGHT,
    },
    [PARTY_SLOT_ROW_MID] =
    {
        .tilemap = sPartyMenu_SlotMidTilemap,
        .emptyTilemap = sPartyMenu_SlotMidEmptyTilemap,
        .top = 7,
        .height = PARTY_SLOT_MID_HEIGHT,
    },
    [PARTY_SLOT_ROW_BOTTOM] =
    {
        .tilemap = sPartyMenu_SlotMainTilemap,
        .emptyTilemap = sPartyMenu_SlotMainEmptyTilemap,
        .top = 13,
        .height = PARTY_SLOT_MAIN_HEIGHT,
    },
};

static const u16 *const sPartyMenu_WallpaperPalettes[VISUAL_OPTION_COLOR_COUNT] =
{
    [VISUAL_OPTION_COLOR_RED]      = sPartyMenu_WallpaperPal_Red,
    [VISUAL_OPTION_COLOR_GREEN]    = sPartyMenu_WallpaperPal_Green,
    [VISUAL_OPTION_COLOR_BLUE]     = sPartyMenu_WallpaperPal_Blue,
    [VISUAL_OPTION_COLOR_YELLOW]   = sPartyMenu_WallpaperPal_Yellow,
    [VISUAL_OPTION_COLOR_BLACK]    = sPartyMenu_WallpaperPal_Black,
    [VISUAL_OPTION_COLOR_WHITE]    = sPartyMenu_WallpaperPal_White,
    [VISUAL_OPTION_COLOR_PLATINUM] = sPartyMenu_WallpaperPal_Platinum,
    [VISUAL_OPTION_COLOR_SCARLET]  = sPartyMenu_WallpaperPal_Scarlet,
    [VISUAL_OPTION_COLOR_VIOLET]   = sPartyMenu_WallpaperPal_Violet,
    [VISUAL_OPTION_COLOR_CUSTOM]   = sPartyMenu_WallpaperPal_Custom,
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
    case PARTY_SETUP_SLOTS:
        PartySetup_Slots();
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
    SetBgTilemapBuffer(PARTY_BG_SLOTS, sPartyMenuDataPtr->slotsTilemapBuf);
    ShowBg(PARTY_BG_SLOTS);
    ShowBg(PARTY_BG_WALLPAPER);
}

static void PartySetup_Graphics(void)
{
    DecompressDataWithHeaderVram(sPartyMenu_WallpaperTiles, (void *)BG_CHAR_ADDR(GetBgAttribute(PARTY_BG_WALLPAPER, BG_ATTR_CHARBASEINDEX)));
    LoadBgTilemap(PARTY_BG_WALLPAPER, sPartyMenu_WallpaperTilemap, BG_SCREEN_SIZE, 0);
    LoadPalette(sPartyMenu_WallpaperPalettes[OptionsMenu_GetSavedOptions(VISUAL_SETTINGS, VISUAL_OPTIONS_COLOR)],
                BG_PLTT_ID(0), PLTT_SIZE_4BPP);
    SetBackdropFromColor(RGB_BLACK);

    DecompressDataWithHeaderVram(sPartyMenu_Tiles, (void *)BG_CHAR_ADDR(GetBgAttribute(PARTY_BG_SLOTS, BG_ATTR_CHARBASEINDEX)));
    LoadPalette(&sPartyMenu_Palette[BG_PLTT_ID(PARTY_PAL_SLOT_FIRST)], BG_PLTT_ID(PARTY_PAL_SLOT_FIRST),
                sizeof(sPartyMenu_Palette) - PLTT_SIZE_4BPP * PARTY_PAL_SLOT_FIRST);
}

static void PartySetup_Slots(void)
{
    for (u32 slot = 0; slot < PARTY_SIZE; slot++)
    {
        u32 row = slot / PARTY_SLOT_COLUMNS;
        u32 left = PARTY_SLOT_LEFT + PARTY_SLOT_WIDTH * (slot % PARTY_SLOT_COLUMNS);
        const u8 *tilemap = sPartyMenu_SlotRows[row].tilemap;

        if (GetMonData(&gParties[B_TRAINER_PLAYER][slot], MON_DATA_SPECIES) == SPECIES_NONE)
            tilemap = sPartyMenu_SlotRows[row].emptyTilemap;

        for (u32 y = 0; y < sPartyMenu_SlotRows[row].height; y++)
        {
            for (u32 x = 0; x < PARTY_SLOT_WIDTH; x++)
            {
                FillBgTilemapBufferRect(PARTY_BG_SLOTS, tilemap[y * PARTY_SLOT_WIDTH + x],
                                        left + x, sPartyMenu_SlotRows[row].top + y, 1, 1, PARTY_PAL_SLOT_SLOTS);
            }
        }
    }

    ScheduleBgCopyTilemapToVram(PARTY_BG_SLOTS);
}

static void PartyMenu_Free(void)
{
    TRY_FREE_AND_SET_NULL(sPartyMenuDataPtr);
}
