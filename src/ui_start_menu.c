#include "global.h"
#include "strings.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "event_data.h"
#include "field_weather.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "item.h"
#include "item_menu.h"
#include "item_menu_icons.h"
#include "list_menu.h"
#include "item_icon.h"
#include "item_use.h"
#include "international_string_util.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "palette.h"
#include "party_menu.h"
#include "scanline_effect.h"
#include "script.h"
#include "sound.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text_window.h"
#include "overworld.h"
#include "event_data.h"
#include "rtc.h"
#include "fake_rtc.h"
#include "region_map.h"
#include "sprite.h"
#include "pokemon_icon.h"
#include "ui_start_menu.h"
#include "ui_options_menu.h"
#include "constants/items.h"
#include "constants/field_weather.h"
#include "constants/songs.h"
#include "constants/rgb.h"

// constants, structs

// grid
// inclusive
#define MAX_APP_ROWS          7
#define MAX_APP_COLUMNS       1

#define NUM_START_MONS_TOTAL  (PARTY_SIZE + DAYCARE_MON_COUNT)

// grid calc
#define GET_APP_GRID_X(row) (22 * (row))
#define GET_APP_GRID_Y(col) (19 * (col))

// sprite tiles size
#define START_MAIN_SPRITE_APP_CURSOR_SIZE    (16)
#define START_MAIN_SPRITE_APPS_SIZE          (4 + 64) // both icons and bg
#define START_MAIN_SPRITE_MON_PLATFORMS_SIZE (8)
#define START_MAIN_SPRITE_STATUS_HPBARS_SIZE (6 + 15)

// text window width
#define TIME_WINDOW_WIDTH      10
#define MAP_NAME_WINDOW_WIDTH  10

// palette slots
#define START_PAL_SLOT_TEXT    15

// misc
#define STRBUF_SIZE         64
#define TILE_TO_PIXELS(t)   (t * 8)
#define X_CENTER_ALIGN      (-1)
#define Y_CENTER_ALIGN      1

enum StartMenuBackgrounds
{
    START_BG_TEXT = 0,
    START_BG_CAUTIONBOX,
    START_BG_TEXTBOX,
    START_BG_WALLPAPER,
    NUM_START_BACKGROUNDS
};

enum StartMenuMainWindows
{
    START_MAIN_WIN_HELP_TOP = 0, // ToD, clock, Location, Signal
    START_MAIN_WIN_HELP_BOTTOM,  // Controls
    START_MAIN_WIN_TEXTBOX,      // Quest Flavor, Save Confirmation
    START_MAIN_WIN_APP_TITLE,
    NUM_START_MAIN_WINDOWS
};

#define START_MAIN_WIN_HELP_WIDTH      (DISPLAY_TILE_WIDTH)
#define START_MAIN_WIN_TEXTBOX_WIDTH   (DISPLAY_TILE_WIDTH - 2)
#define START_MAIN_WIN_APP_TITLE_WIDTH (DISPLAY_TILE_WIDTH - 8)

enum StartMenuMainSprites
{
    START_MAIN_SPRITE_APP_CURSOR,

    START_MAIN_SPRITE_APP_ICONS,
    START_MAIN_SPRITE_APP_ICONS_END = START_MAIN_SPRITE_APP_ICONS + NUM_START_APPS,

    START_MAIN_SPRITE_APP_BGS,
    START_MAIN_SPRITE_APP_BGS_END = START_MAIN_SPRITE_APP_BGS + NUM_START_APPS,

    START_MAIN_SPRITE_MON_PLATFORMS = START_MAIN_SPRITE_APP_BGS_END,
    START_MAIN_SPRITE_MON_PLATFORMS_END = START_MAIN_SPRITE_MON_PLATFORMS + NUM_START_MONS_TOTAL,

    START_MAIN_SPRITE_STATUS_HPBARS = START_MAIN_SPRITE_MON_PLATFORMS_END,
    START_MAIN_SPRITE_STATUS_HPBARS_END = START_MAIN_SPRITE_STATUS_HPBARS + PARTY_SIZE,

    START_MAIN_SPRITE_MON_ICONS = START_MAIN_SPRITE_STATUS_HPBARS_END,
    START_MAIN_SPRITE_MON_ICONS_END = START_MAIN_SPRITE_MON_ICONS + NUM_START_MONS_TOTAL,

    START_MAIN_SPRITE_DAYCARE_ITEMS = START_MAIN_SPRITE_MON_ICONS_END, // affine
    START_MAIN_SPRITE_DAYCARE_ITEMS_END = START_MAIN_SPRITE_DAYCARE_ITEMS + DAYCARE_MON_COUNT,

    NUM_START_MAIN_SPRITES = START_MAIN_SPRITE_DAYCARE_ITEMS_END
};

