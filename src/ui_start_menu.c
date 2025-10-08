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
#include "trainer_card.h"
#include "frontier_pass.h"
#include "buzzr.h"
#include "glass.h"
#include "ui_start_menu.h"
#include "ui_options_menu.h"
#include "ui_main_menu.h"
#include "ui_map_system.h"
#include "ui_pokedex.h"
#include "ui_character_customization_menu.h"
#include "ui_adventure_guide.h"
#include "ui_presto.h"
#include "constants/items.h"
#include "constants/field_weather.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "constants/map_types.h"

// constants, structs

#define NUM_START_MONS_TOTAL  (PARTY_SIZE + DAYCARE_MON_COUNT)

// grid calc
#define GET_APP_GRID_X(row) (22 * (row))
#define GET_APP_GRID_Y(col) (19 * (col))

#define GET_MON_GRID_X(i) ((i) * 28)
#define GET_MON_GRID_Y(i) ((i & 1) * 4)

#define START_APP_BACKGROUNDS NUM_START_APPS

// sprite tiles size
#define START_MAIN_SPRITE_APP_CURSOR_SIZE    (32)
#define START_MAIN_SPRITE_APPS_SIZE          (4 + 4 + 64) // both icons and bg
#define START_MAIN_SPRITE_MON_PLATFORMS_SIZE (16)

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
    START_MAIN_WIN_EGG_INFO,
    NUM_START_MAIN_WINDOWS
};

#define START_MAIN_WIN_HELP_WIDTH      (DISPLAY_TILE_WIDTH)
#define START_MAIN_WIN_TEXTBOX_WIDTH   (DISPLAY_TILE_WIDTH - 2)
#define START_MAIN_WIN_APP_TITLE_WIDTH (DISPLAY_TILE_WIDTH - 8)
#define START_MAIN_WIN_EGG_INFO_WIDTH  (4)

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

#define MAX_APP_COLUMNS       2

struct StartMenuData
{
    u8 spriteIds[NUM_START_MAIN_SPRITES];
    enum StartMenuModes mode;
    enum StartMenuSaveResults saveRes;
    MainCallback savedCB;
    struct UCoords8 cursor;
    enum StartMenuApps movingAppIdx;
};

// RAM data
static EWRAM_DATA struct StartMenuData *sStartMenuDataPtr = NULL;
static EWRAM_DATA struct UCoords8 sStartMenuLastCursor = {};

// declarations
static void Task_HandleStartMenuInput(u8);
static void Task_WaitForFadingInStartMenu(u8);
static void Task_CloseStartMenu(u8);
static void SpriteCB_AppCursor(struct Sprite *);
static void CB2_StartMenuSetup(void);
static void CB2_StartMenu(void);
static void VBlankCB_StartMenu(void);

static void PopulateStartMenuAppIndex(void);
static void ResetStartMenuAppIndex(void);
static void AddNewAppsToStartMenuAppIndex(void);
static u32 IsAppWithinAnIndex(enum StartMenuApps);
static u32 GetFirstEmptyAppIndex(void);
static bool32 IsAppUnlocked(enum StartMenuApps);
static u32 CountCurrentNumberOfApps(void);
static enum StartMenuApps GetAppFromIndex(u8);

static void HandleAppGridNormalInputs(u8);
static void HandleAppGridSaveInputs(u8);
static void HandleAppGridMoveInputs(u8);
static inline void HandleAppGridDirectionalInputs(void);
static u32 GetAppGridCurrentRow(void);
static u32 GetAppGridCurrentColumn(void);
static u32 GetAppGridCurrentIndex(void);

static void Task_BeginSave(u8);

static void SetupStartMenuBgs(void);
static void SetupStartMenuGraphics(void);
static void SetupStartMenuMainSprites(void);
static void SetupStartMenuMainAppSprites(void);
static void SetupStartMenuMainPartyMonSprites(void);
static void SetupStartMenuMainDaycareMonSprites(void);
static void SetupStartMenuMainWindows(void);
static void SetupStartMenuText(void);
static void PrintStartMenuHelpTopText(void);
static void PrintStartMenuHelpBottomText(void);
static void PrintStartMenuQuestFlavorText(void);
static void PrintStartMenuAppTitleText(void);
static void PrintStartMenuEggInfo(void);
static inline void PrintStartMenuText(enum StartMenuMainWindows, u32, u32, u32, u32, u8 const *);
static inline void BlitHelpSymbols(enum StartMenuHelpSymbols, u16);
static inline void _BlitHelpSymbols(enum StartMenuHelpSymbols, u32, u16);
static inline void BlitEggInfoSymbols(enum StartMenuEggInfoSymbols, u16, u16);
static inline enum StartMenuHelpSymbols ConvertToDIntoHelpSymbol(void);
static inline enum StartMenuHelpSymbols ConvertCurrentSignalIntoHelpSymbol(void);
static inline void InjectMonStatusGraphics(struct Sprite *, u32, u32);
static inline enum StartMenuMonStatuses ConvertRawStatusIntoMonStatus(u32);
static inline u32 ConvertPercentageIntoHpBarFrame(u32);
static inline void *GetSpriteCallbackForIcon(u32, bool32);
static inline u32 GetMonHealthPercentage(struct Pokemon *);
static void FreeStartMenuData(void);

// ROM data
static const struct BgTemplate sStartMenuBgs[NUM_START_BACKGROUNDS] =
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
        .priority = 1
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
static const u8 sStartMenuMonStatusSymbols[] = INCBIN_U8("graphics/ui_menus/start_menu/mon_status.4bpp");
static const u8 sStartMenuHpBarSymbols[] = INCBIN_U8("graphics/ui_menus/start_menu/hp_bar.4bpp");


static const struct {
    const struct SpriteSheet sheets[NUM_START_TAGS];
    const struct SpritePalette palette;
} sStartMenuSpriteGraphics =
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

static const u8 *const sStartMenuModeQuestFlavors[NUM_START_MODES] =
{
    [START_MODE_NORMAL] = COMPOUND_STRING(" "),
    [START_MODE_MOVE] = COMPOUND_STRING("Move where?"),
    [START_MODE_SAVE_NORMAL ... START_MODE_SAVE_SCRIPT] = COMPOUND_STRING("Would you like to save?"),
    [START_MODE_SAVE_FORCE] = COMPOUND_STRING("Saving...\nDo not turn off the power."),
};

