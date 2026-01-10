#ifndef GUARD_CONSTANTS_UI_MON_SUMMARY_H
#define GUARD_CONSTANTS_UI_MON_SUMMARY_H

#include "task.h"
#include "ui_mon_summary.h"

// macros
#ifndef TILE_TO_PIXELS
#define TILE_TO_PIXELS(t)   ((t) ? (t * 8) : 0)
#define PIXELS_TO_TILES(p)  ((p) ? (p / 8) : 0)
#endif

enum __attribute__((packed)) MonSummaryPages
{
    SUMMARY_PAGE_INFOS,
    SUMMARY_PAGE_STATS,
    SUMMARY_PAGE_MOVES,

    NUM_SUMMARY_PAGES
};

enum MonSummarySetupSteps
{
    SUMMARY_SETUP_RESET,
    SUMMARY_SETUP_MONDATA,
    SUMMARY_SETUP_BACKGROUNDS,
    SUMMARY_SETUP_GRAPHICS,
    SUMMARY_SETUP_WINDOWS,
    SUMMARY_SETUP_SPRITES,
    SUMMARY_SETUP_FADE,
    SUMMARY_SETUP_FINISH
};

enum MonSummaryBackgrounds
{
    SUMMARY_BG_TEXT,        // universal
    SUMMARY_BG_PAGE_TEXT,   // page-only

    // switch between pages on each horizontal dpad presses.
    // there is no animation atm but it is meant to futureproof.
    SUMMARY_BG_PAGE_1,
    SUMMARY_BG_PAGE_2,

    NUM_SUMMARY_BACKGROUNDS
};

enum __attribute__((packed)) MonSummaryPageSlots
{
    SUMMARY_PAGE_SLOT_1,
    SUMMARY_PAGE_SLOT_2,

    NUM_SUMMARY_PAGE_SLOTS
};

// appears regardless of which page
enum __attribute__((packed)) MonSummaryMainWindows
{
    SUMMARY_MAIN_WIN_HEADER,    // refers to the page's name and tab blit
    SUMMARY_MAIN_WIN_HELP_BAR,  // refers to control scheme of specific page/mode
    SUMMARY_MAIN_WIN_PAGE_TEXT,

    NUM_SUMMARY_MAIN_WINDOWS,
    // the rest is dynamic
};

#define TOTAL_SUMMARY_DYNAMIC_SPRITES 5
#define SUMMARY_DYNAMIC_SPRITE_DUMMY { .id = SPRITE_NONE }

enum MonSummaryMainSprites
{
    SUMMARY_MAIN_SPRITE_SHINY_SYMBOL,
    SUMMARY_MAIN_SPRITE_HP_BAR,
    SUMMARY_MAIN_SPRITE_EXP_BAR,
    SUMMARY_MAIN_SPRITE_FRIENDSHIP_BAR,

    // uses its own function to be spawned
    SUMMARY_MAIN_SPRITE_POKEMON,

    NUM_SUMMARY_MAIN_SPRITES
};

// assorted tags for both main and dynamic sprites
enum MonSummarySpriteTags
{
    TAG_SUMMARY_UNIVERSAL_PAL = 0x4000,
    TAG_SUMMARY_SHINY_SYMBOL,
    TAG_SUMMARY_HP_BAR,
    TAG_SUMMARY_EXP_BAR,
    TAG_SUMMARY_FRIENDSHIP_BAR,
    TAG_SUMMARY_POKEMON_SLOT_1,
    TAG_SUMMARY_POKEMON_SLOT_2,
    TAG_SUMMARY_HELD_ITEM,
    TAG_SUMMARY_POKE_BALL,
};

enum MonSummaryHpBarColors
{
    SUMMARY_HP_BAR_CLR_RED,
    SUMMARY_HP_BAR_CLR_YELLOW,
    SUMMARY_HP_BAR_CLR_GREEN,

    NUM_SUMMARY_HP_BAR_CLRS
};

#define tDelay          data[0]

#define sMonIndex       data[0]

#define sTileTag        data[0]
#define sPaletteTag     data[1]

enum __attribute__((packed)) MonSummaryInfosSprites
{
    SUMMARY_INFOS_SPRITE_HELD_ITEM,
    SUMMARY_INFOS_SPRITE_POKE_BALL,
    SUMMARY_INFOS_SPRITE_DESC_CURSOR, // for switching between ability and held item description for the textbox

