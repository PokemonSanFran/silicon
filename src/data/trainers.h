//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/trainers.party
//
// If you want to modify this file see expansion PR #7154
//

#line 1 "src/data/trainers.party"

#line 74
    [DIFFICULTY_NORMAL][TRAINER_SHINZO] =
    {
#line 75
        .trainerName = _("Shinzo"),
#line 79
        .trainerClass = TRAINER_CLASS_LEADER,
#line 76
        .trainerPic = TRAINER_PIC_SHINZO,
        .encounterMusic_gender =
0,
#line 77
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 78
        .characterRevealId = REVEAL_SHINZO,
#line 80
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 81
        .objectEventGraphicsId = OBJ_EVENT_GFX_SHINZO,
#line 82
        .mapSec = MAPSEC_TORA_TOWN,
#line 0
        .trainerBackPic = TRAINER_PIC_SHINZO,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 84
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 84
            .heldItem = ITEM_MYSTIC_WATER,
#line 90
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 100, 100, 0),
#line 92
            .iv = TRAINER_PARTY_IVS(20, 0, 20, 20, 20, 20),
#line 85
            .ability = ABILITY_CLEAR_BODY,
#line 86
            .lvl = 26,
#line 87
            .ball = ITEM_MASTER_BALL,
#line 89
            .friendship = 1,
#line 91
            .nature = NATURE_BOLD,
#line 88
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 93
                MOVE_CHILLING_WATER,
                MOVE_ACID_SPRAY,
                MOVE_ICY_WIND,
                MOVE_TOXIC_SPIKES,
            },
            },
            {
#line 98
            .species = SPECIES_SALANDIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 98
            .heldItem = ITEM_CHARCOAL,
#line 104
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 100, 100, 0),
#line 106
            .iv = TRAINER_PARTY_IVS(20, 0, 20, 20, 20, 20),
#line 99
            .ability = ABILITY_CORROSION,
#line 100
            .lvl = 27,
#line 101
            .ball = ITEM_MASTER_BALL,
#line 103
            .friendship = 1,
#line 105
            .nature = NATURE_TIMID,
#line 102
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 107
                MOVE_INCINERATE,
                MOVE_ACID_SPRAY,
                MOVE_SUNNY_DAY,
                MOVE_POISON_GAS,
            },
            },
            {
#line 112
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 112
            .heldItem = ITEM_MIRACLE_SEED,
#line 118
            .ev = TRAINER_PARTY_EVS(100, 100, 0, 0, 0, 0),
#line 120
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 113
            .ability = ABILITY_CHLOROPHYLL,
#line 114
            .lvl = 26,
#line 115
            .ball = ITEM_MASTER_BALL,
#line 117
            .friendship = 1,
#line 119
            .nature = NATURE_CAREFUL,
#line 116
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 121
                MOVE_RAZOR_LEAF,
                MOVE_FEINT_ATTACK,
                MOVE_POWER_UP_PUNCH,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 126
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 126
            .heldItem = ITEM_BLACK_SLUDGE,
#line 132
            .ev = TRAINER_PARTY_EVS(0, 100, 0, 100, 0, 0),
#line 134
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 127
            .ability = ABILITY_STENCH,
#line 128
            .lvl = 28,
#line 129
            .ball = ITEM_MASTER_BALL,
#line 131
            .friendship = 1,
#line 133
            .nature = NATURE_ADAMANT,
#line 130
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 135
                MOVE_SUCKER_PUNCH,
                MOVE_POISON_TAIL,
                MOVE_BITE,
                MOVE_HONE_CLAWS,
            },
            },
        },
    },
#line 140
    [DIFFICULTY_NORMAL][TRAINER_BELEN] =
    {
#line 141
        .trainerName = _("Belen"),
#line 143
        .trainerClass = TRAINER_CLASS_LEADER,
#line 142
        .trainerPic = TRAINER_PIC_BELEN,
        .encounterMusic_gender =
0,
#line 144
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 146
        .characterRevealId = REVEAL_BELEN,
#line 147
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 145
        .objectEventGraphicsId = OBJ_EVENT_GFX_BELEN,
#line 148
        .mapSec = MAPSEC_MERMEREZA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_BELEN,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 150
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 150
            .heldItem = ITEM_AGUAV_BERRY,
#line 156
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 100, 0, 0),
#line 158
            .iv = TRAINER_PARTY_IVS(20, 0, 20, 20, 20, 20),
#line 151
            .ability = ABILITY_GLUTTONY,
#line 152
            .lvl = 26,
#line 153
            .ball = ITEM_MASTER_BALL,
#line 155
            .friendship = 1,
#line 157
            .nature = NATURE_MODEST,
#line 154
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 159
                MOVE_ACID_SPRAY,
                MOVE_GIGA_DRAIN,
                MOVE_STUFF_CHEEKS,
                MOVE_YAWN,
            },
            },
            {
#line 164
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 164
            .heldItem = ITEM_SITRUS_BERRY,
#line 170
            .ev = TRAINER_PARTY_EVS(100, 50, 50, 0, 0, 0),
#line 172
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 165
            .ability = ABILITY_WELL_BAKED_BODY,
#line 166
            .lvl = 27,
#line 167
            .ball = ITEM_MASTER_BALL,
#line 169
            .friendship = 1,
#line 171
            .nature = NATURE_ADAMANT,
#line 168
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 172
                MOVE_FIRE_FANG,
                MOVE_ICE_FANG,
                MOVE_THUNDER_FANG,
                MOVE_BODY_PRESS,
            },
            },
            {
#line 177
            .species = SPECIES_TATSUGIRI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 177
            .heldItem = ITEM_CHESTO_BERRY,
#line 183
            .ev = TRAINER_PARTY_EVS(100, 0, 100, 0, 0, 0),
#line 185
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 178
            .ability = ABILITY_STORM_DRAIN,
#line 179
            .lvl = 26,
#line 180
            .ball = ITEM_MASTER_BALL,
#line 182
            .friendship = 1,
#line 184
            .nature = NATURE_MODEST,
#line 181
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 186
                MOVE_WATER_PULSE,
                MOVE_DRAGON_PULSE,
                MOVE_REST,
                MOVE_SLEEP_TALK,
            },
            },
            {
#line 191
            .species = SPECIES_GREEDENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 191
            .heldItem = ITEM_LIECHI_BERRY,
#line 197
            .ev = TRAINER_PARTY_EVS(100, 100, 0, 0, 0, 0),
#line 199
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 192
            .ability = ABILITY_CHEEK_POUCH,
#line 193
            .lvl = 28,
#line 194
            .ball = ITEM_MASTER_BALL,
#line 196
            .friendship = 1,
#line 198
            .nature = NATURE_HARDY,
#line 195
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 200
                MOVE_COVET,
                MOVE_BITE,
                MOVE_TRAILBLAZE,
                MOVE_ROLLOUT,
            },
            },
        },
    },
#line 205
    [DIFFICULTY_NORMAL][TRAINER_EMRYS] =
    {
#line 206
        .trainerName = _("Emrys"),
#line 210
        .trainerClass = TRAINER_CLASS_LEADER,
#line 207
        .trainerPic = TRAINER_PIC_EMRYS,
        .encounterMusic_gender =
0,
#line 208
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 209
        .characterRevealId = REVEAL_EMRYS,
#line 211
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 212
        .objectEventGraphicsId = OBJ_EVENT_GFX_EMRYS,
#line 213
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_EMRYS,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 215
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 215
            .heldItem = ITEM_DAMP_ROCK,
#line 221
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 0, 100, 0),
#line 223
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 216
            .ability = ABILITY_DRIZZLE,
#line 217
            .lvl = 26,
#line 218
            .ball = ITEM_MASTER_BALL,
#line 220
            .friendship = 1,
#line 222
            .nature = NATURE_MODEST,
#line 219
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 224
                MOVE_BUBBLE_BEAM,
                MOVE_ICY_WIND,
                MOVE_HYPNOSIS,
                MOVE_MUD_BOMB,
            },
            },
            {
#line 229
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 229
            .heldItem = ITEM_FOCUS_SASH,
#line 235
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 100, 100, 0),
#line 237
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 230
            .ability = ABILITY_SWIFT_SWIM,
#line 231
            .lvl = 27,
#line 232
            .ball = ITEM_MASTER_BALL,
#line 234
            .friendship = 1,
#line 236
            .nature = NATURE_TIMID,
#line 233
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 238
                MOVE_ANCIENT_POWER,
                MOVE_WATER_PULSE,
                MOVE_AURORA_BEAM,
                MOVE_METEOR_BEAM,
            },
            },
            {
#line 243
            .species = SPECIES_BRONZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 243
            .heldItem = ITEM_LEFTOVERS,
#line 249
            .ev = TRAINER_PARTY_EVS(100, 100, 0, 0, 0, 0),
#line 251
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 0, 20, 20),
#line 244
            .ability = ABILITY_LEVITATE,
#line 245
            .lvl = 26,
#line 246
            .ball = ITEM_MASTER_BALL,
#line 248
            .friendship = 1,
#line 250
            .nature = NATURE_BRAVE,
#line 247
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 252
                MOVE_GYRO_BALL,
                MOVE_ZEN_HEADBUTT,
                MOVE_IRON_DEFENSE,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 257
            .species = SPECIES_DRACOVISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 257
            .heldItem = ITEM_EXPERT_BELT,
#line 263
            .ev = TRAINER_PARTY_EVS(100, 100, 0, 0, 0, 0),
#line 264
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 258
            .ability = ABILITY_WATER_ABSORB,
#line 259
            .lvl = 28,
#line 260
            .ball = ITEM_MASTER_BALL,
#line 262
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 261
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 265
                MOVE_FISHIOUS_REND,
                MOVE_DRAGON_BREATH,
                MOVE_BITE,
                MOVE_ROCK_BLAST,
            },
            },
        },
    },
#line 270
    [DIFFICULTY_NORMAL][TRAINER_BAIYA_NEWASSHOLEAPPEARS] =
    {
#line 271
        .trainerName = _("Baiya"),
#line 273
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 272
        .trainerPic = TRAINER_PIC_BAIYA,
        .encounterMusic_gender =
0,
#line 275
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 277
        .isNative = TRUE,
#line 274
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 276
        .characterRevealId = REVEAL_BAIYA,
#line 278
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 279
        .objectEventGraphicsId = OBJ_EVENT_GFX_BAIYA,
#line 280
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_BAIYA,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 282
            .species = SPECIES_PARASECT,
#line 282
            .gender = TRAINER_MON_MALE,
#line 288
            .ev = TRAINER_PARTY_EVS(0, 0, 50, 0, 0, 50),
#line 289
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 283
            .ability = ABILITY_EFFECT_SPORE,
#line 284
            .lvl = 24,
#line 285
            .ball = ITEM_MASTER_BALL,
#line 287
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 286
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 290
                MOVE_ABSORB,
                MOVE_POISON_POWDER,
                MOVE_SLEEP_POWDER,
                MOVE_STUN_SPORE,
            },
            },
            {
#line 295
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 301
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 50, 50, 0),
#line 303
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 296
            .ability = ABILITY_LEVITATE,
#line 297
            .lvl = 24,
#line 298
            .ball = ITEM_MASTER_BALL,
#line 300
            .friendship = 1,
#line 302
            .nature = NATURE_TIMID,
#line 299
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 304
                MOVE_CHARGE,
                MOVE_ELECTRO_BALL,
                MOVE_HELPING_HAND,
                MOVE_FOUL_PLAY,
            },
            },
            {
#line 309
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 315
            .ev = TRAINER_PARTY_EVS(50, 0, 50, 0, 0, 0),
#line 317
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 310
            .ability = ABILITY_RATTLED,
#line 311
            .lvl = 24,
#line 312
            .ball = ITEM_MASTER_BALL,
#line 314
            .friendship = 1,
#line 316
            .nature = NATURE_ADAMANT,
#line 313
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 317
                MOVE_CLAMP,
                MOVE_IRON_DEFENSE,
                MOVE_WATER_GUN,
                MOVE_WHIRLPOOL,
            },
            },
            {
#line 322
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 322
            .heldItem = ITEM_ORAN_BERRY,
#line 328
            .ev = TRAINER_PARTY_EVS(0, 40, 0, 50, 10, 0),
#line 330
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 323
            .ability = ABILITY_SHED_SKIN,
#line 324
            .lvl = 25,
#line 325
            .ball = ITEM_MASTER_BALL,
#line 327
            .friendship = 1,
#line 329
            .nature = NATURE_SERIOUS,
#line 326
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 331
                MOVE_TWISTER,
                MOVE_REST,
                MOVE_ICY_WIND,
                MOVE_FIRE_SPIN,
            },
            },
        },
    },
#line 336
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE_OLDASSHOLEAPPEARS] =
    {
#line 337
        .trainerName = _("Charlotte"),
#line 338
        .trainerPic = TRAINER_PIC_CHARLOTTE,
        .encounterMusic_gender =
0,
#line 339
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 340
        .characterRevealId = REVEAL_CHARLOTTE,
#line 341
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 342
        .objectEventGraphicsId = OBJ_EVENT_GFX_CHARLOTTE,
#line 343
        .mapSec = MAPSEC_ANBEH_BEND,
#line 0
        .trainerBackPic = TRAINER_PIC_CHARLOTTE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 345
            .species = SPECIES_KLEFKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 345
            .heldItem = ITEM_ROCKY_HELMET,
#line 351
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 0, 50, 0),
#line 353
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 346
            .ability = ABILITY_PRANKSTER,
#line 347
            .lvl = 25,
#line 348
            .ball = ITEM_MASTER_BALL,
#line 350
            .friendship = 1,
#line 352
            .nature = NATURE_MILD,
#line 349
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 354
                MOVE_DAZZLING_GLEAM,
                MOVE_FLASH_CANNON,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 358
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 358
            .heldItem = ITEM_SITRUS_BERRY,
#line 364
            .ev = TRAINER_PARTY_EVS(0, 150, 0, 0, 0, 0),
#line 366
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 359
            .ability = ABILITY_INTIMIDATE,
#line 360
            .lvl = 24,
#line 361
            .ball = ITEM_MASTER_BALL,
#line 363
            .friendship = 1,
#line 365
            .nature = NATURE_ADAMANT,
#line 362
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 366
                MOVE_MACH_PUNCH,
                MOVE_BULLET_PUNCH,
                MOVE_BULK_UP,
                MOVE_SUCKER_PUNCH,
            },
            },
            {
#line 371
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 371
            .heldItem = ITEM_LUM_BERRY,
#line 377
            .ev = TRAINER_PARTY_EVS(0, 100, 0, 50, 0, 0),
#line 378
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 372
            .ability = ABILITY_WATER_ABSORB,
#line 373
            .lvl = 25,
#line 374
            .ball = ITEM_MASTER_BALL,
#line 376
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 375
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 378
                MOVE_DRAIN_PUNCH,
                MOVE_WATERFALL,
                MOVE_ICE_PUNCH,
                MOVE_DUAL_CHOP,
            },
            },
            {
#line 383
            .species = SPECIES_ORICORIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 383
            .heldItem = ITEM_FIRIUM_Z,
#line 389
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 50, 100, 0),
#line 391
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 384
            .ability = ABILITY_DANCER,
#line 385
            .lvl = 26,
#line 386
            .ball = ITEM_MASTER_BALL,
#line 388
            .friendship = 1,
#line 390
            .nature = NATURE_TIMID,
#line 387
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 392
                MOVE_REVELATION_DANCE,
                MOVE_AIR_CUTTER,
                MOVE_QUIVER_DANCE,
            },
            },
        },
    },
#line 396
    [DIFFICULTY_NORMAL][TRAINER_BAIYA_ASSHOLEHOME] =
    {
#line 397
        .trainerName = _("Baiya"),
#line 399
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 398
        .trainerPic = TRAINER_PIC_BAIYA,
        .encounterMusic_gender =
0,
#line 401
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 400
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_BAIYA,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 403
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 409
            .ev = TRAINER_PARTY_EVS(0, 0, 75, 0, 0, 75),
#line 410
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 404
            .ability = ABILITY_EFFECT_SPORE,
#line 405
            .lvl = 37,
#line 406
            .ball = ITEM_MASTER_BALL,
#line 408
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 407
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 410
                MOVE_BULLET_SEED,
                MOVE_POISON_POWDER,
                MOVE_SPORE,
                MOVE_RAGE_POWDER,
            },
            },
            {
#line 415
            .species = SPECIES_ROTOM_FAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 421
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 75, 75, 0),
#line 423
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 416
            .ability = ABILITY_LEVITATE,
#line 417
            .lvl = 39,
#line 418
            .ball = ITEM_MASTER_BALL,
#line 420
            .friendship = 1,
#line 422
            .nature = NATURE_TIMID,
#line 419
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 424
                MOVE_CHARGE,
                MOVE_SHOCK_WAVE,
                MOVE_HELPING_HAND,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 429
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 435
            .ev = TRAINER_PARTY_EVS(75, 0, 0, 75, 0, 0),
#line 437
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 430
            .ability = ABILITY_RUN_AWAY,
#line 431
            .lvl = 38,
#line 432
            .ball = ITEM_MASTER_BALL,
#line 434
            .friendship = 1,
#line 436
            .nature = NATURE_QUIET,
#line 433
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 437
                MOVE_HEADBUTT,
                MOVE_BATON_PASS,
                MOVE_BABY_DOLL_EYES,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 442
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 442
            .heldItem = ITEM_ORAN_BERRY,
#line 448
            .ev = TRAINER_PARTY_EVS(0, 50, 0, 75, 15, 0),
#line 449
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 443
            .ability = ABILITY_SHED_SKIN,
#line 444
            .lvl = 40,
#line 445
            .ball = ITEM_MASTER_BALL,
#line 447
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 446
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 450
                MOVE_DRAGON_BREATH,
                MOVE_REST,
                MOVE_ICY_WIND,
                MOVE_FIRE_SPIN,
            },
            },
        },
    },
#line 455
    [DIFFICULTY_NORMAL][TRAINER_PUA] =
    {
#line 456
        .trainerName = _("Pua"),
#line 460
        .trainerClass = TRAINER_CLASS_LEADER,
#line 457
        .trainerPic = TRAINER_PIC_PUA,
        .encounterMusic_gender =
0,
#line 458
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 459
        .characterRevealId = REVEAL_PUA,
#line 461
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 462
        .objectEventGraphicsId = OBJ_EVENT_GFX_PUA,
#line 463
        .mapSec = MAPSEC_CHASILLA,
#line 0
        .trainerBackPic = TRAINER_PIC_PUA,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 465
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 465
            .heldItem = ITEM_FOCUS_SASH,
#line 471
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 150, 150, 0),
#line 473
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 466
            .ability = ABILITY_INNER_FOCUS,
#line 467
            .lvl = 5,
#line 468
            .ball = ITEM_MASTER_BALL,
#line 470
            .friendship = 1,
#line 472
            .nature = NATURE_TIMID,
#line 469
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 474
                MOVE_PSYSHOCK,
                MOVE_DAZZLING_GLEAM,
                MOVE_COUNTER,
                MOVE_PSYCHIC,
            },
            },
            {
#line 479
            .species = SPECIES_MUDBRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 479
            .heldItem = ITEM_EVIOLITE,
#line 485
            .ev = TRAINER_PARTY_EVS(150, 150, 0, 0, 0, 0),
#line 487
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 480
            .ability = ABILITY_STAMINA,
#line 481
            .lvl = 5,
#line 482
            .ball = ITEM_MASTER_BALL,
#line 484
            .friendship = 1,
#line 486
            .nature = NATURE_ADAMANT,
#line 483
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 487
                MOVE_BULLDOZE,
                MOVE_STEALTH_ROCK,
                MOVE_SMACK_DOWN,
                MOVE_HEAVY_SLAM,
            },
            },
            {
#line 492
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 492
            .heldItem = ITEM_SCOPE_LENS,
#line 498
            .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 0, 0),
#line 499
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 493
            .ability = ABILITY_SUPER_LUCK,
#line 494
            .lvl = 5,
#line 495
            .ball = ITEM_MASTER_BALL,
#line 497
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 496
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 499
                MOVE_SUCKER_PUNCH,
                MOVE_DRILL_PECK,
                MOVE_ROOST,
                MOVE_STEEL_WING,
            },
            },
            {
#line 504
            .species = SPECIES_GIMMIGHOUL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 504
            .heldItem = ITEM_EVIOLITE,
#line 510
            .ev = TRAINER_PARTY_EVS(0, 0, 75, 0, 150, 75),
#line 512
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 505
            .ability = ABILITY_RATTLED,
#line 506
            .lvl = 5,
#line 507
            .ball = ITEM_MASTER_BALL,
#line 509
            .friendship = 1,
#line 511
            .nature = NATURE_MODEST,
#line 508
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 513
                MOVE_SHADOW_BALL,
                MOVE_POWER_GEM,
                MOVE_NASTY_PLOT,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 518
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 518
            .heldItem = ITEM_EVIOLITE,
#line 524
            .ev = TRAINER_PARTY_EVS(50, 150, 25, 50, 0, 25),
#line 526
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 519
            .ability = ABILITY_PURE_POWER,
#line 520
            .lvl = 5,
#line 521
            .ball = ITEM_MASTER_BALL,
#line 523
            .friendship = 1,
#line 525
            .nature = NATURE_ADAMANT,
#line 522
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 526
                MOVE_BRICK_BREAK,
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_PSYCHIC,
            },
            },
        },
    },
#line 531
    [DIFFICULTY_NORMAL][TRAINER_TALA] =
    {
#line 532
        .trainerName = _("Tala"),
#line 537
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 533
        .trainerPic = TRAINER_PIC_TALA,
        .encounterMusic_gender =
0,
#line 535
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 534
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 536
        .characterRevealId = REVEAL_TALA,
#line 538
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 539
        .objectEventGraphicsId = OBJ_EVENT_GFX_TALA,
#line 540
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_TALA,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 542
            .species = SPECIES_KILOWATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 542
            .heldItem = ITEM_FOCUS_SASH,
#line 548
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 550
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 543
            .ability = ABILITY_WIND_POWER,
#line 544
            .lvl = 88,
#line 545
            .ball = ITEM_MASTER_BALL,
#line 547
            .friendship = 1,
#line 549
            .nature = NATURE_TIMID,
#line 546
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 551
                MOVE_DISCHARGE,
                MOVE_THUNDERBOLT,
                MOVE_AIR_SLASH,
                MOVE_ENDEAVOR,
            },
            },
            {
#line 556
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 556
            .heldItem = ITEM_ASSAULT_VEST,
#line 562
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 564
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 557
            .ability = ABILITY_WIND_RIDER,
#line 558
            .lvl = 88,
#line 559
            .ball = ITEM_MASTER_BALL,
#line 561
            .friendship = 1,
#line 563
            .nature = NATURE_ADAMANT,
#line 560
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 564
                MOVE_LEAF_BLADE,
                MOVE_SUCKER_PUNCH,
                MOVE_KNOCK_OFF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 569
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 569
            .heldItem = ITEM_NORMAL_GEM,
#line 575
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 252, 156, 0),
#line 577
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 570
            .ability = ABILITY_ADAPTABILITY,
#line 571
            .lvl = 87,
#line 572
            .ball = ITEM_MASTER_BALL,
#line 574
            .friendship = 1,
#line 576
            .nature = NATURE_MODEST,
#line 573
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 578
                MOVE_TRI_ATTACK,
                MOVE_THUNDERBOLT,
                MOVE_ICE_BEAM,
                MOVE_NASTY_PLOT,
            },
            },
            {
#line 583
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 583
            .heldItem = ITEM_YACHE_BERRY,
#line 589
            .ev = TRAINER_PARTY_EVS(192, 208, 4, 104, 0, 0),
#line 591
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 584
            .ability = ABILITY_MULTISCALE,
#line 585
            .lvl = 87,
#line 586
            .ball = ITEM_MASTER_BALL,
#line 588
            .friendship = 1,
#line 590
            .nature = NATURE_ADAMANT,
#line 587
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 591
                MOVE_AERIAL_ACE,
                MOVE_DRAGON_CLAW,
                MOVE_EARTHQUAKE,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 596
            .species = SPECIES_CORVIKNIGHT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 596
            .heldItem = ITEM_FLYINIUM_Z,
#line 602
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 604
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 597
            .ability = ABILITY_MIRROR_ARMOR,
#line 598
            .lvl = 88,
#line 599
            .ball = ITEM_MASTER_BALL,
#line 601
            .friendship = 1,
#line 603
            .nature = NATURE_ADAMANT,
#line 600
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 604
                MOVE_BRAVE_BIRD,
                MOVE_IRON_HEAD,
                MOVE_ROOST,
                MOVE_SKY_ATTACK,
            },
            },
            {
#line 609
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 609
            .heldItem = ITEM_PIDGEOTITE,
#line 615
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 617
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 610
            .ability = ABILITY_KEEN_EYE,
#line 611
            .lvl = 89,
#line 612
            .ball = ITEM_MASTER_BALL,
#line 614
            .friendship = 1,
#line 616
            .nature = NATURE_MODEST,
#line 613
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 618
                MOVE_HURRICANE,
                MOVE_HEAT_WAVE,
                MOVE_RAZOR_WIND,
                MOVE_HYPER_BEAM,
            },
            },
        },
    },
#line 623
    [DIFFICULTY_NORMAL][TRAINER_NERIENE] =
    {
#line 624
        .trainerName = _("Neriene"),
#line 628
        .trainerClass = TRAINER_CLASS_LEADER,
#line 625
        .trainerPic = TRAINER_PIC_NERIENE,
        .encounterMusic_gender =
0,
#line 626
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 627
        .characterRevealId = REVEAL_NERIENE,
#line 629
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 630
        .objectEventGraphicsId = OBJ_EVENT_GFX_NERIENE,
#line 631
        .mapSec = MAPSEC_FORT_YOBU,
#line 0
        .trainerBackPic = TRAINER_PIC_NERIENE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 633
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 633
            .heldItem = ITEM_TOXIC_ORB,
#line 639
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 200, 0, 0),
#line 641
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 634
            .ability = ABILITY_POISON_HEAL,
#line 635
            .lvl = 49,
#line 636
            .ball = ITEM_MASTER_BALL,
#line 638
            .friendship = 1,
#line 640
            .nature = NATURE_JOLLY,
#line 637
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 641
                MOVE_TOXIC_SPIKES,
                MOVE_PROTECT,
                MOVE_DUAL_WINGBEAT,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 646
            .species = SPECIES_TOXAPEX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 646
            .heldItem = ITEM_BLACK_SLUDGE,
#line 652
            .ev = TRAINER_PARTY_EVS(250, 150, 0, 0, 0, 0),
#line 654
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 647
            .ability = ABILITY_MERCILESS,
#line 648
            .lvl = 50,
#line 649
            .ball = ITEM_MASTER_BALL,
#line 651
            .friendship = 1,
#line 653
            .nature = NATURE_ADAMANT,
#line 650
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 654
                MOVE_POISON_JAB,
                MOVE_LIQUIDATION,
                MOVE_BANEFUL_BUNKER,
                MOVE_RECOVER,
            },
            },
            {
#line 659
            .species = SPECIES_FARIGIRAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 659
            .heldItem = ITEM_SITRUS_BERRY,
#line 665
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 0, 200, 0),
#line 667
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 660
            .ability = ABILITY_CUD_CHEW,
#line 661
            .lvl = 50,
#line 662
            .ball = ITEM_MASTER_BALL,
#line 664
            .friendship = 1,
#line 666
            .nature = NATURE_MODEST,
#line 663
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 668
                MOVE_PSYCHIC,
                MOVE_HYPER_VOICE,
                MOVE_NASTY_PLOT,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 673
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 673
            .heldItem = ITEM_LEFTOVERS,
#line 679
            .ev = TRAINER_PARTY_EVS(0, 0, 250, 0, 0, 150),
#line 681
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 674
            .ability = ABILITY_NATURAL_CURE,
#line 675
            .lvl = 51,
#line 676
            .ball = ITEM_MASTER_BALL,
#line 678
            .friendship = 1,
#line 680
            .nature = NATURE_BOLD,
#line 677
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 682
                MOVE_WISH,
                MOVE_TELEPORT,
                MOVE_SEISMIC_TOSS,
                MOVE_PROTECT,
            },
            },
            {
#line 687
            .species = SPECIES_AEGISLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 687
            .heldItem = ITEM_STEELIUM_Z,
#line 693
            .ev = TRAINER_PARTY_EVS(200, 200, 0, 0, 0, 0),
#line 695
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 688
            .ability = ABILITY_STANCE_CHANGE,
#line 689
            .lvl = 52,
#line 690
            .ball = ITEM_MASTER_BALL,
#line 692
            .friendship = 1,
#line 694
            .nature = NATURE_ADAMANT,
#line 691
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 695
                MOVE_IRON_HEAD,
                MOVE_SHADOW_SNEAK,
                MOVE_SWORDS_DANCE,
                MOVE_KINGS_SHIELD,
            },
            },
        },
    },
#line 700
    [DIFFICULTY_NORMAL][TRAINER_DIMU] =
    {
#line 701
        .trainerName = _("Dimu"),
#line 705
        .trainerClass = TRAINER_CLASS_LEADER,
#line 702
        .trainerPic = TRAINER_PIC_DIMU,
        .encounterMusic_gender =
0,
#line 703
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 704
        .characterRevealId = REVEAL_DIMU,
#line 706
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 707
        .objectEventGraphicsId = OBJ_EVENT_GFX_DIMU,
#line 708
        .mapSec = MAPSEC_HALERBA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_DIMU,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 710
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 710
            .heldItem = ITEM_FOCUS_SASH,
#line 716
            .ev = TRAINER_PARTY_EVS(0, 200, 0, 200, 0, 0),
#line 718
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 711
            .ability = ABILITY_WIND_RIDER,
#line 712
            .lvl = 49,
#line 713
            .ball = ITEM_MASTER_BALL,
#line 715
            .friendship = 1,
#line 717
            .nature = NATURE_JOLLY,
#line 714
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 718
                MOVE_GRASSY_GLIDE,
                MOVE_NIGHT_SLASH,
                MOVE_SWORDS_DANCE,
                MOVE_TAILWIND,
            },
            },
            {
#line 723
            .species = SPECIES_FLORGES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 723
            .heldItem = ITEM_SITRUS_BERRY,
#line 729
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 0, 200, 0),
#line 731
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 724
            .ability = ABILITY_FLOWER_VEIL,
#line 725
            .lvl = 50,
#line 726
            .ball = ITEM_MASTER_BALL,
#line 728
            .friendship = 1,
#line 730
            .nature = NATURE_MODEST,
#line 727
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 732
                MOVE_MOONBLAST,
                MOVE_ENERGY_BALL,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
            },
            },
            {
#line 737
            .species = SPECIES_SCOVILLAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 737
            .heldItem = ITEM_LEFTOVERS,
#line 743
            .ev = TRAINER_PARTY_EVS(200, 200, 0, 0, 0, 0),
#line 744
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 738
            .ability = ABILITY_MOODY,
#line 739
            .lvl = 50,
#line 740
            .ball = ITEM_MASTER_BALL,
#line 742
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 741
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 744
                MOVE_OVERHEAT,
                MOVE_SEED_BOMB,
                MOVE_GRASSY_GLIDE,
                MOVE_PROTECT,
            },
            },
            {
#line 749
            .species = SPECIES_WYRDEER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 749
            .heldItem = ITEM_GRASSY_SEED,
#line 755
            .ev = TRAINER_PARTY_EVS(100, 200, 0, 100, 0, 0),
#line 757
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 750
            .ability = ABILITY_INTIMIDATE,
#line 751
            .lvl = 51,
#line 752
            .ball = ITEM_MASTER_BALL,
#line 754
            .friendship = 1,
#line 756
            .nature = NATURE_JOLLY,
#line 753
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 757
                MOVE_PSYSHIELD_BASH,
                MOVE_BODY_SLAM,
                MOVE_HIGH_HORSEPOWER,
                MOVE_REST,
            },
            },
            {
#line 762
            .species = SPECIES_ARBOLIVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 762
            .heldItem = ITEM_GRASSIUM_Z,
#line 768
            .ev = TRAINER_PARTY_EVS(200, 0, 100, 0, 100, 0),
#line 770
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 763
            .ability = ABILITY_SEED_SOWER,
#line 764
            .lvl = 52,
#line 765
            .ball = ITEM_MASTER_BALL,
#line 767
            .friendship = 1,
#line 769
            .nature = NATURE_MODEST,
#line 766
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 771
                MOVE_ENERGY_BALL,
                MOVE_HYPER_VOICE,
                MOVE_EARTH_POWER,
                MOVE_DAZZLING_GLEAM,
            },
            },
        },
    },
#line 776
    [DIFFICULTY_NORMAL][TRAINER_BD] =
    {
#line 777
        .trainerName = _("BD"),
#line 781
        .trainerClass = TRAINER_CLASS_LEADER,
#line 778
        .trainerPic = TRAINER_PIC_BD,
        .encounterMusic_gender =
0,
#line 779
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 780
        .characterRevealId = REVEAL_BD,
#line 782
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 783
        .objectEventGraphicsId = OBJ_EVENT_GFX_BD,
#line 784
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_BD,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 786
            .species = SPECIES_SHIINOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 786
            .heldItem = ITEM_RED_CARD,
#line 792
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 0, 200, 0),
#line 794
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 787
            .ability = ABILITY_EFFECT_SPORE,
#line 788
            .lvl = 49,
#line 789
            .ball = ITEM_MASTER_BALL,
#line 791
            .friendship = 1,
#line 793
            .nature = NATURE_MODEST,
#line 790
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 795
                MOVE_MOONBLAST,
                MOVE_ENERGY_BALL,
                MOVE_SPORE,
                MOVE_MOONLIGHT,
            },
            },
            {
#line 800
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 800
            .heldItem = ITEM_RED_CARD,
#line 806
            .ev = TRAINER_PARTY_EVS(0, 200, 0, 200, 0, 0),
#line 808
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 801
            .ability = ABILITY_CONTRARY,
#line 802
            .lvl = 50,
#line 803
            .ball = ITEM_MASTER_BALL,
#line 805
            .friendship = 1,
#line 807
            .nature = NATURE_JOLLY,
#line 804
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 808
                MOVE_SUPERPOWER,
                MOVE_DOUBLE_EDGE,
                MOVE_DIZZY_PUNCH,
                MOVE_SUCKER_PUNCH,
            },
            },
            {
#line 813
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 813
            .heldItem = ITEM_RED_CARD,
#line 819
            .ev = TRAINER_PARTY_EVS(200, 100, 0, 0, 100, 0),
#line 821
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 814
            .ability = ABILITY_LEVITATE,
#line 815
            .lvl = 50,
#line 816
            .ball = ITEM_MASTER_BALL,
#line 818
            .friendship = 1,
#line 820
            .nature = NATURE_BRAVE,
#line 817
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 821
                MOVE_GUNK_SHOT,
                MOVE_DESTINY_BOND,
                MOVE_FLAMETHROWER,
                MOVE_DARK_PULSE,
            },
            },
            {
#line 826
            .species = SPECIES_GRAFAIAI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 826
            .heldItem = ITEM_POISONIUM_Z,
#line 832
            .ev = TRAINER_PARTY_EVS(100, 250, 0, 50, 0, 0),
#line 834
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 827
            .ability = ABILITY_UNBURDEN,
#line 828
            .lvl = 51,
#line 829
            .ball = ITEM_MASTER_BALL,
#line 831
            .friendship = 1,
#line 833
            .nature = NATURE_ADAMANT,
#line 830
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 834
                MOVE_GUNK_SHOT,
                MOVE_LOW_SWEEP,
                MOVE_KNOCK_OFF,
                MOVE_TAUNT,
            },
            },
            {
#line 839
            .species = SPECIES_ANNIHILAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 839
            .heldItem = ITEM_SITRUS_BERRY,
#line 845
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 200, 0, 0),
#line 847
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 840
            .ability = ABILITY_DEFIANT,
#line 841
            .lvl = 52,
#line 842
            .ball = ITEM_MASTER_BALL,
#line 844
            .friendship = 1,
#line 846
            .nature = NATURE_ADAMANT,
#line 843
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 847
                MOVE_CLOSE_COMBAT,
                MOVE_DRAIN_PUNCH,
                MOVE_SHADOW_CLAW,
                MOVE_TAUNT,
            },
            },
        },
    },