static const u8 *const sStartMenuSaveResultControls[] =
{
    [START_SAVE_IN_PROGRESS] = COMPOUND_STRING(""),
    [START_SAVE_OVERWRITE] = COMPOUND_STRING("{START_BUTTON} + {A_BUTTON} Overwrite"),
    [START_SAVE_SUCCESS ... START_SAVE_FAILURE] = COMPOUND_STRING("Press any button to continue")
};

static const u8 *const sStartMenuSaveResultText[NUM_START_SAVE_RESULTS] =
{
    [START_SAVE_INACTIVE]    = COMPOUND_STRING(""),
    [START_SAVE_IN_PROGRESS] = COMPOUND_STRING("Saving...\nDo not turn off the power."),
    [START_SAVE_OVERWRITE]   = COMPOUND_STRING("START_SAVE_OVERWRITE"),
    [START_SAVE_SUCCESS]     = COMPOUND_STRING("Saved the game."),
    [START_SAVE_FAILURE]     = COMPOUND_STRING("There's a problem saving."),
};

static const u8 *const sStartMenuModeAppNames[NUM_START_APPS] =
{
    [START_APP_NONE] = COMPOUND_STRING("Free Space"),

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
    [START_APP_ADVENTURES_GUIDE] = COMPOUND_STRING("Adventure Guide"),
};

static const MainCallback sStartAppMenusPtr[NUM_START_APPS] =
{
    // first row
    [START_APP_PARTY] = CB2_PartyMenuFromStartMenu,
    [START_APP_BAG] = CB2_BagMenuFromStartMenu,
    [START_APP_ARRIBA] = CB2_MapSystemFromStartMenu,
    [START_APP_TODOS] = CB2_QuestMenuFromStartMenu,
    [START_APP_DEXNAV] = CB2_DexNavFromStartMenu,
    [START_APP_POKEDEX] = CB2_PokedexFromStartMenu,
    [START_APP_BUZZR] = CB2_BuzzrFromStartMenu,
    [START_APP_OPTIONS] = CB2_OptionsFromStartMenu,

    // second row
    [START_APP_TRAINER_CARD] = NULL, // TODO as vanilla's very borked to use
    [START_APP_PRESTO] = CB2_PrestoFromStartMenu,
    [START_APP_WAVES_OF_CHANGE] = NULL, // TODO
    [START_APP_CUSTOMIZE] = CB2_CustomizationFromStartMenu,
    [START_APP_SAVE] = NULL, // TODO
    [START_APP_SURPRISE_TRADE] = NULL, // TODO
    [START_APP_GOOGLE_GLASS] = CB2_GlassFromStartMenu,
    [START_APP_ADVENTURES_GUIDE] = CB2_AdventureGuideFromStartMenu,
};

//sprite
static const struct OamData sStartMenuAppCursorOamData =
{
    .shape = SPRITE_SHAPE(32x32),
    .size = SPRITE_SIZE(32x32),
};

static const struct SpriteTemplate sStartMenuAppCursorSprite =
{
    .tileTag = START_TAG_APP_CURSOR,
    .paletteTag = START_TAG_PALETTE,
    .oam = &sStartMenuAppCursorOamData,
    .anims = (const union AnimCmd *const[]){
        [START_CURSOR_NORMAL] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_CURSOR_NORMAL * 16), ANIMCMD_END },
        [START_CURSOR_MOVE] = (const union AnimCmd[]){ ANIMCMD_FRAME(START_CURSOR_MOVE * 16), ANIMCMD_END },
    },
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_AppCursor,
};

static const struct OamData sStartMenuAppOamData =
{
    .shape = SPRITE_SHAPE(16x16),
    .size = SPRITE_SIZE(16x16),
};

#define START_APP_FRAME(name) (START_APP_ ## name * 4)
static const struct SpriteTemplate sStartMenuAppSprite =
{
    .tileTag = START_TAG_APPS,
    .paletteTag = START_TAG_PALETTE,
    .oam = &sStartMenuAppOamData,
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

static const struct OamData sStartMenuMonPlatformOamData =
{
    .shape = SPRITE_SHAPE(32x16),
    .size = SPRITE_SIZE(32x16),
    .objMode = ST_OAM_OBJ_BLEND,
    .priority = 1
};

static const struct SpriteTemplate sStartMenuMonPlatformSprite =
{
    .tileTag = START_TAG_MON_PLATFORMS,
    .paletteTag = START_TAG_PALETTE,
    .oam = &sStartMenuMonPlatformOamData,
    .anims = (const union AnimCmd *const[]){
        (const union AnimCmd[]){ ANIMCMD_FRAME(0, 1), ANIMCMD_END }, // default
        (const union AnimCmd[]){ ANIMCMD_FRAME(8, 1), ANIMCMD_END }, // daycare
    },
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct OamData sStartMenuMonStatusOamData =
{
    .shape = SPRITE_SHAPE(32x8),
    .size = SPRITE_SIZE(32x8),
};

static const u8 sBlankGfx[] = INCBIN_U8("graphics/interface/blank.4bpp");
static const struct SpriteFrameImage sStartMenuDummyFrames[] = { obj_frame_tiles(sBlankGfx) };

static const struct SpriteTemplate sStartMenuMonStatusSprite =
{
    .tileTag = TAG_NONE,
    .paletteTag = START_TAG_PALETTE,
    .oam = &sStartMenuMonStatusOamData,
    .anims = gDummySpriteAnimTable,
    .images = sStartMenuDummyFrames, // trust the process
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct OamData sStartMenuDaycareItemOamData =
{
    .shape = SPRITE_SHAPE(32x32),
    .size = SPRITE_SIZE(32x32),
    .affineMode = ST_OAM_AFFINE_NORMAL
};

static const struct SpriteTemplate sStartMenuDaycareItemSprite =
{
    // .tileTag and .paletteTag set seperately
    .oam = &sStartMenuDaycareItemOamData,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = (const union AffineAnimCmd *const[]){
        [0] = (const union AffineAnimCmd[]){ AFFINEANIMCMD_FRAME(-96, -96, 0, 1), AFFINEANIMCMD_END },
    },
    .callback = SpriteCallbackDummy
};

// misc
static const u16 sStartMenuInstalledApps[NUM_START_APPS] =
{
    // first row
    [START_APP_PARTY]   = FLAG_SYS_APP_POKEMON_GET, // FLAG_SYS_APP_PROLOGUE_GET
    [START_APP_BAG]     = FLAG_SYS_APP_BAG_GET, // FLAG_SYS_APP_PROLOGUE_GET
    [START_APP_ARRIBA]  = FLAG_SYS_APP_MAP_GET, // FLAG_SYS_STARTER_APPS_GET
    [START_APP_TODOS]   = FLAG_SYS_APP_QUEST_GET, // FLAG_SYS_STARTER_APPS_GET
    [START_APP_DEXNAV]  = FLAG_SYS_APP_DEXNAV_GET, // Get later
    [START_APP_POKEDEX] = FLAG_SYS_APP_POKEDEX_GET, // FLAG_SYS_STARTER_APPS_GET
    [START_APP_BUZZR]   = FLAG_SYS_APP_BUZZR_GET, // After 1 badge
    [START_APP_OPTIONS] = 0, // always there

    // second row
    // TODO add flags missing from start menu v2
    [START_APP_TRAINER_CARD]     = 0, // always there
    [START_APP_PRESTO]           = FLAG_SYS_APP_PRESTO_GET, // After meeting YC CEO in office
    [START_APP_WAVES_OF_CHANGE]  = FLAG_SYS_APP_WAVES_OF_CHANGE_GET,
    [START_APP_CUSTOMIZE]        = FLAG_SYS_APP_QUEST_GET,
    [START_APP_SAVE]             = 0, // always there
    [START_APP_SURPRISE_TRADE]   = FLAG_SYS_STARTER_APPS_GET,
    [START_APP_GOOGLE_GLASS]     = FLAG_SYS_APP_GOOGLE_GLASS_GET,
    [START_APP_ADVENTURES_GUIDE] = 0, // always there
};

// misc

static const enum StartMenuCellularSignals sStartSignalsByMapType[] =
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

// tasks
#define tStartMode data[0]

void Task_OpenUIStartMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        s16 *data = gTasks[taskId].data;
        enum StartMenuModes mode = START_MODE_NORMAL;
        CleanupOverworldWindowsAndTilemaps();
        if (tStartMode)
            mode = tStartMode;

        OpenStartMenu(mode);
        DestroyTask(taskId);
    }
}

static void Task_WaitForFadingInStartMenu(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_HandleStartMenuInput;
}

static void Task_HandleStartMenuInput(u8 taskId)
{
    enum StartMenuModes mode = sStartMenuDataPtr->mode;

    switch (mode)
    {
    default:
    case START_MODE_NORMAL:
        HandleAppGridNormalInputs(taskId);
        break;
    case START_MODE_SAVE_NORMAL:
    case START_MODE_SAVE_SCRIPT:
        HandleAppGridSaveInputs(taskId);
        break;
    case START_MODE_SAVE_FORCE:
        gTasks[taskId].func = Task_BeginSave;
        break;
    case START_MODE_MOVE:
        HandleAppGridMoveInputs(taskId);
        break;
    }

    if (mode != sStartMenuDataPtr->mode)
    {
        PrintStartMenuQuestFlavorText();
        PrintStartMenuHelpBottomText();
        return;
    }

    // normal and move modes
    if (mode < START_MODE_SAVE_NORMAL)
        HandleAppGridDirectionalInputs();
}

static void Task_CloseStartMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sStartMenuDataPtr->savedCB);
        FreeStartMenuData();
        DestroyTask(taskId);
    }
}