enum StartMenuTags
{
    START_TAG_APP_CURSOR = 0x6969,
    START_TAG_APPS,
    START_TAG_MON_PLATFORMS,
    START_TAG_STATUS_HPBARS,
    START_TAG_PALETTE, // every UI elements so far only uses this palette
    NUM_START_TAGS
};

enum StartMenuFontColors
{
    START_FONT_CLR_WHITE = 0,
    NUM_START_FONT_COLORS
};

enum StartMenuHelpSymbols
{
    // Time Of Day
    START_HELP_SYMBOL_TOD_M,    // Morning
    START_HELP_SYMBOL_TOD_D,    // Day
    START_HELP_SYMBOL_TOD_E,    // Evening
    START_HELP_SYMBOL_TOD_N,    // Night
    START_HELP_SYMBOL_MAP,
    // Internet Signal
    START_HELP_SYMBOL_SIG_3,
    START_HELP_SYMBOL_SIG_2,
    START_HELP_SYMBOL_SIG_1,
    START_HELP_SYMBOL_SIG_0A,
    START_HELP_SYMBOL_SIG_0B,   // animation for no signal modal
    NUM_START_HELP_SYMBOLS
};

enum StartMenuSetupSteps
{
    START_SETUP_RESET = 0,
    START_SETUP_BG,
    START_SETUP_GFX,
    START_SETUP_SPRITE,
    START_SETUP_WIN,
    START_SETUP_TEXT,
    START_SETUP_FADE,
    START_SETUP_FINISH
};

struct StartMenuData
{
    u8 spriteIds[NUM_START_MAIN_SPRITES];
    struct UCoords8 cursor;
    enum StartMenuModes mode;
    MainCallback savedCB;
};

// RAM data
static EWRAM_DATA struct StartMenuData *sStartMenuDataPtr = NULL;
static EWRAM_DATA struct UCoords8 sStartMenuLastCursor = {};

// declarations
static void Task_StartMenu(u8);
static void Task_CloseStartMenu(u8);

static void SpriteCB_AppCursor(struct Sprite *);

static void CB2_StartMenuSetup(void);
static void CB2_StartMenu(void);
static void VBlankCB_StartMenu(void);

static void SetupStartMenuBgs(void);
static void SetupStartMenuGraphics(void);
static void SetupStartMenuMainSprites(void);
static void SetupStartMenuMainAppSprites(void);
static void SetupStartMenuMainWindows(void);
static void SetupStartMenuText(void);
static void PrintStartMenuHelpTopText(u8 **);
static void PrintStartMenuHelpBottomText(u8 **);
static void PrintStartMenuTextboxText(u8 **);
static void PrintStartMenuAppTitleText(u8 **);
static inline void PrintStartMenuText(enum StartMenuMainWindows, u32, u32, u32, u32, u8 const *);
static inline void BlitHelpSymbols(enum StartMenuHelpSymbols, u16);
static inline enum StartMenuHelpSymbols ConvertToDIntoHelpSymbol(void);
static inline enum StartMenuHelpSymbols ConvertCurrentSignalIntoHelpSymbol(void);
static enum StartMenuApps ConvertStartMenuMainSpriteIntoApp(enum StartMenuMainSprites);
static void FreeStartMenuData(void);

// ROM data
static const struct BgTemplate sStartMenuBgs[NUM_START_BACKGROUNDS] =
{
    {
        .bg = START_BG_TEXT,
        .charBaseIndex = 0,
        .mapBaseIndex = 20,
        .screenSize = 2,
        .priority = 0
    },
    {
        .bg = START_BG_CAUTIONBOX,
        .charBaseIndex = 2,
        .mapBaseIndex = 22,
        .screenSize = 1,
        .priority = 1
    },
    {
        .bg = START_BG_TEXTBOX,
        .charBaseIndex = 1,
        .mapBaseIndex = 24,
        .screenSize = 2,
        .priority = 2
    },
    {
        .bg = START_BG_WALLPAPER,
        .charBaseIndex = 1,
        .mapBaseIndex = 26,
        .screenSize = 2,
        .priority = 3
    },
};

// bg and baseBlock are determined automagically
static const struct WindowTemplate sStartMenuMainWindows[] =
{
    [START_MAIN_WIN_HELP_TOP] =
    {
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = START_MAIN_WIN_HELP_WIDTH,
        .height = 2,
        .paletteNum = START_PAL_SLOT_TEXT
    },
    [START_MAIN_WIN_HELP_BOTTOM] =
    {
        .tilemapLeft = 1,
        .tilemapTop = 18,
        .width = START_MAIN_WIN_HELP_WIDTH,
        .height = 2,
        .paletteNum = START_PAL_SLOT_TEXT
    },
    [START_MAIN_WIN_TEXTBOX] =
    {
        .tilemapLeft = 1,
        .tilemapTop = 2,
        .width = START_MAIN_WIN_TEXTBOX_WIDTH,
        .height = 5,
        .paletteNum = START_PAL_SLOT_TEXT
    },
    [START_MAIN_WIN_APP_TITLE] =
    {
        .tilemapLeft = 4,
        .tilemapTop = 7,
        .width = START_MAIN_WIN_APP_TITLE_WIDTH,
        .height = 2,
        .paletteNum = START_PAL_SLOT_TEXT
    },
    DUMMY_WIN_TEMPLATE
};

