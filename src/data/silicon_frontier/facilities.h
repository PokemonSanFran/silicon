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
        .milestone =
        {
            SILICON_FRONTIER_STREAK_LENGTH_SILVER,
            SILICON_FRONTIER_STREAK_LENGTH_GOLD,
        },
        .badge =
        {
            FLAG_SYS_RESTORED_TOWER_SILVER,
            FLAG_SYS_RESTORED_TOWER_GOLD,
        },
        .badgeName =
        {
            COMPOUND_STRING("Silver Tower Badge"),
            COMPOUND_STRING("Gold Tower Badge"),
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
        .milestone =
        {
            SILICON_FRONTIER_STREAK_LENGTH_SILVER,
            SILICON_FRONTIER_STREAK_LENGTH_GOLD,
        },
        .badge =
        {
            FLAG_SYS_RESTORED_ARCADE_SILVER,
            FLAG_SYS_RESTORED_ARCADE_GOLD,
        },
        .badgeName =
        {
            COMPOUND_STRING("Silver Arcade Badge"),
            COMPOUND_STRING("Gold Arcade Badge"),
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
        .milestone =
        {
            SILICON_FRONTIER_STREAK_LENGTH_SILVER,
            SILICON_FRONTIER_STREAK_LENGTH_GOLD,
        },
        .badge =
        {
            FLAG_SYS_RESTORED_DOJO_SILVER,
            FLAG_SYS_RESTORED_DOJO_GOLD,
        },
        .badgeName =
        {
            COMPOUND_STRING("Silver Dojo Badge"),
            COMPOUND_STRING("Gold Dojo Badge"),
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
        .milestone =
        {
            SILICON_FRONTIER_STREAK_LENGTH_SILVER,
            SILICON_FRONTIER_STREAK_LENGTH_GOLD,
        },
        .badge =
        {
            FLAG_SYS_RESTORED_FACTORY_SILVER,
            FLAG_SYS_RESTORED_FACTORY_GOLD,
        },
        .badgeName =
        {
            COMPOUND_STRING("Silver Factory Badge"),
            COMPOUND_STRING("Gold Factory Badge"),
        },
        .originalName = COMPOUND_STRING("Battle Factory"),
        .name = COMPOUND_STRING("Battle Convention"),
        .mapsec = MAPSEC_ESPULEE_OUTSKIRTS,
    },
};
