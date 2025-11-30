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
        .encounterMusic_gender =
#line 19
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .trainerBackPic = TRAINER_PIC_BRENDAN,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 21
            .species = SPECIES_ARCEUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 21
            .heldItem = ITEM_LEFTOVERS,
#line 25
            .ev = TRAINER_PARTY_EVS(228, 252, 0, 28, 0, 0),
#line 27
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 22
            .ability = ABILITY_MULTITYPE,
#line 23
            .lvl = 50,
#line 26
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 24
            .teraType = TYPE_GHOST,
            .moves = {
#line 27
                MOVE_EXTREME_SPEED,
                MOVE_SHADOW_CLAW,
                MOVE_SWORDS_DANCE,
                MOVE_PROTECT,
            },
            },
            {
#line 32
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 32
            .heldItem = ITEM_ZOOM_LENS,
#line 37
            .ev = TRAINER_PARTY_EVS(252, 0, 180, 0, 76, 0),
#line 39
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 33
            .ability = ABILITY_DRIZZLE,
#line 35
            .lvl = 50,
#line 38
            .nature = NATURE_MODEST,
#line 34
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 36
            .teraType = TYPE_BUG,
            .moves = {
#line 40
                MOVE_ORIGIN_PULSE,
                MOVE_HYDRO_PUMP,
                MOVE_THUNDER,
                MOVE_PROTECT,
            },
            },
            {
#line 45
            .species = SPECIES_TORRACAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 45
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 49
            .ev = TRAINER_PARTY_EVS(244, 0, 188, 76, 0, 0),
#line 51
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 46
            .ability = ABILITY_INTIMIDATE,
#line 47
            .lvl = 49,
#line 50
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 48
            .teraType = TYPE_WATER,
            .moves = {
#line 51
                MOVE_KNOCK_OFF,
                MOVE_WILL_O_WISP,
                MOVE_FAKE_OUT,
                MOVE_PARTING_SHOT,
            },
            },
            {
#line 56
            .species = SPECIES_RILLABOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 56
            .heldItem = ITEM_ASSAULT_VEST,
#line 60
            .ev = TRAINER_PARTY_EVS(172, 252, 4, 76, 0, 4),
#line 62
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 57
            .ability = ABILITY_GRASSY_SURGE,
#line 58
            .lvl = 50,
#line 61
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 59
            .teraType = TYPE_WATER,
            .moves = {
#line 62
                MOVE_WOOD_HAMMER,
                MOVE_GRASSY_GLIDE,
                MOVE_U_TURN,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 67
            .species = SPECIES_FLUTTER_MANE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 67
            .heldItem = ITEM_FOCUS_SASH,
#line 71
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
#line 73
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 68
            .ability = ABILITY_PROTOSYNTHESIS,
#line 69
            .lvl = 50,
#line 72
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 70
            .teraType = TYPE_NORMAL,
            .moves = {
#line 74
                MOVE_MOONBLAST,
                MOVE_SHADOW_BALL,
                MOVE_TAUNT,
                MOVE_PROTECT,
            },
            },
            {
#line 79
            .species = SPECIES_RAGING_BOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 79
            .heldItem = ITEM_LIFE_ORB,
#line 83
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
#line 85
            .iv = TRAINER_PARTY_IVS(31, 20, 31, 31, 31, 31),
#line 80
            .ability = ABILITY_PROTOSYNTHESIS,
#line 81
            .lvl = 50,
#line 84
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 82
            .teraType = TYPE_ELECTRIC,
            .moves = {
#line 86
                MOVE_THUNDERBOLT,
                MOVE_DRACO_METEOR,
                MOVE_THUNDERCLAP,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 91
    [DIFFICULTY_NORMAL][DEBUG_TRAINER_AI] =
    {
#line 92
        .trainerName = _("Debugger"),
#line 94
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 96
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 98
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 95
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 93
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 0
        .trainerBackPic = TRAINER_PIC_STEVEN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 100
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 104
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 103
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 102
            .lvl = 42,
#line 101
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 105
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 110
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 114
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 113
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 112
            .lvl = 43,
#line 111
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 115
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 120
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 124
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 123
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 122
            .lvl = 44,
#line 121
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 125
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