// universal palette
static const u16 sStartMenuMainPalette[] = INCBIN_U16("graphics/ui_menus/start_menu/text.gbapal");

static const struct {
    const u32 *tiles;
    struct {
        const u16 *data;
        u8 slot;
    } palette;
    const u16 *tilemap;
} sStartMenuBgGfx[NUM_START_BACKGROUNDS] =
{
    [START_BG_TEXT] =
    {
        // .tiles is handled by text window
        .palette = { sStartMenuMainPalette, START_PAL_SLOT_TEXT }
        // .tilemap is handled by text window
    },
    [START_BG_TEXTBOX] =
    {
        .tiles = (const u32[])INCBIN_U32("graphics/ui_menus/start_menu/tiles.4bpp.lz"),
        // .palette set by the visual color option
        .tilemap = (const u16[])INCBIN_U16("graphics/ui_menus/start_menu/textbox.bin"),
    },
    [START_BG_WALLPAPER] =
    {
        // .tiles shares with START_BG_TEXTBOX
        // .palette set by the visual color option
        .tilemap = (const u16[])INCBIN_U16("graphics/ui_menus/start_menu/wallpaper.bin"),
    },
};

static const u16 *const sStartMenuWallpaperPalettes[VISUAL_OPTION_COLOR_COUNT] =
{
    [VISUAL_OPTION_COLOR_RED]      = (const u16[]) INCBIN_U16("graphics/ui_menus/options_menu/palettes/red.gbapal"),
    [VISUAL_OPTION_COLOR_GREEN]    = (const u16[]) INCBIN_U16("graphics/ui_menus/options_menu/palettes/green.gbapal"),
    [VISUAL_OPTION_COLOR_BLUE]     = (const u16[]) INCBIN_U16("graphics/ui_menus/options_menu/palettes/blue.gbapal"),
    [VISUAL_OPTION_COLOR_YELLOW]   = (const u16[]) INCBIN_U16("graphics/ui_menus/options_menu/palettes/yellow.gbapal"),
    [VISUAL_OPTION_COLOR_BLACK]    = (const u16[]) INCBIN_U16("graphics/ui_menus/options_menu/palettes/black.gbapal"),
    [VISUAL_OPTION_COLOR_WHITE]    = (const u16[]) INCBIN_U16("graphics/ui_menus/options_menu/palettes/white.gbapal"),
    [VISUAL_OPTION_COLOR_PLATINUM] = (const u16[]) INCBIN_U16("graphics/ui_menus/options_menu/palettes/platinum.gbapal"),
    [VISUAL_OPTION_COLOR_SCARLET]  = (const u16[]) INCBIN_U16("graphics/ui_menus/options_menu/palettes/scarlet.gbapal"),
    [VISUAL_OPTION_COLOR_VIOLET]   = (const u16[]) INCBIN_U16("graphics/ui_menus/options_menu/palettes/violet.gbapal"),
    [VISUAL_OPTION_COLOR_CUSTOM]   = (const u16[]) INCBIN_U16("graphics/ui_menus/options_menu/palette_custom.gbapal"),
};

// blit graphics
static const u8 sStartMenuHelpSymbols[] = INCBIN_U8("graphics/ui_menus/start_menu/help_symbols.4bpp");
static const u8 sStartMenuDaycareSymbols[] = INCBIN_U8("graphics/ui_menus/start_menu/daycare_symbols.4bpp");

static const struct {
    const struct SpriteSheet sheets[NUM_START_TAGS];
    const struct SpritePalette palette;
} sStartMenuSpriteGraphics =
{
    {
        {
            (const u16[])INCBIN_U16("graphics/ui_menus/start_menu/mon_status.4bpp", "graphics/ui_menus/start_menu/hp_bars.4bpp"),
            TILE_OFFSET_4BPP(START_MAIN_SPRITE_STATUS_HPBARS_SIZE), START_TAG_STATUS_HPBARS
        },
        {
            (const u16[])INCBIN_U16("graphics/ui_menus/start_menu/app_cursor.4bpp"),
            TILE_OFFSET_4BPP(START_MAIN_SPRITE_APP_CURSOR_SIZE), START_TAG_APP_CURSOR
        },
        {
            (const u16[])INCBIN_U16("graphics/ui_menus/start_menu/apps.4bpp"),
            TILE_OFFSET_4BPP(START_MAIN_SPRITE_APPS_SIZE), START_TAG_APPS
        },
        {
            (const u16[])INCBIN_U16("graphics/ui_menus/start_menu/mon_platform.4bpp"),
            TILE_OFFSET_4BPP(START_MAIN_SPRITE_MON_PLATFORMS_SIZE), START_TAG_MON_PLATFORMS
        },
        { NULL }
    },

    { sStartMenuMainPalette, START_TAG_PALETTE }
};

