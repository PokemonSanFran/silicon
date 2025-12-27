#include "global.h"
#include "gba/flash_internal.h"
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
#include "util.h"
#include "quests.h"
#include "quest_flavor_lookup.h"
#include "daycare.h"
#include "dexnav.h"
#include "siliconDaycare.h"
#include "event_object_movement.h"
#include "field_control_avatar.h"
#include "field_player_avatar.h"
#include "save.h"
#include "load_save.h"
#include "new_game.h"
#include "trainer_card.h"
#include "frontier_pass.h"
#include "random.h"
#include "buzzr.h"
#include "glass.h"
#include "ui_adventure_guide.h"
#include "ui_character_customization_menu.h"
#include "ui_main_menu.h"
#include "ui_map_system.h"
#include "ui_options_menu.h"
#include "ui_pokedex.h"
#include "ui_presto.h"
#include "ui_start_menu.h"
#include "constants/items.h"
#include "constants/field_weather.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "constants/flags.h"
#include "new_game.h"
#include "save.h"
#include "start_menu.h"
#include "ui_map_system.h"
#include "buzzr.h"
#include "glass.h"
#include "constants/form_change_types.h"
#include "ui_main_menu.h"
#include "event_object_movement.h"
#include "field_player_avatar.h"
#include "ui_adventure_guide.h"
#include "ui_inventory.h"
#include "constants/map_types.h"

// constants, structs

// sprite coords
#define START_APP_CURSOR_X            (27 + 16)
#define START_APP_CURSOR_Y            (64 + 16)

#define START_APP_ICON_X              (35 + 8)
#define START_APP_ICON_Y              (72 + 8)

#define START_PARTY_MON_X             (1 + 16)
#define START_DAYCARE_MON_X           (175 + 16)
#define START_PARTY_MON_Y             (104 + 16)
#define START_MON_PLATFORM_Y          (128 + 8)
#define START_DAYCARE_MON_PLATFORM_X  (129 + 8)

#define START_MON_STATUS_Y            (130 + 4)

#define SAVE_OVERWRITE_PARTY_MON_X    (39 + 16)
#define SAVE_OVERWRITE_PARTY_MON_Y    (94 + 16)

#define SAVE_OVERWRITE_PLAYER_X       (9 + 16)
#define SAVE_OVERWRITE_PLAYER_Y       (94 + 16)

// bg
#define START_APP_BACKGROUNDS NUM_START_APPS

// sprite tiles size
#define START_MAIN_SPRITE_APP_CURSOR_SIZE    (32)
#define START_MAIN_SPRITE_APPS_SIZE          (4 + 4 + 64) // both icons and bg
#define START_MAIN_SPRITE_MON_PLATFORMS_SIZE (16)

// text window width
#define TIME_WINDOW_WIDTH      13
#define MAP_NAME_WINDOW_WIDTH  10

// palette slots
#define START_PAL_SLOT_TEXT    15

// task data

// Task_StartMenu_Init
#define tStartMode  data[0]

// universal
#define tTimer      data[15]

// Task_SaveOverwrite_Load
#define tState      data[0]
#define tSlideX     data[1]
#define tWindowId   data[2]
#define tReturnToOW data[3]

// Task_StartMenu_SlideIn/Out
#define tSlideY     data[0]

// sprite data

// START_MAIN_SPRITE_APP_ICONS
#define sMovingApp  data[0]

// window widths
#define START_MAIN_WIN_HELP_WIDTH      (DISPLAY_TILE_WIDTH)
#define START_MAIN_WIN_TEXTBOX_WIDTH   (DISPLAY_TILE_WIDTH - 2)
#define START_MAIN_WIN_APP_TITLE_WIDTH (DISPLAY_TILE_WIDTH - 8)
#define START_MAIN_WIN_EGG_INFO_WIDTH  (4)
#define START_WIN_SAVE_OVERWRITE_WIDTH (DISPLAY_TILE_WIDTH - 1)

#define SWAP_APP_WIDTH 78

// misc
#define NUM_START_MONS_TOTAL  (PARTY_SIZE + DAYCARE_MON_COUNT)
#define START_APP_FRAME(name) (START_APP_ ## name * 4)

#define STRBUF_SIZE         64

#define X_CENTER_ALIGN      (-1)
#define Y_CENTER_ALIGN      1

#define START_DEFAULT_TIMER (60 * 3)

// save overwrite
#define START_SAVE_OVERWRITE_X_FULLSCREEN   (-256)
#define START_SAVE_OVERWRITE_X_CENTERSCREEN (-380)

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
    START_MAIN_WIN_EGG_INFO,
    NUM_START_MAIN_WINDOWS
};

enum StartMenuMainSprites
{
    START_MAIN_SPRITE_APP_CURSOR = 0,

    START_MAIN_SPRITE_APP_ICONS,
    START_MAIN_SPRITE_APP_ICONS_END = START_MAIN_SPRITE_APP_ICONS + TOTAL_START_APPS,

    START_MAIN_SPRITE_APP_BGS,
    START_MAIN_SPRITE_APP_BGS_END = START_MAIN_SPRITE_APP_BGS + TOTAL_START_APPS,

    START_MAIN_SPRITE_MON_PLATFORMS = START_MAIN_SPRITE_APP_BGS_END,
    START_MAIN_SPRITE_MON_PLATFORMS_END = START_MAIN_SPRITE_MON_PLATFORMS + NUM_START_MONS_TOTAL,

    START_MAIN_SPRITE_MON_STATUS = START_MAIN_SPRITE_MON_PLATFORMS_END,
    START_MAIN_SPRITE_MON_STATUS_END = START_MAIN_SPRITE_MON_STATUS + PARTY_SIZE,

    START_MAIN_SPRITE_MON_ICONS = START_MAIN_SPRITE_MON_STATUS_END,
    START_MAIN_SPRITE_MON_ICONS_END = START_MAIN_SPRITE_MON_ICONS + NUM_START_MONS_TOTAL,

    START_MAIN_SPRITE_DAYCARE_ITEMS = START_MAIN_SPRITE_MON_ICONS_END, // affine
    START_MAIN_SPRITE_DAYCARE_ITEMS_END = START_MAIN_SPRITE_DAYCARE_ITEMS + DAYCARE_MON_COUNT,

    START_MAIN_SPRITE_EGG = START_MAIN_SPRITE_DAYCARE_ITEMS_END,

    NUM_START_MAIN_SPRITES
};

enum StartMenuTags
{
    START_TAG_APP_CURSOR = 0x6969,
    START_TAG_APPS,
    START_TAG_MON_PLATFORMS,
    START_TAG_PALETTE, // every UI elements so far only uses this palette
    NUM_START_TAGS,

    // disconnected tags
    START_TAG_ITEM
};

enum StartMenuFontColors
{
    START_FONT_CLR_WHITE = 0,
    NUM_START_FONT_COLORS
};

enum StartMenuCursorModes
{
    START_CURSOR_NORMAL,
    START_CURSOR_MOVE,

    NUM_START_CURSORS
};

enum StartMenuHelpSymbols
{
    // Time Of Day
    START_HELP_SYMBOL_TOD_M = 0, // Morning
    START_HELP_SYMBOL_TOD_D,     // Day
    START_HELP_SYMBOL_TOD_E,     // Evening
    START_HELP_SYMBOL_TOD_N,     // Night

    START_HELP_SYMBOL_MAP,

    // Cellular Signal
    START_HELP_SYMBOL_SIG_0B,    // animation for no signal modal
    START_HELP_SYMBOL_SIG_0A,
    START_HELP_SYMBOL_SIG_1,
    START_HELP_SYMBOL_SIG_2,

    START_HELP_SYMBOL_SWAP,

    NUM_START_HELP_SYMBOLS
};

enum StartMenuEggInfoSymbols
{
    START_EGG_INFO_SYMBOL_x = 0,
    START_EGG_INFO_SYMBOL_0,
    START_EGG_INFO_SYMBOL_1,
    START_EGG_INFO_SYMBOL_2,
    START_EGG_INFO_SYMBOL_3,
    START_EGG_INFO_SYMBOL_4,
    START_EGG_INFO_SYMBOL_5,
    START_EGG_INFO_SYMBOL_6,
    START_EGG_INFO_SYMBOL_7,
    START_EGG_INFO_SYMBOL_8,
    START_EGG_INFO_SYMBOL_9,
    START_EGG_INFO_SYMBOL_M,
    START_EGG_INFO_SYMBOL_F,
    NUM_START_EGG_INFO_SYMBOLS
};

enum StartMenuMonStatuses
{
    START_MON_STATUS_NONE = 0,
    START_MON_STATUS_SLEEP,
    START_MON_STATUS_POISON,
    START_MON_STATUS_BURN,
    START_MON_STATUS_FREEZE,
    START_MON_STATUS_PARALYSIS,

    NUM_START_MON_STATUS,

    START_MON_STATUS_FROSTBITE = START_MON_STATUS_FREEZE,
    START_MON_STATUS_FAINTED = NUM_START_MON_STATUS
};

enum StartMenuHpBarPercentage
{
    START_HP_BAR_PERCENTAGE_0 = 0,

    // red
    START_HP_BAR_PERCENTAGE_1,
    START_HP_BAR_PERCENTAGE_2,

    // yellow
    START_HP_BAR_PERCENTAGE_3,
    START_HP_BAR_PERCENTAGE_4,

    // green
    START_HP_BAR_PERCENTAGE_5,
    START_HP_BAR_PERCENTAGE_6,
    START_HP_BAR_PERCENTAGE_7,
    START_HP_BAR_PERCENTAGE_8,
    START_HP_BAR_PERCENTAGE_9,

    NUM_START_HP_BAR_PERCENTAGES
};

enum StartMenuCellularSignals
{
    START_SIGNAL_NONE,
    START_SIGNAL_OKAY,
    START_SIGNAL_STRONG,

    NUM_START_SIGNALS
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

enum StartMenuSaveOverwriteSteps
{
    START_SAVE_OVERWRITE_INIT, // clear windows, hide/remove sprites, etc
    START_SAVE_OVERWRITE_TILEMAP,
    START_SAVE_OVERWRITE_SLIDE_IN,
    START_SAVE_OVERWRITE_LOAD,
    START_SAVE_OVERWRITE_CONFIRM,
    START_SAVE_OVERWRITE_FLASH,
    START_SAVE_OVERWRITE_EXIT,
    START_SAVE_OVERWRITE_SLIDE_OUT,

    START_SAVE_OVERWRITE_FINISH
};

enum StartMenuStrengthErrorSteps
{
    START_STRENGTH_ERROR_FLASH, // flash the signal icon
    START_STRENGTH_ERROR_PRINT,

    START_STRENGTH_ERROR_FINISH,
};

// grid
enum StartMenuAppRows {
    START_APP_GRID_ROW_0,
    START_APP_GRID_ROW_1,
    START_APP_GRID_ROW_2,
    START_APP_GRID_ROW_3,
    START_APP_GRID_ROW_4,
    START_APP_GRID_ROW_5,
    START_APP_GRID_ROW_6,
    START_APP_GRID_ROW_7,
    NUM_START_APP_GRID_ROWS
};

enum StartMenuAppColumns {
    START_APP_GRID_COLUMN_0,
    START_APP_GRID_COLUMN_1,
    NUM_START_APP_GRID_COLUMNS
};

enum StartMenuSaveResults
{
    START_SAVE_INACTIVE,
    START_SAVE_IN_PROGRESS,
    START_SAVE_OVERWRITE,
    START_SAVE_SUCCESS,
    START_SAVE_FAILURE,

