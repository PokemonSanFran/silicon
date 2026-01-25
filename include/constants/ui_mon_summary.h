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
    SUMMARY_BG_PAGE_1,

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
    SUMMARY_MAIN_WIN_TEXT_BOX,  // mostly used for errors

    NUM_SUMMARY_MAIN_WINDOWS,
};

#define SUMMARY_TEXT_BOX_BASE_TILE  (0x400 - 18)
#define SUMMARY_TEXT_BOX_PALETTE    (1)

#define TOTAL_SUMMARY_DYNAMIC_SPRITES 12

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
    TAG_SUMMARY_UNIVERSAL_PAL = 0x1000,
    TAG_SUMMARY_SHINY_SYMBOL,
    TAG_SUMMARY_HP_BAR,
    TAG_SUMMARY_EXP_BAR,
    TAG_SUMMARY_FRIENDSHIP_BAR,
    TAG_SUMMARY_POKEMON_SLOT_1,
    TAG_SUMMARY_POKEMON_SLOT_2,
    TAG_SUMMARY_HELD_ITEM_1,
    TAG_SUMMARY_HELD_ITEM_2,
    TAG_SUMMARY_POKE_BALL,
    TAG_SUMMARY_TYPES, // tileTag
    TAG_SUMMARY_TYPE_1, // paletteTag
    TAG_SUMMARY_TYPE_2, //
    // sub menu can have at least 2 cursor sprites
    TAG_SUMMARY_CURSOR_1,
    TAG_SUMMARY_CURSOR_2,
};

enum MonSummaryHpBarColors
{
    SUMMARY_HP_BAR_CLR_RED,
    SUMMARY_HP_BAR_CLR_YELLOW,
    SUMMARY_HP_BAR_CLR_GREEN,

    NUM_SUMMARY_HP_BAR_CLRS
};

#define tDelay          data[0]
#define tUpdateText     data[15]

#define sMonIndex       data[0]

#define sTileTag        data[0]
#define sPaletteTag     data[1]

enum MonSummaryInfosSprites
{
    SUMMARY_INFOS_SPRITE_HELD_ITEM,
    SUMMARY_INFOS_SPRITE_POKE_BALL,
    SUMMARY_INFOS_SPRITE_DESC_CURSOR,       // for switching between ability and held item description for the textbox
    SUMMARY_INFOS_SPRITE_SCROLL_INDICATOR,  // this is a seperate sprite from above to achieve smoother animation

    NUM_SUMMARY_INFOS_SPRITES
};

enum MonSummaryInfosSubModes
{
    SUMMARY_INFOS_SUB_MODE_NONE,
    SUMMARY_INFOS_SUB_MODE_DESC_SWITCH,

    NUM_SUMMARY_INFOS_SUB_MODES
};

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

#define SUMMARY_INFOS_MISC_MON_MARKINGS_X       (55)
#define SUMMARY_INFOS_MISC_ITEM_NAME_X          (32)
#define SUMMARY_INFOS_MISC_ABILITY_NAME_X       (6)
#define SUMMARY_INFOS_MISC_TEXT_BOX_X           (7)
#define SUMMARY_INFOS_MISC_HELD_ITEM_X          (1 + 16)
#define SUMMARY_INFOS_MISC_POKE_BALL_X          (32 + 8)
#define SUMMARY_INFOS_MISC_DESC_CURSOR_X        (0)
#define SUMMARY_INFOS_MISC_SCROLL_INDICATOR_X   (95 + 8)

#define SUMMARY_INFOS_MISC_MON_MARKINGS_Y       (TILE_TO_PIXELS(9) + 0)
#define SUMMARY_INFOS_MISC_ITEM_NAME_Y          (TILE_TO_PIXELS(9) + 7)
#define SUMMARY_INFOS_MISC_ABILITY_NAME_Y       (TILE_TO_PIXELS(9) + 23)
#define SUMMARY_INFOS_MISC_TEXT_BOX_Y           (TILE_TO_PIXELS(14) + 1)
#define SUMMARY_INFOS_MISC_HELD_ITEM_Y          (67 + 16)
#define SUMMARY_INFOS_MISC_POKE_BALL_Y          (64 + 8)
#define SUMMARY_INFOS_MISC_DESC_CURSOR_Y        (96)
#define SUMMARY_INFOS_MISC_SCROLL_INDICATOR_Y   (SUMMARY_INFOS_MISC_DESC_CURSOR_Y + 8)

