const struct SiliconFrontierData gSiliconFrontierData[SILICON_FACILITY_COUNT] =
{
    [SILICON_FACILITY_TOWER] =
    {
        .boss =
        {
            SILICON_FRONTIER_TRAINER_TOWER_SILVER,
            SILICON_FRONTIER_TRAINER_TOWER_GOLD,
            SILICON_FRONTIER_TRAINER_TOWER,
        },
        .badge =
        {
            FLAG_SYS_RESTORED_TOWER_SILVER,
            FLAG_SYS_RESTORED_TOWER_GOLD,
        },
        .originalName = COMPOUND_STRING("Battle Tower"),
        .name = COMPOUND_STRING("Battle Jam"),
        .mapsec = MAPSEC_TIRABUDIN_PLACE,
    },
    [SILICON_FACILITY_ARCADE] =
    {
        .boss =
        {
            SILICON_FRONTIER_TRAINER_DOYLE_SILVER,
            SILICON_FRONTIER_TRAINER_DOYLE_GOLD,
            SILICON_FRONTIER_TRAINER_DOYLE,
        },
        .badge =
        {
            FLAG_SYS_RESTORED_ARCADE_SILVER,
            FLAG_SYS_RESTORED_ARCADE_GOLD,
        },
        .originalName = COMPOUND_STRING("Battle Arcade"),
        .name = COMPOUND_STRING("Battle Studio"),
        .mapsec = MAPSEC_ZENZU_ISLAND,
    },
    [SILICON_FACILITY_SPARRING] =
    {
        .boss =
        {
            SILICON_FRONTIER_TRAINER_SPARRING_SILVER,
            SILICON_FRONTIER_TRAINER_SPARRING_GOLD,
            SILICON_FRONTIER_TRAINER_SPARRING,
        },
        .badge =
        {
            FLAG_SYS_RESTORED_DOJO_SILVER,
            FLAG_SYS_RESTORED_DOJO_GOLD,
        },
        .originalName = COMPOUND_STRING("Restricted Sparring"),
        .name = COMPOUND_STRING("Restricted Sparring"),
        .mapsec = MAPSEC_HODOU_CITY,
    },
    [SILICON_FACILITY_FACTORY] =
    {
        .boss =
        {
            SILICON_FRONTIER_TRAINER_IMELDA_SILVER,
            SILICON_FRONTIER_TRAINER_IMELDA_GOLD,
            SILICON_FRONTIER_TRAINER_IMELDA,
        },
        .badge =
        {
            FLAG_SYS_RESTORED_ARCADE_SILVER,
            FLAG_SYS_RESTORED_ARCADE_GOLD,
        },
        .originalName = COMPOUND_STRING("Battle Factory"),
        .name = COMPOUND_STRING("Battle Convention"),
        .mapsec = MAPSEC_ESPULEE_OUTSKIRTS,
    },
};
