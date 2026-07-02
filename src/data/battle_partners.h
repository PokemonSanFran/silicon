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
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 16
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 20
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 19
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 18
            .lvl = 42,
            .ball = POKEBALL_COUNT,
#line 17
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 21
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 26
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 30
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 29
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 28
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 27
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 31
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 36
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 40
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 39
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 38
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 37
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 41
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 46
    [DIFFICULTY_NORMAL][PARTNER_BAIYA] =
    {
#line 47
        .trainerName = _("Baiya"),
#line 48
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 49
        .trainerPic = TRAINER_PIC_BAIYA,
#line 50
        .gender = TRAINER_GENDER_MALE,
#line 51
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 53
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 55
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 54
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 56
    [DIFFICULTY_NORMAL][PARTNER_ADAORA] =
    {
#line 57
        .trainerName = _("Adaora"),
#line 58
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 59
        .trainerPic = TRAINER_PIC_ADAORA,
#line 60
        .gender = TRAINER_GENDER_MALE,
#line 61
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 63
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 65
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 64
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 66
    [DIFFICULTY_NORMAL][PARTNER_BD] =
    {
#line 67
        .trainerName = _("Bd"),
#line 68
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 69
        .trainerPic = TRAINER_PIC_BD,
#line 70
        .gender = TRAINER_GENDER_MALE,
#line 71
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 73
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 75
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 74
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 76
    [DIFFICULTY_NORMAL][PARTNER_BELEN] =
    {
#line 77
        .trainerName = _("Belen"),
#line 78
        .trainerClass = TRAINER_CLASS_LEADER,
#line 79
        .trainerPic = TRAINER_PIC_BELEN,
#line 80
        .gender = TRAINER_GENDER_MALE,
#line 81
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 83
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 85
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 84
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 86
    [DIFFICULTY_NORMAL][PARTNER_DIMU] =
    {
#line 87
        .trainerName = _("Dimu"),
#line 88
        .trainerClass = TRAINER_CLASS_LEADER,
#line 89
        .trainerPic = TRAINER_PIC_DIMU,
#line 90
        .gender = TRAINER_GENDER_MALE,
#line 91
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 93
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 95
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 94
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 96
    [DIFFICULTY_NORMAL][PARTNER_DOYLE] =
    {
#line 97
        .trainerName = _("Doyle"),
#line 98
        .trainerClass = TRAINER_CLASS_LEADER,
#line 99
        .trainerPic = TRAINER_PIC_DOYLE,
#line 100
        .gender = TRAINER_GENDER_MALE,
#line 101
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 103
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 105
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 104
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 106
    [DIFFICULTY_NORMAL][PARTNER_EMRYS] =
    {
#line 107
        .trainerName = _("Emrys"),
#line 108
        .trainerClass = TRAINER_CLASS_LEADER,
#line 109
        .trainerPic = TRAINER_PIC_EMRYS,
#line 110
        .gender = TRAINER_GENDER_MALE,
#line 111
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 113
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 115
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 114
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 116
    [DIFFICULTY_NORMAL][PARTNER_IMELDA] =
    {
#line 117
        .trainerName = _("Imelda"),
#line 118
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 119
        .trainerPic = TRAINER_PIC_IMELDA,
#line 120
        .gender = TRAINER_GENDER_MALE,
#line 121
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 123
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 125
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 124
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 126
    [DIFFICULTY_NORMAL][PARTNER_PUA] =
    {
#line 127
        .trainerName = _("Pua"),
#line 128
        .trainerClass = TRAINER_CLASS_LEADER,
#line 129
        .trainerPic = TRAINER_PIC_PUA,
#line 130
        .gender = TRAINER_GENDER_MALE,
#line 131
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 133
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 135
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 134
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 136
    [DIFFICULTY_NORMAL][PARTNER_KEI_YING] =
    {
#line 137
        .trainerName = _("Kei_Ying"),
#line 138
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 139
        .trainerPic = TRAINER_PIC_KEI_YING,
#line 140
        .gender = TRAINER_GENDER_MALE,
#line 141
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 143
            .species = SPECIES_RAICHU,
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
    [DIFFICULTY_NORMAL][PARTNER_MAGNUS] =
    {
#line 147
        .trainerName = _("Magnus"),
#line 148
        .trainerClass = TRAINER_CLASS_EX_ELITE_FOUR,
#line 149
        .trainerPic = TRAINER_PIC_MAGNUS,
#line 150
        .gender = TRAINER_GENDER_MALE,
#line 151
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 153
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 155
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 154
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 156
    [DIFFICULTY_NORMAL][PARTNER_NERIENE] =
    {
#line 157
        .trainerName = _("Neriene"),
#line 158
        .trainerClass = TRAINER_CLASS_LEADER,
#line 159
        .trainerPic = TRAINER_PIC_NERIENE,
#line 160
        .gender = TRAINER_GENDER_MALE,
#line 161
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 163
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 165
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 164
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 166
    [DIFFICULTY_NORMAL][PARTNER_SHINZO] =
    {
#line 167
        .trainerName = _("Shinzo"),
#line 168
        .trainerClass = TRAINER_CLASS_LEADER,
#line 169
        .trainerPic = TRAINER_PIC_SHINZO,
#line 170
        .gender = TRAINER_GENDER_MALE,
#line 171
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 173
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 175
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 174
            .lvl = 50,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 175
                MOVE_SMOG,
                MOVE_POISON_GAS,
            },
            },
            {
#line 178
            .species = SPECIES_SKUNTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 180
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 179
            .lvl = 50,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 180
                MOVE_BITE,
                MOVE_VENOSHOCK,
            },
            },
            {
#line 183
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 185
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 184
            .lvl = 50,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 185
                MOVE_SMOG,
                MOVE_POISON_GAS,
            },
            },
            {
#line 188
            .species = SPECIES_GARBODOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 190
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 189
            .lvl = 50,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 190
                MOVE_SMOG,
                MOVE_POISON_GAS,
            },
            },
            {
#line 193
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 195
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 194
            .lvl = 50,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 195
                MOVE_BITE,
                MOVE_CRUNCH,
            },
            },
            {
#line 198
            .species = SPECIES_MABOSSTIFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 200
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 199
            .lvl = 50,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 200
                MOVE_BITE,
                MOVE_CRUNCH,
            },
            },
        },
    },
#line 203
    [DIFFICULTY_NORMAL][PARTNER_OLIVER] =
    {
#line 204
        .trainerName = _("Oliver"),
#line 205
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 206
        .trainerPic = TRAINER_PIC_EXPERT_M,
#line 207
        .gender = TRAINER_GENDER_MALE,
#line 208
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 210
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 210
            .heldItem = ITEM_WEAKNESS_POLICY,
#line 213
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 4, 252, 252),
#line 215
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 211
            .ability = ABILITY_HUSTLE,
#line 212
            .lvl = 40,
            .ball = POKEBALL_COUNT,
#line 214
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 215
                MOVE_LAST_RESORT,
                MOVE_PRESENT,
                MOVE_LIFE_DEW,
                MOVE_BATON_PASS,
            },
            },
            {
#line 220
            .species = SPECIES_MAUSHOLD_FOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 220
            .heldItem = ITEM_FIGY_BERRY,
#line 223
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 225
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 221
            .ability = ABILITY_FRIEND_GUARD,
#line 222
            .lvl = 40,
            .ball = POKEBALL_COUNT,
#line 224
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 226
                MOVE_BULLET_SEED,
                MOVE_SUPER_FANG,
                MOVE_SWITCHEROO,
                MOVE_FOLLOW_ME,
            },
            },
            {
#line 231
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 231
            .heldItem = ITEM_BLUNDER_POLICY,
#line 234
            .ev = TRAINER_PARTY_EVS(0, 160, 80, 160, 0, 108),
#line 236
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 232
            .ability = ABILITY_TELEPATHY,
#line 233
            .lvl = 40,
            .ball = POKEBALL_COUNT,
#line 235
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 236
                MOVE_HIGH_JUMP_KICK,
                MOVE_FAKE_OUT,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
            },
            },
        },
    },