// sprite
static void SpriteCB_AppCursor(struct Sprite *s)
{
    // TODO
    s->x2 = GET_APP_GRID_X(GetAppGridCurrentColumn());
    s->y2 = GET_APP_GRID_Y(GetAppGridCurrentRow());
}

// normal funcs
bool32 OpenNormalUIStartMenu(void)
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
    CreateTask(Task_OpenUIStartMenu, 0);
    LockPlayerFieldControls();

    return TRUE;
}

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
    sStartMenuDataPtr->mode = mode;
    sStartMenuDataPtr->savedCB = cb;
    memset(sStartMenuDataPtr->spriteIds, SPRITE_NONE, NUM_START_MAIN_SPRITES * sizeof(u8));

    PopulateStartMenuAppIndex();

    sStartMenuDataPtr->movingAppIdx = NUM_START_APPS;
    sStartMenuDataPtr->cursor = sStartMenuLastCursor;

    SetMainCallback2(CB2_StartMenuSetup);
}

void CB2_ReturnToUIStartMenu(void)
{
    FieldClearVBlankHBlankCallbacks();
    OpenStartMenu(START_MODE_NORMAL);
}

static void CB2_StartMenuSetup(void)
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
        CreateTask(Task_WaitForFadingInStartMenu, 0);
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

// app allocation
static void PopulateStartMenuAppIndex(void)
{
    if (CountCurrentNumberOfApps() < START_APP_GRID_ROW_2)
        ResetStartMenuAppIndex();

    AddNewAppsToStartMenuAppIndex();
}

static void ResetStartMenuAppIndex(void)
{
    memset(gSaveBlock3Ptr->startMenuAppIndex, 0, TOTAL_START_APPS * sizeof(u8));
}

static void AddNewAppsToStartMenuAppIndex(void)
{
    u32 i = 0;
    for (enum StartMenuApps app = START_APP_PARTY; app < NUM_START_APPS; app++, i++)
    {
        if (IsAppUnlocked(app) && IsAppWithinAnIndex(app) == NUM_START_APPS)
        {
            u32 freeSlot = GetFirstEmptyAppIndex();
            if (freeSlot >= NUM_START_APPS)
                break;

            gSaveBlock3Ptr->startMenuAppIndex[freeSlot] = app;
        }
    }
}

static u32 IsAppWithinAnIndex(enum StartMenuApps appId)
{
    for (u32 idx = 0; idx < TOTAL_START_APPS; idx++)
    {
        if (gSaveBlock3Ptr->startMenuAppIndex[idx] == appId)
            return idx;
    }

    return NUM_START_APPS;
}

static u32 GetFirstEmptyAppIndex(void)
{
    for (u32 idx = 0; idx < NUM_START_APPS; idx++)
    {
        enum StartMenuApps app = gSaveBlock3Ptr->startMenuAppIndex[idx];
        if (!app)
            return idx;
    }

    return NUM_START_APPS;
}

static bool32 IsAppUnlocked(enum StartMenuApps app)
{
    if (!app || app >= NUM_START_APPS)
        return FALSE;

    // apps that is always there e.g. save
    if (!sStartMenuInstalledApps[app])
        return TRUE;

    return FlagGet(sStartMenuInstalledApps[app]);
}

static u32 CountCurrentNumberOfApps(void)
{
    u32 count = 0;

    for (u32 i = 0; i < TOTAL_START_APPS; i++)
    {
        if (GetAppFromIndex(i))
            count++;
    }

    return count;
}

static enum StartMenuApps GetAppFromIndex(u8 idx)
{
    return gSaveBlock3Ptr->startMenuAppIndex[idx];
}

