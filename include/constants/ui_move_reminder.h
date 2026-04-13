#ifndef GUARD_CONSTANTS_UI_MOVE_REMINDER_H
#define GUARD_CONSTANTS_UI_MOVE_REMINDER_H

enum PageInterfaces
{
    PAGE_INTERFACE_MAIN,
    PAGE_INTERFACE_FILTER,

    NUM_PAGE_INTERFACES
};

enum SubPageInterfaces
{
    // PAGE_INTERFACE_MAIN
    SUBPAGE_INTERFACE_MAIN_DEFAULT = 0,
    SUBPAGE_INTERFACE_MAIN_CHOOSE_MOVE,
    SUBPAGE_INTERFACE_MAIN_CONFIRM_TEACH,
    SUBPAGE_INTERFACE_MAIN_CANCEL_TEACH,

    // PAGE_INTERFACE_FILTER
    SUBPAGE_INTERFACE_FILTER_DEFAULT = 0,

    NUM_SUBPAGE_INTERFACES = 5
};

#ifndef TILE_TO_PIXELS
#define TILE_TO_PIXELS(t) (t ? (t * 8) : 0)
#define PIXEL_TO_TILES(p) (p ? (p / 8) : 0)
#endif

#define HELPBAR_FOOTER_X      (10)
#define HELPBAR_FOOTER_Y      (TILE_TO_PIXELS(18) + 1)

#define PAGE_MAIN_HEADER_NAME_X         (2)
#define PAGE_MAIN_HEADER_GENDER_X       (66)
#define PAGE_MAIN_HEADER_LEVEL_X        (82)
#define PAGE_MAIN_HEADER_Y              (0)

#define PAGE_MAIN_STATS_1_NAME_X        (TILE_TO_PIXELS(1) - 6)     // HP, ATK, DEF
#define PAGE_MAIN_STATS_1_VALUE_X       (TILE_TO_PIXELS(4) - 3)     // -> values
#define PAGE_MAIN_STATS_2_NAME_X        (TILE_TO_PIXELS(7) - 2)     // SPATK, SPDEF
#define PAGE_MAIN_STATS_2_VALUE_X       (TILE_TO_PIXELS(12) - 4)    // -> values
#define PAGE_MAIN_STATS_3_NAME_X        (PAGE_MAIN_STATS_2_NAME_X)  // SPEED
#define PAGE_MAIN_STATS_3_VALUE_X       (TILE_TO_PIXELS(10) - 1)    // -> values
#define PAGE_MAIN_STATS_1_Y             (TILE_TO_PIXELS(2) - 2)     // HP,  SPATK
#define PAGE_MAIN_STATS_2_Y             (TILE_TO_PIXELS(4) - 2)     // ATK, SPDEF
#define PAGE_MAIN_STATS_3_Y             (TILE_TO_PIXELS(6) - 2)     // DEF, SPEED

#define PAGE_MAIN_MOVES_LIST_TITLE_X    (TILE_TO_PIXELS(20) - 3)
#define PAGE_MAIN_MOVES_LIST_FILTER_X   (TILE_TO_PIXELS(17))
#define PAGE_MAIN_MOVES_LIST_TITLE_Y    (0)
#define PAGE_MAIN_MOVES_LIST_FILTER_Y   (PAGE_MAIN_MOVES_LIST_TITLE_Y)

#define PAGE_MAIN_MOVE_BAR_X            (TILE_TO_PIXELS(17) + 3)
#define PAGE_MAIN_MOVE_BAR_ARROWS_X     ((TILE_TO_PIXELS(15) + 4) + 8)
#define PAGE_MAIN_MOVE_BAR_NAME_X       (TILE_TO_PIXELS(18) - 2)
#define PAGE_MAIN_MOVE_BAR_TYPE_X       (TILE_TO_PIXELS(28) - 1)
#define PAGE_MAIN_MOVE_BAR_Y            (TILE_TO_PIXELS(2))
#define PAGE_MAIN_MOVE_BAR_ARROWS_Y     ((TILE_TO_PIXELS(2)) + 8)
#define PAGE_MAIN_MOVE_BAR_SPACER_Y     (PAGE_MAIN_MOVE_BAR_Y)
#define PAGE_MAIN_MOVE_BAR_NAME_Y       (PAGE_MAIN_MOVE_BAR_Y - 1)
#define PAGE_MAIN_MOVE_BAR_TYPE_Y       (PAGE_MAIN_MOVE_BAR_Y)

