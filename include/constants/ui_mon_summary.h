#ifndef GUARD_CONSTANTS_UI_MON_SUMMARY_H
#define GUARD_CONSTANTS_UI_MON_SUMMARY_H

#include "task.h"

enum __attribute__((packed)) MonSummaryModes
{
    MON_SUMMARY_MODE_DEFAULT,
    MON_SUMMARY_MODE_BOX,
    MON_SUMMARY_MODE_BATTLE,
    MON_SUMMARY_MODE_IV_TRAIN,

    NUM_MON_SUMMARY_MODES
};

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
    MON_SUMMARY_MAIN_WIN_HEADER,
    MON_SUMMARY_MAIN_WIN_HELP_BAR,

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

// task/sprite data
#define tSpecificInputPress     data[15]

// structs
struct MonSummaryResources
{
    MainCallback savedCallback;
    u8 *tilemapBufs[NUM_MON_SUMMARY_BG_PAGE_SLOTS];
    u8 windowIds[TOTAL_MON_SUMMARY_DYNAMIC_WINDOWS];

    bool32 pageSlot:1; // only referred for tilemapBufs shenanigans
    u32 pad:31;

    // set when opening, usually help determines where to get a mon info.
    enum MonSummaryModes mode;

    // set when pressing horizontal dpads, determines what information to
    // load that the player wants.
    enum MonSummaryPages page;
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
    struct MonSummaryDynamicWindow windows[TOTAL_MON_SUMMARY_DYNAMIC_WINDOWS];
    const u32 *tilemap;
    TaskFunc input;
};

#endif // GUARD_CONSTANTS_UI_MON_SUMMARY_H
