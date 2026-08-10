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
#line 5
        .gender = TRAINER_GENDER_MALE,
#line 6
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
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
        .trainerPic = TRAINER_PIC_STEVEN,
#line 12
        .gender = TRAINER_GENDER_MALE,
#line 13
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 15
        .objectEventGraphicsId = OBJ_EVENT_GFX_STEVEN,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 17
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 21
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 20
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 19
            .lvl = 42,
            .ball = POKEBALL_COUNT,
#line 18
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 22
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 27
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 31
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 30
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 29
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 28
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 32
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 37
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 41
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 40
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 39
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 38
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 42
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 47
    [DIFFICULTY_NORMAL][PARTNER_BAIYA] =
    {
#line 48
        .trainerName = _("Baiya"),
#line 49
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 50
        .trainerPic = TRAINER_PIC_BAIYA,
#line 51
        .gender = TRAINER_GENDER_MALE,
#line 52
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 53
        .objectEventGraphicsId = OBJ_EVENT_GFX_BAIYA,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 55
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 55
            .heldItem = ITEM_DRAGONINITE,
#line 57
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 56
            .lvl = 100,
            .ball = POKEBALL_COUNT,
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
#line 62
        .gender = TRAINER_GENDER_MALE,
#line 63
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 64
        .objectEventGraphicsId = OBJ_EVENT_GFX_ADAORA,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 66
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 68
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 67
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 69
    [DIFFICULTY_NORMAL][PARTNER_BD] =
    {
#line 70
        .trainerName = _("Bd"),
#line 71
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 72
        .trainerPic = TRAINER_PIC_BD,
#line 73
        .gender = TRAINER_GENDER_MALE,
#line 74
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 75
        .objectEventGraphicsId = OBJ_EVENT_GFX_BD,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 77
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 79
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 78
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 80
    [DIFFICULTY_NORMAL][PARTNER_BELEN] =
    {
#line 81
        .trainerName = _("Belen"),
#line 82
        .trainerClass = TRAINER_CLASS_LEADER,
#line 83
        .trainerPic = TRAINER_PIC_BELEN,
#line 84
        .gender = TRAINER_GENDER_MALE,
#line 85
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 86
        .objectEventGraphicsId = OBJ_EVENT_GFX_BELEN,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 88
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 90
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 89
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 91
    [DIFFICULTY_NORMAL][PARTNER_DIMU] =
    {
#line 92
        .trainerName = _("Dimu"),
#line 93
        .trainerClass = TRAINER_CLASS_LEADER,
#line 94
        .trainerPic = TRAINER_PIC_DIMU,
#line 95
        .gender = TRAINER_GENDER_MALE,
#line 96
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 97
        .objectEventGraphicsId = OBJ_EVENT_GFX_DIMU,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 99
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 101
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 100
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 102
    [DIFFICULTY_NORMAL][PARTNER_DOYLE] =
    {
#line 103
        .trainerName = _("Doyle"),
#line 104
        .trainerClass = TRAINER_CLASS_LEADER,
#line 105
        .trainerPic = TRAINER_PIC_DOYLE,
#line 106
        .gender = TRAINER_GENDER_MALE,
#line 107
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 108
        .objectEventGraphicsId = OBJ_EVENT_GFX_DOYLE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 110
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 112
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 111
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 113
    [DIFFICULTY_NORMAL][PARTNER_EMRYS] =
    {
#line 114
        .trainerName = _("Emrys"),
#line 115
        .trainerClass = TRAINER_CLASS_LEADER,
#line 116
        .trainerPic = TRAINER_PIC_EMRYS,
#line 117
        .gender = TRAINER_GENDER_MALE,
#line 118
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 119
        .objectEventGraphicsId = OBJ_EVENT_GFX_EMRYS,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 121
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 123
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 122
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 124
    [DIFFICULTY_NORMAL][PARTNER_IMELDA] =
    {
#line 125
        .trainerName = _("Imelda"),
#line 126
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 127
        .trainerPic = TRAINER_PIC_IMELDA,
#line 128
        .gender = TRAINER_GENDER_MALE,
#line 129
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 130
        .objectEventGraphicsId = OBJ_EVENT_GFX_IMELDA,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 132
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 134
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 133
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 135
    [DIFFICULTY_NORMAL][PARTNER_PUA] =
    {
#line 136
        .trainerName = _("Pua"),
#line 137
        .trainerClass = TRAINER_CLASS_LEADER,
#line 138
        .trainerPic = TRAINER_PIC_PUA,
#line 139
        .gender = TRAINER_GENDER_MALE,
#line 140
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 141
        .objectEventGraphicsId = OBJ_EVENT_GFX_PUA,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 143
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 145
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 144
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 146
    [DIFFICULTY_NORMAL][PARTNER_KEI_YING] =
    {
#line 147
        .trainerName = _("Kei_Ying"),
#line 148
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 149
        .trainerPic = TRAINER_PIC_KEI_YING,
#line 150
        .gender = TRAINER_GENDER_MALE,
#line 151
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 152
        .objectEventGraphicsId = OBJ_EVENT_GFX_KEIYING,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 154
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 156
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 155
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 157
    [DIFFICULTY_NORMAL][PARTNER_MAGNUS] =
    {
#line 158
        .trainerName = _("Magnus"),
#line 159
        .trainerClass = TRAINER_CLASS_EX_ELITE_FOUR,
#line 160
        .trainerPic = TRAINER_PIC_MAGNUS,
#line 161
        .gender = TRAINER_GENDER_MALE,
#line 162
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 163
        .objectEventGraphicsId = OBJ_EVENT_GFX_MAGNUS,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 165
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 167
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 166
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 168
    [DIFFICULTY_NORMAL][PARTNER_NERIENE] =
    {
#line 169
        .trainerName = _("Neriene"),
#line 170
        .trainerClass = TRAINER_CLASS_LEADER,
#line 171
        .trainerPic = TRAINER_PIC_NERIENE,
#line 172
        .gender = TRAINER_GENDER_MALE,
#line 173
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 174
        .objectEventGraphicsId = OBJ_EVENT_GFX_NERIENE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 176
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 178
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 177
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 179
    [DIFFICULTY_NORMAL][PARTNER_SHINZO] =
    {
#line 180
        .trainerName = _("Shinzo"),
#line 181
        .trainerClass = TRAINER_CLASS_LEADER,
#line 182
        .trainerPic = TRAINER_PIC_SHINZO,
#line 183
        .gender = TRAINER_GENDER_MALE,
#line 184
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 185
        .objectEventGraphicsId = OBJ_EVENT_GFX_SHINZO,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 187
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 189
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 188
            .lvl = 50,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 189
                MOVE_SMOG,
                MOVE_POISON_GAS,
            },
            },
            {
#line 192
            .species = SPECIES_SKUNTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 194
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 193
            .lvl = 50,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 194
                MOVE_BITE,
                MOVE_VENOSHOCK,
            },
            },
            {
#line 197
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 199
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 198
            .lvl = 50,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 199
                MOVE_SMOG,
                MOVE_POISON_GAS,
            },
            },
            {
#line 202
            .species = SPECIES_GARBODOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 204
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 203
            .lvl = 50,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 204
                MOVE_SMOG,
                MOVE_POISON_GAS,
            },
            },
            {
#line 207
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 209
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 208
            .lvl = 50,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 209
                MOVE_BITE,
                MOVE_CRUNCH,
            },
            },
            {
#line 212
            .species = SPECIES_MABOSSTIFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 214
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 213
            .lvl = 50,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 214
                MOVE_BITE,
                MOVE_CRUNCH,
            },
            },
        },
    },
#line 217
    [DIFFICULTY_NORMAL][PARTNER_OLIVER] =
    {
#line 218
        .trainerName = _("Oliver"),
#line 219
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 220
        .trainerPic = TRAINER_PIC_EXPERT_M,
#line 221
        .gender = TRAINER_GENDER_MALE,
#line 222
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 223
        .objectEventGraphicsId = OBJ_EVENT_GFX_OLIVER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 225
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 225
            .heldItem = ITEM_WEAKNESS_POLICY,
#line 228
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 4, 252, 252),
#line 230
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 226
            .ability = ABILITY_HUSTLE,
#line 227
            .lvl = 40,
            .ball = POKEBALL_COUNT,
#line 229
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 230
                MOVE_LAST_RESORT,
                MOVE_PRESENT,
                MOVE_LIFE_DEW,
                MOVE_BATON_PASS,
            },
            },
            {
#line 235
            .species = SPECIES_MAUSHOLD_FOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 235
            .heldItem = ITEM_FIGY_BERRY,
#line 238
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 240
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 236
            .ability = ABILITY_FRIEND_GUARD,
#line 237
            .lvl = 40,
            .ball = POKEBALL_COUNT,
#line 239
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 241
                MOVE_BULLET_SEED,
                MOVE_SUPER_FANG,
                MOVE_SWITCHEROO,
                MOVE_FOLLOW_ME,
            },
            },
            {
#line 246
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 246
            .heldItem = ITEM_BLUNDER_POLICY,
#line 249
            .ev = TRAINER_PARTY_EVS(0, 160, 80, 160, 0, 108),
#line 251
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 247
            .ability = ABILITY_TELEPATHY,
#line 248
            .lvl = 40,
            .ball = POKEBALL_COUNT,
#line 250
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 251
                MOVE_HIGH_JUMP_KICK,
                MOVE_FAKE_OUT,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
            },
            },
        },
    },