#define PAGE_MAIN_MOVE_DETAILS_1_X      (3)                      // PP,  CAT
#define PAGE_MAIN_MOVE_DETAILS_2_X      (TILE_TO_PIXELS(7) + 2)  // PWR, ACC
#define PAGE_MAIN_MOVE_DETAILS_CAT_X    (TILE_TO_PIXELS(5) - 3)
#define PAGE_MAIN_MOVE_DETAILS_DESC_X   (TILE_TO_PIXELS(1))
#define PAGE_MAIN_MOVE_DETAILS_1_Y      (TILE_TO_PIXELS(9) + 3)  // PP,  PWR
#define PAGE_MAIN_MOVE_DETAILS_2_Y      (TILE_TO_PIXELS(11) - 2) // CAT, ACC
#define PAGE_MAIN_MOVE_DETAILS_CAT_Y    (TILE_TO_PIXELS(11) + 1)
#define PAGE_MAIN_MOVE_DETAILS_DESC_Y   (TILE_TO_PIXELS(13))

#define PAGE_MAIN_MOVE_DETAILS_PP       (0xFF)

#define PAGE_FILTER_HEADER_X                        (3)
#define PAGE_FILTER_HEADER_MODE_X                   (TILE_TO_PIXELS(22) + 1)
#define PAGE_FILTER_HEADER_Y                        (0)
#define PAGE_FILTER_HEADER_TYPE_Y                   (PAGE_FILTER_HEADER_Y)
#define PAGE_FILTER_HEADER_CLASSIFICATION_Y         (TILE_TO_PIXELS(7) - 2)
#define PAGE_FILTER_HEADER_METHOD_Y                 (TILE_TO_PIXELS(12))

#define PAGE_FILTER_TYPE_X_0                        (TILE_TO_PIXELS(2) - 1)
#define PAGE_FILTER_TYPE_X_1                        (TILE_TO_PIXELS(5))
#define PAGE_FILTER_TYPE_X_2                        (TILE_TO_PIXELS(8) + 2)
#define PAGE_FILTER_TYPE_X_3                        (TILE_TO_PIXELS(11) + 4)
#define PAGE_FILTER_TYPE_X_4                        (TILE_TO_PIXELS(15) - 2)
#define PAGE_FILTER_TYPE_X_5                        (TILE_TO_PIXELS(18) - 1)
#define PAGE_FILTER_TYPE_X_6                        (TILE_TO_PIXELS(21) + 1)
#define PAGE_FILTER_TYPE_X_7                        (TILE_TO_PIXELS(24) + 3)
#define PAGE_FILTER_TYPE_X_8                        (TILE_TO_PIXELS(28) - 3)
#define PAGE_FILTER_TYPE_Y_0                        (TILE_TO_PIXELS(3) - 2)
#define PAGE_FILTER_TYPE_Y_1                        (TILE_TO_PIXELS(5) - 3)

#define PAGE_FILTER_CLASSIFICATION_BASE_X           (TILE_TO_PIXELS(4) + 3)
#define PAGE_FILTER_CLASSIFICATION_BASE_Y           (TILE_TO_PIXELS(9) + 3)
#define PAGE_FILTER_CLASSIFICATION_BASE_PADDING     (TILE_TO_PIXELS(8) + 4)

#define PAGE_FILTER_METHOD_BASE_X                   (TILE_TO_PIXELS(5) + 5)
#define PAGE_FILTER_METHOD_BASE_Y                   (TILE_TO_PIXELS(14) + 3)
#define PAGE_FILTER_METHOD_BASE_PADDING             (TILE_TO_PIXELS(7) + 2)
#define PAGE_FILTER_METHOD_BASE_PADDING2            (TILE_TO_PIXELS(2) - 2) // PAGE_FILTER_METHOD_BASE_PADDING + PAGE_FILTER_METHOD_BASE_PADDING2 = 69 (nice)

#define PAGE_FILTER_OPTION_RESET_X                  (TILE_TO_PIXELS(19) + 4)
#define PAGE_FILTER_OPTION_OK_X                     (TILE_TO_PIXELS(26) + 2)
#define PAGE_FILTER_OPTION_Y                        (TILE_TO_PIXELS(16) + 3)