// grid system

static u32 CalculateAppGridNumberOfRows(void)
{
    return NUM_START_APP_GRID_COLUMNS - 1;
}

static u32 GetAppGridSizeForRow(u32 currentRow)
{
    return NUM_START_APP_GRID_ROWS - 1;
}

bool32 IsAppGridInputMovingRightOrDown(s32 delta)
{
    return (delta == 1);
}

static void SetAppGridXCursor(u32 x)
{
    sStartMenuDataPtr->cursor.x = x;
}

static void SetAppGridYCursor(u32 y)
{
    sStartMenuDataPtr->cursor.y = y;
}

static u32 GetAppGridCurrentRow(void)
{
    return sStartMenuDataPtr->cursor.y;
}

static u32 GetAppGridCurrentColumn(void)
{
    return sStartMenuDataPtr->cursor.x;
}

static u32 GetAppGridCurrentIndex(void)
{
    return GetAppGridCurrentColumn() + (GetAppGridCurrentRow() ? NUM_START_APP_GRID_ROWS : 0);
}

static void SanitizeAppGridXCursor(s32 delta)
{
    u32 column = GetAppGridCurrentColumn();
    u32 row = GetAppGridCurrentRow();
    u32 rowSize = GetAppGridSizeForRow(row);
    bool32 cursorMovingRight = IsAppGridInputMovingRightOrDown(delta);
    bool32 isLastColumn = (column == rowSize);

    if (cursorMovingRight && isLastColumn)
        SetAppGridXCursor(0);
    else if (!cursorMovingRight && !column)
        SetAppGridXCursor(rowSize);
    else
        SetAppGridXCursor(delta + column);
}

static void SanitizeAppGridYCursor(s32 delta)
{
    u32 row = sStartMenuDataPtr->cursor.y;
    u32 rowSize = CalculateAppGridNumberOfRows();
    bool32 cursorMovingDown = IsAppGridInputMovingRightOrDown(delta);
    bool32 isLastColumn = (row == rowSize);

    if (cursorMovingDown && isLastColumn)
        SetAppGridYCursor(0);
    else if (!cursorMovingDown && !row)
        SetAppGridYCursor(rowSize);
    else
        SetAppGridYCursor(row + delta);
}

static void FixAppGridXCursor(void)
{
    u32 x = GetAppGridCurrentColumn();
    u32 rowSize = GetAppGridSizeForRow(GetAppGridCurrentRow());

    while (x > rowSize)
        SetAppGridXCursor(--x);
}

static void ChangeAppGridCurrentColumn(bool32 movingRight)
{
    s32 delta = movingRight ? 1 : -1;

    SanitizeAppGridXCursor(delta);

    PlaySE(SE_CLICK);
    PrintStartMenuAppTitleText();
}

static void ChangeAppGridCurrentRow(bool32 movingDown)
{
    s32 delta = movingDown ? 1 : -1;

    SanitizeAppGridYCursor(delta);
    FixAppGridXCursor();

    PlaySE(SE_CLICK);
    PrintStartMenuAppTitleText();
}

static inline void HandleAppGridDirectionalInputs(void)
{
    if (JOY_NEW(DPAD_UP) || JOY_REPEAT(DPAD_UP))
        ChangeAppGridCurrentRow(FALSE);

    if (JOY_NEW(DPAD_DOWN) || JOY_REPEAT(DPAD_DOWN))
        ChangeAppGridCurrentRow(TRUE);

    if (JOY_NEW(DPAD_LEFT | L_BUTTON) || JOY_REPEAT(DPAD_LEFT | L_BUTTON))
        ChangeAppGridCurrentColumn(FALSE);

    if (JOY_NEW(DPAD_RIGHT | R_BUTTON) || JOY_REPEAT(DPAD_RIGHT | R_BUTTON))
        ChangeAppGridCurrentColumn(TRUE);
}

static void InitializeStartMenuMoveMode(void)
{
    u8 *spriteIds = sStartMenuDataPtr->spriteIds;
    struct Sprite *s = NULL;

    // change cursor mode
    s = &gSprites[spriteIds[START_MAIN_SPRITE_APP_CURSOR]];
    StartSpriteAnim(s, START_CURSOR_MOVE);
    s->y -= 2;

    // make the moved app moves with the cursor
    s = &gSprites[spriteIds[START_MAIN_SPRITE_APP_ICONS + GetAppGridCurrentIndex()]];
    s->callback = gSprites[spriteIds[START_MAIN_SPRITE_APP_CURSOR]].callback;
    s->subpriority = 0;
    s->y -= 2;
    s->data[0] = TRUE;

    // convert the moved app's bg to be an empty space
    s = &gSprites[spriteIds[START_MAIN_SPRITE_APP_BGS + GetAppGridCurrentIndex()]];
    StartSpriteAnim(s, START_APP_NONE);
    s->oam.objMode = ST_OAM_OBJ_BLEND;

    // activate invisible empty spaces, if any
    for (u32 i = 0, idx = START_MAIN_SPRITE_APP_BGS; i < TOTAL_START_APPS; i++, idx++)
    {
        s = &gSprites[sStartMenuDataPtr->spriteIds[idx]];
        if (s->invisible)
            s->invisible = FALSE;
    }

    sStartMenuDataPtr->movingAppIdx = GetAppGridCurrentIndex();
    sStartMenuDataPtr->mode = START_MODE_MOVE;

    PrintStartMenuAppTitleText();
}

static void HandleAppGridNormalInputs(u8 taskId)
{
    if (JOY_NEW(A_BUTTON))
    {
        enum StartMenuApps app = GetAppFromIndex(GetAppGridCurrentIndex());

        if ((app != START_APP_SAVE && !sStartAppMenusPtr[app]) || !app)
        {
            PlaySE(SE_BOO);
            return;
        }

        PlaySE(SE_SELECT);
        if (app == START_APP_SAVE)
        {
            sStartMenuDataPtr->mode = START_MODE_SAVE_NORMAL;
        }
        else
        {
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
            sStartMenuDataPtr->savedCB = sStartAppMenusPtr[app];
            gTasks[taskId].func = Task_CloseStartMenu;
        }
        return;
    }

    if (JOY_NEW(START_BUTTON))
    {
        sStartMenuDataPtr->mode = START_MODE_SAVE_NORMAL;
        return;
    }

    if (JOY_NEW(SELECT_BUTTON))
    {
        if (!GetAppFromIndex(GetAppGridCurrentIndex()))
        {
            PlaySE(SE_BOO);
            return;
        }

        InitializeStartMenuMoveMode();
        return;
    }

    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_PC_OFF);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_CloseStartMenu;
        return;
    }
}