    NUM_SUMMARY_INFOS_SPRITES
};

// starting positions
#define SUMMARY_INFOS_HEADER_NAME_X             (TILE_TO_PIXELS(8) + 2)
#define SUMMARY_INFOS_HEADER_GENDER_X           (TILE_TO_PIXELS(8) + 65)
#define SUMMARY_INFOS_HEADER_LEVEL_X            SUMMARY_INFOS_HEADER_NAME_X
#define SUMMARY_INFOS_HEADER_STATUS_X           (TILE_TO_PIXELS(8) + 42)
#define SUMMARY_INFOS_HEADER_SHINY_X            (92 + 8)
#define SUMMARY_INFOS_HEADER_HP_BAR_X           (66 + 32)
#define SUMMARY_INFOS_HEADER_EXP_BAR_X          (67)
#define SUMMARY_INFOS_HEADER_FRIENDSHIP_BAR_X   (79)

#define SUMMARY_INFOS_HEADER_NAME_Y             (1)
#define SUMMARY_INFOS_HEADER_GENDER_Y           SUMMARY_INFOS_HEADER_NAME_Y
#define SUMMARY_INFOS_HEADER_LEVEL_Y            (14)
#define SUMMARY_INFOS_HEADER_STATUS_Y           (19)
#define SUMMARY_INFOS_HEADER_SHINY_Y            (18 + 8)
#define SUMMARY_INFOS_HEADER_HP_BAR_Y           (28 + 16)
#define SUMMARY_INFOS_HEADER_EXP_BAR_Y          (44)
#define SUMMARY_INFOS_HEADER_FRIENDSHIP_BAR_Y   (51)

#define SUMMARY_INFOS_GENERAL_X      (TILE_TO_PIXELS(15) + 7)     // type:
#define SUMMARY_INFOS_GENERAL_X2     (TILE_TO_PIXELS(15) + 42)    // elec
#define SUMMARY_INFOS_GENERAL_X3     (TILE_TO_PIXELS(15) + 85)    // fght

#define SUMMARY_INFOS_GENERAL_Y      (TILE_TO_PIXELS( 4) + 1)     // type:
#define SUMMARY_INFOS_GENERAL_Y2     (TILE_TO_PIXELS( 4) + 17)    // ot:
#define SUMMARY_INFOS_GENERAL_Y3     (TILE_TO_PIXELS( 4) + 33)    // id:
#define SUMMARY_INFOS_GENERAL_Y4     (TILE_TO_PIXELS( 4) + 49)    // exp:
#define SUMMARY_INFOS_GENERAL_Y5     (TILE_TO_PIXELS( 4) + 65)    // <nature> <fav flavor>

#define SUMMARY_INFOS_MISC_MON_MARKINGS_X   (55)
#define SUMMARY_INFOS_MISC_ITEM_NAME_X      (32)
#define SUMMARY_INFOS_MISC_ABILITY_NAME_X   (6)
#define SUMMARY_INFOS_MISC_TEXT_BOX_X       (7)
#define SUMMARY_INFOS_MISC_HELD_ITEM_X      (1 + 16)
#define SUMMARY_INFOS_MISC_POKE_BALL_X      (32 + 8)

#define SUMMARY_INFOS_MISC_MON_MARKINGS_Y   (TILE_TO_PIXELS(9) + 0)
#define SUMMARY_INFOS_MISC_ITEM_NAME_Y      (TILE_TO_PIXELS(9) + 7)
#define SUMMARY_INFOS_MISC_ABILITY_NAME_Y   (TILE_TO_PIXELS(9) + 23)
#define SUMMARY_INFOS_MISC_TEXT_BOX_Y       (TILE_TO_PIXELS(14) + 1)
#define SUMMARY_INFOS_MISC_HELD_ITEM_Y      (67 + 16)
#define SUMMARY_INFOS_MISC_POKE_BALL_Y      (64 + 8)