#define PAGE_FILTER_CURSOR_TYPE_OFFSET_X            (TILE_TO_PIXELS(1) + 3)
#define PAGE_FILTER_CURSOR_CLASSIFICATION_BASE_X    (TILE_TO_PIXELS(3) + 1)
#define PAGE_FILTER_CURSOR_CLASSIFICATION_PADDING   (TILE_TO_PIXELS(8) + 4)
#define PAGE_FILTER_CURSOR_METHOD_EGG_X             (TILE_TO_PIXELS(4) + 3)
#define PAGE_FILTER_CURSOR_METHOD_MACHINE_X         (TILE_TO_PIXELS(12) - 3)
#define PAGE_FILTER_CURSOR_METHOD_LEVEL_X           (TILE_TO_PIXELS(20) + 5)
#define PAGE_FILTER_CURSOR_OPTION_RESET_X           (TILE_TO_PIXELS(18) - 3)
#define PAGE_FILTER_CURSOR_OPTION_OK_X              (TILE_TO_PIXELS(23) + 4)
#define PAGE_FILTER_CURSOR_TYPE_OFFSET_Y            (1)
#define PAGE_FILTER_CURSOR_CLASSIFICATION_Y         (TILE_TO_PIXELS(10) - 3)
#define PAGE_FILTER_CURSOR_METHOD_Y                 (TILE_TO_PIXELS(15) - 3)
#define PAGE_FILTER_CURSOR_OPTION_Y                 (TILE_TO_PIXELS(17) - 3)

enum InitSetupSteps
{
    INIT_SETUP_RESET,
    INIT_SETUP_MONDATA,
    INIT_SETUP_LEARNSET,
    INIT_SETUP_BACKGROUNDS,
    INIT_SETUP_GRAPHICS,
    INIT_SETUP_WINDOWS,
    INIT_SETUP_SPRITES,
    INIT_SETUP_FADE,
    INIT_SETUP_FINISH
};

enum MoveReminderBackgrounds
{
    MREMINDER_BG_TEXT,
    MREMINDER_BG_TILEMAP,

    NUM_MREMINDER_BACKGROUNDS
};

enum MoveReminderBackgroundBuffers
{
    MREMINDER_BGBUF_TILEMAP,

    NUM_MREMINDER_BACKGROUND_BUFFERS
};

#define MAX_MREMINDER_BAR_SPRITES     (5)

enum MoveReminderBarSpriteIds
{
    MREMINDER_BAR_SPRITE_ID_0,
    MREMINDER_BAR_SPRITE_ID_CURSOR = MAX_MREMINDER_BAR_SPRITES,
    NUM_MREMINDER_BAR_SPRITE_IDS,
};

// SpriteCB_MoveBar
#define sMoveBar_Idx                    data[0]

// MainPage_WaitCloseMessage
#define tMainPage_Timer                 data[0]

enum MoveReminderWindows
{
    MREMINDER_WINDOW_MAIN,

    NUM_MREMINDER_WINDOWS
};

enum MoveReminderTextColors
{
    MREMINDER_TXTCLR_DEFAULT,
    MREMINDER_TXTCLR_MALE,
    MREMINDER_TXTCLR_FEMALE,
    MREMINDER_TXTCLR_FILTER = MREMINDER_TXTCLR_FEMALE,
    MREMINDER_TXTCLR_TEXT_BOX,
    MREMINDER_TXTCLR_HELP_BAR,

    NUM_MREMINDER_TXTCLRS
};

enum MoveReminderSpriteTags
{
    MREMINDER_TAG_UNIVERSAL, // uses tiles.png's/summary screen palette
    // move type palettes
    MREMINDER_TAG_TYPE_PAL_1,
    MREMINDER_TAG_TYPE_PAL_2,
    MREMINDER_TAG_TYPE_FILTER,
};

enum MovePoolMethods
{
    MP_METHOD_EGG,
    MP_METHOD_MACHINE,
    MP_METHOD_LEVEL_UP,

    NUM_MP_METHODS
};

enum MovePoolSorts
{
    MOVE_POOL_SORT_BASE_POWER,
    MOVE_POOL_SORT_ACCURACY,
    MOVE_POOL_SORT_PP,
    MOVE_POOL_SORT_NAME,
    MOVE_POOL_SORT_MOVE_ID,
    MOVE_POOL_SORT_DEFAULT,

    NUM_MOVE_POOL_SORTS
};

#define MP_FILTER_FLAG_TYPE     (1 << 0)
#define MP_FILTER_FLAG_CATEGORY (1 << 1)
#define MP_FILTER_FLAG_METHOD   (1 << 2)

#define MREMINDER_INPUT_INC     (1)
#define MREMINDER_INPUT_DEC     (-1)
// i < count
#define MREMINDER_INPUT_PM_1    (1)
#define MREMINDER_INPUT_PM_5    (4)

#define NUM_TYPE_ICONS          (18) // excludes TYPE_NONE, TYPE_MYSTERY, and TYPE_STELLAR. the filter field may include TYPE_MYSTERY but it'll be unused