#line 852
    [DIFFICULTY_NORMAL][TRAINER_AMIARGENTO] =
    {
#line 853
        .trainerName = _("AmiArgento"),
#line 857
        .trainerClass = TRAINER_CLASS_LEADER,
#line 854
        .trainerPic = TRAINER_PIC_AMI,
        .encounterMusic_gender =
0,
#line 855
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 856
        .characterRevealId = REVEAL_AMI,
#line 858
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 859
        .objectEventGraphicsId = OBJ_EVENT_GFX_AMIARGENTO,
#line 860
        .mapSec = MAPSEC_IRISINA_TOWN,
#line 0
        .trainerBackPic = TRAINER_PIC_AMI,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 862
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 862
            .heldItem = ITEM_LEFTOVERS,
#line 868
            .ev = TRAINER_PARTY_EVS(200, 0, 100, 0, 100, 0),
#line 870
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
#line 863
            .ability = ABILITY_OBLIVIOUS,
#line 864
            .lvl = 49,
#line 865
            .ball = ITEM_MASTER_BALL,
#line 867
            .friendship = 1,
#line 869
            .nature = NATURE_RELAXED,
#line 866
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 871
                MOVE_IRON_DEFENSE,
                MOVE_BODY_PRESS,
                MOVE_TRICK_ROOM,
                MOVE_PSYCHIC,
            },
            },
            {
#line 876
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 876
            .heldItem = ITEM_EVIOLITE,
#line 882
            .ev = TRAINER_PARTY_EVS(200, 0, 50, 0, 75, 75),
#line 884
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
#line 877
            .ability = ABILITY_DOWNLOAD,
#line 878
            .lvl = 50,
#line 879
            .ball = ITEM_MASTER_BALL,
#line 881
            .friendship = 1,
#line 883
            .nature = NATURE_QUIET,
#line 880
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 885
                MOVE_TRI_ATTACK,
                MOVE_THUNDERBOLT,
                MOVE_ICE_BEAM,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 890
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 890
            .heldItem = ITEM_ROCKY_HELMET,
#line 896
            .ev = TRAINER_PARTY_EVS(200, 0, 75, 0, 50, 75),
#line 898
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
#line 891
            .ability = ABILITY_FLAME_BODY,
#line 892
            .lvl = 50,
#line 893
            .ball = ITEM_MASTER_BALL,
#line 895
            .friendship = 1,
#line 897
            .nature = NATURE_QUIET,
#line 894
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 899
                MOVE_FLAMETHROWER,
                MOVE_SHADOW_BALL,
                MOVE_CALM_MIND,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 904
            .species = SPECIES_COPPERAJAH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 904
            .heldItem = ITEM_IRON_BALL,
#line 910
            .ev = TRAINER_PARTY_EVS(0, 200, 100, 0, 0, 100),
#line 912
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 905
            .ability = ABILITY_SHEER_FORCE,
#line 906
            .lvl = 51,
#line 907
            .ball = ITEM_MASTER_BALL,
#line 909
            .friendship = 1,
#line 911
            .nature = NATURE_BRAVE,
#line 908
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 913
                MOVE_IRON_HEAD,
                MOVE_ROCK_SLIDE,
                MOVE_HIGH_HORSEPOWER,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 918
            .species = SPECIES_HATTERENE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 918
            .heldItem = ITEM_FAIRIUM_Z,
#line 924
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 0, 200, 0),
#line 926
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
#line 919
            .ability = ABILITY_MAGIC_BOUNCE,
#line 920
            .lvl = 52,
#line 921
            .ball = ITEM_MASTER_BALL,
#line 923
            .friendship = 1,
#line 925
            .nature = NATURE_QUIET,
#line 922
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 927
                MOVE_DAZZLING_GLEAM,
                MOVE_PSYCHIC,
                MOVE_DARK_PULSE,
                MOVE_CALM_MIND,
            },
            },
        },
    },
#line 932
    [DIFFICULTY_NORMAL][TRAINER_BAIYA_BATTLE8] =
    {
#line 933
        .trainerName = _("Baiya"),
#line 935
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 934
        .trainerPic = TRAINER_PIC_BAIYA,
        .encounterMusic_gender =
0,
#line 937
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_BAIYA,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 939
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 939
            .heldItem = ITEM_FOCUS_SASH,
#line 945
            .ev = TRAINER_PARTY_EVS(0, 0, 150, 0, 0, 150),
#line 946
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 940
            .ability = ABILITY_EFFECT_SPORE,
#line 941
            .lvl = 47,
#line 942
            .ball = ITEM_MASTER_BALL,
#line 944
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 943
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 946
                MOVE_SEED_BOMB,
                MOVE_LEECH_LIFE,
                MOVE_SPORE,
                MOVE_RAGE_POWDER,
            },
            },
            {
#line 951
            .species = SPECIES_ROTOM_HEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 957
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 150, 150, 0),
#line 959
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 952
            .ability = ABILITY_LEVITATE,
#line 953
            .lvl = 49,
#line 954
            .ball = ITEM_MASTER_BALL,
#line 956
            .friendship = 1,
#line 958
            .nature = NATURE_TIMID,
#line 955
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 960
                MOVE_OVERHEAT,
                MOVE_THUNDERBOLT,
                MOVE_VOLT_SWITCH,
                MOVE_CHARGE,
            },
            },
            {
#line 965
            .species = SPECIES_HUNTAIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 965
            .heldItem = ITEM_MYSTIC_WATER,
#line 971
            .ev = TRAINER_PARTY_EVS(100, 100, 100, 0, 0, 0),
#line 973
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 966
            .ability = ABILITY_WATER_VEIL,
#line 967
            .lvl = 48,
#line 968
            .ball = ITEM_MASTER_BALL,
#line 970
            .friendship = 1,
#line 972
            .nature = NATURE_ADAMANT,
#line 969
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 973
                MOVE_WATERFALL,
                MOVE_ICE_FANG,
                MOVE_AQUA_RING,
                MOVE_CLAMP,
            },
            },
            {
#line 978
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 984
            .ev = TRAINER_PARTY_EVS(100, 50, 0, 150, 0, 0),
#line 986
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 979
            .ability = ABILITY_CUTE_CHARM,
#line 980
            .lvl = 49,
#line 981
            .ball = ITEM_MASTER_BALL,
#line 983
            .friendship = 1,
#line 985
            .nature = NATURE_JOLLY,
#line 982
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 986
                MOVE_FAKE_OUT,
                MOVE_FACADE,
                MOVE_HELPING_HAND,
                MOVE_PAYBACK,
            },
            },
            {
#line 991
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 991
            .heldItem = ITEM_DRAGONIUM_Z,
#line 997
            .ev = TRAINER_PARTY_EVS(0, 175, 0, 100, 15, 0),
#line 998
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 992
            .ability = ABILITY_SHED_SKIN,
#line 993
            .lvl = 51,
#line 994
            .ball = ITEM_MASTER_BALL,
#line 996
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 995
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 998
                MOVE_DRAGON_RUSH,
                MOVE_IRON_HEAD,
                MOVE_EXTREME_SPEED,
                MOVE_WATERFALL,
            },
            },
        },
    },
#line 1003
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE_BEACHBATTLE] =
    {
#line 1004
        .trainerName = _("Charlotte"),
#line 1005
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 1006
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1008
            .species = SPECIES_PALAFIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1008
            .heldItem = ITEM_CHOICE_SCARF,
#line 1014
            .ev = TRAINER_PARTY_EVS(0, 250, 0, 150, 0, 0),
#line 1016
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1009
            .ability = ABILITY_ZERO_TO_HERO,
#line 1010
            .lvl = 50,
#line 1011
            .ball = ITEM_MASTER_BALL,
#line 1013
            .friendship = 1,
#line 1015
            .nature = NATURE_ADAMANT,
#line 1012
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1016
                MOVE_WAVE_CRASH,
                MOVE_FLIP_TURN,
                MOVE_CLOSE_COMBAT,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 1021
            .species = SPECIES_TALONFLAME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1021
            .heldItem = ITEM_SHARP_BEAK,
#line 1027
            .ev = TRAINER_PARTY_EVS(0, 200, 0, 200, 0, 0),
#line 1029
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1022
            .ability = ABILITY_GALE_WINGS,
#line 1023
            .lvl = 49,
#line 1024
            .ball = ITEM_MASTER_BALL,
#line 1026
            .friendship = 1,
#line 1028
            .nature = NATURE_ADAMANT,
#line 1025
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1029
                MOVE_BRAVE_BIRD,
                MOVE_FLARE_BLITZ,
                MOVE_TAILWIND,
                MOVE_DUAL_WINGBEAT,
            },
            },
            {
#line 1034
            .species = SPECIES_DOUBLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1034
            .heldItem = ITEM_EVIOLITE,
#line 1040
            .ev = TRAINER_PARTY_EVS(50, 250, 0, 0, 0, 100),
#line 1042
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1035
            .ability = ABILITY_NO_GUARD,
#line 1036
            .lvl = 50,
#line 1037
            .ball = ITEM_MASTER_BALL,
#line 1039
            .friendship = 1,
#line 1041
            .nature = NATURE_ADAMANT,
#line 1038
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1042
                MOVE_IRON_HEAD,
                MOVE_SACRED_SWORD,
                MOVE_SHADOW_CLAW,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 1047
            .species = SPECIES_TOEDSCRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1047
            .heldItem = ITEM_GROUNDIUM_Z,
#line 1053
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 200, 200, 0),
#line 1055
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1048
            .ability = ABILITY_MYCELIUM_MIGHT,
#line 1049
            .lvl = 51,
#line 1050
            .ball = ITEM_MASTER_BALL,
#line 1052
            .friendship = 1,
#line 1054
            .nature = NATURE_MODEST,
#line 1051
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1056
                MOVE_EARTH_POWER,
                MOVE_ENERGY_BALL,
                MOVE_SPORE,
                MOVE_SLUDGE_BOMB,
            },
            },
            {
#line 1061
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1061
            .heldItem = ITEM_FOCUS_SASH,
#line 1067
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 150, 250, 0),
#line 1069
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1062
            .ability = ABILITY_LEVITATE,
#line 1063
            .lvl = 52,
#line 1064
            .ball = ITEM_MASTER_BALL,
#line 1066
            .friendship = 1,
#line 1068
            .nature = NATURE_SERIOUS,
#line 1065
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1070
                MOVE_DARK_PULSE,
                MOVE_DRAGON_PULSE,
                MOVE_FLAMETHROWER,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 1075
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1075
            .heldItem = ITEM_GALLADITE,
#line 1081
            .ev = TRAINER_PARTY_EVS(200, 200, 0, 0, 0, 0),
#line 1083
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1076
            .ability = ABILITY_SHARPNESS,
#line 1077
            .lvl = 53,
#line 1078
            .ball = ITEM_MASTER_BALL,
#line 1080
            .friendship = 1,
#line 1082
            .nature = NATURE_SERIOUS,
#line 1079
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1083
                MOVE_SACRED_SWORD,
                MOVE_PSYCHO_CUT,
                MOVE_NIGHT_SLASH,
                MOVE_TRICK_ROOM,
            },
            },
        },
    },
#line 1088
    [DIFFICULTY_NORMAL][TRAINER_VIGRIM] =
    {
#line 1089
        .trainerName = _("Vigrim"),
#line 1094
        .trainerClass = TRAINER_CLASS_THE_TIDE_LEADER,
#line 1090
        .trainerPic = TRAINER_PIC_VIGRIM,
        .encounterMusic_gender =
0,
#line 1092
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1091
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 1093
        .characterRevealId = REVEAL_VIGRIM,
#line 1095
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 1096
        .objectEventGraphicsId = OBJ_EVENT_GFX_VIGRIM,
#line 1097
        .mapSec = MAPSEC_NAVAL_BASE,
#line 0
        .trainerBackPic = TRAINER_PIC_VIGRIM,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1099
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1099
            .heldItem = ITEM_FOCUS_SASH,
#line 1105
            .ev = TRAINER_PARTY_EVS(12, 248, 0, 248, 0, 0),
#line 1107
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1100
            .ability = ABILITY_SWIFT_SWIM,
#line 1101
            .lvl = 76,
#line 1102
            .ball = ITEM_MASTER_BALL,
#line 1104
            .friendship = 1,
#line 1106
            .nature = NATURE_ADAMANT,
#line 1103
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1107
                MOVE_LIQUIDATION,
                MOVE_CLOSE_COMBAT,
                MOVE_ICE_PUNCH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 1112
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1112
            .heldItem = ITEM_WACAN_BERRY,
#line 1118
            .ev = TRAINER_PARTY_EVS(132, 132, 4, 236, 0, 4),
#line 1120
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1113
            .ability = ABILITY_INTIMIDATE,
#line 1114
            .lvl = 75,
#line 1115
            .ball = ITEM_MASTER_BALL,
#line 1117
            .friendship = 1,
#line 1119
            .nature = NATURE_ADAMANT,
#line 1116
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1120
                MOVE_WATERFALL,
                MOVE_POWER_WHIP,
                MOVE_CRUNCH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 1125
            .species = SPECIES_BEARTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1125
            .heldItem = ITEM_WATERIUM_Z,
#line 1131
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1133
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1126
            .ability = ABILITY_SWIFT_SWIM,
#line 1127
            .lvl = 75,
#line 1128
            .ball = ITEM_MASTER_BALL,
#line 1130
            .friendship = 1,
#line 1132
            .nature = NATURE_ADAMANT,
#line 1129
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1133
                MOVE_ICICLE_CRASH,
                MOVE_LIQUIDATION,
                MOVE_AQUA_JET,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 1138
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1138
            .heldItem = ITEM_CHOICE_BAND,
#line 1144
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1146
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1139
            .ability = ABILITY_INNER_FOCUS,
#line 1140
            .lvl = 76,
#line 1141
            .ball = ITEM_MASTER_BALL,
#line 1143
            .friendship = 1,
#line 1145
            .nature = NATURE_JOLLY,
#line 1142
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1146
                MOVE_CLOSE_COMBAT,
                MOVE_U_TURN,
                MOVE_POISON_JAB,
                MOVE_TRIPLE_AXEL,
            },
            },
            {
#line 1151
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1151
            .heldItem = ITEM_FLYING_GEM,
#line 1157
            .ev = TRAINER_PARTY_EVS(64, 196, 0, 248, 0, 0),
#line 1159
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1152
            .ability = ABILITY_HYPER_CUTTER,
#line 1153
            .lvl = 76,
#line 1154
            .ball = ITEM_MASTER_BALL,
#line 1156
            .friendship = 1,
#line 1158
            .nature = NATURE_ADAMANT,
#line 1155
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1159
                MOVE_HIGH_HORSEPOWER,
                MOVE_ACROBATICS,
                MOVE_X_SCISSOR,
                MOVE_CRABHAMMER,
            },
            },
            {
#line 1164
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1164
            .heldItem = ITEM_SWAMPERTITE,
#line 1170
            .ev = TRAINER_PARTY_EVS(136, 116, 4, 248, 0, 4),
#line 1172
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1165
            .ability = ABILITY_TORRENT,
#line 1166
            .lvl = 77,
#line 1167
            .ball = ITEM_MASTER_BALL,
#line 1169
            .friendship = 1,
#line 1171
            .nature = NATURE_ADAMANT,
#line 1168
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1172
                MOVE_LIQUIDATION,
                MOVE_EARTHQUAKE,
                MOVE_HIGH_HORSEPOWER,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
#line 1177
    [DIFFICULTY_NORMAL][TRAINER_BAIYA_WHYAREYOUHELPINGTHEM] =
    {
#line 1178
        .trainerName = _("Baiya"),
#line 1180
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 1179
        .trainerPic = TRAINER_PIC_BAIYA,
        .encounterMusic_gender =
0,
#line 1182
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1181
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_BAIYA,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1184
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1184
            .heldItem = ITEM_FOCUS_SASH,
#line 1190
            .ev = TRAINER_PARTY_EVS(0, 0, 200, 0, 0, 200),
#line 1191
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1185
            .ability = ABILITY_EFFECT_SPORE,
#line 1186
            .lvl = 67,
#line 1187
            .ball = ITEM_MASTER_BALL,
#line 1189
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 1188
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1191
                MOVE_SEED_BOMB,
                MOVE_LEECH_LIFE,
                MOVE_SPORE,
                MOVE_RAGE_POWDER,
            },
            },
            {
#line 1196
            .species = SPECIES_ROTOM_FROST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1202
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 200, 200, 0),
#line 1204
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1197
            .ability = ABILITY_LEVITATE,
#line 1198
            .lvl = 69,
#line 1199
            .ball = ITEM_MASTER_BALL,
#line 1201
            .friendship = 1,
#line 1203
            .nature = NATURE_SERIOUS,
#line 1200
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1205
                MOVE_BLIZZARD,
                MOVE_THUNDERBOLT,
                MOVE_VOLT_SWITCH,
                MOVE_CHARGE,
            },
            },
            {
#line 1210
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1210
            .heldItem = ITEM_CHARCOAL,
#line 1216
            .ev = TRAINER_PARTY_EVS(50, 150, 0, 200, 0, 0),
#line 1218
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1211
            .ability = ABILITY_FLASH_FIRE,
#line 1212
            .lvl = 68,
#line 1213
            .ball = ITEM_MASTER_BALL,
#line 1215
            .friendship = 1,
#line 1217
            .nature = NATURE_ADAMANT,
#line 1214
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1218
                MOVE_BITTER_BLADE,
                MOVE_SHADOW_CLAW,
                MOVE_SHADOW_SNEAK,
                MOVE_BULK_UP,
            },
            },
            {
#line 1223
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1223
            .heldItem = ITEM_SITRUS_BERRY,
#line 1229
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 150, 150, 0),
#line 1231
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1224
            .ability = ABILITY_SHEER_FORCE,
#line 1225
            .lvl = 68,
#line 1226
            .ball = ITEM_MASTER_BALL,
#line 1228
            .friendship = 1,
#line 1230
            .nature = NATURE_TIMID,
#line 1227
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1232
                MOVE_EARTH_POWER,
                MOVE_SLUDGE_BOMB,
                MOVE_ICE_BEAM,
                MOVE_ROAR,
            },
            },
            {
#line 1237
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1243
            .ev = TRAINER_PARTY_EVS(100, 50, 25, 200, 0, 25),
#line 1245
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1238
            .ability = ABILITY_CUTE_CHARM,
#line 1239
            .lvl = 69,
#line 1240
            .ball = ITEM_MASTER_BALL,
#line 1242
            .friendship = 1,
#line 1244
            .nature = NATURE_JOLLY,
#line 1241
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1245
                MOVE_FAKE_OUT,
                MOVE_FACADE,
                MOVE_HELPING_HAND,
                MOVE_HIGH_JUMP_KICK,
            },
            },
            {
#line 1250
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1250
            .heldItem = ITEM_DRAGONIUM_Z,
#line 1256
            .ev = TRAINER_PARTY_EVS(0, 235, 0, 150, 15, 0),
#line 1257
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1251
            .ability = ABILITY_INNER_FOCUS,
#line 1252
            .lvl = 70,
#line 1253
            .ball = ITEM_MASTER_BALL,
#line 1255
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 1254
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1257
                MOVE_DRAGON_CLAW,
                MOVE_AERIAL_ACE,
                MOVE_EXTREME_SPEED,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 1262
    [DIFFICULTY_NORMAL][TRAINER_LEAGUEOPPONENT1] =
    {
#line 1263
        .trainerName = _("League1"),
#line 1264
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 1265
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1267
            .species = SPECIES_GRAFAIAI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1267
            .heldItem = ITEM_ROCKY_HELMET,
#line 1273
            .ev = TRAINER_PARTY_EVS(252, 240, 12, 4, 0, 0),
#line 1275
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1268
            .ability = ABILITY_PRANKSTER,
#line 1269
            .lvl = 72,
#line 1270
            .ball = ITEM_MASTER_BALL,
#line 1272
            .friendship = 1,
#line 1274
            .nature = NATURE_ADAMANT,
#line 1271
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1275
                MOVE_SCARY_FACE,
                MOVE_ENCORE,
                MOVE_GUNK_SHOT,
                MOVE_DOUBLE_EDGE,
            },
            },
            {
#line 1280
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1280
            .heldItem = ITEM_DARKINIUM_Z,
#line 1286
            .ev = TRAINER_PARTY_EVS(4, 4, 0, 248, 252, 0),
#line 1288
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1281
            .ability = ABILITY_ILLUSION,
#line 1282
            .lvl = 72,
#line 1283
            .ball = ITEM_MASTER_BALL,
#line 1285
            .friendship = 1,
#line 1287
            .nature = NATURE_HASTY,
#line 1284
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1288
                MOVE_DARK_PULSE,
                MOVE_SUCKER_PUNCH,
                MOVE_FLAMETHROWER,
                MOVE_EXTRASENSORY,
            },
            },
            {
#line 1293
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1293
            .heldItem = ITEM_SCIZORITE,
#line 1299
            .ev = TRAINER_PARTY_EVS(248, 252, 0, 4, 0, 4),
#line 1301
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1294
            .ability = ABILITY_TECHNICIAN,
#line 1295
            .lvl = 73,
#line 1296
            .ball = ITEM_MASTER_BALL,
#line 1298
            .friendship = 1,
#line 1300
            .nature = NATURE_ADAMANT,
#line 1297
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1301
                MOVE_BULLET_PUNCH,
                MOVE_QUICK_ATTACK,
                MOVE_BUG_BITE,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
#line 1306
    [DIFFICULTY_NORMAL][TRAINER_LEAGUEOPPONENT2] =
    {
#line 1307
        .trainerName = _("League2"),
#line 1308
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 1309
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1311
            .species = SPECIES_VANILLUXE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1311
            .heldItem = ITEM_ICY_ROCK,
#line 1317
            .ev = TRAINER_PARTY_EVS(220, 0, 0, 252, 36, 0),
#line 1319
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1312
            .ability = ABILITY_SNOW_WARNING,
#line 1313
            .lvl = 72,
#line 1314
            .ball = ITEM_MASTER_BALL,
#line 1316
            .friendship = 1,
#line 1318
            .nature = NATURE_TIMID,
#line 1315
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1320
                MOVE_BLIZZARD,
                MOVE_AURORA_VEIL,
                MOVE_FLASH_CANNON,
                MOVE_SHEER_COLD,
            },
            },
            {
#line 1325
            .species = SPECIES_CETITAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1325
            .heldItem = ITEM_SITRUS_BERRY,
#line 1331
            .ev = TRAINER_PARTY_EVS(8, 112, 104, 100, 0, 184),
#line 1333
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1326
            .ability = ABILITY_SLUSH_RUSH,
#line 1327
            .lvl = 72,
#line 1328
            .ball = ITEM_MASTER_BALL,
#line 1330
            .friendship = 1,
#line 1332
            .nature = NATURE_ADAMANT,
#line 1329
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1333
                MOVE_ICICLE_CRASH,
                MOVE_LIQUIDATION,
                MOVE_BELLY_DRUM,
                MOVE_HIGH_HORSEPOWER,
            },
            },
            {
#line 1339
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1345
            .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
#line 1347
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1340
            .ability = ABILITY_HYPER_CUTTER,
#line 1341
            .lvl = 73,
#line 1342
            .ball = ITEM_MASTER_BALL,
#line 1344
            .friendship = 1,
#line 1346
            .nature = NATURE_ADAMANT,
#line 1343
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1347
                MOVE_CRABHAMMER,
                MOVE_BODY_SLAM,
                MOVE_HIGH_HORSEPOWER,
                MOVE_X_SCISSOR,
            },
            },
        },
    },
#line 1352
    [DIFFICULTY_NORMAL][TRAINER_LEAGUEOPPONENT3] =
    {
#line 1353
        .trainerName = _("League3"),
#line 1354
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 1355
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1357
            .species = SPECIES_TOXAPEX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1357
            .heldItem = ITEM_BLACK_SLUDGE,
#line 1363
            .ev = TRAINER_PARTY_EVS(252, 12, 84, 0, 0, 160),
#line 1365
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1358
            .ability = ABILITY_MERCILESS,
#line 1359
            .lvl = 72,
#line 1360
            .ball = ITEM_MASTER_BALL,
#line 1362
            .friendship = 1,
#line 1364
            .nature = NATURE_ADAMANT,
#line 1361
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1365
                MOVE_TOXIC,
                MOVE_BANEFUL_BUNKER,
                MOVE_LIQUIDATION,
                MOVE_POISON_JAB,
            },
            },
            {
#line 1370
            .species = SPECIES_URSALUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1370
            .heldItem = ITEM_CHESTO_BERRY,
#line 1376
            .ev = TRAINER_PARTY_EVS(248, 48, 0, 0, 0, 212),
#line 1378
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1371
            .ability = ABILITY_UNNERVE,
#line 1372
            .lvl = 72,
#line 1373
            .ball = ITEM_MASTER_BALL,
#line 1375
            .friendship = 1,
#line 1377
            .nature = NATURE_CAREFUL,
#line 1374
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1378
                MOVE_YAWN,
                MOVE_REST,
                MOVE_EARTHQUAKE,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 1383
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1383
            .heldItem = ITEM_SLOWBRONITE,
#line 1389
            .ev = TRAINER_PARTY_EVS(252, 0, 60, 0, 0, 196),
#line 1391
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1384
            .ability = ABILITY_OBLIVIOUS,
#line 1385
            .lvl = 73,
#line 1386
            .ball = ITEM_MASTER_BALL,
#line 1388
            .friendship = 1,
#line 1390
            .nature = NATURE_CALM,
#line 1387
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1392
                MOVE_TOXIC,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
        },
    },
#line 1397
    [DIFFICULTY_NORMAL][TRAINER_LEAGUEOPPONENT4] =
    {
#line 1398
        .trainerName = _("League4"),
#line 1399
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 1400
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1402
            .species = SPECIES_KILOWATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1402
            .heldItem = ITEM_FLYINIUM_Z,
#line 1408
            .ev = TRAINER_PARTY_EVS(8, 0, 0, 252, 248, 0),
#line 1410
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1403
            .ability = ABILITY_COMPETITIVE,
#line 1404
            .lvl = 73,
#line 1405
            .ball = ITEM_MASTER_BALL,
#line 1407
            .friendship = 1,
#line 1409
            .nature = NATURE_TIMID,
#line 1406
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1411
                MOVE_HURRICANE,
                MOVE_AIR_SLASH,
                MOVE_THUNDERBOLT,
                MOVE_VOLT_SWITCH,
            },
            },
            {
#line 1416
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1416
            .heldItem = ITEM_MENTAL_HERB,
#line 1422
            .ev = TRAINER_PARTY_EVS(156, 0, 100, 252, 0, 0),
#line 1424
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1417
            .ability = ABILITY_INNER_FOCUS,
#line 1418
            .lvl = 73,
#line 1419
            .ball = ITEM_MASTER_BALL,
#line 1421
            .friendship = 1,
#line 1423
            .nature = NATURE_JOLLY,
#line 1420
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1425
                MOVE_BELLY_DRUM,
                MOVE_BATON_PASS,
                MOVE_COUNTER,
            },
            },
            {
#line 1429
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1429
            .heldItem = ITEM_GYARADOSITE,
#line 1431
            .ev = TRAINER_PARTY_EVS(156, 252, 0, 100, 0, 0),
#line 1433
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1430
            .ability = ABILITY_INTIMIDATE,
#line 1433
            .lvl = 100,
#line 1432
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1433
                MOVE_WATERFALL,
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 1438
    [DIFFICULTY_NORMAL][TRAINER_BAIYA_FINALS] =
    {
#line 1439
        .trainerName = _("Baiya"),
#line 1441
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 1440
        .trainerPic = TRAINER_PIC_BAIYA,
        .encounterMusic_gender =
0,
#line 1442
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_BAIYA,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1444
            .species = SPECIES_KLEFKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1444
            .heldItem = ITEM_LIGHT_CLAY,
#line 1450
            .ev = TRAINER_PARTY_EVS(248, 0, 32, 0, 196, 32),
#line 1452
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1445
            .ability = ABILITY_PRANKSTER,
#line 1446
            .lvl = 73,
#line 1447
            .ball = ITEM_MASTER_BALL,
#line 1449
            .friendship = 1,
#line 1451
            .nature = NATURE_MODEST,
#line 1448
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1453
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_DAZZLING_GLEAM,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 1458
            .species = SPECIES_HUNTAIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1458
            .heldItem = ITEM_MYSTIC_WATER,
#line 1464
            .ev = TRAINER_PARTY_EVS(100, 228, 100, 80, 0, 0),
#line 1466
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1459
            .ability = ABILITY_WATER_VEIL,
#line 1460
            .lvl = 73,
#line 1461
            .ball = ITEM_MASTER_BALL,
#line 1463
            .friendship = 1,
#line 1465
            .nature = NATURE_ADAMANT,
#line 1462
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1466
                MOVE_WATERFALL,
                MOVE_ICE_FANG,
                MOVE_CRUNCH,
                MOVE_SHELL_SMASH,
            },
            },
            {
#line 1471
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1471
            .heldItem = ITEM_CHARCOAL,
#line 1477
            .ev = TRAINER_PARTY_EVS(88, 164, 4, 252, 0, 0),
#line 1479
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1472
            .ability = ABILITY_FLASH_FIRE,
#line 1473
            .lvl = 73,
#line 1474
            .ball = ITEM_MASTER_BALL,
#line 1476
            .friendship = 1,
#line 1478
            .nature = NATURE_ADAMANT,
#line 1475
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1479
                MOVE_BITTER_BLADE,
                MOVE_SHADOW_CLAW,
                MOVE_SHADOW_SNEAK,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 1484
            .species = SPECIES_ROTOM_MOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1484
            .heldItem = ITEM_MIRACLE_SEED,
#line 1490
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 252, 200, 4),
#line 1492
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1485
            .ability = ABILITY_LEVITATE,
#line 1486
            .lvl = 73,
#line 1487
            .ball = ITEM_MASTER_BALL,
#line 1489
            .friendship = 1,
#line 1491
            .nature = NATURE_TIMID,
#line 1488
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1493
                MOVE_LEAF_STORM,
                MOVE_THUNDERBOLT,
                MOVE_NASTY_PLOT,
                MOVE_DISCHARGE,
            },
            },
            {
#line 1498
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1498
            .heldItem = ITEM_LOPUNNITE,
#line 1504
            .ev = TRAINER_PARTY_EVS(100, 104, 28, 248, 0, 28),
#line 1506
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1499
            .ability = ABILITY_CUTE_CHARM,
#line 1500
            .lvl = 74,
#line 1501
            .ball = ITEM_MASTER_BALL,
#line 1503
            .friendship = 1,
#line 1505
            .nature = NATURE_JOLLY,
#line 1502
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1506
                MOVE_FACADE,
                MOVE_HIGH_JUMP_KICK,
                MOVE_DRAIN_PUNCH,
                MOVE_BOUNCE,
            },
            },
            {
#line 1511
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1511
            .heldItem = ITEM_DRAGONIUM_Z,
#line 1517
            .ev = TRAINER_PARTY_EVS(60, 248, 0, 200, 0, 0),
#line 1518
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1512
            .ability = ABILITY_INNER_FOCUS,
#line 1513
            .lvl = 74,
#line 1514
            .ball = ITEM_MASTER_BALL,
#line 1516
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 1515
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1518
                MOVE_OUTRAGE,
                MOVE_DRAGON_CLAW,
                MOVE_AERIAL_ACE,
                MOVE_IRON_HEAD,
            },
            },
        },
    },
#line 1523
    [DIFFICULTY_NORMAL][TRAINER_BAIYA_LETSGRABLUNCH] =
    {
#line 1524
        .trainerName = _("Baiya"),
#line 1526
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 1525
        .trainerPic = TRAINER_PIC_BAIYA,
        .encounterMusic_gender =
0,
#line 1528
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1527
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_BAIYA,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1530
            .species = SPECIES_KLEFKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1530
            .heldItem = ITEM_LIGHT_CLAY,
#line 1536
            .ev = TRAINER_PARTY_EVS(248, 0, 32, 0, 196, 32),
#line 1538
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1531
            .ability = ABILITY_PRANKSTER,
#line 1532
            .lvl = 73,
#line 1533
            .ball = ITEM_MASTER_BALL,
#line 1535
            .friendship = 1,
#line 1537
            .nature = NATURE_MODEST,
#line 1534
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1539
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_DAZZLING_GLEAM,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 1544
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1544
            .heldItem = ITEM_LIFE_ORB,
#line 1550
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 212, 196, 0),
#line 1552
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1545
            .ability = ABILITY_SHEER_FORCE,
#line 1546
            .lvl = 73,
#line 1547
            .ball = ITEM_MASTER_BALL,
#line 1549
            .friendship = 1,
#line 1551
            .nature = NATURE_TIMID,
#line 1548
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1553
                MOVE_EARTH_POWER,
                MOVE_SLUDGE_WAVE,
                MOVE_ICE_BEAM,
                MOVE_FOCUS_BLAST,
            },
            },
            {
#line 1558
            .species = SPECIES_HUNTAIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1558
            .heldItem = ITEM_MYSTIC_WATER,
#line 1564
            .ev = TRAINER_PARTY_EVS(100, 228, 100, 80, 0, 0),
#line 1566
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1559
            .ability = ABILITY_WATER_VEIL,
#line 1560
            .lvl = 73,
#line 1561
            .ball = ITEM_MASTER_BALL,
#line 1563
            .friendship = 1,
#line 1565
            .nature = NATURE_ADAMANT,
#line 1562
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1566
                MOVE_WATERFALL,
                MOVE_ICE_FANG,
                MOVE_CRUNCH,
                MOVE_SHELL_SMASH,
            },
            },
            {
#line 1571
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1571
            .heldItem = ITEM_CHARCOAL,
#line 1577
            .ev = TRAINER_PARTY_EVS(88, 164, 4, 252, 0, 0),
#line 1579
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1572
            .ability = ABILITY_FLASH_FIRE,
#line 1573
            .lvl = 73,
#line 1574
            .ball = ITEM_MASTER_BALL,
#line 1576
            .friendship = 1,
#line 1578
            .nature = NATURE_ADAMANT,
#line 1575
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1579
                MOVE_BITTER_BLADE,
                MOVE_SHADOW_CLAW,
                MOVE_SHADOW_SNEAK,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 1584
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1584
            .heldItem = ITEM_LOPUNNITE,
#line 1590
            .ev = TRAINER_PARTY_EVS(100, 104, 28, 248, 0, 28),
#line 1592
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1585
            .ability = ABILITY_CUTE_CHARM,
#line 1586
            .lvl = 74,
#line 1587
            .ball = ITEM_MASTER_BALL,
#line 1589
            .friendship = 1,
#line 1591
            .nature = NATURE_JOLLY,
#line 1588
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1592
                MOVE_FACADE,
                MOVE_HIGH_JUMP_KICK,
                MOVE_DRAIN_PUNCH,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 1597
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1597
            .heldItem = ITEM_FLYINIUM_Z,
#line 1603
            .ev = TRAINER_PARTY_EVS(60, 248, 0, 200, 0, 0),
#line 1604
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1598
            .ability = ABILITY_INNER_FOCUS,
#line 1599
            .lvl = 75,
#line 1600
            .ball = ITEM_MASTER_BALL,
#line 1602
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 1601
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1604
                MOVE_DRAGON_CLAW,
                MOVE_AERIAL_ACE,
                MOVE_DRAGON_DANCE,
                MOVE_IRON_HEAD,
            },
            },
        },
    },
#line 1609
    [DIFFICULTY_NORMAL][TRAINER_DOYLE_ZENZU_ISLAND] =
    {
#line 1610
        .trainerName = _("Doyle"),
#line 1612
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 1611
        .trainerPic = TRAINER_PIC_DOYLE,
        .encounterMusic_gender =
0,
#line 1614
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1613
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 1615
        .characterRevealId = REVEAL_DOYLE,
#line 1616
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 1617
        .objectEventGraphicsId = OBJ_EVENT_GFX_DOYLE,
#line 1618
        .mapSec = MAPSEC_ZENZU_ISLAND,
#line 0
        .trainerBackPic = TRAINER_PIC_DOYLE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1620
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1620
            .heldItem = ITEM_LIFE_ORB,
#line 1626
            .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
#line 1628
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1621
            .ability = ABILITY_SHEER_FORCE,
#line 1622
            .lvl = 75,
#line 1623
            .ball = ITEM_MASTER_BALL,
#line 1625
            .friendship = 1,
#line 1627
            .nature = NATURE_TIMID,
#line 1624
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1629
                MOVE_EARTH_POWER,
                MOVE_SLUDGE_BOMB,
                MOVE_ICE_BEAM,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 1634
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1634
            .heldItem = ITEM_CHOPLE_BERRY,
#line 1640
            .ev = TRAINER_PARTY_EVS(252, 60, 52, 0, 0, 144),
#line 1642
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1635
            .ability = ABILITY_SAND_STREAM,
#line 1636
            .lvl = 75,
#line 1637
            .ball = ITEM_MASTER_BALL,
#line 1639
            .friendship = 1,
#line 1641
            .nature = NATURE_ADAMANT,
#line 1638
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1642
                MOVE_ROCK_SLIDE,
                MOVE_ASSURANCE,
                MOVE_HELPING_HAND,
                MOVE_DRAGON_TAIL,
            },
            },
            {
#line 1647
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1647
            .heldItem = ITEM_ASSAULT_VEST,
#line 1653
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 252, 148, 8),
#line 1655
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1648
            .ability = ABILITY_LEVITATE,
