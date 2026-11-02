//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/debug_trainers.party
//
// If you want to modify this file see expansion PR #7154
//

#line 1 "src/data/debug_trainers.party"

#line 14
    [DIFFICULTY_NORMAL][DEBUG_TRAINER_PLAYER] =
    {
#line 15
        .trainerName = _("Player"),
#line 16
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 17
        .trainerPic = TRAINER_PIC_BRENDAN,
#line 18
        .gender = TRAINER_GENDER_MALE,
#line 19
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 21
            .nickname = COMPOUND_STRING("Buffie"),
#line 21
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 25
            .ev = TRAINER_PARTY_EVS(0, 0, 252, 6, 0, 252),
#line 24
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 23
            .lvl = 100,
            .ball = POKEBALL_COUNT,
#line 22
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 26
                MOVE_BRUTAL_SWING,
                MOVE_WATER_GUN,
                MOVE_BUBBLE,
                MOVE_SLEEP_TALK,
            },
            },
            {
#line 31
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 35
            .ev = TRAINER_PARTY_EVS(0, 0, 252, 6, 0, 252),
#line 34
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 33
            .lvl = 100,
            .ball = POKEBALL_COUNT,
#line 32
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 36
                MOVE_BRUTAL_SWING,
                MOVE_FLY,
                MOVE_BUBBLE,
                MOVE_SLEEP_TALK,
            },
            },
        },
    },
#line 41
    [DIFFICULTY_NORMAL][DEBUG_TRAINER_AI] =
    {
#line 42
        .trainerName = _("Debugger"),
#line 44
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 46
        .trainerPic = TRAINER_PIC_STEVEN,
#line 47
        .gender = TRAINER_GENDER_MALE,
#line 48
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 45
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 43
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 50
            .nickname = COMPOUND_STRING("Buffie"),
#line 50
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 54
            .ev = TRAINER_PARTY_EVS(0, 0, 252, 6, 0, 252),
#line 53
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 52
            .lvl = 100,
            .ball = POKEBALL_COUNT,
#line 51
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 55
                MOVE_SLEEP_TALK,
            },
            },
            {
#line 57
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 61
            .ev = TRAINER_PARTY_EVS(0, 0, 252, 6, 0, 252),
#line 60
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 59
            .lvl = 100,
            .ball = POKEBALL_COUNT,
#line 58
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 62
                MOVE_SLEEP_TALK,
            },
            },
        },
    },