#define CONFIRMATION_BOX_YES        (0)
#define CONFIRMATION_BOX_NO         (1)
#define CONFIRMATION_BOX_INACTIVE   (2)

#define CONFIRMATION_BOX_X      (TILE_TO_PIXELS(19) + 3)
#define CONFIRMATION_BOX_TEXT_X (TILE_TO_PIXELS(20))
#define CONFIRMATION_BOX_YES_Y  (TILE_TO_PIXELS(13) + 5)
#define CONFIRMATION_BOX_NO_Y   (TILE_TO_PIXELS(15) + 5)
#define CONFIRMATION_BOX_TEXT_Y (TILE_TO_PIXELS(13) + 4)

enum FilterPageGridX
{
    FILTER_GRID_X_0,
    FILTER_GRID_X_1,
    FILTER_GRID_X_2,    // this is what most other filters maximized at, the rest below are for the type filter
    FILTER_GRID_X_3,
    FILTER_GRID_X_4,
    FILTER_GRID_X_5,
    FILTER_GRID_X_6,
    FILTER_GRID_X_7,
    FILTER_GRID_X_8,

    NUM_FILTER_GRID_X,
};

enum FilterPageGridY
{
    FILTER_GRID_Y_TYPE_1,
    FILTER_GRID_Y_TYPE_2,

    FILTER_GRID_Y_CATEGORY,

    FILTER_GRID_Y_METHOD,

    FILTER_GRID_Y_OPTIONS,  // Reset / OK

    MAX_FILTER_GRID_Y = FILTER_GRID_Y_OPTIONS
};

typedef void (*UpdateFrontEndFunc)(void);
typedef void (*MovePoolSortFunc)(u32 *);
typedef void (*HandleInputFunc)(u8);

struct PACKED MovePool
{
    // u16
    u16 move:13;
    u16 method:3;

    // u8
    enum DamageCategory category:3;
    enum Type type:5;
};

struct MovePoolSortInfo
{
    MovePoolSortFunc sortingFunc;
    const u8 *title;
};

struct MoveReminderMon
{
    u16 species;
    u8 nickname[POKEMON_NAME_LENGTH + 1];
    u8 gender;
    u8 level;
    u16 stats[NUM_STATS];
    u16 moves[MAX_MON_MOVES];
    u8 PP[MAX_MON_MOVES];
    u8 remainingPP[MAX_MON_MOVES];
};

struct MoveReminderData
{
    enum MoveReminderModes mode:2;
    enum PageInterfaces page:2;
    enum MovePoolSorts sort:4;

    enum SubPageInterfaces subPage:3;
    u8 useBoxMon:1;
    u8 methodFilter:4;

    MainCallback savedCallback;
    struct MovePool movePool[UI_MOVES_COUNT_TOTAL + 1];     // ALL moves a pokemon can learn + denominator
    u16 movesList[UI_MOVES_COUNT_TOTAL];                    // what's actually possible to learn, e.g. have certain TM to be available

    u32 currListIdx:10;     // 512
    u32 firstListIdx:10;    //
    u32 gridListIdx:3;      // MAX_MREMINDER_BAR_SPRITES
    u32 printingDialogue:1;
    u32 moveSlot:4;
    u32 confirmationBoxRes:2;
    u32 pad:2;

    u32 moveToTeach:12;
    u32 typeFilter:20;      // 1 << TYPE_XXX

    u16 categoryFilter:4;
    u16 numMoves:12;

    struct PACKED {
        u32 typeFilter:20;
        u32 categoryFilter:6;
        u32 methodFilter:6;

        u8 gridX:4;
        u8 gridY:4;
    } filterPage;

    u8 moveBarSpriteIds[NUM_MREMINDER_BAR_SPRITE_IDS];

    struct {
        struct SpriteTemplate template;
        u8 spriteId;
    } typeIcons[NUM_TYPE_ICONS];

    u8 *tilemapBufs[NUM_MREMINDER_BACKGROUND_BUFFERS];
    union {
        void *ptr;
        struct Pokemon *mon;
        struct BoxPokemon *boxMon;
    } target;
    struct MoveReminderMon mon;
};

struct PageInterfaceInfo
{
    const u32 *tilemap;
    const u8 *helpBarStr[NUM_SUBPAGE_INTERFACES];
    UpdateFrontEndFunc updateFrontEndFunc;
    HandleInputFunc handleInputFunc[NUM_SUBPAGE_INTERFACES];
};

#endif // GUARD_CONSTANTS_UI_MOVE_REMINDER_H