#line 1649
            .lvl = 74,
#line 1650
            .ball = ITEM_MASTER_BALL,
#line 1652
            .friendship = 1,
#line 1654
            .nature = NATURE_MODEST,
#line 1651
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1656
                MOVE_DARK_PULSE,
                MOVE_DRACO_METEOR,
                MOVE_EARTH_POWER,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 1661
            .species = SPECIES_VOLCARONA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1661
            .heldItem = ITEM_FIRIUM_Z,
#line 1667
            .ev = TRAINER_PARTY_EVS(128, 0, 120, 252, 8, 0),
#line 1669
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1662
            .ability = ABILITY_FLAME_BODY,
#line 1663
            .lvl = 76,
#line 1664
            .ball = ITEM_MASTER_BALL,
#line 1666
            .friendship = 1,
#line 1668
            .nature = NATURE_TIMID,
#line 1665
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1670
                MOVE_FLAMETHROWER,
                MOVE_BUG_BUZZ,
                MOVE_GIGA_DRAIN,
                MOVE_RAGE_POWDER,
            },
            },
            {
#line 1676
            .species = SPECIES_DURALUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1682
            .ev = TRAINER_PARTY_EVS(8, 0, 0, 0, 248, 252),
#line 1684
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1677
            .ability = ABILITY_STALWART,
#line 1678
            .lvl = 76,
#line 1679
            .ball = ITEM_MASTER_BALL,
#line 1681
            .friendship = 1,
#line 1683
            .nature = NATURE_MODEST,
#line 1680
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1685
                MOVE_FLASH_CANNON,
                MOVE_DRAGON_PULSE,
                MOVE_THUNDERBOLT,
                MOVE_DARK_PULSE,
            },
            },
        },
    },
#line 1690
    [DIFFICULTY_NORMAL][TRAINER_IMELDA] =
    {
#line 1691
        .trainerName = _("Imelda"),
#line 1692
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 1693
        .trainerPic = TRAINER_PIC_IMELDA,
        .encounterMusic_gender =
0,
#line 1695
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1694
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 1696
        .characterRevealId = REVEAL_IMELDA,
#line 1697
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 1698
        .objectEventGraphicsId = OBJ_EVENT_GFX_IMELDA,
#line 1699
        .mapSec = MAPSEC_ESPULEE_OUTSKIRTS,
#line 0
        .trainerBackPic = TRAINER_PIC_IMELDA,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1701
            .species = SPECIES_REVAVROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1701
            .heldItem = ITEM_COVERT_CLOAK,
#line 1707
            .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
#line 1709
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1702
            .ability = ABILITY_OVERCOAT,
#line 1703
            .lvl = 75,
#line 1704
            .ball = ITEM_MASTER_BALL,
#line 1706
            .friendship = 1,
#line 1708
            .nature = NATURE_JOLLY,
#line 1705
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1709
                MOVE_SPIN_OUT,
                MOVE_POISON_GAS,
                MOVE_GUNK_SHOT,
                MOVE_TOXIC_SPIKES,
            },
            },
            {
#line 1714
            .species = SPECIES_POLTEAGEIST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1714
            .heldItem = ITEM_WHITE_HERB,
#line 1720
            .ev = TRAINER_PARTY_EVS(140, 0, 100, 252, 16, 0),
#line 1722
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1715
            .ability = ABILITY_WEAK_ARMOR,
#line 1716
            .lvl = 74,
#line 1717
            .ball = ITEM_MASTER_BALL,
#line 1719
            .friendship = 1,
#line 1721
            .nature = NATURE_TIMID,
#line 1718
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1723
                MOVE_SHADOW_BALL,
                MOVE_GIGA_DRAIN,
                MOVE_SHELL_SMASH,
                MOVE_DARK_PULSE,
            },
            },
            {
#line 1728
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1728
            .heldItem = ITEM_PSYCHIUM_Z,
#line 1734
            .ev = TRAINER_PARTY_EVS(128, 0, 132, 0, 248, 0),
#line 1736
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
#line 1729
            .ability = ABILITY_FLASH_FIRE,
#line 1730
            .lvl = 76,
#line 1731
            .ball = ITEM_MASTER_BALL,
#line 1733
            .friendship = 1,
#line 1735
            .nature = NATURE_RELAXED,
#line 1732
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1737
                MOVE_SHADOW_BALL,
                MOVE_HEAT_WAVE,
                MOVE_TRICK_ROOM,
                MOVE_INFERNO,
            },
            },
            {
#line 1742
            .species = SPECIES_DHELMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1742
            .heldItem = ITEM_ASSAULT_VEST,
#line 1748
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
#line 1750
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 1743
            .ability = ABILITY_STEELWORKER,
#line 1744
            .lvl = 75,
#line 1745
            .ball = ITEM_MASTER_BALL,
#line 1747
            .friendship = 1,
#line 1749
            .nature = NATURE_BRAVE,
#line 1746
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1751
                MOVE_POLTERGEIST,
                MOVE_POWER_WHIP,
                MOVE_ANCHOR_SHOT,
                MOVE_LIQUIDATION,
            },
            },
            {
#line 1757
            .species = SPECIES_GARBODOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1763
            .ev = TRAINER_PARTY_EVS(4, 248, 128, 0, 0, 128),
#line 1765
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 1758
            .ability = ABILITY_STENCH,
#line 1759
            .lvl = 76,
#line 1760
            .ball = ITEM_MASTER_BALL,
#line 1762
            .friendship = 1,
#line 1764
            .nature = NATURE_BRAVE,
#line 1761
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1766
                MOVE_GUNK_SHOT,
                MOVE_PAYBACK,
                MOVE_SEED_BOMB,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 1771
    [DIFFICULTY_NORMAL][TRAINER_ADAORA_HOWDISAPPOINTING] =
    {
#line 1772
        .trainerName = _("Adaora"),
#line 1777
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 1773
        .trainerPic = TRAINER_PIC_ADAORA,
        .encounterMusic_gender =
0,
#line 1775
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1774
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 1776
        .characterRevealId = REVEAL_ADAORA,
#line 1778
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 1779
        .objectEventGraphicsId = OBJ_EVENT_GFX_ADAORA,
#line 1780
        .mapSec = MAPSEC_HODOU_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_ADAORA,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1782
            .species = SPECIES_BARRASKEWDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1782
            .heldItem = ITEM_CHOICE_BAND,
#line 1788
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1790
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1783
            .ability = ABILITY_SWIFT_SWIM,
#line 1784
            .lvl = 73,
#line 1785
            .ball = ITEM_MASTER_BALL,
#line 1787
            .friendship = 1,
#line 1789
            .nature = NATURE_ADAMANT,
#line 1786
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1790
                MOVE_LIQUIDATION,
                MOVE_FLIP_TURN,
                MOVE_CLOSE_COMBAT,
                MOVE_CRUNCH,
            },
            },
            {
#line 1795
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1795
            .heldItem = ITEM_ROCKIUM_Z,
#line 1801
            .ev = TRAINER_PARTY_EVS(136, 100, 8, 252, 0, 12),
#line 1803
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1796
            .ability = ABILITY_SWIFT_SWIM,
#line 1797
            .lvl = 74,
#line 1798
            .ball = ITEM_MASTER_BALL,
#line 1800
            .friendship = 1,
#line 1802
            .nature = NATURE_JOLLY,
#line 1799
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1803
                MOVE_ROCK_SLIDE,
                MOVE_X_SCISSOR,
                MOVE_STONE_EDGE,
                MOVE_STOMPING_TANTRUM,
            },
            },
            {
#line 1808
            .species = SPECIES_GRAPPLOCT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1808
            .heldItem = ITEM_ASSAULT_VEST,
#line 1814
            .ev = TRAINER_PARTY_EVS(252, 112, 132, 0, 0, 12),
#line 1816
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1809
            .ability = ABILITY_TECHNICIAN,
#line 1810
            .lvl = 73,
#line 1811
            .ball = ITEM_MASTER_BALL,
#line 1813
            .friendship = 1,
#line 1815
            .nature = NATURE_ADAMANT,
#line 1812
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1816
                MOVE_CLOSE_COMBAT,
                MOVE_CIRCLE_THROW,
                MOVE_LIQUIDATION,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 1821
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1821
            .heldItem = ITEM_FOCUS_SASH,
#line 1827
            .ev = TRAINER_PARTY_EVS(8, 248, 0, 252, 0, 0),
#line 1829
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1822
            .ability = ABILITY_TECHNICIAN,
#line 1823
            .lvl = 74,
#line 1824
            .ball = ITEM_MASTER_BALL,
#line 1826
            .friendship = 1,
#line 1828
            .nature = NATURE_JOLLY,
#line 1825
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1829
                MOVE_MACH_PUNCH,
                MOVE_BULLET_SEED,
                MOVE_SPORE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 1834
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1834
            .heldItem = ITEM_CHOICE_SPECS,
#line 1840
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 12, 248, 0),
#line 1842
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1835
            .ability = ABILITY_RAIN_DISH,
#line 1836
            .lvl = 74,
#line 1837
            .ball = ITEM_MASTER_BALL,
#line 1839
            .friendship = 1,
#line 1841
            .nature = NATURE_MODEST,
#line 1838
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1843
                MOVE_SLUDGE_BOMB,
                MOVE_MUDDY_WATER,
                MOVE_DAZZLING_GLEAM,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 1849
            .species = SPECIES_DREDNAW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1855
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
#line 1857
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1850
            .ability = ABILITY_SWIFT_SWIM,
#line 1851
            .lvl = 75,
#line 1852
            .ball = ITEM_MASTER_BALL,
#line 1854
            .friendship = 1,
#line 1856
            .nature = NATURE_CAREFUL,
#line 1853
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1857
                MOVE_ROCK_SLIDE,
                MOVE_LIQUIDATION,
                MOVE_HIGH_HORSEPOWER,
                MOVE_BODY_PRESS,
            },
            },
        },
    },
#line 1862
    [DIFFICULTY_NORMAL][TRAINER_BAIYA_LETSBURNTHISMOTHERDOWN] =
    {
#line 1863
        .trainerName = _("Baiya"),
#line 1865
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 1864
        .trainerPic = TRAINER_PIC_BAIYA,
        .encounterMusic_gender =
0,
#line 1867
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1866
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_BAIYA,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1869
            .species = SPECIES_KLEFKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1869
            .heldItem = ITEM_LIGHT_CLAY,
#line 1875
            .ev = TRAINER_PARTY_EVS(248, 0, 32, 0, 196, 32),
#line 1877
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1870
            .ability = ABILITY_PRANKSTER,
#line 1871
            .lvl = 74,
#line 1872
            .ball = ITEM_MASTER_BALL,
#line 1874
            .friendship = 1,
#line 1876
            .nature = NATURE_MODEST,
#line 1873
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1878
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_DAZZLING_GLEAM,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 1883
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1883
            .heldItem = ITEM_LOPUNNITE,
#line 1889
            .ev = TRAINER_PARTY_EVS(100, 156, 0, 252, 0, 0),
#line 1891
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1884
            .ability = ABILITY_CUTE_CHARM,
#line 1885
            .lvl = 76,
#line 1886
            .ball = ITEM_MASTER_BALL,
#line 1888
            .friendship = 1,
#line 1890
            .nature = NATURE_JOLLY,
#line 1887
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1891
                MOVE_FAKE_OUT,
                MOVE_FACADE,
                MOVE_HIGH_JUMP_KICK,
                MOVE_U_TURN,
            },
            },
            {
#line 1896
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1896
            .heldItem = ITEM_LIFE_ORB,
#line 1902
            .ev = TRAINER_PARTY_EVS(0, 100, 0, 212, 196, 0),
#line 1904
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1897
            .ability = ABILITY_SHEER_FORCE,
#line 1898
            .lvl = 75,
#line 1899
            .ball = ITEM_MASTER_BALL,
#line 1901
            .friendship = 1,
#line 1903
            .nature = NATURE_HASTY,
#line 1900
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1904
                MOVE_EARTH_POWER,
                MOVE_SLUDGE_BOMB,
                MOVE_ROCK_SLIDE,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 1909
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1909
            .heldItem = ITEM_BIG_ROOT,
#line 1915
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1917
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1910
            .ability = ABILITY_FLASH_FIRE,
#line 1911
            .lvl = 75,
#line 1912
            .ball = ITEM_MASTER_BALL,
#line 1914
            .friendship = 1,
#line 1916
            .nature = NATURE_ADAMANT,
#line 1913
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1917
                MOVE_BITTER_BLADE,
                MOVE_SHADOW_CLAW,
                MOVE_SHADOW_SNEAK,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 1922
            .species = SPECIES_ROTOM_WASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1922
            .heldItem = ITEM_SITRUS_BERRY,
#line 1928
            .ev = TRAINER_PARTY_EVS(156, 0, 0, 252, 100, 0),
#line 1930
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1923
            .ability = ABILITY_LEVITATE,
#line 1924
            .lvl = 75,
#line 1925
            .ball = ITEM_MASTER_BALL,
#line 1927
            .friendship = 1,
#line 1929
            .nature = NATURE_TIMID,
#line 1926
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1931
                MOVE_HYDRO_PUMP,
                MOVE_THUNDERBOLT,
                MOVE_WILL_O_WISP,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 1936
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1936
            .heldItem = ITEM_FLYINIUM_Z,
#line 1942
            .ev = TRAINER_PARTY_EVS(52, 252, 0, 200, 0, 4),
#line 1944
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1937
            .ability = ABILITY_INNER_FOCUS,
#line 1938
            .lvl = 77,
#line 1939
            .ball = ITEM_MASTER_BALL,
#line 1941
            .friendship = 1,
#line 1943
            .nature = NATURE_ADAMANT,
#line 1940
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1944
                MOVE_DRAGON_CLAW,
                MOVE_FLY,
                MOVE_IRON_HEAD,
                MOVE_DRAGON_DANCE,
            },
            },
        },
    },
#line 1949
    [DIFFICULTY_NORMAL][TRAINER_DIANTHA] =
    {
#line 1950
        .trainerName = _("Diantha"),
#line 1951
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 1952
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1954
            .species = SPECIES_HAWLUCHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1954
            .heldItem = ITEM_FLYING_GEM,
#line 1960
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1962
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1955
            .ability = ABILITY_UNBURDEN,
#line 1956
            .lvl = 77,
#line 1957
            .ball = ITEM_MASTER_BALL,
#line 1959
            .friendship = 1,
#line 1961
            .nature = NATURE_ADAMANT,
#line 1958
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1962
                MOVE_ACROBATICS,
                MOVE_FLYING_PRESS,
                MOVE_X_SCISSOR,
                MOVE_POISON_JAB,
            },
            },
            {
#line 1967
            .species = SPECIES_TYRANTRUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1967
            .heldItem = ITEM_ASSAULT_VEST,
#line 1973
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 1975
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1968
            .ability = ABILITY_ROCK_HEAD,
#line 1969
            .lvl = 76,
#line 1970
            .ball = ITEM_MASTER_BALL,
#line 1972
            .friendship = 1,
#line 1974
            .nature = NATURE_ADAMANT,
#line 1971
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1975
                MOVE_HEAD_SMASH,
                MOVE_DRAGON_CLAW,
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 1980
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1980
            .heldItem = ITEM_EJECT_BUTTON,
#line 1986
            .ev = TRAINER_PARTY_EVS(244, 0, 80, 0, 172, 12),
#line 1988
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1981
            .ability = ABILITY_REGENERATOR,
#line 1982
            .lvl = 76,
#line 1983
            .ball = ITEM_MASTER_BALL,
#line 1985
            .friendship = 1,
#line 1987
            .nature = NATURE_MODEST,
#line 1984
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1989
                MOVE_SLUDGE_BOMB,
                MOVE_GRASS_KNOT,
                MOVE_SPORE,
                MOVE_FOUL_PLAY,
            },
            },
            {
#line 1994
            .species = SPECIES_AEGISLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1994
            .heldItem = ITEM_LIFE_ORB,
#line 2000
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 8, 252, 0),
#line 2002
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1995
            .ability = ABILITY_STANCE_CHANGE,
#line 1996
            .lvl = 78,
#line 1997
            .ball = ITEM_MASTER_BALL,
#line 1999
            .friendship = 1,
#line 2001
            .nature = NATURE_MODEST,
#line 1998
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2002
                MOVE_FLASH_CANNON,
                MOVE_SHADOW_BALL,
                MOVE_KINGS_SHIELD,
                MOVE_SHADOW_SNEAK,
            },
            },
            {
#line 2007
            .species = SPECIES_BAXCALIBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2007
            .heldItem = ITEM_ICIUM_Z,
#line 2013
            .ev = TRAINER_PARTY_EVS(76, 180, 0, 252, 0, 0),
#line 2015
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2008
            .ability = ABILITY_THERMAL_EXCHANGE,
#line 2009
            .lvl = 78,
#line 2010
            .ball = ITEM_MASTER_BALL,
#line 2012
            .friendship = 1,
#line 2014
            .nature = NATURE_ADAMANT,
#line 2011
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2015
                MOVE_ICICLE_CRASH,
                MOVE_GLAIVE_RUSH,
                MOVE_HIGH_HORSEPOWER,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 2020
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2020
            .heldItem = ITEM_GARDEVOIRITE,
#line 2026
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2028
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2021
            .ability = ABILITY_TRACE,
#line 2022
            .lvl = 79,
#line 2023
            .ball = ITEM_MASTER_BALL,
#line 2025
            .friendship = 1,
#line 2027
            .nature = NATURE_TIMID,
#line 2024
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2029
                MOVE_MOONBLAST,
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 2034
    [DIFFICULTY_NORMAL][TRAINER_KEI_YING_WAREHOUSE_RAVE] =
    {
#line 2035
        .trainerName = _("Kei-ying"),
#line 2039
        .trainerClass = TRAINER_CLASS_SHARPRISE_COO,
#line 2036
        .trainerPic = TRAINER_PIC_KEI_YING,
        .encounterMusic_gender =
0,
#line 2037
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2038
        .characterRevealId = REVEAL_KEI_YING,
#line 2040
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2041
        .objectEventGraphicsId = OBJ_EVENT_GFX_KEIYING,
#line 2042
        .mapSec = MAPSEC_CURENO_PORT,
#line 0
        .trainerBackPic = TRAINER_PIC_KEI_YING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2044
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2044
            .heldItem = ITEM_FAIRY_GEM,
#line 2050
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 204, 252, 0),
#line 2052
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2045
            .ability = ABILITY_TELEPATHY,
#line 2046
            .lvl = 81,
#line 2047
            .ball = ITEM_MASTER_BALL,
#line 2049
            .friendship = 1,
#line 2051
            .nature = NATURE_TIMID,
#line 2048
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2053
                MOVE_MISTY_EXPLOSION,
            },
            },
            {
#line 2055
            .species = SPECIES_FLORGES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2055
            .heldItem = ITEM_FAIRY_GEM,
#line 2061
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2063
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2056
            .ability = ABILITY_FLOWER_VEIL,
#line 2057
            .lvl = 81,
#line 2058
            .ball = ITEM_MASTER_BALL,
#line 2060
            .friendship = 1,
#line 2062
            .nature = NATURE_TIMID,
#line 2059
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2064
                MOVE_MISTY_EXPLOSION,
            },
            },
            {
#line 2066
            .species = SPECIES_HATTERENE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2066
            .heldItem = ITEM_FAIRY_GEM,
#line 2072
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
#line 2074
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2067
            .ability = ABILITY_MAGIC_BOUNCE,
#line 2068
            .lvl = 81,
#line 2069
            .ball = ITEM_MASTER_BALL,
#line 2071
            .friendship = 1,
#line 2073
            .nature = NATURE_MODEST,
#line 2070
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2075
                MOVE_MISTY_EXPLOSION,
            },
            },
            {
#line 2077
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2077
            .heldItem = ITEM_NORMAL_GEM,
#line 2083
            .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
#line 2085
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 2078
            .ability = ABILITY_LEVITATE,
#line 2079
            .lvl = 81,
#line 2080
            .ball = ITEM_MASTER_BALL,
#line 2082
            .friendship = 1,
#line 2084
            .nature = NATURE_BRAVE,
#line 2081
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2086
                MOVE_EXPLOSION,
            },
            },
        },
    },
#line 2088
    [DIFFICULTY_NORMAL][TRAINER_ARRIBA_CEO] =
    {
#line 2089
        .trainerName = _("Arribaceo"),
#line 2090
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 2091
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2093
            .species = SPECIES_REVAVROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2093
            .heldItem = ITEM_SHUCA_BERRY,
#line 2099
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2101
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2094
            .ability = ABILITY_FILTER,
#line 2095
            .lvl = 80,
#line 2096
            .ball = ITEM_MASTER_BALL,
#line 2098
            .friendship = 1,
#line 2100
            .nature = NATURE_JOLLY,
#line 2097
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2101
                MOVE_SPIN_OUT,
                MOVE_GUNK_SHOT,
                MOVE_OVERHEAT,
                MOVE_SHIFT_GEAR,
            },
            },
            {
#line 2106
            .species = SPECIES_ROTOM_FAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2106
            .heldItem = ITEM_ASSAULT_VEST,
#line 2112
            .ev = TRAINER_PARTY_EVS(128, 0, 0, 128, 252, 0),
#line 2114
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2107
            .ability = ABILITY_LEVITATE,
#line 2108
            .lvl = 79,
#line 2109
            .ball = ITEM_MASTER_BALL,
#line 2111
            .friendship = 1,
#line 2113
            .nature = NATURE_TIMID,
#line 2110
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2115
                MOVE_THUNDERBOLT,
                MOVE_AIR_SLASH,
                MOVE_VOLT_SWITCH,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 2120
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2120
            .heldItem = ITEM_FOCUS_SASH,
#line 2126
            .ev = TRAINER_PARTY_EVS(8, 248, 0, 252, 0, 0),
#line 2128
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2121
            .ability = ABILITY_SPEED_BOOST,
#line 2122
            .lvl = 79,
#line 2123
            .ball = ITEM_MASTER_BALL,
#line 2125
            .friendship = 1,
#line 2127
            .nature = NATURE_ADAMANT,
#line 2124
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2128
                MOVE_WATERFALL,
                MOVE_CRUNCH,
                MOVE_PROTECT,
                MOVE_PSYCHIC_FANGS,
            },
            },
            {
#line 2133
            .species = SPECIES_HAWLUCHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2133
            .heldItem = ITEM_FIGHTING_GEM,
#line 2139
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2141
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2134
            .ability = ABILITY_UNBURDEN,
#line 2135
            .lvl = 80,
#line 2136
            .ball = ITEM_MASTER_BALL,
#line 2138
            .friendship = 1,
#line 2140
            .nature = NATURE_ADAMANT,
#line 2137
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2141
                MOVE_FLYING_PRESS,
                MOVE_ACROBATICS,
                MOVE_ROCK_SLIDE,
                MOVE_U_TURN,
            },
            },
        },
    },
#line 2146
    [DIFFICULTY_NORMAL][TRAINER_BUZZR_CEO] =
    {
#line 2147
        .trainerName = _("Arribaceo"),
#line 2148
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 2149
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2151
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2151
            .heldItem = ITEM_FLAME_ORB,
#line 2157
            .ev = TRAINER_PARTY_EVS(8, 248, 0, 252, 0, 0),
#line 2159
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2152
            .ability = ABILITY_GUTS,
#line 2153
            .lvl = 80,
#line 2154
            .ball = ITEM_MASTER_BALL,
#line 2156
            .friendship = 1,
#line 2158
            .nature = NATURE_JOLLY,
#line 2155
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2159
                MOVE_FACADE,
                MOVE_DUAL_WINGBEAT,
                MOVE_PROTECT,
                MOVE_PARTING_SHOT,
            },
            },
            {
#line 2164
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2164
            .heldItem = ITEM_PSYCHIC_SEED,
#line 2170
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 60, 192, 4),
#line 2172
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2165
            .ability = ABILITY_ADAPTABILITY,
#line 2166
            .lvl = 79,
#line 2167
            .ball = ITEM_MASTER_BALL,
#line 2169
            .friendship = 1,
#line 2171
            .nature = NATURE_MODEST,
#line 2168
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2173
                MOVE_TRI_ATTACK,
                MOVE_ICE_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_CONVERSION_2,
            },
            },
            {
#line 2178
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2178
            .heldItem = ITEM_FOCUS_SASH,
#line 2184
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2186
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2179
            .ability = ABILITY_SHARPNESS,
#line 2180
            .lvl = 79,
#line 2181
            .ball = ITEM_MASTER_BALL,
#line 2183
            .friendship = 1,
#line 2185
            .nature = NATURE_JOLLY,
#line 2182
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2186
                MOVE_PSYCHO_CUT,
                MOVE_SACRED_SWORD,
                MOVE_LEAF_BLADE,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 2191
            .species = SPECIES_ARMAROUGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2191
            .heldItem = ITEM_PSYCHIC_GEM,
#line 2197
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 252, 204, 0),
#line 2199
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2192
            .ability = ABILITY_FLASH_FIRE,
#line 2193
            .lvl = 80,
#line 2194
            .ball = ITEM_MASTER_BALL,
#line 2196
            .friendship = 1,
#line 2198
            .nature = NATURE_MODEST,
#line 2195
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2200
                MOVE_EXPANDING_FORCE,
                MOVE_ARMOR_CANNON,
                MOVE_ENERGY_BALL,
                MOVE_CALM_MIND,
            },
            },
        },
    },
#line 2205
    [DIFFICULTY_NORMAL][TRAINER_PRESTO_CEO] =
    {
#line 2206
        .trainerName = _("Buzzrceo"),
#line 2207
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 2208
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2210
            .species = SPECIES_DRACOZOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2210
            .heldItem = ITEM_BLUNDER_POLICY,
#line 2216
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2218
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2211
            .ability = ABILITY_HUSTLE,
#line 2212
            .lvl = 80,
#line 2213
            .ball = ITEM_MASTER_BALL,
#line 2215
            .friendship = 1,
#line 2217
            .nature = NATURE_JOLLY,
#line 2214
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2218
                MOVE_BOLT_BEAK,
                MOVE_DRAGON_CLAW,
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 2223
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2223
            .heldItem = ITEM_ELECTRIC_SEED,
#line 2229
            .ev = TRAINER_PARTY_EVS(252, 248, 4, 0, 0, 4),
#line 2231
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2224
            .ability = ABILITY_UNBURDEN,
#line 2225
            .lvl = 79,
#line 2226
            .ball = ITEM_MASTER_BALL,
#line 2228
            .friendship = 1,
#line 2230
            .nature = NATURE_ADAMANT,
#line 2227
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2231
                MOVE_HIGH_JUMP_KICK,
                MOVE_BLAZE_KICK,
                MOVE_BULLET_PUNCH,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 2236
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2236
            .heldItem = ITEM_ASSAULT_VEST,
#line 2242
            .ev = TRAINER_PARTY_EVS(56, 252, 4, 192, 0, 4),
#line 2244
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2237
            .ability = ABILITY_TECHNICIAN,
#line 2238
            .lvl = 79,
#line 2239
            .ball = ITEM_MASTER_BALL,
#line 2241
            .friendship = 1,
#line 2243
            .nature = NATURE_JOLLY,
#line 2240
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2244
                MOVE_BULLET_PUNCH,
                MOVE_BUG_BITE,
                MOVE_AERIAL_ACE,
                MOVE_U_TURN,
            },
            },
            {
#line 2249
            .species = SPECIES_VIKAVOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2249
            .heldItem = ITEM_ELECTRIC_GEM,
#line 2255
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
#line 2257
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2250
            .ability = ABILITY_LEVITATE,
#line 2251
            .lvl = 80,
#line 2252
            .ball = ITEM_MASTER_BALL,
#line 2254
            .friendship = 1,
#line 2256
            .nature = NATURE_MODEST,
#line 2253
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2258
                MOVE_RISING_VOLTAGE,
                MOVE_BUG_BUZZ,
                MOVE_ROOST,
                MOVE_FLASH_CANNON,
            },
            },
        },
    },
#line 2263
    [DIFFICULTY_NORMAL][TRAINER_ARRIBA_CEO_RAID] =
    {
#line 2264
        .trainerName = _("Buzzrceo"),
#line 2265
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 2266
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2268
            .species = SPECIES_REVAVROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2268
            .heldItem = ITEM_SHUCA_BERRY,
#line 2274
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2276
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2269
            .ability = ABILITY_FILTER,
#line 2270
            .lvl = 80,
#line 2271
            .ball = ITEM_MASTER_BALL,
#line 2273
            .friendship = 1,
#line 2275
            .nature = NATURE_JOLLY,
#line 2272
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2276
                MOVE_SPIN_OUT,
                MOVE_GUNK_SHOT,
                MOVE_OVERHEAT,
                MOVE_SHIFT_GEAR,
            },
            },
            {
#line 2281
            .species = SPECIES_ROTOM_FAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2281
            .heldItem = ITEM_ASSAULT_VEST,
#line 2287
            .ev = TRAINER_PARTY_EVS(128, 0, 0, 128, 252, 0),
#line 2289
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2282
            .ability = ABILITY_LEVITATE,
#line 2283
            .lvl = 79,
#line 2284
            .ball = ITEM_MASTER_BALL,
#line 2286
            .friendship = 1,
#line 2288
            .nature = NATURE_TIMID,
#line 2285
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2290
                MOVE_THUNDERBOLT,
                MOVE_AIR_SLASH,
                MOVE_VOLT_SWITCH,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 2295
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2295
            .heldItem = ITEM_FOCUS_SASH,
#line 2301
            .ev = TRAINER_PARTY_EVS(8, 248, 0, 252, 0, 0),
#line 2303
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2296
            .ability = ABILITY_SPEED_BOOST,
#line 2297
            .lvl = 79,
#line 2298
            .ball = ITEM_MASTER_BALL,
#line 2300
            .friendship = 1,
#line 2302
            .nature = NATURE_ADAMANT,
#line 2299
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2303
                MOVE_WATERFALL,
                MOVE_CRUNCH,
                MOVE_PROTECT,
                MOVE_PSYCHIC_FANGS,
            },
            },
            {
#line 2308
            .species = SPECIES_HAWLUCHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2308
            .heldItem = ITEM_FIGHTING_GEM,
#line 2314
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2316
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2309
            .ability = ABILITY_UNBURDEN,
#line 2310
            .lvl = 80,
#line 2311
            .ball = ITEM_MASTER_BALL,
#line 2313
            .friendship = 1,
#line 2315
            .nature = NATURE_ADAMANT,
#line 2312
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2316
                MOVE_FLYING_PRESS,
                MOVE_ACROBATICS,
                MOVE_ROCK_SLIDE,
                MOVE_U_TURN,
            },
            },
            {
#line 2321
            .species = SPECIES_PHEROMOSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2321
            .heldItem = ITEM_FIGHTINIUM_Z,
#line 2327
            .ev = TRAINER_PARTY_EVS(100, 28, 0, 128, 252, 0),
#line 2328
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2322
            .ability = ABILITY_SWIFT_ASCENT,
#line 2323
            .lvl = 81,
#line 2324
            .ball = ITEM_MASTER_BALL,
#line 2326
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 2325
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2328
                MOVE_FOCUS_BLAST,
                MOVE_BUG_BUZZ,
                MOVE_ICE_BEAM,
                MOVE_CLOSE_COMBAT,
            },
            },
        },
    },
#line 2333
    [DIFFICULTY_NORMAL][TRAINER_BUZZR_CEO_RAID] =
    {
#line 2334
        .trainerName = _("Prestoceo"),
#line 2335
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 2336
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2338
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2338
            .heldItem = ITEM_FLAME_ORB,
#line 2344
            .ev = TRAINER_PARTY_EVS(8, 248, 0, 252, 0, 0),
#line 2346
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2339
            .ability = ABILITY_GUTS,
#line 2340
            .lvl = 80,
#line 2341
            .ball = ITEM_MASTER_BALL,
#line 2343
            .friendship = 1,
#line 2345
            .nature = NATURE_JOLLY,
#line 2342
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2346
                MOVE_FACADE,
                MOVE_DUAL_WINGBEAT,
                MOVE_PROTECT,
                MOVE_PARTING_SHOT,
            },
            },
            {
#line 2351
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2351
            .heldItem = ITEM_PSYCHIC_SEED,
#line 2357
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 60, 192, 4),
#line 2359
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2352
            .ability = ABILITY_ADAPTABILITY,
#line 2353
            .lvl = 79,
#line 2354
            .ball = ITEM_MASTER_BALL,
#line 2356
            .friendship = 1,
#line 2358
            .nature = NATURE_MODEST,
#line 2355
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2360
                MOVE_TRI_ATTACK,
                MOVE_ICE_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_CONVERSION_2,
            },
            },
            {
#line 2365
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2365
            .heldItem = ITEM_FOCUS_SASH,
#line 2371
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2373
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2366
            .ability = ABILITY_SHARPNESS,
#line 2367
            .lvl = 79,
#line 2368
            .ball = ITEM_MASTER_BALL,
#line 2370
            .friendship = 1,
#line 2372
            .nature = NATURE_JOLLY,
#line 2369
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2373
                MOVE_PSYCHO_CUT,
                MOVE_SACRED_SWORD,
                MOVE_LEAF_BLADE,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 2378
            .species = SPECIES_ARMAROUGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2378
            .heldItem = ITEM_PSYCHIC_GEM,
#line 2384
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 252, 204, 0),
#line 2386
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2379
            .ability = ABILITY_FLASH_FIRE,
#line 2380
            .lvl = 80,
#line 2381
            .ball = ITEM_MASTER_BALL,
#line 2383
            .friendship = 1,
#line 2385
            .nature = NATURE_MODEST,
#line 2382
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2387
                MOVE_EXPANDING_FORCE,
                MOVE_ARMOR_CANNON,
                MOVE_ENERGY_BALL,
                MOVE_CALM_MIND,
            },
            },
            {
#line 2392
            .species = SPECIES_BLACEPHALON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2392
            .heldItem = ITEM_PSYCHIUM_Z,
#line 2398
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2400
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2393
            .ability = ABILITY_SWIFT_ASCENT,
#line 2394
            .lvl = 81,
#line 2395
            .ball = ITEM_MASTER_BALL,
#line 2397
            .friendship = 1,
#line 2399
            .nature = NATURE_TIMID,
#line 2396
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2401
                MOVE_EXPANDING_FORCE,
                MOVE_SHADOW_BALL,
                MOVE_FLAMETHROWER,
                MOVE_MIND_BLOWN,
            },
            },
        },
    },
#line 2406
    [DIFFICULTY_NORMAL][TRAINER_PRESTO_CEO_RAID] =
    {
#line 2407
        .trainerName = _("Prestoceo"),
#line 2408
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 2409
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2411
            .species = SPECIES_DRACOZOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2411
            .heldItem = ITEM_BLUNDER_POLICY,
#line 2417
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2419
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2412
            .ability = ABILITY_HUSTLE,
#line 2413
            .lvl = 80,
#line 2414
            .ball = ITEM_MASTER_BALL,
#line 2416
            .friendship = 1,
#line 2418
            .nature = NATURE_JOLLY,
#line 2415
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2419
                MOVE_BOLT_BEAK,
                MOVE_DRAGON_CLAW,
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 2424
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2424
            .heldItem = ITEM_ELECTRIC_SEED,
#line 2430
            .ev = TRAINER_PARTY_EVS(252, 248, 4, 0, 0, 4),
#line 2432
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2425
            .ability = ABILITY_UNBURDEN,
#line 2426
            .lvl = 79,
#line 2427
            .ball = ITEM_MASTER_BALL,
#line 2429
            .friendship = 1,
#line 2431
            .nature = NATURE_ADAMANT,
#line 2428
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2432
                MOVE_HIGH_JUMP_KICK,
                MOVE_BLAZE_KICK,
                MOVE_BULLET_PUNCH,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 2437
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2437
            .heldItem = ITEM_ASSAULT_VEST,
#line 2443
            .ev = TRAINER_PARTY_EVS(56, 252, 4, 192, 0, 4),
#line 2445
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2438
            .ability = ABILITY_TECHNICIAN,
#line 2439
            .lvl = 79,
#line 2440
            .ball = ITEM_MASTER_BALL,
#line 2442
            .friendship = 1,
#line 2444
            .nature = NATURE_JOLLY,
#line 2441
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2445
                MOVE_BULLET_PUNCH,
                MOVE_BUG_BITE,
                MOVE_AERIAL_ACE,
                MOVE_U_TURN,
            },
            },
            {
#line 2450
            .species = SPECIES_VIKAVOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2450
            .heldItem = ITEM_ELECTRIC_GEM,
#line 2456
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
#line 2458
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2451
            .ability = ABILITY_LEVITATE,
#line 2452
            .lvl = 80,
#line 2453
            .ball = ITEM_MASTER_BALL,
#line 2455
            .friendship = 1,
#line 2457
            .nature = NATURE_MODEST,
#line 2454
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2459
                MOVE_RISING_VOLTAGE,
                MOVE_BUG_BUZZ,
                MOVE_ROOST,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 2464
            .species = SPECIES_XURKITREE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2464
            .heldItem = ITEM_ELECTRIUM_Z,
#line 2470
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
#line 2472
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2465
            .ability = ABILITY_SWIFT_ASCENT,
#line 2466
            .lvl = 81,
#line 2467
            .ball = ITEM_MASTER_BALL,
#line 2469
            .friendship = 1,
#line 2471
            .nature = NATURE_TIMID,
#line 2468
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2473
                MOVE_RISING_VOLTAGE,
                MOVE_DAZZLING_GLEAM,
                MOVE_ENERGY_BALL,
                MOVE_TAIL_GLOW,
            },
            },
        },
    },
