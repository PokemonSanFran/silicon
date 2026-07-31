const struct SiliconFrontierData gSiliconFrontierData[SILICON_FACILITY_COUNT] =
{
    [SILICON_FACILITY_TOWER] =
    {
        .silverBadge = FLAG_SYS_RESTORED_TOWER_SILVER,
        .silverBoss = SILICON_FRONTIER_TRAINER_TOWER_SILVER,
        .goldBadge = FLAG_SYS_RESTORED_TOWER_GOLD,
        .goldBoss = SILICON_FRONTIER_TRAINER_TOWER_GOLD,
        .name = COMPOUND_STRING("Battle Tower"),
        .mapsec = MAPSEC_TIRABUDIN_PLACE,
    },
    [SILICON_FACILITY_ARCADE] =
    {
        .silverBadge = FLAG_SYS_RESTORED_ARCADE_SILVER,
        .silverBoss = SILICON_FRONTIER_TRAINER_DOYLE_SILVER,
        .goldBadge = FLAG_SYS_RESTORED_ARCADE_GOLD,
        .goldBoss = SILICON_FRONTIER_TRAINER_DOYLE_GOLD,
        .name = COMPOUND_STRING("Battle Arcade"),
        .mapsec = MAPSEC_ZENZU_ISLAND,
    },
    [SILICON_FACILITY_SPARRING] =
    {
        .silverBadge = FLAG_SYS_RESTORED_DOJO_SILVER,
        .silverBoss = SILICON_FRONTIER_TRAINER_SPARRING_SILVER,
        .goldBadge = FLAG_SYS_RESTORED_DOJO_GOLD,
        .goldBoss = SILICON_FRONTIER_TRAINER_SPARRING_GOLD,
        .name = COMPOUND_STRING("Restricted Sparring"),
        .mapsec = MAPSEC_HODOU_CITY,
    },
    [SILICON_FACILITY_FACTORY] =
    {
        .silverBadge = FLAG_SYS_RESTORED_ARCADE_SILVER,
        .silverBoss = SILICON_FRONTIER_TRAINER_IMELDA_SILVER,
        .goldBadge = FLAG_SYS_RESTORED_ARCADE_GOLD,
        .goldBoss = SILICON_FRONTIER_TRAINER_IMELDA_GOLD,
        .name = COMPOUND_STRING("Battle Factory"),
        .mapsec = MAPSEC_ESPULEE_OUTSKIRTS,
    },
};
