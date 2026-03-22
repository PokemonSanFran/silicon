static const u32 sMoveReminder_Tiles[] = INCBIN_U32("graphics/ui_menus/move_reminder/tiles.4bpp.smol");
static const u16 sMoveReminder_Palette[] = INCBIN_U16("graphics/ui_menus/move_reminder/tiles.gbapal");

static const u8 *const sMoveReminder_StatNames[NUM_STATS] =
{
    [STAT_HP] = COMPOUND_STRING("HP:"),
    [STAT_ATK] = COMPOUND_STRING("ATK:"),
    [STAT_DEF] = COMPOUND_STRING("DEF:"),
    [STAT_SPEED] = COMPOUND_STRING("SPD:"),
    [STAT_SPATK] = COMPOUND_STRING("SPATK:"),
    [STAT_SPDEF] = COMPOUND_STRING("SPDEF:"),
};

static const struct MoveReminderPageInfo sMoveReminder_PagesInfo[NUM_MREMINDER_PAGES] =
{
    [MREMINDER_PAGE_MAIN] =
    {
        .tilemap = (const u32[])INCBIN_U32("graphics/ui_menus/move_reminder/main.bin.smolTM"),
        .helpBarStr = COMPOUND_STRING("{A_BUTTON} Learn {B_BUTTON} Cancel {SELECT_BUTTON} Filter {START_BUTTON} Sort"),
        .updateFrontEndFunc = MainPage_UpdateFrontEnd,
        .handleInputFunc = MainPage_HandleInput,
    },
    [MREMINDER_PAGE_FILTER] =
    {
        .tilemap = (const u32[])INCBIN_U32("graphics/ui_menus/move_reminder/filter.bin.smolTM"),
        .helpBarStr = COMPOUND_STRING("{A_BUTTON} Select {B_BUTTON} Back {SELECT_BUTTON} Filter"),
        .updateFrontEndFunc = FilterPage_UpdateFrontEnd,
        .handleInputFunc = FilterPage_HandleInput,
    },
};

static const SortListFunc sMoveReminder_SortListFuncs[NUM_MREMINDER_SORTS] =
{
    [MREMINDER_SORT_DEFAULT] = MReminderMoves_ProcessDefaultList
};

static const struct BgTemplate sMoveReminderBgTemplates[NUM_MREMINDER_BACKGROUNDS + 1] =
{
    [MREMINDER_BG_TEXT] =
    {
        .bg = MREMINDER_BG_TEXT,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 0
    },
    [MREMINDER_BG_TILEMAP] =
    {
        .bg = MREMINDER_BG_TILEMAP,
        .charBaseIndex = 3,
        .mapBaseIndex = 30,
        .priority = 3
    }
};

static const struct WindowTemplate sMoveReminderWindowTemplates[NUM_MREMINDER_WINDOWS + 1] =
{
    [MREMINDER_WINDOW_MAIN] =
    {
        .bg = MREMINDER_BG_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = DISPLAY_TILE_WIDTH,
        .height = DISPLAY_TILE_HEIGHT - 2,
    },
    [MREMINDER_WINDOW_FOOTER] =
    {
        .bg = MREMINDER_BG_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = DISPLAY_TILE_WIDTH,
        .height = 2,
    },
    DUMMY_WIN_TEMPLATE
};

static const u8 sMoveReminderTextColors[NUM_MREMINDER_TXTCLRS][3] =
{
    [MREMINDER_TXTCLR_DEFAULT]   = { 0, 2, 1 },
    [MREMINDER_TXTCLR_MALE]      = { 0, 2, 15 },
    [MREMINDER_TXTCLR_FEMALE]    = { 0, 2, 12 },
    [MREMINDER_TXTCLR_HELP_BAR]  = { 0, 1, 0 },
    [MREMINDER_TXTCLR_TEXT_BOX]  = { 1, 2, 3 },
};
