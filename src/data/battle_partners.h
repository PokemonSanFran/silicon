//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/battle_partners.party
//
// If you want to modify this file see expansion PR #7154
//

#line 1 "src/data/battle_partners.party"

#line 1
    [DIFFICULTY_NORMAL][PARTNER_NONE] =
    {
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7
        .trainerBackPic = TRAINER_BACK_PIC_BRENDAN,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 9
    [DIFFICULTY_NORMAL][PARTNER_STEVEN] =
    {
#line 10
        .trainerName = _("STEVEN"),
#line 11
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 14
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 16
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 15
        .trainerBackPic = TRAINER_BACK_PIC_STEVEN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 18
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 22
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 21
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 20
            .lvl = 42,
#line 19
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 23
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 28
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 32
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 31
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 30
            .lvl = 43,
#line 29
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 33
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 38
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 42
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 41
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 40
            .lvl = 44,
#line 39
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 43
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 48
    [DIFFICULTY_NORMAL][PARTNER_BAIYA] =
    {
#line 49
        .trainerName = _("Baiya"),
#line 50
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 51
        .trainerPic = TRAINER_PIC_BAIYA,
        .encounterMusic_gender =
#line 53
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .trainerBackPic = TRAINER_PIC_BAIYA,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 55
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 57
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 56
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 58
    [DIFFICULTY_NORMAL][PARTNER_ADAORA] =
    {
#line 59
        .trainerName = _("Adaora"),
#line 60
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 61
        .trainerPic = TRAINER_PIC_ADAORA,
        .encounterMusic_gender =
#line 63
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .trainerBackPic = TRAINER_PIC_ADAORA,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 65
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 67
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 66
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 68
    [DIFFICULTY_NORMAL][PARTNER_BD] =
    {
#line 69
        .trainerName = _("Bd"),
#line 70
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 71
        .trainerPic = TRAINER_PIC_BD,
        .encounterMusic_gender =
#line 73
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .trainerBackPic = TRAINER_PIC_BD,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 75
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 77
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 76
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 78
    [DIFFICULTY_NORMAL][PARTNER_BELEN] =
    {
#line 79
        .trainerName = _("Belen"),
#line 80
        .trainerClass = TRAINER_CLASS_LEADER,
#line 81
        .trainerPic = TRAINER_PIC_BELEN,
        .encounterMusic_gender =
#line 83
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .trainerBackPic = TRAINER_PIC_BELEN,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 85
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 87
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 86
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 88
    [DIFFICULTY_NORMAL][PARTNER_DIMU] =
    {
#line 89
        .trainerName = _("Dimu"),
#line 90
        .trainerClass = TRAINER_CLASS_LEADER,
#line 91
        .trainerPic = TRAINER_PIC_DIMU,
        .encounterMusic_gender =
#line 93
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .trainerBackPic = TRAINER_PIC_DIMU,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 95
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 97
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 96
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 98
    [DIFFICULTY_NORMAL][PARTNER_DOYLE] =
    {
#line 99
        .trainerName = _("Doyle"),
#line 100
        .trainerClass = TRAINER_CLASS_LEADER,
#line 101
        .trainerPic = TRAINER_PIC_DOYLE,
        .encounterMusic_gender =
#line 103
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .trainerBackPic = TRAINER_PIC_DOYLE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 105
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 107
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 106
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 108
    [DIFFICULTY_NORMAL][PARTNER_EMRYS] =
    {
#line 109
        .trainerName = _("Emrys"),
#line 110
        .trainerClass = TRAINER_CLASS_LEADER,
#line 111
        .trainerPic = TRAINER_PIC_EMRYS,
        .encounterMusic_gender =
#line 113
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .trainerBackPic = TRAINER_PIC_EMRYS,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 115
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 117
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 116
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 118
    [DIFFICULTY_NORMAL][PARTNER_IMELDA] =
    {
#line 119
        .trainerName = _("Imelda"),
#line 120
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 121
        .trainerPic = TRAINER_PIC_IMELDA,
        .encounterMusic_gender =
#line 123
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .trainerBackPic = TRAINER_PIC_IMELDA,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 125
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 127
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 126
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 128
    [DIFFICULTY_NORMAL][PARTNER_PUA] =
    {
#line 129
        .trainerName = _("Pua"),
#line 130
        .trainerClass = TRAINER_CLASS_LEADER,
#line 131
        .trainerPic = TRAINER_PIC_PUA,
        .encounterMusic_gender =
#line 133
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .trainerBackPic = TRAINER_PIC_PUA,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 135
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 137
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 136
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 138
    [DIFFICULTY_NORMAL][PARTNER_KEI_YING] =
    {
#line 139
        .trainerName = _("Kei_Ying"),
#line 140
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 141
        .trainerPic = TRAINER_PIC_KEI_YING,
        .encounterMusic_gender =
#line 143
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .trainerBackPic = TRAINER_PIC_KEI_YING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 145
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 147
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 146
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 148
    [DIFFICULTY_NORMAL][PARTNER_MAGNUS] =
    {
#line 149
        .trainerName = _("Magnus"),
#line 150
        .trainerClass = TRAINER_CLASS_EX_ELITE_FOUR,
#line 151
        .trainerPic = TRAINER_PIC_MAGNUS,
        .encounterMusic_gender =
#line 153
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .trainerBackPic = TRAINER_PIC_MAGNUS,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 155
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 157
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 156
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 158
    [DIFFICULTY_NORMAL][PARTNER_NERIENE] =
    {
#line 159
        .trainerName = _("Neriene"),
#line 160
        .trainerClass = TRAINER_CLASS_LEADER,
#line 161
        .trainerPic = TRAINER_PIC_NERIENE,
        .encounterMusic_gender =
#line 163
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .trainerBackPic = TRAINER_PIC_NERIENE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 165
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 167
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 166
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 168
    [DIFFICULTY_NORMAL][PARTNER_SHINZO] =
    {
#line 169
        .trainerName = _("Shinzo"),
#line 170
        .trainerClass = TRAINER_CLASS_LEADER,
#line 171
        .trainerPic = TRAINER_PIC_SHINZO,
        .encounterMusic_gender =
#line 173
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .trainerBackPic = TRAINER_PIC_SHINZO,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 175
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 177
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 176
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