    NUM_START_SAVE_RESULTS
};

struct StartMenuData
{
    u8 spriteIds[NUM_START_MAIN_SPRITES];
    enum StartMenuModes mode, prevMode;
    enum StartMenuSaveResults saveRes;
    MainCallback savedCB;
    struct UCoords8 cursor;
    enum StartMenuApps movingAppIdx;
    const u8 *customStr;
    u16 tilemapBuf[BG_SCREEN_SIZE * 2];
};

struct StartMenuAppData
{
    const u8 *name;
    u16 unlockFlag;
    MainCallback openCB; // opening function
    enum StartMenuCellularSignals reqSignal; // minimum strength
};

struct StartMenuPreviousSave
{
    u8 playerName[PLAYER_NAME_LENGTH];
    u8 customValues[NUM_CUSTOMIZATION_PARTS];
    u8 rgbValues[NUM_CUSTOM_COLOR_OPTIONS][NUM_COLOR_OPTIONS];
    u16 partySpecies[PARTY_SIZE];
    struct WarpData location;
    u16 playTimeHours;
    u8 playTimeMinutes;
};

// RAM data
static EWRAM_DATA struct StartMenuData *sStartMenuDataPtr = NULL;
static EWRAM_DATA struct UCoords8 sStartMenuLastCursor = {};
static EWRAM_DATA struct StartMenuPreviousSave sStartMenuPreviousSave = {};

// declarations

// tasks
static void Task_StartMenu_HandleInput(u8);
static void Task_StartMenu_WaitForFade(u8);
static void Task_StartMenu_SlideIn(u8);
static void Task_StartMenu_SlideOut(u8);
static void Task_StartMenu_Exit(u8);

// callbacks
static void CB2_StartMenu_Setup(void);
static void CB2_StartMenu_Idle(void);
static void VBlankCB_StartMenu_Idle(void);

// boilerplates
static void StartSetup_Bgs(void);
static void StartSetup_Graphics(void);
static void StartSetup_MainSprites(void);
static void StartSetup_MainWindows(void);
static void StartSetup_Text(void);
static void StartSetup_MakeSpritesVisible(u32 spriteId);
static void StartSetup_MakeSpritesInvisible(u32 spriteId);

// main sprites
static void StartMainSprite_App(void);
static void StartMainSprite_PartyMon(void);
static void StartMainSprite_DaycareMon(void);

// text
static inline void StartPrint_Text(enum StartMenuMainWindows, u32, u32, u32, u32, u8 const *);
static void StartPrint_HelpTopText(void);
static void StartPrint_HelpBottomText(void);
static void StartPrint_QuestFlavorText(void);
static void StartPrint_AppNameText(void);
static void StartPrint_EggInfo(void);
static void StartPrint_SaveOverwriteText(u8); // uses task data
static u32 StartPrint_GetFirstActiveQuest(void);
static u32 StartPrint_ConvertStringLengthToPixels(u8 *, u32);

// app data
static void AppData_Populate(void);
static void AppData_InsertNewApps(void);
static u32 AppData_GetIndexFromApp(enum StartMenuApps);
static u32 AppData_GetFirstEmptyIndex(void);
static bool32 AppData_GetUnlockFlag(enum StartMenuApps);
static enum StartMenuApps AppData_GetAppFromIndex(u8);
static const struct StartMenuAppData *AppData_GetStruct(enum StartMenuApps);
static void AppData_SanitizeApps(void);

// app grid
static void AppGrid_HandleNormalInputs(u8);
static void AppGrid_HandleSaveInputs(u8);
static void AppGrid_HandleMoveInputs(u8);
static inline void AppGrid_HandleDirectionalInputs(void);
static u32 AppGrid_GetCurrentRow(void);
static u32 AppGrid_GetCurrentColumn(void);
static u32 AppGrid_GetCurrentIndex(void);
static u32 AppGrid_GetNumberOfRows(void);
static u32 AppGrid_GetRowWidth(u32);
static void AppGrid_SetXCursor(u32);
static void AppGrid_SetYCursor(u32);
bool32 AppGrid_IsDeltaAdditive(s32);
static void AppGrid_SanitizeXCursor(s32);
static void AppGrid_SanitizeYCursor(s32);
static void AppGrid_UpdateCurrentColumn(bool32);
static void AppGrid_UpdateCurrentRow(bool32);
static inline s32 AppGrid_GetXIconCoord(u32);
static inline s32 MonStatus_GetXDaycareIconCoord(u32);
static inline s32 AppGrid_GetYIconCoord(u32);
static void SpriteCB_AppGrid_Cursor(struct Sprite *);
static void AppGrid_HandleCursorVisibility(enum StartMenuModes mode);

// blit system
static inline void BlitSymbol_Help(enum StartMenuHelpSymbols, u32, u16, u16);
static inline void BlitSymbol_EggInfo(enum StartMenuEggInfoSymbols, u16, u16);
static inline enum StartMenuHelpSymbols BlitSymbol_ConvertTimeToHelp(enum TimeOfDay);
static inline enum StartMenuHelpSymbols BlitSymbol_ConvertLocalTimeToHelp(void);
static inline enum StartMenuHelpSymbols BlitSymbol_ConvertSignalToHelp(void);
static inline enum TimeOfDay BlitSymbol_GetTimeOfDayFromPlaytime(void);

// pokemon status
static inline enum StartMenuMonStatuses MonStatus_TranslateRawStatus(u32);
static inline u32 MonStatus_ConvertPercentageIntoHpBarFrame(u32);
static inline void *MonStatus_GetSpriteCB(u32, bool32);
static inline u32 MonStatus_GetHealthPercentage(struct Pokemon *);
static inline s32 MonStatus_GetXIconCoord(u32);
static inline s32 MonStatus_GetYIconCoord(u32);

// move mode functionalities
static void StartMoveMode_Init(void);
static void StartMoveMode_Exit(void);
static bool32 StartMoveMode_SwapApps(void);

// cellular signals
static inline enum StartMenuCellularSignals CellularSignal_GetCurrentStrength(void);
static void CellularSignal_StrengthError(u8);
static void Task_StrengthError_Init(u8);

// save mode functionalities
static void Task_SaveMode_Init(u8);
static void Task_SaveMode_Exit(u8);
static void SaveOverwrite_Init(u8);
static void Task_SaveOverwrite_Load(u8);
static void SaveOverwrite_LoadSprites(void);
static void SaveOverwrite_DestroySprites(void);
static inline s32 SaveOverwrite_GetXIconCoord(u32);
static inline s32 SaveOverwrite_GetYIconCoord(u32);
static inline u32 SaveMode_GetSaveSE(void);

static void StartMenu_Free(void);

// ROM data
static const struct BgTemplate sStartMenu_BackgroundTemplates[NUM_START_BACKGROUNDS] =
{
    {
        .bg = START_BG_TEXT,
        .charBaseIndex = 0,
        .mapBaseIndex = 24,
        .screenSize = 2,
        .priority = 0
    },
    {
        .bg = START_BG_CAUTIONBOX,
        .charBaseIndex = 2,
        .mapBaseIndex = 26,
        .screenSize = 1,
        .priority = 2
    },
    {
        .bg = START_BG_TEXTBOX,
        .charBaseIndex = 1,
        .mapBaseIndex = 28,
        .screenSize = 2,
        .priority = 2
    },
    {
        .bg = START_BG_WALLPAPER,
        .charBaseIndex = 1,
        .mapBaseIndex = 30,
        .screenSize = 2,
        .priority = 3
    },
};

// bg and baseBlock are determined automagically
static const struct WindowTemplate sStartMenu_MainWindowTemplates[] =
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
    [START_MAIN_WIN_EGG_INFO] =
    {
        .tilemapLeft = 24,
        .tilemapTop = 16,
        .width = START_MAIN_WIN_EGG_INFO_WIDTH,
        .height = 2,
        .paletteNum = START_PAL_SLOT_TEXT
    },
    DUMMY_WIN_TEMPLATE
};

// universal palette
static const u16 sStartMenu_Palette[] = INCBIN_U16("graphics/ui_menus/start_menu/text.gbapal");

static const struct {
    const u32 *tiles;
    struct {
        const u16 *data;
        u8 slot;
    } palette;
    const u16 *tilemap;
} sStartMenu_BackgroundGraphics[NUM_START_BACKGROUNDS] =
{
    [START_BG_TEXT] =
    {
        // .tiles is handled by text window
        .palette = { sStartMenu_Palette, START_PAL_SLOT_TEXT }
        // .tilemap is handled by text window
    },
    [START_BG_CAUTIONBOX] =
    {
        .tiles = (const u32[])INCBIN_U32("graphics/ui_menus/start_menu/save_overwrite_modal.4bpp.smol"),
        .tilemap = (const u16[])INCBIN_U16("graphics/ui_menus/start_menu/save_overwrite_modal.bin"),
    },
    [START_BG_TEXTBOX] =
    {
        .tiles = (const u32[])INCBIN_U32("graphics/ui_menus/start_menu/tiles.4bpp.smol"),
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

static const u16 *const sStartMenu_WallpaperPalettes[VISUAL_OPTION_COLOR_COUNT] =
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
static const u8 sStartMenuSymbols_Help[] = INCBIN_U8("graphics/ui_menus/start_menu/help_symbols.4bpp");
static const u8 sStartMenuSymbols_EggInfo[] = INCBIN_U8("graphics/ui_menus/start_menu/daycare_symbols.4bpp");
static const u8 sStartMenuSymbols_MonStatus[] = INCBIN_U8("graphics/ui_menus/start_menu/mon_status.4bpp");
static const u8 sStartMenuSymbols_HpBar[] = INCBIN_U8("graphics/ui_menus/start_menu/hp_bar.4bpp");

static const struct {
    const struct SpriteSheet sheets[NUM_START_TAGS];
    const struct SpritePalette palette;
} sStartMenu_SpriteGraphics =
{
    {
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

    { sStartMenu_Palette, START_TAG_PALETTE }
};

// strings

static const u8 *const sStartMenuStrings_TimeOfDay[TIMES_OF_DAY_COUNT] =
{
    [TIME_MORNING] = COMPOUND_STRING("Morning"),
    [TIME_DAY]     = COMPOUND_STRING("Day"),
    [TIME_EVENING] = COMPOUND_STRING("Evening"),
    [TIME_NIGHT]   = COMPOUND_STRING("Night"),
};

static const u8 *const sStartMenuStrings_ControlByModes[NUM_START_MODES] =
{
    [START_MODE_NORMAL]      = COMPOUND_STRING("{A_BUTTON} Open {B_BUTTON} Return {SELECT_BUTTON} Move {START_BUTTON} Save"),
    [START_MODE_MOVE]        = COMPOUND_STRING("{A_BUTTON} Place {B_BUTTON} Return to Menu {SELECT_BUTTON} Move"),
    [START_MODE_SAVE_NORMAL ... START_MODE_SAVE_SCRIPT] = COMPOUND_STRING("{START_BUTTON} Save Adventure {B_BUTTON} Cancel"),
    [START_MODE_SAVE_FORCE]  = COMPOUND_STRING(""),
};

static const u8 *const sStartMenuStrings_QuestFlavors[NUM_START_MODES] =
{
    [START_MODE_NORMAL] = COMPOUND_STRING(" "),
    [START_MODE_MOVE] = COMPOUND_STRING("Move where?"),
    [START_MODE_SAVE_NORMAL ... START_MODE_SAVE_SCRIPT] = gText_SaveYourAdventure,
    [START_MODE_SAVE_FORCE] = gText_NowSavingAdventure,
};

static const u8 *const sStartMenuStrings_ControlBySaveResults[] =
{
    [START_SAVE_INACTIVE ... START_SAVE_IN_PROGRESS] = COMPOUND_STRING(""),
    [START_SAVE_OVERWRITE] = gText_ConfirmOverwrite
};

static const u8 sStartMenuStrings_SaveResControlReturnMenu[] = _("{B_BUTTON} Return to Menu {START_BUTTON} Return to Overworld");
static const u8 sStartMenuStrings_SaveResControlReturnOverworld[] = _("{B_BUTTON} Return to Overworld");

static const u8 *const sStartMenuStrings_SaveResult[NUM_START_SAVE_RESULTS] =
{
    [START_SAVE_INACTIVE]    = COMPOUND_STRING(""),
    [START_SAVE_IN_PROGRESS] = gText_NowSavingAdventure,
    [START_SAVE_OVERWRITE]   = gText_EraseOldAdventure,
    [START_SAVE_SUCCESS]     = gText_YouSaved,
    [START_SAVE_FAILURE]     = gText_ThereWasAnError,
};

static const u8 sStartMenuStrings_CellularSignalErrorString[] = _(
    "Current signal is not enough for this app.\n"
    "Please go somewhere else with better\n"
    "signal.");
static const u8 sStartMenuStrings_CellularSignalErrorControls[] = _(
    "Press any button to continue");

// sprite
static const struct OamData sAppGrid_CursorOamData =
{
    .shape = SPRITE_SHAPE(32x32),
    .size = SPRITE_SIZE(32x32),
};

static const struct SpriteTemplate sAppGrid_CursorSpriteTemplate =
{
    .tileTag = START_TAG_APP_CURSOR,
    .paletteTag = START_TAG_PALETTE,
    .oam = &sAppGrid_CursorOamData,
    .anims = (const union AnimCmd *const[]){
        [START_CURSOR_NORMAL] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_CURSOR_NORMAL * 16), ANIMCMD_END },
        [START_CURSOR_MOVE] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_CURSOR_MOVE * 16), ANIMCMD_END },
    },
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_AppGrid_Cursor,
};

static const struct OamData sAppData_OamData =
{
    .shape = SPRITE_SHAPE(16x16),
    .size = SPRITE_SIZE(16x16),
};

static const struct SpriteTemplate sAppData_SpriteTemplate =
{
    .tileTag = START_TAG_APPS,
    .paletteTag = START_TAG_PALETTE,
    .oam = &sAppData_OamData,
    .anims = (const union AnimCmd *const[]){
        // move mode
        [START_APP_NONE] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_FRAME(NONE), 1), ANIMCMD_END },

        // first row
        [START_APP_PARTY] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_FRAME(PARTY), 1), ANIMCMD_END },
        [START_APP_BAG] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_FRAME(BAG), 1), ANIMCMD_END },
        [START_APP_ARRIBA] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_FRAME(ARRIBA), 1), ANIMCMD_END },
        [START_APP_TODOS] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_FRAME(TODOS), 1), ANIMCMD_END },
        [START_APP_DEXNAV] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_FRAME(DEXNAV), 1), ANIMCMD_END },
        [START_APP_POKEDEX] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_FRAME(POKEDEX), 1), ANIMCMD_END },
        [START_APP_BUZZR] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_FRAME(BUZZR), 1), ANIMCMD_END },
        [START_APP_OPTIONS] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_FRAME(OPTIONS), 1), ANIMCMD_END },

        // second row
        [START_APP_TRAINER_CARD] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_FRAME(TRAINER_CARD), 1), ANIMCMD_END },
        [START_APP_PRESTO] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_FRAME(PRESTO), 1), ANIMCMD_END },
        [START_APP_WAVES_OF_CHANGE] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_FRAME(WAVES_OF_CHANGE), 1), ANIMCMD_END },
        [START_APP_CUSTOMIZE] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_FRAME(CUSTOMIZE), 1), ANIMCMD_END },
        [START_APP_SAVE] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_FRAME(SAVE), 1), ANIMCMD_END },
        [START_APP_SURPRISE_TRADE] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_FRAME(SURPRISE_TRADE), 1), ANIMCMD_END },
        [START_APP_GOOGLE_GLASS] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_FRAME(GOOGLE_GLASS), 1), ANIMCMD_END },
        [START_APP_ADVENTURES_GUIDE] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_FRAME(ADVENTURES_GUIDE), 1), ANIMCMD_END },

        // app bg
        [START_APP_BACKGROUNDS] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_APP_FRAME(BACKGROUNDS), 1), ANIMCMD_END },
    },
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct OamData sMonStatus_PlatformOamData =
{
    .shape = SPRITE_SHAPE(32x16),
    .size = SPRITE_SIZE(32x16),
    .objMode = ST_OAM_OBJ_BLEND,
    .priority = 1
};

