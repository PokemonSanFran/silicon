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

enum MoveReminderSetupSteps
{
    MREMINDER_SETUP_RESET,
    MREMINDER_SETUP_MONDATA,
    MREMINDER_SETUP_LEARNSET,
    MREMINDER_SETUP_BACKGROUNDS,
    MREMINDER_SETUP_GRAPHICS,
    MREMINDER_SETUP_WINDOWS,
    MREMINDER_SETUP_SPRITES,
    MREMINDER_SETUP_FADE,
    MREMINDER_SETUP_FINISH
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
    MREMINDER_TXTCLR_HELP_BAR,

    NUM_MREMINDER_TXTCLRS
};

enum MoveReminderMethod
{
    MREMINDER_METHOD_LEVEL_UP,
    MREMINDER_METHOD_EGG,
    MREMINDER_METHOD_MACHINE,
    MREMINDER_METHOD_LEVEL_EGG,
    MREMINDER_METHOD_LEVEL_MACHINE,
    MREMINDER_METHOD_EGG_MACHINE,
    MREMINDER_METHOD_ALL,
};

struct MoveReminderLearnset
{
    u16 move:13;
    enum MoveReminderMethod method:3;
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

struct MoveReminderResources
{
    enum MoveReminderModes mode;
    enum MoveReminderPages page;
    MainCallback savedCallback;
    struct MoveReminderLearnset learnsets[UI_MOVES_COUNT_TOTAL];
    u16 numMoves;
    u8 *tilemapBufs[NUM_MREMINDER_BACKGROUND_BUFFERS];
    union {
        struct Pokemon *mon;
        struct BoxPokemon *boxMon;
    } ptr;
    struct MoveReminderMon mon;
    u8 useBoxMon:1;
    u8 moveSlot:7;
};

typedef void (*UpdateFrontEndFunc)(void);

struct MoveReminderPageInfo
{
    const u32 *tilemap;
    const u8 *helpBarStr;
    UpdateFrontEndFunc updateFrontEndFunc;
};

#endif // GUARD_CONSTANTS_UI_MOVE_REMINDER_H