// strings

static const u8 *const sStartMenuTimeOfDayStrings[TIMES_OF_DAY_COUNT] =
{
    [TIME_MORNING] = COMPOUND_STRING("Morning"),
    [TIME_DAY]     = COMPOUND_STRING("Day"),
    [TIME_EVENING] = COMPOUND_STRING("Evening"),
    [TIME_NIGHT]   = COMPOUND_STRING("Night"),
};

static const u8 *const sStartMenuModeControls[NUM_START_MODES] =
{
    [START_MODE_NORMAL]      = COMPOUND_STRING("{A_BUTTON} Open {B_BUTTON} Return {SELECT_BUTTON} Reorder {START_BUTTON} Save"),
    [START_MODE_MOVE]        = COMPOUND_STRING("{A_BUTTON} Place {B_BUTTON} Return to Menu"),
    [START_MODE_SAVE_NORMAL ... START_MODE_SAVE_SCRIPT] = COMPOUND_STRING("{START_BUTTON} Save {B_BUTTON} Cancel"),
    [START_MODE_SAVE_FORCE]  = COMPOUND_STRING(""),
};

static const u8 *const sStartMenuModeTextboxes[NUM_START_MODES] =
{
    [START_MODE_NORMAL] = COMPOUND_STRING("something something\nlorem ipsum\nblah blah"),
    [START_MODE_MOVE] = COMPOUND_STRING("Move where?"),
    [START_MODE_SAVE_NORMAL ... START_MODE_SAVE_SCRIPT] = COMPOUND_STRING("Would you like to save?"),
    [START_MODE_SAVE_FORCE] = COMPOUND_STRING("Saving...\nDo not turn off the power."),
};

static const u8 *const sStartMenuModeAppNames[NUM_START_APPS] =
{
    // first row
    [START_APP_PARTY] = COMPOUND_STRING("Party"),
    [START_APP_BAG] = COMPOUND_STRING("Bag"),
    [START_APP_ARRIBA] = COMPOUND_STRING("Arriba"),
    [START_APP_TODOS] = COMPOUND_STRING("Todos"),
    [START_APP_DEXNAV] = COMPOUND_STRING("Dexnav"),
    [START_APP_POKEDEX] = COMPOUND_STRING("Pokedex"),
    [START_APP_BUZZR] = COMPOUND_STRING("Buzzr"),
    [START_APP_OPTIONS] = COMPOUND_STRING("Options"),

    // second row
    [START_APP_TRAINER_CARD] = COMPOUND_STRING("Trainer Card"),
    [START_APP_PRESTO] = COMPOUND_STRING("Presto"),
    [START_APP_WAVES_OF_CHANGE] = COMPOUND_STRING("Waves of Change"),
    [START_APP_CUSTOMIZE] = COMPOUND_STRING("Customize"),
    [START_APP_SAVE] = COMPOUND_STRING("Save"),
    [START_APP_SURPRISE_TRADE] = COMPOUND_STRING("Surprise Trade"),
    [START_APP_GOOGLE_GLASS] = COMPOUND_STRING("Google Glass"),
    [START_APP_ADVENTURES_GUIDE] = COMPOUND_STRING("Adventure's guide"),
};

//sprite
static const struct OamData sStartMenuAppCursorOamData =
{
    .shape = SPRITE_SHAPE(32x32),
    .size = SPRITE_SIZE(32x32),
    .objMode = ST_OAM_OBJ_NORMAL,
};

static const struct SpriteTemplate sStartMenuAppCursorSprite =
{
    .tileTag = START_TAG_APP_CURSOR,
    .paletteTag = START_TAG_PALETTE,
    .oam = &sStartMenuAppCursorOamData,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_AppCursor,
};

static const struct OamData sStartMenuAppOamData =
{
    .shape = SPRITE_SHAPE(16x16),
    .size = SPRITE_SIZE(16x16),
    .objMode = ST_OAM_OBJ_NORMAL,
};