static void HandleAppGridSaveInputs(u8 taskId)
{
    if (JOY_NEW(START_BUTTON | A_BUTTON))
    {
        gTasks[taskId].func = Task_BeginSave;
        return;
    }

    if (JOY_NEW(B_BUTTON))
    {
        if (sStartMenuDataPtr->mode >= START_MODE_SAVE_SCRIPT)
        {
            PlaySE(SE_PC_OFF);
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
            gTasks[taskId].func = Task_CloseStartMenu;
        }
        else
        {
            sStartMenuDataPtr->mode = START_MODE_NORMAL;
        }

        return;
    }
}

static inline void PlaySaveSE(void)
{
    switch(sStartMenuDataPtr->saveRes)
    {
    default:
    case START_SAVE_SUCCESS:
        PlaySE(SE_SAVE);
        break;
    case START_SAVE_FAILURE:
        PlaySE(SE_BOO);
        break;
    }
}

#define tTimer data[0]

static void Task_FinishSave(u8 taskId)
{
    struct Task *task = &gTasks[taskId];

    task->tTimer--;
    if (!task->tTimer || JOY_NEW(A_BUTTON | B_BUTTON | START_BUTTON | SELECT_BUTTON))
    {
        if (sStartMenuDataPtr->mode >= START_MODE_SAVE_SCRIPT)
        {
            PlaySE(SE_PC_OFF);
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
            task->func = Task_CloseStartMenu;
        }
        else
        {
            sStartMenuDataPtr->mode = START_MODE_NORMAL;
            sStartMenuDataPtr->saveRes = START_SAVE_INACTIVE;
            PrintStartMenuQuestFlavorText();
            PrintStartMenuHelpBottomText();

            task->func = Task_HandleStartMenuInput;
        }
    }
}

static void Task_BeginSave(u8 taskId)
{
    IncrementGameStat(GAME_STAT_SAVED_GAME);

    sStartMenuDataPtr->saveRes = START_SAVE_IN_PROGRESS;
    PrintStartMenuQuestFlavorText();
    PrintStartMenuHelpBottomText();

    u8 saveStatus = TrySavingData(SAVE_NORMAL);
    if (saveStatus == SAVE_STATUS_OK)
        sStartMenuDataPtr->saveRes = START_SAVE_SUCCESS;
    else
        sStartMenuDataPtr->saveRes = START_SAVE_FAILURE;

    PrintStartMenuQuestFlavorText();
    PrintStartMenuHelpBottomText();

    gTasks[taskId].tTimer = 60;
    gTasks[taskId].func = Task_FinishSave;
}

#undef tTimer

static void RestoreStartMenuNormalMode(void)
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
        enum StartMenuApps a = GetAppFromIndex(i);

        s = &gSprites[spriteIds[aIcon]];
        StartSpriteAnim(s, a);
        s->x2 = GET_APP_GRID_X(i & (NUM_START_APP_GRID_ROWS - 1));
        s->y2 = GET_APP_GRID_Y((i & NUM_START_APP_GRID_ROWS) >> 3);
        s->callback = SpriteCallbackDummy;
        s->subpriority = 2;
        if (s->data[0])
        {
            s->y += 2;
            s->data[0] = FALSE;
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

        s->x2 = GET_APP_GRID_X(i & (NUM_START_APP_GRID_ROWS - 1));
        s->y2 = GET_APP_GRID_Y((i & NUM_START_APP_GRID_ROWS) >> 3);
        s->oam.objMode = ST_OAM_OBJ_BLEND;
        if (a)
            s->invisible = FALSE;
        else
            s->invisible = TRUE;
    }

    sStartMenuDataPtr->movingAppIdx = NUM_START_APPS;
    sStartMenuDataPtr->mode = START_MODE_NORMAL;

    PrintStartMenuAppTitleText();
}

static bool32 SwapApps(void)
{
    u32 idx1 = sStartMenuDataPtr->movingAppIdx;
    u32 app1 = GetAppFromIndex(idx1);

    u32 idx2 = GetAppGridCurrentIndex();
    u32 app2 = GetAppFromIndex(idx2);

    if (app1 == app2)
        return FALSE;

    gSaveBlock3Ptr->startMenuAppIndex[idx2] = app1;
    gSaveBlock3Ptr->startMenuAppIndex[idx1] = app2;

    return TRUE;
}

static void HandleAppGridMoveInputs(u8 taskId)
{
    if (JOY_NEW(A_BUTTON))
    {
        if (!SwapApps())
        {
            PlaySE(SE_BOO);
            return;
        }

        RestoreStartMenuNormalMode();
        return;
    }

    if (JOY_NEW(B_BUTTON))
    {
        RestoreStartMenuNormalMode();
        return;
    }
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
    EnableInterrupts(INTR_FLAG_VBLANK);
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
}

static void SetupStartMenuMainSprites(void)
{
    SetupStartMenuMainAppSprites();
    SetupStartMenuMainPartyMonSprites();
    SetupStartMenuMainDaycareMonSprites();
}

static void SetupStartMenuMainAppSprites(void)
{
    u8 *spriteIds = sStartMenuDataPtr->spriteIds;
    const struct SpriteTemplate *template = &sStartMenuAppCursorSprite;
    struct Sprite *sprite = NULL;

    spriteIds[START_MAIN_SPRITE_APP_CURSOR] = CreateSprite(template, 27 + 16, 64 + 16, 1);
    sprite = &gSprites[spriteIds[START_MAIN_SPRITE_APP_CURSOR]];

    StartSpriteAnim(sprite, START_CURSOR_NORMAL);
    sprite->x2 = GET_APP_GRID_X(GetAppGridCurrentColumn());
    sprite->y2 = GET_APP_GRID_Y(GetAppGridCurrentRow());

    template = &sStartMenuAppSprite;
    enum StartMenuMainSprites aIcon = START_MAIN_SPRITE_APP_ICONS, aBg = START_MAIN_SPRITE_APP_BGS;
    for (u32 i = 0; i < TOTAL_START_APPS; i++, aIcon++, aBg++)
    {
        enum StartMenuApps a = GetAppFromIndex(i);

        spriteIds[aIcon] = CreateSprite(template, 35 + 8, 72 + 8, 2);
        sprite = &gSprites[spriteIds[aIcon]];
        StartSpriteAnim(sprite, a);
        sprite->x2 = GET_APP_GRID_X(i & (NUM_START_APP_GRID_ROWS - 1));
        sprite->y2 = GET_APP_GRID_Y((i & NUM_START_APP_GRID_ROWS) >> 3);
        if (!a)
            sprite->invisible = TRUE;

        spriteIds[aBg] = CreateSprite(template, 35 + 8, 72 + 8, 3);
        sprite = &gSprites[spriteIds[aBg]];
        if (!a)
            StartSpriteAnim(sprite, START_APP_NONE);
        else
            StartSpriteAnim(sprite, START_APP_BACKGROUNDS);

        sprite->x2 = GET_APP_GRID_X(i & (NUM_START_APP_GRID_ROWS - 1));
        sprite->y2 = GET_APP_GRID_Y((i & NUM_START_APP_GRID_ROWS) >> 3);
        sprite->oam.objMode = ST_OAM_OBJ_BLEND;
        if (!a)
            sprite->invisible = TRUE;
    }
}