enum MonSummaryStatsSprites
{
    SUMMARY_STATS_SPRITE_HELD_ITEM,
    SUMMARY_STATS_SPRITE_TYPE_1,
    SUMMARY_STATS_SPRITE_TYPE_2,
    SUMMARY_STATS_SPRITE_STAT_CURSOR,
    SUMMARY_STATS_SPRITE_UP_ARROW,
    SUMMARY_STATS_SPRITE_DOWN_ARROW,

    NUM_SUMMARY_STATS_SPRITES
};

enum MonSummaryStatsSubModes
{
    SUMMARY_STATS_SUB_MODE_NONE,
    SUMMARY_STATS_SUB_MODE_SELECT_ROW,
    SUMMARY_STATS_SUB_MODE_ADJUST_VALUE,
    SUMMARY_STATS_SUB_MODE_ERROR,

    NUM_SUMMARY_STATS_SUB_MODES
};

enum MonSummaryTotalValues
{
    SUMMARY_TOTAL_EVS,
    SUMMARY_TOTAL_IVS,

    NUM_SUMMARY_TOTAL_VALUES
};

#define SUMMARY_STATS_MIN_EVS   (0xFFFE)
#define SUMMARY_STATS_MAX_EVS   (0xFFFF)

#define SUMMARY_STATS_HEADER_NAME_X             (TILE_TO_PIXELS(4))
#define SUMMARY_STATS_HEADER_GENDER_X           (TILE_TO_PIXELS(4) + (TILE_TO_PIXELS(8) + 2))
#define SUMMARY_STATS_HEADER_LEVEL_X            (TILE_TO_PIXELS(4) + TILE_TO_PIXELS(10))
#define SUMMARY_STATS_HEADER_SHINY_X            (116 + 8)
#define SUMMARY_STATS_HEADER_HP_BAR_X           (32 + 32)
#define SUMMARY_STATS_HEADER_EXP_BAR_X          (34)
#define SUMMARY_STATS_HEADER_FRIENDSHIP_BAR_X   (89)
#define SUMMARY_STATS_HEADER_TYPINGS_X          (88 + 8)

#define SUMMARY_STATS_HEADER_Y                  (0)
#define SUMMARY_STATS_HEADER_SHINY_Y            (20 + 8)
#define SUMMARY_STATS_HEADER_HP_BAR_Y           (16 + 16)
#define SUMMARY_STATS_HEADER_EXP_BAR_Y          (34)
#define SUMMARY_STATS_HEADER_FRIENDSHIP_BAR_Y   (32)
#define SUMMARY_STATS_HEADER_TYPINGS_Y          (20 + 8)

#define SUMMARY_STATS_GENERAL_NAME_X   (TILE_TO_PIXELS(16) + 1)
#define SUMMARY_STATS_GENERAL_EVS_X    (SUMMARY_STATS_GENERAL_NAME_X + 39)
#define SUMMARY_STATS_GENERAL_IVS_X    (SUMMARY_STATS_GENERAL_EVS_X  + 29)
#define SUMMARY_STATS_GENERAL_STATS_X  (SUMMARY_STATS_GENERAL_IVS_X  + 19)
#define SUMMARY_STATS_GENERAL_NATURE_X (SUMMARY_STATS_GENERAL_NAME_X - (TILE_TO_PIXELS(1) + 1)) // boost

#define SUMMARY_STATS_GENERAL_Y             (TILE_TO_PIXELS(4) + 4)
#define SUMMARY_STATS_GENERAL_ADDITIVE_Y    (TILE_TO_PIXELS(2) + 3)

#define SUMMARY_STATS_MISC_TOTAL_EVS_X      (TILE_TO_PIXELS(4) + 1)
#define SUMMARY_STATS_MISC_ITEM_NAME_X      (TILE_TO_PIXELS(4) - 2)
#define SUMMARY_STATS_MISC_ABILITY_NAME_X   (TILE_TO_PIXELS(1) - 4)
#define SUMMARY_STATS_MISC_TEXT_BOX_X       (SUMMARY_INFOS_MISC_TEXT_BOX_X)
#define SUMMARY_STATS_MISC_HELD_ITEM_X      (SUMMARY_INFOS_MISC_HELD_ITEM_X)
#define SUMMARY_STATS_MISC_CURSOR_X         (126)
#define SUMMARY_STATS_MISC_UP_ARROW_X       (167 + 8)
#define SUMMARY_STATS_MISC_DOWN_ARROW_X     (SUMMARY_STATS_MISC_UP_ARROW_X)