#define SUMMARY_STATS_HEADER_NAME_X             (TILE_TO_PIXELS(4))
#define SUMMARY_STATS_HEADER_GENDER_X           (TILE_TO_PIXELS(4) + (TILE_TO_PIXELS(8) + 2))
#define SUMMARY_STATS_HEADER_LEVEL_X            (TILE_TO_PIXELS(4) + TILE_TO_PIXELS(10))
#define SUMMARY_STATS_HEADER_SHINY_X            (116 + 8)
#define SUMMARY_STATS_HEADER_HP_BAR_X           (32 + 32)
#define SUMMARY_STATS_HEADER_EXP_BAR_X          (34)
#define SUMMARY_STATS_HEADER_FRIENDSHIP_BAR_X   (89)

#define SUMMARY_STATS_HEADER_Y                  (0)
#define SUMMARY_STATS_HEADER_SHINY_Y            (20 + 8)
#define SUMMARY_STATS_HEADER_HP_BAR_Y           (16 + 16)
#define SUMMARY_STATS_HEADER_EXP_BAR_Y          (34)
#define SUMMARY_STATS_HEADER_FRIENDSHIP_BAR_Y   (32)

#define SUMMARY_STATS_GENERAL_NAME_X   (TILE_TO_PIXELS(16) + 1)
#define SUMMARY_STATS_GENERAL_EVS_X    (SUMMARY_STATS_GENERAL_NAME_X + 39)
#define SUMMARY_STATS_GENERAL_IVS_X    (SUMMARY_STATS_GENERAL_EVS_X  + 29)
#define SUMMARY_STATS_GENERAL_STATS_X  (SUMMARY_STATS_GENERAL_IVS_X  + 19)
#define SUMMARY_STATS_GENERAL_NATURE_X (SUMMARY_STATS_GENERAL_NAME_X - (TILE_TO_PIXELS(1) + 1)) // boost

#define SUMMARY_STATS_GENERAL_Y        (TILE_TO_PIXELS(4) + 1)

#define SUMMARY_STATS_MISC_TOTAL_EVS_X      (TILE_TO_PIXELS(4) + 1)
#define SUMMARY_STATS_MISC_ITEM_NAME_X      (TILE_TO_PIXELS(4) - 2)
#define SUMMARY_STATS_MISC_ABILITY_NAME_X   (TILE_TO_PIXELS(1) - 4)
#define SUMMARY_STATS_MISC_HELD_ITEM_X      (SUMMARY_INFOS_MISC_HELD_ITEM_X)

#define SUMMARY_STATS_MISC_TOTAL_EVS_Y      (TILE_TO_PIXELS(8) + 1)
#define SUMMARY_STATS_MISC_ITEM_NAME_Y      (TILE_TO_PIXELS(10))
#define SUMMARY_STATS_MISC_ABILITY_NAME_Y   (TILE_TO_PIXELS(14) - 2)
#define SUMMARY_STATS_MISC_HELD_ITEM_Y      (SUMMARY_INFOS_MISC_HELD_ITEM_Y + 1)

enum MonSummaryStatsSprites
{
    SUMMARY_STATS_SPRITE_HELD_ITEM,

    NUM_SUMMARY_STATS_SPRITES
};

STATIC_ASSERT(NUM_SUMMARY_INFOS_SPRITES < TOTAL_SUMMARY_DYNAMIC_SPRITES, InfoPageDynamicSpriteExceedsMaxNumber);
STATIC_ASSERT(NUM_SUMMARY_STATS_SPRITES < TOTAL_SUMMARY_DYNAMIC_SPRITES, StatPageDynamicSpriteExceedsMaxNumber);
//STATIC_ASSERT(NUM_SUMMARY_MOVES_SPRITES < TOTAL_SUMMARY_DYNAMIC_SPRITES, MovePageDynamicSpriteExceedsMaxNumber);

enum MonSummaryFontColors
{
    SUMMARY_FNTCLR_INTERFACE,
    SUMMARY_FNTCLR_MALE,
    SUMMARY_FNTCLR_FEMALE,
    SUMMARY_FNTCLR_HELP_BAR,

    NUM_SUMMARY_FNTCLRS,

    SUMMARY_FNTCLR_NEU_STAT = SUMMARY_FNTCLR_INTERFACE, // neutral/no boost
    SUMMARY_FNTCLR_POS_STAT = SUMMARY_FNTCLR_FEMALE,    // positive boost
    SUMMARY_FNTCLR_NEG_STAT = SUMMARY_FNTCLR_MALE,      // negative boost
};