static const struct SpriteTemplate sMonStatus_PlatformSpriteTemplate =
{
    .tileTag = START_TAG_MON_PLATFORMS,
    .paletteTag = START_TAG_PALETTE,
    .oam = &sMonStatus_PlatformOamData,
    .anims = (const union AnimCmd *const[]){
        (const union AnimCmd[]){ ANIMCMD_FRAME(0, 1), ANIMCMD_END }, // default
        (const union AnimCmd[]){ ANIMCMD_FRAME(8, 1), ANIMCMD_END }, // daycare
    },
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct OamData sMonStatus_OamData =
{
    .shape = SPRITE_SHAPE(32x8),
    .size = SPRITE_SIZE(32x8),
};

static const u8 sBlankGfx[] = INCBIN_U8("graphics/interface/blank.4bpp");
static const struct SpriteFrameImage sStartMenuDummyFrames[] = { obj_frame_tiles(sBlankGfx) };

static const struct SpriteTemplate sMonStatus_SpriteTemplate =
{
    .tileTag = TAG_NONE,
    .paletteTag = START_TAG_PALETTE,
    .oam = &sMonStatus_OamData,
    .anims = gDummySpriteAnimTable,
    .images = sStartMenuDummyFrames, // trust the process
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct OamData sMonStatus_DaycareItemOamData =
{
    .shape = SPRITE_SHAPE(32x32),
    .size = SPRITE_SIZE(32x32),
    .affineMode = ST_OAM_AFFINE_NORMAL
};

static const struct SpriteTemplate sMonStatus_DaycareItemSpriteTemplate =
{
    // .tileTag and .paletteTag set seperately
    .oam = &sMonStatus_DaycareItemOamData,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = (const union AffineAnimCmd *const[]){
        [0] = (const union AffineAnimCmd[]){ AFFINEANIMCMD_FRAME(-96, -96, 0, 1), AFFINEANIMCMD_END }, // shrink
    },
    .callback = SpriteCallbackDummy
};

// misc
static const struct StartMenuAppData sStartMenu_AppData[NUM_START_APPS] =
{
    [START_APP_NONE] =
    {
        COMPOUND_STRING("Free Space"), 0, NULL
    },

    // first row
    [START_APP_PARTY] =
    {
        COMPOUND_STRING("Party"), FLAG_SYS_APP_POKEMON_GET, CB2_PartyMenuFromStartMenu
    },
    [START_APP_BAG] =
    {
        COMPOUND_STRING("Bag"), FLAG_SYS_APP_BAG_GET, CB2_InventoryFromStartMenu
    },
    [START_APP_ARRIBA] =
    {
        COMPOUND_STRING("Arriba"), FLAG_SYS_APP_MAP_GET, CB2_MapSystemFromStartMenu, START_SIGNAL_OKAY
    },
    [START_APP_TODOS] =
    {
        COMPOUND_STRING("Todos"), FLAG_SYS_APP_QUEST_GET, CB2_QuestMenuFromStartMenu
    },
    [START_APP_DEXNAV] =
    {
        COMPOUND_STRING("Dexnav"), FLAG_SYS_APP_DEXNAV_GET, CB2_DexNavFromStartMenu, START_SIGNAL_OKAY
    },
    [START_APP_POKEDEX] =
    {
        COMPOUND_STRING("Pokédex"), FLAG_SYS_APP_POKEDEX_GET, CB2_PokedexFromStartMenu
    },
    [START_APP_BUZZR] =
    {
        COMPOUND_STRING("Buzzr"), FLAG_SYS_APP_BUZZR_GET, CB2_BuzzrFromStartMenu, START_SIGNAL_STRONG
    },
    [START_APP_OPTIONS] =
    {
        COMPOUND_STRING("Options"), 0, CB2_OptionsFromStartMenu
    },

    // second row
    [START_APP_TRAINER_CARD] =
    {
        COMPOUND_STRING("Trainer Card"), 0, NULL
    },
    [START_APP_PRESTO] =
    {
        COMPOUND_STRING("Presto"), FLAG_SYS_APP_PRESTO_GET, CB2_PrestoFromStartMenu, START_SIGNAL_OKAY
    },
    [START_APP_WAVES_OF_CHANGE] = // PSF TODO ui
    {
        COMPOUND_STRING("Waves of Change"), FLAG_SYS_APP_WAVES_OF_CHANGE_GET, NULL, START_SIGNAL_STRONG
    },
    [START_APP_CUSTOMIZE] =
    {
        COMPOUND_STRING("Customize"), FLAG_SYS_B_DASH, CB2_CustomizationFromStartMenu
    },
    [START_APP_SAVE] = // the "opening" function is baked in
    {
        COMPOUND_STRING("Save"), 0, NULL
    },
    [START_APP_SURPRISE_TRADE] = // PSF TODO ui
    {
        COMPOUND_STRING("Surprise Trade"), FLAG_SYS_APP_SURPRISE_TRADE_GET, NULL, START_SIGNAL_STRONG
    },
    [START_APP_GOOGLE_GLASS] =
    {
        COMPOUND_STRING("Google Glass"), FLAG_SYS_APP_GOOGLE_GLASS_GET, CB2_GlassFromStartMenu, START_SIGNAL_OKAY
    },
    [START_APP_ADVENTURES_GUIDE] =
    {
        COMPOUND_STRING("Adventure Guide"), 0, CB2_AdventureGuideFromStartMenu, START_SIGNAL_OKAY
    },
};

static const enum StartMenuCellularSignals sCellularSignal_FilterByMapTypes[] =
{
    [MAP_TYPE_NONE] = START_SIGNAL_NONE,
    [MAP_TYPE_TOWN] = START_SIGNAL_STRONG,
    [MAP_TYPE_CITY] = START_SIGNAL_STRONG,
    [MAP_TYPE_ROUTE] = START_SIGNAL_STRONG,
    [MAP_TYPE_UNDERGROUND] = START_SIGNAL_NONE,
    [MAP_TYPE_UNDERWATER] = START_SIGNAL_NONE,
    [MAP_TYPE_OCEAN_ROUTE] = START_SIGNAL_OKAY,
    [MAP_TYPE_UNKNOWN] = START_SIGNAL_NONE,
    [MAP_TYPE_INDOOR] = START_SIGNAL_OKAY,
    [MAP_TYPE_SECRET_BASE] = START_SIGNAL_OKAY,
};

// code
void StartMenu_Init(enum StartMenuModes mode)
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
    sStartMenuDataPtr->mode = mode;
    sStartMenuDataPtr->prevMode = mode;
    sStartMenuDataPtr->savedCB = cb;
    memset(sStartMenuDataPtr->spriteIds, SPRITE_NONE, NUM_START_MAIN_SPRITES * sizeof(u8));

    AppData_Populate();

    sStartMenuDataPtr->movingAppIdx = NUM_START_APPS;
    sStartMenuDataPtr->cursor = sStartMenuLastCursor;

    SetMainCallback2(CB2_StartMenu_Setup);
}

bool32 StartMenu_OpenNormalMode(void)
{
    if (gPlayerAvatar.preventStep)
        return FALSE;

    if (ArePlayerFieldControlsLocked())
        return FALSE;

    if (!IsOverworldLinkActive())
    {
        FreezeObjectEvents();
        PlayerFreeze();
        StopPlayerAvatar();
    }

    PlaySE(SE_WIN_OPEN);
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_StartMenu_Init, 0);
    LockPlayerFieldControls();

    return TRUE;
}

void StartMenu_OpenSaveMode(void)
{
    enum StartMenuModes mode = START_MODE_SAVE_SCRIPT;

    if (!IsOverworldLinkActive())
    {
        FreezeObjectEvents();
        PlayerFreeze();
        StopPlayerAvatar();
    }

    LockPlayerFieldControls();
    if (FlagGet(FLAG_SHOULD_SKIP_CREDITS))
        mode = START_MODE_SAVE_FORCE;

    u32 taskId = CreateTask(Task_StartMenu_Init, 0);
    gTasks[taskId].tStartMode = mode;
}

void StartMenu_HoldPreviousSave(void)
{
    if (!gDifferentSaveFile || gSaveFileStatus != SAVE_STATUS_OK)
        return;

    memset(&sStartMenuPreviousSave, 0, sizeof(struct StartMenuPreviousSave));

    StringCopy(sStartMenuPreviousSave.playerName, gSaveBlock2Ptr->playerName);
    memcpy(&sStartMenuPreviousSave.customValues, &gSaveBlock3Ptr->customizationValues, NUM_CUSTOMIZATION_PARTS * sizeof(u8));
    memcpy(&sStartMenuPreviousSave.rgbValues, &gSaveBlock3Ptr->rgbValues, (NUM_CUSTOM_COLOR_OPTIONS * NUM_COLOR_OPTIONS) * sizeof(u8));

    memset(sStartMenuPreviousSave.partySpecies, SPECIES_NONE, PARTY_SIZE * sizeof(u16));
    for (u32 i = 0; i < gPlayerPartyCount; i++)
    {
        sStartMenuPreviousSave.partySpecies[i] = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG);
    }

    memcpy(&sStartMenuPreviousSave.location, &gSaveBlock1Ptr->location, sizeof(struct WarpData));

    sStartMenuPreviousSave.playTimeHours = gSaveBlock2Ptr->playTimeHours;
    sStartMenuPreviousSave.playTimeMinutes = gSaveBlock2Ptr->playTimeMinutes;
}


// tasks
void Task_StartMenu_Init(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        s16 *data = gTasks[taskId].data;
        enum StartMenuModes mode = START_MODE_NORMAL;
        CleanupOverworldWindowsAndTilemaps();
        if (tStartMode)
            mode = tStartMode;

        StartMenu_Init(mode);
        DestroyTask(taskId);
    }
}

static void Task_StartMenu_HandleInput(u8 taskId)
{
    enum StartMenuModes mode = sStartMenuDataPtr->mode;

    switch (mode)
    {
    default:
    case START_MODE_NORMAL:
        AppGrid_HandleNormalInputs(taskId);
        break;
    case START_MODE_SAVE_NORMAL:
    case START_MODE_SAVE_SCRIPT:
        AppGrid_HandleSaveInputs(taskId);
        break;
    case START_MODE_SAVE_FORCE:
        gTasks[taskId].func = Task_SaveMode_Init;
        break;
    case START_MODE_MOVE:
        AppGrid_HandleMoveInputs(taskId);
        break;
    }

    if (mode != sStartMenuDataPtr->mode)
    {
        StartPrint_AppNameText();
        StartPrint_QuestFlavorText();
        StartPrint_HelpBottomText();
        return;
    }

    AppGrid_HandleCursorVisibility(mode);

    // normal and move modes
    if (mode < START_MODE_SAVE_NORMAL)
        AppGrid_HandleDirectionalInputs();
}

static void Task_StartMenu_WaitForFade(u8 taskId)
{
    // faster fade
    UpdatePaletteFade();
    UpdatePaletteFade();
    UpdatePaletteFade();

    if (!gPaletteFade.active)
    {
        struct Task *task = &gTasks[taskId];

        task->func = Task_StartMenu_SlideIn;
        task->tSlideY = -DISPLAY_HEIGHT;
    }
}

static bool8 StartSetup_IsInSaveMode(void)
{
    switch (sStartMenuDataPtr->mode)
    {
        default:
            return FALSE;
        case START_MODE_SAVE_NORMAL:
        case START_MODE_SAVE_SCRIPT:
        case START_MODE_SAVE_FORCE:
            return TRUE;
    }
}

static void Task_StartMenu_SlideIn(u8 taskId)
{
    struct Task *task = &gTasks[taskId];

    task->tSlideY += 16;
    SetGpuReg(REG_OFFSET_BG0VOFS, task->tSlideY);
    // cautionbox is long, not tall
    SetGpuReg(REG_OFFSET_BG2VOFS, task->tSlideY);
    SetGpuReg(REG_OFFSET_BG3VOFS, task->tSlideY);

    if (task->tSlideY >= 0)
    {
        for (u32 i = 0; i < NUM_START_MAIN_SPRITES; i++)
        {
            if (StartSetup_IsInSaveMode() && i == START_MAIN_SPRITE_APP_CURSOR)
                continue;

            StartSetup_MakeSpritesVisible(i);
        }

        task->tSlideY = 0;
        task->func = Task_StartMenu_HandleInput;
    }
}

static void Task_StartMenu_SlideOut(u8 taskId)
{
    struct Task *task = &gTasks[taskId];
    if (task->tSlideY == 0)
    {
        PlaySE(SE_PC_OFF);
        for (u32 i = 0; i < NUM_START_MAIN_SPRITES; i++)
        {
            StartSetup_MakeSpritesInvisible(i);
        }
    }

    task->tSlideY -= 16;
    SetGpuReg(REG_OFFSET_BG0VOFS, task->tSlideY);
    // cautionbox is long, not tall
    SetGpuReg(REG_OFFSET_BG2VOFS, task->tSlideY);
    SetGpuReg(REG_OFFSET_BG3VOFS, task->tSlideY);

    if (task->tSlideY == (-DISPLAY_HEIGHT))
    {
        task->tSlideY = 0;
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        task->func = Task_StartMenu_Exit;
    }
}

static void Task_StartMenu_Exit(u8 taskId)
{
    // faster fade
    UpdatePaletteFade();
    UpdatePaletteFade();
    UpdatePaletteFade();

    if (!gPaletteFade.active)
    {
        SetMainCallback2(sStartMenuDataPtr->savedCB);
        StartMenu_Free();
        DestroyTask(taskId);
    }
}


// callbacks
void CB2_StartMenu_ReturnToUI(void)
{
    FieldClearVBlankHBlankCallbacks();
    FreeAllWindowBuffers();
    StartMenu_Init(START_MODE_NORMAL);
}