static void SetupStartMenuMainPartyMonSprites(void)
{
    u8 *spriteIds = sStartMenuDataPtr->spriteIds;
    struct Pokemon *mon = gPlayerParty;
    struct Sprite *sprite = NULL;
    u32 species, healthPercentage, status;
    bool32 isEgg;

    if (!gPlayerPartyCount)
        return;

    for (u32 i = 0; i < gPlayerPartyCount; i++)
    {
        species = GetMonData(&mon[i], MON_DATA_SPECIES_OR_EGG), healthPercentage = GetMonHealthPercentage(&mon[i]);
        isEgg = (species == SPECIES_EGG);
        species = ReturnTransformationIfConditionMet(&mon[i]);
        status = GetMonData(&mon[i], MON_DATA_STATUS);

        LoadMonIconPalette(species);
        spriteIds[START_MAIN_SPRITE_MON_ICONS + i] =
            CreateMonIcon(species, GetSpriteCallbackForIcon(healthPercentage, isEgg),
                          1 + 16, 104 + 16, 0, GetMonData(&mon[i], MON_DATA_PERSONALITY));

        sprite = &gSprites[spriteIds[START_MAIN_SPRITE_MON_ICONS + i]];
        sprite->subpriority = 3;
        sprite->oam.priority = 0;
        sprite->x2 = GET_MON_GRID_X(i);
        sprite->y2 = GET_MON_GRID_Y(i);

        spriteIds[START_MAIN_SPRITE_MON_PLATFORMS + i] =
            CreateSprite(&sStartMenuMonPlatformSprite, 1 + 16, 128 + 8, 2);

        sprite = &gSprites[spriteIds[START_MAIN_SPRITE_MON_PLATFORMS + i]];
        sprite->x2 = GET_MON_GRID_X(i);
        sprite->y2 = GET_MON_GRID_Y(i);

        if (isEgg)
            continue;

        spriteIds[START_MAIN_SPRITE_MON_STATUS + i] =
            CreateSprite(&sStartMenuMonStatusSprite, (((status & STATUS1_ANY) || !healthPercentage) ? 4 : 0) + 16,
                         130 + 4, 0);

        sprite = &gSprites[spriteIds[START_MAIN_SPRITE_MON_STATUS + i]];
        InjectMonStatusGraphics(sprite, status, healthPercentage);
        sprite->x2 = GET_MON_GRID_X(i);
        sprite->y2 = GET_MON_GRID_Y(i);
    }
}