static const union AnimCmd *const sStartMenuAppAnims[] =
{
    // first row
    [START_APP_PARTY] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_PARTY * 4, 1), ANIMCMD_END },
    [START_APP_BAG] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_BAG * 4, 1), ANIMCMD_END },
    [START_APP_ARRIBA] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_ARRIBA * 4, 1), ANIMCMD_END },
    [START_APP_TODOS] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_TODOS * 4, 1), ANIMCMD_END },
    [START_APP_DEXNAV] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_DEXNAV * 4, 1), ANIMCMD_END },
    [START_APP_POKEDEX] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_POKEDEX * 4, 1), ANIMCMD_END },
    [START_APP_BUZZR] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_BUZZR * 4, 1), ANIMCMD_END },
    [START_APP_OPTIONS] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_OPTIONS * 4, 1), ANIMCMD_END },

    // second row
    [START_APP_TRAINER_CARD] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_TRAINER_CARD * 4, 1), ANIMCMD_END },
    [START_APP_PRESTO] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_PRESTO * 4, 1), ANIMCMD_END },
    [START_APP_WAVES_OF_CHANGE] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_WAVES_OF_CHANGE * 4, 1), ANIMCMD_END },
    [START_APP_CUSTOMIZE] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_CUSTOMIZE * 4, 1), ANIMCMD_END },
    [START_APP_SAVE] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_SAVE * 4, 1), ANIMCMD_END },
    [START_APP_SURPRISE_TRADE] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_SURPRISE_TRADE * 4, 1), ANIMCMD_END },
    [START_APP_GOOGLE_GLASS] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_GOOGLE_GLASS * 4, 1), ANIMCMD_END },
    [START_APP_ADVENTURES_GUIDE] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_ADVENTURES_GUIDE * 4, 1), ANIMCMD_END },

    [NUM_START_APPS] = (const union AnimCmd[]){ ANIMCMD_FRAME(NUM_START_APPS * 4, 1), ANIMCMD_END },
};

static const struct SpriteTemplate sStartMenuAppSprite =
{
    .tileTag = START_TAG_APPS,
    .paletteTag = START_TAG_PALETTE,
    .oam = &sStartMenuAppOamData,
    .anims = sStartMenuAppAnims,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

// code

// tasks
void Task_OpenStartMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        CleanupOverworldWindowsAndTilemaps();
        OpenStartMenu(START_MODE_NORMAL);
        DestroyTask(taskId);
    }
}

static void Task_StartMenu(u8 taskId)
{
    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_PC_OFF);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_CloseStartMenu;
    }

    bool32 dpadPressed = FALSE;

    if (JOY_NEW(DPAD_LEFT | L_BUTTON))
    {
        if (sStartMenuDataPtr->cursor.x)
            sStartMenuDataPtr->cursor.x--;
        else
            sStartMenuDataPtr->cursor.x = MAX_APP_ROWS;

        dpadPressed = TRUE;
    }

    if (JOY_NEW(DPAD_RIGHT | R_BUTTON))
    {
        if (sStartMenuDataPtr->cursor.x < MAX_APP_ROWS)
            sStartMenuDataPtr->cursor.x++;
        else
            sStartMenuDataPtr->cursor.x = 0;

        dpadPressed = TRUE;
    }

    if (JOY_NEW(DPAD_UP))
    {
        if (sStartMenuDataPtr->cursor.y)
            sStartMenuDataPtr->cursor.y--;
        else
            sStartMenuDataPtr->cursor.y = MAX_APP_COLUMNS;

        dpadPressed = TRUE;
    }

    if (JOY_NEW(DPAD_DOWN))
    {
        if (sStartMenuDataPtr->cursor.y < MAX_APP_COLUMNS)
            sStartMenuDataPtr->cursor.y++;
        else
            sStartMenuDataPtr->cursor.y = 0;

        dpadPressed = TRUE;
    }

    if (dpadPressed)
    {
        u8 *strbuf[2];
        strbuf[0] = AllocZeroed(STRBUF_SIZE);
        strbuf[1] = AllocZeroed(STRBUF_SIZE);

        PrintStartMenuAppTitleText(strbuf);

        Free(strbuf[0]);
        Free(strbuf[1]);
    }
}

static void Task_CloseStartMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        sStartMenuLastCursor = sStartMenuDataPtr->cursor;
        SetMainCallback2(sStartMenuDataPtr->savedCB);
        FreeStartMenuData();
        DestroyTask(taskId);
    }
}

// sprite
static void SpriteCB_AppCursor(struct Sprite *s)
{
    s->x2 = GET_APP_GRID_X(sStartMenuDataPtr->cursor.x);
    s->y2 = GET_APP_GRID_Y(sStartMenuDataPtr->cursor.y);
}