enum __attribute__((packed)) MonSummaryReloadModes
{
    SUMMARY_RELOAD_NONE,
    SUMMARY_RELOAD_MON,
    SUMMARY_RELOAD_PAGE,

    NUM_SUMMARY_RELOADS
};

#define SUMMARY_MON_LIKED_FLAVOR    0
#define SUMMARY_MON_DISLIKED_FLAVOR 1
#define TOTAL_MON_NATURE_FLAVORS    2

#define SUMMARY_STATS_FLAG_NAME  (1 << 0) // HP
#define SUMMARY_STATS_FLAG_EVS   (1 << 1) // XXX
#define SUMMARY_STATS_FLAG_IVS   (1 << 2) // XX
#define SUMMARY_STATS_FLAG_STATS (1 << 3) // XXXX
#define SUMMARY_STATS_FLAG_ALL   (SUMMARY_STATS_FLAG_NAME | SUMMARY_STATS_FLAG_EVS | SUMMARY_STATS_FLAG_IVS | SUMMARY_STATS_FLAG_STATS)

// structs

// contains MonData of the current pokemon (list.mons/boxMons[currId])
// that are often needed for the interface, to avoid too many GetMonData
struct MonSummary
{
    u16 species;
    u16 species2;
    u8 isEgg:1;
    u8 isShiny:1;
    u8 abilityNum:1;
    u8 markings:4;
    u8 padding:1;
    u8 level;
    u8 ribbonCount;
    u8 ailment;
    metloc_u8_t metLocation;
    u8 metLevel;
    u8 metGame;
    u32 personality;
    u32 exp;
    u16 moves[MAX_MON_MOVES];
    u8 pp[MAX_MON_MOVES];
    u16 currHp;
    u16 stats[NUM_STATS];
    u16 item;
    u16 friendship;
    u8 trainerGender;
    u8 nature;
    u8 ppBonuses;
    u8 sanity;
    u8 trainerName[17];
    u32 trainerId;
    u8 mintNature;

    u8 ivs[NUM_STATS];
    u8 evs[NUM_STATS];
    u8 gender;
    u8 nickname[POKEMON_NAME_LENGTH + 1];
    enum PokeBall ball;
    u8 flavors[TOTAL_MON_NATURE_FLAVORS];
};

struct MonSummaryResources
{
    MainCallback savedCallback;
    u8 *tilemapBufs[NUM_SUMMARY_PAGE_SLOTS];
    u8 spriteIds[NUM_SUMMARY_MAIN_SPRITES + TOTAL_SUMMARY_DYNAMIC_SPRITES];

    bool32 pageSlot:1; // only referred for tilemapBufs shenanigans
    u32 currIdx:8; // also used as the vertical "cursor" for switching between each available mon(s)
    u32 totalIdx:8;
    u32 useBoxMon:1;
    u32 subMode:1; // mode within current page
    u32 pad:13;

    // set when opening, usually help determines where to get a mon info.
    enum MonSummaryModes mode;

    // set when pressing horizontal dpads, determines what information to
    // load that the player wants.
    enum MonSummaryPages page;

    union {
        struct Pokemon *mons;
        struct BoxPokemon *boxMons;
    } list;
    struct Pokemon *mon;
    struct MonSummary summary;
};

struct MonSummaryDynamicWindow
{
    u8 id;
    u8 left, top;
    u8 width, height;
};

// x/y position is set manually by wrapper functions
struct MonSummarySprite
{
    u8 id;
    u16 tileTag;
    const u32 *gfx;
    const struct SubspriteTable *subsprites;
    const struct OamData *oam;
    const union AnimCmd *const *anims;
    SpriteCallback callback;
};

// not to be confused with infos page!
struct MonSummaryPageInfo
{
    const u8 *name;
    const u32 *tilemap;
    struct Coords8 mainSpriteCoords[NUM_SUMMARY_MAIN_SPRITES];
    struct UCoords8 textBoxCoords;
    TaskFunc input;
    void (*handleFrontEnd)(void);
    void (*handleTextBox)(void);
    void (*handleHelpBar)(void);
};

#endif // GUARD_CONSTANTS_UI_MON_SUMMARY_H