static void SetupStartMenuMainDaycareMonSprites(void)
{
    u8 *spriteIds = sStartMenuDataPtr->spriteIds;
    struct DayCare *daycare = &gSaveBlock1Ptr->daycare;
    struct BoxPokemon *mon = NULL;
    struct Sprite *sprite = NULL;
    u32 i, species, item, numEggs, numMons = CountPokemonInDaycare(daycare);

    if (!numMons)
        return;

    for (i = 0, numEggs = 0; i < SILICON_DAYCARE_EGG_MAX; i++)
    {
        if (GetBoxMonData(&daycare->daycareEgg[i].egg, MON_DATA_IS_EGG))
            numEggs++;
    }

    AllocItemIconTemporaryBuffers();

    // no eggs here!!
    for (i = 0; i < numMons; i++)
    {
        #define GET_DAYCARE_GRID_X(i) (i * 32)
        #define START_DAYCARE_MON_X 175

        mon = &daycare->mons[i].mon;
        species = GetBoxMonData(mon, MON_DATA_SPECIES);

        LoadMonIconPalette(species);
        spriteIds[START_MAIN_SPRITE_MON_ICONS + PARTY_SIZE + i] =
            CreateMonIcon(species, SpriteCB_MonIcon, START_DAYCARE_MON_X + 16, 104 + 16, i * 2,
                          GetBoxMonData(mon, MON_DATA_PERSONALITY));

        sprite = &gSprites[spriteIds[START_MAIN_SPRITE_MON_ICONS + PARTY_SIZE + i]];
        sprite->subpriority = 0;
        sprite->oam.priority = 1;
        sprite->x2 = GET_DAYCARE_GRID_X(i);
        sprite->y2 = GET_MON_GRID_Y(i);
        // first mon flips if there's two mons
        if (!i && numMons > 1)
            sprite->hFlip = TRUE;

        spriteIds[START_MAIN_SPRITE_MON_PLATFORMS + PARTY_SIZE + i] =
            CreateSprite(&sStartMenuMonPlatformSprite, START_DAYCARE_MON_X + 16, 129 + 8, 3);

        sprite = &gSprites[spriteIds[START_MAIN_SPRITE_MON_PLATFORMS + PARTY_SIZE + i]];
        StartSpriteAnim(sprite, TRUE);
        sprite->x2 = GET_DAYCARE_GRID_X(i);
        // second mon has v and h flipped platform
        if (i)
        {
            sprite->hFlip = TRUE;
            sprite->vFlip = TRUE;
        }

        item = GetBoxMonData(mon, MON_DATA_HELD_ITEM);
        if (item == ITEM_NONE || item >= ITEMS_COUNT)
            continue;

        spriteIds[START_MAIN_SPRITE_DAYCARE_ITEMS + i] =
            AddCustomItemIconSprite(&sStartMenuDaycareItemSprite, START_TAG_ITEM + i, START_TAG_ITEM + i, item);

        sprite = &gSprites[spriteIds[START_MAIN_SPRITE_DAYCARE_ITEMS + i]];
        sprite->x = (START_DAYCARE_MON_X - 8) + 16;
        sprite->y = 118 + 16;
        sprite->x2 = i * 52;
        sprite->y2 = GET_MON_GRID_Y(i);
    }

    // eggs indicator
    if (numEggs)
    {
        species = SPECIES_EGG;

        LoadMonIconPalette(species);
        spriteIds[START_MAIN_SPRITE_EGG] =
            CreateMonIconNoPersonality(species, SpriteCB_MonIcon, 191 + 16, 109 + 16, 1);
        sprite = &gSprites[spriteIds[START_MAIN_SPRITE_EGG]];
        sprite->oam.priority = 1;
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
    PrintStartMenuHelpTopText();
    PrintStartMenuHelpBottomText();
    PrintStartMenuQuestFlavorText();
    PrintStartMenuAppTitleText();
    PrintStartMenuEggInfo();
}

static void PrintStartMenuHelpTopText(void)
{
    u32 x = 0;
    u8 *strbuf[2];

    strbuf[0] = AllocZeroed(STRBUF_SIZE);
    strbuf[1] = AllocZeroed(STRBUF_SIZE);

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
    Free(strbuf[0]);
    Free(strbuf[1]);
}

// TODO: richer interaction with save overwrite
static void PrintStartMenuHelpBottomText(void)
{
    FillWindowPixelBuffer(START_MAIN_WIN_HELP_BOTTOM, PIXEL_FILL(0));

    // CONTROLS
    const u8 *str = sStartMenuModeControls[sStartMenuDataPtr->mode];

    // SAVE RESULTS
    if (sStartMenuDataPtr->saveRes)
    {
        str = sStartMenuSaveResultControls[sStartMenuDataPtr->saveRes];
        if (!str)
            str = sStartMenuSaveResultControls[START_SAVE_IN_PROGRESS];
    }

    PrintStartMenuText(START_MAIN_WIN_HELP_BOTTOM, FONT_SMALL, START_MAIN_WIN_HELP_WIDTH, 0, Y_CENTER_ALIGN, str);

    CopyWindowToVram(START_MAIN_WIN_HELP_BOTTOM, COPYWIN_FULL);
}

static u32 GetQuestFlavorForStartMenu(void)
{
    u32 i, questFlavor = QUEST_COUNT;

    // baffled this is the only way this loop works
    for (i = questFlavor - 1; i-- > 0;)
    {
        if (QuestMenu_GetSetQuestState(i, FLAG_GET_ACTIVE))
            questFlavor = i;
    }

    for (i = 0; i < QUEST_COUNT; i++)
    {
        if (QuestMenu_GetSetQuestState(i, FLAG_GET_FAVORITE)
             && QuestMenu_GetSetQuestState(i, FLAG_GET_ACTIVE))
            questFlavor = i;
    }

    return questFlavor;
}

static void PrintStartMenuQuestFlavorText(void)
{
    FillWindowPixelBuffer(START_MAIN_WIN_TEXTBOX, PIXEL_FILL(0));

    bool32 isStoryNotClear = !FlagGet(FLAG_SYS_GAME_CLEAR);
    u32 questFlavor = GetQuestFlavorForStartMenu();
    u32 inactiveQuests = CountInactiveQuests();

    if (isStoryNotClear)
    {
        StringCopy(gStringVar1, GetQuestDesc_PlayersAdventure());
    }
    else if (questFlavor != QUEST_NONE)
    {
        QuestMenu_UpdateQuestDesc(questFlavor);
    }
    else if (inactiveQuests)
    {
        ConvertIntToDecimalStringN(gStringVar2, inactiveQuests, STR_CONV_MODE_LEFT_ALIGN, 3);
        StringExpandPlaceholders(gStringVar1, COMPOUND_STRING("The Resido region has {STR_VAR_2} more task(s) for you!"));
    }
    else
    {
        StringCopy(gStringVar1, COMPOUND_STRING("You’ve completed everything. Enjoy Pokémon Silicon!"));
    }

    // prioritize saving first, then prioritize mode flavor (if other modes is active)
    if (sStartMenuDataPtr->saveRes != START_SAVE_INACTIVE)
        StringCopy(gStringVar1, sStartMenuSaveResultText[sStartMenuDataPtr->saveRes]);
    else if (sStartMenuDataPtr->mode != START_MODE_NORMAL)
        StringCopy(gStringVar1, sStartMenuModeQuestFlavors[sStartMenuDataPtr->mode]);

    PrintStartMenuText(START_MAIN_WIN_TEXTBOX, FONT_SMALL_NARROW, START_MAIN_WIN_TEXTBOX_WIDTH, 0, 0, gStringVar1);

    CopyWindowToVram(START_MAIN_WIN_TEXTBOX, COPYWIN_FULL);
}

// TODO: richer interaction w/ move mode
static void PrintStartMenuAppTitleText(void)
{
    FillWindowPixelBuffer(START_MAIN_WIN_APP_TITLE, PIXEL_FILL(0));

    enum StartMenuApps app = GetAppFromIndex(GetAppGridCurrentIndex());

    const u8 *str = NULL;
    if (sStartMenuDataPtr->mode == START_MODE_MOVE)
    {
        #define SWAP_APP_WIDTH 78

        _BlitHelpSymbols(START_HELP_SYMBOL_SWAP, START_MAIN_WIN_APP_TITLE, (TILE_TO_PIXELS(START_MAIN_WIN_APP_TITLE_WIDTH) / 2) - 8);

        str = sStartMenuModeAppNames[GetAppFromIndex(sStartMenuDataPtr->movingAppIdx)];
        u32 x = GetStringCenterAlignXOffset(FONT_SMALL, str, SWAP_APP_WIDTH) + 2;
        PrintStartMenuText(START_MAIN_WIN_APP_TITLE, FONT_SMALL, SWAP_APP_WIDTH / 8, x, 0, str);

        if (app == GetAppFromIndex(sStartMenuDataPtr->movingAppIdx))
            str = sStartMenuModeAppNames[START_APP_NONE];
        else
            str = sStartMenuModeAppNames[app];

        x = GetStringCenterAlignXOffset(FONT_SMALL, str, SWAP_APP_WIDTH) + SWAP_APP_WIDTH + 16;
        PrintStartMenuText(START_MAIN_WIN_APP_TITLE, FONT_SMALL, SWAP_APP_WIDTH / 8, x, 0, str);

        #undef SWAP_APP_WIDTH
    }
    else
    {
        if (app)
            str = sStartMenuModeAppNames[app];
        else
            str = gText_Blank; // blank as the app table has 'Free Space'

        PrintStartMenuText(START_MAIN_WIN_APP_TITLE, FONT_SMALL, START_MAIN_WIN_APP_TITLE_WIDTH, X_CENTER_ALIGN, 0, str);
    }

    CopyWindowToVram(START_MAIN_WIN_APP_TITLE, COPYWIN_FULL);
}

static void PrintStartMenuEggInfo(void)
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
                BlitEggInfoSymbols(START_EGG_INFO_SYMBOL_M + gender, i * 24, (i * 4) + 4);
        }

        if (numEggs)
        {
            u32 x, digit;

            digit = numEggs / 10;

            if (digit < 1) // < 10
                x = 12;
            else
                x = 9;

            BlitEggInfoSymbols(START_EGG_INFO_SYMBOL_x, x, 4);
            if (digit < 1)
            {
                BlitEggInfoSymbols(START_EGG_INFO_SYMBOL_0 + numEggs, x + 4, 4);
            }
            else
            {
                // NOTE if SILICON_DAYCARE_EGG_MAX is increased, this needs to be edited
                BlitEggInfoSymbols(START_EGG_INFO_SYMBOL_1, x + 4, 4);
                BlitEggInfoSymbols(START_EGG_INFO_SYMBOL_0, x + 8, 4);
            }
        }
    }

    CopyWindowToVram(START_MAIN_WIN_EGG_INFO, COPYWIN_FULL);
}