static void CB2_StartMenu_Setup(void)
{
    enum StartMenuSetupSteps steps = gMain.state;

    switch (steps)
    {
    case START_SETUP_RESET:
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
        ResetSpriteData();
        ResetTasks();
        break;
    case START_SETUP_BG:
        StartSetup_Bgs();
        break;
    case START_SETUP_GFX:
        StartSetup_Graphics();
        break;
    case START_SETUP_SPRITE:
        StartSetup_MainSprites();
        break;
    case START_SETUP_WIN:
        StartSetup_MainWindows();
        break;
    case START_SETUP_TEXT:
        StartSetup_Text();
        break;
    case START_SETUP_FADE:
        BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        break;
    case START_SETUP_FINISH:
        CreateTask(Task_StartMenu_WaitForFade, 0);
        SetGpuReg(REG_OFFSET_BG0VOFS, -DISPLAY_HEIGHT);
        SetGpuReg(REG_OFFSET_BG2VOFS, -DISPLAY_HEIGHT);
        SetGpuReg(REG_OFFSET_BG3VOFS, -DISPLAY_HEIGHT);
        SetVBlankCallback(VBlankCB_StartMenu_Idle);
        SetMainCallback2(CB2_StartMenu_Idle);
        return;
    default: // failsafe
        break;
    }

    gMain.state++;
}

static void CB2_StartMenu_Idle(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void VBlankCB_StartMenu_Idle(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void StartSetup_Bgs(void)
{
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sStartMenu_BackgroundTemplates, NELEMS(sStartMenu_BackgroundTemplates));
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);

    SetBgTilemapBuffer(START_BG_CAUTIONBOX, sStartMenuDataPtr->tilemapBuf);
    for (enum StartMenuBackgrounds bg = 0; bg < NUM_START_BACKGROUNDS; bg++)
    {
        ScheduleBgCopyTilemapToVram(bg);
        ShowBg(bg);
    }

    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_BLEND | BLDCNT_TGT1_BG2 | BLDCNT_TGT2_BG3);
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(0, 9));
    EnableInterrupts(INTR_FLAG_VBLANK);
}

static void StartSetup_Graphics(void)
{
    ResetTempTileDataBuffers();

    for (enum StartMenuBackgrounds bg = 0; bg < NUM_START_BACKGROUNDS; bg++)
    {
        if (sStartMenu_BackgroundGraphics[bg].tiles)
            DecompressAndLoadBgGfxUsingHeap(bg, sStartMenu_BackgroundGraphics[bg].tiles, 0, 0, 0);

        if (sStartMenu_BackgroundGraphics[bg].palette.data)
            LoadPalette(sStartMenu_BackgroundGraphics[bg].palette.data, BG_PLTT_ID(sStartMenu_BackgroundGraphics[bg].palette.slot), PLTT_SIZE_4BPP);

        if (sStartMenu_BackgroundGraphics[bg].tilemap)
        {
            if (bg == START_BG_CAUTIONBOX)
                continue;

            LoadBgTilemap(bg, sStartMenu_BackgroundGraphics[bg].tilemap, BG_SCREEN_SIZE, 0);
        }
    }

    // misc gfx that needs to be loaded manually
    LoadPalette(sStartMenu_WallpaperPalettes[gSaveBlock2Ptr->optionsVisual[VISUAL_OPTIONS_COLOR]],
                BG_PLTT_ID(0), PLTT_SIZE_4BPP);
    SetBackdropFromColor(RGB_BLACK);

    // sprites
    LoadSpriteSheets(sStartMenu_SpriteGraphics.sheets);
    LoadSpritePalette(&sStartMenu_SpriteGraphics.palette);
}

static void StartSetup_MainSprites(void)
{
    StartMainSprite_App();
    StartMainSprite_PartyMon();
    StartMainSprite_DaycareMon();

    u32 j = 0;
    for (u32 i = 0; i < NUM_START_MAIN_SPRITES; i++, j++)
    {
         u8 *spriteIds = sStartMenuDataPtr->spriteIds;

         if (!gSprites[spriteIds[i]].invisible)
         {
              gSprites[spriteIds[i]].invisible = TRUE;
              gSprites[spriteIds[i]].data[7] = TRUE;
         }
    }
}

static void StartSetup_MainWindows(void)
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
        template = sStartMenu_MainWindowTemplates[window];
        template.bg = START_BG_TEXT;
        template.baseBlock = baseBlock;

        AddWindow(&template);
        FillWindowPixelBuffer(window, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
        PutWindowTilemap(window);
        CopyWindowToVram(window, COPYWIN_FULL);

        baseBlock += template.width * template.height;
    }
}

static void StartSetup_Text(void)
{
    StartPrint_HelpTopText();
    StartPrint_HelpBottomText();
    StartPrint_QuestFlavorText();
    StartPrint_AppNameText();
    StartPrint_EggInfo();
}

// main sprites
static void StartMainSprite_App(void)
{
    u8 *spriteIds = sStartMenuDataPtr->spriteIds;
    const struct SpriteTemplate *template = &sAppGrid_CursorSpriteTemplate;
    struct Sprite *sprite = NULL;

    spriteIds[START_MAIN_SPRITE_APP_CURSOR] = CreateSprite(template, START_APP_CURSOR_X, START_APP_CURSOR_Y, 1);
    sprite = &gSprites[spriteIds[START_MAIN_SPRITE_APP_CURSOR]];

    StartSpriteAnim(sprite, START_CURSOR_NORMAL);
    sprite->x2 = AppGrid_GetXIconCoord(AppGrid_GetCurrentColumn());
    sprite->y2 = AppGrid_GetYIconCoord(AppGrid_GetCurrentRow());

    template = &sAppData_SpriteTemplate;
    enum StartMenuMainSprites aIcon = START_MAIN_SPRITE_APP_ICONS, aBg = START_MAIN_SPRITE_APP_BGS;
    for (u32 i = 0; i < TOTAL_START_APPS; i++, aIcon++, aBg++)
    {
        enum StartMenuApps a = AppData_GetAppFromIndex(i);

        spriteIds[aIcon] = CreateSprite(template, START_APP_ICON_X, START_APP_ICON_Y, 2);
        sprite = &gSprites[spriteIds[aIcon]];
        StartSpriteAnim(sprite, a);
        sprite->x2 = AppGrid_GetXIconCoord(i & (NUM_START_APP_GRID_ROWS - 1));
        sprite->y2 = AppGrid_GetYIconCoord((i & NUM_START_APP_GRID_ROWS) >> 3);
        if (!a)
            sprite->invisible = TRUE;

        spriteIds[aBg] = CreateSprite(template, START_APP_ICON_X, START_APP_ICON_Y, 3);
        sprite = &gSprites[spriteIds[aBg]];
        if (!a)
            StartSpriteAnim(sprite, START_APP_NONE);
        else
            StartSpriteAnim(sprite, START_APP_BACKGROUNDS);

        sprite->x2 = AppGrid_GetXIconCoord(i & (NUM_START_APP_GRID_ROWS - 1));
        sprite->y2 = AppGrid_GetYIconCoord((i & NUM_START_APP_GRID_ROWS) >> 3);
        sprite->oam.objMode = ST_OAM_OBJ_BLEND;
        if (!a)
            sprite->invisible = TRUE;
    }
}

static void StartMainSprite_PartyMon(void)
{
    u8 *spriteIds = sStartMenuDataPtr->spriteIds;
    struct Pokemon *mon = gPlayerParty;
    struct Sprite *sprite = NULL;
    u32 species, healthPercentage, status;
    bool32 isEgg;

    if (!gPlayerPartyCount)
        return;

    for (u32 i = 0; i < PARTY_SIZE; i++)
    {
        if (spriteIds[START_MAIN_SPRITE_MON_PLATFORMS + i] == SPRITE_NONE)
        {
            // platform is always shown
            spriteIds[START_MAIN_SPRITE_MON_PLATFORMS + i] =
                CreateSprite(&sMonStatus_PlatformSpriteTemplate, START_PARTY_MON_X, START_MON_PLATFORM_Y, 2);

           sprite = &gSprites[spriteIds[START_MAIN_SPRITE_MON_PLATFORMS + i]];
           sprite->x2 = MonStatus_GetXIconCoord(i);
           sprite->y2 = MonStatus_GetYIconCoord(i);
        }

        species = GetMonData(&mon[i], MON_DATA_SPECIES_OR_EGG);
        if (spriteIds[START_MAIN_SPRITE_MON_ICONS + i] == SPRITE_NONE && (species && species <= NUM_SPECIES))
        {
            healthPercentage = MonStatus_GetHealthPercentage(&mon[i]);
            isEgg = (species == SPECIES_EGG);
            species = ReturnTransformationIfConditionMet(&mon[i]);
            status = GetMonData(&mon[i], MON_DATA_STATUS);

            LoadMonIconPalette(species);
            spriteIds[START_MAIN_SPRITE_MON_ICONS + i] =
                CreateMonIcon(species, MonStatus_GetSpriteCB(healthPercentage, isEgg),
                              START_PARTY_MON_X, START_PARTY_MON_Y, 0, GetMonData(&mon[i], MON_DATA_PERSONALITY));

            sprite = &gSprites[spriteIds[START_MAIN_SPRITE_MON_ICONS + i]];
            sprite->subpriority = 3;
            sprite->oam.priority = 0;
            sprite->x2 = MonStatus_GetXIconCoord(i);
            sprite->y2 = MonStatus_GetYIconCoord(i);

            if (spriteIds[START_MAIN_SPRITE_MON_STATUS + i] == SPRITE_NONE)
            {
                spriteIds[START_MAIN_SPRITE_MON_STATUS + i] =
                    CreateSprite(&sMonStatus_SpriteTemplate, (((status & STATUS1_ANY) || !healthPercentage) ? 4 : 0) + 16,
                                 START_MON_STATUS_Y, 0);

                sprite = &gSprites[spriteIds[START_MAIN_SPRITE_MON_STATUS + i]];
                MonStatus_InjectStatusGraphics(sprite, status, healthPercentage);
                sprite->x2 = MonStatus_GetXIconCoord(i);
                sprite->y2 = MonStatus_GetYIconCoord(i);
            }
        }
    }
}

static void StartMainSprite_DaycareMon(void)
{
    u8 *spriteIds = sStartMenuDataPtr->spriteIds;
    struct DayCare *daycare = &gSaveBlock1Ptr->daycare;
    struct BoxPokemon *mon = NULL;
    struct Sprite *sprite = NULL;
    u32 i, species, item, numEggs, numMons = CountPokemonInDaycare(daycare);

    for (i = 0, numEggs = 0; i < SILICON_DAYCARE_EGG_MAX; i++)
    {
        if (GetBoxMonData(&daycare->daycareEgg[i].egg, MON_DATA_IS_EGG))
            numEggs++;
    }

    // no eggs here!!
    for (i = 0; i < DAYCARE_MON_COUNT; i++)
    {
        if (spriteIds[START_MAIN_SPRITE_MON_PLATFORMS + PARTY_SIZE + i] == SPRITE_NONE)
        {
            spriteIds[START_MAIN_SPRITE_MON_PLATFORMS + PARTY_SIZE + i] =
                CreateSprite(&sMonStatus_PlatformSpriteTemplate, START_DAYCARE_MON_X, START_DAYCARE_MON_PLATFORM_X, 3);

            sprite = &gSprites[spriteIds[START_MAIN_SPRITE_MON_PLATFORMS + PARTY_SIZE + i]];
            StartSpriteAnim(sprite, TRUE);
            sprite->x2 = MonStatus_GetXDaycareIconCoord(i);
            // second mon has v and h flipped platform
            if (i)
            {
                sprite->hFlip = TRUE;
                sprite->vFlip = TRUE;
            }
        }

        mon = &daycare->mons[i].mon;
        species = GetBoxMonData(mon, MON_DATA_SPECIES);
        if ((species && species <= NUM_SPECIES) && spriteIds[START_MAIN_SPRITE_MON_ICONS + PARTY_SIZE + i] == SPRITE_NONE
            && numMons)
        {
            LoadMonIconPalette(species);
            spriteIds[START_MAIN_SPRITE_MON_ICONS + PARTY_SIZE + i] =
            CreateMonIcon(species, SpriteCB_MonIcon, START_DAYCARE_MON_X, START_PARTY_MON_Y, i * 2,
                          GetBoxMonData(mon, MON_DATA_PERSONALITY));

            sprite = &gSprites[spriteIds[START_MAIN_SPRITE_MON_ICONS + PARTY_SIZE + i]];
            sprite->subpriority = 0;
            sprite->oam.priority = 1;
            sprite->x2 = MonStatus_GetXDaycareIconCoord(i);
            sprite->y2 = MonStatus_GetYIconCoord(i);
            // first mon flips if there's two mons
            if (!i && numMons > 1)
                sprite->hFlip = TRUE;

            item = GetBoxMonData(mon, MON_DATA_HELD_ITEM);
            if ((item && item < ITEMS_COUNT) && spriteIds[START_MAIN_SPRITE_DAYCARE_ITEMS + i] == SPRITE_NONE)
            {
                spriteIds[START_MAIN_SPRITE_DAYCARE_ITEMS + i] =
                    AddCustomItemIconSprite(&sMonStatus_DaycareItemSpriteTemplate, START_TAG_ITEM + i, START_TAG_ITEM + i, item);

                sprite = &gSprites[spriteIds[START_MAIN_SPRITE_DAYCARE_ITEMS + i]];
                sprite->x = (START_DAYCARE_MON_X - 8);
                sprite->y = 118 + 16;
                sprite->x2 = i * 52;
                sprite->y2 = MonStatus_GetYIconCoord(i);
            }
        }
    }

    // eggs indicator
    if (numEggs)
    {
        species = SPECIES_EGG;

        if (spriteIds[START_MAIN_SPRITE_EGG] != SPRITE_NONE)
            return;

        LoadMonIconPalette(species);
        spriteIds[START_MAIN_SPRITE_EGG] =
            CreateMonIconNoPersonality(species, SpriteCB_MonIcon, 191 + 16, 109 + 16, 1);
        sprite = &gSprites[spriteIds[START_MAIN_SPRITE_EGG]];
        sprite->oam.priority = 1;
    }
}