#line 256
    [DIFFICULTY_NORMAL][PARTNER_CHARLOTTE] =
    {
#line 257
        .trainerName = _("Charlotte"),
#line 259
        .trainerClass = TRAINER_CLASS_CHARLOTTE,
#line 258
        .trainerPic = TRAINER_PIC_CHARLOTTE,
#line 260
        .gender = TRAINER_GENDER_MALE,
#line 261
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 262
        .objectEventGraphicsId = OBJ_EVENT_GFX_CHARLOTTE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 264
            .species = SPECIES_PALAFIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 264
            .heldItem = ITEM_CHOICE_SCARF,
#line 270
            .ev = TRAINER_PARTY_EVS(0, 250, 0, 150, 0, 0),
#line 272
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 265
            .ability = ABILITY_ZERO_TO_HERO,
#line 266
            .lvl = 50,
#line 267
            .ball = BALL_MASTER,
#line 269
            .friendship = 1,
#line 271
            .nature = NATURE_ADAMANT,
#line 268
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 272
                MOVE_WAVE_CRASH,
                MOVE_FLIP_TURN,
                MOVE_CLOSE_COMBAT,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 277
            .species = SPECIES_TALONFLAME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 277
            .heldItem = ITEM_SHARP_BEAK,
#line 283
            .ev = TRAINER_PARTY_EVS(0, 200, 0, 200, 0, 0),
#line 285
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 278
            .ability = ABILITY_GALE_WINGS,
#line 279
            .lvl = 49,
#line 280
            .ball = BALL_MASTER,
#line 282
            .friendship = 1,
#line 284
            .nature = NATURE_ADAMANT,
#line 281
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 285
                MOVE_BRAVE_BIRD,
                MOVE_FLARE_BLITZ,
                MOVE_TAILWIND,
                MOVE_DUAL_WINGBEAT,
            },
            },
            {
#line 290
            .species = SPECIES_DOUBLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 290
            .heldItem = ITEM_EVIOLITE,
#line 296
            .ev = TRAINER_PARTY_EVS(50, 250, 0, 0, 0, 100),
#line 298
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 291
            .ability = ABILITY_NO_GUARD,
#line 292
            .lvl = 50,
#line 293
            .ball = BALL_MASTER,
#line 295
            .friendship = 1,
#line 297
            .nature = NATURE_ADAMANT,
#line 294
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 298
                MOVE_IRON_HEAD,
                MOVE_SACRED_SWORD,
                MOVE_SHADOW_CLAW,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 303
            .species = SPECIES_TOEDSCRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 303
            .heldItem = ITEM_GROUNDIUM_Z,
#line 309
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 200, 200, 0),
#line 311
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 304
            .ability = ABILITY_MYCELIUM_MIGHT,
