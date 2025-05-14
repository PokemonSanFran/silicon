enum monIconCoordinateConstants
{
    POKEDEX_MON_ICON_BASE,
    POKEDEX_MON_ICON_PADDING,
    POKEDEX_MON_ICON_COUNT,
};

static const u8 typeSpriteCoordinates[][AXIS_COUNT] =
{
    [POKEDEX_PAGE_EVOLUTION] =
    {
        [AXIS_X] = 56,
        [AXIS_Y] = 89,
    },
    [POKEDEX_PAGE_STATS] =
    {
        [AXIS_X] = 56,
        [AXIS_Y] = 89,
    },
    [POKEDEX_PAGE_FORMS] =
    {
        [AXIS_X] = 56,
        [AXIS_Y] = 89,
    },
    [POKEDEX_PAGE_SPECIES_LIST] =
    {
        [AXIS_X] = 60,
        [AXIS_Y] = 128,
    },
    [POKEDEX_PAGE_INFORMATION] =
    {
        [AXIS_X] = 86,
        [AXIS_Y] = 18,
    }
};

static const u8 monSpriteCoordinates[][AXIS_COUNT] =
{
    [POKEDEX_PAGE_EVOLUTION] =
    {
        [AXIS_X] = 38,
        [AXIS_Y] = 60,
    },
    [POKEDEX_PAGE_STATS] =
    {
        [AXIS_X] = 38,
        [AXIS_Y] = 60,
    },
    [POKEDEX_PAGE_FORMS] =
    {
        [AXIS_X] = 38,
        [AXIS_Y] = 60,
    },
    [POKEDEX_PAGE_SPECIES_LIST] =
    {
        [AXIS_X] = 42,
        [AXIS_Y] = 95,
    },
    [POKEDEX_PAGE_INFORMATION] =
    {
        [AXIS_X] = 135,
        [AXIS_Y] = 73,
    },
};

static const u8 monIconCoordinates[][2][AXIS_COUNT] =
{
    [POKEDEX_PAGE_MOVES] =
    {
        [POKEDEX_MON_ICON_BASE] =
        {
            [AXIS_X] = 28,
            [AXIS_Y] = 32,
        },
        [POKEDEX_MON_ICON_PADDING] =
        {
            [AXIS_X] = 64,
            [AXIS_Y] = 32,
        },
    },
    [POKEDEX_PAGE_SPECIES_LIST] =
    {
        [POKEDEX_MON_ICON_BASE] =
        {
            [AXIS_X] = 104,
            [AXIS_Y] = 30,
        },
        [POKEDEX_MON_ICON_PADDING] =
        {
            [AXIS_X] = 37,
            [AXIS_Y] = 43,
        },
    },
};