#define SUMMARY_STATS_MISC_TOTAL_EVS_Y      (TILE_TO_PIXELS(8) + 1)
#define SUMMARY_STATS_MISC_ITEM_NAME_Y      (TILE_TO_PIXELS(10))
#define SUMMARY_STATS_MISC_ABILITY_NAME_Y   (TILE_TO_PIXELS(14) - 2)
#define SUMMARY_STATS_MISC_TEXT_BOX_Y       (TILE_TO_PIXELS(16) + 1)
#define SUMMARY_STATS_MISC_HELD_ITEM_Y      (SUMMARY_INFOS_MISC_HELD_ITEM_Y + 1)
#define SUMMARY_STATS_MISC_CURSOR_Y         (37)
#define SUMMARY_STATS_MISC_UP_ARROW_Y       (30 + 4)
#define SUMMARY_STATS_MISC_DOWN_ARROW_Y     (51 + 4)

enum MonSummaryMovesSprites
{
    SUMMARY_MOVES_SPRITE_TYPE_1,
    SUMMARY_MOVES_SPRITE_TYPE_2,
    SUMMARY_MOVES_SPRITE_MOVE_1,
    SUMMARY_MOVES_SPRITE_MOVE_2,
    SUMMARY_MOVES_SPRITE_MOVE_3,
    SUMMARY_MOVES_SPRITE_MOVE_4,

    SUMMARY_MOVES_SPRITE_SLOT_CURSOR,
    SUMMARY_MOVES_SPRITE_NEW_SLOT_CURSOR,
    SUMMARY_MOVES_SPRITE_OPTION_CURSOR,
    SUMMARY_MOVES_SPRITE_ARROWS,

    NUM_SUMMARY_MOVES_SPRITES
};

enum MonSummaryMovesSubModes
{
    SUMMARY_MOVES_SUB_MODE_NONE,
    SUMMARY_MOVES_SUB_MODE_DETAILS,

    SUMMARY_MOVES_SUB_MODE_OPTIONS,
    SUMMARY_MOVES_SUB_MODE_REORDER,
    SUMMARY_MOVES_SUB_MODE_FORGET,

    NUM_SUMMARY_MOVES_SUB_MODES
};

enum MonSummaryMovesOptions
{
    SUMMARY_MOVES_OPTION_INSPECT,
    SUMMARY_MOVES_OPTION_LEARN,
    SUMMARY_MOVES_OPTION_REORDER,
    SUMMARY_MOVES_OPTION_FORGET,

    NUM_SUMMARY_MOVES_OPTIONS
};

enum MonSummaryMovesForgetStates
{
    // has at least 2 moves
    SUMMARY_MOVES_FORGET_STATE_CONFIRM,
    SUMMARY_MOVES_FORGET_STATE_SUCCESS,

    SUMMARY_MOVES_FORGET_STATE_FAILURE, // has only 1 move
};

enum MonSummaryMovesForgetConfirmation
{
    SUMMARY_MOVES_FORGET_CONFIRM_YES,
    SUMMARY_MOVES_FORGET_CONFIRM_NO,

    NUM_SUMMARY_MOVES_FORGET_CONFIRMS
};

// identical to Stats page
#define SUMMARY_MOVES_HEADER_NAME_X                SUMMARY_STATS_HEADER_NAME_X
#define SUMMARY_MOVES_HEADER_GENDER_X              SUMMARY_STATS_HEADER_GENDER_X
#define SUMMARY_MOVES_HEADER_LEVEL_X               SUMMARY_STATS_HEADER_LEVEL_X
#define SUMMARY_MOVES_HEADER_SHINY_X               SUMMARY_STATS_HEADER_SHINY_X
#define SUMMARY_MOVES_HEADER_HP_BAR_X              SUMMARY_STATS_HEADER_HP_BAR_X
#define SUMMARY_MOVES_HEADER_EXP_BAR_X             SUMMARY_STATS_HEADER_EXP_BAR_X
#define SUMMARY_MOVES_HEADER_FRIENDSHIP_BAR_X      SUMMARY_STATS_HEADER_FRIENDSHIP_BAR_X
#define SUMMARY_MOVES_HEADER_TYPINGS_X             SUMMARY_STATS_HEADER_TYPINGS_X