static inline void PrintStartMenuText(enum StartMenuMainWindows window, u32 font, u32 desiredWidth, u32 x, u32 y, u8 const *str)
{
    const u8 txtClr[] = {0, 1, 0}; // white

    font = GetFontIdToFit(str, font, 0, TILE_TO_PIXELS(desiredWidth));
    if (x == X_CENTER_ALIGN)
        x = GetStringCenterAlignXOffset(font, str, TILE_TO_PIXELS(desiredWidth));

    AddTextPrinterParameterized4(window, font, x, y, GetFontAttribute(font, FONTATTR_LETTER_SPACING),
                                 GetFontAttribute(font, FONTATTR_LINE_SPACING), txtClr, 0, str);
}

static inline void _BlitHelpSymbols(enum StartMenuHelpSymbols sym, u32 window, u16 x)
{
    BlitBitmapRectToWindow(window, sStartMenuHelpSymbols, sym * 16, 0, 160, 16, x, 0, 16, 16);
}

static inline void BlitHelpSymbols(enum StartMenuHelpSymbols sym, u16 x)
{
    _BlitHelpSymbols(sym, START_MAIN_WIN_HELP_TOP, x);
}

static inline void BlitEggInfoSymbols(enum StartMenuEggInfoSymbols sym, u16 x, u16 y)
{
    BlitBitmapRectToWindow(START_MAIN_WIN_EGG_INFO, sStartMenuDaycareSymbols, sym * 8, 0, 104, 8, x, y, 8, 8);
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
    u32 mapType = GetCurrentMapType();

    if (mapType > MAP_TYPE_SECRET_BASE)
        mapType = (mapType % (MAP_TYPE_SECRET_BASE + 1));

    return sStartSignalsByMapType[mapType] + START_HELP_SYMBOL_SIG_0A;
}

static inline u32 GetMonHealthPercentage(struct Pokemon *mon)
{
    if (!GetMonData(mon, MON_DATA_IS_EGG))
        return ((GetMonData(mon, MON_DATA_HP)) * 100 / (GetMonData(mon, MON_DATA_MAX_HP)));
    else
        return ((GetMonData(mon, MON_DATA_FRIENDSHIP)) * 100 / (gSpeciesInfo[GetMonData(mon, MON_DATA_SPECIES)].eggCycles));
}

static inline void *GetSpriteCallbackForIcon(u32 healthPercentage, bool32 isEgg)
{
    if (((healthPercentage > 20) && isEgg) || !healthPercentage)
        return SpriteCallbackDummy;

    return SpriteCB_MonIcon;
}

static inline u32 ConvertPercentageIntoHpBarFrame(u32 healthPercentage)
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

static inline enum StartMenuMonStatuses ConvertRawStatusIntoMonStatus(u32 status)
{
    switch (status)
    {
    case STATUS1_NONE:
        return START_MON_STATUS_NONE;
    case STATUS1_SLEEP:
        return START_MON_STATUS_SLEEP;
    case STATUS1_POISON:
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

static inline void InjectMonStatusGraphics(struct Sprite *sprite, u32 status, u32 healthPercentage)
{
    struct WindowTemplate template = { .width = 4, .height = 2, .paletteNum = START_PAL_SLOT_TEXT };
    u32 tileNum = TILE_OFFSET_4BPP(sprite->oam.tileNum), window = AddWindow(&template);

    if (!healthPercentage)
        status = START_MON_STATUS_FAINTED;

    BlitBitmapRectToWindow(window, sStartMenuMonStatusSymbols, ConvertRawStatusIntoMonStatus(status) * 8, 0,
                           56, 8, 1, 0, 8, 8);
    BlitBitmapRectToWindow(window, sStartMenuHpBarSymbols, 0, ConvertPercentageIntoHpBarFrame(healthPercentage),
                           16, 80, 9, 0, 16, 8);

    u8 *tileData = (u8 *)GetWindowAttribute(window, WINDOW_TILE_DATA);
    CpuCopy32(tileData, (void *)(OBJ_VRAM0 + tileNum), TILE_OFFSET_4BPP(template.width * template.height));

    RemoveWindow(window);
}

static void FreeStartMenuData(void)
{
    sStartMenuLastCursor = sStartMenuDataPtr->cursor;

    for (enum StartMenuMainSprites i = 0; i < NUM_START_MAIN_SPRITES; i++)
    {
        u8 *spriteIds = sStartMenuDataPtr->spriteIds;
        if (spriteIds[i] == SPRITE_NONE)
            continue;

        struct Sprite *sprite = &gSprites[spriteIds[i]];
        if (i >= START_MAIN_SPRITE_MON_ICONS && i < START_MAIN_SPRITE_MON_ICONS_END)
            FreeAndDestroyMonIconSprite(sprite);
        else
            DestroySprite(sprite);
    }

    FreeMonIconPalettes();
    FreeSpritePaletteByTag(START_TAG_PALETTE);
    for (enum StartMenuTags tag = START_TAG_APP_CURSOR; tag < NUM_START_TAGS; tag++)
        FreeSpriteTilesByTag(tag);

    FreeItemIconTemporaryBuffers();
    FreeAllWindowBuffers();
    TRY_FREE_AND_SET_NULL(sStartMenuDataPtr);
}

void StartMenu_ShowSaveScreen(void)
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

    u32 taskId = CreateTask(Task_OpenUIStartMenu, 0);
    gTasks[taskId].tStartMode = mode;
}

#undef tStartMode