#line 305
            .lvl = 51,
#line 306
            .ball = BALL_MASTER,
#line 308
            .friendship = 1,
#line 310
            .nature = NATURE_MODEST,
#line 307
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 312
                MOVE_EARTH_POWER,
                MOVE_ENERGY_BALL,
                MOVE_SPORE,
                MOVE_SLUDGE_BOMB,
            },
            },
            {
#line 317
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 317
            .heldItem = ITEM_FOCUS_SASH,
#line 323
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 150, 250, 0),
#line 325
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 318
            .ability = ABILITY_LEVITATE,
#line 319
            .lvl = 52,
#line 320
            .ball = BALL_MASTER,
#line 322
            .friendship = 1,
#line 324
            .nature = NATURE_SERIOUS,
#line 321
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 326
                MOVE_DARK_PULSE,
                MOVE_DRAGON_PULSE,
                MOVE_FLAMETHROWER,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 331
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 331
            .heldItem = ITEM_GALLADITE,
#line 337
            .ev = TRAINER_PARTY_EVS(200, 200, 0, 0, 0, 0),
#line 339
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 332
            .ability = ABILITY_SHARPNESS,
#line 333
            .lvl = 53,
#line 334
            .ball = BALL_MASTER,
#line 336
            .friendship = 1,
#line 338
            .nature = NATURE_SERIOUS,