// normal funcs
void OpenStartMenu(enum StartMenuModes mode)
{
    MainCallback cb = CB2_ReturnToField;
    if (mode >= START_MODE_SAVE_SCRIPT && mode < NUM_START_MODES)
        cb = CB2_ReturnToFieldContinueScript;

    sStartMenuDataPtr = AllocZeroed(sizeof(struct StartMenuData));
    if (!sStartMenuDataPtr)
    {
        SetMainCallback2(cb);
        return;
    }

    // set anything that needs to be explicitly non-zero here
    sStartMenuDataPtr->cursor = sStartMenuLastCursor;
    sStartMenuDataPtr->mode = mode;
    sStartMenuDataPtr->savedCB = cb;
    for (enum StartMenuMainSprites sprite = 0; sprite < NUM_START_MAIN_SPRITES; sprite++)
        sStartMenuDataPtr->spriteIds[sprite] = SPRITE_NONE;

    SetMainCallback2(CB2_StartMenuSetup);
}

static void CB2_StartMenuSetup(void)
{
    enum StartMenuSetupSteps steps = gMain.state;

    switch (steps)
    {
    case START_SETUP_RESET:
        FillPalette(RGB_BLACK, BG_PLTT_ID(0), PLTT_SIZEOF(512));
        ResetVramOamAndBgCntRegs();
        ResetAllBgsCoordinatesAndBgCntRegs();
        SetVBlankHBlankCallbacksToNull();
        ClearScheduledBgCopiesToVram();
        ScanlineEffect_Stop();
        FreeAllSpritePalettes();
        ResetPaletteFade();
        ResetSpriteData();
        ResetTasks();
        break;
    case START_SETUP_BG:
        SetupStartMenuBgs();
        break;
    case START_SETUP_GFX:
        SetupStartMenuGraphics();
        break;
    case START_SETUP_SPRITE:
        SetupStartMenuMainSprites();
        break;
    case START_SETUP_WIN:
        SetupStartMenuMainWindows();
        break;
    case START_SETUP_TEXT:
        SetupStartMenuText();
        break;
    case START_SETUP_FADE:
        BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        break;
    case START_SETUP_FINISH:
        CreateTask(Task_StartMenu, 0);
        SetVBlankCallback(VBlankCB_StartMenu);
        SetMainCallback2(CB2_StartMenu);
        return;
    default: // failsafe
        break;
    }

    gMain.state++;
}

static void CB2_StartMenu(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void VBlankCB_StartMenu(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

// helpers

static void SetupStartMenuBgs(void)
{
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sStartMenuBgs, NELEMS(sStartMenuBgs));
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);

    for (enum StartMenuBackgrounds bg = 0; bg < NUM_START_BACKGROUNDS; bg++)
    {
        ScheduleBgCopyTilemapToVram(bg);
        ShowBg(bg);
    }

    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_BLEND | BLDCNT_TGT1_BG2 | BLDCNT_TGT2_BG3);
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(0, 9));
}

static void SetupStartMenuGraphics(void)
{
    ResetTempTileDataBuffers();

    for (enum StartMenuBackgrounds bg = 0; bg < NUM_START_BACKGROUNDS; bg++)
    {
        if (sStartMenuBgGfx[bg].tiles)
            DecompressAndLoadBgGfxUsingHeap(bg, sStartMenuBgGfx[bg].tiles, 0, 0, 0);

        if (sStartMenuBgGfx[bg].palette.data)
            LoadPalette(sStartMenuBgGfx[bg].palette.data, BG_PLTT_ID(sStartMenuBgGfx[bg].palette.slot), PLTT_SIZE_4BPP);

        if (sStartMenuBgGfx[bg].tilemap)
            LoadBgTilemap(bg, sStartMenuBgGfx[bg].tilemap, BG_SCREEN_SIZE, 0);
    }

    // misc gfx that needs to be loaded manually
    LoadPalette(sStartMenuWallpaperPalettes[gSaveBlock2Ptr->optionsVisual[VISUAL_OPTIONS_COLOR]],
                BG_PLTT_ID(0), PLTT_SIZE_4BPP);
    FillPalette(RGB_RED, BG_PLTT_ID(0), PLTT_SIZEOF(1));

    // sprites
    LoadSpriteSheets(sStartMenuSpriteGraphics.sheets);
    LoadSpritePalette(&sStartMenuSpriteGraphics.palette);

    // mon icons
    TryLoadAllMonIconPalettesAtOffset(OBJ_PLTT_ID(2));
}

static void SetupStartMenuMainSprites(void)
{
    SetupStartMenuMainAppSprites();
}

