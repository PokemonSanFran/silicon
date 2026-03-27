#ifndef GUARD_CONSTANTS_UI_MOVE_REMINDER_H
#define GUARD_CONSTANTS_UI_MOVE_REMINDER_H

enum MoveReminderPages
{
    MREMINDER_PAGE_MAIN,
    MREMINDER_PAGE_FILTER,

    NUM_MREMINDER_PAGES
};

#ifndef TILE_TO_PIXELS
#define TILE_TO_PIXELS(t) (t ? (t * 8) : 0)
#define PIXEL_TO_TILES(p) (p ? (p / 8) : 0)
#endif

#define MREMINDER_HELPBAR_FOOTER_X      (10)
#define MREMINDER_HELPBAR_FOOTER_Y      (1)

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

#define PAGE_MAIN_MOVES_LIST_TITLE_X    ()
#define PAGE_MAIN_MOVES_LIST_FILTER_X   ()
#define PAGE_MAIN_MOVES_LIST_TITLE_Y    ()
#define PAGE_MAIN_MOVES_LIST_FILTER_Y   ()

#define PAGE_MAIN_MOVE_BAR_X            (TILE_TO_PIXELS(17) + 3)
#define PAGE_MAIN_MOVE_BAR_NAME_X       (TILE_TO_PIXELS(18) - 2)
#define PAGE_MAIN_MOVE_BAR_TYPE_X       (TILE_TO_PIXELS(28) - 1)
#define PAGE_MAIN_MOVE_BAR_Y            (TILE_TO_PIXELS(2))
#define PAGE_MAIN_MOVE_BAR_SPACER_Y     (PAGE_MAIN_MOVE_BAR_Y)
#define PAGE_MAIN_MOVE_BAR_NAME_Y       (PAGE_MAIN_MOVE_BAR_Y - 1)
#define PAGE_MAIN_MOVE_BAR_TYPE_Y       (PAGE_MAIN_MOVE_BAR_Y)

#define PAGE_MAIN_MOVE_DETAILS_1_X      () // PP,  PWR
#define PAGE_MAIN_MOVE_DETAILS_2_X      () // CAT, ACC
#define PAGE_MAIN_MOVE_DETAILS_DESC_X   ()
#define PAGE_MAIN_MOVE_DETAILS_1_Y      () // PP,  CAT
#define PAGE_MAIN_MOVE_DETAILS_2_Y      () // PWR, ACC
#define PAGE_MAIN_MOVE_DETAILS_DESC_Y   ()

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
#define sMoveBar_Idx            data[0]

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

enum MoveReminderMethods
{
    MREMINDER_METHOD_LEVEL_UP,
    MREMINDER_METHOD_EGG,
    MREMINDER_METHOD_MACHINE,

    MREMINDER_METHOD_ALL
};

enum MoveReminderSort
{
    MREMINDER_SORT_DEFAULT,
    MREMINDER_SORT_MOVE_ID,
    MREMINDER_SORT_ALPHABETICAL,
    MREMINDER_SORT_PP,
    MREMINDER_SORT_ACCURACY,
    MREMINDER_SORT_BASE_POWER,

    NUM_MREMINDER_SORTS
};

#define MREMINDER_INPUT_INC     (1)
#define MREMINDER_INPUT_DEC     (-1)
// i < count
#define MREMINDER_INPUT_PM_1    (1)
#define MREMINDER_INPUT_PM_5    (4)

typedef void (*UpdateFrontEndFunc)(void);
typedef void (*SortListFunc)(u32 *);
typedef void (*HandleInputFunc)(u8);

struct MoveReminderLearnset
{
    u16 move:13;
    enum MoveReminderMethods method:3;
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
    enum MoveReminderPages page;
    MainCallback savedCallback;
    struct MoveReminderLearnset learnsets[UI_MOVES_COUNT_TOTAL + 1];// ALL moves a pokemon can learn + denominator
    u16 movesList[UI_MOVES_COUNT_TOTAL];                            // what's actually possible to learn, e.g. have certain TM to be available
    u16 numMoves;
    union {
        u32 value;
        struct PACKED {
            u32 currIdx:10;     // 512
            u32 firstIdx:10;    //
            u32 gridIdx:3;      // MAX_MREMINDER_BAR_SPRITES
            u32 pad:12;
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

struct MoveReminderPageInfo
{
    const u32 *tilemap;
    const u8 *helpBarStr;
    UpdateFrontEndFunc updateFrontEndFunc;
    HandleInputFunc handleInputFunc;
};

#endif // GUARD_CONSTANTS_UI_MOVE_REMINDER_H
