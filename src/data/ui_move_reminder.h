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
    [MREMINDER_WINDOW_0] =
    {
        .bg = MREMINDER_BG_TEXT,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 16,
        .height = 10,
    },
    DUMMY_WIN_TEMPLATE
};

static const u8 sMoveReminderTextColors[NUM_MREMINDER_TXTCLRS][3] =
{
    [MREMINDER_TXTCLR_DEFAULT]    = { TEXT_COLOR_TRANSPARENT,    TEXT_COLOR_WHITE,      TEXT_COLOR_DARK_GRAY },
};