// text
static inline void StartPrint_Text(enum StartMenuMainWindows window, u32 font, u32 desiredWidth, u32 x, u32 y, u8 const *str)
{
    const u8 txtClr[] = {0, 1, 0}; // white

    font = GetFontIdToFit(str, font, 0, TILE_TO_PIXELS(desiredWidth));
    if (x == X_CENTER_ALIGN)
        x = GetStringCenterAlignXOffset(font, str, TILE_TO_PIXELS(desiredWidth));

    AddTextPrinterParameterized4(window, font, x, y, GetFontAttribute(font, FONTATTR_LETTER_SPACING),
                                 GetFontAttribute(font, FONTATTR_LINE_SPACING), txtClr, TEXT_SKIP_DRAW, str);
}

static void StartPrint_HelpTopText(void)
{
    u32 x = 0;
    u8 *strbuf[2];

    strbuf[0] = AllocZeroed(STRBUF_SIZE);
    strbuf[1] = AllocZeroed(STRBUF_SIZE);

    FillWindowPixelBuffer(START_MAIN_WIN_HELP_TOP, PIXEL_FILL(0));

    // TIME OF DAY ICON
    BlitSymbol_Help(BlitSymbol_ConvertLocalTimeToHelp(), START_MAIN_WIN_HELP_TOP, x, 0);

    // SPACING
    StringCopy(strbuf[0], COMPOUND_STRING(" "));

    // TIME OF DAY, 
    enum TimeOfDay time = GetTimeOfDay();
    StringAppend(strbuf[0], sStartMenuStrings_TimeOfDay[time]);
    StringAppend(strbuf[0], COMPOUND_STRING(", "));

    // HOUR:MINUTES MERIDIEM
    struct SiiRtcInfo *rtc = FakeRtc_GetCurrentTime();
    FormatDecimalTimeWithoutSeconds(strbuf[1], rtc->hour, rtc->minute, FALSE);
    StringAppend(strbuf[0], strbuf[1]);

    x += TILE_TO_PIXELS(2);
    StartPrint_Text(START_MAIN_WIN_HELP_TOP, FONT_SMALL, TIME_WINDOW_WIDTH, x, Y_CENTER_ALIGN, strbuf[0]);

    // MAP NAME
    GetMapNameGeneric(strbuf[0], gMapHeader.regionMapSectionId);

    x = GetStringRightAlignXOffset(FONT_SMALL, strbuf[0], TILE_TO_PIXELS(START_MAIN_WIN_HELP_WIDTH)) - 19;
    StartPrint_Text(START_MAIN_WIN_HELP_TOP, FONT_SMALL, 10, x, Y_CENTER_ALIGN, strbuf[0]);

    // MAP ICON
    x -= 16;
    BlitSymbol_Help(START_HELP_SYMBOL_MAP, START_MAIN_WIN_HELP_TOP, x, 0);

    // SIGNAL STRENGTH
    x = TILE_TO_PIXELS(START_MAIN_WIN_HELP_WIDTH) - 24;
    BlitSymbol_Help(BlitSymbol_ConvertSignalToHelp(), START_MAIN_WIN_HELP_TOP, x, 0);

    CopyWindowToVram(START_MAIN_WIN_HELP_TOP, COPYWIN_FULL);
    Free(strbuf[0]);
    Free(strbuf[1]);
}

static void StartPrint_HelpBottomText(void)
{
    FillWindowPixelBuffer(START_MAIN_WIN_HELP_BOTTOM, PIXEL_FILL(0));

    // CONTROLS
    const u8 *str = sStartMenuStrings_ControlByModes[sStartMenuDataPtr->mode];

    // SAVE RESULTS
    if (sStartMenuDataPtr->saveRes)
    {
        str = sStartMenuStrings_ControlBySaveResults[sStartMenuDataPtr->saveRes];
        if (!str)
            str = sStartMenuStrings_ControlBySaveResults[START_SAVE_IN_PROGRESS];

        if (sStartMenuDataPtr->saveRes >= START_SAVE_SUCCESS)
        {
            if (sStartMenuDataPtr->mode >= START_MODE_SAVE_SCRIPT)
                str = sStartMenuStrings_SaveResControlReturnOverworld;
            else
                str = sStartMenuStrings_SaveResControlReturnMenu;
        }
    }

    if (sStartMenuDataPtr->customStr)
    {
        str = sStartMenuDataPtr->customStr;
        sStartMenuDataPtr->customStr = NULL;
    }

    StartPrint_Text(START_MAIN_WIN_HELP_BOTTOM, FONT_SMALL, START_MAIN_WIN_HELP_WIDTH, 0, Y_CENTER_ALIGN, str);

    CopyWindowToVram(START_MAIN_WIN_HELP_BOTTOM, COPYWIN_FULL);
}

static void StartPrint_QuestFlavorText(void)
{
    FillWindowPixelBuffer(START_MAIN_WIN_TEXTBOX, PIXEL_FILL(0));

    bool32 isStoryNotClear = !FlagGet(FLAG_SYS_GAME_CLEAR);
    u32 questId = StartPrint_GetFirstActiveQuest();
    u32 inactiveQuests = CountInactiveQuests();

    if (isStoryNotClear)
    {
        StringCopy(gStringVar1, GetQuestDesc_PlayersAdventure());
    }
    else if (questId != QUEST_NONE)
    {
        QuestMenu_UpdateQuestDesc(questId);
    }
    else if (inactiveQuests)
    {
        ConvertIntToDecimalStringN(gStringVar2, inactiveQuests, STR_CONV_MODE_LEFT_ALIGN, 3);
        StringExpandPlaceholders(gStringVar1, COMPOUND_STRING("The Resido region has {STR_VAR_2} more\ntask(s) for you!"));
    }
    else
    {
        StringCopy(gStringVar1, COMPOUND_STRING("You’ve completed everything. Enjoy Pokémon Silicon!"));
    }

    // prioritize system messages
    enum StartMenuModes mode = sStartMenuDataPtr->mode;

    if (sStartMenuDataPtr->customStr)
    {
        StringCopy(gStringVar1, sStartMenuDataPtr->customStr);
        sStartMenuDataPtr->customStr = NULL;
    }
    if (sStartMenuDataPtr->saveRes != START_SAVE_INACTIVE)
    {
        StringCopy(gStringVar1, sStartMenuStrings_SaveResult[sStartMenuDataPtr->saveRes]);
    }
    else if (mode != START_MODE_NORMAL)
    {
        StringCopy(gStringVar1, sStartMenuStrings_QuestFlavors[mode]);
    }

    StartPrint_Text(START_MAIN_WIN_TEXTBOX, FONT_SMALL_NARROW, START_MAIN_WIN_TEXTBOX_WIDTH, 0, 0, gStringVar1);

    CopyWindowToVram(START_MAIN_WIN_TEXTBOX, COPYWIN_FULL);
}

static void StartPrint_AppNameText(void)
{
    FillWindowPixelBuffer(START_MAIN_WIN_APP_TITLE, PIXEL_FILL(0));

    enum StartMenuApps app = AppData_GetAppFromIndex(AppGrid_GetCurrentIndex());

    const u8 *str = NULL;
    if (sStartMenuDataPtr->mode == START_MODE_MOVE)
    {
        BlitSymbol_Help(START_HELP_SYMBOL_SWAP, START_MAIN_WIN_APP_TITLE, (TILE_TO_PIXELS(START_MAIN_WIN_APP_TITLE_WIDTH) / 2) - 8, 0);

        u32 movingApp = AppData_GetAppFromIndex(sStartMenuDataPtr->movingAppIdx);

        str = AppData_GetStruct(movingApp)->name;
        u32 x = GetStringCenterAlignXOffset(FONT_SMALL, str, SWAP_APP_WIDTH) + 2;
        StartPrint_Text(START_MAIN_WIN_APP_TITLE, FONT_SMALL, PIXELS_TO_TILES(SWAP_APP_WIDTH), x, 0, str);

        if (app == movingApp)
            str = AppData_GetStruct(START_APP_NONE)->name;
        else
            str = AppData_GetStruct(app)->name;

        x = GetStringCenterAlignXOffset(FONT_SMALL, str, SWAP_APP_WIDTH) + SWAP_APP_WIDTH + 16;
        StartPrint_Text(START_MAIN_WIN_APP_TITLE, FONT_SMALL, PIXELS_TO_TILES(SWAP_APP_WIDTH), x, 0, str);
    }
    else
    {
        if (app)
            str = AppData_GetStruct(app)->name;
        else
            str = gText_Blank; // blank as the app table has 'Free Space'

        if (StartSetup_IsInSaveMode())
            str = gText_Blank;

        StartPrint_Text(START_MAIN_WIN_APP_TITLE, FONT_SMALL, START_MAIN_WIN_APP_TITLE_WIDTH, X_CENTER_ALIGN, 0, str);
    }

    CopyWindowToVram(START_MAIN_WIN_APP_TITLE, COPYWIN_FULL);
}

static void StartPrint_EggInfo(void)
{
    FillWindowPixelBuffer(START_MAIN_WIN_EGG_INFO, PIXEL_FILL(0));

    struct DayCare *daycare = &gSaveBlock1Ptr->daycare;
    u32 numMons = CountPokemonInDaycare(daycare);

    if (numMons)
    {
        u32 i, numEggs;

        for (i = 0, numEggs = 0; i < SILICON_DAYCARE_EGG_MAX; i++)
        {
            if (GetBoxMonData(&daycare->daycareEgg[i].egg, MON_DATA_IS_EGG))
                numEggs++;
        }

        for (i = 0; i < numMons; i++)
        {
            struct BoxPokemon *mon = &daycare->mons[i].mon;
            u32 gender = GetBoxMonGender(mon);

            switch(gender)
            {
            case MON_FEMALE:
                gender = FEMALE;
                break;
            case MON_MALE:
                gender = MALE;
                break;
            }

            if (gender != MON_GENDERLESS)
                BlitSymbol_EggInfo(START_EGG_INFO_SYMBOL_M + gender, i * 24, (i * 4) + 4);
        }

        if (numEggs)
        {
            u32 x, digit;

            digit = numEggs / 10;

            if (digit < 1) // < 10
                x = 12;
            else
                x = 9;

            BlitSymbol_EggInfo(START_EGG_INFO_SYMBOL_x, x, 4);
            if (digit < 1)
            {
                BlitSymbol_EggInfo(START_EGG_INFO_SYMBOL_0 + numEggs, x + 4, 4);
            }
            else
            {
                // NOTE if SILICON_DAYCARE_EGG_MAX is increased, this needs to be edited
                BlitSymbol_EggInfo(START_EGG_INFO_SYMBOL_1, x + 4, 4);
                BlitSymbol_EggInfo(START_EGG_INFO_SYMBOL_0, x + 8, 4);
            }
        }
    }

    CopyWindowToVram(START_MAIN_WIN_EGG_INFO, COPYWIN_FULL);
}

static void StartPrint_SaveOverwriteText(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    // clear (w/ black)
    FillWindowPixelBuffer(tWindowId, PIXEL_FILL(2));

    // textbox
    StringCopy(gStringVar1, sStartMenuStrings_SaveResult[sStartMenuDataPtr->saveRes]);
    StartPrint_Text(tWindowId, FONT_SMALL_NARROW, START_WIN_SAVE_OVERWRITE_WIDTH, X_CENTER_ALIGN, 0, gStringVar1);

    // player data
    if (sStartMenuDataPtr->saveRes == START_SAVE_OVERWRITE)
    {
        struct StartMenuPreviousSave *prevSave = &sStartMenuPreviousSave;
        StringCopy(gStringVar2, prevSave->playerName);
        GetMapNameGeneric(gStringVar3,
            Overworld_GetMapHeaderByGroupAndId(prevSave->location.mapGroup, prevSave->location.mapNum)->regionMapSectionId);
        u8 *ptr = StringExpandPlaceholders(gStringVar1, COMPOUND_STRING("{STR_VAR_2} in {STR_VAR_3} at "));

        ptr = ConvertIntToDecimalStringN(ptr, prevSave->playTimeHours, STR_CONV_MODE_LEFT_ALIGN, 3);
        ptr = StringAppend(ptr, COMPOUND_STRING("{FONT_SMALL}:{FONT_SMALL_NARROW}"));
        ConvertIntToDecimalStringN(ptr, prevSave->playTimeMinutes, STR_CONV_MODE_LEFT_ALIGN, 2);

        u32 x = GetStringCenterAlignXOffset(FONT_SMALL_NARROW, gStringVar1, TILE_TO_PIXELS(START_WIN_SAVE_OVERWRITE_WIDTH)) - 8;
        StartPrint_Text(tWindowId, FONT_SMALL_NARROW, START_WIN_SAVE_OVERWRITE_WIDTH, x, TILE_TO_PIXELS(6), gStringVar1);

        x += StartPrint_ConvertStringLengthToPixels(gStringVar1, FONT_SMALL_NARROW) - 24;
        BlitSymbol_Help(BlitSymbol_ConvertTimeToHelp(BlitSymbol_GetTimeOfDayFromPlaytime()), tWindowId, x, TILE_TO_PIXELS(6));
    }

    CopyWindowToVram(tWindowId, COPYWIN_FULL);
}

static u32 StartPrint_GetFirstActiveQuest(void)
{
    u32 i, questId = QUEST_COUNT;

    for (i = questId - 1; i-- > 0;)
    {
        if (QuestMenu_GetSetQuestState(i, FLAG_GET_ACTIVE))
            questId = i;
    }

    for (i = 0; i < QUEST_COUNT; i++)
    {
        if (QuestMenu_GetSetQuestState(i, FLAG_GET_FAVORITE) && QuestMenu_GetSetQuestState(i, FLAG_GET_ACTIVE))
            questId = i;
    }

    return questId;
}