static void SetupStartMenuMainAppSprites(void)
{
    u8 *spriteIds = sStartMenuDataPtr->spriteIds;
    const struct SpriteTemplate *template = &sStartMenuAppCursorSprite;
    struct Sprite *sprite = NULL;

    spriteIds[START_MAIN_SPRITE_APP_CURSOR] = CreateSprite(template, 27 + 16, 64 + 16, 0);
    sprite = &gSprites[spriteIds[START_MAIN_SPRITE_APP_CURSOR]];
    sprite->x2 = GET_APP_GRID_X(sStartMenuDataPtr->cursor.x);
    sprite->y2 = GET_APP_GRID_Y(sStartMenuDataPtr->cursor.y);

    template = &sStartMenuAppSprite;
    for (enum StartMenuMainSprites aIcon = START_MAIN_SPRITE_APP_ICONS, aBg = START_MAIN_SPRITE_APP_BGS;
         aIcon < START_MAIN_SPRITE_APP_ICONS_END; aIcon++, aBg++)
    {
        enum StartMenuApps a = ConvertStartMenuMainSpriteIntoApp(aIcon);

        spriteIds[aIcon] = CreateSprite(template, 35 + 8, 72 + 8, 1);
        sprite = &gSprites[spriteIds[aIcon]];
        StartSpriteAnim(sprite, a); // TODO richer interaction
        sprite->x2 = GET_APP_GRID_X(a & MAX_APP_ROWS);
        sprite->y2 = GET_APP_GRID_Y((a & (MAX_APP_ROWS + 1)) >> 3);

        spriteIds[aBg] = CreateSprite(template, 35 + 8, 72 + 8, 3);
        sprite = &gSprites[spriteIds[aBg]];
        StartSpriteAnim(sprite, NUM_START_APPS);
        sprite->x2 = GET_APP_GRID_X(a & MAX_APP_ROWS);
        sprite->y2 = GET_APP_GRID_Y((a & (MAX_APP_ROWS + 1)) >> 3);
        sprite->oam.objMode = ST_OAM_OBJ_BLEND;
    }
}