#line 2478
    [DIFFICULTY_NORMAL][TRAINER_RAMESH_IMIN] =
    {
#line 2479
        .trainerName = _("Ramesh"),
#line 2483
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 2480
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
0,
#line 2481
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2482
        .characterRevealId = REVEAL_RAMESH,
#line 2484
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2485
        .objectEventGraphicsId = OBJ_EVENT_GFX_RAMESH,
#line 2486
        .mapSec = MAPSEC_SHARPRISESPIRE,
#line 0
        .trainerBackPic = TRAINER_PIC_MAGMA_ADMIN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2488
            .species = SPECIES_GHOLDENGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2488
            .heldItem = ITEM_STEEL_GEM,
#line 2494
            .ev = TRAINER_PARTY_EVS(248, 0, 96, 0, 0, 164),
#line 2496
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2489
            .ability = ABILITY_GOOD_AS_GOLD,
#line 2490
            .lvl = 84,
#line 2491
            .ball = ITEM_MASTER_BALL,
#line 2493
            .friendship = 1,
#line 2495
            .nature = NATURE_BOLD,
#line 2492
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2497
                MOVE_MAKE_IT_RAIN,
                MOVE_SHADOW_BALL,
                MOVE_NASTY_PLOT,
                MOVE_RECOVER,
            },
            },
            {
#line 2502
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2502
            .heldItem = ITEM_FOCUS_SASH,
#line 2508
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2510
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2503
            .ability = ABILITY_LEVITATE,
#line 2504
            .lvl = 83,
#line 2505
            .ball = ITEM_MASTER_BALL,
#line 2507
            .friendship = 1,
#line 2509
            .nature = NATURE_TIMID,
#line 2506
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2511
                MOVE_DARK_PULSE,
                MOVE_DRAGON_PULSE,
                MOVE_FLAMETHROWER,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 2516
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2516
            .heldItem = ITEM_ASSAULT_VEST,
#line 2522
            .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
#line 2524
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2517
            .ability = ABILITY_ROCK_HEAD,
#line 2518
            .lvl = 84,
#line 2519
            .ball = ITEM_MASTER_BALL,
#line 2521
            .friendship = 1,
#line 2523
            .nature = NATURE_CAREFUL,
#line 2520
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2524
                MOVE_HEAD_SMASH,
                MOVE_LIQUIDATION,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 2529
            .species = SPECIES_BUZZWOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2529
            .heldItem = ITEM_BUGINIUM_Z,
#line 2535
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
#line 2537
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2530
            .ability = ABILITY_SWIFT_ASCENT,
#line 2531
            .lvl = 85,
#line 2532
            .ball = ITEM_MASTER_BALL,
#line 2534
            .friendship = 1,
#line 2536
            .nature = NATURE_ADAMANT,
#line 2533
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2537
                MOVE_CLOSE_COMBAT,
                MOVE_LEECH_LIFE,
                MOVE_EARTHQUAKE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 2542
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2542
            .heldItem = ITEM_ALAKAZITE,
#line 2548
            .ev = TRAINER_PARTY_EVS(8, 0, 0, 248, 252, 0),
#line 2550
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2543
            .ability = ABILITY_SYNCHRONIZE,
#line 2544
            .lvl = 85,
#line 2545
            .ball = ITEM_MASTER_BALL,
#line 2547
            .friendship = 1,
#line 2549
            .nature = NATURE_TIMID,
#line 2546
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2551
                MOVE_PSYCHIC,
                MOVE_DAZZLING_GLEAM,
                MOVE_SHADOW_BALL,
                MOVE_FOCUS_BLAST,
            },
            },
        },
    },
#line 2556
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE_IMIN] =
    {
#line 2557
        .trainerName = _("Charlotte"),
#line 2558
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 2559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2561
            .species = SPECIES_ARMAROUGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2561
            .heldItem = ITEM_WEAKNESS_POLICY,
#line 2567
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
#line 2569
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2562
            .ability = ABILITY_WEAK_ARMOR,
#line 2563
            .lvl = 85,
#line 2564
            .ball = ITEM_MASTER_BALL,
#line 2566
            .friendship = 1,
#line 2568
            .nature = NATURE_TIMID,
#line 2565
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2570
                MOVE_ARMOR_CANNON,
                MOVE_PSYCHIC,
                MOVE_AURA_SPHERE,
                MOVE_ENERGY_BALL,
            },
            },
            {
#line 2575
            .species = SPECIES_HAXORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2575
            .heldItem = ITEM_ASSAULT_VEST,
#line 2581
            .ev = TRAINER_PARTY_EVS(152, 252, 4, 100, 0, 0),
#line 2583
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2576
            .ability = ABILITY_MOLD_BREAKER,
#line 2577
            .lvl = 86,
#line 2578
            .ball = ITEM_MASTER_BALL,
#line 2580
            .friendship = 1,
#line 2582
            .nature = NATURE_ADAMANT,
#line 2579
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2583
                MOVE_DRAGON_CLAW,
                MOVE_IRON_HEAD,
                MOVE_FIRST_IMPRESSION,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 2588
            .species = SPECIES_CORVIKNIGHT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2588
            .heldItem = ITEM_WACAN_BERRY,
#line 2594
            .ev = TRAINER_PARTY_EVS(252, 100, 0, 100, 0, 56),
#line 2596
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2589
            .ability = ABILITY_MIRROR_ARMOR,
#line 2590
            .lvl = 85,
#line 2591
            .ball = ITEM_MASTER_BALL,
#line 2593
            .friendship = 1,
#line 2595
            .nature = NATURE_ADAMANT,
#line 2592
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2596
                MOVE_IRON_HEAD,
                MOVE_BRAVE_BIRD,
                MOVE_BULK_UP,
                MOVE_POWER_TRIP,
            },
            },
            {
#line 2601
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2601
            .heldItem = ITEM_FAIRY_GEM,
#line 2607
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2609
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2602
            .ability = ABILITY_SYNCHRONIZE,
#line 2603
            .lvl = 86,
#line 2604
            .ball = ITEM_MASTER_BALL,
#line 2606
            .friendship = 1,
#line 2608
            .nature = NATURE_TIMID,
#line 2605
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2610
                MOVE_MOONBLAST,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 2615
            .species = SPECIES_SERPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2615
            .heldItem = ITEM_GRASSIUM_Z,
#line 2621
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
#line 2623
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2616
            .ability = ABILITY_CONTRARY,
#line 2617
            .lvl = 86,
#line 2618
            .ball = ITEM_MASTER_BALL,
#line 2620
            .friendship = 1,
#line 2622
            .nature = NATURE_QUIRKY,
#line 2619
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2623
                MOVE_LEAF_STORM,
                MOVE_AQUA_TAIL,
                MOVE_DRAGON_PULSE,
                MOVE_FRENZY_PLANT,
            },
            },
            {
#line 2629
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2635
            .ev = TRAINER_PARTY_EVS(176, 0, 0, 80, 252, 0),
#line 2637
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2630
            .ability = ABILITY_WATER_ABSORB,
#line 2631
            .lvl = 87,
#line 2632
            .ball = ITEM_MASTER_BALL,
#line 2634
            .friendship = 1,
#line 2636
            .nature = NATURE_MODEST,
#line 2633
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2638
                MOVE_ICE_BEAM,
                MOVE_SPARKLING_ARIA,
                MOVE_THUNDERBOLT,
                MOVE_REST,
            },
            },
        },
    },
#line 2643
    [DIFFICULTY_NORMAL][TRAINER_LUCREZIA_A] =
    {
#line 2644
        .trainerName = _("Lucrezia"),
#line 2648
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 2645
        .trainerPic = TRAINER_PIC_LUCREZIA,
        .encounterMusic_gender =
0,
#line 2646
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2647
        .characterRevealId = REVEAL_LUCREZIA,
#line 2649
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2650
        .objectEventGraphicsId = OBJ_EVENT_GFX_LUCREZIA,
#line 2651
        .mapSec = MAPSEC_SHARPRISESPIRE,
#line 0
        .trainerBackPic = TRAINER_PIC_LUCREZIA,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2653
            .species = SPECIES_SALAZZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2653
            .heldItem = ITEM_FOCUS_SASH,
#line 2659
            .ev = TRAINER_PARTY_EVS(8, 0, 0, 252, 248, 0),
#line 2661
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2654
            .ability = ABILITY_OBLIVIOUS,
#line 2655
            .lvl = 87,
#line 2656
            .ball = ITEM_MASTER_BALL,
#line 2658
            .friendship = 1,
#line 2660
            .nature = NATURE_TIMID,
#line 2657
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2662
                MOVE_FLAMETHROWER,
                MOVE_SLUDGE_WAVE,
                MOVE_TOXIC_SPIKES,
                MOVE_HIDDEN_POWER,
            },
            },
            {
#line 2667
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2667
            .heldItem = ITEM_CHOPLE_BERRY,
#line 2673
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 2675
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2668
            .ability = ABILITY_SAND_STREAM,
#line 2669
            .lvl = 86,
#line 2670
            .ball = ITEM_MASTER_BALL,
#line 2672
            .friendship = 1,
#line 2674
            .nature = NATURE_ADAMANT,
#line 2671
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2675
                MOVE_ROCK_SLIDE,
                MOVE_CRUNCH,
                MOVE_IRON_HEAD,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 2680
            .species = SPECIES_ANNIHILAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2680
            .heldItem = ITEM_FIGHTING_GEM,
#line 2686
            .ev = TRAINER_PARTY_EVS(252, 144, 12, 96, 0, 4),
#line 2688
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2681
            .ability = ABILITY_DEFIANT,
#line 2682
            .lvl = 86,
#line 2683
            .ball = ITEM_MASTER_BALL,
#line 2685
            .friendship = 1,
#line 2687
            .nature = NATURE_ADAMANT,
#line 2684
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2688
                MOVE_RAGE_FIST,
                MOVE_DRAIN_PUNCH,
                MOVE_BULK_UP,
                MOVE_CLOSE_COMBAT,
            },
            },
            {
#line 2693
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2693
            .heldItem = ITEM_SCOPE_LENS,
#line 2699
            .ev = TRAINER_PARTY_EVS(116, 0, 0, 248, 144, 0),
#line 2701
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2694
            .ability = ABILITY_SUPER_LUCK,
#line 2695
            .lvl = 87,
#line 2696
            .ball = ITEM_MASTER_BALL,
#line 2698
            .friendship = 1,
#line 2700
            .nature = NATURE_TIMID,
#line 2697
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2702
                MOVE_AIR_SLASH,
                MOVE_DAZZLING_GLEAM,
                MOVE_HEAT_WAVE,
                MOVE_TAILWIND,
            },
            },
            {
#line 2707
            .species = SPECIES_ARCHALUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2707
            .heldItem = ITEM_DRAGONIUM_Z,
#line 2713
            .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 252, 0),
#line 2715
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2708
            .ability = ABILITY_STAMINA,
#line 2709
            .lvl = 88,
#line 2710
            .ball = ITEM_MASTER_BALL,
#line 2712
            .friendship = 1,
#line 2714
            .nature = NATURE_BOLD,
#line 2711
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2716
                MOVE_DRACO_METEOR,
                MOVE_FLASH_CANNON,
                MOVE_BODY_PRESS,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 2722
            .species = SPECIES_ORBEETLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2728
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 8, 248, 0),
#line 2730
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2723
            .ability = ABILITY_FRISK,
#line 2724
            .lvl = 89,
#line 2725
            .ball = ITEM_MASTER_BALL,
#line 2727
            .friendship = 1,
#line 2729
            .nature = NATURE_MODEST,
#line 2726
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2731
                MOVE_EXPANDING_FORCE,
                MOVE_BUG_BUZZ,
                MOVE_ENERGY_BALL,
                MOVE_AGILITY,
            },
            },
        },
    },
#line 2736
    [DIFFICULTY_NORMAL][TRAINER_LUCREZIA_B] =
    {
#line 2737
        .trainerName = _("Lucrezia"),
#line 2738
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 2739
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2740
        .mapSec = MAPSEC_SHARPRISESPIRE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2742
            .species = SPECIES_NIHILEGO_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2742
            .heldItem = ITEM_POWER_HERB,
#line 2748
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2750
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2743
            .ability = ABILITY_SWIFT_ASCENT,
#line 2744
            .lvl = 90,
#line 2745
            .ball = ITEM_MASTER_BALL,
#line 2747
            .friendship = 1,
#line 2749
            .nature = NATURE_TIMID,
#line 2746
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2751
                MOVE_POWER_GEM,
                MOVE_SLUDGE_WAVE,
                MOVE_DAZZLING_GLEAM,
                MOVE_METEOR_BEAM,
            },
            },
            {
#line 2756
            .species = SPECIES_CELESTEELA_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2756
            .heldItem = ITEM_LEFTOVERS,
#line 2762
            .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 0, 128),
#line 2763
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2757
            .ability = ABILITY_SWIFT_ASCENT,
#line 2758
            .lvl = 90,
#line 2759
            .ball = ITEM_MASTER_BALL,
#line 2761
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 2760
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2763
                MOVE_HEAVY_SLAM,
                MOVE_LEECH_SEED,
                MOVE_PROTECT,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 2768
            .species = SPECIES_KARTANA_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2768
            .heldItem = ITEM_ASSAULT_VEST,
#line 2774
            .ev = TRAINER_PARTY_EVS(0, 8, 0, 252, 0, 248),
#line 2776
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2769
            .ability = ABILITY_SWIFT_ASCENT,
#line 2770
            .lvl = 90,
#line 2771
            .ball = ITEM_MASTER_BALL,
#line 2773
            .friendship = 1,
#line 2775
            .nature = NATURE_ADAMANT,
#line 2772
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2776
                MOVE_LEAF_BLADE,
                MOVE_SMART_STRIKE,
                MOVE_SACRED_SWORD,
                MOVE_GUILLOTINE,
            },
            },
            {
#line 2781
            .species = SPECIES_GUZZLORD_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2781
            .heldItem = ITEM_ROSELI_BERRY,
#line 2787
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 4),
#line 2788
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 2782
            .ability = ABILITY_SWIFT_ASCENT,
#line 2783
            .lvl = 90,
#line 2784
            .ball = ITEM_MASTER_BALL,
#line 2786
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 2785
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2789
                MOVE_DRAGON_PULSE,
                MOVE_DARK_PULSE,
                MOVE_FLAMETHROWER,
                MOVE_GYRO_BALL,
            },
            },
            {
#line 2794
            .species = SPECIES_NAGANADEL_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2794
            .heldItem = ITEM_POISONIUM_Z,
#line 2800
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2802
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2795
            .ability = ABILITY_SWIFT_ASCENT,
#line 2796
            .lvl = 90,
#line 2797
            .ball = ITEM_MASTER_BALL,
#line 2799
            .friendship = 1,
#line 2801
            .nature = NATURE_TIMID,
#line 2798
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2803
                MOVE_SLUDGE_WAVE,
                MOVE_DRACO_METEOR,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 2808
            .species = SPECIES_STAKATAKA_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2808
            .heldItem = ITEM_SHUCA_BERRY,
#line 2814
            .ev = TRAINER_PARTY_EVS(252, 0, 96, 0, 0, 160),
#line 2816
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 2809
            .ability = ABILITY_SWIFT_ASCENT,
#line 2810
            .lvl = 90,
#line 2811
            .ball = ITEM_MASTER_BALL,
#line 2813
            .friendship = 1,
#line 2815
            .nature = NATURE_CAREFUL,
#line 2812
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2817
                MOVE_GYRO_BALL,
                MOVE_STONE_EDGE,
                MOVE_BODY_PRESS,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 2822
    [DIFFICULTY_NORMAL][TRAINER_MAGNUS_PROLOGUE] =
    {
#line 2823
        .trainerName = _("Magnus"),
#line 2828
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 2824
        .trainerPic = TRAINER_PIC_MAGNUS,
        .encounterMusic_gender =
0,
#line 2826
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2825
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2827
        .characterRevealId = REVEAL_MAGNUS,
#line 2829
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2830
        .objectEventGraphicsId = OBJ_EVENT_GFX_MAGNUS,
#line 2831
        .mapSec = MAPSEC_OROLAND_COLISEUM,
#line 0
        .trainerBackPic = TRAINER_PIC_MAGNUS,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2833
            .species = SPECIES_DRACOVISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2833
            .heldItem = ITEM_MYSTIC_WATER,
#line 2839
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2841
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2834
            .ability = ABILITY_SAND_RUSH,
#line 2835
            .lvl = 87,
#line 2836
            .ball = ITEM_MASTER_BALL,
#line 2838
            .friendship = 1,
#line 2840
            .nature = NATURE_ADAMANT,
#line 2837
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2841
                MOVE_FISHIOUS_REND,
                MOVE_EARTHQUAKE,
                MOVE_DRAGON_RUSH,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 2846
            .species = SPECIES_SANDACONDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2846
            .heldItem = ITEM_SITRUS_BERRY,
#line 2852
            .ev = TRAINER_PARTY_EVS(252, 80, 0, 0, 0, 176),
#line 2854
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2847
            .ability = ABILITY_SAND_SPIT,
#line 2848
            .lvl = 88,
#line 2849
            .ball = ITEM_MASTER_BALL,
#line 2851
            .friendship = 1,
#line 2853
            .nature = NATURE_CAREFUL,
#line 2850
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2854
                MOVE_HIGH_HORSEPOWER,
                MOVE_STONE_EDGE,
                MOVE_GLARE,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 2859
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2859
            .heldItem = ITEM_SCOPE_LENS,
#line 2865
            .ev = TRAINER_PARTY_EVS(156, 0, 0, 252, 100, 0),
#line 2867
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2860
            .ability = ABILITY_SUPER_LUCK,
#line 2861
            .lvl = 87,
#line 2862
            .ball = ITEM_MASTER_BALL,
#line 2864
            .friendship = 1,
#line 2866
            .nature = NATURE_TIMID,
#line 2863
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2868
                MOVE_DAZZLING_GLEAM,
                MOVE_AIR_CUTTER,
                MOVE_TAILWIND,
                MOVE_FOLLOW_ME,
            },
            },
            {
#line 2873
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2873
            .heldItem = ITEM_FLYING_GEM,
#line 2879
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2881
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2874
            .ability = ABILITY_SAND_VEIL,
#line 2875
            .lvl = 87,
#line 2876
            .ball = ITEM_MASTER_BALL,
#line 2878
            .friendship = 1,
#line 2880
            .nature = NATURE_JOLLY,
#line 2877
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2881
                MOVE_ACROBATICS,
                MOVE_HIGH_HORSEPOWER,
                MOVE_SWORDS_DANCE,
                MOVE_BRICK_BREAK,
            },
            },
            {
#line 2886
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2886
            .heldItem = ITEM_GROUNDIUM_Z,
#line 2892
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2894
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2887
            .ability = ABILITY_SAND_RUSH,
#line 2888
            .lvl = 88,
#line 2889
            .ball = ITEM_MASTER_BALL,
#line 2891
            .friendship = 1,
#line 2893
            .nature = NATURE_ADAMANT,
#line 2890
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2894
                MOVE_DRILL_RUN,
                MOVE_IRON_HEAD,
                MOVE_ROCK_SLIDE,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 2899
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2899
            .heldItem = ITEM_TYRANITARITE,
#line 2905
            .ev = TRAINER_PARTY_EVS(252, 104, 0, 76, 0, 76),
#line 2907
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2900
            .ability = ABILITY_SAND_STREAM,
#line 2901
            .lvl = 89,
#line 2902
            .ball = ITEM_MASTER_BALL,
#line 2904
            .friendship = 1,
#line 2906
            .nature = NATURE_ADAMANT,
#line 2903
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2907
                MOVE_ROCK_SLIDE,
                MOVE_ASSURANCE,
                MOVE_STONE_EDGE,
                MOVE_AERIAL_ACE,
            },
            },
        },
    },
#line 2912
    [DIFFICULTY_NORMAL][TRAINER_ELEANOR] =
    {
#line 2913
        .trainerName = _("Eleanor"),
#line 2914
        .trainerPic = TRAINER_PIC_ELEANOR,
        .encounterMusic_gender =
0,
#line 2916
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2915
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2921
        .startingStatus = STARTING_STATUS_SWAMP_PLAYER,
#line 2917
        .characterRevealId = REVEAL_ELEANOR,
#line 2918
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2919
        .objectEventGraphicsId = OBJ_EVENT_GFX_ELEANOR,
#line 2920
        .mapSec = MAPSEC_NAVAL_BASE,
#line 0
        .trainerBackPic = TRAINER_PIC_ELEANOR,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2923
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2923
            .heldItem = ITEM_SITRUS_BERRY,
#line 2929
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
#line 2931
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2924
            .ability = ABILITY_SERENE_GRACE,
#line 2925
            .lvl = 89,
#line 2926
            .ball = ITEM_MASTER_BALL,
#line 2928
            .friendship = 1,
#line 2930
            .nature = NATURE_MODEST,
#line 2927
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2932
                MOVE_AIR_SLASH,
                MOVE_ANCIENT_POWER,
                MOVE_DAZZLING_GLEAM,
                MOVE_HEAT_WAVE,
            },
            },
            {
#line 2937
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2937
            .heldItem = ITEM_SWAMPERTITE,
#line 2943
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 2945
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2938
            .ability = ABILITY_TORRENT,
#line 2939
            .lvl = 91,
#line 2940
            .ball = ITEM_MASTER_BALL,
#line 2942
            .friendship = 1,
#line 2944
            .nature = NATURE_ADAMANT,
#line 2941
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2945
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ICE_PUNCH,
                MOVE_WATERFALL,
            },
            },
            {
#line 2950
            .species = SPECIES_DHELMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2950
            .heldItem = ITEM_GRASSIUM_Z,
#line 2956
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2958
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2951
            .ability = ABILITY_STEELWORKER,
#line 2952
            .lvl = 89,
#line 2953
            .ball = ITEM_MASTER_BALL,
#line 2955
            .friendship = 1,
#line 2957
            .nature = NATURE_JOLLY,
#line 2954
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2958
                MOVE_POWER_WHIP,
                MOVE_PHANTOM_FORCE,
                MOVE_ANCHOR_SHOT,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 2963
            .species = SPECIES_WYRDEER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2963
            .heldItem = ITEM_NORMAL_GEM,
#line 2969
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2971
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2964
            .ability = ABILITY_INTIMIDATE,
#line 2965
            .lvl = 90,
#line 2966
            .ball = ITEM_MASTER_BALL,
#line 2968
            .friendship = 1,
#line 2970
            .nature = NATURE_ADAMANT,
#line 2967
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2971
                MOVE_BODY_SLAM,
                MOVE_BITE,
                MOVE_ZEN_HEADBUTT,
                MOVE_HIGH_HORSEPOWER,
            },
            },
            {
#line 2976
            .species = SPECIES_TOXAPEX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2976
            .heldItem = ITEM_BLACK_SLUDGE,
#line 2982
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 2984
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2977
            .ability = ABILITY_MERCILESS,
#line 2978
            .lvl = 89,
#line 2979
            .ball = ITEM_MASTER_BALL,
#line 2981
            .friendship = 1,
#line 2983
            .nature = NATURE_ADAMANT,
#line 2980
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2984
                MOVE_POISON_JAB,
                MOVE_LIQUIDATION,
                MOVE_TOXIC,
                MOVE_BANEFUL_BUNKER,
            },
            },
            {
#line 2989
            .species = SPECIES_ARCHALUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2989
            .heldItem = ITEM_ASSAULT_VEST,
#line 2995
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
#line 2997
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2990
            .ability = ABILITY_STAMINA,
#line 2991
            .lvl = 90,
#line 2992
            .ball = ITEM_MASTER_BALL,
#line 2994
            .friendship = 1,
#line 2996
            .nature = NATURE_MODEST,
#line 2993
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2998
                MOVE_DRAGON_PULSE,
                MOVE_FLASH_CANNON,
                MOVE_BODY_PRESS,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 3003
    [DIFFICULTY_NORMAL][TRAINER_FRANK] =
    {
#line 3004
        .trainerName = _("Frank"),
#line 3005
        .trainerPic = TRAINER_PIC_FRANK,
        .encounterMusic_gender =
0,
#line 3007
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3006
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3008
        .characterRevealId = REVEAL_FRANK,
#line 3009
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 3010
        .objectEventGraphicsId = OBJ_EVENT_GFX_FRANK,
#line 3011
        .mapSec = MAPSEC_LEAVERRA_FOREST,
#line 0
        .trainerBackPic = TRAINER_PIC_FRANK,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3013
            .species = SPECIES_SCOVILLAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3013
            .heldItem = ITEM_LIFE_ORB,
#line 3019
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 176, 232, 0),
#line 3021
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3014
            .ability = ABILITY_CHLOROPHYLL,
#line 3015
            .lvl = 87,
#line 3016
            .ball = ITEM_MASTER_BALL,
#line 3018
            .friendship = 1,
#line 3020
            .nature = NATURE_MODEST,
#line 3017
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3022
                MOVE_FLAMETHROWER,
                MOVE_ENERGY_BALL,
                MOVE_WILL_O_WISP,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 3027
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3027
            .heldItem = ITEM_DRAGON_GEM,
#line 3033
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 3035
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3028
            .ability = ABILITY_LEVITATE,
#line 3029
            .lvl = 88,
#line 3030
            .ball = ITEM_MASTER_BALL,
#line 3032
            .friendship = 1,
#line 3034
            .nature = NATURE_TIMID,
#line 3031
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3036
                MOVE_HEAT_WAVE,
                MOVE_DARK_PULSE,
                MOVE_DRACO_METEOR,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 3041
            .species = SPECIES_MUSHARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3041
            .heldItem = ITEM_LEFTOVERS,
#line 3047
            .ev = TRAINER_PARTY_EVS(252, 0, 220, 0, 0, 36),
#line 3049
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3042
            .ability = ABILITY_TELEPATHY,
#line 3043
            .lvl = 88,
#line 3044
            .ball = ITEM_MASTER_BALL,
#line 3046
            .friendship = 1,
#line 3048
            .nature = NATURE_BOLD,
#line 3045
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3050
                MOVE_PSYCHIC,
                MOVE_DAZZLING_GLEAM,
                MOVE_CALM_MIND,
                MOVE_MOONLIGHT,
            },
            },
            {
#line 3055
            .species = SPECIES_URSALUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3055
            .heldItem = ITEM_FLAME_ORB,
#line 3061
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3063
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3056
            .ability = ABILITY_GUTS,
#line 3057
            .lvl = 87,
#line 3058
            .ball = ITEM_MASTER_BALL,
#line 3060
            .friendship = 1,
#line 3062
            .nature = NATURE_ADAMANT,
#line 3059
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3063
                MOVE_FACADE,
                MOVE_EARTHQUAKE,
                MOVE_HEADLONG_RUSH,
                MOVE_PROTECT,
            },
            },
            {
#line 3068
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3068
            .heldItem = ITEM_FIRIUM_Z,
#line 3074
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 36, 220, 0),
#line 3076
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3069
            .ability = ABILITY_FLAME_BODY,
#line 3070
            .lvl = 88,
#line 3071
            .ball = ITEM_MASTER_BALL,
#line 3073
            .friendship = 1,
#line 3075
            .nature = NATURE_MODEST,
#line 3072
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3077
                MOVE_OVERHEAT,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_SCORCHING_SANDS,
            },
            },
            {
#line 3083
            .species = SPECIES_CENTISKORCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3089
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3091
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3084
            .ability = ABILITY_WHITE_SMOKE,
#line 3085
            .lvl = 89,
#line 3086
            .ball = ITEM_MASTER_BALL,
#line 3088
            .friendship = 1,
#line 3090
            .nature = NATURE_JOLLY,
#line 3087
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3091
                MOVE_FLARE_BLITZ,
                MOVE_FIRE_LASH,
                MOVE_LEECH_LIFE,
                MOVE_DRAGON_TAIL,
            },
            },
        },
    },
#line 3096
    [DIFFICULTY_NORMAL][TRAINER_KEI_YING] =
    {
#line 3097
        .trainerName = _("Kei-ying"),
#line 3101
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 3098
        .trainerPic = TRAINER_PIC_KEI_YING,
        .encounterMusic_gender =
0,
#line 3100
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3099
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_KEI_YING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3103
            .species = SPECIES_URSHIFU_RAPID_STRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3103
            .heldItem = ITEM_URSHIFUNITE_RAPID,
#line 3109
            .ev = TRAINER_PARTY_EVS(140, 88, 4, 24, 0, 252),
#line 3111
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3104
            .ability = ABILITY_UNSEEN_FIST,
#line 3105
            .lvl = 88,
#line 3106
            .ball = ITEM_MASTER_BALL,
#line 3108
            .friendship = 1,
#line 3110
            .nature = NATURE_ADAMANT,
#line 3107
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3111
                MOVE_SURGING_STRIKES,
                MOVE_CLOSE_COMBAT,
                MOVE_AQUA_JET,
                MOVE_BULK_UP,
            },
            },
            {
#line 3116
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3116
            .heldItem = ITEM_FLYING_GEM,
#line 3122
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 3124
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3117
            .ability = ABILITY_DRIZZLE,
#line 3118
            .lvl = 86,
#line 3119
            .ball = ITEM_MASTER_BALL,
#line 3121
            .friendship = 1,
#line 3123
            .nature = NATURE_TIMID,
#line 3120
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3125
                MOVE_HURRICANE,
                MOVE_WEATHER_BALL,
                MOVE_TAILWIND,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3130
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3130
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3136
            .ev = TRAINER_PARTY_EVS(252, 112, 60, 24, 0, 60),
#line 3138
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3131
            .ability = ABILITY_DRY_SKIN,
#line 3132
            .lvl = 87,
#line 3133
            .ball = ITEM_MASTER_BALL,
#line 3135
            .friendship = 1,
#line 3137
            .nature = NATURE_ADAMANT,
#line 3134
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3138
                MOVE_CLOSE_COMBAT,
                MOVE_POISON_JAB,
                MOVE_BULK_UP,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 3143
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3143
            .heldItem = ITEM_FIGHTINIUM_Z,
#line 3149
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 3151
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3144
            .ability = ABILITY_TECHNICIAN,
#line 3145
            .lvl = 86,
#line 3146
            .ball = ITEM_MASTER_BALL,
#line 3148
            .friendship = 1,
#line 3150
            .nature = NATURE_ADAMANT,
#line 3147
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3151
                MOVE_BULLET_PUNCH,
                MOVE_BUG_BITE,
                MOVE_AERIAL_ACE,
                MOVE_CLOSE_COMBAT,
            },
            },
            {
#line 3156
            .species = SPECIES_PAWMOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3156
            .heldItem = ITEM_LIFE_ORB,
#line 3162
            .ev = TRAINER_PARTY_EVS(16, 240, 0, 252, 0, 0),
#line 3164
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3157
            .ability = ABILITY_IRON_FIST,
#line 3158
            .lvl = 87,
#line 3159
            .ball = ITEM_MASTER_BALL,
#line 3161
            .friendship = 1,
#line 3163
            .nature = NATURE_JOLLY,
#line 3160
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3164
                MOVE_THUNDER_PUNCH,
                MOVE_CLOSE_COMBAT,
                MOVE_MACH_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3169
            .species = SPECIES_URSHIFU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3169
            .heldItem = ITEM_FOCUS_SASH,
#line 3175
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3177
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3170
            .ability = ABILITY_UNSEEN_FIST,
#line 3171
            .lvl = 88,
#line 3172
            .ball = ITEM_MASTER_BALL,
#line 3174
            .friendship = 1,
#line 3176
            .nature = NATURE_JOLLY,
#line 3173
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3177
                MOVE_WICKED_BLOW,
                MOVE_CLOSE_COMBAT,
                MOVE_SUCKER_PUNCH,
                MOVE_POISON_JAB,
            },
            },
        },
    },
#line 3182
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_QIU] =
    {
#line 3183
        .trainerName = _("Melissa"),
#line 3184
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
0,
#line 3186
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3185
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3188
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3190
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3189
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3191
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3193
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3192
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3194
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3195
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3197
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_CRESALTA] =
    {
#line 3198
        .trainerName = _("Melissa"),
#line 3199
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
0,
#line 3201
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3200
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3203
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3205
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3204
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3206
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3208
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3207
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3209
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3211
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3210
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3212
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3214
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3213
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3215
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_HALAI] =
    {
#line 3216
        .trainerName = _("Melissa"),
#line 3217
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
0,
#line 3219
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3218
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3221
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3223
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3222
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3224
            .species = SPECIES_FARIGIRAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3226
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3225
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3227
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3229
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3228
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3230
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3232
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3231
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3233
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_REMATCH] =
    {
#line 3234
        .trainerName = _("Melissa"),
#line 3235
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
0,
#line 3237
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3236
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3239
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3241
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3240
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3242
            .species = SPECIES_FARIGIRAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3244
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3243
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3245
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3247
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3246
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3248
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3250
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3249
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3251
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3253
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3252
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3254
            .species = SPECIES_SCRAFTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3256
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3255
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3257
    [DIFFICULTY_NORMAL][TRAINER_MONTY] =
    {
#line 3258
        .trainerName = _("Monty"),
#line 3259
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3260
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3262
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3262
            .heldItem = ITEM_PUNCHING_GLOVE,
#line 3263
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3264
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3265
                MOVE_UPPER_HAND,
                MOVE_FOCUS_PUNCH,
                MOVE_MACH_PUNCH,
            },
            },
        },
    },