static u32 StartPrint_ConvertStringLengthToPixels(u8 *str, u32 fontId)
{
    u32 totalPixels = 0, i = 0;

    StringExpandPlaceholders(gStringVar4, str);
    str = gStringVar4;

    while (*str != EOS)
    {
        totalPixels += GetGlyphWidth(*str, FALSE, fontId);
        str++, i++;
    }

    return totalPixels;
}


// app data
static void AppData_Populate(void)
{
    AppData_SanitizeApps();
    AppData_InsertNewApps();
    AppData_SanitizeApps();
}

void StartMenu_ResetAppData(void)
{
    memset(gSaveBlock3Ptr->startMenuAppIndex, START_APP_NONE, TOTAL_START_APPS * sizeof(u8));
}

static void AppData_InsertNewApps(void)
{
    for (enum StartMenuApps app = START_APP_PARTY; app < NUM_START_APPS; app++)
    {
        if (app == START_APP_TRAINER_CARD) //  PSF TODO Trainer Card disabled
            continue;

        if (AppData_GetUnlockFlag(app) && AppData_GetIndexFromApp(app) == NUM_START_APPS)
        {
            u32 freeSlot = AppData_GetFirstEmptyIndex();
            if (freeSlot >= NUM_START_APPS)
                break;

            gSaveBlock3Ptr->startMenuAppIndex[freeSlot] = app;
        }
    }
}

static u32 AppData_GetIndexFromApp(enum StartMenuApps app)
{
    for (u32 idx = 0; idx < TOTAL_START_APPS; idx++)
    {
        if (gSaveBlock3Ptr->startMenuAppIndex[idx] == app)
            return idx;
    }

    return NUM_START_APPS;
}

static u32 AppData_GetFirstEmptyIndex(void)
{
    for (u32 idx = 0; idx < NUM_START_APPS; idx++)
    {
        enum StartMenuApps app = gSaveBlock3Ptr->startMenuAppIndex[idx];
        if (!app)
            return idx;
    }

    return NUM_START_APPS;
}

static bool32 AppData_GetUnlockFlag(enum StartMenuApps app)
{
    if (!app || app >= NUM_START_APPS)
        return FALSE;

    const struct StartMenuAppData *data = AppData_GetStruct(app);

    // apps that is always there e.g. save
    if (!data->unlockFlag)
        return TRUE;

    return FlagGet(data->unlockFlag);
}

static enum StartMenuApps AppData_GetAppFromIndex(u8 idx)
{
    u32 app = gSaveBlock3Ptr->startMenuAppIndex[idx];

    return (app == START_APP_TRAINER_CARD) ? START_APP_NONE : app; //  PSF TODO Trainer Card disabled
}

static const struct StartMenuAppData *AppData_GetStruct(enum StartMenuApps app)
{
    if (app >= NUM_START_APPS)
        app = START_APP_NONE;

    return &sStartMenu_AppData[app];
}

// check for invalid app data
static void AppData_SanitizeApps(void)
{
    for (u32 i = 0; i < TOTAL_START_APPS; i++)
    {
        if (gSaveBlock3Ptr->startMenuAppIndex[i] >= TOTAL_START_APPS)
            gSaveBlock3Ptr->startMenuAppIndex[i] = START_APP_NONE;
    }
}


// app grid
static void AppGrid_HandleNormalInputs(u8 taskId)
{
    if (JOY_NEW(A_BUTTON))
    {
        enum StartMenuApps app = AppData_GetAppFromIndex(AppGrid_GetCurrentIndex());
        const struct StartMenuAppData *data = AppData_GetStruct(app);

        if (!app || (app != START_APP_SAVE && !data->openCB))
        {
            PlaySE(SE_BOO);
            return;
        }

        if (data->reqSignal && CellularSignal_GetCurrentStrength() < data->reqSignal)
        {
            CellularSignal_StrengthError(taskId);
            return;
        }

        PlaySE(SE_SELECT);
        if (app == START_APP_SAVE)
        {
            sStartMenuDataPtr->prevMode = sStartMenuDataPtr->mode;
            sStartMenuDataPtr->mode = START_MODE_SAVE_NORMAL;
        }
        else
        {
            sStartMenuDataPtr->savedCB = data->openCB;
            gTasks[taskId].func = Task_StartMenu_SlideOut;
            gTasks[taskId].tSlideY = 0;
        }
        return;
    }

    if (JOY_NEW(START_BUTTON))
    {
        sStartMenuDataPtr->prevMode = sStartMenuDataPtr->mode;
        sStartMenuDataPtr->mode = START_MODE_SAVE_NORMAL;
        return;
    }

    if (JOY_NEW(SELECT_BUTTON))
    {
        if (!AppData_GetAppFromIndex(AppGrid_GetCurrentIndex())) // START_APP_NONE
        {
            PlaySE(SE_BOO);
            return;
        }

        PlaySE(SE_SELECT);
        StartMoveMode_Init();
        return;
    }

    if (JOY_NEW(B_BUTTON))
    {
        gTasks[taskId].func = Task_StartMenu_SlideOut;
        gTasks[taskId].tSlideY = 0;
        return;
    }
}

static void AppGrid_HandleSaveInputs(u8 taskId)
{
    if (JOY_NEW(START_BUTTON | A_BUTTON))
    {
        if (gDifferentSaveFile && gSaveFileStatus == SAVE_STATUS_OK)
        {
            SaveOverwrite_Init(taskId);
        }
        else
        {
            gTasks[taskId].func = Task_SaveMode_Init;
        }

        return;
    }

    if (JOY_NEW(B_BUTTON))
    {
        if (sStartMenuDataPtr->mode >= START_MODE_SAVE_SCRIPT)
        {
            gTasks[taskId].func = Task_StartMenu_SlideOut;
            gTasks[taskId].tSlideY = 0;
        }
        else
        {
            sStartMenuDataPtr->prevMode = sStartMenuDataPtr->mode;
            sStartMenuDataPtr->mode = START_MODE_NORMAL;
        }

        return;
    }
}

static void AppGrid_HandleMoveInputs(u8 taskId)
{
    if (JOY_NEW(A_BUTTON | SELECT_BUTTON))
    {
        if (StartMoveMode_SwapApps())
            PlaySE(SE_SUCCESS);
        else
            PlaySE(SE_SELECT);

        StartMoveMode_Exit();
        return;
    }

    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        StartMoveMode_Exit();
        return;
    }
}

static inline void AppGrid_HandleDirectionalInputs(void)
{
    if (JOY_NEW(DPAD_UP) || JOY_REPEAT(DPAD_UP))
        AppGrid_UpdateCurrentRow(FALSE);

    if (JOY_NEW(DPAD_DOWN) || JOY_REPEAT(DPAD_DOWN))
        AppGrid_UpdateCurrentRow(TRUE);

    if (JOY_NEW(DPAD_LEFT | L_BUTTON) || JOY_REPEAT(DPAD_LEFT | L_BUTTON))
        AppGrid_UpdateCurrentColumn(FALSE);

    if (JOY_NEW(DPAD_RIGHT | R_BUTTON) || JOY_REPEAT(DPAD_RIGHT | R_BUTTON))
        AppGrid_UpdateCurrentColumn(TRUE);
}

static u32 AppGrid_GetCurrentRow(void)
{
    return sStartMenuDataPtr->cursor.y;
}

static u32 AppGrid_GetCurrentColumn(void)
{
    return sStartMenuDataPtr->cursor.x;
}

static u32 AppGrid_GetCurrentIndex(void)
{
    return AppGrid_GetCurrentColumn() + (AppGrid_GetCurrentRow() ? NUM_START_APP_GRID_ROWS : 0);
}

static u32 AppGrid_GetNumberOfRows(void)
{
    return NUM_START_APP_GRID_COLUMNS - 1;
}

static u32 AppGrid_GetRowWidth(u32 currentRow)
{
    return NUM_START_APP_GRID_ROWS - 1;
}

static void AppGrid_SetXCursor(u32 x)
{
    sStartMenuDataPtr->cursor.x = x;
}

static void AppGrid_SetYCursor(u32 y)
{
    sStartMenuDataPtr->cursor.y = y;
}

// DPAD_RIGHT and DPAD_DOWN uses additive delta
bool32 AppGrid_IsDeltaAdditive(s32 delta)
{
    return (delta == 1);
}

static void AppGrid_SanitizeXCursor(s32 delta)
{
    u32 column = AppGrid_GetCurrentColumn();
    u32 row = AppGrid_GetCurrentRow();
    u32 rowSize = AppGrid_GetRowWidth(row);
    bool32 cursorMovingRight = AppGrid_IsDeltaAdditive(delta);
    bool32 isLastColumn = (column == rowSize);

    if (cursorMovingRight && isLastColumn)
        AppGrid_SetXCursor(0);
    else if (!cursorMovingRight && !column)
        AppGrid_SetXCursor(rowSize);
    else
        AppGrid_SetXCursor(delta + column);
}

static void AppGrid_SanitizeYCursor(s32 delta)
{
    u32 row = sStartMenuDataPtr->cursor.y;
    u32 rowSize = AppGrid_GetNumberOfRows();
    bool32 cursorMovingDown = AppGrid_IsDeltaAdditive(delta);
    bool32 isLastColumn = (row == rowSize);

    if (cursorMovingDown && isLastColumn)
        AppGrid_SetYCursor(0);
    else if (!cursorMovingDown && !row)
        AppGrid_SetYCursor(rowSize);
    else
        AppGrid_SetYCursor(row + delta);
}

static void AppGrid_UpdateCurrentColumn(bool32 movingRight)
{
    s32 delta = movingRight ? 1 : -1;

    AppGrid_SanitizeXCursor(delta);

    PlaySE(SE_CLICK);
    StartPrint_AppNameText();
}

static void AppGrid_UpdateCurrentRow(bool32 movingDown)
{
    s32 delta = movingDown ? 1 : -1;

    AppGrid_SanitizeYCursor(delta);

    PlaySE(SE_CLICK);
    StartPrint_AppNameText();
}

static inline s32 AppGrid_GetXIconCoord(u32 column)
{
    return 22 * (column);
}

static inline s32 AppGrid_GetYIconCoord(u32 row)
{
    return 19 * (row);
}

static void SpriteCB_AppGrid_Cursor(struct Sprite *s)
{
    s->x2 = AppGrid_GetXIconCoord(AppGrid_GetCurrentColumn());
    s->y2 = AppGrid_GetYIconCoord(AppGrid_GetCurrentRow());
}

// blit system
static inline void BlitSymbol_Help(enum StartMenuHelpSymbols sym, u32 window, u16 x, u16 y)
{
    BlitBitmapRectToWindow(window, sStartMenuSymbols_Help, sym * 16, 0, 160, 16, x, y, 16, 16);
}

static inline void BlitSymbol_EggInfo(enum StartMenuEggInfoSymbols sym, u16 x, u16 y)
{
    BlitBitmapRectToWindow(START_MAIN_WIN_EGG_INFO, sStartMenuSymbols_EggInfo, sym * 8, 0, 104, 8, x, y, 8, 8);
}