#line 241
    [DIFFICULTY_NORMAL][PARTNER_CHARLOTTE] =
    {
#line 242
        .trainerName = _("Charlotte"),
#line 244
        .trainerClass = TRAINER_CLASS_CHARLOTTE,
#line 243
        .trainerPic = TRAINER_PIC_CHARLOTTE,
#line 245
        .gender = TRAINER_GENDER_MALE,
#line 246
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 248
            .species = SPECIES_PALAFIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 248
            .heldItem = ITEM_CHOICE_SCARF,
#line 254
            .ev = TRAINER_PARTY_EVS(0, 250, 0, 150, 0, 0),
#line 256
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 249
            .ability = ABILITY_ZERO_TO_HERO,
#line 250
            .lvl = 50,
#line 251
            .ball = BALL_MASTER,
#line 253
            .friendship = 1,
#line 255
            .nature = NATURE_ADAMANT,
#line 252
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 256
                MOVE_WAVE_CRASH,
                MOVE_FLIP_TURN,
                MOVE_CLOSE_COMBAT,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 261
            .species = SPECIES_TALONFLAME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 261
            .heldItem = ITEM_SHARP_BEAK,
#line 267
            .ev = TRAINER_PARTY_EVS(0, 200, 0, 200, 0, 0),
#line 269
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 262
            .ability = ABILITY_GALE_WINGS,
#line 263
            .lvl = 49,
#line 264
            .ball = BALL_MASTER,
#line 266
            .friendship = 1,
#line 268
            .nature = NATURE_ADAMANT,
#line 265
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 269
                MOVE_BRAVE_BIRD,
                MOVE_FLARE_BLITZ,
                MOVE_TAILWIND,
                MOVE_DUAL_WINGBEAT,
            },
            },
            {
#line 274
            .species = SPECIES_DOUBLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 274
            .heldItem = ITEM_EVIOLITE,
#line 280
            .ev = TRAINER_PARTY_EVS(50, 250, 0, 0, 0, 100),
#line 282
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 275
            .ability = ABILITY_NO_GUARD,
#line 276
            .lvl = 50,
#line 277
            .ball = BALL_MASTER,
#line 279
            .friendship = 1,
#line 281
            .nature = NATURE_ADAMANT,
#line 278
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 282
                MOVE_IRON_HEAD,
                MOVE_SACRED_SWORD,
                MOVE_SHADOW_CLAW,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 287
            .species = SPECIES_TOEDSCRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 287
            .heldItem = ITEM_GROUNDIUM_Z,
#line 293
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 200, 200, 0),
#line 295
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 288
            .ability = ABILITY_MYCELIUM_MIGHT,
