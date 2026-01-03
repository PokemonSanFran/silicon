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
    MON_SUMMARY_PAGE_INFOS,
    MON_SUMMARY_PAGE_STATS,
    MON_SUMMARY_PAGE_MOVES,

    NUM_MON_SUMMARY_PAGES
};

enum __attribute__((packed)) MonSummaryStatsSubMode
{
    MON_SUMMARY_STATS_MODE_EV_TRAIN,

    NUM_MON_SUMMARY_STATS_MODES
};

enum __attribute__((packed)) MonSummaryMovesSubMode
{
    MON_SUMMARY_MOVES_ARRANGE,

    NUM_MON_SUMMARY_MOVES_MODES
};

enum MonSummarySetupSteps
{
    MON_SUMMARY_SETUP_RESET,
    MON_SUMMARY_SETUP_MONDATA,
    MON_SUMMARY_SETUP_BACKGROUNDS,
    MON_SUMMARY_SETUP_GRAPHICS,
    MON_SUMMARY_SETUP_WINDOWS,
    MON_SUMMARY_SETUP_FADE,
    MON_SUMMARY_SETUP_FINISH
};

enum MonSummaryBackgrounds
{
    MON_SUMMARY_BG_TEXT,

    // switch between pages on each horizontal dpad presses.
    // there is no animation atm but it is meant to futureproof.
    MON_SUMMARY_BG_PAGE_1,
    MON_SUMMARY_BG_PAGE_2,

    NUM_MON_SUMMARY_BACKGROUNDS
};

enum __attribute__((packed)) MonSummaryPageSlots
{
    MON_SUMMARY_BG_PAGE_SLOT_1,
    MON_SUMMARY_BG_PAGE_SLOT_2,

    NUM_MON_SUMMARY_BG_PAGE_SLOTS
};

#define TOTAL_MON_SUMMARY_DYNAMIC_WINDOWS 5
#define MON_SUMMARY_DYNAMIC_WIN_DUMMY { .id = WINDOW_NONE }

// appears regardless of which page
enum __attribute__((packed)) MonSummaryMainWindows
{
    MON_SUMMARY_MAIN_WIN_HEADER,    // refers to the page's name and tab blit
    MON_SUMMARY_MAIN_WIN_HELP_BAR,  // refers to control scheme of specific page/mode

    NUM_MON_SUMMARY_MAIN_WINS,
    // the rest is dynamic
};

// dynamic windows
enum __attribute__((packed)) MonSummaryInfosWindows
{
    MON_SUMMARY_INFOS_WIN_TEST,

    NUM_MON_SUMMARY_INFOS_WINDOWS
};

enum __attribute__((packed)) MonSummaryStatsWindows
{
    MON_SUMMARY_STATS_WIN_TEST,

    NUM_MON_SUMMARY_STATS_WINDOWS
};

enum __attribute__((packed)) MonSummaryMovesWindows
{
    MON_SUMMARY_MOVES_WIN_TEST,

    NUM_MON_SUMMARY_MOVES_WINDOWS
};

STATIC_ASSERT(NUM_MON_SUMMARY_INFOS_WINDOWS < TOTAL_MON_SUMMARY_DYNAMIC_WINDOWS, InfoPageDynamicWindowExceedsMaxNumber);
STATIC_ASSERT(NUM_MON_SUMMARY_STATS_WINDOWS < TOTAL_MON_SUMMARY_DYNAMIC_WINDOWS, StatPageDynamicWindowExceedsMaxNumber);
STATIC_ASSERT(NUM_MON_SUMMARY_MOVES_WINDOWS < TOTAL_MON_SUMMARY_DYNAMIC_WINDOWS, MovePageDynamicWindowExceedsMaxNumber);

enum MonSummaryFontColors
{
    MON_SUMMARY_FNTCLR_INTERFACE,
    MON_SUMMARY_FNTCLR_TEXTBOX,
    MON_SUMMARY_FNTCLR_HELP_BAR,

    NUM_MON_SUMMARY_FNTCLRS
};

// structs

// contains MonData of the current pokemon (list.mons/boxMons[currId])
// that are often needed for the interface, to avoid too many GetMonData
struct MonSummary
{
    u16 species;
    u16 species2;
    u8 isEgg:1;
    u8 isShiny:1;
    u8 padding:6;
    u8 level;
    u8 ribbonCount;
    u8 ailment;
    u8 abilityNum;
    metloc_u8_t metLocation;
    u8 metLevel;
    u8 metGame;
    u32 pid;
    u32 exp;
    u16 moves[MAX_MON_MOVES];
    u8 pp[MAX_MON_MOVES];
    u16 currentHP;
    u16 maxHP;
    u16 atk;
    u16 def;
    u16 spAtk;
    u16 spDef;
    u16 spd;
    u16 item;
    u16 friendship;
    u8 trainerGender;
    u8 nature;
    u8 ppBonuses;
    u8 sanity;
    u8 trainerName[17];
    u32 trainerID;
    enum Type teraType;
    u8 mintNature;

    u32 hpIVs:5;
    u32 atkIVs:5;
    u32 defIVs:5;
    u32 spAtkIVs:5;
    u32 spDefIVs:5;
    u32 spdIVs:5;
    u32 pad2:2;

    u8 hpEVs;
    u8 atkEVs;
    u8 defEVs;
    u8 spAtkEVs;
    u8 spDefEVs;
    u8 spdEVs;
};

struct MonSummaryResources
{
    MainCallback savedCallback;
    u8 *tilemapBufs[NUM_MON_SUMMARY_BG_PAGE_SLOTS];
    u8 windowIds[TOTAL_MON_SUMMARY_DYNAMIC_WINDOWS];

    bool32 pageSlot:1; // only referred for tilemapBufs shenanigans
    u32 currIdx:8; // also used as the vertical "cursor" for switching between each available mon(s)
    u32 totalIdx:8;
    u32 useBoxMon:1;
    u32 pad:14;

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

// not to be confused with infos page!
struct MonSummaryPageInfo
{
    const u8 *name;
    struct MonSummaryDynamicWindow windows[TOTAL_MON_SUMMARY_DYNAMIC_WINDOWS];
    const u32 *tilemap;
    TaskFunc input;
};

#endif // GUARD_CONSTANTS_UI_MON_SUMMARY_H