#define SUMMARY_MOVES_HEADER_Y                     SUMMARY_STATS_HEADER_Y
#define SUMMARY_MOVES_HEADER_SHINY_Y               SUMMARY_STATS_HEADER_SHINY_Y
#define SUMMARY_MOVES_HEADER_HP_BAR_Y              SUMMARY_STATS_HEADER_HP_BAR_Y
#define SUMMARY_MOVES_HEADER_EXP_BAR_Y             SUMMARY_STATS_HEADER_EXP_BAR_Y
#define SUMMARY_MOVES_HEADER_FRIENDSHIP_BAR_Y      SUMMARY_STATS_HEADER_FRIENDSHIP_BAR_Y
#define SUMMARY_MOVES_HEADER_TYPINGS_Y             SUMMARY_STATS_HEADER_TYPINGS_Y

#define SUMMARY_MOVES_GENERAL_SPRITE_BAR_X         (139)
#define SUMMARY_MOVES_GENERAL_NAME_X               (SUMMARY_MOVES_GENERAL_SPRITE_BAR_X + 5)
#define SUMMARY_MOVES_GENERAL_ICON_BLIT_X          (223)
#define SUMMARY_MOVES_GENERAL_ARROWS_X             (124 + 8)

#define SUMMARY_MOVES_GENERAL_Y                    (34)
#define SUMMARY_MOVES_GENERAL_ARROWS_Y             (SUMMARY_MOVES_GENERAL_Y + 8)
#define SUMMARY_MOVES_GENERAL_ADDITIVE_Y           (TILE_TO_PIXELS(2))

#define SUMMARY_MOVES_MISC_NAME_X           (TILE_TO_PIXELS(5) + 3)
#define SUMMARY_MOVES_MISC_VALUE_X          (TILE_TO_PIXELS(9) + 2)
#define SUMMARY_MOVES_MISC_CATEGORY_X       (3)
#define SUMMARY_MOVES_MISC_DESCRIPTION_X    (TILE_TO_PIXELS(1))
#define SUMMARY_MOVES_MISC_VALUE_TEXT_WIDTH (TILE_TO_PIXELS(3) + 2)
#define SUMMARY_MOVES_MISC_OPTION_X         (TILE_TO_PIXELS(2) - 2)
#define SUMMARY_MOVES_MISC_OPTION_CURSOR_X  (TILE_TO_PIXELS(1) + 2)
#define SUMMARY_MOVES_MISC_FORGET_CONFIRM_X (TILE_TO_PIXELS(1) + 2)
#define SUMMARY_MOVES_MISC_CONFIRM_TEXT_X   (SUMMARY_MOVES_MISC_OPTION_X)

#define SUMMARY_MOVES_MISC_POWER_Y          (TILE_TO_PIXELS(4) + 2)
#define SUMMARY_MOVES_MISC_ACCURACY_Y       (TILE_TO_PIXELS(6) + 2)
#define SUMMARY_MOVES_MISC_PP_Y             (TILE_TO_PIXELS(8) + 2)
#define SUMMARY_MOVES_MISC_CATEGORY_Y       (TILE_TO_PIXELS(10))
#define SUMMARY_MOVES_MISC_DESCRIPTION_Y    (TILE_TO_PIXELS(13))
#define SUMMARY_MOVES_MISC_OPTION_Y         (TILE_TO_PIXELS(4))
#define SUMMARY_MOVES_MISC_FORGET_CONFIRM_Y (SUMMARY_MOVES_MISC_OPTION_Y + (SUMMARY_MOVES_GENERAL_ADDITIVE_Y * NUM_SUMMARY_MOVES_FORGET_CONFIRMS))

STATIC_ASSERT(NUM_SUMMARY_INFOS_SPRITES < TOTAL_SUMMARY_DYNAMIC_SPRITES, InfoPageDynamicSpriteExceedsMaxNumber);
STATIC_ASSERT(NUM_SUMMARY_STATS_SPRITES < TOTAL_SUMMARY_DYNAMIC_SPRITES, StatPageDynamicSpriteExceedsMaxNumber);
STATIC_ASSERT(NUM_SUMMARY_MOVES_SPRITES < TOTAL_SUMMARY_DYNAMIC_SPRITES, MovePageDynamicSpriteExceedsMaxNumber);