#line 335
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 339
                MOVE_SACRED_SWORD,
                MOVE_PSYCHO_CUT,
                MOVE_NIGHT_SLASH,
                MOVE_TRICK_ROOM,
            },
            },
        },
    },
#line 344
    [DIFFICULTY_NORMAL][PARTNER_TALA] =
    {
#line 345
        .trainerName = _("Tala"),
#line 346
        .trainerClass = TRAINER_CLASS_LEADER,
#line 347
        .trainerPic = TRAINER_PIC_TALA,
#line 348
        .gender = TRAINER_GENDER_MALE,
#line 349
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 350
        .objectEventGraphicsId = OBJ_EVENT_GFX_TALA,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 352
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 354
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 353
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 355
    [DIFFICULTY_NORMAL][PARTNER_AMIARGENTO] =
    {
#line 356
        .trainerName = _("AmiArgento"),
#line 357
        .trainerClass = TRAINER_CLASS_LEADER,
#line 358
        .trainerPic = TRAINER_PIC_AMI,
#line 359
        .gender = TRAINER_GENDER_MALE,
#line 360
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 361
        .objectEventGraphicsId = OBJ_EVENT_GFX_AMIARGENTO,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 363
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 365
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 364
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 366
    [DIFFICULTY_NORMAL][PARTNER_FRANK] =
    {
#line 367
        .trainerName = _("Frank"),
#line 368
        .trainerClass = TRAINER_CLASS_LEADER,
#line 369
        .trainerPic = TRAINER_PIC_FRANK,
#line 370
        .gender = TRAINER_GENDER_MALE,
#line 371
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 372
        .objectEventGraphicsId = OBJ_EVENT_GFX_FRANK,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 374
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 376
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 375
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 377
    [DIFFICULTY_NORMAL][PARTNER_ELEANOR] =
    {
#line 378
        .trainerName = _("Eleanor"),
#line 379
        .trainerClass = TRAINER_CLASS_LEADER,
#line 380
        .trainerPic = TRAINER_PIC_ELEANOR,
#line 381
        .gender = TRAINER_GENDER_MALE,
#line 382
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 383
        .objectEventGraphicsId = OBJ_EVENT_GFX_ELEANOR,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 385
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 387
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 386
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