static void SetupStartMenuMainWindows(void)
{
    enum StartMenuMainWindows window = 0;
    struct WindowTemplate template;
    u32 baseBlock = 1;

    InitWindows(&gDummyWindowTemplate);
    FreeAllWindowBuffers();
    DeactivateAllTextPrinters();

    // allocate baseBlocks
    for (; window < NUM_START_MAIN_WINDOWS; window++)
    {
        template = sStartMenuMainWindows[window];
        template.bg = START_BG_TEXT;
        template.baseBlock = baseBlock;

        AddWindow(&template);
        FillWindowPixelBuffer(window, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
        PutWindowTilemap(window);
        CopyWindowToVram(window, COPYWIN_FULL);

        baseBlock += template.width * template.height;
    }
}

static void SetupStartMenuText(void)
{
    u8 *strbuf[2];

    strbuf[0] = AllocZeroed(STRBUF_SIZE);
    strbuf[1] = AllocZeroed(STRBUF_SIZE);

    PrintStartMenuHelpTopText(strbuf);
    PrintStartMenuHelpBottomText(strbuf);
    PrintStartMenuTextboxText(strbuf);
    PrintStartMenuAppTitleText(strbuf);

    Free(strbuf[0]);
    Free(strbuf[1]);
}

static void PrintStartMenuHelpTopText(u8 **strbuf)
{
    u32 x = 0;

    FillWindowPixelBuffer(START_MAIN_WIN_HELP_TOP, PIXEL_FILL(0));

    // TIME OF DAY ICON
    BlitHelpSymbols(ConvertToDIntoHelpSymbol(), x);

    // SPACING
    StringCopy(strbuf[0], COMPOUND_STRING(" "));

    // TIME OF DAY, 
    enum TimeOfDay time = GetTimeOfDay();
    StringAppend(strbuf[0], sStartMenuTimeOfDayStrings[time]);
    StringAppend(strbuf[0], COMPOUND_STRING(", "));

    // HOUR:MINUTES MERIDIEM
    struct SiiRtcInfo *rtc = FakeRtc_GetCurrentTime();
    FormatDecimalTimeWithoutSeconds(strbuf[1], rtc->hour, rtc->minute, FALSE);
    StringAppend(strbuf[0], strbuf[1]);

    x += TILE_TO_PIXELS(2);
    PrintStartMenuText(START_MAIN_WIN_HELP_TOP, FONT_SMALL, TIME_WINDOW_WIDTH, x, Y_CENTER_ALIGN, strbuf[0]);

    // MAP ICON
    x += TILE_TO_PIXELS(TIME_WINDOW_WIDTH);
    BlitHelpSymbols(START_HELP_SYMBOL_MAP, x);

    // SPACING
    StringCopy(strbuf[0], COMPOUND_STRING(" "));

    // MAP NAME
    GetMapName(strbuf[1], gMapHeader.regionMapSectionId, 0);
    StringAppend(strbuf[0], strbuf[1]);

    x += TILE_TO_PIXELS(1);
    PrintStartMenuText(START_MAIN_WIN_HELP_TOP, FONT_SMALL, 10, x, Y_CENTER_ALIGN, strbuf[0]);

    // SIGNAL STRENGTH
    x = (DISPLAY_WIDTH - 24);
    BlitHelpSymbols(ConvertCurrentSignalIntoHelpSymbol(), x);

    CopyWindowToVram(START_MAIN_WIN_HELP_TOP, COPYWIN_FULL);
}

// TODO: richer interaction with save overwrite
static void PrintStartMenuHelpBottomText(u8 **strbuf)
{
    FillWindowPixelBuffer(START_MAIN_WIN_HELP_BOTTOM, PIXEL_FILL(0));

    // CONTROLS
    PrintStartMenuText(START_MAIN_WIN_HELP_BOTTOM, FONT_SMALL, START_MAIN_WIN_HELP_WIDTH, 0, Y_CENTER_ALIGN,
                       sStartMenuModeControls[sStartMenuDataPtr->mode]);

    CopyWindowToVram(START_MAIN_WIN_HELP_BOTTOM, COPYWIN_FULL);
}

// TODO: richer interaction
static void PrintStartMenuTextboxText(u8 **strbuf)
{
    FillWindowPixelBuffer(START_MAIN_WIN_TEXTBOX, PIXEL_FILL(0));

    PrintStartMenuText(START_MAIN_WIN_TEXTBOX, FONT_SMALL, START_MAIN_WIN_TEXTBOX_WIDTH, 0, 0,
                       sStartMenuModeTextboxes[sStartMenuDataPtr->mode]);

    CopyWindowToVram(START_MAIN_WIN_TEXTBOX, COPYWIN_FULL);
}

// TODO: richer interaction w/ move mode
static void PrintStartMenuAppTitleText(u8 **strbuf)
{
    FillWindowPixelBuffer(START_MAIN_WIN_APP_TITLE, PIXEL_FILL(0));

    PrintStartMenuText(START_MAIN_WIN_APP_TITLE, FONT_SMALL, START_MAIN_WIN_APP_TITLE_WIDTH, X_CENTER_ALIGN, 0,
                       sStartMenuModeAppNames[sStartMenuDataPtr->cursor.x + (sStartMenuDataPtr->cursor.y * 8)]);

    CopyWindowToVram(START_MAIN_WIN_APP_TITLE, COPYWIN_FULL);
}

static inline void PrintStartMenuText(enum StartMenuMainWindows window, u32 font, u32 desiredWidth, u32 x, u32 y, u8 const *str)
{
    const u8 txtClr[] = {0, 1, 0}; // white

    font = GetFontIdToFit(str, font, 0, TILE_TO_PIXELS(desiredWidth));
    if (x == X_CENTER_ALIGN)
        x = GetStringCenterAlignXOffset(font, str, TILE_TO_PIXELS(desiredWidth));

    AddTextPrinterParameterized4(window, font, x, y, GetFontAttribute(font, FONTATTR_LETTER_SPACING),
                                 GetFontAttribute(font, FONTATTR_LETTER_SPACING), txtClr, 0, str);
}

static inline void BlitHelpSymbols(enum StartMenuHelpSymbols sym, u16 x)
{
    BlitBitmapRectToWindow(START_MAIN_WIN_HELP_TOP, sStartMenuHelpSymbols, sym * 16, 0, 160, 16, x, 0, 16, 16);
}

static inline enum StartMenuHelpSymbols ConvertToDIntoHelpSymbol(void)
{
    switch (GetTimeOfDay())
    {
    default:
    case TIME_MORNING:
        return START_HELP_SYMBOL_TOD_M;
    case TIME_DAY:
        return START_HELP_SYMBOL_TOD_D;
    case TIME_EVENING:
        return START_HELP_SYMBOL_TOD_E;
    case TIME_NIGHT:
        return START_HELP_SYMBOL_TOD_N;
    }
}

static inline enum StartMenuHelpSymbols ConvertCurrentSignalIntoHelpSymbol(void)
{
    // TODO (for someone else): signal control stuff
    return START_HELP_SYMBOL_SIG_3;
}

static enum StartMenuApps ConvertStartMenuMainSpriteIntoApp(enum StartMenuMainSprites app)
{
    return app - 1;
}

static void FreeStartMenuData(void)
{
    u8 *spriteIds = sStartMenuDataPtr->spriteIds;
    struct Sprite *sprite;

    for (enum StartMenuMainSprites i = 0; i < NUM_START_MAIN_SPRITES; i++)
    {
        if (spriteIds[i] == SPRITE_NONE)
            continue;

        sprite = &gSprites[spriteIds[i]];
        DestroySprite(sprite);
    }

    FreeSpritePaletteByTag(START_TAG_PALETTE);
    for (enum StartMenuTags tag = START_TAG_APP_CURSOR; tag < NUM_START_TAGS; tag++)
        FreeSpriteTilesByTag(tag);

    FreeAllWindowBuffers();
    TRY_FREE_AND_SET_NULL(sStartMenuDataPtr);
}

void StartMenuCallnative(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_OpenStartMenu, 0);
}