enum MonSummaryFontColors
{
    SUMMARY_FNTCLR_INTERFACE,
    SUMMARY_FNTCLR_MALE,
    SUMMARY_FNTCLR_FEMALE,
    SUMMARY_FNTCLR_HELP_BAR,
    SUMMARY_FNTCLR_TEXT_BOX,

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
    SUMMARY_RELOAD_FRONT_END,

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

enum MonSummaryGfxManagerIdx
{
    SUMMARY_GFX_MAN_MON = B_POSITION_OPPONENT_LEFT,
    SUMMARY_GFX_MAN_MOVE_BAR = B_POSITION_OPPONENT_RIGHT,
};

// structs

// contains MonData of the current pokemon (list.mons/boxMons[currId])
// that are often needed for the interface, to avoid too many GetMonData
struct MonSummary
{
    u16 species;
    u8 isShiny:1;
    u8 abilityNum:1;
    u8 markings:4;
    u8 padding:2;
    u8 level;
    u8 ailment;
    metloc_u8_t metLocation;
    u8 metLevel;
    u32 personality;
    u32 exp;
    u16 moves[MAX_MON_MOVES];
    u8 pp[MAX_MON_MOVES];
    u16 currHp;
    u16 item;
    u8 friendship;
    u8 nature;
    u8 ppBonuses;
    u8 trainerName[17];
    u32 trainerId;

    u8 totalMoves;
    u16 totalValues[NUM_SUMMARY_TOTAL_VALUES];
    u8 gender;
    u8 nickname[POKEMON_NAME_LENGTH + 1];
    enum PokeBall ball;
    u8 flavors[TOTAL_MON_NATURE_FLAVORS];
};

struct MonSummaryResources
{
    union {
        void *val;
        struct MonSpritesGfxManager *man;   // default
        struct MonSpritesGfx *ptr;          // battle-only
    } gfx;
    MainCallback savedCallback;
    u8 *tilemapBuf;
    u8 spriteIds[NUM_SUMMARY_MAIN_SPRITES + TOTAL_SUMMARY_DYNAMIC_SPRITES];

    bool32 pageSlot:1; // only referred for tilemapBufs shenanigans
    u32 currIdx:8; // also used as the vertical "cursor" for switching between each available mon(s)
    u32 totalIdx:8;
    u32 useBoxMon:1;
    u32 subMode:8; // mode within current page
    u32 updateText:1;
    u32 pad:5;

    // set when opening, usually help determines where to get a mon info.
    enum MonSummaryModes mode;

    // set when pressing horizontal dpads, determines what information to
    // load that the player wants.
    enum MonSummaryPages page;

    union {
        struct Pokemon *mons;
        struct BoxPokemon *boxMons;
    } list;
    struct Pokemon mon;
    struct MonSummary summary;
    struct SpriteFrameImage heldItemImage;

    union {
        u32 value;
        u32 infosDescState;
        struct PACKED {
            u32 row:3;
            u32 totalEvs:10;
            u32 subMode:2;
            u32 pad:17;
        } stats;
        struct PACKED {
            u32 slotIdx:2;
            u32 optionIdx:2;
            u32 newSlotIdx:2; // reorder
            u32 subMode:8;    // backup for reorder
            u32 forgetState:3;
            u32 yesNoIdx:1;
            u32 reorderFail:1;
            u32 forgottenMove:12;
        } moves;
    } arg;
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
    const void *gfx;
    u32 size; // only matters for blitted sprites
    const struct SubspriteTable *subsprites;
    const struct OamData *oam;
    const union AnimCmd *const *anims;
    SpriteCallback callback;
};

// not to be confused with infos page!
struct MonSummaryPageInfo
{
    const u8 *name;
    const u8 *const *helpBar;
    const u32 *tilemap;
    struct Coords8 mainSpriteCoords[NUM_SUMMARY_MAIN_SPRITES];
    TaskFunc input;
    void (*handleFrontEnd)(void);
    void (*handleUpdateText)(void); // only updates certain parts of the page's interface
};

#endif // GUARD_CONSTANTS_UI_MON_SUMMARY_H