static inline enum StartMenuHelpSymbols BlitSymbol_ConvertTimeToHelp(enum TimeOfDay tod)
{
    switch (tod)
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

static inline enum StartMenuHelpSymbols BlitSymbol_ConvertLocalTimeToHelp(void)
{
    return BlitSymbol_ConvertTimeToHelp(GetTimeOfDay());
}

static inline enum StartMenuHelpSymbols BlitSymbol_ConvertSignalToHelp(void)
{
    return START_HELP_SYMBOL_SIG_0A + CellularSignal_GetCurrentStrength();
}

static inline enum TimeOfDay BlitSymbol_GetTimeOfDayFromPlaytime(void)
{
    s32 hours, time;
    struct StartMenuPreviousSave *prevSave = &sStartMenuPreviousSave;
    hours = prevSave->playTimeHours;

    if (IsBetweenHours(hours, MORNING_HOUR_BEGIN, MORNING_HOUR_MIDDLE)) // night->morning
    {
        time = TIME_MORNING;
    }
    else if (IsBetweenHours(hours, MORNING_HOUR_MIDDLE, MORNING_HOUR_END)) // morning->day
    {
        time = TIME_MORNING;
    }
    else if (IsBetweenHours(hours, EVENING_HOUR_BEGIN, EVENING_HOUR_END)) // evening
    {
        time = TIME_EVENING;
    }
    else if (IsBetweenHours(hours, NIGHT_HOUR_BEGIN, NIGHT_HOUR_BEGIN + 1)) // evening->night
    {
        time = TIME_NIGHT;
    }
    else if (IsBetweenHours(hours, NIGHT_HOUR_BEGIN, NIGHT_HOUR_END)) // night
    {
        time = TIME_NIGHT;
    }
    else // day
    {
        time = TIME_DAY;
    }

    return time;
}


// mon status
void MonStatus_InjectStatusGraphics(struct Sprite *sprite, u32 status, u32 healthPercentage)
{
    struct WindowTemplate template = { .width = 4, .height = 2, .paletteNum = START_PAL_SLOT_TEXT };
    u32 tileNum = TILE_OFFSET_4BPP(sprite->oam.tileNum), window = AddWindow(&template);

    if (!healthPercentage)
        status = START_MON_STATUS_FAINTED;

    BlitBitmapRectToWindow(window, sStartMenuSymbols_MonStatus, MonStatus_TranslateRawStatus(status) * 8, 0,
                           56, 8, 1, 0, 8, 8);
    BlitBitmapRectToWindow(window, sStartMenuSymbols_HpBar, 0, MonStatus_ConvertPercentageIntoHpBarFrame(healthPercentage),
                           16, 80, 9, 0, 16, 8);

    u8 *tileData = (u8 *)GetWindowAttribute(window, WINDOW_TILE_DATA);
    CpuCopy32(tileData, (void *)(OBJ_VRAM0 + tileNum), TILE_OFFSET_4BPP(template.width * template.height));

    RemoveWindow(window);
}

static inline enum StartMenuMonStatuses MonStatus_TranslateRawStatus(u32 status)
{
    switch (status)
    {
    case STATUS1_NONE:
        return START_MON_STATUS_NONE;
    case STATUS1_SLEEP:
        return START_MON_STATUS_SLEEP;
    case STATUS1_POISON:
    case STATUS1_TOXIC_POISON:
        return START_MON_STATUS_POISON;
    case STATUS1_BURN:
        return START_MON_STATUS_BURN;
    case STATUS1_FREEZE:
    case STATUS1_FROSTBITE:
        return START_MON_STATUS_FREEZE;
    case STATUS1_PARALYSIS:
        return START_MON_STATUS_PARALYSIS;
    default:
        return START_MON_STATUS_FAINTED;
    }
}

static inline u32 MonStatus_ConvertPercentageIntoHpBarFrame(u32 healthPercentage)
{
    // - 1 is required, otherwise we'll get NUM_START_HP_BAR_PERCENTAGES at full hp
    enum StartMenuHpBarPercentage barHealthPercentage = (healthPercentage / 10) - 1;
    u32 realFrame = barHealthPercentage * 8;

    if (!healthPercentage)
        realFrame = START_HP_BAR_PERCENTAGE_0 * 8;

    if (!barHealthPercentage)
        realFrame = START_HP_BAR_PERCENTAGE_1 * 8;

    return realFrame;
}

static inline void *MonStatus_GetSpriteCB(u32 healthPercentage, bool32 isEgg)
{
    if (((healthPercentage > 20) && isEgg) || !healthPercentage)
        return SpriteCallbackDummy;

    return SpriteCB_MonIcon;
}

static inline u32 MonStatus_GetHealthPercentage(struct Pokemon *mon)
{
    if (!GetMonData(mon, MON_DATA_IS_EGG))
        return ((GetMonData(mon, MON_DATA_HP)) * 100 / (GetMonData(mon, MON_DATA_MAX_HP)));
    else
        return ((GetMonData(mon, MON_DATA_FRIENDSHIP)) * 100 / (gSpeciesInfo[GetMonData(mon, MON_DATA_SPECIES)].eggCycles));
}

static inline s32 MonStatus_GetXIconCoord(u32 idx)
{
    return idx * 28;
}

static inline s32 MonStatus_GetXDaycareIconCoord(u32 idx)
{
    return idx * 32;
}

static inline s32 MonStatus_GetYIconCoord(u32 idx)
{
    return (idx & 1) * 4;
}


// move mode functionalities
static void StartMoveMode_Init(void)
{
    u8 *spriteIds = sStartMenuDataPtr->spriteIds;
    struct Sprite *s = NULL;

    // change cursor mode
    s = &gSprites[spriteIds[START_MAIN_SPRITE_APP_CURSOR]];
    StartSpriteAnim(s, START_CURSOR_MOVE);
    s->y -= 2;

    // make the moved app moves with the cursor
    s = &gSprites[spriteIds[START_MAIN_SPRITE_APP_ICONS + AppGrid_GetCurrentIndex()]];
    s->callback = gSprites[spriteIds[START_MAIN_SPRITE_APP_CURSOR]].callback;
    s->subpriority = 0;
    s->y -= 2;
    s->sMovingApp = TRUE;

    // convert the moved app's bg to be an empty space
    s = &gSprites[spriteIds[START_MAIN_SPRITE_APP_BGS + AppGrid_GetCurrentIndex()]];
    StartSpriteAnim(s, START_APP_NONE);
    s->oam.objMode = ST_OAM_OBJ_BLEND;

    // activate invisible empty spaces, if any
    for (u32 i = 0, idx = START_MAIN_SPRITE_APP_BGS; i < TOTAL_START_APPS; i++, idx++)
    {
        s = &gSprites[sStartMenuDataPtr->spriteIds[idx]];
        if (s->invisible)
            s->invisible = FALSE;
    }

    sStartMenuDataPtr->movingAppIdx = AppGrid_GetCurrentIndex();
    sStartMenuDataPtr->prevMode = sStartMenuDataPtr->mode;
    sStartMenuDataPtr->mode = START_MODE_MOVE;

    StartPrint_AppNameText();
}

static void StartMoveMode_Exit(void)
{
    u8 *spriteIds = sStartMenuDataPtr->spriteIds;
    struct Sprite *s = NULL;

    // change cursor mode
    s = &gSprites[spriteIds[START_MAIN_SPRITE_APP_CURSOR]];
    StartSpriteAnim(s, START_CURSOR_NORMAL);
    s->y += 2;

    // update app sprites and app grid
    enum StartMenuMainSprites aIcon = START_MAIN_SPRITE_APP_ICONS, aBg = START_MAIN_SPRITE_APP_BGS;

    for (u32 i = 0; i < TOTAL_START_APPS; i++, aIcon++, aBg++)
    {
        enum StartMenuApps a = AppData_GetAppFromIndex(i);

        s = &gSprites[spriteIds[aIcon]];
        StartSpriteAnim(s, a);
        s->x2 = AppGrid_GetXIconCoord(i & (NUM_START_APP_GRID_ROWS - 1));
        s->y2 = AppGrid_GetYIconCoord((i & NUM_START_APP_GRID_ROWS) >> 3);
        s->callback = SpriteCallbackDummy;
        s->subpriority = 2;
        if (s->sMovingApp)
        {
            s->y += 2;
            s->sMovingApp = FALSE;
        }

        if (a)
            s->invisible = FALSE;
        else
            s->invisible = TRUE;

        s = &gSprites[spriteIds[aBg]];
        if (!a)
            StartSpriteAnim(s, START_APP_NONE);
        else
            StartSpriteAnim(s, START_APP_BACKGROUNDS);

        s->x2 = AppGrid_GetXIconCoord(i & (NUM_START_APP_GRID_ROWS - 1));
        s->y2 = AppGrid_GetYIconCoord((i & NUM_START_APP_GRID_ROWS) >> 3);
        s->oam.objMode = ST_OAM_OBJ_BLEND;
        if (a)
            s->invisible = FALSE;
        else
            s->invisible = TRUE;
    }

    sStartMenuDataPtr->movingAppIdx = NUM_START_APPS;
    sStartMenuDataPtr->mode = sStartMenuDataPtr->prevMode;

    StartPrint_AppNameText();
}

static bool32 StartMoveMode_SwapApps(void)
{
    u32 idx1 = sStartMenuDataPtr->movingAppIdx;
    u32 app1 = AppData_GetAppFromIndex(idx1);

    u32 idx2 = AppGrid_GetCurrentIndex();
    u32 app2 = AppData_GetAppFromIndex(idx2);

    if (app1 == app2)
        return FALSE;

    gSaveBlock3Ptr->startMenuAppIndex[idx2] = app1;
    gSaveBlock3Ptr->startMenuAppIndex[idx1] = app2;

    return TRUE;
}


// cellular signals
static inline enum StartMenuCellularSignals CellularSignal_GetCurrentStrength(void)
{
    u32 mapType = GetCurrentMapType();

    if (mapType > MAP_TYPE_SECRET_BASE)
        mapType = (mapType % (MAP_TYPE_SECRET_BASE + 1));

    return sCellularSignal_FilterByMapTypes[mapType];
}


// error handling
static void CellularSignal_StrengthError(u8 taskId)
{
    PlaySE(SE_BOO);

    gTasks[taskId].tState = 0;
    gTasks[taskId].tTimer = 0;
    gTasks[taskId].func = Task_StrengthError_Init;
}

static void Task_StrengthError_Init(u8 taskId)
{
    struct Task *task = &gTasks[taskId];
    enum StartMenuStrengthErrorSteps steps = task->tState;

    switch(steps)
    {
    case START_STRENGTH_ERROR_FLASH:
        {
            if (task->tTimer > 48)
            {
                task->tState++;
                return;
            }

            u32 timerBitwise = (task->tTimer & 0xF);
            u32 timerDivide = task->tTimer ? (task->tTimer / 0xF) : 0;
            if (!timerBitwise)
            {
                BlitSymbol_Help(BlitSymbol_ConvertSignalToHelp(), START_MAIN_WIN_HELP_TOP, (DISPLAY_WIDTH - 24), 0);
                if (!(timerDivide % 2))
                {
                    BlitSymbol_Help(START_HELP_SYMBOL_SIG_0B, START_MAIN_WIN_HELP_TOP, (DISPLAY_WIDTH - 24), 0);
                }

                CopyWindowToVram(START_MAIN_WIN_HELP_TOP, COPYWIN_GFX);
            }

            task->tTimer++;
            break;
        }
    case START_STRENGTH_ERROR_PRINT:
        {
            sStartMenuDataPtr->customStr = sStartMenuStrings_CellularSignalErrorString;
            StartPrint_QuestFlavorText();

            sStartMenuDataPtr->customStr = sStartMenuStrings_CellularSignalErrorControls;
            StartPrint_HelpBottomText();

            task->tTimer = START_DEFAULT_TIMER;
            task->tState++;
            break;
        }
    case START_STRENGTH_ERROR_FINISH:
        {
            task->tTimer--;
            if (!task->tTimer || JOY_NEW(A_BUTTON | B_BUTTON | START_BUTTON))
            {
                // reprint back
                StartPrint_QuestFlavorText();
                StartPrint_HelpBottomText();

                task->func = Task_StartMenu_HandleInput;
                task->tTimer = 0;
                task->tState = 0;

                return;
            }
        }
    default:
        return;
    }
}


// save mode functionalities
static void Task_SaveMode_Init(u8 taskId)
{
    IncrementGameStat(GAME_STAT_SAVED_GAME);

    sStartMenuDataPtr->saveRes = START_SAVE_IN_PROGRESS;
    StartPrint_QuestFlavorText();
    StartPrint_HelpBottomText();

    u8 saveStatus = TrySavingData(SAVE_NORMAL);
    if (saveStatus == SAVE_STATUS_OK)
        sStartMenuDataPtr->saveRes = START_SAVE_SUCCESS;
    else
        sStartMenuDataPtr->saveRes = START_SAVE_FAILURE;

    StartPrint_QuestFlavorText();
    StartPrint_HelpBottomText();
    PlaySE(SaveMode_GetSaveSE());

    gTasks[taskId].tTimer = START_DEFAULT_TIMER;
    gTasks[taskId].func = Task_SaveMode_Exit;
}

static void Task_SaveMode_Exit(u8 taskId)
{
    struct Task *task = &gTasks[taskId];

    if (JOY_NEW(A_BUTTON | START_BUTTON))
    {
        task->func = Task_StartMenu_SlideOut;
        task->tSlideY = 0;
    }

    task->tTimer--;
    if (!task->tTimer || JOY_NEW(B_BUTTON))
    {
        task->tTimer = 0;

        if (sStartMenuDataPtr->mode >= START_MODE_SAVE_SCRIPT)
        {
            task->func = Task_StartMenu_SlideOut;
            task->tSlideY = 0;
        }
        else
        {
            sStartMenuDataPtr->mode = sStartMenuDataPtr->prevMode;
            sStartMenuDataPtr->prevMode = sStartMenuDataPtr->mode;
            sStartMenuDataPtr->saveRes = START_SAVE_INACTIVE;
            StartPrint_QuestFlavorText();
            StartPrint_HelpBottomText();

            task->func = Task_StartMenu_HandleInput;
        }
    }
}

static void SaveOverwrite_Init(u8 taskId)
{
    sStartMenuDataPtr->saveRes = START_SAVE_OVERWRITE;
    gTasks[taskId].func = Task_SaveOverwrite_Load;
    gTasks[taskId].tState = START_SAVE_OVERWRITE_INIT;
}

static void Task_SaveOverwrite_Load(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    enum StartMenuSaveOverwriteSteps state = tState;

    switch(state)
    {
    case START_SAVE_OVERWRITE_INIT:
        {
            // clear main windows
            for (enum StartMenuMainWindows i = START_MAIN_WIN_HELP_BOTTOM; i < NUM_START_MAIN_WINDOWS; i++)
            {
                FillWindowPixelBuffer(i, PIXEL_FILL(0));
                CopyWindowToVram(i, COPYWIN_GFX);
            }

            // hide main sprites
            for (u32 i = 0; i < NUM_START_MAIN_SPRITES; i++)
            {
                u8 *spriteIds = sStartMenuDataPtr->spriteIds;
                struct Sprite *sprite = &gSprites[spriteIds[i]];
                if (spriteIds[i] == SPRITE_NONE)
                    continue;

                if (!sprite->invisible)
                {
                    sprite->invisible = TRUE;
                    sprite->data[7] = TRUE;
                }

                // used for prev save mons
                if ((i >= START_MAIN_SPRITE_MON_ICONS && i < START_MAIN_SPRITE_MON_ICONS_END)
                    || i == START_MAIN_SPRITE_EGG)
                {
                    FreeAndDestroyMonIconSprite(sprite);
                    spriteIds[i] = SPRITE_NONE;
                }
            }

            // darken ui
            BlendPalettes(PALETTES_BG & ~((1 << START_PAL_SLOT_TEXT)), 8, RGB_BLACK);

            tState++;
            break;
        }
    case START_SAVE_OVERWRITE_TILEMAP:
        {
            // load head half of the tilemap
            CopyRectToBgTilemapBufferRect(START_BG_CAUTIONBOX, sStartMenu_BackgroundGraphics[START_BG_CAUTIONBOX].tilemap,
                                       0, 32,
                                      32, 64,
                                      32,  0,
                                      32, 32,
                                      0, 0, START_PAL_SLOT_TEXT);
            CopyBgTilemapBufferToVram(START_BG_CAUTIONBOX);

            // prepare slide
            tSlideX = 0;

            tState++;
        }
    case START_SAVE_OVERWRITE_SLIDE_IN:
        {
            tSlideX -= 16;
            SetGpuReg(REG_OFFSET_BG1HOFS, tSlideX);

            if (tSlideX == START_SAVE_OVERWRITE_X_FULLSCREEN) // load tail half of the tilemap, then continue slide
            {
                CopyRectToBgTilemapBufferRect(START_BG_CAUTIONBOX, sStartMenu_BackgroundGraphics[START_BG_CAUTIONBOX].tilemap,
                                           0,  0,
                                          32, 64,
                                           0,  0,
                                          32, 32,
                                          0, 0, START_PAL_SLOT_TEXT);
                CopyBgTilemapBufferToVram(START_BG_CAUTIONBOX);
            }

            if (tSlideX == (START_SAVE_OVERWRITE_X_CENTERSCREEN - 4))
            {
                SetGpuReg(REG_OFFSET_BG1HOFS, tSlideX + 4);
                tSlideX = START_SAVE_OVERWRITE_X_CENTERSCREEN - 4; // 376

                tState++;
                return;
            }
            break;
        }
    case START_SAVE_OVERWRITE_LOAD:
        {
            // load custom window
            struct WindowTemplate window = CreateWindowTemplate(START_BG_CAUTIONBOX, 17, 4, START_WIN_SAVE_OVERWRITE_WIDTH, 8, START_PAL_SLOT_TEXT, 57);
            tWindowId = AddWindow(&window);
            PutWindowTilemap(tWindowId);

            // load text
            StartPrint_SaveOverwriteText(taskId);
            StartPrint_HelpBottomText();

            // load sprites
            SaveOverwrite_LoadSprites();

            tState++;
            return;
        }
    case START_SAVE_OVERWRITE_CONFIRM:
        {
            if (JOY_NEW(B_BUTTON))
            {
                // unload window
                FillWindowPixelBuffer(tWindowId, PIXEL_FILL(2));
                CopyWindowToVram(tWindowId, COPYWIN_FULL);
                FillWindowPixelBuffer(START_MAIN_WIN_HELP_BOTTOM, PIXEL_FILL(0));
                CopyWindowToVram(START_MAIN_WIN_HELP_BOTTOM, COPYWIN_FULL);

                // unload sprites
                SaveOverwrite_DestroySprites();

                tState = START_SAVE_OVERWRITE_SLIDE_OUT;
                return;
            }

            if (JOY_NEW(A_BUTTON) && JOY_NEW(START_BUTTON))
            {
                // unload sprites
                SaveOverwrite_DestroySprites();

                tState = START_SAVE_OVERWRITE_FLASH;
                return;
            }

            break;
        }
    case START_SAVE_OVERWRITE_FLASH:
        {
            IncrementGameStat(GAME_STAT_SAVED_GAME);

            sStartMenuDataPtr->saveRes = START_SAVE_IN_PROGRESS;
            StartPrint_SaveOverwriteText(taskId);
            StartPrint_HelpBottomText();

            u8 saveStatus = TrySavingData(SAVE_NORMAL);
            if (saveStatus == SAVE_STATUS_OK)
                sStartMenuDataPtr->saveRes = START_SAVE_SUCCESS;
            else
                sStartMenuDataPtr->saveRes = START_SAVE_FAILURE;

            StartPrint_SaveOverwriteText(taskId);
            StartPrint_HelpBottomText();
            PlaySE(SaveMode_GetSaveSE());

            if (sStartMenuDataPtr->saveRes == START_SAVE_SUCCESS)
                gDifferentSaveFile = FALSE;

            tTimer = START_DEFAULT_TIMER;
            tState++;
            break;
        }
    case START_SAVE_OVERWRITE_EXIT:
        {
            if (JOY_NEW(A_BUTTON | START_BUTTON))
            {
                // unload window
                FillWindowPixelBuffer(tWindowId, PIXEL_FILL(2));
                CopyWindowToVram(tWindowId, COPYWIN_FULL);
                FillWindowPixelBuffer(START_MAIN_WIN_HELP_BOTTOM, PIXEL_FILL(0));
                CopyWindowToVram(START_MAIN_WIN_HELP_BOTTOM, COPYWIN_FULL);
                tReturnToOW = TRUE;

                tTimer = 0;
                tState++;
            }

            tTimer--;
            if (!tTimer || JOY_NEW(B_BUTTON))
            {
                // unload window
                FillWindowPixelBuffer(tWindowId, PIXEL_FILL(2));
                CopyWindowToVram(tWindowId, COPYWIN_FULL);
                FillWindowPixelBuffer(START_MAIN_WIN_HELP_BOTTOM, PIXEL_FILL(0));
                CopyWindowToVram(START_MAIN_WIN_HELP_BOTTOM, COPYWIN_FULL);
                if (sStartMenuDataPtr->mode >= START_MODE_SAVE_SCRIPT)
                    tReturnToOW = TRUE;

                tTimer = 0;
                tState++;
            }

            break;
        }
    case START_SAVE_OVERWRITE_SLIDE_OUT:
        {
            tSlideX -= 16;
            SetGpuReg(REG_OFFSET_BG1HOFS, tSlideX);

            if (tSlideX == (START_SAVE_OVERWRITE_X_FULLSCREEN * 2)) // unload head half of the tilemap
            {
                FillBgTilemapBufferRect(START_BG_CAUTIONBOX, 0, 32, 0, 32, 32, START_PAL_SLOT_TEXT);
                CopyBgTilemapBufferToVram(START_BG_CAUTIONBOX);
            }

            if (tSlideX <= (START_SAVE_OVERWRITE_X_FULLSCREEN * 3))
            {
                tSlideX = 0;

                tState++;
                return;
            }
            break;
        }
    case START_SAVE_OVERWRITE_FINISH:
        {
            RemoveWindow(tWindowId);
            tWindowId = WINDOW_NONE;

            // unload tail half of the tilemap
            FillBgTilemapBufferRect(START_BG_CAUTIONBOX, 0, 0, 0, 32, 32, START_PAL_SLOT_TEXT);
            CopyBgTilemapBufferToVram(START_BG_CAUTIONBOX);

            if (tReturnToOW)
            {
                gTasks[taskId].func = Task_StartMenu_SlideOut;
                gTasks[taskId].tSlideY = 0;
            }
            else
            {
                // undarken ui
                BlendPalettes(PALETTES_BG & ~((1 << START_PAL_SLOT_TEXT)), 0, RGB_BLACK);

                // change mode back to normal
                sStartMenuDataPtr->mode = sStartMenuDataPtr->prevMode;
                sStartMenuDataPtr->prevMode = sStartMenuDataPtr->mode;
                sStartMenuDataPtr->saveRes = START_SAVE_INACTIVE;

                // reload everything
                StartSetup_Text();
                StartMainSprite_PartyMon();

                // show main sprites
                for (u32 i = 0; i < NUM_START_MAIN_SPRITES; i++)
                {
                    u8 *spriteIds = sStartMenuDataPtr->spriteIds;

                    if (gSprites[spriteIds[i]].data[7])
                    {
                        gSprites[spriteIds[i]].invisible = FALSE;
                        gSprites[spriteIds[i]].data[7] = FALSE;
                    }
                }

                gTasks[taskId].func = Task_StartMenu_HandleInput;
            }

            return;
        }

    default:
        break;
    }

}

static void SaveOverwrite_LoadSprites(void)
{
    u8 *spriteIds = sStartMenuDataPtr->spriteIds;

    for (u32 i = 0; i < PARTY_SIZE; i++)
    {
        u32 species = sStartMenuPreviousSave.partySpecies[i];

        if (!species || species > NUM_SPECIES || spriteIds[START_MAIN_SPRITE_MON_ICONS + i] != SPRITE_NONE)
            continue;

        LoadMonIconPalette(species);
        spriteIds[START_MAIN_SPRITE_MON_ICONS + i] =
            CreateMonIconNoPersonality(species, SpriteCB_MonIcon, SAVE_OVERWRITE_PARTY_MON_X, SAVE_OVERWRITE_PARTY_MON_Y, 3);

        struct Sprite *sprite = &gSprites[spriteIds[START_MAIN_SPRITE_MON_ICONS + i]];
        sprite->oam.priority = 0;
        sprite->x2 = SaveOverwrite_GetXIconCoord(i);
        sprite->y2 = SaveOverwrite_GetYIconCoord(i);
    }

    if (spriteIds[START_MAIN_SPRITE_EGG] == SPRITE_NONE)
    {
        u8 bodyType = sStartMenuPreviousSave.customValues[CUSTOMIZATION_BODY_TYPE];
        u32 graphicsId = GetPlayerAvatarGraphicsByCustomValues(PLAYER_AVATAR_STATE_NORMAL, bodyType);
        spriteIds[START_MAIN_SPRITE_EGG] = CreateObjectGraphicsSprite(graphicsId, SpriteCallbackDummy, SAVE_OVERWRITE_PLAYER_X, SAVE_OVERWRITE_PLAYER_Y, 0);
        StartSpriteAnim(&gSprites[spriteIds[START_MAIN_SPRITE_EGG]], ANIM_STD_GO_SOUTH);

        // reload palette because it can get tinted
        // when loaded with CreateObjectGraphicsSprite
        u32 slot = OBJ_PLTT_ID(gSprites[spriteIds[START_MAIN_SPRITE_EGG]].oam.paletteNum);
        if (bodyType != BODY_TYPE_CHAMPION)
        {
            SetCustomPlayerPalette(&gPlttBufferUnfaded[slot], &sStartMenuPreviousSave.rgbValues, &sStartMenuPreviousSave.customValues);
            SetCustomPlayerPalette(&gPlttBufferFaded[slot], &sStartMenuPreviousSave.rgbValues, &sStartMenuPreviousSave.customValues);
        }
        else
        {
            const struct SpritePalette *pal = GetObjectEventSpritePaletteByTag(GetObjectEventGraphicsInfo(graphicsId)->paletteTag);
            if (pal != NULL)
                LoadPalette(pal->data, slot, PLTT_SIZE_4BPP);
        }
    }
}

static void SaveOverwrite_DestroySprites(void)
{
    u8 *spriteIds = sStartMenuDataPtr->spriteIds;

    for (u32 i = 0; i < PARTY_SIZE; i++)
    {
        u32 species = sStartMenuPreviousSave.partySpecies[i];

        if (!species || species > NUM_SPECIES || spriteIds[START_MAIN_SPRITE_MON_ICONS + i] == SPRITE_NONE)
            continue;

        FreeAndDestroyMonIconSprite(&gSprites[spriteIds[START_MAIN_SPRITE_MON_ICONS + i]]);
        spriteIds[START_MAIN_SPRITE_MON_ICONS + i] = SPRITE_NONE;
    }

    if (spriteIds[START_MAIN_SPRITE_EGG] != SPRITE_NONE)
    {
        DestroySprite(&gSprites[spriteIds[START_MAIN_SPRITE_EGG]]);
        spriteIds[START_MAIN_SPRITE_EGG] = SPRITE_NONE;
    }
}

static inline s32 SaveOverwrite_GetXIconCoord(u32 i)
{
    return 32 * (i);
}

static inline s32 SaveOverwrite_GetYIconCoord(u32 i)
{
    return 0 * (i);
}

static inline u32 SaveMode_GetSaveSE(void)
{
    if (sStartMenuDataPtr->saveRes == START_SAVE_SUCCESS)
        return SE_SAVE;
    else
        return SE_BOO;
}


static void StartMenu_Free(void)
{
    sStartMenuLastCursor = sStartMenuDataPtr->cursor;

    for (enum StartMenuMainSprites i = 0; i < NUM_START_MAIN_SPRITES; i++)
    {
        u8 *spriteIds = sStartMenuDataPtr->spriteIds;
        if (spriteIds[i] == SPRITE_NONE)
            continue;

        struct Sprite *sprite = &gSprites[spriteIds[i]];
        if ((i >= START_MAIN_SPRITE_MON_ICONS && i < START_MAIN_SPRITE_MON_ICONS_END)
         || i == START_MAIN_SPRITE_EGG)
        {
            FreeAndDestroyMonIconSprite(sprite);
        }
        else
        {
            if (sprite->oam.affineMode)
            {
                sprite->affineAnimPaused = TRUE;
                FreeSpriteOamMatrix(sprite);
            }

            DestroySprite(sprite);
        }
    }

    FreeMonIconPalettes();
    FreeSpritePaletteByTag(START_TAG_PALETTE);
    for (enum StartMenuTags tag = START_TAG_APP_CURSOR; tag < NUM_START_TAGS; tag++)
        FreeSpriteTilesByTag(tag);

    UnsetBgTilemapBuffer(START_BG_CAUTIONBOX);
    FreeAllWindowBuffers();
    TRY_FREE_AND_SET_NULL(sStartMenuDataPtr);
}

static void StartSetup_MakeSpritesVisible(u32 spriteId)
{
    u8 *spriteIds = sStartMenuDataPtr->spriteIds;

    if (gSprites[spriteIds[spriteId]].data[7])
    {
        gSprites[spriteIds[spriteId]].invisible = FALSE;
        gSprites[spriteIds[spriteId]].data[7] = FALSE;
    }
}

static void StartSetup_MakeSpritesInvisible(u32 spriteId)
{
    u8 *spriteIds = sStartMenuDataPtr->spriteIds;

    if (!gSprites[spriteIds[spriteId]].invisible)
    {
        gSprites[spriteIds[spriteId]].invisible = TRUE;
        gSprites[spriteIds[spriteId]].data[7] = TRUE;
    }
}

static void AppGrid_HandleCursorVisibility(enum StartMenuModes mode)
{
    gSprites[sStartMenuDataPtr->spriteIds[START_MAIN_SPRITE_APP_CURSOR]].invisible = StartSetup_IsInSaveMode();
}