#line 3269
    [DIFFICULTY_NORMAL][TRAINER_OLIVER] =
    {
#line 3270
        .trainerName = _("Oliver"),
#line 3271
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
0,
#line 3273
        .isNative = TRUE,
#line 3272
        .characterRevealId = REVEAL_OLIVER,
#line 3274
        .objectEventGraphicsId = OBJ_EVENT_GFX_PROF_BIRCH,
#line 0
        .trainerBackPic = TRAINER_PIC_EXPERT_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3276
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3278
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3277
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3279
    [DIFFICULTY_NORMAL][TRAINER_DUSTY_4] =
    {
#line 3280
        .trainerName = _("Blank"),
#line 3281
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3282
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3284
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3286
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3285
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3287
    [DIFFICULTY_NORMAL][TRAINER_DUSTY_5] =
    {
#line 3288
        .trainerName = _("Blank"),
#line 3289
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3290
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3292
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3294
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3293
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3295
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_1] =
    {
#line 3296
        .trainerName = _("Blank"),
#line 3297
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3298
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3300
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3302
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3301
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3303
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_2] =
    {
#line 3304
        .trainerName = _("Blank"),
#line 3305
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3306
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3308
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3310
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3309
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3311
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_3] =
    {
#line 3312
        .trainerName = _("Blank"),
#line 3313
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3314
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3316
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3318
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3317
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3319
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_4] =
    {
#line 3320
        .trainerName = _("Blank"),
#line 3321
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3322
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3324
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3326
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3325
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3327
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_5] =
    {
#line 3328
        .trainerName = _("Blank"),
#line 3329
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3330
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3332
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3334
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3333
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3335
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_6] =
    {
#line 3336
        .trainerName = _("Blank"),
#line 3337
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3338
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3340
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3342
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3341
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3343
    [DIFFICULTY_NORMAL][TRAINER_LOLA_1] =
    {
#line 3344
        .trainerName = _("Blank"),
#line 3345
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3346
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3348
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3350
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3349
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3351
    [DIFFICULTY_NORMAL][TRAINER_AUSTINA] =
    {
#line 3352
        .trainerName = _("Blank"),
#line 3353
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3354
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3356
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3358
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3357
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3359
    [DIFFICULTY_NORMAL][TRAINER_GWEN] =
    {
#line 3360
        .trainerName = _("Blank"),
#line 3361
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3362
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3364
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3366
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3365
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3367
    [DIFFICULTY_NORMAL][TRAINER_LOLA_2] =
    {
#line 3368
        .trainerName = _("Blank"),
#line 3369
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3370
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3372
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3374
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3373
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3375
    [DIFFICULTY_NORMAL][TRAINER_LOLA_3] =
    {
#line 3376
        .trainerName = _("Blank"),
#line 3377
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3378
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3380
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3382
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3381
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3383
    [DIFFICULTY_NORMAL][TRAINER_LOLA_4] =
    {
#line 3384
        .trainerName = _("Blank"),
#line 3385
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3386
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3388
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3390
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3389
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3391
    [DIFFICULTY_NORMAL][TRAINER_LOLA_5] =
    {
#line 3392
        .trainerName = _("Blank"),
#line 3393
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3394
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3396
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3398
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3397
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3399
    [DIFFICULTY_NORMAL][TRAINER_RICKY_1] =
    {
#line 3400
        .trainerName = _("Blank"),
#line 3401
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3402
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3404
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3406
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3405
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3407
    [DIFFICULTY_NORMAL][TRAINER_SIMON] =
    {
#line 3408
        .trainerName = _("Blank"),
#line 3409
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3410
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3412
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3414
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3413
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3415
    [DIFFICULTY_NORMAL][TRAINER_CHARLIE] =
    {
#line 3416
        .trainerName = _("Blank"),
#line 3417
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3418
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3420
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3422
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3421
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3423
    [DIFFICULTY_NORMAL][TRAINER_RICKY_2] =
    {
#line 3424
        .trainerName = _("Blank"),
#line 3425
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3426
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3428
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3430
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3429
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3431
    [DIFFICULTY_NORMAL][TRAINER_RICKY_3] =
    {
#line 3432
        .trainerName = _("Blank"),
#line 3433
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3434
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3436
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3438
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3437
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3439
    [DIFFICULTY_NORMAL][TRAINER_RICKY_4] =
    {
#line 3440
        .trainerName = _("Blank"),
#line 3441
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3442
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3444
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3446
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3445
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3447
    [DIFFICULTY_NORMAL][TRAINER_RICKY_5] =
    {
#line 3448
        .trainerName = _("Blank"),
#line 3449
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3450
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3452
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3454
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3453
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3455
    [DIFFICULTY_NORMAL][TRAINER_RANDALL] =
    {
#line 3456
        .trainerName = _("Blank"),
#line 3457
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3458
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3460
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3462
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3461
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3463
    [DIFFICULTY_NORMAL][TRAINER_PARKER] =
    {
#line 3464
        .trainerName = _("Blank"),
#line 3465
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3466
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3468
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3470
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3469
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3471
    [DIFFICULTY_NORMAL][TRAINER_GEORGE] =
    {
#line 3472
        .trainerName = _("Blank"),
#line 3473
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3474
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3476
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3478
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3477
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3479
    [DIFFICULTY_NORMAL][TRAINER_BERKE] =
    {
#line 3480
        .trainerName = _("Blank"),
#line 3481
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3482
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3484
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3486
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3485
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3487
    [DIFFICULTY_NORMAL][TRAINER_BRAXTON] =
    {
#line 3488
        .trainerName = _("Blank"),
#line 3489
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3490
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3492
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3494
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3493
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3495
    [DIFFICULTY_NORMAL][TRAINER_VINCENT] =
    {
#line 3496
        .trainerName = _("Blank"),
#line 3497
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3498
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3500
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3502
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3501
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3503
    [DIFFICULTY_NORMAL][TRAINER_LEROY] =
    {
#line 3504
        .trainerName = _("Blank"),
#line 3505
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3506
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3508
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3510
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3509
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3511
    [DIFFICULTY_NORMAL][TRAINER_WILTON_1] =
    {
#line 3512
        .trainerName = _("Blank"),
#line 3513
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3514
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3516
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3518
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3517
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3519
    [DIFFICULTY_NORMAL][TRAINER_EDGAR] =
    {
#line 3520
        .trainerName = _("Blank"),
#line 3521
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3522
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3524
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3526
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3525
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3527
    [DIFFICULTY_NORMAL][TRAINER_ALBERT] =
    {
#line 3528
        .trainerName = _("Blank"),
#line 3529
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3530
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3532
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3534
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3533
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3535
    [DIFFICULTY_NORMAL][TRAINER_SAMUEL] =
    {
#line 3536
        .trainerName = _("Blank"),
#line 3537
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3538
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3540
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3542
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3541
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3543
    [DIFFICULTY_NORMAL][TRAINER_VITO] =
    {
#line 3544
        .trainerName = _("Blank"),
#line 3545
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3546
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3548
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3550
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3549
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3551
    [DIFFICULTY_NORMAL][TRAINER_OWEN] =
    {
#line 3552
        .trainerName = _("Blank"),
#line 3553
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3554
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3556
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3558
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3557
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3559
    [DIFFICULTY_NORMAL][TRAINER_WILTON_2] =
    {
#line 3560
        .trainerName = _("Blank"),
#line 3561
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3562
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3564
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3566
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3565
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3567
    [DIFFICULTY_NORMAL][TRAINER_WILTON_3] =
    {
#line 3568
        .trainerName = _("Blank"),
#line 3569
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3570
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3572
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3574
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3573
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3575
    [DIFFICULTY_NORMAL][TRAINER_WILTON_4] =
    {
#line 3576
        .trainerName = _("Blank"),
#line 3577
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3578
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3580
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3582
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3581
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3583
    [DIFFICULTY_NORMAL][TRAINER_WILTON_5] =
    {
#line 3584
        .trainerName = _("Blank"),
#line 3585
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3586
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3588
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3590
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3589
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3591
    [DIFFICULTY_NORMAL][TRAINER_WARREN] =
    {
#line 3592
        .trainerName = _("Blank"),
#line 3593
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3594
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3596
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3598
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3597
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3599
    [DIFFICULTY_NORMAL][TRAINER_MARY] =
    {
#line 3600
        .trainerName = _("Blank"),
#line 3601
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3602
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3604
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3606
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3605
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3607
    [DIFFICULTY_NORMAL][TRAINER_ALEXIA] =
    {
#line 3608
        .trainerName = _("Blank"),
#line 3609
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3610
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3612
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3614
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3613
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3615
    [DIFFICULTY_NORMAL][TRAINER_JODY] =
    {
#line 3616
        .trainerName = _("Blank"),
#line 3617
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3618
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3620
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3622
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3621
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3623
    [DIFFICULTY_NORMAL][TRAINER_WENDY] =
    {
#line 3624
        .trainerName = _("Blank"),
#line 3625
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3626
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3628
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3630
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3629
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3631
    [DIFFICULTY_NORMAL][TRAINER_KEIRA] =
    {
#line 3632
        .trainerName = _("Blank"),
#line 3633
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3634
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3636
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3638
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3637
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3639
    [DIFFICULTY_NORMAL][TRAINER_BROOKE_1] =
    {
#line 3640
        .trainerName = _("Blank"),
#line 3641
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3642
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3644
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3646
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3645
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3647
    [DIFFICULTY_NORMAL][TRAINER_JENNIFER] =
    {
#line 3648
        .trainerName = _("Blank"),
#line 3649
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3650
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3652
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3654
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3653
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3655
    [DIFFICULTY_NORMAL][TRAINER_HOPE] =
    {
#line 3656
        .trainerName = _("Blank"),
#line 3657
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3658
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3660
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3662
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3661
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3663
    [DIFFICULTY_NORMAL][TRAINER_SHANNON] =
    {
#line 3664
        .trainerName = _("Blank"),
#line 3665
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3666
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3668
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3670
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3669
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3671
    [DIFFICULTY_NORMAL][TRAINER_MICHELLE] =
    {
#line 3672
        .trainerName = _("Blank"),
#line 3673
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3674
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3676
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3678
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3677
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3679
    [DIFFICULTY_NORMAL][TRAINER_CAROLINE] =
    {
#line 3680
        .trainerName = _("Blank"),
#line 3681
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3682
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3684
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3686
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3685
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3687
    [DIFFICULTY_NORMAL][TRAINER_JULIE] =
    {
#line 3688
        .trainerName = _("Blank"),
#line 3689
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3690
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3692
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3694
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3693
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3695
    [DIFFICULTY_NORMAL][TRAINER_BROOKE_2] =
    {
#line 3696
        .trainerName = _("Blank"),
#line 3697
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3698
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3700
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3702
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3701
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3703
    [DIFFICULTY_NORMAL][TRAINER_BROOKE_3] =
    {
#line 3704
        .trainerName = _("Blank"),
#line 3705
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3706
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3708
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3710
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3709
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3711
    [DIFFICULTY_NORMAL][TRAINER_BROOKE_4] =
    {
#line 3712
        .trainerName = _("Blank"),
#line 3713
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3714
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3716
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3718
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3717
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3719
    [DIFFICULTY_NORMAL][TRAINER_BROOKE_5] =
    {
#line 3720
        .trainerName = _("Blank"),
#line 3721
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3722
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3724
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3726
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3725
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3727
    [DIFFICULTY_NORMAL][TRAINER_PATRICIA] =
    {
#line 3728
        .trainerName = _("Blank"),
#line 3729
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3730
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3732
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3734
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3733
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3735
    [DIFFICULTY_NORMAL][TRAINER_KINDRA] =
    {
#line 3736
        .trainerName = _("Blank"),
#line 3737
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3738
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3740
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3742
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3741
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3743
    [DIFFICULTY_NORMAL][TRAINER_TAMMY] =
    {
#line 3744
        .trainerName = _("Blank"),
#line 3745
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3746
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3748
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3750
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3749
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3751
    [DIFFICULTY_NORMAL][TRAINER_VALERIE_1] =
    {
#line 3752
        .trainerName = _("Blank"),
#line 3753
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3754
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3756
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3758
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3757
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3759
    [DIFFICULTY_NORMAL][TRAINER_TASHA] =
    {
#line 3760
        .trainerName = _("Blank"),
#line 3761
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3762
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3764
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3766
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3765
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3767
    [DIFFICULTY_NORMAL][TRAINER_VALERIE_2] =
    {
#line 3768
        .trainerName = _("Blank"),
#line 3769
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3770
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3772
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3774
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3773
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3775
    [DIFFICULTY_NORMAL][TRAINER_VALERIE_3] =
    {
#line 3776
        .trainerName = _("Blank"),
#line 3777
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3778
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3780
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3782
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3781
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3783
    [DIFFICULTY_NORMAL][TRAINER_VALERIE_4] =
    {
#line 3784
        .trainerName = _("Blank"),
#line 3785
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3786
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3788
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3790
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3789
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3791
    [DIFFICULTY_NORMAL][TRAINER_VALERIE_5] =
    {
#line 3792
        .trainerName = _("Blank"),
#line 3793
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3794
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3796
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3798
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3797
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3799
    [DIFFICULTY_NORMAL][TRAINER_CINDY_1] =
    {
#line 3800
        .trainerName = _("Blank"),
#line 3801
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3802
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3804
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3806
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3805
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3807
    [DIFFICULTY_NORMAL][TRAINER_DAPHNE] =
    {
#line 3808
        .trainerName = _("Blank"),
#line 3809
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3810
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3812
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3814
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3813
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3815
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_2] =
    {
#line 3816
        .trainerName = _("Blank"),
#line 3817
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3818
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3820
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3822
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3821
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3823
    [DIFFICULTY_NORMAL][TRAINER_CINDY_2] =
    {
#line 3824
        .trainerName = _("Blank"),
#line 3825
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3826
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3828
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3830
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3829
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3831
    [DIFFICULTY_NORMAL][TRAINER_BRIANNA] =
    {
#line 3832
        .trainerName = _("Blank"),
#line 3833
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3834
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3836
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3838
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3837
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3839
    [DIFFICULTY_NORMAL][TRAINER_NAOMI] =
    {
#line 3840
        .trainerName = _("Blank"),
#line 3841
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3842
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3844
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3846
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3845
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3847
    [DIFFICULTY_NORMAL][TRAINER_CINDY_3] =
    {
#line 3848
        .trainerName = _("Blank"),
#line 3849
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3850
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3852
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3854
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3853
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3855
    [DIFFICULTY_NORMAL][TRAINER_CINDY_4] =
    {
#line 3856
        .trainerName = _("Blank"),
#line 3857
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3858
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3860
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3862
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3861
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3863
    [DIFFICULTY_NORMAL][TRAINER_CINDY_5] =
    {
#line 3864
        .trainerName = _("Blank"),
#line 3865
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3866
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3868
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3870
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3869
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3871
    [DIFFICULTY_NORMAL][TRAINER_CINDY_6] =
    {
#line 3872
        .trainerName = _("Blank"),
#line 3873
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3874
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3876
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3878
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3877
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3879
    [DIFFICULTY_NORMAL][TRAINER_MELISSA] =
    {
#line 3880
        .trainerName = _("Blank"),
#line 3881
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3882
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3884
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3886
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3885
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3887
    [DIFFICULTY_NORMAL][TRAINER_SHEILA] =
    {
#line 3888
        .trainerName = _("Blank"),
#line 3889
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3890
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3892
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3894
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3893
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3895
    [DIFFICULTY_NORMAL][TRAINER_SHIRLEY] =
    {
#line 3896
        .trainerName = _("Blank"),
#line 3897
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3898
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3900
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3902
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3901
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3903
    [DIFFICULTY_NORMAL][TRAINER_JESSICA_1] =
    {
#line 3904
        .trainerName = _("Blank"),
#line 3905
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3906
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3908
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3910
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3909
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3911
    [DIFFICULTY_NORMAL][TRAINER_CONNIE] =
    {
#line 3912
        .trainerName = _("Blank"),
#line 3913
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3914
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3916
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3918
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3917
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3919
    [DIFFICULTY_NORMAL][TRAINER_BRIDGET] =
    {
#line 3920
        .trainerName = _("Blank"),
#line 3921
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3922
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3924
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3926
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3925
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3927
    [DIFFICULTY_NORMAL][TRAINER_OLIVIA] =
    {
#line 3928
        .trainerName = _("Blank"),
#line 3929
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3930
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3932
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3934
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3933
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3935
    [DIFFICULTY_NORMAL][TRAINER_TIFFANY] =
    {
#line 3936
        .trainerName = _("Blank"),
#line 3937
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3938
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3940
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3942
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3941
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3943
    [DIFFICULTY_NORMAL][TRAINER_JESSICA_2] =
    {
#line 3944
        .trainerName = _("Blank"),
#line 3945
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3946
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3948
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3950
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3949
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3951
    [DIFFICULTY_NORMAL][TRAINER_JESSICA_3] =
    {
#line 3952
        .trainerName = _("Blank"),
#line 3953
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3954
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3956
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3958
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3957
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3959
    [DIFFICULTY_NORMAL][TRAINER_JESSICA_4] =
    {
#line 3960
        .trainerName = _("Blank"),
#line 3961
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3962
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3964
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3966
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3965
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3967
    [DIFFICULTY_NORMAL][TRAINER_JESSICA_5] =
    {
#line 3968
        .trainerName = _("Blank"),
#line 3969
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3970
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3972
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3974
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3973
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3975
    [DIFFICULTY_NORMAL][TRAINER_WINSTON_1] =
    {
#line 3976
        .trainerName = _("Blank"),
#line 3977
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3978
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3980
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3982
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3981
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3983
    [DIFFICULTY_NORMAL][TRAINER_MOLLIE] =
    {
#line 3984
        .trainerName = _("Blank"),
#line 3985
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3986
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3988
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3990
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3989
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3991
    [DIFFICULTY_NORMAL][TRAINER_GARRET] =
    {
#line 3992
        .trainerName = _("Blank"),
#line 3993
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3994
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3996
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3998
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3997
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3999
    [DIFFICULTY_NORMAL][TRAINER_WINSTON_2] =
    {
#line 4000
        .trainerName = _("Blank"),
#line 4001
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4002
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4004
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4006
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4005
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4007
    [DIFFICULTY_NORMAL][TRAINER_WINSTON_3] =
    {
#line 4008
        .trainerName = _("Blank"),
#line 4009
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4010
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4012
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4014
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4013
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4015
    [DIFFICULTY_NORMAL][TRAINER_WINSTON_4] =
    {
#line 4016
        .trainerName = _("Blank"),
#line 4017
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4018
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4020
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4022
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4021
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4023
    [DIFFICULTY_NORMAL][TRAINER_WINSTON_5] =
    {
#line 4024
        .trainerName = _("Blank"),
#line 4025
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4026
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4028
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4030
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4029
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4031
    [DIFFICULTY_NORMAL][TRAINER_STEVE_1] =
    {
#line 4032
        .trainerName = _("Blank"),
#line 4033
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4034
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4036
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4038
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4037
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4039
    [DIFFICULTY_NORMAL][TRAINER_THALIA_1] =
    {
#line 4040
        .trainerName = _("Blank"),
#line 4041
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4042
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4044
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4046
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4045
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4047
    [DIFFICULTY_NORMAL][TRAINER_MARK] =
    {
#line 4048
        .trainerName = _("Blank"),
#line 4049
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4050
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4052
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4054
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4053
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4055
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_1] =
    {
#line 4056
        .trainerName = _("Blank"),
#line 4057
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4058
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4060
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4062
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4061
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4063
    [DIFFICULTY_NORMAL][TRAINER_STEVE_2] =
    {
#line 4064
        .trainerName = _("Blank"),
#line 4065
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4066
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4068
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4070
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4069
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4071
    [DIFFICULTY_NORMAL][TRAINER_STEVE_3] =
    {
#line 4072
        .trainerName = _("Blank"),
#line 4073
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4074
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4076
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4078
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4077
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4079
    [DIFFICULTY_NORMAL][TRAINER_STEVE_4] =
    {
#line 4080
        .trainerName = _("Blank"),
#line 4081
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4082
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4084
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4086
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4085
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4087
    [DIFFICULTY_NORMAL][TRAINER_STEVE_5] =
    {
#line 4088
        .trainerName = _("Blank"),
#line 4089
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4090
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4092
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4094
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4093
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4095
    [DIFFICULTY_NORMAL][TRAINER_LUIS] =
    {
#line 4096
        .trainerName = _("Blank"),
#line 4097
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4098
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4100
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4102
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4101
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4103
    [DIFFICULTY_NORMAL][TRAINER_DOMINIK] =
    {
#line 4104
        .trainerName = _("Blank"),
#line 4105
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4106
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4108
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4110
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4109
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4111
    [DIFFICULTY_NORMAL][TRAINER_DOUGLAS] =
    {
#line 4112
        .trainerName = _("Blank"),
#line 4113
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4114
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4116
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4118
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4117
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4119
    [DIFFICULTY_NORMAL][TRAINER_DARRIN] =
    {
#line 4120
        .trainerName = _("Blank"),
#line 4121
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4122
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4124
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4126
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4125
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4127
    [DIFFICULTY_NORMAL][TRAINER_TONY_1] =
    {
#line 4128
        .trainerName = _("Blank"),
#line 4129
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4130
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4132
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4134
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4133
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4135
    [DIFFICULTY_NORMAL][TRAINER_JEROME] =
    {
#line 4136
        .trainerName = _("Blank"),
#line 4137
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4138
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4140
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4142
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4141
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4143
    [DIFFICULTY_NORMAL][TRAINER_MATTHEW] =
    {
#line 4144
        .trainerName = _("Blank"),
#line 4145
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4146
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4148
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4150
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4149
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4151
    [DIFFICULTY_NORMAL][TRAINER_DAVID] =
    {
#line 4152
        .trainerName = _("Blank"),
#line 4153
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4154
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4156
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4158
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4157
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4159
    [DIFFICULTY_NORMAL][TRAINER_SPENCER] =
    {
#line 4160
        .trainerName = _("Blank"),
#line 4161
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4162
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4164
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4166
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4165
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4167
    [DIFFICULTY_NORMAL][TRAINER_ROLAND] =
    {
#line 4168
        .trainerName = _("Blank"),
#line 4169
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4170
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4172
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4174
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4173
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4175
    [DIFFICULTY_NORMAL][TRAINER_NOLEN] =
    {
#line 4176
        .trainerName = _("Blank"),
#line 4177
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4178
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4180
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4182
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4181
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4183
    [DIFFICULTY_NORMAL][TRAINER_STAN] =
    {
#line 4184
        .trainerName = _("Blank"),
#line 4185
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4186
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4188
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4190
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4189
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4191
    [DIFFICULTY_NORMAL][TRAINER_BARRY] =
    {
#line 4192
        .trainerName = _("Blank"),
#line 4193
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4194
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4196
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4198
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4197
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4199
    [DIFFICULTY_NORMAL][TRAINER_DEAN] =
    {
#line 4200
        .trainerName = _("Blank"),
#line 4201
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4202
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4204
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4206
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4205
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4207
    [DIFFICULTY_NORMAL][TRAINER_RODNEY] =
    {
#line 4208
        .trainerName = _("Blank"),
#line 4209
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4210
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4212
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4214
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4213
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4215
    [DIFFICULTY_NORMAL][TRAINER_RICHARD] =
    {
#line 4216
        .trainerName = _("Blank"),
#line 4217
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4218
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4220
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4222
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4221
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4223
    [DIFFICULTY_NORMAL][TRAINER_HERMAN] =
    {
#line 4224
        .trainerName = _("Blank"),
#line 4225
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4226
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4228
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4230
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4229
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4231
    [DIFFICULTY_NORMAL][TRAINER_SANTIAGO] =
    {
#line 4232
        .trainerName = _("Blank"),
#line 4233
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4234
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4236
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4238
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4237
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4239
    [DIFFICULTY_NORMAL][TRAINER_GILBERT] =
    {
#line 4240
        .trainerName = _("Blank"),
#line 4241
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4242
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4244
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4246
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4245
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4247
    [DIFFICULTY_NORMAL][TRAINER_FRANKLIN] =
    {
#line 4248
        .trainerName = _("Blank"),
#line 4249
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4250
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4252
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4254
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4253
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4255
    [DIFFICULTY_NORMAL][TRAINER_KEVIN] =
    {
#line 4256
        .trainerName = _("Blank"),
#line 4257
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4258
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4260
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4262
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4261
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4263
    [DIFFICULTY_NORMAL][TRAINER_JACK] =
    {
#line 4264
        .trainerName = _("Blank"),
#line 4265
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4266
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4268
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4270
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4269
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4271
    [DIFFICULTY_NORMAL][TRAINER_DUDLEY] =
    {
#line 4272
        .trainerName = _("Blank"),
#line 4273
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4274
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4276
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4278
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4277
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4279
    [DIFFICULTY_NORMAL][TRAINER_CHAD] =
    {
#line 4280
        .trainerName = _("Blank"),
#line 4281
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4282
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4284
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4286
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4285
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4287
    [DIFFICULTY_NORMAL][TRAINER_TONY_2] =
    {
#line 4288
        .trainerName = _("Blank"),
#line 4289
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4290
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4292
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4294
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4293
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4295
    [DIFFICULTY_NORMAL][TRAINER_TONY_3] =
    {
#line 4296
        .trainerName = _("Blank"),
#line 4297
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4298
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4300
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4302
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4301
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4303
    [DIFFICULTY_NORMAL][TRAINER_TONY_4] =
    {
#line 4304
        .trainerName = _("Blank"),
#line 4305
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4306
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4308
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4310
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4309
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4311
    [DIFFICULTY_NORMAL][TRAINER_TONY_5] =
    {
#line 4312
        .trainerName = _("Blank"),
#line 4313
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4314
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4316
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4318
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4317
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4319
    [DIFFICULTY_NORMAL][TRAINER_HITOSHI] =
    {
#line 4320
        .trainerName = _("Blank"),
#line 4321
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4322
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4324
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4326
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4325
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4327
    [DIFFICULTY_NORMAL][TRAINER_KIYO] =
    {
#line 4328
        .trainerName = _("Blank"),
#line 4329
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4330
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4332
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4334
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4333
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4335
    [DIFFICULTY_NORMAL][TRAINER_KOICHI] =
    {
#line 4336
        .trainerName = _("Blank"),
#line 4337
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4338
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4340
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4342
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4341
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4343
    [DIFFICULTY_NORMAL][TRAINER_NOB_1] =
    {
#line 4344
        .trainerName = _("Blank"),
#line 4345
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4346
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4348
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4350
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4349
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4351
    [DIFFICULTY_NORMAL][TRAINER_NOB_2] =
    {
#line 4352
        .trainerName = _("Blank"),
#line 4353
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4354
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4356
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4358
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4357
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4359
    [DIFFICULTY_NORMAL][TRAINER_NOB_3] =
    {
#line 4360
        .trainerName = _("Blank"),
#line 4361
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4362
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4364
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4366
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4365
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4367
    [DIFFICULTY_NORMAL][TRAINER_NOB_4] =
    {
#line 4368
        .trainerName = _("Blank"),
#line 4369
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4370
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4372
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4374
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4373
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4375
    [DIFFICULTY_NORMAL][TRAINER_NOB_5] =
    {
#line 4376
        .trainerName = _("Blank"),
#line 4377
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4378
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4380
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4382
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4381
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4383
    [DIFFICULTY_NORMAL][TRAINER_YUJI] =
    {
#line 4384
        .trainerName = _("Blank"),
#line 4385
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4386
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4388
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4390
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4389
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4391
    [DIFFICULTY_NORMAL][TRAINER_DAISUKE] =
    {
#line 4392
        .trainerName = _("Blank"),
#line 4393
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4394
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4396
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4398
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4397
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4399
    [DIFFICULTY_NORMAL][TRAINER_ATSUSHI] =
    {
#line 4400
        .trainerName = _("Blank"),
#line 4401
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4402
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4404
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4406
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4405
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4407
    [DIFFICULTY_NORMAL][TRAINER_KIRK] =
    {
#line 4408
        .trainerName = _("Blank"),
#line 4409
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4410
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4412
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4414
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4413
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4415
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_7] =
    {
#line 4416
        .trainerName = _("Blank"),
#line 4417
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4418
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4420
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4422
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4421
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4423
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_8] =
    {
#line 4424
        .trainerName = _("Blank"),
#line 4425
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4426
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4428
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4430
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4429
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4431
    [DIFFICULTY_NORMAL][TRAINER_SHAWN] =
    {
#line 4432
        .trainerName = _("Blank"),
#line 4433
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4434
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4436
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4438
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4437
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4439
    [DIFFICULTY_NORMAL][TRAINER_FERNANDO_1] =
    {
#line 4440
        .trainerName = _("Blank"),
#line 4441
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4442
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4444
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4446
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4445
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4447
    [DIFFICULTY_NORMAL][TRAINER_DALTON_1] =
    {
#line 4448
        .trainerName = _("Blank"),
#line 4449
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4450
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4452
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4454
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4453
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4455
    [DIFFICULTY_NORMAL][TRAINER_DALTON_2] =
    {
#line 4456
        .trainerName = _("Blank"),
#line 4457
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4458
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4460
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4462
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4461
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4463
    [DIFFICULTY_NORMAL][TRAINER_DALTON_3] =
    {
#line 4464
        .trainerName = _("Blank"),
#line 4465
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4466
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4468
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4470
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4469
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4471
    [DIFFICULTY_NORMAL][TRAINER_DALTON_4] =
    {
#line 4472
        .trainerName = _("Blank"),
#line 4473
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4474
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4476
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4478
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4477
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4479
    [DIFFICULTY_NORMAL][TRAINER_DALTON_5] =
    {
#line 4480
        .trainerName = _("Blank"),
#line 4481
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4482
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4484
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4486
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4485
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4487
    [DIFFICULTY_NORMAL][TRAINER_COLE] =
    {
#line 4488
        .trainerName = _("Blank"),
#line 4489
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4490
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4492
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4494
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4493
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4495
    [DIFFICULTY_NORMAL][TRAINER_JEFF] =
    {
#line 4496
        .trainerName = _("Blank"),
#line 4497
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4498
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4500
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4502
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4501
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4503
    [DIFFICULTY_NORMAL][TRAINER_AXLE] =
    {
#line 4504
        .trainerName = _("Blank"),
#line 4505
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4506
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4508
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4510
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4509
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4511
    [DIFFICULTY_NORMAL][TRAINER_JACE] =
    {
#line 4512
        .trainerName = _("Blank"),
#line 4513
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4514
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4516
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4518
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4517
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4519
    [DIFFICULTY_NORMAL][TRAINER_KEEGAN] =
    {
#line 4520
        .trainerName = _("Blank"),
#line 4521
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4522
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4524
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4526
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4525
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4527
    [DIFFICULTY_NORMAL][TRAINER_BERNIE_1] =
    {
#line 4528
        .trainerName = _("Blank"),
#line 4529
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4530
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4532
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4534
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4533
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4535
    [DIFFICULTY_NORMAL][TRAINER_BERNIE_2] =
    {
#line 4536
        .trainerName = _("Blank"),
#line 4537
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4538
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4540
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4542
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4541
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4543
    [DIFFICULTY_NORMAL][TRAINER_BERNIE_3] =
    {
#line 4544
        .trainerName = _("Blank"),
#line 4545
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4546
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4548
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4550
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4549
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4551
    [DIFFICULTY_NORMAL][TRAINER_BERNIE_4] =
    {
#line 4552
        .trainerName = _("Blank"),
#line 4553
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4554
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4556
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4558
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4557
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4559
    [DIFFICULTY_NORMAL][TRAINER_BERNIE_5] =
    {
#line 4560
        .trainerName = _("Blank"),
#line 4561
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4562
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4564
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4566
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4565
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4567
    [DIFFICULTY_NORMAL][TRAINER_DREW] =
    {
#line 4568
        .trainerName = _("Blank"),
#line 4569
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4570
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4572
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4574
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4573
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4575
    [DIFFICULTY_NORMAL][TRAINER_BEAU] =
    {
#line 4576
        .trainerName = _("Blank"),
#line 4577
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4578
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4580
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4582
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4581
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4583
    [DIFFICULTY_NORMAL][TRAINER_LARRY] =
    {
#line 4584
        .trainerName = _("Blank"),
#line 4585
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4586
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4588
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4590
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4589
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4591
    [DIFFICULTY_NORMAL][TRAINER_SHANE] =
    {
#line 4592
        .trainerName = _("Blank"),
#line 4593
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4594
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4596
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4598
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4597
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4599
    [DIFFICULTY_NORMAL][TRAINER_JUSTIN] =
    {
#line 4600
        .trainerName = _("Blank"),
#line 4601
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4602
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4604
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4606
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4605
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4607
            .species = SPECIES_BARRASKEWDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4609
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4608
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4610
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4612
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4611
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4613
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4615
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4614
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4616
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4618
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4617
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4619
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4621
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4620
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4622
    [DIFFICULTY_NORMAL][TRAINER_ETHAN_1] =
    {
#line 4623
        .trainerName = _("Blank"),
#line 4624
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4625
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4627
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4629
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4628
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4630
            .species = SPECIES_LILLIGANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4632
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4631
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4633
            .species = SPECIES_VOLCARONA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4635
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4634
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4636
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4638
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4637
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4639
            .species = SPECIES_ARMAROUGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4641
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4640
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4642
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4644
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4643
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4645
    [DIFFICULTY_NORMAL][TRAINER_AUTUMN] =
    {
#line 4646
        .trainerName = _("Blank"),
#line 4647
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4648
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4650
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4652
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4651
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4653
    [DIFFICULTY_NORMAL][TRAINER_TRAVIS] =
    {
#line 4654
        .trainerName = _("Blank"),
#line 4655
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4656
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4658
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4660
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4659
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4661
    [DIFFICULTY_NORMAL][TRAINER_ETHAN_2] =
    {
#line 4662
        .trainerName = _("Blank"),
#line 4663
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4664
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4666
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4668
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4667
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4669
    [DIFFICULTY_NORMAL][TRAINER_ETHAN_3] =
    {
#line 4670
        .trainerName = _("Blank"),
#line 4671
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4674
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4676
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4675
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4677
    [DIFFICULTY_NORMAL][TRAINER_ETHAN_4] =
    {
#line 4678
        .trainerName = _("Blank"),
#line 4679
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4682
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4684
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4683
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4685
    [DIFFICULTY_NORMAL][TRAINER_ETHAN_5] =
    {
#line 4686
        .trainerName = _("Blank"),
#line 4687
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4688
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4690
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4692
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4691
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4693
    [DIFFICULTY_NORMAL][TRAINER_BRENT] =
    {
#line 4694
        .trainerName = _("Blank"),
#line 4695
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4696
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4698
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4700
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4699
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4701
    [DIFFICULTY_NORMAL][TRAINER_DONALD] =
    {
#line 4702
        .trainerName = _("Blank"),
#line 4703
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4704
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4706
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4708
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4707
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4709
    [DIFFICULTY_NORMAL][TRAINER_TAYLOR] =
    {
#line 4710
        .trainerName = _("Blank"),
#line 4711
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4712
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4714
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4716
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4715
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4717
    [DIFFICULTY_NORMAL][TRAINER_JEFFREY_1] =
    {
#line 4718
        .trainerName = _("Blank"),
#line 4719
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4720
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4722
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4724
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4723
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4725
    [DIFFICULTY_NORMAL][TRAINER_DEREK] =
    {
#line 4726
        .trainerName = _("Blank"),
#line 4727
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4728
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4730
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4732
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4731
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4733
    [DIFFICULTY_NORMAL][TRAINER_JEFFREY_2] =
    {
#line 4734
        .trainerName = _("Blank"),
#line 4735
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4736
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4738
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4740
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4739
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4741
    [DIFFICULTY_NORMAL][TRAINER_JEFFREY_3] =
    {
#line 4742
        .trainerName = _("Blank"),
#line 4743
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4744
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4746
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4748
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4747
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4749
    [DIFFICULTY_NORMAL][TRAINER_JEFFREY_4] =
    {
#line 4750
        .trainerName = _("Blank"),
#line 4751
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4752
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4754
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4756
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4755
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4757
    [DIFFICULTY_NORMAL][TRAINER_JEFFREY_5] =
    {
#line 4758
        .trainerName = _("Blank"),
#line 4759
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4760
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4762
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4764
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4763
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4765
    [DIFFICULTY_NORMAL][TRAINER_EDWARD] =
    {
#line 4766
        .trainerName = _("Blank"),
#line 4767
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4768
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4770
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4772
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4771
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4773
    [DIFFICULTY_NORMAL][TRAINER_PRESTON] =
    {
#line 4774
        .trainerName = _("Blank"),
#line 4775
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4776
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4778
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4780
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4779
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4781
    [DIFFICULTY_NORMAL][TRAINER_VIRGIL] =
    {
#line 4782
        .trainerName = _("Blank"),
#line 4783
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4784
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4786
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4788
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4787
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4789
    [DIFFICULTY_NORMAL][TRAINER_BLAKE] =
    {
#line 4790
        .trainerName = _("Blank"),
#line 4791
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4792
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4794
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4796
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4795
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4797
    [DIFFICULTY_NORMAL][TRAINER_WILLIAM] =
    {
#line 4798
        .trainerName = _("Blank"),
#line 4799
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4800
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4802
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4804
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4803
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4805
    [DIFFICULTY_NORMAL][TRAINER_JOSHUA] =
    {
#line 4806
        .trainerName = _("Blank"),
#line 4807
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4808
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4810
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4812
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4811
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4813
    [DIFFICULTY_NORMAL][TRAINER_CAMERON_1] =
    {
#line 4814
        .trainerName = _("Blank"),
#line 4815
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4816
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4818
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4820
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4819
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4821
    [DIFFICULTY_NORMAL][TRAINER_CAMERON_2] =
    {
#line 4822
        .trainerName = _("Blank"),
#line 4823
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4824
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4826
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4828
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4827
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4829
    [DIFFICULTY_NORMAL][TRAINER_CAMERON_3] =
    {
#line 4830
        .trainerName = _("Blank"),
#line 4831
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4832
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4834
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4836
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4835
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4837
    [DIFFICULTY_NORMAL][TRAINER_CAMERON_4] =
    {
#line 4838
        .trainerName = _("Blank"),
#line 4839
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4840
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4842
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4844
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4843
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4845
    [DIFFICULTY_NORMAL][TRAINER_CAMERON_5] =
    {
#line 4846
        .trainerName = _("Blank"),
#line 4847
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4848
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4850
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4852
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4851
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4853
    [DIFFICULTY_NORMAL][TRAINER_JACLYN] =
    {
#line 4854
        .trainerName = _("Blank"),
#line 4855
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4856
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4858
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4860
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4859
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4861
    [DIFFICULTY_NORMAL][TRAINER_HANNAH] =
    {
#line 4862
        .trainerName = _("Blank"),
#line 4863
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4864
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4866
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4868
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4867
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4869
    [DIFFICULTY_NORMAL][TRAINER_SAMANTHA] =
    {
#line 4870
        .trainerName = _("Blank"),
#line 4871
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4872
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4874
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4876
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4875
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4877
    [DIFFICULTY_NORMAL][TRAINER_MAURA] =
    {
#line 4878
        .trainerName = _("Blank"),
#line 4879
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4880
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4882
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4884
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4883
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4885
    [DIFFICULTY_NORMAL][TRAINER_KAYLA] =
    {
#line 4886
        .trainerName = _("Blank"),
#line 4887
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4888
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4890
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4892
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4891
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4893
    [DIFFICULTY_NORMAL][TRAINER_ALEXIS] =
    {
#line 4894
        .trainerName = _("Blank"),
#line 4895
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4896
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4898
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4900
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4899
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4901
    [DIFFICULTY_NORMAL][TRAINER_JACKI_1] =
    {
#line 4902
        .trainerName = _("Blank"),
#line 4903
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4904
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4906
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4908
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4907
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4909
    [DIFFICULTY_NORMAL][TRAINER_JACKI_2] =
    {
#line 4910
        .trainerName = _("Blank"),
#line 4911
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4912
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4914
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4916
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4915
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4917
    [DIFFICULTY_NORMAL][TRAINER_JACKI_3] =
    {
#line 4918
        .trainerName = _("Blank"),
#line 4919
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4920
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4922
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4924
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4923
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4925
    [DIFFICULTY_NORMAL][TRAINER_JACKI_4] =
    {
#line 4926
        .trainerName = _("Blank"),
#line 4927
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4928
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4930
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4932
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4931
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4933
    [DIFFICULTY_NORMAL][TRAINER_JACKI_5] =
    {
#line 4934
        .trainerName = _("Blank"),
#line 4935
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4938
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4940
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4939
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4941
    [DIFFICULTY_NORMAL][TRAINER_WALTER_1] =
    {
#line 4942
        .trainerName = _("Blank"),
#line 4943
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4944
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4946
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4948
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4947
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4949
    [DIFFICULTY_NORMAL][TRAINER_MICAH] =
    {
#line 4950
        .trainerName = _("Blank"),
#line 4951
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4952
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4954
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4956
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4955
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4957
    [DIFFICULTY_NORMAL][TRAINER_THOMAS] =
    {
#line 4958
        .trainerName = _("Blank"),
#line 4959
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4960
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4962
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4964
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4963
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4965
    [DIFFICULTY_NORMAL][TRAINER_WALTER_2] =
    {
#line 4966
        .trainerName = _("Blank"),
#line 4967
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4968
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4970
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4972
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4971
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4973
    [DIFFICULTY_NORMAL][TRAINER_WALTER_3] =
    {
#line 4974
        .trainerName = _("Blank"),
#line 4975
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4976
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4978
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4980
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4979
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4981
    [DIFFICULTY_NORMAL][TRAINER_WALTER_4] =
    {
#line 4982
        .trainerName = _("Blank"),
#line 4983
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4984
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4986
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4988
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4987
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4989
    [DIFFICULTY_NORMAL][TRAINER_WALTER_5] =
    {
#line 4990
        .trainerName = _("Blank"),
#line 4991
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4992
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4994
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4996
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4995
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4997
    [DIFFICULTY_NORMAL][TRAINER_SIDNEY] =
    {
#line 4998
        .trainerName = _("Blank"),
#line 4999
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5000
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5002
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5004
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5003
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5005
    [DIFFICULTY_NORMAL][TRAINER_PHOEBE] =
    {
#line 5006
        .trainerName = _("Blank"),
#line 5007
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5008
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5010
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5012
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5011
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5013
    [DIFFICULTY_NORMAL][TRAINER_GLACIA] =
    {
#line 5014
        .trainerName = _("Blank"),
#line 5015
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5018
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5020
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5019
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5021
    [DIFFICULTY_NORMAL][TRAINER_DRAKE] =
    {
#line 5022
        .trainerName = _("Blank"),
#line 5023
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5024
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5026
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5028
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5027
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5029
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_1] =
    {
#line 5030
        .trainerName = _("Blank"),
#line 5031
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5032
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5034
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5036
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5035
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5037
    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_1] =
    {
#line 5038
        .trainerName = _("Blank"),
#line 5039
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5040
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5042
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5044
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5043
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5045
    [DIFFICULTY_NORMAL][TRAINER_WATTSON_1] =
    {
#line 5046
        .trainerName = _("Blank"),
#line 5047
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5048
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5050
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5052
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5051
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5053
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_1] =
    {
#line 5054
        .trainerName = _("Blank"),
#line 5055
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5056
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5058
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5060
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5059
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5061
    [DIFFICULTY_NORMAL][TRAINER_NORMAN_1] =
    {
#line 5062
        .trainerName = _("Blank"),
#line 5063
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5064
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5066
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5068
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5067
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5069
    [DIFFICULTY_NORMAL][TRAINER_WINONA_1] =
    {
#line 5070
        .trainerName = _("Blank"),
#line 5071
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5074
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5076
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5075
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5077
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_1] =
    {
#line 5078
        .trainerName = _("Blank"),
#line 5079
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5080
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5082
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5084
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5083
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5085
    [DIFFICULTY_NORMAL][TRAINER_JUAN_1] =
    {
#line 5086
        .trainerName = _("Blank"),
#line 5087
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5088
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5090
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5092
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5091
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5093
    [DIFFICULTY_NORMAL][TRAINER_JERRY_1] =
    {
#line 5094
        .trainerName = _("Blank"),
#line 5095
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5098
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5100
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5099
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5101
    [DIFFICULTY_NORMAL][TRAINER_TED] =
    {
#line 5102
        .trainerName = _("Blank"),
#line 5103
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5106
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5108
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5107
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5109
    [DIFFICULTY_NORMAL][TRAINER_PAUL] =
    {
#line 5110
        .trainerName = _("Blank"),
#line 5111
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5112
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5114
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5116
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5115
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5117
    [DIFFICULTY_NORMAL][TRAINER_JERRY_2] =
    {
#line 5118
        .trainerName = _("Blank"),
#line 5119
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5120
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5122
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5124
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5123
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5125
    [DIFFICULTY_NORMAL][TRAINER_JERRY_3] =
    {
#line 5126
        .trainerName = _("Blank"),
#line 5127
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5128
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5130
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5132
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5131
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5133
    [DIFFICULTY_NORMAL][TRAINER_JERRY_4] =
    {
#line 5134
        .trainerName = _("Blank"),
#line 5135
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5136
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5138
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5140
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5139
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5141
    [DIFFICULTY_NORMAL][TRAINER_JERRY_5] =
    {
#line 5142
        .trainerName = _("Blank"),
#line 5143
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5144
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5146
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5148
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5147
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5149
    [DIFFICULTY_NORMAL][TRAINER_KAREN_1] =
    {
#line 5150
        .trainerName = _("Blank"),
#line 5151
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5152
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5154
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5156
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5155
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5157
    [DIFFICULTY_NORMAL][TRAINER_GEORGIA] =
    {
#line 5158
        .trainerName = _("Blank"),
#line 5159
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5160
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5162
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5164
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5163
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5165
    [DIFFICULTY_NORMAL][TRAINER_KAREN_2] =
    {
#line 5166
        .trainerName = _("Blank"),
#line 5167
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5168
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5170
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5172
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5171
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5173
    [DIFFICULTY_NORMAL][TRAINER_KAREN_3] =
    {
#line 5174
        .trainerName = _("Blank"),
#line 5175
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5176
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5178
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5180
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5179
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5181
    [DIFFICULTY_NORMAL][TRAINER_KAREN_4] =
    {
#line 5182
        .trainerName = _("Blank"),
#line 5183
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5186
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5188
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5187
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5189
    [DIFFICULTY_NORMAL][TRAINER_KAREN_5] =
    {
#line 5190
        .trainerName = _("Blank"),
#line 5191
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5192
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5194
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5195
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5197
    [DIFFICULTY_NORMAL][TRAINER_KATE_AND_JOY] =
    {
#line 5198
        .trainerName = _("Blank"),
#line 5199
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5200
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5202
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5204
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5203
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5205
    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_1] =
    {
#line 5206
        .trainerName = _("Blank"),
#line 5207
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5208
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5210
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5212
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5211
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5213
    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_2] =
    {
#line 5214
        .trainerName = _("Blank"),
#line 5215
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5216
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5218
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5220
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5219
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5221
    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_3] =
    {
#line 5222
        .trainerName = _("Blank"),
#line 5223
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5224
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5226
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5228
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5227
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5229
    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_4] =
    {
#line 5230
        .trainerName = _("Blank"),
#line 5231
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5232
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5234
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5236
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5235
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5237
    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_5] =
    {
#line 5238
        .trainerName = _("Blank"),
#line 5239
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5240
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5242
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5244
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5243
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5245
    [DIFFICULTY_NORMAL][TRAINER_VICTOR] =
    {
#line 5246
        .trainerName = _("Blank"),
#line 5247
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5248
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5250
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5252
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5251
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5253
    [DIFFICULTY_NORMAL][TRAINER_MIGUEL_1] =
    {
#line 5254
        .trainerName = _("Blank"),
#line 5255
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5256
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5258
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5260
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5259
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5261
    [DIFFICULTY_NORMAL][TRAINER_COLTON] =
    {
#line 5262
        .trainerName = _("Blank"),
#line 5263
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5264
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5266
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5268
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5267
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5269
    [DIFFICULTY_NORMAL][TRAINER_MIGUEL_2] =
    {
#line 5270
        .trainerName = _("Blank"),
#line 5271
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5272
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5274
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5276
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5275
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5277
    [DIFFICULTY_NORMAL][TRAINER_MIGUEL_3] =
    {
#line 5278
        .trainerName = _("Blank"),
#line 5279
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5280
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5282
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5284
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5283
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5285
    [DIFFICULTY_NORMAL][TRAINER_MIGUEL_4] =
    {
#line 5286
        .trainerName = _("Blank"),
#line 5287
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5288
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5290
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5292
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5291
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5293
    [DIFFICULTY_NORMAL][TRAINER_MIGUEL_5] =
    {
#line 5294
        .trainerName = _("Blank"),
#line 5295
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5296
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5298
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5300
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5299
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5301
    [DIFFICULTY_NORMAL][TRAINER_VICTORIA] =
    {
#line 5302
        .trainerName = _("Blank"),
#line 5303
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5304
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5306
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5308
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5307
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5309
    [DIFFICULTY_NORMAL][TRAINER_VANESSA] =
    {
#line 5310
        .trainerName = _("Blank"),
#line 5311
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5312
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5314
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5316
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5315
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5317
    [DIFFICULTY_NORMAL][TRAINER_BETHANY] =
    {
#line 5318
        .trainerName = _("Blank"),
#line 5319
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5320
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5322
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5324
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5323
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5325
    [DIFFICULTY_NORMAL][TRAINER_ISABEL_1] =
    {
#line 5326
        .trainerName = _("Blank"),
#line 5327
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5328
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5330
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5332
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5331
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5333
    [DIFFICULTY_NORMAL][TRAINER_ISABEL_2] =
    {
#line 5334
        .trainerName = _("Blank"),
#line 5335
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5336
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5338
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5340
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5339
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5341
    [DIFFICULTY_NORMAL][TRAINER_ISABEL_3] =
    {
#line 5342
        .trainerName = _("Blank"),
#line 5343
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5344
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5346
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5348
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5347
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5349
    [DIFFICULTY_NORMAL][TRAINER_ISABEL_4] =
    {
#line 5350
        .trainerName = _("Blank"),
#line 5351
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5352
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5354
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5356
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5355
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5357
    [DIFFICULTY_NORMAL][TRAINER_ISABEL_5] =
    {
#line 5358
        .trainerName = _("Blank"),
#line 5359
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5360
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5362
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5364
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5363
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5365
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY_1] =
    {
#line 5366
        .trainerName = _("Blank"),
#line 5367
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5368
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5370
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5372
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5371
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5373
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY_2] =
    {
#line 5374
        .trainerName = _("Blank"),
#line 5375
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5376
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5378
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5380
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5379
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5381
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY_3] =
    {
#line 5382
        .trainerName = _("Blank"),
#line 5383
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5384
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5386
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5388
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5387
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5389
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY_4] =
    {
#line 5390
        .trainerName = _("Blank"),
#line 5391
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5392
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5394
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5396
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5395
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5397
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY_5] =
    {
#line 5398
        .trainerName = _("Blank"),
#line 5399
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5400
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5402
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5404
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5403
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5405
    [DIFFICULTY_NORMAL][TRAINER_VICKY] =
    {
#line 5406
        .trainerName = _("Blank"),
#line 5407
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5408
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5410
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5412
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5411
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5413
    [DIFFICULTY_NORMAL][TRAINER_SHELBY_1] =
    {
#line 5414
        .trainerName = _("Blank"),
#line 5415
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5416
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5418
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5420
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5419
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5421
    [DIFFICULTY_NORMAL][TRAINER_SHELBY_2] =
    {
#line 5422
        .trainerName = _("Blank"),
#line 5423
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5424
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5426
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5428
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5427
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5429
    [DIFFICULTY_NORMAL][TRAINER_SHELBY_3] =
    {
#line 5430
        .trainerName = _("Blank"),
#line 5431
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5432
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5434
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5436
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5435
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5437
    [DIFFICULTY_NORMAL][TRAINER_SHELBY_4] =
    {
#line 5438
        .trainerName = _("Blank"),
#line 5439
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5440
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5442
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5444
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5443
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5445
    [DIFFICULTY_NORMAL][TRAINER_SHELBY_5] =
    {
#line 5446
        .trainerName = _("Blank"),
#line 5447
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5448
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5450
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5452
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5451
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5453
    [DIFFICULTY_NORMAL][TRAINER_CALVIN_1] =
    {
#line 5454
        .trainerName = _("Blank"),
#line 5455
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5456
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5458
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5460
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5459
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5461
    [DIFFICULTY_NORMAL][TRAINER_BILLY] =
    {
#line 5462
        .trainerName = _("Blank"),
#line 5463
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5464
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5466
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5468
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5467
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5469
    [DIFFICULTY_NORMAL][TRAINER_JOSH] =
    {
#line 5470
        .trainerName = _("Blank"),
#line 5471
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5472
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5474
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5476
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5475
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5477
    [DIFFICULTY_NORMAL][TRAINER_TOMMY] =
    {
#line 5478
        .trainerName = _("Blank"),
#line 5479
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5482
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5484
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5483
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5485
    [DIFFICULTY_NORMAL][TRAINER_JOEY] =
    {
#line 5486
        .trainerName = _("Blank"),
#line 5487
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5488
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5490
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5492
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5491
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5493
    [DIFFICULTY_NORMAL][TRAINER_BEN] =
    {
#line 5494
        .trainerName = _("Blank"),
#line 5495
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5496
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5498
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5500
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5499
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5501
    [DIFFICULTY_NORMAL][TRAINER_QUINCY] =
    {
#line 5502
        .trainerName = _("Blank"),
#line 5503
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5504
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5506
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5508
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5507
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5509
    [DIFFICULTY_NORMAL][TRAINER_KATELYNN] =
    {
#line 5510
        .trainerName = _("Blank"),
#line 5511
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5512
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5514
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5516
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5515
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5517
    [DIFFICULTY_NORMAL][TRAINER_JAYLEN] =
    {
#line 5518
        .trainerName = _("Blank"),
#line 5519
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5520
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5522
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5524
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5523
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5525
    [DIFFICULTY_NORMAL][TRAINER_DILLON] =
    {
#line 5526
        .trainerName = _("Blank"),
#line 5527
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5528
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5530
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5532
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5531
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5533
    [DIFFICULTY_NORMAL][TRAINER_CALVIN_2] =
    {
#line 5534
        .trainerName = _("Blank"),
#line 5535
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5536
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5538
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5540
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5539
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5541
    [DIFFICULTY_NORMAL][TRAINER_CALVIN_3] =
    {
#line 5542
        .trainerName = _("Blank"),
#line 5543
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5544
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5546
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5548
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5547
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5549
    [DIFFICULTY_NORMAL][TRAINER_CALVIN_4] =
    {
#line 5550
        .trainerName = _("Blank"),
#line 5551
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5552
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5554
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5556
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5555
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5557
    [DIFFICULTY_NORMAL][TRAINER_CALVIN_5] =
    {
#line 5558
        .trainerName = _("Blank"),
#line 5559
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5560
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5562
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5564
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5563
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5565
    [DIFFICULTY_NORMAL][TRAINER_EDDIE] =
    {
#line 5566
        .trainerName = _("Blank"),
#line 5567
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5568
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5570
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5572
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5571
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5573
    [DIFFICULTY_NORMAL][TRAINER_ALLEN] =
    {
#line 5574
        .trainerName = _("Blank"),
#line 5575
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5578
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5580
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5579
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5581
    [DIFFICULTY_NORMAL][TRAINER_TIMMY] =
    {
#line 5582
        .trainerName = _("Blank"),
#line 5583
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5584
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5586
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5588
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5587
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5589
    [DIFFICULTY_NORMAL][TRAINER_WALLACE] =
    {
#line 5590
        .trainerName = _("Blank"),
#line 5591
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5592
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5594
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5596
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5595
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5597
    [DIFFICULTY_NORMAL][TRAINER_ANDREW] =
    {
#line 5598
        .trainerName = _("Blank"),
#line 5599
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5600
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5602
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5604
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5603
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5605
    [DIFFICULTY_NORMAL][TRAINER_IVAN] =
    {
#line 5606
        .trainerName = _("Blank"),
#line 5607
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5608
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5610
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5612
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5611
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5613
    [DIFFICULTY_NORMAL][TRAINER_CLAUDE] =
    {
#line 5614
        .trainerName = _("Blank"),
#line 5615
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5616
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5618
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5620
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5619
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5621
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT_1] =
    {
#line 5622
        .trainerName = _("Blank"),
#line 5623
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5624
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5626
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5628
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5627
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5629
    [DIFFICULTY_NORMAL][TRAINER_NED] =
    {
#line 5630
        .trainerName = _("Blank"),
#line 5631
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5632
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5634
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5636
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5635
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5637
    [DIFFICULTY_NORMAL][TRAINER_DALE] =
    {
#line 5638
        .trainerName = _("Blank"),
#line 5639
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5640
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5642
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5644
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5643
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5645
    [DIFFICULTY_NORMAL][TRAINER_NOLAN] =
    {
#line 5646
        .trainerName = _("Blank"),
#line 5647
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5648
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5650
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5652
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5651
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5653
    [DIFFICULTY_NORMAL][TRAINER_BARNY] =
    {
#line 5654
        .trainerName = _("Blank"),
#line 5655
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5656
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5658
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5660
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5659
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5661
    [DIFFICULTY_NORMAL][TRAINER_WADE] =
    {
#line 5662
        .trainerName = _("Blank"),
#line 5663
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5664
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5666
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5668
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5667
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5669
    [DIFFICULTY_NORMAL][TRAINER_CARTER] =
    {
#line 5670
        .trainerName = _("Blank"),
#line 5671
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5674
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5676
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5675
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5677
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT_2] =
    {
#line 5678
        .trainerName = _("Blank"),
#line 5679
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5682
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5684
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5683
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5685
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT_3] =
    {
#line 5686
        .trainerName = _("Blank"),
#line 5687
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5688
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5690
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5692
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5691
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5693
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT_4] =
    {
#line 5694
        .trainerName = _("Blank"),
#line 5695
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5696
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5698
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5700
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5699
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5701
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT_5] =
    {
#line 5702
        .trainerName = _("Blank"),
#line 5703
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5704
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5706
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5708
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5707
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5709
    [DIFFICULTY_NORMAL][TRAINER_RONALD] =
    {
#line 5710
        .trainerName = _("Blank"),
#line 5711
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5712
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5714
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5716
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5715
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5717
    [DIFFICULTY_NORMAL][TRAINER_JACOB] =
    {
#line 5718
        .trainerName = _("Blank"),
#line 5719
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5720
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5722
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5724
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5723
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5725
    [DIFFICULTY_NORMAL][TRAINER_ANTHONY] =
    {
#line 5726
        .trainerName = _("Blank"),
#line 5727
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5728
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5730
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5732
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5731
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5733
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN_1] =
    {
#line 5734
        .trainerName = _("Blank"),
#line 5735
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5736
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5738
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5740
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5739
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5741
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN_2] =
    {
#line 5742
        .trainerName = _("Blank"),
#line 5743
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5744
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5746
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5748
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5747
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5749
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN_3] =
    {
#line 5750
        .trainerName = _("Blank"),
#line 5751
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5752
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5754
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5756
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5755
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5757
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN_4] =
    {
#line 5758
        .trainerName = _("Blank"),
#line 5759
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5760
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5762
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5764
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5763
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5765
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN_5] =
    {
#line 5766
        .trainerName = _("Blank"),
#line 5767
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5768
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5770
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5772
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5771
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5773
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL_1] =
    {
#line 5774
        .trainerName = _("Blank"),
#line 5775
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5776
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5778
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5780
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5779
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5781
    [DIFFICULTY_NORMAL][TRAINER_JASMINE] =
    {
#line 5782
        .trainerName = _("Blank"),
#line 5783
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5784
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5786
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5788
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5787
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5789
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL_2] =
    {
#line 5790
        .trainerName = _("Blank"),
#line 5791
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5792
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5794
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5796
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5795
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5797
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL_3] =
    {
#line 5798
        .trainerName = _("Blank"),
#line 5799
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5800
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5802
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5804
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5803
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5805
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL_4] =
    {
#line 5806
        .trainerName = _("Blank"),
#line 5807
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5808
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5810
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5812
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5811
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5813
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL_5] =
    {
#line 5814
        .trainerName = _("Blank"),
#line 5815
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5816
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5818
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5820
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5819
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5821
    [DIFFICULTY_NORMAL][TRAINER_DYLAN_1] =
    {
#line 5822
        .trainerName = _("Blank"),
#line 5823
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5824
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5826
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5828
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5827
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5829
    [DIFFICULTY_NORMAL][TRAINER_DYLAN_2] =
    {
#line 5830
        .trainerName = _("Blank"),
#line 5831
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5832
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5834
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5836
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5835
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5837
    [DIFFICULTY_NORMAL][TRAINER_DYLAN_3] =
    {
#line 5838
        .trainerName = _("Blank"),
#line 5839
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5840
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5842
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5844
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5843
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5845
    [DIFFICULTY_NORMAL][TRAINER_DYLAN_4] =
    {
#line 5846
        .trainerName = _("Blank"),
#line 5847
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5848
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5850
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5852
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5851
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5853
    [DIFFICULTY_NORMAL][TRAINER_DYLAN_5] =
    {
#line 5854
        .trainerName = _("Blank"),
#line 5855
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5856
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5858
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5860
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5859
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5861
    [DIFFICULTY_NORMAL][TRAINER_MARIA_1] =
    {
#line 5862
        .trainerName = _("Blank"),
#line 5863
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5864
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5866
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5868
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5867
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5869
    [DIFFICULTY_NORMAL][TRAINER_MARIA_2] =
    {
#line 5870
        .trainerName = _("Blank"),
#line 5871
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5872
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5874
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5876
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5875
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5877
    [DIFFICULTY_NORMAL][TRAINER_MARIA_3] =
    {
#line 5878
        .trainerName = _("Blank"),
#line 5879
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5880
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5882
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5884
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5883
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5885
    [DIFFICULTY_NORMAL][TRAINER_MARIA_4] =
    {
#line 5886
        .trainerName = _("Blank"),
#line 5887
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5888
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5890
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5892
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5891
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5893
    [DIFFICULTY_NORMAL][TRAINER_MARIA_5] =
    {
#line 5894
        .trainerName = _("Blank"),
#line 5895
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5896
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5898
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5900
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5899
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5901
    [DIFFICULTY_NORMAL][TRAINER_CAMDEN] =
    {
#line 5902
        .trainerName = _("Blank"),
#line 5903
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5904
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5906
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5908
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5907
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5909
    [DIFFICULTY_NORMAL][TRAINER_DEMETRIUS] =
    {
#line 5910
        .trainerName = _("Blank"),
#line 5911
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5912
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5914
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5916
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5915
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5917
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH_1] =
    {
#line 5918
        .trainerName = _("Blank"),
#line 5919
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5920
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5922
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5924
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5923
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5925
    [DIFFICULTY_NORMAL][TRAINER_PABLO_1] =
    {
#line 5926
        .trainerName = _("Blank"),
#line 5927
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5928
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5930
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5932
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5931
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5933
    [DIFFICULTY_NORMAL][TRAINER_CHASE] =
    {
#line 5934
        .trainerName = _("Blank"),
#line 5935
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5938
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5940
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5939
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5941
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH_2] =
    {
#line 5942
        .trainerName = _("Blank"),
#line 5943
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5944
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5946
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5948
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5947
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5949
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH_3] =
    {
#line 5950
        .trainerName = _("Blank"),
#line 5951
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5952
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5954
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5956
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5955
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5957
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH_4] =
    {
#line 5958
        .trainerName = _("Blank"),
#line 5959
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5960
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5962
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5964
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5963
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5965
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH_5] =
    {
#line 5966
        .trainerName = _("Blank"),
#line 5967
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5968
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5970
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5972
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5971
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5973
    [DIFFICULTY_NORMAL][TRAINER_ISOBEL] =
    {
#line 5974
        .trainerName = _("Blank"),
#line 5975
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5976
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5978
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5980
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5979
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5981
    [DIFFICULTY_NORMAL][TRAINER_DONNY] =
    {
#line 5982
        .trainerName = _("Blank"),
#line 5983
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5984
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5986
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5988
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5987
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5989
    [DIFFICULTY_NORMAL][TRAINER_TALIA] =
    {
#line 5990
        .trainerName = _("Blank"),
#line 5991
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5992
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5994
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5996
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5995
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5997
    [DIFFICULTY_NORMAL][TRAINER_KATELYN_1] =
    {
#line 5998
        .trainerName = _("Blank"),
#line 5999
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6000
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6002
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6004
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6003
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6005
    [DIFFICULTY_NORMAL][TRAINER_ALLISON] =
    {
#line 6006
        .trainerName = _("Blank"),
#line 6007
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6008
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6010
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6012
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6011
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6013
    [DIFFICULTY_NORMAL][TRAINER_KATELYN_2] =
    {
#line 6014
        .trainerName = _("Blank"),
#line 6015
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6018
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6020
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6019
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6021
    [DIFFICULTY_NORMAL][TRAINER_KATELYN_3] =
    {
#line 6022
        .trainerName = _("Blank"),
#line 6023
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6024
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6026
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6028
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6027
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6029
    [DIFFICULTY_NORMAL][TRAINER_KATELYN_4] =
    {
#line 6030
        .trainerName = _("Blank"),
#line 6031
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6032
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6034
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6036
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6035
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6037
    [DIFFICULTY_NORMAL][TRAINER_KATELYN_5] =
    {
#line 6038
        .trainerName = _("Blank"),
#line 6039
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6040
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6042
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6044
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6043
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6045
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS_1] =
    {
#line 6046
        .trainerName = _("Blank"),
#line 6047
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6048
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6050
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6052
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6051
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6053
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS_2] =
    {
#line 6054
        .trainerName = _("Blank"),
#line 6055
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6056
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6058
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6060
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6059
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6061
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS_3] =
    {
#line 6062
        .trainerName = _("Blank"),
#line 6063
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6064
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6066
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6068
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6067
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6069
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS_4] =
    {
#line 6070
        .trainerName = _("Blank"),
#line 6071
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6074
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6076
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6075
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6077
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS_5] =
    {
#line 6078
        .trainerName = _("Blank"),
#line 6079
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6080
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6082
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6084
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6083
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6085
    [DIFFICULTY_NORMAL][TRAINER_AARON] =
    {
#line 6086
        .trainerName = _("Blank"),
#line 6087
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6088
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6090
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6092
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6091
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6093
    [DIFFICULTY_NORMAL][TRAINER_PERRY] =
    {
#line 6094
        .trainerName = _("Blank"),
#line 6095
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6098
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6100
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6099
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6101
    [DIFFICULTY_NORMAL][TRAINER_HUGH] =
    {
#line 6102
        .trainerName = _("Blank"),
#line 6103
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6106
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6108
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6107
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6109
    [DIFFICULTY_NORMAL][TRAINER_PHIL] =
    {
#line 6110
        .trainerName = _("Blank"),
#line 6111
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6112
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6114
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6116
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6115
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6117
    [DIFFICULTY_NORMAL][TRAINER_JARED] =
    {
#line 6118
        .trainerName = _("Blank"),
#line 6119
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6120
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6122
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6124
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6123
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6125
    [DIFFICULTY_NORMAL][TRAINER_HUMBERTO] =
    {
#line 6126
        .trainerName = _("Blank"),
#line 6127
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6128
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6130
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6132
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6131
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6133
    [DIFFICULTY_NORMAL][TRAINER_PRESLEY] =
    {
#line 6134
        .trainerName = _("Blank"),
#line 6135
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6136
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6138
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6140
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6139
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6141
    [DIFFICULTY_NORMAL][TRAINER_EDWARDO] =
    {
#line 6142
        .trainerName = _("Blank"),
#line 6143
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6144
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6146
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6148
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6147
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6149
    [DIFFICULTY_NORMAL][TRAINER_COLIN] =
    {
#line 6150
        .trainerName = _("Blank"),
#line 6151
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6152
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6154
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6156
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6155
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6157
    [DIFFICULTY_NORMAL][TRAINER_ROBERT_1] =
    {
#line 6158
        .trainerName = _("Blank"),
#line 6159
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6160
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6162
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6164
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6163
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6165
    [DIFFICULTY_NORMAL][TRAINER_BENNY] =
    {
#line 6166
        .trainerName = _("Blank"),
#line 6167
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6168
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6170
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6172
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6171
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6173
    [DIFFICULTY_NORMAL][TRAINER_CHESTER] =
    {
#line 6174
        .trainerName = _("Blank"),
#line 6175
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6176
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6178
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6180
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6179
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6181
    [DIFFICULTY_NORMAL][TRAINER_ROBERT_2] =
    {
#line 6182
        .trainerName = _("Blank"),
#line 6183
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6186
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6188
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6187
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6189
    [DIFFICULTY_NORMAL][TRAINER_ROBERT_3] =
    {
#line 6190
        .trainerName = _("Blank"),
#line 6191
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6192
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6194
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6195
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6197
    [DIFFICULTY_NORMAL][TRAINER_ROBERT_4] =
    {
#line 6198
        .trainerName = _("Blank"),
#line 6199
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6200
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6202
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6204
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6203
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6205
    [DIFFICULTY_NORMAL][TRAINER_ROBERT_5] =
    {
#line 6206
        .trainerName = _("Blank"),
#line 6207
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6208
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6210
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6212
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6211
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6213
    [DIFFICULTY_NORMAL][TRAINER_ALEX] =
    {
#line 6214
        .trainerName = _("Blank"),
#line 6215
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6216
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6218
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6220
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6219
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6221
    [DIFFICULTY_NORMAL][TRAINER_BECK] =
    {
#line 6222
        .trainerName = _("Blank"),
#line 6223
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6224
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6226
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6228
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6227
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6229
    [DIFFICULTY_NORMAL][TRAINER_YASU] =
    {
#line 6230
        .trainerName = _("Blank"),
#line 6231
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6232
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6234
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6236
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6235
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6237
    [DIFFICULTY_NORMAL][TRAINER_TAKASHI] =
    {
#line 6238
        .trainerName = _("Blank"),
#line 6239
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6240
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6242
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6244
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6243
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6245
    [DIFFICULTY_NORMAL][TRAINER_DIANNE] =
    {
#line 6246
        .trainerName = _("Blank"),
#line 6247
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6248
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6250
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6252
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6251
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6253
    [DIFFICULTY_NORMAL][TRAINER_JANI] =
    {
#line 6254
        .trainerName = _("Blank"),
#line 6255
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6256
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6258
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6260
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6259
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6261
    [DIFFICULTY_NORMAL][TRAINER_LAO_1] =
    {
#line 6262
        .trainerName = _("Blank"),
#line 6263
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6264
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6266
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6268
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6267
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6269
    [DIFFICULTY_NORMAL][TRAINER_LUNG] =
    {
#line 6270
        .trainerName = _("Blank"),
#line 6271
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6272
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6274
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6276
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6275
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6277
    [DIFFICULTY_NORMAL][TRAINER_LAO_2] =
    {
#line 6278
        .trainerName = _("Blank"),
#line 6279
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6280
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6282
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6284
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6283
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6285
    [DIFFICULTY_NORMAL][TRAINER_LAO_3] =
    {
#line 6286
        .trainerName = _("Blank"),
#line 6287
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6288
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6290
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6292
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6291
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6293
    [DIFFICULTY_NORMAL][TRAINER_LAO_4] =
    {
#line 6294
        .trainerName = _("Blank"),
#line 6295
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6296
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6298
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6300
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6299
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6301
    [DIFFICULTY_NORMAL][TRAINER_LAO_5] =
    {
#line 6302
        .trainerName = _("Blank"),
#line 6303
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6304
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6306
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6308
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6307
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6309
    [DIFFICULTY_NORMAL][TRAINER_JOCELYN] =
    {
#line 6310
        .trainerName = _("Blank"),
#line 6311
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6312
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6314
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6316
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6315
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6317
    [DIFFICULTY_NORMAL][TRAINER_LAURA] =
    {
#line 6318
        .trainerName = _("Blank"),
#line 6319
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6320
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6322
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6324
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6323
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6325
    [DIFFICULTY_NORMAL][TRAINER_CYNDY_1] =
    {
#line 6326
        .trainerName = _("Blank"),
#line 6327
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6328
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6330
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6332
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6331
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6333
    [DIFFICULTY_NORMAL][TRAINER_CORA] =
    {
#line 6334
        .trainerName = _("Blank"),
#line 6335
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6336
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6338
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6340
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6339
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6341
    [DIFFICULTY_NORMAL][TRAINER_PAULA] =
    {
#line 6342
        .trainerName = _("Blank"),
#line 6343
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6344
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6346
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6348
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6347
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6349
    [DIFFICULTY_NORMAL][TRAINER_CYNDY_2] =
    {
#line 6350
        .trainerName = _("Blank"),
#line 6351
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6352
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6354
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6356
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6355
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6357
    [DIFFICULTY_NORMAL][TRAINER_CYNDY_3] =
    {
#line 6358
        .trainerName = _("Blank"),
#line 6359
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6360
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6362
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6364
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6363
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6365
    [DIFFICULTY_NORMAL][TRAINER_CYNDY_4] =
    {
#line 6366
        .trainerName = _("Blank"),
#line 6367
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6368
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6370
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6372
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6371
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6373
    [DIFFICULTY_NORMAL][TRAINER_CYNDY_5] =
    {
#line 6374
        .trainerName = _("Blank"),
#line 6375
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6376
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6378
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6380
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6379
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6381
    [DIFFICULTY_NORMAL][TRAINER_MADELINE_1] =
    {
#line 6382
        .trainerName = _("Blank"),
#line 6383
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6384
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6386
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6388
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6387
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6389
    [DIFFICULTY_NORMAL][TRAINER_CLARISSA] =
    {
#line 6390
        .trainerName = _("Blank"),
#line 6391
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6392
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6394
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6396
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6395
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6397
    [DIFFICULTY_NORMAL][TRAINER_ANGELICA] =
    {
#line 6398
        .trainerName = _("Blank"),
#line 6399
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6400
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6402
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6404
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6403
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6405
    [DIFFICULTY_NORMAL][TRAINER_MADELINE_2] =
    {
#line 6406
        .trainerName = _("Blank"),
#line 6407
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6408
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6410
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6412
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6411
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6413
    [DIFFICULTY_NORMAL][TRAINER_MADELINE_3] =
    {
#line 6414
        .trainerName = _("Blank"),
#line 6415
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6416
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6418
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6420
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6419
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6421
    [DIFFICULTY_NORMAL][TRAINER_MADELINE_4] =
    {
#line 6422
        .trainerName = _("Blank"),
#line 6423
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6424
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6426
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6428
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6427
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6429
    [DIFFICULTY_NORMAL][TRAINER_MADELINE_5] =
    {
#line 6430
        .trainerName = _("Blank"),
#line 6431
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6432
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6434
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6436
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6435
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6437
    [DIFFICULTY_NORMAL][TRAINER_BEVERLY] =
    {
#line 6438
        .trainerName = _("Blank"),
#line 6439
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6440
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6442
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6444
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6443
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6445
    [DIFFICULTY_NORMAL][TRAINER_IMANI] =
    {
#line 6446
        .trainerName = _("Blank"),
#line 6447
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6448
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6450
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6452
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6451
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6453
    [DIFFICULTY_NORMAL][TRAINER_KYLA] =
    {
#line 6454
        .trainerName = _("Blank"),
#line 6455
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6456
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6458
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6460
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6459
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6461
    [DIFFICULTY_NORMAL][TRAINER_DENISE] =
    {
#line 6462
        .trainerName = _("Blank"),
#line 6463
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6464
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6466
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6468
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6467
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6469
    [DIFFICULTY_NORMAL][TRAINER_BETH] =
    {
#line 6470
        .trainerName = _("Blank"),
#line 6471
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6472
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6474
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6476
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6475
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6477
    [DIFFICULTY_NORMAL][TRAINER_TARA] =
    {
#line 6478
        .trainerName = _("Blank"),
#line 6479
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6482
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6484
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6483
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6485
    [DIFFICULTY_NORMAL][TRAINER_MISSY] =
    {
#line 6486
        .trainerName = _("Blank"),
#line 6487
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6488
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6490
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6492
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6491
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6493
    [DIFFICULTY_NORMAL][TRAINER_ALICE] =
    {
#line 6494
        .trainerName = _("Blank"),
#line 6495
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6496
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6498
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6500
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6499
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6501
    [DIFFICULTY_NORMAL][TRAINER_JENNY_1] =
    {
#line 6502
        .trainerName = _("Blank"),
#line 6503
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6504
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6506
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6508
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6507
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6509
    [DIFFICULTY_NORMAL][TRAINER_GRACE] =
    {
#line 6510
        .trainerName = _("Blank"),
#line 6511
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6512
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6514
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6516
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6515
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6517
    [DIFFICULTY_NORMAL][TRAINER_TANYA] =
    {
#line 6518
        .trainerName = _("Blank"),
#line 6519
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6520
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6522
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6524
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6523
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6525
    [DIFFICULTY_NORMAL][TRAINER_SHARON] =
    {
#line 6526
        .trainerName = _("Blank"),
#line 6527
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6528
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6530
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6532
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6531
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6533
    [DIFFICULTY_NORMAL][TRAINER_NIKKI] =
    {
#line 6534
        .trainerName = _("Blank"),
#line 6535
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6536
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6538
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6540
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6539
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6541
    [DIFFICULTY_NORMAL][TRAINER_BRENDA] =
    {
#line 6542
        .trainerName = _("Blank"),
#line 6543
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6544
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6546
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6548
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6547
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6549
    [DIFFICULTY_NORMAL][TRAINER_KATIE] =
    {
#line 6550
        .trainerName = _("Blank"),
#line 6551
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6552
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6554
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6556
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6555
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6557
    [DIFFICULTY_NORMAL][TRAINER_SUSIE] =
    {
#line 6558
        .trainerName = _("Blank"),
#line 6559
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6560
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6562
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6564
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6563
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6565
    [DIFFICULTY_NORMAL][TRAINER_KARA] =
    {
#line 6566
        .trainerName = _("Blank"),
#line 6567
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6568
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6570
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6572
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6571
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6573
    [DIFFICULTY_NORMAL][TRAINER_DANA] =
    {
#line 6574
        .trainerName = _("Blank"),
#line 6575
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6578
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6580
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6579
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6581
    [DIFFICULTY_NORMAL][TRAINER_SIENNA] =
    {
#line 6582
        .trainerName = _("Blank"),
#line 6583
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6584
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6586
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6588
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6587
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6589
    [DIFFICULTY_NORMAL][TRAINER_DEBRA] =
    {
#line 6590
        .trainerName = _("Blank"),
#line 6591
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6592
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6594
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6596
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6595
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6597
    [DIFFICULTY_NORMAL][TRAINER_LINDA] =
    {
#line 6598
        .trainerName = _("Blank"),
#line 6599
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6600
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6602
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6604
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6603
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6605
    [DIFFICULTY_NORMAL][TRAINER_KAYLEE] =
    {
#line 6606
        .trainerName = _("Blank"),
#line 6607
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6608
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6610
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6612
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6611
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6613
    [DIFFICULTY_NORMAL][TRAINER_LAUREL] =
    {
#line 6614
        .trainerName = _("Blank"),
#line 6615
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6616
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6618
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6620
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6619
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6621
    [DIFFICULTY_NORMAL][TRAINER_CARLEE] =
    {
#line 6622
        .trainerName = _("Blank"),
#line 6623
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6624
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6626
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6628
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6627
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6629
    [DIFFICULTY_NORMAL][TRAINER_JENNY_2] =
    {
#line 6630
        .trainerName = _("Blank"),
#line 6631
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6632
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6634
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6636
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6635
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6637
    [DIFFICULTY_NORMAL][TRAINER_JENNY_3] =
    {
#line 6638
        .trainerName = _("Blank"),
#line 6639
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6640
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6642
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6644
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6643
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6645
    [DIFFICULTY_NORMAL][TRAINER_JENNY_4] =
    {
#line 6646
        .trainerName = _("Blank"),
#line 6647
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6648
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6650
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6652
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6651
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6653
    [DIFFICULTY_NORMAL][TRAINER_JENNY_5] =
    {
#line 6654
        .trainerName = _("Blank"),
#line 6655
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6656
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6658
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6660
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6659
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6661
    [DIFFICULTY_NORMAL][TRAINER_HEIDI] =
    {
#line 6662
        .trainerName = _("Blank"),
#line 6663
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6664
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6666
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6668
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6667
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6669
    [DIFFICULTY_NORMAL][TRAINER_BECKY] =
    {
#line 6670
        .trainerName = _("Blank"),
#line 6671
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6674
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6676
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6675
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6677
    [DIFFICULTY_NORMAL][TRAINER_CAROL] =
    {
#line 6678
        .trainerName = _("Blank"),
#line 6679
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6682
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6684
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6683
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6685
    [DIFFICULTY_NORMAL][TRAINER_NANCY] =
    {
#line 6686
        .trainerName = _("Blank"),
#line 6687
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6688
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6690
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6692
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6691
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6693
    [DIFFICULTY_NORMAL][TRAINER_MARTHA] =
    {
#line 6694
        .trainerName = _("Blank"),
#line 6695
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6696
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6698
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6700
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6699
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6701
    [DIFFICULTY_NORMAL][TRAINER_DIANA_1] =
    {
#line 6702
        .trainerName = _("Blank"),
#line 6703
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6704
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6706
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6708
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6707
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6709
    [DIFFICULTY_NORMAL][TRAINER_CEDRIC] =
    {
#line 6710
        .trainerName = _("Blank"),
#line 6711
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6712
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6714
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6716
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6715
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6717
    [DIFFICULTY_NORMAL][TRAINER_IRENE] =
    {
#line 6718
        .trainerName = _("Blank"),
#line 6719
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6720
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6722
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6724
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6723
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6725
    [DIFFICULTY_NORMAL][TRAINER_DIANA_2] =
    {
#line 6726
        .trainerName = _("Blank"),
#line 6727
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6728
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6730
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6732
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6731
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6733
    [DIFFICULTY_NORMAL][TRAINER_DIANA_3] =
    {
#line 6734
        .trainerName = _("Blank"),
#line 6735
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6736
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6738
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6740
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6739
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6741
    [DIFFICULTY_NORMAL][TRAINER_DIANA_4] =
    {
#line 6742
        .trainerName = _("Blank"),
#line 6743
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6744
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6746
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6748
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6747
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6749
    [DIFFICULTY_NORMAL][TRAINER_DIANA_5] =
    {
#line 6750
        .trainerName = _("Blank"),
#line 6751
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6752
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6754
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6756
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6755
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6757
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_1] =
    {
#line 6758
        .trainerName = _("Blank"),
#line 6759
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6760
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6762
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6764
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6763
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6765
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_2] =
    {
#line 6766
        .trainerName = _("Blank"),
#line 6767
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6768
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6770
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6772
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6771
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6773
    [DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA_1] =
    {
#line 6774
        .trainerName = _("Blank"),
#line 6775
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6776
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6778
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6780
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6779
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6781
    [DIFFICULTY_NORMAL][TRAINER_MIU_AND_YUKI] =
    {
#line 6782
        .trainerName = _("Blank"),
#line 6783
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6784
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6786
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6788
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6787
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6789
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_3] =
    {
#line 6790
        .trainerName = _("Blank"),
#line 6791
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6792
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6794
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6796
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6795
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6797
    [DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA_2] =
    {
#line 6798
        .trainerName = _("Blank"),
#line 6799
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6800
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6802
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6804
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6803
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6805
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_4] =
    {
#line 6806
        .trainerName = _("Blank"),
#line 6807
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6808
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6810
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6812
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6811
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6813
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_5] =
    {
#line 6814
        .trainerName = _("Blank"),
#line 6815
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6816
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6818
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6820
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6819
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6821
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_6] =
    {
#line 6822
        .trainerName = _("Blank"),
#line 6823
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6824
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6826
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6828
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6827
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6829
    [DIFFICULTY_NORMAL][TRAINER_HUEY] =
    {
#line 6830
        .trainerName = _("Blank"),
#line 6831
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6832
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6834
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6836
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6835
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6837
    [DIFFICULTY_NORMAL][TRAINER_EDMOND] =
    {
#line 6838
        .trainerName = _("Blank"),
#line 6839
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6840
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6842
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6844
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6843
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6845
    [DIFFICULTY_NORMAL][TRAINER_ERNEST_1] =
    {
#line 6846
        .trainerName = _("Blank"),
#line 6847
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6848
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6850
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6852
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6851
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6853
    [DIFFICULTY_NORMAL][TRAINER_DWAYNE] =
    {
#line 6854
        .trainerName = _("Blank"),
#line 6855
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6856
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6858
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6860
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6859
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6861
    [DIFFICULTY_NORMAL][TRAINER_PHILLIP] =
    {
#line 6862
        .trainerName = _("Blank"),
#line 6863
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6864
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6866
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6868
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6867
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6869
    [DIFFICULTY_NORMAL][TRAINER_LEONARD] =
    {
#line 6870
        .trainerName = _("Blank"),
#line 6871
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6872
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6874
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6876
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6875
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6877
    [DIFFICULTY_NORMAL][TRAINER_DUNCAN] =
    {
#line 6878
        .trainerName = _("Blank"),
#line 6879
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6880
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6882
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6884
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6883
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6885
    [DIFFICULTY_NORMAL][TRAINER_ERNEST_2] =
    {
#line 6886
        .trainerName = _("Blank"),
#line 6887
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6888
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6890
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6892
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6891
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6893
    [DIFFICULTY_NORMAL][TRAINER_ERNEST_3] =
    {
#line 6894
        .trainerName = _("Blank"),
#line 6895
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6896
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6898
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6900
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6899
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6901
    [DIFFICULTY_NORMAL][TRAINER_ERNEST_4] =
    {
#line 6902
        .trainerName = _("Blank"),
#line 6903
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6904
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6906
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6908
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6907
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6909
    [DIFFICULTY_NORMAL][TRAINER_ERNEST_5] =
    {
#line 6910
        .trainerName = _("Blank"),
#line 6911
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6912
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6914
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6916
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6915
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6917
    [DIFFICULTY_NORMAL][TRAINER_ELI] =
    {
#line 6918
        .trainerName = _("Blank"),
#line 6919
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6920
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6922
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6924
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6923
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6925
    [DIFFICULTY_NORMAL][TRAINER_ANNIKA] =
    {
#line 6926
        .trainerName = _("Blank"),
#line 6927
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6928
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6930
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6932
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6931
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6933
    [DIFFICULTY_NORMAL][TRAINER_JAZMYN] =
    {
#line 6934
        .trainerName = _("Blank"),
#line 6935
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6938
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6940
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6939
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6941
    [DIFFICULTY_NORMAL][TRAINER_JONAS] =
    {
#line 6942
        .trainerName = _("Blank"),
#line 6943
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6944
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6946
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6948
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6947
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6949
    [DIFFICULTY_NORMAL][TRAINER_KAYLEY] =
    {
#line 6950
        .trainerName = _("Blank"),
#line 6951
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6952
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6954
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6956
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6955
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6957
    [DIFFICULTY_NORMAL][TRAINER_AURON] =
    {
#line 6958
        .trainerName = _("Blank"),
#line 6959
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6960
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6962
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6964
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6963
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6965
    [DIFFICULTY_NORMAL][TRAINER_KELVIN] =
    {
#line 6966
        .trainerName = _("Blank"),
#line 6967
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6968
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6970
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6972
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6971
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6973
    [DIFFICULTY_NORMAL][TRAINER_MARLEY] =
    {
#line 6974
        .trainerName = _("Blank"),
#line 6975
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6976
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6978
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6980
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6979
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6981
    [DIFFICULTY_NORMAL][TRAINER_REYNA] =
    {
#line 6982
        .trainerName = _("Blank"),
#line 6983
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6984
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6986
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6988
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6987
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6989
    [DIFFICULTY_NORMAL][TRAINER_HUDSON] =
    {
#line 6990
        .trainerName = _("Blank"),
#line 6991
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6992
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6994
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6996
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6995
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6997
    [DIFFICULTY_NORMAL][TRAINER_CONOR] =
    {
#line 6998
        .trainerName = _("Blank"),
#line 6999
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7000
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7002
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7004
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7003
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7005
    [DIFFICULTY_NORMAL][TRAINER_EDWIN_1] =
    {
#line 7006
        .trainerName = _("Blank"),
#line 7007
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7008
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7010
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7012
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7011
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7013
    [DIFFICULTY_NORMAL][TRAINER_HECTOR] =
    {
#line 7014
        .trainerName = _("Blank"),
#line 7015
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7018
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7020
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7019
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7021
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MOSSDEEP] =
    {
#line 7022
        .trainerName = _("Blank"),
#line 7023
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7024
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7026
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7028
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7027
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7029
    [DIFFICULTY_NORMAL][TRAINER_EDWIN_2] =
    {
#line 7030
        .trainerName = _("Blank"),
#line 7031
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7032
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7034
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7036
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7035
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7037
    [DIFFICULTY_NORMAL][TRAINER_EDWIN_3] =
    {
#line 7038
        .trainerName = _("Blank"),
#line 7039
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7040
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7042
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7044
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7043
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7045
    [DIFFICULTY_NORMAL][TRAINER_EDWIN_4] =
    {
#line 7046
        .trainerName = _("Blank"),
#line 7047
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7048
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7050
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7052
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7051
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7053
    [DIFFICULTY_NORMAL][TRAINER_EDWIN_5] =
    {
#line 7054
        .trainerName = _("Blank"),
#line 7055
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7056
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7058
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7060
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7059
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7061
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_1] =
    {
#line 7062
        .trainerName = _("Blank"),
#line 7063
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7064
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7066
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7068
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7067
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7069
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
    {
#line 7070
        .trainerName = _("Blank"),
#line 7071
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7074
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7076
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7075
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7077
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
    {
#line 7078
        .trainerName = _("Blank"),
#line 7079
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7080
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7082
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7084
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7083
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7085
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_MUDKIP] =
    {
#line 7086
        .trainerName = _("Blank"),
#line 7087
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7088
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7090
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7092
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7091
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7093
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TREECKO] =
    {
#line 7094
        .trainerName = _("Blank"),
#line 7095
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7098
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7100
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7099
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7101
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_TREECKO] =
    {
#line 7102
        .trainerName = _("Blank"),
#line 7103
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7106
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7108
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7107
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7109
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TREECKO] =
    {
#line 7110
        .trainerName = _("Blank"),
#line 7111
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7112
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7114
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7116
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7115
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7117
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
    {
#line 7118
        .trainerName = _("Blank"),
#line 7119
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7120
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7122
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7124
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7123
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7125
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
    {
#line 7126
        .trainerName = _("Blank"),
#line 7127
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7128
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7130
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7132
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7131
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7133
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
    {
#line 7134
        .trainerName = _("Blank"),
#line 7135
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7136
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7138
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7140
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7139
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7141
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_MUDKIP] =
    {
#line 7142
        .trainerName = _("Blank"),
#line 7143
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7144
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7146
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7148
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7147
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7149
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_MUDKIP] =
    {
#line 7150
        .trainerName = _("Blank"),
#line 7151
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7152
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7154
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7156
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7155
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7157
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_MUDKIP] =
    {
#line 7158
        .trainerName = _("Blank"),
#line 7159
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7160
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7162
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7164
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7163
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7165
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TREECKO] =
    {
#line 7166
        .trainerName = _("Blank"),
#line 7167
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7168
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7170
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7172
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7171
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7173
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TREECKO] =
    {
#line 7174
        .trainerName = _("Blank"),
#line 7175
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7176
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7178
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7180
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7179
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7181
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TREECKO] =
    {
#line 7182
        .trainerName = _("Blank"),
#line 7183
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7186
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7188
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7187
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7189
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TORCHIC] =
    {
#line 7190
        .trainerName = _("Blank"),
#line 7191
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7192
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7194
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7195
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7197
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TORCHIC] =
    {
#line 7198
        .trainerName = _("Blank"),
#line 7199
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7200
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7202
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7204
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7203
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7205
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TORCHIC] =
    {
#line 7206
        .trainerName = _("Blank"),
#line 7207
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7208
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7210
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7212
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7211
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7213
    [DIFFICULTY_NORMAL][TRAINER_ISAAC_1] =
    {
#line 7214
        .trainerName = _("Blank"),
#line 7215
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7216
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7218
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7220
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7219
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7221
    [DIFFICULTY_NORMAL][TRAINER_DAVIS] =
    {
#line 7222
        .trainerName = _("Blank"),
#line 7223
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7224
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7226
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7228
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7227
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7229
    [DIFFICULTY_NORMAL][TRAINER_MITCHELL] =
    {
#line 7230
        .trainerName = _("Blank"),
#line 7231
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7232
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7234
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7236
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7235
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7237
    [DIFFICULTY_NORMAL][TRAINER_ISAAC_2] =
    {
#line 7238
        .trainerName = _("Blank"),
#line 7239
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7240
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7242
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7244
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7243
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7245
    [DIFFICULTY_NORMAL][TRAINER_ISAAC_3] =
    {
#line 7246
        .trainerName = _("Blank"),
#line 7247
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7248
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7250
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7252
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7251
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7253
    [DIFFICULTY_NORMAL][TRAINER_ISAAC_4] =
    {
#line 7254
        .trainerName = _("Blank"),
#line 7255
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7256
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7258
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7260
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7259
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7261
    [DIFFICULTY_NORMAL][TRAINER_ISAAC_5] =
    {
#line 7262
        .trainerName = _("Blank"),
#line 7263
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7264
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7266
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7268
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7267
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7269
    [DIFFICULTY_NORMAL][TRAINER_LYDIA_1] =
    {
#line 7270
        .trainerName = _("Blank"),
#line 7271
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7272
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7274
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7276
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7275
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7277
    [DIFFICULTY_NORMAL][TRAINER_HALLE] =
    {
#line 7278
        .trainerName = _("Blank"),
#line 7279
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7280
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7282
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7284
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7283
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7285
    [DIFFICULTY_NORMAL][TRAINER_GARRISON] =
    {
#line 7286
        .trainerName = _("Blank"),
#line 7287
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7288
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7290
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7292
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7291
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7293
    [DIFFICULTY_NORMAL][TRAINER_LYDIA_2] =
    {
#line 7294
        .trainerName = _("Blank"),
#line 7295
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7296
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7298
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7300
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7299
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7301
    [DIFFICULTY_NORMAL][TRAINER_LYDIA_3] =
    {
#line 7302
        .trainerName = _("Blank"),
#line 7303
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7304
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7306
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7308
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7307
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7309
    [DIFFICULTY_NORMAL][TRAINER_LYDIA_4] =
    {
#line 7310
        .trainerName = _("Blank"),
#line 7311
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7312
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7314
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7316
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7315
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7317
    [DIFFICULTY_NORMAL][TRAINER_LYDIA_5] =
    {
#line 7318
        .trainerName = _("Blank"),
#line 7319
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7320
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7322
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7324
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7323
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7325
    [DIFFICULTY_NORMAL][TRAINER_JACKSON_1] =
    {
#line 7326
        .trainerName = _("Blank"),
#line 7327
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7328
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7330
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7332
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7331
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7333
    [DIFFICULTY_NORMAL][TRAINER_LORENZO] =
    {
#line 7334
        .trainerName = _("Blank"),
#line 7335
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7336
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7338
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7340
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7339
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7341
    [DIFFICULTY_NORMAL][TRAINER_SEBASTIAN] =
    {
#line 7342
        .trainerName = _("Blank"),
#line 7343
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7344
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7346
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7348
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7347
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7349
    [DIFFICULTY_NORMAL][TRAINER_JACKSON_2] =
    {
#line 7350
        .trainerName = _("Blank"),
#line 7351
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7352
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7354
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7356
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7355
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7357
    [DIFFICULTY_NORMAL][TRAINER_JACKSON_3] =
    {
#line 7358
        .trainerName = _("Blank"),
#line 7359
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7360
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7362
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7364
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7363
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7365
    [DIFFICULTY_NORMAL][TRAINER_JACKSON_4] =
    {
#line 7366
        .trainerName = _("Blank"),
#line 7367
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7368
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7370
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7372
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7371
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7373
    [DIFFICULTY_NORMAL][TRAINER_JACKSON_5] =
    {
#line 7374
        .trainerName = _("Blank"),
#line 7375
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7376
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7378
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7380
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7379
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7381
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_1] =
    {
#line 7382
        .trainerName = _("Blank"),
#line 7383
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7384
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7386
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7388
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7387
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7389
    [DIFFICULTY_NORMAL][TRAINER_JENNA] =
    {
#line 7390
        .trainerName = _("Blank"),
#line 7391
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7392
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7394
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7396
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7395
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7397
    [DIFFICULTY_NORMAL][TRAINER_SOPHIA] =
    {
#line 7398
        .trainerName = _("Blank"),
#line 7399
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7400
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7402
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7404
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7403
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7405
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_2] =
    {
#line 7406
        .trainerName = _("Blank"),
#line 7407
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7408
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7410
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7412
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7411
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7413
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_3] =
    {
#line 7414
        .trainerName = _("Blank"),
#line 7415
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7416
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7418
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7420
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7419
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7421
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_4] =
    {
#line 7422
        .trainerName = _("Blank"),
#line 7423
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7424
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7426
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7428
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7427
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7429
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_5] =
    {
#line 7430
        .trainerName = _("Blank"),
#line 7431
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7432
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7434
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7436
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7435
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7437
    [DIFFICULTY_NORMAL][TRAINER_JULIO] =
    {
#line 7438
        .trainerName = _("Blank"),
#line 7439
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7440
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7442
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7444
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7443
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7445
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 7446
        .trainerName = _("Blank"),
#line 7447
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7448
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7450
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7452
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7451
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7453
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_UNUSED] =
    {
#line 7454
        .trainerName = _("Blank"),
#line 7455
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7456
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7458
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7460
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7459
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7461
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 7462
        .trainerName = _("Blank"),
#line 7463
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7464
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7466
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7468
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7467
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7469
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_JAGGED_PASS] =
    {
#line 7470
        .trainerName = _("Blank"),
#line 7471
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7472
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7474
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7476
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7475
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7477
    [DIFFICULTY_NORMAL][TRAINER_MARC] =
    {
#line 7478
        .trainerName = _("Blank"),
#line 7479
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7482
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7484
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7483
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7485
    [DIFFICULTY_NORMAL][TRAINER_BRENDEN] =
    {
#line 7486
        .trainerName = _("Blank"),
#line 7487
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7488
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7490
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7492
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7491
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7493
    [DIFFICULTY_NORMAL][TRAINER_LILITH] =
    {
#line 7494
        .trainerName = _("Blank"),
#line 7495
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7496
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7498
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7500
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7499
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7501
    [DIFFICULTY_NORMAL][TRAINER_CRISTIAN] =
    {
#line 7502
        .trainerName = _("Blank"),
#line 7503
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7504
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7506
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7508
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7507
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7509
    [DIFFICULTY_NORMAL][TRAINER_SYLVIA] =
    {
#line 7510
        .trainerName = _("Blank"),
#line 7511
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7512
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7514
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7516
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7515
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7517
    [DIFFICULTY_NORMAL][TRAINER_LEONARDO] =
    {
#line 7518
        .trainerName = _("Blank"),
#line 7519
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7520
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7522
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7524
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7523
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7525
    [DIFFICULTY_NORMAL][TRAINER_ATHENA] =
    {
#line 7526
        .trainerName = _("Blank"),
#line 7527
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7528
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7530
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7532
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7531
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7533
    [DIFFICULTY_NORMAL][TRAINER_HARRISON] =
    {
#line 7534
        .trainerName = _("Blank"),
#line 7535
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7536
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7538
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7540
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7539
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7541
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 7542
        .trainerName = _("Blank"),
#line 7543
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7544
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7546
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7548
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7547
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7549
    [DIFFICULTY_NORMAL][TRAINER_CLARENCE] =
    {
#line 7550
        .trainerName = _("Blank"),
#line 7551
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7552
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7554
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7556
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7555
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7557
    [DIFFICULTY_NORMAL][TRAINER_TERRY] =
    {
#line 7558
        .trainerName = _("Blank"),
#line 7559
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7560
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7562
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7564
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7563
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7565
    [DIFFICULTY_NORMAL][TRAINER_NATE] =
    {
#line 7566
        .trainerName = _("Blank"),
#line 7567
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7568
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7570
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7572
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7571
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7573
    [DIFFICULTY_NORMAL][TRAINER_KATHLEEN] =
    {
#line 7574
        .trainerName = _("Blank"),
#line 7575
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7578
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7580
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7579
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7581
    [DIFFICULTY_NORMAL][TRAINER_CLIFFORD] =
    {
#line 7582
        .trainerName = _("Blank"),
#line 7583
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7584
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7586
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7588
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7587
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7589
    [DIFFICULTY_NORMAL][TRAINER_NICHOLAS] =
    {
#line 7590
        .trainerName = _("Blank"),
#line 7591
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7592
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7594
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7596
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7595
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7597
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 7598
        .trainerName = _("Blank"),
#line 7599
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7600
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7602
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7604
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7603
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7605
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_4] =
    {
#line 7606
        .trainerName = _("Blank"),
#line 7607
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7608
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7610
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7612
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7611
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7613
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_5] =
    {
#line 7614
        .trainerName = _("Blank"),
#line 7615
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7616
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7618
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7620
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7619
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7621
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_6] =
    {
#line 7622
        .trainerName = _("Blank"),
#line 7623
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7624
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7626
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7628
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7627
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7629
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_7] =
    {
#line 7630
        .trainerName = _("Blank"),
#line 7631
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7632
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7634
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7636
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7635
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7637
    [DIFFICULTY_NORMAL][TRAINER_MACEY] =
    {
#line 7638
        .trainerName = _("Blank"),
#line 7639
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7640
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7642
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7644
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7643
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7645
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_TREECKO] =
    {
#line 7646
        .trainerName = _("Blank"),
#line 7647
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7648
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7650
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7652
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7651
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7653
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
#line 7654
        .trainerName = _("Blank"),
#line 7655
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7656
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7658
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7660
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7659
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7661
    [DIFFICULTY_NORMAL][TRAINER_PAXTON] =
    {
#line 7662
        .trainerName = _("Blank"),
#line 7663
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7664
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7666
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7668
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7667
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7669
    [DIFFICULTY_NORMAL][TRAINER_ISABELLA] =
    {
#line 7670
        .trainerName = _("Blank"),
#line 7671
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7674
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7676
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7675
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7677
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 7678
        .trainerName = _("Blank"),
#line 7679
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7682
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7684
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7683
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7685
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 7686
        .trainerName = _("Blank"),
#line 7687
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7688
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7690
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7692
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7691
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7693
    [DIFFICULTY_NORMAL][TRAINER_JONATHAN] =
    {
#line 7694
        .trainerName = _("Blank"),
#line 7695
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7696
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7698
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7700
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7699
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7701
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
#line 7702
        .trainerName = _("Blank"),
#line 7703
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7704
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7706
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7708
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7707
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7709
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
#line 7710
        .trainerName = _("Blank"),
#line 7711
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7712
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7714
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7716
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7715
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7717
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 7718
        .trainerName = _("Blank"),
#line 7719
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7720
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7722
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7724
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7723
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7725
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 7726
        .trainerName = _("Blank"),
#line 7727
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7728
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7730
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7732
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7731
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7733
    [DIFFICULTY_NORMAL][TRAINER_TIANA] =
    {
#line 7734
        .trainerName = _("Blank"),
#line 7735
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7736
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7738
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7740
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7739
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7741
    [DIFFICULTY_NORMAL][TRAINER_HALEY_1] =
    {
#line 7742
        .trainerName = _("Blank"),
#line 7743
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7744
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7746
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7748
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7747
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7749
    [DIFFICULTY_NORMAL][TRAINER_JANICE] =
    {
#line 7750
        .trainerName = _("Blank"),
#line 7751
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7752
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7754
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7756
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7755
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7757
    [DIFFICULTY_NORMAL][TRAINER_VIVI] =
    {
#line 7758
        .trainerName = _("Blank"),
#line 7759
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7760
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7762
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7764
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7763
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7765
    [DIFFICULTY_NORMAL][TRAINER_HALEY_2] =
    {
#line 7766
        .trainerName = _("Blank"),
#line 7767
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7768
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7770
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7772
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7771
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7773
    [DIFFICULTY_NORMAL][TRAINER_HALEY_3] =
    {
#line 7774
        .trainerName = _("Blank"),
#line 7775
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7776
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7778
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7780
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7779
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7781
    [DIFFICULTY_NORMAL][TRAINER_HALEY_4] =
    {
#line 7782
        .trainerName = _("Blank"),
#line 7783
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7784
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7786
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7788
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7787
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7789
    [DIFFICULTY_NORMAL][TRAINER_HALEY_5] =
    {
#line 7790
        .trainerName = _("Blank"),
#line 7791
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7792
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7794
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7796
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7795
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7797
    [DIFFICULTY_NORMAL][TRAINER_SALLY] =
    {
#line 7798
        .trainerName = _("Blank"),
#line 7799
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7800
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7802
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7804
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7803
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7805
    [DIFFICULTY_NORMAL][TRAINER_ROBIN] =
    {
#line 7806
        .trainerName = _("Blank"),
#line 7807
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7808
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7810
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7812
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7811
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7813
    [DIFFICULTY_NORMAL][TRAINER_ANDREA] =
    {
#line 7814
        .trainerName = _("Blank"),
#line 7815
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7816
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7818
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7820
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7819
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7821
    [DIFFICULTY_NORMAL][TRAINER_CRISSY] =
    {
#line 7822
        .trainerName = _("Blank"),
#line 7823
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7824
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7826
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7828
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7827
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7829
    [DIFFICULTY_NORMAL][TRAINER_RICK] =
    {
#line 7830
        .trainerName = _("Blank"),
#line 7831
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7832
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7834
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7836
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7835
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7837
    [DIFFICULTY_NORMAL][TRAINER_LYLE] =
    {
#line 7838
        .trainerName = _("Blank"),
#line 7839
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7840
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7842
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7844
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7843
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7845
    [DIFFICULTY_NORMAL][TRAINER_JOSE] =
    {
#line 7846
        .trainerName = _("Blank"),
#line 7847
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7848
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7850
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7852
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7851
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7853
    [DIFFICULTY_NORMAL][TRAINER_DOUG] =
    {
#line 7854
        .trainerName = _("Blank"),
#line 7855
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7856
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7858
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7860
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7859
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7861
    [DIFFICULTY_NORMAL][TRAINER_GREG] =
    {
#line 7862
        .trainerName = _("Blank"),
#line 7863
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7864
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7866
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7868
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7867
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7869
    [DIFFICULTY_NORMAL][TRAINER_KENT] =
    {
#line 7870
        .trainerName = _("Blank"),
#line 7871
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7872
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7874
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7876
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7875
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7877
    [DIFFICULTY_NORMAL][TRAINER_JAMES_1] =
    {
#line 7878
        .trainerName = _("Blank"),
#line 7879
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7880
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7882
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7884
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7883
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7885
    [DIFFICULTY_NORMAL][TRAINER_JAMES_2] =
    {
#line 7886
        .trainerName = _("Blank"),
#line 7887
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7888
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7890
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7892
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7891
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7893
    [DIFFICULTY_NORMAL][TRAINER_JAMES_3] =
    {
#line 7894
        .trainerName = _("Blank"),
#line 7895
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7896
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7898
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7900
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7899
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7901
    [DIFFICULTY_NORMAL][TRAINER_JAMES_4] =
    {
#line 7902
        .trainerName = _("Blank"),
#line 7903
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7904
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7906
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7908
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7907
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7909
    [DIFFICULTY_NORMAL][TRAINER_JAMES_5] =
    {
#line 7910
        .trainerName = _("Blank"),
#line 7911
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7912
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7914
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7916
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7915
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7917
    [DIFFICULTY_NORMAL][TRAINER_BRICE] =
    {
#line 7918
        .trainerName = _("Blank"),
#line 7919
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7920
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7922
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7924
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7923
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7925
    [DIFFICULTY_NORMAL][TRAINER_TRENT_1] =
    {
#line 7926
        .trainerName = _("Blank"),
#line 7927
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7928
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7930
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7932
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7931
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7933
    [DIFFICULTY_NORMAL][TRAINER_LENNY] =
    {
#line 7934
        .trainerName = _("Blank"),
#line 7935
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7938
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7940
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7939
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7941
    [DIFFICULTY_NORMAL][TRAINER_LUCAS_1] =
    {
#line 7942
        .trainerName = _("Blank"),
#line 7943
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7944
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7946
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7948
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7947
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7949
    [DIFFICULTY_NORMAL][TRAINER_ALAN] =
    {
#line 7950
        .trainerName = _("Blank"),
#line 7951
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7952
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7954
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7956
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7955
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7957
    [DIFFICULTY_NORMAL][TRAINER_CLARK] =
    {
#line 7958
        .trainerName = _("Blank"),
#line 7959
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7960
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7962
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7964
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7963
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7965
    [DIFFICULTY_NORMAL][TRAINER_ERIC] =
    {
#line 7966
        .trainerName = _("Blank"),
#line 7967
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7968
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7970
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7972
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7971
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7973
    [DIFFICULTY_NORMAL][TRAINER_LUCAS_2] =
    {
#line 7974
        .trainerName = _("Blank"),
#line 7975
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7976
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7978
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7980
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7979
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7981
    [DIFFICULTY_NORMAL][TRAINER_MIKE_1] =
    {
#line 7982
        .trainerName = _("Blank"),
#line 7983
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7984
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7986
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7988
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7987
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7989
    [DIFFICULTY_NORMAL][TRAINER_MIKE_2] =
    {
#line 7990
        .trainerName = _("Blank"),
#line 7991
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7992
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7994
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7996
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7995
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7997
    [DIFFICULTY_NORMAL][TRAINER_TRENT_2] =
    {
#line 7998
        .trainerName = _("Blank"),
#line 7999
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8000
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8002
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8004
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8003
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8005
    [DIFFICULTY_NORMAL][TRAINER_TRENT_3] =
    {
#line 8006
        .trainerName = _("Blank"),
#line 8007
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8008
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8010
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8012
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8011
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8013
    [DIFFICULTY_NORMAL][TRAINER_TRENT_4] =
    {
#line 8014
        .trainerName = _("Blank"),
#line 8015
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8018
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8020
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8019
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8021
    [DIFFICULTY_NORMAL][TRAINER_TRENT_5] =
    {
#line 8022
        .trainerName = _("Blank"),
#line 8023
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8024
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8026
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8028
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8027
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8029
    [DIFFICULTY_NORMAL][TRAINER_DEZ_AND_LUKE] =
    {
#line 8030
        .trainerName = _("Blank"),
#line 8031
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8032
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8034
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8036
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8035
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8037
    [DIFFICULTY_NORMAL][TRAINER_LEA_AND_JED] =
    {
#line 8038
        .trainerName = _("Blank"),
#line 8039
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8040
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8042
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8044
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8043
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8045
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_1] =
    {
#line 8046
        .trainerName = _("Blank"),
#line 8047
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8048
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8050
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8052
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8051
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8053
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_2] =
    {
#line 8054
        .trainerName = _("Blank"),
#line 8055
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8056
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8058
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8060
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8059
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8061
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_3] =
    {
#line 8062
        .trainerName = _("Blank"),
#line 8063
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8064
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8066
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8068
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8067
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8069
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_4] =
    {
#line 8070
        .trainerName = _("Blank"),
#line 8071
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8074
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8076
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8075
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8077
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_5] =
    {
#line 8078
        .trainerName = _("Blank"),
#line 8079
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8080
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8082
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8084
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8083
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8085
    [DIFFICULTY_NORMAL][TRAINER_JOHANNA] =
    {
#line 8086
        .trainerName = _("Blank"),
#line 8087
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8088
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8090
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8092
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8091
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8093
    [DIFFICULTY_NORMAL][TRAINER_GERALD] =
    {
#line 8094
        .trainerName = _("Blank"),
#line 8095
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8098
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8100
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8099
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8101
    [DIFFICULTY_NORMAL][TRAINER_VIVIAN] =
    {
#line 8102
        .trainerName = _("Blank"),
#line 8103
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8106
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8108
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8107
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8109
    [DIFFICULTY_NORMAL][TRAINER_DANIELLE] =
    {
#line 8110
        .trainerName = _("Blank"),
#line 8111
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8112
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8114
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8116
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8115
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8117
    [DIFFICULTY_NORMAL][TRAINER_HIDEO] =
    {
#line 8118
        .trainerName = _("Blank"),
#line 8119
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8120
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8122
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8124
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8123
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8125
    [DIFFICULTY_NORMAL][TRAINER_KEIGO] =
    {
#line 8126
        .trainerName = _("Blank"),
#line 8127
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8128
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8130
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8132
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8131
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8133
    [DIFFICULTY_NORMAL][TRAINER_RILEY] =
    {
#line 8134
        .trainerName = _("Blank"),
#line 8135
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8136
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8138
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8140
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8139
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8141
    [DIFFICULTY_NORMAL][TRAINER_FLINT] =
    {
#line 8142
        .trainerName = _("Blank"),
#line 8143
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8144
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8146
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8148
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8147
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8149
    [DIFFICULTY_NORMAL][TRAINER_ASHLEY] =
    {
#line 8150
        .trainerName = _("Blank"),
#line 8151
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8152
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8154
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8156
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8155
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8157
    [DIFFICULTY_NORMAL][TRAINER_WALLY_MAUVILLE] =
    {
#line 8158
        .trainerName = _("Blank"),
#line 8159
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8160
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8162
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8164
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8163
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8165
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_2] =
    {
#line 8166
        .trainerName = _("Blank"),
#line 8167
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8168
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8170
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8172
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8171
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8173
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_3] =
    {
#line 8174
        .trainerName = _("Blank"),
#line 8175
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8176
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8178
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8180
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8179
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8181
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_4] =
    {
#line 8182
        .trainerName = _("Blank"),
#line 8183
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8186
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8188
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8187
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8189
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_5] =
    {
#line 8190
        .trainerName = _("Blank"),
#line 8191
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8192
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8194
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8195
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8197
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_MUDKIP] =
    {
#line 8198
        .trainerName = _("Blank"),
#line 8199
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8200
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8202
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8204
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8203
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8205
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
#line 8206
        .trainerName = _("Blank"),
#line 8207
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8208
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8210
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8212
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8211
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8213
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
#line 8214
        .trainerName = _("Blank"),
#line 8215
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8216
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8218
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8220
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8219
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8221
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
#line 8222
        .trainerName = _("Blank"),
#line 8223
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8224
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8226
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8228
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8227
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8229
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TREECKO] =
    {
#line 8230
        .trainerName = _("Blank"),
#line 8231
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8232
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8234
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8236
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8235
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8237
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
#line 8238
        .trainerName = _("Blank"),
#line 8239
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8240
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8242
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8244
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8243
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8245
    [DIFFICULTY_NORMAL][TRAINER_JONAH] =
    {
#line 8246
        .trainerName = _("Blank"),
#line 8247
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8248
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8250
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8252
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8251
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8253
    [DIFFICULTY_NORMAL][TRAINER_HENRY] =
    {
#line 8254
        .trainerName = _("Blank"),
#line 8255
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8256
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8258
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8260
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8259
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8261
    [DIFFICULTY_NORMAL][TRAINER_ROGER] =
    {
#line 8262
        .trainerName = _("Blank"),
#line 8263
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8264
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8266
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8268
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8267
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8269
    [DIFFICULTY_NORMAL][TRAINER_ALEXA] =
    {
#line 8270
        .trainerName = _("Blank"),
#line 8271
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8272
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8274
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8276
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8275
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8277
    [DIFFICULTY_NORMAL][TRAINER_RUBEN] =
    {
#line 8278
        .trainerName = _("Blank"),
#line 8279
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8280
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8282
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8284
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8283
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8285
    [DIFFICULTY_NORMAL][TRAINER_KOJI_1] =
    {
#line 8286
        .trainerName = _("Blank"),
#line 8287
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8288
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8290
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8292
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8291
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8293
    [DIFFICULTY_NORMAL][TRAINER_WAYNE] =
    {
#line 8294
        .trainerName = _("Blank"),
#line 8295
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8296
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8298
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8300
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8299
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8301
    [DIFFICULTY_NORMAL][TRAINER_AIDAN] =
    {
#line 8302
        .trainerName = _("Blank"),
#line 8303
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8304
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8306
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8308
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8307
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8309
    [DIFFICULTY_NORMAL][TRAINER_REED] =
    {
#line 8310
        .trainerName = _("Blank"),
#line 8311
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8312
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8314
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8316
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8315
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8317
    [DIFFICULTY_NORMAL][TRAINER_TISHA] =
    {
#line 8318
        .trainerName = _("Blank"),
#line 8319
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8320
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8322
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8324
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8323
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8325
    [DIFFICULTY_NORMAL][TRAINER_TORI_AND_TIA] =
    {
#line 8326
        .trainerName = _("Blank"),
#line 8327
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8328
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8330
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8332
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8331
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8333
    [DIFFICULTY_NORMAL][TRAINER_KIM_AND_IRIS] =
    {
#line 8334
        .trainerName = _("Blank"),
#line 8335
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8336
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8338
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8340
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8339
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8341
    [DIFFICULTY_NORMAL][TRAINER_TYRA_AND_IVY] =
    {
#line 8342
        .trainerName = _("Blank"),
#line 8343
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8344
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8346
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8348
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8347
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8349
    [DIFFICULTY_NORMAL][TRAINER_MEL_AND_PAUL] =
    {
#line 8350
        .trainerName = _("Blank"),
#line 8351
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8352
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8354
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8356
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8355
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8357
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_1] =
    {
#line 8358
        .trainerName = _("Blank"),
#line 8359
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8360
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8362
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8364
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8363
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8365
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_2] =
    {
#line 8366
        .trainerName = _("Blank"),
#line 8367
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8368
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8370
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8372
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8371
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8373
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_3] =
    {
#line 8374
        .trainerName = _("Blank"),
#line 8375
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8376
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8378
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8380
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8379
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8381
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_4] =
    {
#line 8382
        .trainerName = _("Blank"),
#line 8383
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8384
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8386
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8388
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8387
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8389
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_5] =
    {
#line 8390
        .trainerName = _("Blank"),
#line 8391
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8392
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8394
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8396
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8395
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8397
    [DIFFICULTY_NORMAL][TRAINER_RELI_AND_IAN] =
    {
#line 8398
        .trainerName = _("Blank"),
#line 8399
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8400
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8402
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8404
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8403
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8405
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_1] =
    {
#line 8406
        .trainerName = _("Blank"),
#line 8407
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8408
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8410
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8412
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8411
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8413
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_2] =
    {
#line 8414
        .trainerName = _("Blank"),
#line 8415
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8416
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8418
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8420
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8419
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8421
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_3] =
    {
#line 8422
        .trainerName = _("Blank"),
#line 8423
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8424
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8426
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8428
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8427
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8429
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_4] =
    {
#line 8430
        .trainerName = _("Blank"),
#line 8431
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8432
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8434
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8436
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8435
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8437
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_5] =
    {
#line 8438
        .trainerName = _("Blank"),
#line 8439
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8440
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8442
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8444
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8443
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8445
    [DIFFICULTY_NORMAL][TRAINER_LISA_AND_RAY] =
    {
#line 8446
        .trainerName = _("Blank"),
#line 8447
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8448
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8450
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8452
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8451
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8453
    [DIFFICULTY_NORMAL][TRAINER_CHRIS] =
    {
#line 8454
        .trainerName = _("Blank"),
#line 8455
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8456
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8458
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8460
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8459
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8461
    [DIFFICULTY_NORMAL][TRAINER_DAWSON] =
    {
#line 8462
        .trainerName = _("Blank"),
#line 8463
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8464
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8466
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8468
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8467
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8469
    [DIFFICULTY_NORMAL][TRAINER_SARAH] =
    {
#line 8470
        .trainerName = _("Blank"),
#line 8471
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8472
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8474
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8476
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8475
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8477
    [DIFFICULTY_NORMAL][TRAINER_DARIAN] =
    {
#line 8478
        .trainerName = _("Blank"),
#line 8479
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8482
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8484
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8483
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8485
    [DIFFICULTY_NORMAL][TRAINER_HAILEY] =
    {
#line 8486
        .trainerName = _("Blank"),
#line 8487
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8488
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8490
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8492
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8491
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8493
    [DIFFICULTY_NORMAL][TRAINER_CHANDLER] =
    {
#line 8494
        .trainerName = _("Blank"),
#line 8495
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8496
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8498
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8500
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8499
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8501
    [DIFFICULTY_NORMAL][TRAINER_KALEB] =
    {
#line 8502
        .trainerName = _("Blank"),
#line 8503
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8504
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8506
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8508
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8507
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8509
    [DIFFICULTY_NORMAL][TRAINER_JOSEPH] =
    {
#line 8510
        .trainerName = _("Blank"),
#line 8511
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8512
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8514
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8516
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8515
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8517
    [DIFFICULTY_NORMAL][TRAINER_ALYSSA] =
    {
#line 8518
        .trainerName = _("Blank"),
#line 8519
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8520
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8522
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8524
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8523
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8525
    [DIFFICULTY_NORMAL][TRAINER_MARCOS] =
    {
#line 8526
        .trainerName = _("Blank"),
#line 8527
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8528
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8530
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8532
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8531
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8533
    [DIFFICULTY_NORMAL][TRAINER_RHETT] =
    {
#line 8534
        .trainerName = _("Blank"),
#line 8535
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8536
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8538
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8540
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8539
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8541
    [DIFFICULTY_NORMAL][TRAINER_TYRON] =
    {
#line 8542
        .trainerName = _("Blank"),
#line 8543
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8544
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8546
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8548
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8547
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8549
    [DIFFICULTY_NORMAL][TRAINER_CELINA] =
    {
#line 8550
        .trainerName = _("Blank"),
#line 8551
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8552
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8554
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8556
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8555
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8557
    [DIFFICULTY_NORMAL][TRAINER_BIANCA] =
    {
#line 8558
        .trainerName = _("Blank"),
#line 8559
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8560
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8562
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8564
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8563
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8565
    [DIFFICULTY_NORMAL][TRAINER_HAYDEN] =
    {
#line 8566
        .trainerName = _("Blank"),
#line 8567
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8568
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8570
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8572
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8571
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8573
    [DIFFICULTY_NORMAL][TRAINER_SOPHIE] =
    {
#line 8574
        .trainerName = _("Blank"),
#line 8575
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8578
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8580
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8579
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8581
    [DIFFICULTY_NORMAL][TRAINER_COBY] =
    {
#line 8582
        .trainerName = _("Blank"),
#line 8583
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8584
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8586
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8588
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8587
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8589
    [DIFFICULTY_NORMAL][TRAINER_LAWRENCE] =
    {
#line 8590
        .trainerName = _("Blank"),
#line 8591
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8592
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8594
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8596
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8595
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8597
    [DIFFICULTY_NORMAL][TRAINER_WYATT] =
    {
#line 8598
        .trainerName = _("Blank"),
#line 8599
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8600
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8602
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8604
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8603
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8605
    [DIFFICULTY_NORMAL][TRAINER_ANGELINA] =
    {
#line 8606
        .trainerName = _("Blank"),
#line 8607
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8608
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8610
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8612
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8611
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8613
    [DIFFICULTY_NORMAL][TRAINER_KAI] =
    {
#line 8614
        .trainerName = _("Blank"),
#line 8615
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8616
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8618
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8620
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8619
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8621
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE] =
    {
#line 8622
        .trainerName = _("Blank"),
#line 8623
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8624
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8626
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8628
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8627
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8629
    [DIFFICULTY_NORMAL][TRAINER_DEANDRE] =
    {
#line 8630
        .trainerName = _("Blank"),
#line 8631
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8632
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8634
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8636
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8635
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8637
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
#line 8638
        .trainerName = _("Blank"),
#line 8639
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8640
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8642
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8644
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8643
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8645
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
#line 8646
        .trainerName = _("Blank"),
#line 8647
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8648
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8650
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8652
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8651
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8653
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
#line 8654
        .trainerName = _("Blank"),
#line 8655
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8656
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8658
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8660
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8659
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8661
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
#line 8662
        .trainerName = _("Blank"),
#line 8663
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8664
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8666
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8668
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8667
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8669
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
#line 8670
        .trainerName = _("Blank"),
#line 8671
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8674
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8676
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8675
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8677
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
#line 8678
        .trainerName = _("Blank"),
#line 8679
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8682
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8684
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8683
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8685
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
#line 8686
        .trainerName = _("Blank"),
#line 8687
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8688
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8690
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8692
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8691
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8693
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
#line 8694
        .trainerName = _("Blank"),
#line 8695
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8696
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8698
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8700
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8699
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8701
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
#line 8702
        .trainerName = _("Blank"),
#line 8703
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8704
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8706
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8708
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8707
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8709
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
#line 8710
        .trainerName = _("Blank"),
#line 8711
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8712
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8714
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8716
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8715
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8717
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
#line 8718
        .trainerName = _("Blank"),
#line 8719
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8720
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8722
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8724
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8723
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8725
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
#line 8726
        .trainerName = _("Blank"),
#line 8727
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8728
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8730
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8732
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8731
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8733
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
#line 8734
        .trainerName = _("Blank"),
#line 8735
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8736
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8738
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8740
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8739
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8741
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
#line 8742
        .trainerName = _("Blank"),
#line 8743
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8744
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8746
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8748
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8747
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8749
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
#line 8750
        .trainerName = _("Blank"),
#line 8751
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8752
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8754
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8756
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8755
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8757
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 8758
        .trainerName = _("Blank"),
#line 8759
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8760
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8762
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8764
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8763
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8765
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 8766
        .trainerName = _("Blank"),
#line 8767
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8768
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8770
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8772
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8771
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8773
    [DIFFICULTY_NORMAL][TRAINER_DARCY] =
    {
#line 8774
        .trainerName = _("Blank"),
#line 8775
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8776
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8778
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8780
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8779
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8781
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MOSSDEEP] =
    {
#line 8782
        .trainerName = _("Blank"),
#line 8783
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8784
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8786
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8788
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8787
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8789
    [DIFFICULTY_NORMAL][TRAINER_PETE] =
    {
#line 8790
        .trainerName = _("Blank"),
#line 8791
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8792
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8794
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8796
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8795
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8797
    [DIFFICULTY_NORMAL][TRAINER_ISABELLE] =
    {
#line 8798
        .trainerName = _("Blank"),
#line 8799
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8800
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8802
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8804
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8803
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8805
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_1] =
    {
#line 8806
        .trainerName = _("Blank"),
#line 8807
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8808
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8810
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8812
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8811
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8813
    [DIFFICULTY_NORMAL][TRAINER_JOSUE] =
    {
#line 8814
        .trainerName = _("Blank"),
#line 8815
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8816
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8818
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8820
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8819
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8821
    [DIFFICULTY_NORMAL][TRAINER_CAMRON] =
    {
#line 8822
        .trainerName = _("Blank"),
#line 8823
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8824
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8826
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8828
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8827
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8829
    [DIFFICULTY_NORMAL][TRAINER_CORY_1] =
    {
#line 8830
        .trainerName = _("Blank"),
#line 8831
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8832
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8834
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8836
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8835
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8837
    [DIFFICULTY_NORMAL][TRAINER_CAROLINA] =
    {
#line 8838
        .trainerName = _("Blank"),
#line 8839
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8840
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8842
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8844
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8843
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8845
    [DIFFICULTY_NORMAL][TRAINER_ELIJAH] =
    {
#line 8846
        .trainerName = _("Blank"),
#line 8847
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8848
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8850
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8852
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8851
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8853
    [DIFFICULTY_NORMAL][TRAINER_CELIA] =
    {
#line 8854
        .trainerName = _("Blank"),
#line 8855
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8856
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8858
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8860
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8859
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8861
    [DIFFICULTY_NORMAL][TRAINER_BRYAN] =
    {
#line 8862
        .trainerName = _("Blank"),
#line 8863
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8864
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8866
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8868
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8867
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8869
    [DIFFICULTY_NORMAL][TRAINER_BRANDEN] =
    {
#line 8870
        .trainerName = _("Blank"),
#line 8871
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8872
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8874
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8876
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8875
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8877
    [DIFFICULTY_NORMAL][TRAINER_BRYANT] =
    {
#line 8878
        .trainerName = _("Blank"),
#line 8879
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8880
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8882
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8884
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8883
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8885
    [DIFFICULTY_NORMAL][TRAINER_SHAYLA] =
    {
#line 8886
        .trainerName = _("Blank"),
#line 8887
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8888
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8890
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8892
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8891
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8893
    [DIFFICULTY_NORMAL][TRAINER_KYRA] =
    {
#line 8894
        .trainerName = _("Blank"),
#line 8895
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8896
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8898
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8900
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8899
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8901
    [DIFFICULTY_NORMAL][TRAINER_JAIDEN] =
    {
#line 8902
        .trainerName = _("Blank"),
#line 8903
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8904
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8906
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8908
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8907
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8909
    [DIFFICULTY_NORMAL][TRAINER_ALIX] =
    {
#line 8910
        .trainerName = _("Blank"),
#line 8911
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8912
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8914
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8916
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8915
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8917
    [DIFFICULTY_NORMAL][TRAINER_HELENE] =
    {
#line 8918
        .trainerName = _("Blank"),
#line 8919
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8920
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8922
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8924
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8923
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8925
    [DIFFICULTY_NORMAL][TRAINER_MARLENE] =
    {
#line 8926
        .trainerName = _("Blank"),
#line 8927
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8928
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8930
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8932
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8931
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8933
    [DIFFICULTY_NORMAL][TRAINER_DEVAN] =
    {
#line 8934
        .trainerName = _("Blank"),
#line 8935
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8938
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8940
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8939
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8941
    [DIFFICULTY_NORMAL][TRAINER_JOHNSON] =
    {
#line 8942
        .trainerName = _("Blank"),
#line 8943
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8944
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8946
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8948
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8947
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8949
    [DIFFICULTY_NORMAL][TRAINER_MELINA] =
    {
#line 8950
        .trainerName = _("Blank"),
#line 8951
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8952
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8954
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8956
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8955
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8957
    [DIFFICULTY_NORMAL][TRAINER_BRANDI] =
    {
#line 8958
        .trainerName = _("Blank"),
#line 8959
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8960
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8962
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8964
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8963
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8965
    [DIFFICULTY_NORMAL][TRAINER_AISHA] =
    {
#line 8966
        .trainerName = _("Blank"),
#line 8967
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8968
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8970
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8972
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8971
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8973
    [DIFFICULTY_NORMAL][TRAINER_MAKAYLA] =
    {
#line 8974
        .trainerName = _("Blank"),
#line 8975
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8976
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8978
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8980
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8979
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8981
    [DIFFICULTY_NORMAL][TRAINER_FABIAN] =
    {
#line 8982
        .trainerName = _("Blank"),
#line 8983
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8984
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8986
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8988
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8987
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8989
    [DIFFICULTY_NORMAL][TRAINER_DAYTON] =
    {
#line 8990
        .trainerName = _("Blank"),
#line 8991
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8992
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8994
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8996
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8995
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8997
    [DIFFICULTY_NORMAL][TRAINER_RACHEL] =
    {
#line 8998
        .trainerName = _("Blank"),
#line 8999
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9000
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9002
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9004
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9003
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9005
    [DIFFICULTY_NORMAL][TRAINER_LEONEL] =
    {
#line 9006
        .trainerName = _("Blank"),
#line 9007
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9008
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9010
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9012
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9011
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9013
    [DIFFICULTY_NORMAL][TRAINER_CALLIE] =
    {
#line 9014
        .trainerName = _("Blank"),
#line 9015
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9018
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9020
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9019
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9021
    [DIFFICULTY_NORMAL][TRAINER_CALE] =
    {
#line 9022
        .trainerName = _("Blank"),
#line 9023
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9024
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9026
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9028
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9027
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9029
    [DIFFICULTY_NORMAL][TRAINER_MYLES] =
    {
#line 9030
        .trainerName = _("Blank"),
#line 9031
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9032
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9034
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9036
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9035
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9037
    [DIFFICULTY_NORMAL][TRAINER_PAT] =
    {
#line 9038
        .trainerName = _("Blank"),
#line 9039
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9040
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9042
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9044
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9043
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9045
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_1] =
    {
#line 9046
        .trainerName = _("Blank"),
#line 9047
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9048
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9050
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9052
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9051
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9053
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TREECKO] =
    {
#line 9054
        .trainerName = _("Blank"),
#line 9055
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9056
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9058
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9060
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9059
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9061
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
#line 9062
        .trainerName = _("Blank"),
#line 9063
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9064
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9066
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9068
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9067
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9069
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_2] =
    {
#line 9070
        .trainerName = _("Blank"),
#line 9071
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9074
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9076
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9075
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9077
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_3] =
    {
#line 9078
        .trainerName = _("Blank"),
#line 9079
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9080
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9082
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9084
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9083
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9085
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_4] =
    {
#line 9086
        .trainerName = _("Blank"),
#line 9087
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9088
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9090
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9092
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9091
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9093
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_5] =
    {
#line 9094
        .trainerName = _("Blank"),
#line 9095
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9098
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9100
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9099
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9101
    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_2] =
    {
#line 9102
        .trainerName = _("Blank"),
#line 9103
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9106
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9108
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9107
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9109
    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_3] =
    {
#line 9110
        .trainerName = _("Blank"),
#line 9111
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9112
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9114
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9116
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9115
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9117
    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_4] =
    {
#line 9118
        .trainerName = _("Blank"),
#line 9119
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9120
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9122
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9124
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9123
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9125
    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_5] =
    {
#line 9126
        .trainerName = _("Blank"),
#line 9127
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9128
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9130
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9132
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9131
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9133
    [DIFFICULTY_NORMAL][TRAINER_WATTSON_2] =
    {
#line 9134
        .trainerName = _("Blank"),
#line 9135
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9136
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9138
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9140
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9139
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9141
    [DIFFICULTY_NORMAL][TRAINER_WATTSON_3] =
    {
#line 9142
        .trainerName = _("Blank"),
#line 9143
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9144
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9146
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9148
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9147
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9149
    [DIFFICULTY_NORMAL][TRAINER_WATTSON_4] =
    {
#line 9150
        .trainerName = _("Blank"),
#line 9151
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9152
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9154
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9156
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9155
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9157
    [DIFFICULTY_NORMAL][TRAINER_WATTSON_5] =
    {
#line 9158
        .trainerName = _("Blank"),
#line 9159
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9160
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9162
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9164
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9163
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9165
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_2] =
    {
#line 9166
        .trainerName = _("Blank"),
#line 9167
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9168
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9170
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9172
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9171
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9173
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_3] =
    {
#line 9174
        .trainerName = _("Blank"),
#line 9175
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9176
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9178
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9180
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9179
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9181
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_4] =
    {
#line 9182
        .trainerName = _("Blank"),
#line 9183
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9186
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9188
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9187
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9189
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_5] =
    {
#line 9190
        .trainerName = _("Blank"),
#line 9191
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9192
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9194
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9195
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9197
    [DIFFICULTY_NORMAL][TRAINER_NORMAN_2] =
    {
#line 9198
        .trainerName = _("Blank"),
#line 9199
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9200
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9202
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9204
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9203
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9205
    [DIFFICULTY_NORMAL][TRAINER_NORMAN_3] =
    {
#line 9206
        .trainerName = _("Blank"),
#line 9207
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9208
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9210
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9212
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9211
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9213
    [DIFFICULTY_NORMAL][TRAINER_NORMAN_4] =
    {
#line 9214
        .trainerName = _("Blank"),
#line 9215
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9216
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9218
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9220
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9219
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9221
    [DIFFICULTY_NORMAL][TRAINER_NORMAN_5] =
    {
#line 9222
        .trainerName = _("Blank"),
#line 9223
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9224
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9226
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9228
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9227
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9229
    [DIFFICULTY_NORMAL][TRAINER_WINONA_2] =
    {
#line 9230
        .trainerName = _("Blank"),
#line 9231
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9232
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9234
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9236
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9235
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9237
    [DIFFICULTY_NORMAL][TRAINER_WINONA_3] =
    {
#line 9238
        .trainerName = _("Blank"),
#line 9239
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9240
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9242
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9244
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9243
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9245
    [DIFFICULTY_NORMAL][TRAINER_WINONA_4] =
    {
#line 9246
        .trainerName = _("Blank"),
#line 9247
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9248
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9250
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9252
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9251
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9253
    [DIFFICULTY_NORMAL][TRAINER_WINONA_5] =
    {
#line 9254
        .trainerName = _("Blank"),
#line 9255
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9256
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9258
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9260
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9259
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9261
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_2] =
    {
#line 9262
        .trainerName = _("Blank"),
#line 9263
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9264
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9266
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9268
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9267
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9269
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_3] =
    {
#line 9270
        .trainerName = _("Blank"),
#line 9271
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9272
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9274
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9276
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9275
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9277
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_4] =
    {
#line 9278
        .trainerName = _("Blank"),
#line 9279
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9280
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9282
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9284
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9283
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9285
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_5] =
    {
#line 9286
        .trainerName = _("Blank"),
#line 9287
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9288
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9290
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9292
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9291
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9293
    [DIFFICULTY_NORMAL][TRAINER_JUAN_2] =
    {
#line 9294
        .trainerName = _("Blank"),
#line 9295
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9296
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9298
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9300
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9299
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9301
    [DIFFICULTY_NORMAL][TRAINER_JUAN_3] =
    {
#line 9302
        .trainerName = _("Blank"),
#line 9303
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9304
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9306
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9308
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9307
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9309
    [DIFFICULTY_NORMAL][TRAINER_JUAN_4] =
    {
#line 9310
        .trainerName = _("Blank"),
#line 9311
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9312
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9314
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9316
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9315
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9317
    [DIFFICULTY_NORMAL][TRAINER_JUAN_5] =
    {
#line 9318
        .trainerName = _("Blank"),
#line 9319
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9320
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9322
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9324
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9323
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9325
    [DIFFICULTY_NORMAL][TRAINER_ANGELO] =
    {
#line 9326
        .trainerName = _("Blank"),
#line 9327
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9328
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9330
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9332
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9331
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9333
    [DIFFICULTY_NORMAL][TRAINER_DARIUS] =
    {
#line 9334
        .trainerName = _("Blank"),
#line 9335
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9336
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9338
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9340
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9339
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9341
    [DIFFICULTY_NORMAL][TRAINER_STEVEN] =
    {
#line 9342
        .trainerName = _("Blank"),
#line 9343
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9344
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9346
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9348
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9347
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9349
    [DIFFICULTY_NORMAL][TRAINER_ANABEL] =
    {
#line 9350
        .trainerName = _("Blank"),
#line 9351
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9352
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9354
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9356
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9355
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9357
    [DIFFICULTY_NORMAL][TRAINER_TUCKER] =
    {
#line 9358
        .trainerName = _("Blank"),
#line 9359
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9360
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9362
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9364
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9363
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9365
    [DIFFICULTY_NORMAL][TRAINER_SPENSER] =
    {
#line 9366
        .trainerName = _("Blank"),
#line 9367
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9368
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9370
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9372
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9371
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9373
    [DIFFICULTY_NORMAL][TRAINER_GRETA] =
    {
#line 9374
        .trainerName = _("Blank"),
#line 9375
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9376
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9378
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9380
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9379
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9381
    [DIFFICULTY_NORMAL][TRAINER_NOLAND] =
    {
#line 9382
        .trainerName = _("Blank"),
#line 9383
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9384
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9386
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9388
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9387
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9389
    [DIFFICULTY_NORMAL][TRAINER_LUCY] =
    {
#line 9390
        .trainerName = _("Blank"),
#line 9391
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9392
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9394
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9396
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9395
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9397
    [DIFFICULTY_NORMAL][TRAINER_BRANDON] =
    {
#line 9398
        .trainerName = _("Blank"),
#line 9399
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9400
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9402
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9404
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9403
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9405
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_2] =
    {
#line 9406
        .trainerName = _("Blank"),
#line 9407
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9408
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9410
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9412
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9411
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9413
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_3] =
    {
#line 9414
        .trainerName = _("Blank"),
#line 9415
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9416
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9418
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9420
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9419
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9421
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_4] =
    {
#line 9422
        .trainerName = _("Blank"),
#line 9423
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9424
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9426
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9428
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9427
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9429
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_5] =
    {
#line 9430
        .trainerName = _("Blank"),
#line 9431
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9432
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9434
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9436
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9435
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9437
    [DIFFICULTY_NORMAL][TRAINER_CORY_2] =
    {
#line 9438
        .trainerName = _("Blank"),
#line 9439
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9440
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9442
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9444
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9443
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9445
    [DIFFICULTY_NORMAL][TRAINER_CORY_3] =
    {
#line 9446
        .trainerName = _("Blank"),
#line 9447
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9448
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9450
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9452
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9451
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9453
    [DIFFICULTY_NORMAL][TRAINER_CORY_4] =
    {
#line 9454
        .trainerName = _("Blank"),
#line 9455
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9456
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9458
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9460
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9459
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9461
    [DIFFICULTY_NORMAL][TRAINER_CORY_5] =
    {
#line 9462
        .trainerName = _("Blank"),
#line 9463
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9464
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9466
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9468
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9467
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9469
    [DIFFICULTY_NORMAL][TRAINER_PABLO_2] =
    {
#line 9470
        .trainerName = _("Blank"),
#line 9471
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9472
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9474
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9476
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9475
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9477
    [DIFFICULTY_NORMAL][TRAINER_PABLO_3] =
    {
#line 9478
        .trainerName = _("Blank"),
#line 9479
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9482
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9484
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9483
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9485
    [DIFFICULTY_NORMAL][TRAINER_PABLO_4] =
    {
#line 9486
        .trainerName = _("Blank"),
#line 9487
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9488
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9490
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9492
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9491
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9493
    [DIFFICULTY_NORMAL][TRAINER_PABLO_5] =
    {
#line 9494
        .trainerName = _("Blank"),
#line 9495
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9496
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9498
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9500
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9499
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9501
    [DIFFICULTY_NORMAL][TRAINER_KOJI_2] =
    {
#line 9502
        .trainerName = _("Blank"),
#line 9503
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9504
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9506
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9508
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9507
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9509
    [DIFFICULTY_NORMAL][TRAINER_KOJI_3] =
    {
#line 9510
        .trainerName = _("Blank"),
#line 9511
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9512
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9514
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9516
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9515
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9517
    [DIFFICULTY_NORMAL][TRAINER_KOJI_4] =
    {
#line 9518
        .trainerName = _("Blank"),
#line 9519
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9520
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9522
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9524
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9523
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9525
    [DIFFICULTY_NORMAL][TRAINER_KOJI_5] =
    {
#line 9526
        .trainerName = _("Blank"),
#line 9527
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9528
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9530
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9532
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9531
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9533
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_2] =
    {
#line 9534
        .trainerName = _("Blank"),
#line 9535
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9536
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9538
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9540
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9539
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9541
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_3] =
    {
#line 9542
        .trainerName = _("Blank"),
#line 9543
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9544
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9546
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9548
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9547
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9549
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_4] =
    {
#line 9550
        .trainerName = _("Blank"),
#line 9551
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9552
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9554
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9556
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9555
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9557
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_5] =
    {
#line 9558
        .trainerName = _("Blank"),
#line 9559
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9560
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9562
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9564
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9563
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9565
    [DIFFICULTY_NORMAL][TRAINER_FERNANDO_2] =
    {
#line 9566
        .trainerName = _("Blank"),
#line 9567
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9568
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9570
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9572
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9571
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9573
    [DIFFICULTY_NORMAL][TRAINER_FERNANDO_3] =
    {
#line 9574
        .trainerName = _("Blank"),
#line 9575
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9578
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9580
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9579
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9581
    [DIFFICULTY_NORMAL][TRAINER_FERNANDO_4] =
    {
#line 9582
        .trainerName = _("Blank"),
#line 9583
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9584
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9586
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9588
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9587
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9589
    [DIFFICULTY_NORMAL][TRAINER_FERNANDO_5] =
    {
#line 9590
        .trainerName = _("Blank"),
#line 9591
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9592
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9594
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9596
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9595
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9597
    [DIFFICULTY_NORMAL][TRAINER_SAWYER_2] =
    {
#line 9598
        .trainerName = _("Blank"),
#line 9599
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9600
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9602
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9604
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9603
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9605
    [DIFFICULTY_NORMAL][TRAINER_SAWYER_3] =
    {
#line 9606
        .trainerName = _("Blank"),
#line 9607
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9608
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9610
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9612
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9611
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9613
    [DIFFICULTY_NORMAL][TRAINER_SAWYER_4] =
    {
#line 9614
        .trainerName = _("Blank"),
#line 9615
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9616
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9618
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9620
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9619
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9621
    [DIFFICULTY_NORMAL][TRAINER_SAWYER_5] =
    {
#line 9622
        .trainerName = _("Blank"),
#line 9623
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9624
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9626
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9628
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9627
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9629
    [DIFFICULTY_NORMAL][TRAINER_GABRIELLE_2] =
    {
#line 9630
        .trainerName = _("Blank"),
#line 9631
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9632
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9634
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9636
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9635
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9637
    [DIFFICULTY_NORMAL][TRAINER_GABRIELLE_3] =
    {
#line 9638
        .trainerName = _("Blank"),
#line 9639
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9640
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9642
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9644
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9643
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9645
    [DIFFICULTY_NORMAL][TRAINER_GABRIELLE_4] =
    {
#line 9646
        .trainerName = _("Blank"),
#line 9647
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9648
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9650
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9652
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9651
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9653
    [DIFFICULTY_NORMAL][TRAINER_GABRIELLE_5] =
    {
#line 9654
        .trainerName = _("Blank"),
#line 9655
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9656
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9658
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9660
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9659
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9661
    [DIFFICULTY_NORMAL][TRAINER_THALIA_2] =
    {
#line 9662
        .trainerName = _("Blank"),
#line 9663
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9664
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9666
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9668
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9667
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9669
    [DIFFICULTY_NORMAL][TRAINER_THALIA_3] =
    {
#line 9670
        .trainerName = _("Blank"),
#line 9671
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9674
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9676
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9675
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9677
    [DIFFICULTY_NORMAL][TRAINER_THALIA_4] =
    {
#line 9678
        .trainerName = _("Blank"),
#line 9679
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9682
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9684
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9683
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9685
    [DIFFICULTY_NORMAL][TRAINER_THALIA_5] =
    {
#line 9686
        .trainerName = _("Blank"),
#line 9687
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9688
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9690
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9692
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9691
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9693
    [DIFFICULTY_NORMAL][TRAINER_MARIELA] =
    {
#line 9694
        .trainerName = _("Blank"),
#line 9695
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9696
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9698
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9700
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9699
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9701
    [DIFFICULTY_NORMAL][TRAINER_ALVARO] =
    {
#line 9702
        .trainerName = _("Blank"),
#line 9703
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9704
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9706
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9708
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9707
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9709
    [DIFFICULTY_NORMAL][TRAINER_EVERETT] =
    {
#line 9710
        .trainerName = _("Blank"),
#line 9711
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9712
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9714
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9716
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9715
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9717
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 9718
        .trainerName = _("Blank"),
#line 9719
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9720
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9722
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9724
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9723
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9725
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 9726
        .trainerName = _("Blank"),
#line 9727
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9728
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9730
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9732
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9731
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9733
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 9734
        .trainerName = _("Blank"),
#line 9735
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9736
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9738
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9740
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9739
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9741
    [DIFFICULTY_NORMAL][TRAINER_MAY_PLACEHOLDER] =
    {
#line 9742
        .trainerName = _("Blank"),
#line 9743
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9744
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9746
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9748
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9747
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
