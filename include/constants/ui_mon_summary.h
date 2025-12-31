#ifndef GUARD_CONSTANTS_UI_MON_SUMMARY_H
#define GUARD_CONSTANTS_UI_MON_SUMMARY_H

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
    MON_SUMMARY_BG_PAGE_1,
    MON_SUMMARY_BG_PAGE_2,

    MON_SUMMARY_BG_STATIC, // mostly help bar and background

    NUM_MON_SUMMARY_BACKGROUNDS
};

enum __attribute__((packed)) MonSummaryPageSlots
{
    MON_SUMMARY_BG_PAGE_SLOT_1,
    MON_SUMMARY_BG_PAGE_SLOT_2,

    NUM_MON_SUMMARY_BG_PAGE_SLOTS
};

#define TOTAL_MON_SUMMARY_DYNAMIC_WINDOWS 5
#define MON_SUMMARY_DYNAMIC_WIN_DUMMY { .windowId = WINDOW_NONE }

enum __attribute__((packed)) MonSummaryMainWindowIds
{
    MON_SUMMARY_MAIN_WIN_HEADER,  // appears regardless of which page
    MON_SUMMARY_MAIN_WIN_DYNAMIC, // content is page-dependent

    NUM_MON_SUMMARY_WINS = MON_SUMMARY_MAIN_WIN_DYNAMIC + TOTAL_MON_SUMMARY_DYNAMIC_WINDOWS,
    NUM_MON_SUMMARY_MAIN_WINS = MON_SUMMARY_MAIN_WIN_DYNAMIC,
};

// dynamic windows
enum MonSummaryInfosWindowIds
{
    MON_SUMMARY_INFOS_WIN_TEST,
};

enum MonSummaryStatsWindowIds
{
    MON_SUMMARY_STATS_WIN_TEST,
};

enum MonSummaryMovesWindowIds
{
    MON_SUMMARY_MOVES_WIN_TEST,
};

enum MonSummaryFontColorIds
{
    MON_SUMMARY_FNTCLR_PRIMARY,     // everything else w/ FONT_OUTLINED(_NARROW)
    MON_SUMMARY_FNTCLR_SECONDARY,   // help bar

    NUM_MON_SUMMARY_FNTCLRS
};

struct MonSummaryResources
{
    MainCallback savedCallback;
    u8 *tilemapBufs[NUM_MON_SUMMARY_BG_PAGE_SLOTS];

    bool32 pageSlot:1; // only referred for tilemapBufs shenanigans

    // set when opening, usually help determines where to get a mon info.
    enum MonSummaryModes mode;

    // set when pressing horizontal dpads, determines what information to
    // load that the player wants.
    enum MonSummaryPages page;
};

#endif // GUARD_CONSTANTS_UI_MON_SUMMARY_H