#line 289
            .lvl = 51,
#line 290
            .ball = BALL_MASTER,
#line 292
            .friendship = 1,
#line 294
            .nature = NATURE_MODEST,
#line 291
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 296
                MOVE_EARTH_POWER,
                MOVE_ENERGY_BALL,
                MOVE_SPORE,
                MOVE_SLUDGE_BOMB,
            },
            },
            {
#line 301
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 301
            .heldItem = ITEM_FOCUS_SASH,
#line 307
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 150, 250, 0),
#line 309
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 302
            .ability = ABILITY_LEVITATE,
#line 303
            .lvl = 52,
#line 304
            .ball = BALL_MASTER,
#line 306
            .friendship = 1,
#line 308
            .nature = NATURE_SERIOUS,
#line 305
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 310
                MOVE_DARK_PULSE,
                MOVE_DRAGON_PULSE,
                MOVE_FLAMETHROWER,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 315
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 315
            .heldItem = ITEM_GALLADITE,
#line 321
            .ev = TRAINER_PARTY_EVS(200, 200, 0, 0, 0, 0),
#line 323
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 316
            .ability = ABILITY_SHARPNESS,
#line 317
            .lvl = 53,
#line 318
            .ball = BALL_MASTER,
#line 320
            .friendship = 1,
#line 322
            .nature = NATURE_SERIOUS,
#line 319
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 323
                MOVE_SACRED_SWORD,
                MOVE_PSYCHO_CUT,
                MOVE_NIGHT_SLASH,
                MOVE_TRICK_ROOM,
            },
            },
        },
    },
