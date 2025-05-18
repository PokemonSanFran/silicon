//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/battle_partners.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/battle_partners.h' to remove #line markers.
//

#line 1 "src/data/battle_partners.party"

#line 1
    [DIFFICULTY_NORMAL][PARTNER_NONE] =
    {
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 8
    [DIFFICULTY_NORMAL][PARTNER_STEVEN] =
    {
#line 9
        .trainerName = _("STEVEN"),
#line 10
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .encounterMusic_gender =
#line 13
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 15
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 19
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 18
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 17
            .lvl = 42,
#line 16
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 20
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 25
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 29
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 28
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 27
            .lvl = 43,
#line 26
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 30
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 35
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 39
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 38
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 37
            .lvl = 44,
#line 36
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 40
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 45
    [DIFFICULTY_NORMAL][PARTNER_KAI] =
    {
#line 46
        .trainerName = _("Kai"),
#line 47
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 48
        .trainerPic = TRAINER_BACK_PIC_KAI,
        .encounterMusic_gender =
#line 50
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 52
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 54
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 53
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 55
    [DIFFICULTY_NORMAL][PARTNER_ADAORA] =
    {
#line 56
        .trainerName = _("Adaora"),
#line 57
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 58
        .trainerPic = TRAINER_BACK_PIC_ADAORA,
        .encounterMusic_gender =
#line 60
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 62
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 64
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 63
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 65
    [DIFFICULTY_NORMAL][PARTNER_BD] =
    {
#line 66
        .trainerName = _("Bd"),
#line 67
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 68
        .trainerPic = TRAINER_BACK_PIC_BD,
        .encounterMusic_gender =
#line 70
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 72
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 74
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 73
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 75
    [DIFFICULTY_NORMAL][PARTNER_BELEN] =
    {
#line 76
        .trainerName = _("Belen"),
#line 77
        .trainerClass = TRAINER_CLASS_LEADER,
#line 78
        .trainerPic = TRAINER_BACK_PIC_BELEN,
        .encounterMusic_gender =
#line 80
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 82
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 84
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 83
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 85
    [DIFFICULTY_NORMAL][PARTNER_DIMU] =
    {
#line 86
        .trainerName = _("Dimu"),
#line 87
        .trainerClass = TRAINER_CLASS_LEADER,
#line 88
        .trainerPic = TRAINER_BACK_PIC_DIMU,
        .encounterMusic_gender =
#line 90
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 92
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 94
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 93
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 95
    [DIFFICULTY_NORMAL][PARTNER_DOYLE] =
    {
#line 96
        .trainerName = _("Doyle"),
#line 97
        .trainerClass = TRAINER_CLASS_LEADER,
#line 98
        .trainerPic = TRAINER_BACK_PIC_DOYLE,
        .encounterMusic_gender =
#line 100
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 102
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 104
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 103
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 105
    [DIFFICULTY_NORMAL][PARTNER_EMRYS] =
    {
#line 106
        .trainerName = _("Emrys"),
#line 107
        .trainerClass = TRAINER_CLASS_LEADER,
#line 108
        .trainerPic = TRAINER_BACK_PIC_EMRYS,
        .encounterMusic_gender =
#line 110
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 112
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 114
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 113
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 115
    [DIFFICULTY_NORMAL][PARTNER_IMELDA] =
    {
#line 116
        .trainerName = _("Imelda"),
#line 117
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 118
        .trainerPic = TRAINER_BACK_PIC_IMELDA,
        .encounterMusic_gender =
#line 120
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 122
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 124
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 123
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 125
    [DIFFICULTY_NORMAL][PARTNER_KAUNA] =
    {
#line 126
        .trainerName = _("Kauna"),
#line 127
        .trainerClass = TRAINER_CLASS_LEADER,
#line 128
        .trainerPic = TRAINER_BACK_PIC_KAUNA,
        .encounterMusic_gender =
#line 130
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 132
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 134
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 133
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 135
    [DIFFICULTY_NORMAL][PARTNER_KEI_YING] =
    {
#line 136
        .trainerName = _("Kei_Ying"),
#line 137
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 138
        .trainerPic = TRAINER_BACK_PIC_KEI_YING,
        .encounterMusic_gender =
#line 140
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 142
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 144
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 143
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 145
    [DIFFICULTY_NORMAL][PARTNER_MAGNUS] =
    {
#line 146
        .trainerName = _("Magnus"),
#line 147
        .trainerClass = TRAINER_CLASS_EX_ELITE_FOUR,
#line 148
        .trainerPic = TRAINER_BACK_PIC_MAGNUS,
        .encounterMusic_gender =
#line 150
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 152
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 154
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 153
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 155
    [DIFFICULTY_NORMAL][PARTNER_NERIENE] =
    {
#line 156
        .trainerName = _("Neriene"),
#line 157
        .trainerClass = TRAINER_CLASS_LEADER,
#line 158
        .trainerPic = TRAINER_BACK_PIC_NERIENE,
        .encounterMusic_gender =
#line 160
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 162
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 164
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 163
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 165
    [DIFFICULTY_NORMAL][PARTNER_SHINZO] =
    {
#line 166
        .trainerName = _("Shinzo"),
#line 167
        .trainerClass = TRAINER_CLASS_LEADER,
#line 168
        .trainerPic = TRAINER_BACK_PIC_SHINZO,
        .encounterMusic_gender =
#line 170
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 172
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 174
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 173
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
