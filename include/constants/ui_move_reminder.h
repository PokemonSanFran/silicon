#ifndef GUARD_CONSTANTS_UI_MOVE_REMINDER_H
#define GUARD_CONSTANTS_UI_MOVE_REMINDER_H

enum PageInterfaces
{
    PAGE_INTERFACE_MAIN,
    PAGE_INTERFACE_FILTER,

    NUM_PAGE_INTERFACES
};

#ifndef TILE_TO_PIXELS
#define TILE_TO_PIXELS(t) (t ? (t * 8) : 0)
#define PIXEL_TO_TILES(p) (p ? (p / 8) : 0)
#endif

#define HELPBAR_FOOTER_X      (10)
#define HELPBAR_FOOTER_Y      (1)

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
#define PAGE_MAIN_MOVE_BAR_NAME_X       (TILE_TO_PIXELS(18) - 2)
#define PAGE_MAIN_MOVE_BAR_TYPE_X       (TILE_TO_PIXELS(28) - 1)
#define PAGE_MAIN_MOVE_BAR_Y            (TILE_TO_PIXELS(2))
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
#define tMainPage_Timer                 data[15]

// MainPage_ConfirmShouldOverwriteMove
#define tMainPage_ConfirmationValue     data[15]

enum MoveReminderWindows
{
    MREMINDER_WINDOW_MAIN,
    MREMINDER_WINDOW_FOOTER,

    NUM_MREMINDER_WINDOWS
};

enum MoveReminderTextColors
{
    MREMINDER_TXTCLR_DEFAULT,
    MREMINDER_TXTCLR_MALE,
    MREMINDER_TXTCLR_FEMALE,
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
};

enum MovePoolMethods
{
    MP_METHOD_LEVEL_UP,
    MP_METHOD_EGG,
    MP_METHOD_MACHINE,
};

enum MovePoolSorts
{
    MOVE_POOL_SORT_DEFAULT,
    MOVE_POOL_SORT_MOVE_ID,
    MOVE_POOL_SORT_ALPHABETICAL,
    MOVE_POOL_SORT_PP,
    MOVE_POOL_SORT_ACCURACY,
    MOVE_POOL_SORT_BASE_POWER,

    NUM_MOVE_POOL_SORTS
};

#define MREMINDER_INPUT_INC     (1)
#define MREMINDER_INPUT_DEC     (-1)
// i < count
#define MREMINDER_INPUT_PM_1    (1)
#define MREMINDER_INPUT_PM_5    (4)

#define CONFIRMATION_BOX_YES    (0)
#define CONFIRMATION_BOX_NO     (1)

#define CONFIRMATION_BOX_X      (TILE_TO_PIXELS(19) + 3)
#define CONFIRMATION_BOX_TEXT_X (TILE_TO_PIXELS(20))
#define CONFIRMATION_BOX_YES_Y  (TILE_TO_PIXELS(13) + 5)
#define CONFIRMATION_BOX_NO_Y   (TILE_TO_PIXELS(15) + 5)
#define CONFIRMATION_BOX_TEXT_Y (TILE_TO_PIXELS(13) + 4)

typedef void (*UpdateFrontEndFunc)(void);
typedef void (*MovePoolSortFunc)(u32 *);
typedef void (*HandleInputFunc)(u8);

struct MovePool
{
    u16 move:13;
    enum MovePoolMethods method:3;
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
};

struct MoveReminderData
{
    enum MoveReminderModes mode;
    enum PageInterfaces page;
    MainCallback savedCallback;
    struct MovePool movePool[UI_MOVES_COUNT_TOTAL + 1];     // ALL moves a pokemon can learn + denominator
    u16 movesList[UI_MOVES_COUNT_TOTAL];                    // what's actually possible to learn, e.g. have certain TM to be available
    u16 numMoves;
    union {
        u32 value;
        struct PACKED {
            u32 currIdx:10;     // 512
            u32 firstIdx:10;    //
            u32 gridIdx:3;      // MAX_MREMINDER_BAR_SPRITES
            u32 printingDialogue:1;
            u32 pad:11;
        } main;
    } pageData;
    u8 moveBarSpriteIds[NUM_MREMINDER_BAR_SPRITE_IDS];
    u8 *tilemapBufs[NUM_MREMINDER_BACKGROUND_BUFFERS];
    union {
        struct Pokemon *mon;
        struct BoxPokemon *boxMon;
    } ptr;
    struct MoveReminderMon mon;
    u8 useBoxMon:1;
    u8 moveSlot:7;
};

struct PageInterfaceInfo
{
    const u32 *tilemap;
    const u8 *helpBarStr;
    UpdateFrontEndFunc updateFrontEndFunc;
    HandleInputFunc handleInputFunc;
};

#endif // GUARD_CONSTANTS_UI_MOVE_REMINDER_H
