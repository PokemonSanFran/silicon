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
        .trainerPic = TRAINER_PIC_FRONT_SHINZO,
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
        .trainerBackPic = TRAINER_PIC_FRONT_SHINZO,
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
            .ball = BALL_MASTER,
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
            .ball = BALL_MASTER,
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
            .ball = BALL_MASTER,
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
            .ball = BALL_MASTER,
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
        .trainerPic = TRAINER_PIC_FRONT_BELEN,
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
        .trainerBackPic = TRAINER_PIC_FRONT_BELEN,
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
            .ball = BALL_MASTER,
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
            .ball = BALL_MASTER,
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
            .ball = BALL_MASTER,
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
            .ball = BALL_MASTER,
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
        .trainerPic = TRAINER_PIC_FRONT_EMRYS,
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
        .trainerBackPic = TRAINER_PIC_FRONT_EMRYS,
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
            .ball = BALL_MASTER,
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
            .ball = BALL_MASTER,
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
                MOVE_MUD_SHOT,
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
            .ball = BALL_MASTER,
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
            .ball = BALL_MASTER,
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
        .trainerPic = TRAINER_PIC_FRONT_BAIYA,
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
        .trainerBackPic = TRAINER_PIC_FRONT_BAIYA,
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
            .ball = BALL_MASTER,
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
            .ball = BALL_MASTER,
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
            .ball = BALL_MASTER,
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
            .ball = BALL_MASTER,
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
#line 339
        .trainerClass = TRAINER_CLASS_CHARLOTTE,
#line 338
        .trainerPic = TRAINER_PIC_FRONT_CHARLOTTE,
#line 340
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 341
        .characterRevealId = REVEAL_CHARLOTTE,
#line 342
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 343
        .objectEventGraphicsId = OBJ_EVENT_GFX_CHARLOTTE,
#line 344
        .mapSec = MAPSEC_ANBEH_BEND,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_CHARLOTTE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 346
            .species = SPECIES_KLEFKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 346
            .heldItem = ITEM_ROCKY_HELMET,
#line 352
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 0, 50, 0),
#line 354
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 347
            .ability = ABILITY_PRANKSTER,
#line 348
            .lvl = 25,
#line 349
            .ball = BALL_MASTER,
#line 351
            .friendship = 1,
#line 353
            .nature = NATURE_MILD,
#line 350
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 355
                MOVE_DAZZLING_GLEAM,
                MOVE_FLASH_CANNON,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 359
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 359
            .heldItem = ITEM_SITRUS_BERRY,
#line 365
            .ev = TRAINER_PARTY_EVS(0, 150, 0, 0, 0, 0),
#line 367
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 360
            .ability = ABILITY_INTIMIDATE,
#line 361
            .lvl = 24,
#line 362
            .ball = BALL_MASTER,
#line 364
            .friendship = 1,
#line 366
            .nature = NATURE_ADAMANT,
#line 363
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 367
                MOVE_MACH_PUNCH,
                MOVE_BULLET_PUNCH,
                MOVE_BULK_UP,
                MOVE_SUCKER_PUNCH,
            },
            },
            {
#line 372
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 372
            .heldItem = ITEM_LUM_BERRY,
#line 378
            .ev = TRAINER_PARTY_EVS(0, 100, 0, 50, 0, 0),
#line 379
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 373
            .ability = ABILITY_WATER_ABSORB,
#line 374
            .lvl = 25,
#line 375
            .ball = BALL_MASTER,
#line 377
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 376
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 379
                MOVE_DRAIN_PUNCH,
                MOVE_WATERFALL,
                MOVE_ICE_PUNCH,
                MOVE_DUAL_CHOP,
            },
            },
            {
#line 384
            .species = SPECIES_ORICORIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 384
            .heldItem = ITEM_FIRIUM_Z,
#line 390
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 50, 100, 0),
#line 392
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 385
            .ability = ABILITY_DANCER,
#line 386
            .lvl = 26,
#line 387
            .ball = BALL_MASTER,
#line 389
            .friendship = 1,
#line 391
            .nature = NATURE_TIMID,
#line 388
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 393
                MOVE_REVELATION_DANCE,
                MOVE_AIR_CUTTER,
                MOVE_QUIVER_DANCE,
            },
            },
        },
    },
#line 397
    [DIFFICULTY_NORMAL][TRAINER_BAIYA_ASSHOLEHOME] =
    {
#line 398
        .trainerName = _("Baiya"),
#line 400
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 399
        .trainerPic = TRAINER_PIC_FRONT_BAIYA,
#line 402
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 401
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_BAIYA,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 404
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 410
            .ev = TRAINER_PARTY_EVS(0, 0, 75, 0, 0, 75),
#line 411
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 405
            .ability = ABILITY_EFFECT_SPORE,
#line 406
            .lvl = 37,
#line 407
            .ball = BALL_MASTER,
#line 409
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 408
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 411
                MOVE_BULLET_SEED,
                MOVE_POISON_POWDER,
                MOVE_SPORE,
                MOVE_RAGE_POWDER,
            },
            },
            {
#line 416
            .species = SPECIES_ROTOM_FAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 422
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 75, 75, 0),
#line 424
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 417
            .ability = ABILITY_LEVITATE,
#line 418
            .lvl = 39,
#line 419
            .ball = BALL_MASTER,
#line 421
            .friendship = 1,
#line 423
            .nature = NATURE_TIMID,
#line 420
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 425
                MOVE_CHARGE,
                MOVE_SHOCK_WAVE,
                MOVE_HELPING_HAND,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 430
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 436
            .ev = TRAINER_PARTY_EVS(75, 0, 0, 75, 0, 0),
#line 438
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 431
            .ability = ABILITY_RUN_AWAY,
#line 432
            .lvl = 38,
#line 433
            .ball = BALL_MASTER,
#line 435
            .friendship = 1,
#line 437
            .nature = NATURE_QUIET,
#line 434
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 438
                MOVE_HEADBUTT,
                MOVE_BATON_PASS,
                MOVE_BABY_DOLL_EYES,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 443
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 443
            .heldItem = ITEM_ORAN_BERRY,
#line 449
            .ev = TRAINER_PARTY_EVS(0, 50, 0, 75, 15, 0),
#line 450
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 444
            .ability = ABILITY_SHED_SKIN,
#line 445
            .lvl = 40,
#line 446
            .ball = BALL_MASTER,
#line 448
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 447
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 451
                MOVE_DRAGON_BREATH,
                MOVE_REST,
                MOVE_ICY_WIND,
                MOVE_FIRE_SPIN,
            },
            },
        },
    },
#line 456
    [DIFFICULTY_NORMAL][TRAINER_PUA] =
    {
#line 457
        .trainerName = _("Pua"),
#line 461
        .trainerClass = TRAINER_CLASS_LEADER,
#line 458
        .trainerPic = TRAINER_PIC_FRONT_PUA,
#line 459
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 460
        .characterRevealId = REVEAL_PUA,
#line 462
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 463
        .objectEventGraphicsId = OBJ_EVENT_GFX_PUA,
#line 464
        .mapSec = MAPSEC_CHASILLA,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_PUA,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 466
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 466
            .heldItem = ITEM_FOCUS_SASH,
#line 472
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 150, 150, 0),
#line 474
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 467
            .ability = ABILITY_INNER_FOCUS,
#line 468
            .lvl = 5,
#line 469
            .ball = BALL_MASTER,
#line 471
            .friendship = 1,
#line 473
            .nature = NATURE_TIMID,
#line 470
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 475
                MOVE_PSYSHOCK,
                MOVE_DAZZLING_GLEAM,
                MOVE_COUNTER,
                MOVE_PSYCHIC,
            },
            },
            {
#line 480
            .species = SPECIES_MUDBRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 480
            .heldItem = ITEM_EVIOLITE,
#line 486
            .ev = TRAINER_PARTY_EVS(150, 150, 0, 0, 0, 0),
#line 488
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 481
            .ability = ABILITY_STAMINA,
#line 482
            .lvl = 5,
#line 483
            .ball = BALL_MASTER,
#line 485
            .friendship = 1,
#line 487
            .nature = NATURE_ADAMANT,
#line 484
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 488
                MOVE_BULLDOZE,
                MOVE_STEALTH_ROCK,
                MOVE_SMACK_DOWN,
                MOVE_HEAVY_SLAM,
            },
            },
            {
#line 493
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 493
            .heldItem = ITEM_SCOPE_LENS,
#line 499
            .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 0, 0),
#line 500
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 494
            .ability = ABILITY_SUPER_LUCK,
#line 495
            .lvl = 5,
#line 496
            .ball = BALL_MASTER,
#line 498
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 497
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 500
                MOVE_SUCKER_PUNCH,
                MOVE_DRILL_PECK,
                MOVE_ROOST,
                MOVE_STEEL_WING,
            },
            },
            {
#line 505
            .species = SPECIES_GIMMIGHOUL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 505
            .heldItem = ITEM_EVIOLITE,
#line 511
            .ev = TRAINER_PARTY_EVS(0, 0, 75, 0, 150, 75),
#line 513
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 506
            .ability = ABILITY_RATTLED,
#line 507
            .lvl = 5,
#line 508
            .ball = BALL_MASTER,
#line 510
            .friendship = 1,
#line 512
            .nature = NATURE_MODEST,
#line 509
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 514
                MOVE_SHADOW_BALL,
                MOVE_POWER_GEM,
                MOVE_NASTY_PLOT,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 519
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 519
            .heldItem = ITEM_EVIOLITE,
#line 525
            .ev = TRAINER_PARTY_EVS(50, 150, 25, 50, 0, 25),
#line 527
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 520
            .ability = ABILITY_PURE_POWER,
#line 521
            .lvl = 5,
#line 522
            .ball = BALL_MASTER,
#line 524
            .friendship = 1,
#line 526
            .nature = NATURE_ADAMANT,
#line 523
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 527
                MOVE_BRICK_BREAK,
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_PSYCHIC,
            },
            },
        },
    },
#line 532
    [DIFFICULTY_NORMAL][TRAINER_TALA] =
    {
#line 533
        .trainerName = _("Tala"),
#line 538
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 534
        .trainerPic = TRAINER_PIC_FRONT_TALA,
#line 536
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 535
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 537
        .characterRevealId = REVEAL_TALA,
#line 539
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 540
        .objectEventGraphicsId = OBJ_EVENT_GFX_TALA,
#line 541
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_TALA,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 543
            .species = SPECIES_KILOWATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 543
            .heldItem = ITEM_FOCUS_SASH,
#line 549
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 551
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 544
            .ability = ABILITY_WIND_POWER,
#line 545
            .lvl = 88,
#line 546
            .ball = BALL_MASTER,
#line 548
            .friendship = 1,
#line 550
            .nature = NATURE_TIMID,
#line 547
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 552
                MOVE_DISCHARGE,
                MOVE_THUNDERBOLT,
                MOVE_AIR_SLASH,
                MOVE_ENDEAVOR,
            },
            },
            {
#line 557
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 557
            .heldItem = ITEM_ASSAULT_VEST,
#line 563
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 565
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 558
            .ability = ABILITY_WIND_RIDER,
#line 559
            .lvl = 88,
#line 560
            .ball = BALL_MASTER,
#line 562
            .friendship = 1,
#line 564
            .nature = NATURE_ADAMANT,
#line 561
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 565
                MOVE_LEAF_BLADE,
                MOVE_SUCKER_PUNCH,
                MOVE_KNOCK_OFF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 570
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 570
            .heldItem = ITEM_NORMAL_GEM,
#line 576
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 252, 156, 0),
#line 578
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 571
            .ability = ABILITY_ADAPTABILITY,
#line 572
            .lvl = 87,
#line 573
            .ball = BALL_MASTER,
#line 575
            .friendship = 1,
#line 577
            .nature = NATURE_MODEST,
#line 574
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 579
                MOVE_TRI_ATTACK,
                MOVE_THUNDERBOLT,
                MOVE_ICE_BEAM,
                MOVE_NASTY_PLOT,
            },
            },
            {
#line 584
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 584
            .heldItem = ITEM_YACHE_BERRY,
#line 590
            .ev = TRAINER_PARTY_EVS(192, 208, 4, 104, 0, 0),
#line 592
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 585
            .ability = ABILITY_MULTISCALE,
#line 586
            .lvl = 87,
#line 587
            .ball = BALL_MASTER,
#line 589
            .friendship = 1,
#line 591
            .nature = NATURE_ADAMANT,
#line 588
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 592
                MOVE_AERIAL_ACE,
                MOVE_DRAGON_CLAW,
                MOVE_EARTHQUAKE,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 597
            .species = SPECIES_CORVIKNIGHT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 597
            .heldItem = ITEM_FLYINIUM_Z,
#line 603
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 605
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 598
            .ability = ABILITY_MIRROR_ARMOR,
#line 599
            .lvl = 88,
#line 600
            .ball = BALL_MASTER,
#line 602
            .friendship = 1,
#line 604
            .nature = NATURE_ADAMANT,
#line 601
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 605
                MOVE_BRAVE_BIRD,
                MOVE_IRON_HEAD,
                MOVE_ROOST,
                MOVE_SKY_ATTACK,
            },
            },
            {
#line 610
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 610
            .heldItem = ITEM_PIDGEOTITE,
#line 616
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 618
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 611
            .ability = ABILITY_KEEN_EYE,
#line 612
            .lvl = 89,
#line 613
            .ball = BALL_MASTER,
#line 615
            .friendship = 1,
#line 617
            .nature = NATURE_MODEST,
#line 614
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 619
                MOVE_HURRICANE,
                MOVE_HEAT_WAVE,
                MOVE_RAZOR_WIND,
                MOVE_HYPER_BEAM,
            },
            },
        },
    },
#line 624
    [DIFFICULTY_NORMAL][TRAINER_NERIENE] =
    {
#line 625
        .trainerName = _("Neriene"),
#line 629
        .trainerClass = TRAINER_CLASS_LEADER,
#line 626
        .trainerPic = TRAINER_PIC_FRONT_NERIENE,
#line 627
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 628
        .characterRevealId = REVEAL_NERIENE,
#line 630
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 631
        .objectEventGraphicsId = OBJ_EVENT_GFX_NERIENE,
#line 632
        .mapSec = MAPSEC_FORT_YOBU,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_NERIENE,
        .partySize = 7,
        .party = (const struct TrainerMon[])
        {
            {
#line 634
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 634
            .heldItem = ITEM_TOXIC_ORB,
#line 640
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 200, 0, 0),
#line 642
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 635
            .ability = ABILITY_POISON_HEAL,
#line 636
            .lvl = 49,
#line 637
            .ball = BALL_MASTER,
#line 639
            .friendship = 1,
#line 641
            .nature = NATURE_JOLLY,
#line 638
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 643
                MOVE_TOXIC_SPIKES,
                MOVE_PROTECT,
                MOVE_EARTHQUAKE,
                MOVE_DUAL_WINGBEAT,
            },
            },
            {
#line 648
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 648
            .heldItem = ITEM_CHOPLE_BERRY,
#line 652
            .ev = TRAINER_PARTY_EVS(252, 0, 45, 1, 0, 0),
#line 654
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 649
            .ability = ABILITY_SERENE_GRACE,
#line 650
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 653
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 651
            .teraType = TYPE_NORMAL,
            .moves = {
#line 655
                MOVE_SOFT_BOILED,
                MOVE_PROTECT,
                MOVE_SEISMIC_TOSS,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 660
            .species = SPECIES_FARIGIRAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 660
            .heldItem = ITEM_SITRUS_BERRY,
#line 664
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 1, 252, 0),
#line 666
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 661
            .ability = ABILITY_CUD_CHEW,
#line 662
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 665
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 663
            .teraType = TYPE_NORMAL,
            .moves = {
#line 667
                MOVE_PSYCHIC,
                MOVE_HYPER_VOICE,
                MOVE_DAZZLING_GLEAM,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 672
            .species = SPECIES_TOXAPEX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 672
            .heldItem = ITEM_BLACK_SLUDGE,
#line 678
            .ev = TRAINER_PARTY_EVS(250, 150, 0, 0, 0, 0),
#line 680
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 673
            .ability = ABILITY_MERCILESS,
#line 674
            .lvl = 50,
#line 675
            .ball = BALL_MASTER,
#line 677
            .friendship = 1,
#line 679
            .nature = NATURE_ADAMANT,
#line 676
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 681
                MOVE_POISON_JAB,
                MOVE_LIQUIDATION,
                MOVE_BANEFUL_BUNKER,
                MOVE_RECOVER,
            },
            },
            {
#line 686
            .species = SPECIES_FARIGIRAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 686
            .heldItem = ITEM_SITRUS_BERRY,
#line 692
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 0, 200, 0),
#line 694
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 687
            .ability = ABILITY_CUD_CHEW,
#line 688
            .lvl = 50,
#line 689
            .ball = BALL_MASTER,
#line 691
            .friendship = 1,
#line 693
            .nature = NATURE_MODEST,
#line 690
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 695
                MOVE_PSYCHIC,
                MOVE_HYPER_VOICE,
                MOVE_NASTY_PLOT,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 700
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 700
            .heldItem = ITEM_LEFTOVERS,
#line 706
            .ev = TRAINER_PARTY_EVS(0, 0, 250, 0, 0, 150),
#line 708
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 701
            .ability = ABILITY_NATURAL_CURE,
#line 702
            .lvl = 51,
#line 703
            .ball = BALL_MASTER,
#line 705
            .friendship = 1,
#line 707
            .nature = NATURE_BOLD,
#line 704
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 709
                MOVE_WISH,
                MOVE_TELEPORT,
                MOVE_SEISMIC_TOSS,
                MOVE_PROTECT,
            },
            },
            {
#line 714
            .species = SPECIES_AEGISLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 714
            .heldItem = ITEM_STEELIUM_Z,
#line 720
            .ev = TRAINER_PARTY_EVS(200, 200, 0, 0, 0, 0),
#line 722
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 715
            .ability = ABILITY_STANCE_CHANGE,
#line 716
            .lvl = 52,
#line 717
            .ball = BALL_MASTER,
#line 719
            .friendship = 1,
#line 721
            .nature = NATURE_ADAMANT,
#line 718
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 723
                MOVE_IRON_HEAD,
                MOVE_SHADOW_SNEAK,
                MOVE_SWORDS_DANCE,
                MOVE_KINGS_SHIELD,
            },
            },
        },
    },
#line 728
    [DIFFICULTY_NORMAL][TRAINER_DIMU] =
    {
#line 729
        .trainerName = _("Dimu"),
#line 733
        .trainerClass = TRAINER_CLASS_LEADER,
#line 730
        .trainerPic = TRAINER_PIC_FRONT_DIMU,
#line 731
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 732
        .characterRevealId = REVEAL_DIMU,
#line 734
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 735
        .objectEventGraphicsId = OBJ_EVENT_GFX_DIMU,
#line 736
        .mapSec = MAPSEC_HALERBA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_DIMU,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 738
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 738
            .heldItem = ITEM_FOCUS_SASH,
#line 744
            .ev = TRAINER_PARTY_EVS(0, 200, 0, 200, 0, 0),
#line 746
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 739
            .ability = ABILITY_WIND_RIDER,
#line 740
            .lvl = 49,
#line 741
            .ball = BALL_MASTER,
#line 743
            .friendship = 1,
#line 745
            .nature = NATURE_JOLLY,
#line 742
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 746
                MOVE_GRASSY_GLIDE,
                MOVE_NIGHT_SLASH,
                MOVE_SWORDS_DANCE,
                MOVE_TAILWIND,
            },
            },
            {
#line 751
            .species = SPECIES_FLORGES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 751
            .heldItem = ITEM_SITRUS_BERRY,
#line 757
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 0, 200, 0),
#line 759
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 752
            .ability = ABILITY_FLOWER_VEIL,
#line 753
            .lvl = 50,
#line 754
            .ball = BALL_MASTER,
#line 756
            .friendship = 1,
#line 758
            .nature = NATURE_MODEST,
#line 755
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 760
                MOVE_MOONBLAST,
                MOVE_ENERGY_BALL,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
            },
            },
            {
#line 765
            .species = SPECIES_SCOVILLAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 765
            .heldItem = ITEM_LEFTOVERS,
#line 771
            .ev = TRAINER_PARTY_EVS(200, 200, 0, 0, 0, 0),
#line 772
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 766
            .ability = ABILITY_MOODY,
#line 767
            .lvl = 50,
#line 768
            .ball = BALL_MASTER,
#line 770
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 769
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 772
                MOVE_OVERHEAT,
                MOVE_SEED_BOMB,
                MOVE_GRASSY_GLIDE,
                MOVE_PROTECT,
            },
            },
            {
#line 777
            .species = SPECIES_WYRDEER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 777
            .heldItem = ITEM_GRASSY_SEED,
#line 783
            .ev = TRAINER_PARTY_EVS(100, 200, 0, 100, 0, 0),
#line 785
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 778
            .ability = ABILITY_INTIMIDATE,
#line 779
            .lvl = 51,
#line 780
            .ball = BALL_MASTER,
#line 782
            .friendship = 1,
#line 784
            .nature = NATURE_JOLLY,
#line 781
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 785
                MOVE_PSYSHIELD_BASH,
                MOVE_BODY_SLAM,
                MOVE_HIGH_HORSEPOWER,
                MOVE_REST,
            },
            },
            {
#line 790
            .species = SPECIES_ARBOLIVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 790
            .heldItem = ITEM_GRASSIUM_Z,
#line 796
            .ev = TRAINER_PARTY_EVS(200, 0, 100, 0, 100, 0),
#line 798
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 791
            .ability = ABILITY_SEED_SOWER,
#line 792
            .lvl = 52,
#line 793
            .ball = BALL_MASTER,
#line 795
            .friendship = 1,
#line 797
            .nature = NATURE_MODEST,
#line 794
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 799
                MOVE_ENERGY_BALL,
                MOVE_HYPER_VOICE,
                MOVE_EARTH_POWER,
                MOVE_DAZZLING_GLEAM,
            },
            },
        },
    },
#line 804
    [DIFFICULTY_NORMAL][TRAINER_BD] =
    {
#line 805
        .trainerName = _("BD"),
#line 809
        .trainerClass = TRAINER_CLASS_LEADER,
#line 806
        .trainerPic = TRAINER_PIC_FRONT_BD,
#line 807
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 808
        .characterRevealId = REVEAL_BD,
#line 810
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 811
        .objectEventGraphicsId = OBJ_EVENT_GFX_BD,
#line 812
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_BD,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 814
            .species = SPECIES_SHIINOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 814
            .heldItem = ITEM_RED_CARD,
#line 820
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 0, 200, 0),
#line 822
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 815
            .ability = ABILITY_EFFECT_SPORE,
#line 816
            .lvl = 49,
#line 817
            .ball = BALL_MASTER,
#line 819
            .friendship = 1,
#line 821
            .nature = NATURE_MODEST,
#line 818
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 823
                MOVE_MOONBLAST,
                MOVE_ENERGY_BALL,
                MOVE_SPORE,
                MOVE_MOONLIGHT,
            },
            },
            {
#line 828
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 828
            .heldItem = ITEM_RED_CARD,
#line 834
            .ev = TRAINER_PARTY_EVS(0, 200, 0, 200, 0, 0),
#line 836
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 829
            .ability = ABILITY_CONTRARY,
#line 830
            .lvl = 50,
#line 831
            .ball = BALL_MASTER,
#line 833
            .friendship = 1,
#line 835
            .nature = NATURE_JOLLY,
#line 832
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 836
                MOVE_SUPERPOWER,
                MOVE_DOUBLE_EDGE,
                MOVE_DIZZY_PUNCH,
                MOVE_SUCKER_PUNCH,
            },
            },
            {
#line 841
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 841
            .heldItem = ITEM_RED_CARD,
#line 847
            .ev = TRAINER_PARTY_EVS(200, 100, 0, 0, 100, 0),
#line 849
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 842
            .ability = ABILITY_LEVITATE,
#line 843
            .lvl = 50,
#line 844
            .ball = BALL_MASTER,
#line 846
            .friendship = 1,
#line 848
            .nature = NATURE_BRAVE,
#line 845
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 849
                MOVE_GUNK_SHOT,
                MOVE_DESTINY_BOND,
                MOVE_FLAMETHROWER,
                MOVE_DARK_PULSE,
            },
            },
            {
#line 854
            .species = SPECIES_GRAFAIAI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 854
            .heldItem = ITEM_POISONIUM_Z,
#line 860
            .ev = TRAINER_PARTY_EVS(100, 250, 0, 50, 0, 0),
#line 862
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 855
            .ability = ABILITY_UNBURDEN,
#line 856
            .lvl = 51,
#line 857
            .ball = BALL_MASTER,
#line 859
            .friendship = 1,
#line 861
            .nature = NATURE_ADAMANT,
#line 858
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 862
                MOVE_GUNK_SHOT,
                MOVE_LOW_SWEEP,
                MOVE_KNOCK_OFF,
                MOVE_TAUNT,
            },
            },
            {
#line 867
            .species = SPECIES_ANNIHILAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 867
            .heldItem = ITEM_SITRUS_BERRY,
#line 873
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 200, 0, 0),
#line 875
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 868
            .ability = ABILITY_DEFIANT,
#line 869
            .lvl = 52,
#line 870
            .ball = BALL_MASTER,
#line 872
            .friendship = 1,
#line 874
            .nature = NATURE_ADAMANT,
#line 871
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 875
                MOVE_CLOSE_COMBAT,
                MOVE_DRAIN_PUNCH,
                MOVE_SHADOW_CLAW,
                MOVE_TAUNT,
            },
            },
        },
    },
#line 880
    [DIFFICULTY_NORMAL][TRAINER_AMIARGENTO] =
    {
#line 881
        .trainerName = _("AmiArgento"),
#line 885
        .trainerClass = TRAINER_CLASS_LEADER,
#line 882
        .trainerPic = TRAINER_PIC_FRONT_AMI,
#line 883
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 884
        .characterRevealId = REVEAL_AMI,
#line 886
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 887
        .objectEventGraphicsId = OBJ_EVENT_GFX_AMIARGENTO,
#line 888
        .mapSec = MAPSEC_IRISINA_TOWN,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_AMI,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 890
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 890
            .heldItem = ITEM_LEFTOVERS,
#line 896
            .ev = TRAINER_PARTY_EVS(200, 0, 100, 0, 100, 0),
#line 898
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
#line 891
            .ability = ABILITY_OBLIVIOUS,
#line 892
            .lvl = 49,
#line 893
            .ball = BALL_MASTER,
#line 895
            .friendship = 1,
#line 897
            .nature = NATURE_RELAXED,
#line 894
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 899
                MOVE_IRON_DEFENSE,
                MOVE_BODY_PRESS,
                MOVE_TRICK_ROOM,
                MOVE_PSYCHIC,
            },
            },
            {
#line 904
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 904
            .heldItem = ITEM_EVIOLITE,
#line 910
            .ev = TRAINER_PARTY_EVS(200, 0, 50, 0, 75, 75),
#line 912
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
#line 905
            .ability = ABILITY_DOWNLOAD,
#line 906
            .lvl = 50,
#line 907
            .ball = BALL_MASTER,
#line 909
            .friendship = 1,
#line 911
            .nature = NATURE_QUIET,
#line 908
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 913
                MOVE_TRI_ATTACK,
                MOVE_THUNDERBOLT,
                MOVE_ICE_BEAM,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 918
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 918
            .heldItem = ITEM_ROCKY_HELMET,
#line 924
            .ev = TRAINER_PARTY_EVS(200, 0, 75, 0, 50, 75),
#line 926
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
#line 919
            .ability = ABILITY_FLAME_BODY,
#line 920
            .lvl = 50,
#line 921
            .ball = BALL_MASTER,
#line 923
            .friendship = 1,
#line 925
            .nature = NATURE_QUIET,
#line 922
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 927
                MOVE_FLAMETHROWER,
                MOVE_SHADOW_BALL,
                MOVE_CALM_MIND,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 932
            .species = SPECIES_COPPERAJAH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 932
            .heldItem = ITEM_IRON_BALL,
#line 938
            .ev = TRAINER_PARTY_EVS(0, 200, 100, 0, 0, 100),
#line 940
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 933
            .ability = ABILITY_SHEER_FORCE,
#line 934
            .lvl = 51,
#line 935
            .ball = BALL_MASTER,
#line 937
            .friendship = 1,
#line 939
            .nature = NATURE_BRAVE,
#line 936
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 941
                MOVE_IRON_HEAD,
                MOVE_ROCK_SLIDE,
                MOVE_HIGH_HORSEPOWER,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 946
            .species = SPECIES_HATTERENE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 946
            .heldItem = ITEM_FAIRIUM_Z,
#line 952
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 0, 200, 0),
#line 954
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
#line 947
            .ability = ABILITY_MAGIC_BOUNCE,
#line 948
            .lvl = 52,
#line 949
            .ball = BALL_MASTER,
#line 951
            .friendship = 1,
#line 953
            .nature = NATURE_QUIET,
#line 950
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 955
                MOVE_DAZZLING_GLEAM,
                MOVE_PSYCHIC,
                MOVE_DARK_PULSE,
                MOVE_CALM_MIND,
            },
            },
        },
    },
#line 960
    [DIFFICULTY_NORMAL][TRAINER_BAIYA_BATTLE8] =
    {
#line 961
        .trainerName = _("Baiya"),
#line 963
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 962
        .trainerPic = TRAINER_PIC_FRONT_BAIYA,
#line 965
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 964
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_BAIYA,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 967
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 967
            .heldItem = ITEM_FOCUS_SASH,
#line 973
            .ev = TRAINER_PARTY_EVS(0, 0, 150, 0, 0, 150),
#line 974
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 968
            .ability = ABILITY_EFFECT_SPORE,
#line 969
            .lvl = 47,
#line 970
            .ball = BALL_MASTER,
#line 972
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 971
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 974
                MOVE_SEED_BOMB,
                MOVE_LEECH_LIFE,
                MOVE_SPORE,
                MOVE_RAGE_POWDER,
            },
            },
            {
#line 979
            .species = SPECIES_ROTOM_HEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 985
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 150, 150, 0),
#line 987
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 980
            .ability = ABILITY_LEVITATE,
#line 981
            .lvl = 49,
#line 982
            .ball = BALL_MASTER,
#line 984
            .friendship = 1,
#line 986
            .nature = NATURE_TIMID,
#line 983
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 988
                MOVE_OVERHEAT,
                MOVE_THUNDERBOLT,
                MOVE_VOLT_SWITCH,
                MOVE_CHARGE,
            },
            },
            {
#line 993
            .species = SPECIES_HUNTAIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 993
            .heldItem = ITEM_MYSTIC_WATER,
#line 999
            .ev = TRAINER_PARTY_EVS(100, 100, 100, 0, 0, 0),
#line 1001
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 994
            .ability = ABILITY_WATER_VEIL,
#line 995
            .lvl = 48,
#line 996
            .ball = BALL_MASTER,
#line 998
            .friendship = 1,
#line 1000
            .nature = NATURE_ADAMANT,
#line 997
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1001
                MOVE_WATERFALL,
                MOVE_ICE_FANG,
                MOVE_AQUA_RING,
                MOVE_CLAMP,
            },
            },
            {
#line 1006
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1012
            .ev = TRAINER_PARTY_EVS(100, 50, 0, 150, 0, 0),
#line 1014
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1007
            .ability = ABILITY_CUTE_CHARM,
#line 1008
            .lvl = 49,
#line 1009
            .ball = BALL_MASTER,
#line 1011
            .friendship = 1,
#line 1013
            .nature = NATURE_JOLLY,
#line 1010
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1014
                MOVE_FAKE_OUT,
                MOVE_FACADE,
                MOVE_HELPING_HAND,
                MOVE_PAYBACK,
            },
            },
            {
#line 1019
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1019
            .heldItem = ITEM_DRAGONIUM_Z,
#line 1025
            .ev = TRAINER_PARTY_EVS(0, 175, 0, 100, 15, 0),
#line 1026
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1020
            .ability = ABILITY_SHED_SKIN,
#line 1021
            .lvl = 51,
#line 1022
            .ball = BALL_MASTER,
#line 1024
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 1023
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1026
                MOVE_DRAGON_RUSH,
                MOVE_IRON_HEAD,
                MOVE_EXTREME_SPEED,
                MOVE_WATERFALL,
            },
            },
        },
    },
#line 1031
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE_BEACHBATTLE] =
    {
#line 1032
        .trainerName = _("Charlotte"),
#line 1034
        .trainerClass = TRAINER_CLASS_CHARLOTTE,
#line 1033
        .trainerPic = TRAINER_PIC_FRONT_CHARLOTTE,
#line 1035
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 1036
        .characterRevealId = REVEAL_CHARLOTTE,
#line 1037
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 1038
        .objectEventGraphicsId = OBJ_EVENT_GFX_CHARLOTTE,
#line 1039
        .mapSec = MAPSEC_CRESALTA_VISTA,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_CHARLOTTE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1041
            .species = SPECIES_PALAFIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1041
            .heldItem = ITEM_CHOICE_SCARF,
#line 1047
            .ev = TRAINER_PARTY_EVS(0, 250, 0, 150, 0, 0),
#line 1049
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1042
            .ability = ABILITY_ZERO_TO_HERO,
#line 1043
            .lvl = 50,
#line 1044
            .ball = BALL_MASTER,
#line 1046
            .friendship = 1,
#line 1048
            .nature = NATURE_ADAMANT,
#line 1045
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1049
                MOVE_WAVE_CRASH,
                MOVE_FLIP_TURN,
                MOVE_CLOSE_COMBAT,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 1054
            .species = SPECIES_TALONFLAME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1054
            .heldItem = ITEM_SHARP_BEAK,
#line 1060
            .ev = TRAINER_PARTY_EVS(0, 200, 0, 200, 0, 0),
#line 1062
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1055
            .ability = ABILITY_GALE_WINGS,
#line 1056
            .lvl = 49,
#line 1057
            .ball = BALL_MASTER,
#line 1059
            .friendship = 1,
#line 1061
            .nature = NATURE_ADAMANT,
#line 1058
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1062
                MOVE_BRAVE_BIRD,
                MOVE_FLARE_BLITZ,
                MOVE_TAILWIND,
                MOVE_DUAL_WINGBEAT,
            },
            },
            {
#line 1067
            .species = SPECIES_DOUBLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1067
            .heldItem = ITEM_EVIOLITE,
#line 1073
            .ev = TRAINER_PARTY_EVS(50, 250, 0, 0, 0, 100),
#line 1075
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1068
            .ability = ABILITY_NO_GUARD,
#line 1069
            .lvl = 50,
#line 1070
            .ball = BALL_MASTER,
#line 1072
            .friendship = 1,
#line 1074
            .nature = NATURE_ADAMANT,
#line 1071
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1075
                MOVE_IRON_HEAD,
                MOVE_SACRED_SWORD,
                MOVE_SHADOW_CLAW,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 1080
            .species = SPECIES_TOEDSCRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1080
            .heldItem = ITEM_GROUNDIUM_Z,
#line 1086
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 200, 200, 0),
#line 1088
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1081
            .ability = ABILITY_MYCELIUM_MIGHT,
#line 1082
            .lvl = 51,
#line 1083
            .ball = BALL_MASTER,
#line 1085
            .friendship = 1,
#line 1087
            .nature = NATURE_MODEST,
#line 1084
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1089
                MOVE_EARTH_POWER,
                MOVE_ENERGY_BALL,
                MOVE_SPORE,
                MOVE_SLUDGE_BOMB,
            },
            },
            {
#line 1094
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1094
            .heldItem = ITEM_FOCUS_SASH,
#line 1100
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 150, 250, 0),
#line 1102
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1095
            .ability = ABILITY_LEVITATE,
#line 1096
            .lvl = 52,
#line 1097
            .ball = BALL_MASTER,
#line 1099
            .friendship = 1,
#line 1101
            .nature = NATURE_SERIOUS,
#line 1098
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1103
                MOVE_DARK_PULSE,
                MOVE_DRAGON_PULSE,
                MOVE_FLAMETHROWER,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 1108
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1108
            .heldItem = ITEM_GALLADITE,
#line 1114
            .ev = TRAINER_PARTY_EVS(200, 200, 0, 0, 0, 0),
#line 1116
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1109
            .ability = ABILITY_SHARPNESS,
#line 1110
            .lvl = 53,
#line 1111
            .ball = BALL_MASTER,
#line 1113
            .friendship = 1,
#line 1115
            .nature = NATURE_SERIOUS,
#line 1112
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1116
                MOVE_SACRED_SWORD,
                MOVE_PSYCHO_CUT,
                MOVE_NIGHT_SLASH,
                MOVE_TRICK_ROOM,
            },
            },
        },
    },
#line 1121
    [DIFFICULTY_NORMAL][TRAINER_VIGRIM] =
    {
#line 1122
        .trainerName = _("Vigrim"),
#line 1127
        .trainerClass = TRAINER_CLASS_THE_TIDE_LEADER,
#line 1123
        .trainerPic = TRAINER_PIC_FRONT_VIGRIM,
#line 1125
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1124
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 1126
        .characterRevealId = REVEAL_VIGRIM,
#line 1128
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 1129
        .objectEventGraphicsId = OBJ_EVENT_GFX_VIGRIM,
#line 1130
        .mapSec = MAPSEC_NAVAL_BASE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_VIGRIM,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1132
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1132
            .heldItem = ITEM_FOCUS_SASH,
#line 1138
            .ev = TRAINER_PARTY_EVS(12, 248, 0, 248, 0, 0),
#line 1140
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1133
            .ability = ABILITY_SWIFT_SWIM,
#line 1134
            .lvl = 76,
#line 1135
            .ball = BALL_MASTER,
#line 1137
            .friendship = 1,
#line 1139
            .nature = NATURE_ADAMANT,
#line 1136
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1140
                MOVE_LIQUIDATION,
                MOVE_CLOSE_COMBAT,
                MOVE_ICE_PUNCH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 1145
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1145
            .heldItem = ITEM_WACAN_BERRY,
#line 1151
            .ev = TRAINER_PARTY_EVS(132, 132, 4, 236, 0, 4),
#line 1153
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1146
            .ability = ABILITY_INTIMIDATE,
#line 1147
            .lvl = 75,
#line 1148
            .ball = BALL_MASTER,
#line 1150
            .friendship = 1,
#line 1152
            .nature = NATURE_ADAMANT,
#line 1149
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1153
                MOVE_WATERFALL,
                MOVE_POWER_WHIP,
                MOVE_CRUNCH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 1158
            .species = SPECIES_BEARTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1158
            .heldItem = ITEM_WATERIUM_Z,
#line 1164
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1166
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1159
            .ability = ABILITY_SWIFT_SWIM,
#line 1160
            .lvl = 75,
#line 1161
            .ball = BALL_MASTER,
#line 1163
            .friendship = 1,
#line 1165
            .nature = NATURE_ADAMANT,
#line 1162
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1166
                MOVE_ICICLE_CRASH,
                MOVE_LIQUIDATION,
                MOVE_AQUA_JET,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 1171
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1171
            .heldItem = ITEM_CHOICE_BAND,
#line 1177
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1179
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1172
            .ability = ABILITY_INNER_FOCUS,
#line 1173
            .lvl = 76,
#line 1174
            .ball = BALL_MASTER,
#line 1176
            .friendship = 1,
#line 1178
            .nature = NATURE_JOLLY,
#line 1175
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1179
                MOVE_CLOSE_COMBAT,
                MOVE_U_TURN,
                MOVE_POISON_JAB,
                MOVE_TRIPLE_AXEL,
            },
            },
            {
#line 1184
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1184
            .heldItem = ITEM_FLYING_GEM,
#line 1190
            .ev = TRAINER_PARTY_EVS(64, 196, 0, 248, 0, 0),
#line 1192
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1185
            .ability = ABILITY_HYPER_CUTTER,
#line 1186
            .lvl = 76,
#line 1187
            .ball = BALL_MASTER,
#line 1189
            .friendship = 1,
#line 1191
            .nature = NATURE_ADAMANT,
#line 1188
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1192
                MOVE_HIGH_HORSEPOWER,
                MOVE_ACROBATICS,
                MOVE_X_SCISSOR,
                MOVE_CRABHAMMER,
            },
            },
            {
#line 1197
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1197
            .heldItem = ITEM_SWAMPERTITE,
#line 1203
            .ev = TRAINER_PARTY_EVS(136, 116, 4, 248, 0, 4),
#line 1205
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1198
            .ability = ABILITY_TORRENT,
#line 1199
            .lvl = 77,
#line 1200
            .ball = BALL_MASTER,
#line 1202
            .friendship = 1,
#line 1204
            .nature = NATURE_ADAMANT,
#line 1201
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1205
                MOVE_LIQUIDATION,
                MOVE_EARTHQUAKE,
                MOVE_HIGH_HORSEPOWER,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
#line 1210
    [DIFFICULTY_NORMAL][TRAINER_BAIYA_WHYAREYOUHELPINGTHEM] =
    {
#line 1211
        .trainerName = _("Baiya"),
#line 1213
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 1212
        .trainerPic = TRAINER_PIC_FRONT_BAIYA,
#line 1215
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1214
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_BAIYA,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1217
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1217
            .heldItem = ITEM_FOCUS_SASH,
#line 1223
            .ev = TRAINER_PARTY_EVS(0, 0, 200, 0, 0, 200),
#line 1224
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1218
            .ability = ABILITY_EFFECT_SPORE,
#line 1219
            .lvl = 67,
#line 1220
            .ball = BALL_MASTER,
#line 1222
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 1221
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1224
                MOVE_SEED_BOMB,
                MOVE_LEECH_LIFE,
                MOVE_SPORE,
                MOVE_RAGE_POWDER,
            },
            },
            {
#line 1229
            .species = SPECIES_ROTOM_FROST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1235
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 200, 200, 0),
#line 1237
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1230
            .ability = ABILITY_LEVITATE,
#line 1231
            .lvl = 69,
#line 1232
            .ball = BALL_MASTER,
#line 1234
            .friendship = 1,
#line 1236
            .nature = NATURE_SERIOUS,
#line 1233
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1238
                MOVE_BLIZZARD,
                MOVE_THUNDERBOLT,
                MOVE_VOLT_SWITCH,
                MOVE_CHARGE,
            },
            },
            {
#line 1243
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1243
            .heldItem = ITEM_CHARCOAL,
#line 1249
            .ev = TRAINER_PARTY_EVS(50, 150, 0, 200, 0, 0),
#line 1251
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1244
            .ability = ABILITY_FLASH_FIRE,
#line 1245
            .lvl = 68,
#line 1246
            .ball = BALL_MASTER,
#line 1248
            .friendship = 1,
#line 1250
            .nature = NATURE_ADAMANT,
#line 1247
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1251
                MOVE_BITTER_BLADE,
                MOVE_SHADOW_CLAW,
                MOVE_SHADOW_SNEAK,
                MOVE_BULK_UP,
            },
            },
            {
#line 1256
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1256
            .heldItem = ITEM_SITRUS_BERRY,
#line 1262
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 150, 150, 0),
#line 1264
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1257
            .ability = ABILITY_SHEER_FORCE,
#line 1258
            .lvl = 68,
#line 1259
            .ball = BALL_MASTER,
#line 1261
            .friendship = 1,
#line 1263
            .nature = NATURE_TIMID,
#line 1260
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1265
                MOVE_EARTH_POWER,
                MOVE_SLUDGE_BOMB,
                MOVE_ICE_BEAM,
                MOVE_ROAR,
            },
            },
            {
#line 1270
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1276
            .ev = TRAINER_PARTY_EVS(100, 50, 25, 200, 0, 25),
#line 1278
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1271
            .ability = ABILITY_CUTE_CHARM,
#line 1272
            .lvl = 69,
#line 1273
            .ball = BALL_MASTER,
#line 1275
            .friendship = 1,
#line 1277
            .nature = NATURE_JOLLY,
#line 1274
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1278
                MOVE_FAKE_OUT,
                MOVE_FACADE,
                MOVE_HELPING_HAND,
                MOVE_HIGH_JUMP_KICK,
            },
            },
            {
#line 1283
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1283
            .heldItem = ITEM_DRAGONIUM_Z,
#line 1289
            .ev = TRAINER_PARTY_EVS(0, 235, 0, 150, 15, 0),
#line 1290
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1284
            .ability = ABILITY_INNER_FOCUS,
#line 1285
            .lvl = 70,
#line 1286
            .ball = BALL_MASTER,
#line 1288
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 1287
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1290
                MOVE_DRAGON_CLAW,
                MOVE_AERIAL_ACE,
                MOVE_EXTREME_SPEED,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 1295
    [DIFFICULTY_NORMAL][TRAINER_LEAGUEOPPONENT1] =
    {
#line 1296
        .trainerName = _("League1"),
#line 1297
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
#line 1298
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1300
            .species = SPECIES_GRAFAIAI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1300
            .heldItem = ITEM_ROCKY_HELMET,
#line 1306
            .ev = TRAINER_PARTY_EVS(252, 240, 12, 4, 0, 0),
#line 1308
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1301
            .ability = ABILITY_PRANKSTER,
#line 1302
            .lvl = 72,
#line 1303
            .ball = BALL_MASTER,
#line 1305
            .friendship = 1,
#line 1307
            .nature = NATURE_ADAMANT,
#line 1304
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1308
                MOVE_SCARY_FACE,
                MOVE_ENCORE,
                MOVE_GUNK_SHOT,
                MOVE_DOUBLE_EDGE,
            },
            },
            {
#line 1313
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1313
            .heldItem = ITEM_DARKINIUM_Z,
#line 1319
            .ev = TRAINER_PARTY_EVS(4, 4, 0, 248, 252, 0),
#line 1321
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1314
            .ability = ABILITY_ILLUSION,
#line 1315
            .lvl = 72,
#line 1316
            .ball = BALL_MASTER,
#line 1318
            .friendship = 1,
#line 1320
            .nature = NATURE_HASTY,
#line 1317
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1321
                MOVE_DARK_PULSE,
                MOVE_SUCKER_PUNCH,
                MOVE_FLAMETHROWER,
                MOVE_EXTRASENSORY,
            },
            },
            {
#line 1326
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1326
            .heldItem = ITEM_SCIZORITE,
#line 1332
            .ev = TRAINER_PARTY_EVS(248, 252, 0, 4, 0, 4),
#line 1334
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1327
            .ability = ABILITY_TECHNICIAN,
#line 1328
            .lvl = 73,
#line 1329
            .ball = BALL_MASTER,
#line 1331
            .friendship = 1,
#line 1333
            .nature = NATURE_ADAMANT,
#line 1330
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1334
                MOVE_BULLET_PUNCH,
                MOVE_QUICK_ATTACK,
                MOVE_BUG_BITE,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
#line 1339
    [DIFFICULTY_NORMAL][TRAINER_LEAGUEOPPONENT2] =
    {
#line 1340
        .trainerName = _("League2"),
#line 1341
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
#line 1342
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1344
            .species = SPECIES_VANILLUXE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1344
            .heldItem = ITEM_ICY_ROCK,
#line 1350
            .ev = TRAINER_PARTY_EVS(220, 0, 0, 252, 36, 0),
#line 1352
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1345
            .ability = ABILITY_SNOW_WARNING,
#line 1346
            .lvl = 72,
#line 1347
            .ball = BALL_MASTER,
#line 1349
            .friendship = 1,
#line 1351
            .nature = NATURE_TIMID,
#line 1348
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1353
                MOVE_BLIZZARD,
                MOVE_AURORA_VEIL,
                MOVE_FLASH_CANNON,
                MOVE_SHEER_COLD,
            },
            },
            {
#line 1358
            .species = SPECIES_CETITAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1358
            .heldItem = ITEM_SITRUS_BERRY,
#line 1364
            .ev = TRAINER_PARTY_EVS(8, 112, 104, 100, 0, 184),
#line 1366
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1359
            .ability = ABILITY_SLUSH_RUSH,
#line 1360
            .lvl = 72,
#line 1361
            .ball = BALL_MASTER,
#line 1363
            .friendship = 1,
#line 1365
            .nature = NATURE_ADAMANT,
#line 1362
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1366
                MOVE_ICICLE_CRASH,
                MOVE_LIQUIDATION,
                MOVE_BELLY_DRUM,
                MOVE_HIGH_HORSEPOWER,
            },
            },
            {
#line 1372
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1378
            .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
#line 1380
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1373
            .ability = ABILITY_HYPER_CUTTER,
#line 1374
            .lvl = 73,
#line 1375
            .ball = BALL_MASTER,
#line 1377
            .friendship = 1,
#line 1379
            .nature = NATURE_ADAMANT,
#line 1376
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1380
                MOVE_CRABHAMMER,
                MOVE_BODY_SLAM,
                MOVE_HIGH_HORSEPOWER,
                MOVE_X_SCISSOR,
            },
            },
        },
    },
#line 1385
    [DIFFICULTY_NORMAL][TRAINER_LEAGUEOPPONENT3] =
    {
#line 1386
        .trainerName = _("League3"),
#line 1387
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
#line 1388
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1390
            .species = SPECIES_TOXAPEX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1390
            .heldItem = ITEM_BLACK_SLUDGE,
#line 1396
            .ev = TRAINER_PARTY_EVS(252, 12, 84, 0, 0, 160),
#line 1398
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1391
            .ability = ABILITY_MERCILESS,
#line 1392
            .lvl = 72,
#line 1393
            .ball = BALL_MASTER,
#line 1395
            .friendship = 1,
#line 1397
            .nature = NATURE_ADAMANT,
#line 1394
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1398
                MOVE_TOXIC,
                MOVE_BANEFUL_BUNKER,
                MOVE_LIQUIDATION,
                MOVE_POISON_JAB,
            },
            },
            {
#line 1403
            .species = SPECIES_URSALUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1403
            .heldItem = ITEM_CHESTO_BERRY,
#line 1409
            .ev = TRAINER_PARTY_EVS(248, 48, 0, 0, 0, 212),
#line 1411
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1404
            .ability = ABILITY_UNNERVE,
#line 1405
            .lvl = 72,
#line 1406
            .ball = BALL_MASTER,
#line 1408
            .friendship = 1,
#line 1410
            .nature = NATURE_CAREFUL,
#line 1407
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1411
                MOVE_YAWN,
                MOVE_REST,
                MOVE_EARTHQUAKE,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 1416
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1416
            .heldItem = ITEM_SLOWBRONITE,
#line 1422
            .ev = TRAINER_PARTY_EVS(252, 0, 60, 0, 0, 196),
#line 1424
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1417
            .ability = ABILITY_OBLIVIOUS,
#line 1418
            .lvl = 73,
#line 1419
            .ball = BALL_MASTER,
#line 1421
            .friendship = 1,
#line 1423
            .nature = NATURE_CALM,
#line 1420
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1425
                MOVE_TOXIC,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
        },
    },
#line 1430
    [DIFFICULTY_NORMAL][TRAINER_LEAGUEOPPONENT4] =
    {
#line 1431
        .trainerName = _("League4"),
#line 1432
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
#line 1433
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1435
            .species = SPECIES_KILOWATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1435
            .heldItem = ITEM_FLYINIUM_Z,
#line 1441
            .ev = TRAINER_PARTY_EVS(8, 0, 0, 252, 248, 0),
#line 1443
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1436
            .ability = ABILITY_COMPETITIVE,
#line 1437
            .lvl = 73,
#line 1438
            .ball = BALL_MASTER,
#line 1440
            .friendship = 1,
#line 1442
            .nature = NATURE_TIMID,
#line 1439
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1444
                MOVE_HURRICANE,
                MOVE_AIR_SLASH,
                MOVE_THUNDERBOLT,
                MOVE_VOLT_SWITCH,
            },
            },
            {
#line 1449
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1449
            .heldItem = ITEM_MENTAL_HERB,
#line 1455
            .ev = TRAINER_PARTY_EVS(156, 0, 100, 252, 0, 0),
#line 1457
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1450
            .ability = ABILITY_INNER_FOCUS,
#line 1451
            .lvl = 73,
#line 1452
            .ball = BALL_MASTER,
#line 1454
            .friendship = 1,
#line 1456
            .nature = NATURE_JOLLY,
#line 1453
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1458
                MOVE_BELLY_DRUM,
                MOVE_BATON_PASS,
                MOVE_COUNTER,
            },
            },
            {
#line 1462
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1462
            .heldItem = ITEM_GYARADOSITE,
#line 1464
            .ev = TRAINER_PARTY_EVS(156, 252, 0, 100, 0, 0),
#line 1466
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1463
            .ability = ABILITY_INTIMIDATE,
#line 1466
            .lvl = 100,
            .ball = POKEBALL_COUNT,
#line 1465
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1466
                MOVE_WATERFALL,
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 1471
    [DIFFICULTY_NORMAL][TRAINER_BAIYA_FINALS] =
    {
#line 1472
        .trainerName = _("Baiya"),
#line 1474
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 1473
        .trainerPic = TRAINER_PIC_FRONT_BAIYA,
#line 1475
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_BAIYA,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1477
            .species = SPECIES_KLEFKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1477
            .heldItem = ITEM_LIGHT_CLAY,
#line 1483
            .ev = TRAINER_PARTY_EVS(248, 0, 32, 0, 196, 32),
#line 1485
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1478
            .ability = ABILITY_PRANKSTER,
#line 1479
            .lvl = 73,
#line 1480
            .ball = BALL_MASTER,
#line 1482
            .friendship = 1,
#line 1484
            .nature = NATURE_MODEST,
#line 1481
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1486
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_DAZZLING_GLEAM,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 1491
            .species = SPECIES_HUNTAIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1491
            .heldItem = ITEM_MYSTIC_WATER,
#line 1497
            .ev = TRAINER_PARTY_EVS(100, 228, 100, 80, 0, 0),
#line 1499
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1492
            .ability = ABILITY_WATER_VEIL,
#line 1493
            .lvl = 73,
#line 1494
            .ball = BALL_MASTER,
#line 1496
            .friendship = 1,
#line 1498
            .nature = NATURE_ADAMANT,
#line 1495
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1499
                MOVE_WATERFALL,
                MOVE_ICE_FANG,
                MOVE_CRUNCH,
                MOVE_SHELL_SMASH,
            },
            },
            {
#line 1504
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1504
            .heldItem = ITEM_CHARCOAL,
#line 1510
            .ev = TRAINER_PARTY_EVS(88, 164, 4, 252, 0, 0),
#line 1512
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1505
            .ability = ABILITY_FLASH_FIRE,
#line 1506
            .lvl = 73,
#line 1507
            .ball = BALL_MASTER,
#line 1509
            .friendship = 1,
#line 1511
            .nature = NATURE_ADAMANT,
#line 1508
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1512
                MOVE_BITTER_BLADE,
                MOVE_SHADOW_CLAW,
                MOVE_SHADOW_SNEAK,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 1517
            .species = SPECIES_ROTOM_MOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1517
            .heldItem = ITEM_MIRACLE_SEED,
#line 1523
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 252, 200, 4),
#line 1525
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1518
            .ability = ABILITY_LEVITATE,
#line 1519
            .lvl = 73,
#line 1520
            .ball = BALL_MASTER,
#line 1522
            .friendship = 1,
#line 1524
            .nature = NATURE_TIMID,
#line 1521
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1526
                MOVE_LEAF_STORM,
                MOVE_THUNDERBOLT,
                MOVE_NASTY_PLOT,
                MOVE_DISCHARGE,
            },
            },
            {
#line 1531
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1531
            .heldItem = ITEM_LOPUNNITE,
#line 1537
            .ev = TRAINER_PARTY_EVS(100, 104, 28, 248, 0, 28),
#line 1539
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1532
            .ability = ABILITY_CUTE_CHARM,
#line 1533
            .lvl = 74,
#line 1534
            .ball = BALL_MASTER,
#line 1536
            .friendship = 1,
#line 1538
            .nature = NATURE_JOLLY,
#line 1535
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1539
                MOVE_FACADE,
                MOVE_HIGH_JUMP_KICK,
                MOVE_DRAIN_PUNCH,
                MOVE_BOUNCE,
            },
            },
            {
#line 1544
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1544
            .heldItem = ITEM_DRAGONIUM_Z,
#line 1550
            .ev = TRAINER_PARTY_EVS(60, 248, 0, 200, 0, 0),
#line 1551
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1545
            .ability = ABILITY_INNER_FOCUS,
#line 1546
            .lvl = 74,
#line 1547
            .ball = BALL_MASTER,
#line 1549
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 1548
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1551
                MOVE_OUTRAGE,
                MOVE_DRAGON_CLAW,
                MOVE_AERIAL_ACE,
                MOVE_IRON_HEAD,
            },
            },
        },
    },
#line 1556
    [DIFFICULTY_NORMAL][TRAINER_BAIYA_LETSGRABLUNCH] =
    {
#line 1557
        .trainerName = _("Baiya"),
#line 1559
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 1558
        .trainerPic = TRAINER_PIC_FRONT_BAIYA,
#line 1561
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1560
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_BAIYA,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1563
            .species = SPECIES_KLEFKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1563
            .heldItem = ITEM_LIGHT_CLAY,
#line 1569
            .ev = TRAINER_PARTY_EVS(248, 0, 32, 0, 196, 32),
#line 1571
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1564
            .ability = ABILITY_PRANKSTER,
#line 1565
            .lvl = 73,
#line 1566
            .ball = BALL_MASTER,
#line 1568
            .friendship = 1,
#line 1570
            .nature = NATURE_MODEST,
#line 1567
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1572
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_DAZZLING_GLEAM,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 1577
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1577
            .heldItem = ITEM_LIFE_ORB,
#line 1583
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 212, 196, 0),
#line 1585
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1578
            .ability = ABILITY_SHEER_FORCE,
#line 1579
            .lvl = 73,
#line 1580
            .ball = BALL_MASTER,
#line 1582
            .friendship = 1,
#line 1584
            .nature = NATURE_TIMID,
#line 1581
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1586
                MOVE_EARTH_POWER,
                MOVE_SLUDGE_WAVE,
                MOVE_ICE_BEAM,
                MOVE_FOCUS_BLAST,
            },
            },
            {
#line 1591
            .species = SPECIES_HUNTAIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1591
            .heldItem = ITEM_MYSTIC_WATER,
#line 1597
            .ev = TRAINER_PARTY_EVS(100, 228, 100, 80, 0, 0),
#line 1599
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1592
            .ability = ABILITY_WATER_VEIL,
#line 1593
            .lvl = 73,
#line 1594
            .ball = BALL_MASTER,
#line 1596
            .friendship = 1,
#line 1598
            .nature = NATURE_ADAMANT,
#line 1595
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1599
                MOVE_WATERFALL,
                MOVE_ICE_FANG,
                MOVE_CRUNCH,
                MOVE_SHELL_SMASH,
            },
            },
            {
#line 1604
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1604
            .heldItem = ITEM_CHARCOAL,
#line 1610
            .ev = TRAINER_PARTY_EVS(88, 164, 4, 252, 0, 0),
#line 1612
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1605
            .ability = ABILITY_FLASH_FIRE,
#line 1606
            .lvl = 73,
#line 1607
            .ball = BALL_MASTER,
#line 1609
            .friendship = 1,
#line 1611
            .nature = NATURE_ADAMANT,
#line 1608
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1612
                MOVE_BITTER_BLADE,
                MOVE_SHADOW_CLAW,
                MOVE_SHADOW_SNEAK,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 1617
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1617
            .heldItem = ITEM_LOPUNNITE,
#line 1623
            .ev = TRAINER_PARTY_EVS(100, 104, 28, 248, 0, 28),
#line 1625
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1618
            .ability = ABILITY_CUTE_CHARM,
#line 1619
            .lvl = 74,
#line 1620
            .ball = BALL_MASTER,
#line 1622
            .friendship = 1,
#line 1624
            .nature = NATURE_JOLLY,
#line 1621
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1625
                MOVE_FACADE,
                MOVE_HIGH_JUMP_KICK,
                MOVE_DRAIN_PUNCH,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 1630
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1630
            .heldItem = ITEM_FLYINIUM_Z,
#line 1636
            .ev = TRAINER_PARTY_EVS(60, 248, 0, 200, 0, 0),
#line 1637
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1631
            .ability = ABILITY_INNER_FOCUS,
#line 1632
            .lvl = 75,
#line 1633
            .ball = BALL_MASTER,
#line 1635
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 1634
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1637
                MOVE_DRAGON_CLAW,
                MOVE_AERIAL_ACE,
                MOVE_DRAGON_DANCE,
                MOVE_IRON_HEAD,
            },
            },
        },
    },
#line 1642
    [DIFFICULTY_NORMAL][TRAINER_DOYLE_ZENZU_ISLAND] =
    {
#line 1643
        .trainerName = _("Doyle"),
#line 1645
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 1644
        .trainerPic = TRAINER_PIC_FRONT_DOYLE,
#line 1647
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1646
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 1648
        .characterRevealId = REVEAL_DOYLE,
#line 1649
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 1650
        .objectEventGraphicsId = OBJ_EVENT_GFX_DOYLE,
#line 1651
        .mapSec = MAPSEC_ZENZU_ISLAND,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_DOYLE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1653
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1653
            .heldItem = ITEM_LIFE_ORB,
#line 1659
            .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
#line 1661
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1654
            .ability = ABILITY_SHEER_FORCE,
#line 1655
            .lvl = 75,
#line 1656
            .ball = BALL_MASTER,
#line 1658
            .friendship = 1,
#line 1660
            .nature = NATURE_TIMID,
#line 1657
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1662
                MOVE_EARTH_POWER,
                MOVE_SLUDGE_BOMB,
                MOVE_ICE_BEAM,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 1667
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1667
            .heldItem = ITEM_CHOPLE_BERRY,
#line 1673
            .ev = TRAINER_PARTY_EVS(252, 60, 52, 0, 0, 144),
#line 1675
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1668
            .ability = ABILITY_SAND_STREAM,
#line 1669
            .lvl = 75,
#line 1670
            .ball = BALL_MASTER,
#line 1672
            .friendship = 1,
#line 1674
            .nature = NATURE_ADAMANT,
#line 1671
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1675
                MOVE_ROCK_SLIDE,
                MOVE_ASSURANCE,
                MOVE_HELPING_HAND,
                MOVE_DRAGON_TAIL,
            },
            },
            {
#line 1680
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1680
            .heldItem = ITEM_ASSAULT_VEST,
#line 1686
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 252, 148, 8),
#line 1688
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1681
            .ability = ABILITY_LEVITATE,
#line 1682
            .lvl = 74,
#line 1683
            .ball = BALL_MASTER,
#line 1685
            .friendship = 1,
#line 1687
            .nature = NATURE_MODEST,
#line 1684
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1689
                MOVE_DARK_PULSE,
                MOVE_DRACO_METEOR,
                MOVE_EARTH_POWER,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 1694
            .species = SPECIES_VOLCARONA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1694
            .heldItem = ITEM_FIRIUM_Z,
#line 1700
            .ev = TRAINER_PARTY_EVS(128, 0, 120, 252, 8, 0),
#line 1702
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1695
            .ability = ABILITY_FLAME_BODY,
#line 1696
            .lvl = 76,
#line 1697
            .ball = BALL_MASTER,
#line 1699
            .friendship = 1,
#line 1701
            .nature = NATURE_TIMID,
#line 1698
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1703
                MOVE_FLAMETHROWER,
                MOVE_BUG_BUZZ,
                MOVE_GIGA_DRAIN,
                MOVE_RAGE_POWDER,
            },
            },
            {
#line 1709
            .species = SPECIES_DURALUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1715
            .ev = TRAINER_PARTY_EVS(8, 0, 0, 0, 248, 252),
#line 1717
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1710
            .ability = ABILITY_STALWART,
#line 1711
            .lvl = 76,
#line 1712
            .ball = BALL_MASTER,
#line 1714
            .friendship = 1,
#line 1716
            .nature = NATURE_MODEST,
#line 1713
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1718
                MOVE_FLASH_CANNON,
                MOVE_DRAGON_PULSE,
                MOVE_THUNDERBOLT,
                MOVE_DARK_PULSE,
            },
            },
        },
    },
#line 1723
    [DIFFICULTY_NORMAL][TRAINER_IMELDA] =
    {
#line 1724
        .trainerName = _("Imelda"),
#line 1725
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 1726
        .trainerPic = TRAINER_PIC_FRONT_IMELDA,
#line 1728
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1727
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 1729
        .characterRevealId = REVEAL_IMELDA,
#line 1730
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 1731
        .objectEventGraphicsId = OBJ_EVENT_GFX_IMELDA,
#line 1732
        .mapSec = MAPSEC_ESPULEE_OUTSKIRTS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_IMELDA,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1734
            .species = SPECIES_REVAVROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1734
            .heldItem = ITEM_COVERT_CLOAK,
#line 1740
            .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
#line 1742
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1735
            .ability = ABILITY_OVERCOAT,
#line 1736
            .lvl = 75,
#line 1737
            .ball = BALL_MASTER,
#line 1739
            .friendship = 1,
#line 1741
            .nature = NATURE_JOLLY,
#line 1738
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1742
                MOVE_SPIN_OUT,
                MOVE_POISON_GAS,
                MOVE_GUNK_SHOT,
                MOVE_TOXIC_SPIKES,
            },
            },
            {
#line 1747
            .species = SPECIES_POLTEAGEIST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1747
            .heldItem = ITEM_WHITE_HERB,
#line 1753
            .ev = TRAINER_PARTY_EVS(140, 0, 100, 252, 16, 0),
#line 1755
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1748
            .ability = ABILITY_WEAK_ARMOR,
#line 1749
            .lvl = 74,
#line 1750
            .ball = BALL_MASTER,
#line 1752
            .friendship = 1,
#line 1754
            .nature = NATURE_TIMID,
#line 1751
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1756
                MOVE_SHADOW_BALL,
                MOVE_GIGA_DRAIN,
                MOVE_SHELL_SMASH,
                MOVE_DARK_PULSE,
            },
            },
            {
#line 1761
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1761
            .heldItem = ITEM_PSYCHIUM_Z,
#line 1767
            .ev = TRAINER_PARTY_EVS(128, 0, 132, 0, 248, 0),
#line 1769
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
#line 1762
            .ability = ABILITY_FLASH_FIRE,
#line 1763
            .lvl = 76,
#line 1764
            .ball = BALL_MASTER,
#line 1766
            .friendship = 1,
#line 1768
            .nature = NATURE_RELAXED,
#line 1765
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1770
                MOVE_SHADOW_BALL,
                MOVE_HEAT_WAVE,
                MOVE_TRICK_ROOM,
                MOVE_INFERNO,
            },
            },
            {
#line 1775
            .species = SPECIES_DHELMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1775
            .heldItem = ITEM_ASSAULT_VEST,
#line 1781
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
#line 1783
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 1776
            .ability = ABILITY_STEELWORKER,
#line 1777
            .lvl = 75,
#line 1778
            .ball = BALL_MASTER,
#line 1780
            .friendship = 1,
#line 1782
            .nature = NATURE_BRAVE,
#line 1779
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1784
                MOVE_POLTERGEIST,
                MOVE_POWER_WHIP,
                MOVE_ANCHOR_SHOT,
                MOVE_LIQUIDATION,
            },
            },
            {
#line 1790
            .species = SPECIES_GARBODOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1796
            .ev = TRAINER_PARTY_EVS(4, 248, 128, 0, 0, 128),
#line 1798
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 1791
            .ability = ABILITY_STENCH,
#line 1792
            .lvl = 76,
#line 1793
            .ball = BALL_MASTER,
#line 1795
            .friendship = 1,
#line 1797
            .nature = NATURE_BRAVE,
#line 1794
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1799
                MOVE_GUNK_SHOT,
                MOVE_PAYBACK,
                MOVE_SEED_BOMB,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 1804
    [DIFFICULTY_NORMAL][TRAINER_ADAORA_HOWDISAPPOINTING] =
    {
#line 1805
        .trainerName = _("Adaora"),
#line 1810
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 1806
        .trainerPic = TRAINER_PIC_FRONT_ADAORA,
#line 1808
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1807
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 1809
        .characterRevealId = REVEAL_ADAORA,
#line 1811
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 1812
        .objectEventGraphicsId = OBJ_EVENT_GFX_ADAORA,
#line 1813
        .mapSec = MAPSEC_HODOU_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ADAORA,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1815
            .species = SPECIES_BARRASKEWDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1815
            .heldItem = ITEM_CHOICE_BAND,
#line 1821
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1823
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1816
            .ability = ABILITY_SWIFT_SWIM,
#line 1817
            .lvl = 73,
#line 1818
            .ball = BALL_MASTER,
#line 1820
            .friendship = 1,
#line 1822
            .nature = NATURE_ADAMANT,
#line 1819
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1823
                MOVE_LIQUIDATION,
                MOVE_FLIP_TURN,
                MOVE_CLOSE_COMBAT,
                MOVE_CRUNCH,
            },
            },
            {
#line 1828
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1828
            .heldItem = ITEM_ROCKIUM_Z,
#line 1834
            .ev = TRAINER_PARTY_EVS(136, 100, 8, 252, 0, 12),
#line 1836
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1829
            .ability = ABILITY_SWIFT_SWIM,
#line 1830
            .lvl = 74,
#line 1831
            .ball = BALL_MASTER,
#line 1833
            .friendship = 1,
#line 1835
            .nature = NATURE_JOLLY,
#line 1832
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1836
                MOVE_ROCK_SLIDE,
                MOVE_X_SCISSOR,
                MOVE_STONE_EDGE,
                MOVE_STOMPING_TANTRUM,
            },
            },
            {
#line 1841
            .species = SPECIES_GRAPPLOCT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1841
            .heldItem = ITEM_ASSAULT_VEST,
#line 1847
            .ev = TRAINER_PARTY_EVS(252, 112, 132, 0, 0, 12),
#line 1849
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1842
            .ability = ABILITY_TECHNICIAN,
#line 1843
            .lvl = 73,
#line 1844
            .ball = BALL_MASTER,
#line 1846
            .friendship = 1,
#line 1848
            .nature = NATURE_ADAMANT,
#line 1845
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1849
                MOVE_CLOSE_COMBAT,
                MOVE_CIRCLE_THROW,
                MOVE_LIQUIDATION,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 1854
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1854
            .heldItem = ITEM_FOCUS_SASH,
#line 1860
            .ev = TRAINER_PARTY_EVS(8, 248, 0, 252, 0, 0),
#line 1862
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1855
            .ability = ABILITY_TECHNICIAN,
#line 1856
            .lvl = 74,
#line 1857
            .ball = BALL_MASTER,
#line 1859
            .friendship = 1,
#line 1861
            .nature = NATURE_JOLLY,
#line 1858
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1862
                MOVE_MACH_PUNCH,
                MOVE_BULLET_SEED,
                MOVE_SPORE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 1867
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1867
            .heldItem = ITEM_CHOICE_SPECS,
#line 1873
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 12, 248, 0),
#line 1875
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1868
            .ability = ABILITY_RAIN_DISH,
#line 1869
            .lvl = 74,
#line 1870
            .ball = BALL_MASTER,
#line 1872
            .friendship = 1,
#line 1874
            .nature = NATURE_MODEST,
#line 1871
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1876
                MOVE_SLUDGE_BOMB,
                MOVE_MUDDY_WATER,
                MOVE_DAZZLING_GLEAM,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 1882
            .species = SPECIES_DREDNAW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1888
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
#line 1890
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1883
            .ability = ABILITY_SWIFT_SWIM,
#line 1884
            .lvl = 75,
#line 1885
            .ball = BALL_MASTER,
#line 1887
            .friendship = 1,
#line 1889
            .nature = NATURE_CAREFUL,
#line 1886
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1890
                MOVE_ROCK_SLIDE,
                MOVE_LIQUIDATION,
                MOVE_HIGH_HORSEPOWER,
                MOVE_BODY_PRESS,
            },
            },
        },
    },
#line 1895
    [DIFFICULTY_NORMAL][TRAINER_BAIYA_LETSBURNTHISMOTHERDOWN] =
    {
#line 1896
        .trainerName = _("Baiya"),
#line 1898
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 1897
        .trainerPic = TRAINER_PIC_FRONT_BAIYA,
#line 1900
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1899
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_BAIYA,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1902
            .species = SPECIES_KLEFKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1902
            .heldItem = ITEM_LIGHT_CLAY,
#line 1908
            .ev = TRAINER_PARTY_EVS(248, 0, 32, 0, 196, 32),
#line 1910
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1903
            .ability = ABILITY_PRANKSTER,
#line 1904
            .lvl = 74,
#line 1905
            .ball = BALL_MASTER,
#line 1907
            .friendship = 1,
#line 1909
            .nature = NATURE_MODEST,
#line 1906
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1911
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_DAZZLING_GLEAM,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 1916
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1916
            .heldItem = ITEM_LOPUNNITE,
#line 1922
            .ev = TRAINER_PARTY_EVS(100, 156, 0, 252, 0, 0),
#line 1924
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1917
            .ability = ABILITY_CUTE_CHARM,
#line 1918
            .lvl = 76,
#line 1919
            .ball = BALL_MASTER,
#line 1921
            .friendship = 1,
#line 1923
            .nature = NATURE_JOLLY,
#line 1920
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1924
                MOVE_FAKE_OUT,
                MOVE_FACADE,
                MOVE_HIGH_JUMP_KICK,
                MOVE_U_TURN,
            },
            },
            {
#line 1929
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1929
            .heldItem = ITEM_LIFE_ORB,
#line 1935
            .ev = TRAINER_PARTY_EVS(0, 100, 0, 212, 196, 0),
#line 1937
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1930
            .ability = ABILITY_SHEER_FORCE,
#line 1931
            .lvl = 75,
#line 1932
            .ball = BALL_MASTER,
#line 1934
            .friendship = 1,
#line 1936
            .nature = NATURE_HASTY,
#line 1933
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1937
                MOVE_EARTH_POWER,
                MOVE_SLUDGE_BOMB,
                MOVE_ROCK_SLIDE,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 1942
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1942
            .heldItem = ITEM_BIG_ROOT,
#line 1948
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1950
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1943
            .ability = ABILITY_FLASH_FIRE,
#line 1944
            .lvl = 75,
#line 1945
            .ball = BALL_MASTER,
#line 1947
            .friendship = 1,
#line 1949
            .nature = NATURE_ADAMANT,
#line 1946
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1950
                MOVE_BITTER_BLADE,
                MOVE_SHADOW_CLAW,
                MOVE_SHADOW_SNEAK,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 1955
            .species = SPECIES_ROTOM_WASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1955
            .heldItem = ITEM_SITRUS_BERRY,
#line 1961
            .ev = TRAINER_PARTY_EVS(156, 0, 0, 252, 100, 0),
#line 1963
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1956
            .ability = ABILITY_LEVITATE,
#line 1957
            .lvl = 75,
#line 1958
            .ball = BALL_MASTER,
#line 1960
            .friendship = 1,
#line 1962
            .nature = NATURE_TIMID,
#line 1959
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1964
                MOVE_HYDRO_PUMP,
                MOVE_THUNDERBOLT,
                MOVE_WILL_O_WISP,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 1969
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1969
            .heldItem = ITEM_FLYINIUM_Z,
#line 1975
            .ev = TRAINER_PARTY_EVS(52, 252, 0, 200, 0, 4),
#line 1977
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1970
            .ability = ABILITY_INNER_FOCUS,
#line 1971
            .lvl = 77,
#line 1972
            .ball = BALL_MASTER,
#line 1974
            .friendship = 1,
#line 1976
            .nature = NATURE_ADAMANT,
#line 1973
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1977
                MOVE_DRAGON_CLAW,
                MOVE_FLY,
                MOVE_IRON_HEAD,
                MOVE_DRAGON_DANCE,
            },
            },
        },
    },
#line 1982
    [DIFFICULTY_NORMAL][TRAINER_DIANTHA] =
    {
#line 1983
        .trainerName = _("Diantha"),
#line 1984
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
#line 1985
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1987
            .species = SPECIES_HAWLUCHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1987
            .heldItem = ITEM_FLYING_GEM,
#line 1993
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1995
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1988
            .ability = ABILITY_UNBURDEN,
#line 1989
            .lvl = 77,
#line 1990
            .ball = BALL_MASTER,
#line 1992
            .friendship = 1,
#line 1994
            .nature = NATURE_ADAMANT,
#line 1991
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1995
                MOVE_ACROBATICS,
                MOVE_FLYING_PRESS,
                MOVE_X_SCISSOR,
                MOVE_POISON_JAB,
            },
            },
            {
#line 2000
            .species = SPECIES_TYRANTRUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2000
            .heldItem = ITEM_ASSAULT_VEST,
#line 2006
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 2008
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2001
            .ability = ABILITY_ROCK_HEAD,
#line 2002
            .lvl = 76,
#line 2003
            .ball = BALL_MASTER,
#line 2005
            .friendship = 1,
#line 2007
            .nature = NATURE_ADAMANT,
#line 2004
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2008
                MOVE_HEAD_SMASH,
                MOVE_DRAGON_CLAW,
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 2013
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2013
            .heldItem = ITEM_EJECT_BUTTON,
#line 2019
            .ev = TRAINER_PARTY_EVS(244, 0, 80, 0, 172, 12),
#line 2021
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2014
            .ability = ABILITY_REGENERATOR,
#line 2015
            .lvl = 76,
#line 2016
            .ball = BALL_MASTER,
#line 2018
            .friendship = 1,
#line 2020
            .nature = NATURE_MODEST,
#line 2017
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2022
                MOVE_SLUDGE_BOMB,
                MOVE_GRASS_KNOT,
                MOVE_SPORE,
                MOVE_FOUL_PLAY,
            },
            },
            {
#line 2027
            .species = SPECIES_AEGISLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2027
            .heldItem = ITEM_LIFE_ORB,
#line 2033
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 8, 252, 0),
#line 2035
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2028
            .ability = ABILITY_STANCE_CHANGE,
#line 2029
            .lvl = 78,
#line 2030
            .ball = BALL_MASTER,
#line 2032
            .friendship = 1,
#line 2034
            .nature = NATURE_MODEST,
#line 2031
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2035
                MOVE_FLASH_CANNON,
                MOVE_SHADOW_BALL,
                MOVE_KINGS_SHIELD,
                MOVE_SHADOW_SNEAK,
            },
            },
            {
#line 2040
            .species = SPECIES_BAXCALIBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2040
            .heldItem = ITEM_ICIUM_Z,
#line 2046
            .ev = TRAINER_PARTY_EVS(76, 180, 0, 252, 0, 0),
#line 2048
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2041
            .ability = ABILITY_THERMAL_EXCHANGE,
#line 2042
            .lvl = 78,
#line 2043
            .ball = BALL_MASTER,
#line 2045
            .friendship = 1,
#line 2047
            .nature = NATURE_ADAMANT,
#line 2044
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2048
                MOVE_ICICLE_CRASH,
                MOVE_GLAIVE_RUSH,
                MOVE_HIGH_HORSEPOWER,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 2053
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2053
            .heldItem = ITEM_GARDEVOIRITE,
#line 2059
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2061
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2054
            .ability = ABILITY_TRACE,
#line 2055
            .lvl = 79,
#line 2056
            .ball = BALL_MASTER,
#line 2058
            .friendship = 1,
#line 2060
            .nature = NATURE_TIMID,
#line 2057
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2062
                MOVE_MOONBLAST,
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 2067
    [DIFFICULTY_NORMAL][TRAINER_KEI_YING_WAREHOUSE_RAVE] =
    {
#line 2068
        .trainerName = _("Kei-ying"),
#line 2072
        .trainerClass = TRAINER_CLASS_SHARPRISE_COO,
#line 2069
        .trainerPic = TRAINER_PIC_FRONT_KEI_YING,
#line 2070
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2071
        .characterRevealId = REVEAL_KEI_YING,
#line 2073
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2074
        .objectEventGraphicsId = OBJ_EVENT_GFX_KEIYING,
#line 2075
        .mapSec = MAPSEC_CURENO_PORT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_KEI_YING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2077
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2077
            .heldItem = ITEM_FAIRY_GEM,
#line 2083
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 204, 252, 0),
#line 2085
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2078
            .ability = ABILITY_TELEPATHY,
#line 2079
            .lvl = 81,
#line 2080
            .ball = BALL_MASTER,
#line 2082
            .friendship = 1,
#line 2084
            .nature = NATURE_TIMID,
#line 2081
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2086
                MOVE_MISTY_EXPLOSION,
            },
            },
            {
#line 2088
            .species = SPECIES_FLORGES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2088
            .heldItem = ITEM_FAIRY_GEM,
#line 2094
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2096
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2089
            .ability = ABILITY_FLOWER_VEIL,
#line 2090
            .lvl = 81,
#line 2091
            .ball = BALL_MASTER,
#line 2093
            .friendship = 1,
#line 2095
            .nature = NATURE_TIMID,
#line 2092
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2097
                MOVE_MISTY_EXPLOSION,
            },
            },
            {
#line 2099
            .species = SPECIES_HATTERENE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2099
            .heldItem = ITEM_FAIRY_GEM,
#line 2105
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
#line 2107
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2100
            .ability = ABILITY_MAGIC_BOUNCE,
#line 2101
            .lvl = 81,
#line 2102
            .ball = BALL_MASTER,
#line 2104
            .friendship = 1,
#line 2106
            .nature = NATURE_MODEST,
#line 2103
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2108
                MOVE_MISTY_EXPLOSION,
            },
            },
            {
#line 2110
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2110
            .heldItem = ITEM_NORMAL_GEM,
#line 2116
            .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
#line 2118
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 2111
            .ability = ABILITY_LEVITATE,
#line 2112
            .lvl = 81,
#line 2113
            .ball = BALL_MASTER,
#line 2115
            .friendship = 1,
#line 2117
            .nature = NATURE_BRAVE,
#line 2114
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2119
                MOVE_EXPLOSION,
            },
            },
        },
    },
#line 2121
    [DIFFICULTY_NORMAL][TRAINER_ARRIBA_CEO] =
    {
#line 2122
        .trainerName = _("Arribaceo"),
#line 2123
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
#line 2124
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2126
            .species = SPECIES_REVAVROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2126
            .heldItem = ITEM_SHUCA_BERRY,
#line 2132
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2134
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2127
            .ability = ABILITY_FILTER,
#line 2128
            .lvl = 80,
#line 2129
            .ball = BALL_MASTER,
#line 2131
            .friendship = 1,
#line 2133
            .nature = NATURE_JOLLY,
#line 2130
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2134
                MOVE_SPIN_OUT,
                MOVE_GUNK_SHOT,
                MOVE_OVERHEAT,
                MOVE_SHIFT_GEAR,
            },
            },
            {
#line 2139
            .species = SPECIES_ROTOM_FAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2139
            .heldItem = ITEM_ASSAULT_VEST,
#line 2145
            .ev = TRAINER_PARTY_EVS(128, 0, 0, 128, 252, 0),
#line 2147
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2140
            .ability = ABILITY_LEVITATE,
#line 2141
            .lvl = 79,
#line 2142
            .ball = BALL_MASTER,
#line 2144
            .friendship = 1,
#line 2146
            .nature = NATURE_TIMID,
#line 2143
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2148
                MOVE_THUNDERBOLT,
                MOVE_AIR_SLASH,
                MOVE_VOLT_SWITCH,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 2153
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2153
            .heldItem = ITEM_FOCUS_SASH,
#line 2159
            .ev = TRAINER_PARTY_EVS(8, 248, 0, 252, 0, 0),
#line 2161
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2154
            .ability = ABILITY_SPEED_BOOST,
#line 2155
            .lvl = 79,
#line 2156
            .ball = BALL_MASTER,
#line 2158
            .friendship = 1,
#line 2160
            .nature = NATURE_ADAMANT,
#line 2157
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2161
                MOVE_WATERFALL,
                MOVE_CRUNCH,
                MOVE_PROTECT,
                MOVE_PSYCHIC_FANGS,
            },
            },
            {
#line 2166
            .species = SPECIES_HAWLUCHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2166
            .heldItem = ITEM_FIGHTING_GEM,
#line 2172
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2174
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2167
            .ability = ABILITY_UNBURDEN,
#line 2168
            .lvl = 80,
#line 2169
            .ball = BALL_MASTER,
#line 2171
            .friendship = 1,
#line 2173
            .nature = NATURE_ADAMANT,
#line 2170
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2174
                MOVE_FLYING_PRESS,
                MOVE_ACROBATICS,
                MOVE_ROCK_SLIDE,
                MOVE_U_TURN,
            },
            },
        },
    },
#line 2179
    [DIFFICULTY_NORMAL][TRAINER_BUZZR_CEO] =
    {
#line 2180
        .trainerName = _("Arribaceo"),
#line 2181
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
#line 2182
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2184
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2184
            .heldItem = ITEM_FLAME_ORB,
#line 2190
            .ev = TRAINER_PARTY_EVS(8, 248, 0, 252, 0, 0),
#line 2192
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2185
            .ability = ABILITY_GUTS,
#line 2186
            .lvl = 80,
#line 2187
            .ball = BALL_MASTER,
#line 2189
            .friendship = 1,
#line 2191
            .nature = NATURE_JOLLY,
#line 2188
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2192
                MOVE_FACADE,
                MOVE_DUAL_WINGBEAT,
                MOVE_PROTECT,
                MOVE_PARTING_SHOT,
            },
            },
            {
#line 2197
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2197
            .heldItem = ITEM_PSYCHIC_SEED,
#line 2203
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 60, 192, 4),
#line 2205
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2198
            .ability = ABILITY_ADAPTABILITY,
#line 2199
            .lvl = 79,
#line 2200
            .ball = BALL_MASTER,
#line 2202
            .friendship = 1,
#line 2204
            .nature = NATURE_MODEST,
#line 2201
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2206
                MOVE_TRI_ATTACK,
                MOVE_ICE_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_CONVERSION_2,
            },
            },
            {
#line 2211
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2211
            .heldItem = ITEM_FOCUS_SASH,
#line 2217
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2219
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2212
            .ability = ABILITY_SHARPNESS,
#line 2213
            .lvl = 79,
#line 2214
            .ball = BALL_MASTER,
#line 2216
            .friendship = 1,
#line 2218
            .nature = NATURE_JOLLY,
#line 2215
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2219
                MOVE_PSYCHO_CUT,
                MOVE_SACRED_SWORD,
                MOVE_LEAF_BLADE,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 2224
            .species = SPECIES_ARMAROUGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2224
            .heldItem = ITEM_PSYCHIC_GEM,
#line 2230
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 252, 204, 0),
#line 2232
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2225
            .ability = ABILITY_FLASH_FIRE,
#line 2226
            .lvl = 80,
#line 2227
            .ball = BALL_MASTER,
#line 2229
            .friendship = 1,
#line 2231
            .nature = NATURE_MODEST,
#line 2228
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2233
                MOVE_EXPANDING_FORCE,
                MOVE_ARMOR_CANNON,
                MOVE_ENERGY_BALL,
                MOVE_CALM_MIND,
            },
            },
        },
    },
#line 2238
    [DIFFICULTY_NORMAL][TRAINER_PRESTO_CEO] =
    {
#line 2239
        .trainerName = _("Buzzrceo"),
#line 2240
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
#line 2241
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2243
            .species = SPECIES_DRACOZOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2243
            .heldItem = ITEM_BLUNDER_POLICY,
#line 2249
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2251
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2244
            .ability = ABILITY_HUSTLE,
#line 2245
            .lvl = 80,
#line 2246
            .ball = BALL_MASTER,
#line 2248
            .friendship = 1,
#line 2250
            .nature = NATURE_JOLLY,
#line 2247
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2251
                MOVE_BOLT_BEAK,
                MOVE_DRAGON_CLAW,
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 2256
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2256
            .heldItem = ITEM_ELECTRIC_SEED,
#line 2262
            .ev = TRAINER_PARTY_EVS(252, 248, 4, 0, 0, 4),
#line 2264
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2257
            .ability = ABILITY_UNBURDEN,
#line 2258
            .lvl = 79,
#line 2259
            .ball = BALL_MASTER,
#line 2261
            .friendship = 1,
#line 2263
            .nature = NATURE_ADAMANT,
#line 2260
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2264
                MOVE_HIGH_JUMP_KICK,
                MOVE_BLAZE_KICK,
                MOVE_BULLET_PUNCH,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 2269
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2269
            .heldItem = ITEM_ASSAULT_VEST,
#line 2275
            .ev = TRAINER_PARTY_EVS(56, 252, 4, 192, 0, 4),
#line 2277
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2270
            .ability = ABILITY_TECHNICIAN,
#line 2271
            .lvl = 79,
#line 2272
            .ball = BALL_MASTER,
#line 2274
            .friendship = 1,
#line 2276
            .nature = NATURE_JOLLY,
#line 2273
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2277
                MOVE_BULLET_PUNCH,
                MOVE_BUG_BITE,
                MOVE_AERIAL_ACE,
                MOVE_U_TURN,
            },
            },
            {
#line 2282
            .species = SPECIES_VIKAVOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2282
            .heldItem = ITEM_ELECTRIC_GEM,
#line 2288
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
#line 2290
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2283
            .ability = ABILITY_LEVITATE,
#line 2284
            .lvl = 80,
#line 2285
            .ball = BALL_MASTER,
#line 2287
            .friendship = 1,
#line 2289
            .nature = NATURE_MODEST,
#line 2286
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2291
                MOVE_RISING_VOLTAGE,
                MOVE_BUG_BUZZ,
                MOVE_ROOST,
                MOVE_FLASH_CANNON,
            },
            },
        },
    },
#line 2296
    [DIFFICULTY_NORMAL][TRAINER_ARRIBA_CEO_RAID] =
    {
#line 2297
        .trainerName = _("Buzzrceo"),
#line 2298
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
#line 2299
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2301
            .species = SPECIES_REVAVROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2301
            .heldItem = ITEM_SHUCA_BERRY,
#line 2307
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2309
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2302
            .ability = ABILITY_FILTER,
#line 2303
            .lvl = 80,
#line 2304
            .ball = BALL_MASTER,
#line 2306
            .friendship = 1,
#line 2308
            .nature = NATURE_JOLLY,
#line 2305
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2309
                MOVE_SPIN_OUT,
                MOVE_GUNK_SHOT,
                MOVE_OVERHEAT,
                MOVE_SHIFT_GEAR,
            },
            },
            {
#line 2314
            .species = SPECIES_ROTOM_FAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2314
            .heldItem = ITEM_ASSAULT_VEST,
#line 2320
            .ev = TRAINER_PARTY_EVS(128, 0, 0, 128, 252, 0),
#line 2322
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2315
            .ability = ABILITY_LEVITATE,
#line 2316
            .lvl = 79,
#line 2317
            .ball = BALL_MASTER,
#line 2319
            .friendship = 1,
#line 2321
            .nature = NATURE_TIMID,
#line 2318
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2323
                MOVE_THUNDERBOLT,
                MOVE_AIR_SLASH,
                MOVE_VOLT_SWITCH,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 2328
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2328
            .heldItem = ITEM_FOCUS_SASH,
#line 2334
            .ev = TRAINER_PARTY_EVS(8, 248, 0, 252, 0, 0),
#line 2336
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2329
            .ability = ABILITY_SPEED_BOOST,
#line 2330
            .lvl = 79,
#line 2331
            .ball = BALL_MASTER,
#line 2333
            .friendship = 1,
#line 2335
            .nature = NATURE_ADAMANT,
#line 2332
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2336
                MOVE_WATERFALL,
                MOVE_CRUNCH,
                MOVE_PROTECT,
                MOVE_PSYCHIC_FANGS,
            },
            },
            {
#line 2341
            .species = SPECIES_HAWLUCHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2341
            .heldItem = ITEM_FIGHTING_GEM,
#line 2347
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2349
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2342
            .ability = ABILITY_UNBURDEN,
#line 2343
            .lvl = 80,
#line 2344
            .ball = BALL_MASTER,
#line 2346
            .friendship = 1,
#line 2348
            .nature = NATURE_ADAMANT,
#line 2345
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2349
                MOVE_FLYING_PRESS,
                MOVE_ACROBATICS,
                MOVE_ROCK_SLIDE,
                MOVE_U_TURN,
            },
            },
            {
#line 2354
            .species = SPECIES_PHEROMOSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2354
            .heldItem = ITEM_FIGHTINIUM_Z,
#line 2360
            .ev = TRAINER_PARTY_EVS(100, 28, 0, 128, 252, 0),
#line 2361
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2355
            .ability = ABILITY_SWIFT_ASCENT,
#line 2356
            .lvl = 81,
#line 2357
            .ball = BALL_MASTER,
#line 2359
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 2358
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2361
                MOVE_FOCUS_BLAST,
                MOVE_BUG_BUZZ,
                MOVE_ICE_BEAM,
                MOVE_CLOSE_COMBAT,
            },
            },
        },
    },
#line 2366
    [DIFFICULTY_NORMAL][TRAINER_BUZZR_CEO_RAID] =
    {
#line 2367
        .trainerName = _("Prestoceo"),
#line 2368
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
#line 2369
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2371
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2371
            .heldItem = ITEM_FLAME_ORB,
#line 2377
            .ev = TRAINER_PARTY_EVS(8, 248, 0, 252, 0, 0),
#line 2379
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2372
            .ability = ABILITY_GUTS,
#line 2373
            .lvl = 80,
#line 2374
            .ball = BALL_MASTER,
#line 2376
            .friendship = 1,
#line 2378
            .nature = NATURE_JOLLY,
#line 2375
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2379
                MOVE_FACADE,
                MOVE_DUAL_WINGBEAT,
                MOVE_PROTECT,
                MOVE_PARTING_SHOT,
            },
            },
            {
#line 2384
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2384
            .heldItem = ITEM_PSYCHIC_SEED,
#line 2390
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 60, 192, 4),
#line 2392
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2385
            .ability = ABILITY_ADAPTABILITY,
#line 2386
            .lvl = 79,
#line 2387
            .ball = BALL_MASTER,
#line 2389
            .friendship = 1,
#line 2391
            .nature = NATURE_MODEST,
#line 2388
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2393
                MOVE_TRI_ATTACK,
                MOVE_ICE_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_CONVERSION_2,
            },
            },
            {
#line 2398
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2398
            .heldItem = ITEM_FOCUS_SASH,
#line 2404
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2406
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2399
            .ability = ABILITY_SHARPNESS,
#line 2400
            .lvl = 79,
#line 2401
            .ball = BALL_MASTER,
#line 2403
            .friendship = 1,
#line 2405
            .nature = NATURE_JOLLY,
#line 2402
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2406
                MOVE_PSYCHO_CUT,
                MOVE_SACRED_SWORD,
                MOVE_LEAF_BLADE,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 2411
            .species = SPECIES_ARMAROUGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2411
            .heldItem = ITEM_PSYCHIC_GEM,
#line 2417
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 252, 204, 0),
#line 2419
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2412
            .ability = ABILITY_FLASH_FIRE,
#line 2413
            .lvl = 80,
#line 2414
            .ball = BALL_MASTER,
#line 2416
            .friendship = 1,
#line 2418
            .nature = NATURE_MODEST,
#line 2415
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2420
                MOVE_EXPANDING_FORCE,
                MOVE_ARMOR_CANNON,
                MOVE_ENERGY_BALL,
                MOVE_CALM_MIND,
            },
            },
            {
#line 2425
            .species = SPECIES_BLACEPHALON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2425
            .heldItem = ITEM_PSYCHIUM_Z,
#line 2431
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2433
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2426
            .ability = ABILITY_SWIFT_ASCENT,
#line 2427
            .lvl = 81,
#line 2428
            .ball = BALL_MASTER,
#line 2430
            .friendship = 1,
#line 2432
            .nature = NATURE_TIMID,
#line 2429
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2434
                MOVE_EXPANDING_FORCE,
                MOVE_SHADOW_BALL,
                MOVE_FLAMETHROWER,
                MOVE_MIND_BLOWN,
            },
            },
        },
    },
#line 2439
    [DIFFICULTY_NORMAL][TRAINER_PRESTO_CEO_RAID] =
    {
#line 2440
        .trainerName = _("Prestoceo"),
#line 2441
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
#line 2442
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2444
            .species = SPECIES_DRACOZOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2444
            .heldItem = ITEM_BLUNDER_POLICY,
#line 2450
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2452
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2445
            .ability = ABILITY_HUSTLE,
#line 2446
            .lvl = 80,
#line 2447
            .ball = BALL_MASTER,
#line 2449
            .friendship = 1,
#line 2451
            .nature = NATURE_JOLLY,
#line 2448
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2452
                MOVE_BOLT_BEAK,
                MOVE_DRAGON_CLAW,
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 2457
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2457
            .heldItem = ITEM_ELECTRIC_SEED,
#line 2463
            .ev = TRAINER_PARTY_EVS(252, 248, 4, 0, 0, 4),
#line 2465
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2458
            .ability = ABILITY_UNBURDEN,
#line 2459
            .lvl = 79,
#line 2460
            .ball = BALL_MASTER,
#line 2462
            .friendship = 1,
#line 2464
            .nature = NATURE_ADAMANT,
#line 2461
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2465
                MOVE_HIGH_JUMP_KICK,
                MOVE_BLAZE_KICK,
                MOVE_BULLET_PUNCH,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 2470
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2470
            .heldItem = ITEM_ASSAULT_VEST,
#line 2476
            .ev = TRAINER_PARTY_EVS(56, 252, 4, 192, 0, 4),
#line 2478
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2471
            .ability = ABILITY_TECHNICIAN,
#line 2472
            .lvl = 79,
#line 2473
            .ball = BALL_MASTER,
#line 2475
            .friendship = 1,
#line 2477
            .nature = NATURE_JOLLY,
#line 2474
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2478
                MOVE_BULLET_PUNCH,
                MOVE_BUG_BITE,
                MOVE_AERIAL_ACE,
                MOVE_U_TURN,
            },
            },
            {
#line 2483
            .species = SPECIES_VIKAVOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2483
            .heldItem = ITEM_ELECTRIC_GEM,
#line 2489
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
#line 2491
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2484
            .ability = ABILITY_LEVITATE,
#line 2485
            .lvl = 80,
#line 2486
            .ball = BALL_MASTER,
#line 2488
            .friendship = 1,
#line 2490
            .nature = NATURE_MODEST,
#line 2487
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2492
                MOVE_RISING_VOLTAGE,
                MOVE_BUG_BUZZ,
                MOVE_ROOST,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 2497
            .species = SPECIES_XURKITREE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2497
            .heldItem = ITEM_ELECTRIUM_Z,
#line 2503
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
#line 2505
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2498
            .ability = ABILITY_SWIFT_ASCENT,
#line 2499
            .lvl = 81,
#line 2500
            .ball = BALL_MASTER,
#line 2502
            .friendship = 1,
#line 2504
            .nature = NATURE_TIMID,
#line 2501
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2506
                MOVE_RISING_VOLTAGE,
                MOVE_DAZZLING_GLEAM,
                MOVE_ENERGY_BALL,
                MOVE_TAIL_GLOW,
            },
            },
        },
    },
#line 2511
    [DIFFICULTY_NORMAL][TRAINER_RAMESH_IMIN] =
    {
#line 2512
        .trainerName = _("Ramesh"),
#line 2516
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 2513
        .trainerPic = TRAINER_PIC_FRONT_MAGMA_ADMIN,
#line 2514
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2515
        .characterRevealId = REVEAL_RAMESH,
#line 2517
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2518
        .objectEventGraphicsId = OBJ_EVENT_GFX_RAMESH,
#line 2519
        .mapSec = MAPSEC_SHARPRISESPIRE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_MAGMA_ADMIN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2521
            .species = SPECIES_GHOLDENGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2521
            .heldItem = ITEM_STEEL_GEM,
#line 2527
            .ev = TRAINER_PARTY_EVS(248, 0, 96, 0, 0, 164),
#line 2529
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2522
            .ability = ABILITY_GOOD_AS_GOLD,
#line 2523
            .lvl = 84,
#line 2524
            .ball = BALL_MASTER,
#line 2526
            .friendship = 1,
#line 2528
            .nature = NATURE_BOLD,
#line 2525
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2530
                MOVE_MAKE_IT_RAIN,
                MOVE_SHADOW_BALL,
                MOVE_NASTY_PLOT,
                MOVE_RECOVER,
            },
            },
            {
#line 2535
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2535
            .heldItem = ITEM_FOCUS_SASH,
#line 2541
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2543
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2536
            .ability = ABILITY_LEVITATE,
#line 2537
            .lvl = 83,
#line 2538
            .ball = BALL_MASTER,
#line 2540
            .friendship = 1,
#line 2542
            .nature = NATURE_TIMID,
#line 2539
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2544
                MOVE_DARK_PULSE,
                MOVE_DRAGON_PULSE,
                MOVE_FLAMETHROWER,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 2549
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2549
            .heldItem = ITEM_ASSAULT_VEST,
#line 2555
            .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
#line 2557
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2550
            .ability = ABILITY_ROCK_HEAD,
#line 2551
            .lvl = 84,
#line 2552
            .ball = BALL_MASTER,
#line 2554
            .friendship = 1,
#line 2556
            .nature = NATURE_CAREFUL,
#line 2553
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2557
                MOVE_HEAD_SMASH,
                MOVE_LIQUIDATION,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 2562
            .species = SPECIES_BUZZWOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2562
            .heldItem = ITEM_BUGINIUM_Z,
#line 2568
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
#line 2570
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2563
            .ability = ABILITY_SWIFT_ASCENT,
#line 2564
            .lvl = 85,
#line 2565
            .ball = BALL_MASTER,
#line 2567
            .friendship = 1,
#line 2569
            .nature = NATURE_ADAMANT,
#line 2566
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2570
                MOVE_CLOSE_COMBAT,
                MOVE_LEECH_LIFE,
                MOVE_EARTHQUAKE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 2575
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2575
            .heldItem = ITEM_ALAKAZITE,
#line 2581
            .ev = TRAINER_PARTY_EVS(8, 0, 0, 248, 252, 0),
#line 2583
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2576
            .ability = ABILITY_SYNCHRONIZE,
#line 2577
            .lvl = 85,
#line 2578
            .ball = BALL_MASTER,
#line 2580
            .friendship = 1,
#line 2582
            .nature = NATURE_TIMID,
#line 2579
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2584
                MOVE_PSYCHIC,
                MOVE_DAZZLING_GLEAM,
                MOVE_SHADOW_BALL,
                MOVE_FOCUS_BLAST,
            },
            },
        },
    },
#line 2589
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE_IMIN] =
    {
#line 2590
        .trainerName = _("Charlotte"),
#line 2592
        .trainerClass = TRAINER_CLASS_CHARLOTTE,
#line 2591
        .trainerPic = TRAINER_PIC_FRONT_CHARLOTTE,
#line 2593
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2594
        .characterRevealId = REVEAL_CHARLOTTE,
#line 2595
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2596
        .objectEventGraphicsId = OBJ_EVENT_GFX_CHARLOTTE,
#line 2597
        .mapSec = MAPSEC_CRESALTA_VISTA,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_CHARLOTTE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2599
            .species = SPECIES_ARMAROUGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2599
            .heldItem = ITEM_WEAKNESS_POLICY,
#line 2605
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
#line 2607
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2600
            .ability = ABILITY_WEAK_ARMOR,
#line 2601
            .lvl = 85,
#line 2602
            .ball = BALL_MASTER,
#line 2604
            .friendship = 1,
#line 2606
            .nature = NATURE_TIMID,
#line 2603
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2608
                MOVE_ARMOR_CANNON,
                MOVE_PSYCHIC,
                MOVE_AURA_SPHERE,
                MOVE_ENERGY_BALL,
            },
            },
            {
#line 2613
            .species = SPECIES_HAXORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2613
            .heldItem = ITEM_ASSAULT_VEST,
#line 2619
            .ev = TRAINER_PARTY_EVS(152, 252, 4, 100, 0, 0),
#line 2621
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2614
            .ability = ABILITY_MOLD_BREAKER,
#line 2615
            .lvl = 86,
#line 2616
            .ball = BALL_MASTER,
#line 2618
            .friendship = 1,
#line 2620
            .nature = NATURE_ADAMANT,
#line 2617
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2621
                MOVE_DRAGON_CLAW,
                MOVE_IRON_HEAD,
                MOVE_FIRST_IMPRESSION,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 2626
            .species = SPECIES_CORVIKNIGHT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2626
            .heldItem = ITEM_WACAN_BERRY,
#line 2632
            .ev = TRAINER_PARTY_EVS(252, 100, 0, 100, 0, 56),
#line 2634
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2627
            .ability = ABILITY_MIRROR_ARMOR,
#line 2628
            .lvl = 85,
#line 2629
            .ball = BALL_MASTER,
#line 2631
            .friendship = 1,
#line 2633
            .nature = NATURE_ADAMANT,
#line 2630
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2634
                MOVE_IRON_HEAD,
                MOVE_BRAVE_BIRD,
                MOVE_BULK_UP,
                MOVE_POWER_TRIP,
            },
            },
            {
#line 2639
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2639
            .heldItem = ITEM_FAIRY_GEM,
#line 2645
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2647
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2640
            .ability = ABILITY_SYNCHRONIZE,
#line 2641
            .lvl = 86,
#line 2642
            .ball = BALL_MASTER,
#line 2644
            .friendship = 1,
#line 2646
            .nature = NATURE_TIMID,
#line 2643
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2648
                MOVE_MOONBLAST,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 2653
            .species = SPECIES_SERPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2653
            .heldItem = ITEM_GRASSIUM_Z,
#line 2659
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
#line 2661
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2654
            .ability = ABILITY_CONTRARY,
#line 2655
            .lvl = 86,
#line 2656
            .ball = BALL_MASTER,
#line 2658
            .friendship = 1,
#line 2660
            .nature = NATURE_QUIRKY,
#line 2657
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2661
                MOVE_LEAF_STORM,
                MOVE_AQUA_TAIL,
                MOVE_DRAGON_PULSE,
                MOVE_FRENZY_PLANT,
            },
            },
            {
#line 2667
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2673
            .ev = TRAINER_PARTY_EVS(176, 0, 0, 80, 252, 0),
#line 2675
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2668
            .ability = ABILITY_WATER_ABSORB,
#line 2669
            .lvl = 87,
#line 2670
            .ball = BALL_MASTER,
#line 2672
            .friendship = 1,
#line 2674
            .nature = NATURE_MODEST,
#line 2671
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2676
                MOVE_ICE_BEAM,
                MOVE_SPARKLING_ARIA,
                MOVE_THUNDERBOLT,
                MOVE_REST,
            },
            },
        },
    },
#line 2681
    [DIFFICULTY_NORMAL][TRAINER_LUCREZIA_A] =
    {
#line 2682
        .trainerName = _("Lucrezia"),
#line 2686
        .trainerClass = TRAINER_CLASS_SHARPRISE_CEO,
#line 2683
        .trainerPic = TRAINER_PIC_FRONT_LUCREZIA,
#line 2684
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2685
        .characterRevealId = REVEAL_LUCREZIA,
#line 2687
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2688
        .objectEventGraphicsId = OBJ_EVENT_GFX_LUCREZIA,
#line 2689
        .mapSec = MAPSEC_SHARPRISESPIRE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_LUCREZIA,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2691
            .species = SPECIES_SALAZZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2691
            .heldItem = ITEM_FOCUS_SASH,
#line 2697
            .ev = TRAINER_PARTY_EVS(8, 0, 0, 252, 248, 0),
#line 2699
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2692
            .ability = ABILITY_OBLIVIOUS,
#line 2693
            .lvl = 87,
#line 2694
            .ball = BALL_MASTER,
#line 2696
            .friendship = 1,
#line 2698
            .nature = NATURE_TIMID,
#line 2695
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2700
                MOVE_FLAMETHROWER,
                MOVE_SLUDGE_WAVE,
                MOVE_TOXIC_SPIKES,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 2705
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2705
            .heldItem = ITEM_CHOPLE_BERRY,
#line 2711
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 2713
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2706
            .ability = ABILITY_SAND_STREAM,
#line 2707
            .lvl = 86,
#line 2708
            .ball = BALL_MASTER,
#line 2710
            .friendship = 1,
#line 2712
            .nature = NATURE_ADAMANT,
#line 2709
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2713
                MOVE_ROCK_SLIDE,
                MOVE_CRUNCH,
                MOVE_IRON_HEAD,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 2718
            .species = SPECIES_ANNIHILAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2718
            .heldItem = ITEM_FIGHTING_GEM,
#line 2724
            .ev = TRAINER_PARTY_EVS(252, 144, 12, 96, 0, 4),
#line 2726
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2719
            .ability = ABILITY_DEFIANT,
#line 2720
            .lvl = 86,
#line 2721
            .ball = BALL_MASTER,
#line 2723
            .friendship = 1,
#line 2725
            .nature = NATURE_ADAMANT,
#line 2722
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2726
                MOVE_RAGE_FIST,
                MOVE_DRAIN_PUNCH,
                MOVE_BULK_UP,
                MOVE_CLOSE_COMBAT,
            },
            },
            {
#line 2731
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2731
            .heldItem = ITEM_SCOPE_LENS,
#line 2737
            .ev = TRAINER_PARTY_EVS(116, 0, 0, 248, 144, 0),
#line 2739
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2732
            .ability = ABILITY_SUPER_LUCK,
#line 2733
            .lvl = 87,
#line 2734
            .ball = BALL_MASTER,
#line 2736
            .friendship = 1,
#line 2738
            .nature = NATURE_TIMID,
#line 2735
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2740
                MOVE_AIR_SLASH,
                MOVE_DAZZLING_GLEAM,
                MOVE_HEAT_WAVE,
                MOVE_TAILWIND,
            },
            },
            {
#line 2745
            .species = SPECIES_ARCHALUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2745
            .heldItem = ITEM_DRAGONIUM_Z,
#line 2751
            .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 252, 0),
#line 2753
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2746
            .ability = ABILITY_STAMINA,
#line 2747
            .lvl = 88,
#line 2748
            .ball = BALL_MASTER,
#line 2750
            .friendship = 1,
#line 2752
            .nature = NATURE_BOLD,
#line 2749
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2754
                MOVE_DRACO_METEOR,
                MOVE_FLASH_CANNON,
                MOVE_BODY_PRESS,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 2760
            .species = SPECIES_ORBEETLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2766
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 8, 248, 0),
#line 2768
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2761
            .ability = ABILITY_FRISK,
#line 2762
            .lvl = 89,
#line 2763
            .ball = BALL_MASTER,
#line 2765
            .friendship = 1,
#line 2767
            .nature = NATURE_MODEST,
#line 2764
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2769
                MOVE_EXPANDING_FORCE,
                MOVE_BUG_BUZZ,
                MOVE_ENERGY_BALL,
                MOVE_AGILITY,
            },
            },
        },
    },
#line 2774
    [DIFFICULTY_NORMAL][TRAINER_LUCREZIA_B] =
    {
#line 2775
        .trainerName = _("Lucrezia"),
#line 2779
        .trainerClass = TRAINER_CLASS_SHARPRISE_CEO,
#line 2776
        .trainerPic = TRAINER_PIC_FRONT_LUCREZIA,
#line 2777
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2778
        .characterRevealId = REVEAL_LUCREZIA,
#line 2780
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2781
        .objectEventGraphicsId = OBJ_EVENT_GFX_LUCREZIA,
#line 2782
        .mapSec = MAPSEC_SHARPRISESPIRE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_LUCREZIA,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2784
            .species = SPECIES_NIHILEGO_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2784
            .heldItem = ITEM_POWER_HERB,
#line 2790
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2792
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2785
            .ability = ABILITY_SWIFT_ASCENT,
#line 2786
            .lvl = 90,
#line 2787
            .ball = BALL_MASTER,
#line 2789
            .friendship = 1,
#line 2791
            .nature = NATURE_TIMID,
#line 2788
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2793
                MOVE_POWER_GEM,
                MOVE_SLUDGE_WAVE,
                MOVE_DAZZLING_GLEAM,
                MOVE_METEOR_BEAM,
            },
            },
            {
#line 2798
            .species = SPECIES_CELESTEELA_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2798
            .heldItem = ITEM_LEFTOVERS,
#line 2804
            .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 0, 128),
#line 2805
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2799
            .ability = ABILITY_SWIFT_ASCENT,
#line 2800
            .lvl = 90,
#line 2801
            .ball = BALL_MASTER,
#line 2803
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 2802
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2805
                MOVE_HEAVY_SLAM,
                MOVE_LEECH_SEED,
                MOVE_PROTECT,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 2810
            .species = SPECIES_KARTANA_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2810
            .heldItem = ITEM_ASSAULT_VEST,
#line 2816
            .ev = TRAINER_PARTY_EVS(0, 8, 0, 252, 0, 248),
#line 2818
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2811
            .ability = ABILITY_SWIFT_ASCENT,
#line 2812
            .lvl = 90,
#line 2813
            .ball = BALL_MASTER,
#line 2815
            .friendship = 1,
#line 2817
            .nature = NATURE_ADAMANT,
#line 2814
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2818
                MOVE_LEAF_BLADE,
                MOVE_SMART_STRIKE,
                MOVE_SACRED_SWORD,
                MOVE_GUILLOTINE,
            },
            },
            {
#line 2823
            .species = SPECIES_GUZZLORD_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2823
            .heldItem = ITEM_ROSELI_BERRY,
#line 2829
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 4),
#line 2830
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 2824
            .ability = ABILITY_SWIFT_ASCENT,
#line 2825
            .lvl = 90,
#line 2826
            .ball = BALL_MASTER,
#line 2828
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 2827
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2831
                MOVE_DRAGON_PULSE,
                MOVE_DARK_PULSE,
                MOVE_FLAMETHROWER,
                MOVE_GYRO_BALL,
            },
            },
            {
#line 2836
            .species = SPECIES_NAGANADEL_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2836
            .heldItem = ITEM_POISONIUM_Z,
#line 2842
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2844
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2837
            .ability = ABILITY_SWIFT_ASCENT,
#line 2838
            .lvl = 90,
#line 2839
            .ball = BALL_MASTER,
#line 2841
            .friendship = 1,
#line 2843
            .nature = NATURE_TIMID,
#line 2840
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2845
                MOVE_SLUDGE_WAVE,
                MOVE_DRACO_METEOR,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 2850
            .species = SPECIES_STAKATAKA_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2850
            .heldItem = ITEM_SHUCA_BERRY,
#line 2856
            .ev = TRAINER_PARTY_EVS(252, 0, 96, 0, 0, 160),
#line 2858
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 2851
            .ability = ABILITY_SWIFT_ASCENT,
#line 2852
            .lvl = 90,
#line 2853
            .ball = BALL_MASTER,
#line 2855
            .friendship = 1,
#line 2857
            .nature = NATURE_CAREFUL,
#line 2854
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2859
                MOVE_GYRO_BALL,
                MOVE_STONE_EDGE,
                MOVE_BODY_PRESS,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 2864
    [DIFFICULTY_NORMAL][TRAINER_MAGNUS_PROLOGUE] =
    {
#line 2865
        .trainerName = _("Magnus"),
#line 2870
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 2866
        .trainerPic = TRAINER_PIC_FRONT_MAGNUS,
#line 2868
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2867
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2869
        .characterRevealId = REVEAL_MAGNUS,
#line 2871
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2872
        .objectEventGraphicsId = OBJ_EVENT_GFX_MAGNUS,
#line 2873
        .mapSec = MAPSEC_OROLAND_COLISEUM,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_MAGNUS,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2875
            .species = SPECIES_DRACOVISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2875
            .heldItem = ITEM_MYSTIC_WATER,
#line 2881
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2883
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2876
            .ability = ABILITY_SAND_RUSH,
#line 2877
            .lvl = 87,
#line 2878
            .ball = BALL_MASTER,
#line 2880
            .friendship = 1,
#line 2882
            .nature = NATURE_ADAMANT,
#line 2879
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2883
                MOVE_FISHIOUS_REND,
                MOVE_EARTHQUAKE,
                MOVE_DRAGON_RUSH,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 2888
            .species = SPECIES_SANDACONDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2888
            .heldItem = ITEM_SITRUS_BERRY,
#line 2894
            .ev = TRAINER_PARTY_EVS(252, 80, 0, 0, 0, 176),
#line 2896
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2889
            .ability = ABILITY_SAND_SPIT,
#line 2890
            .lvl = 88,
#line 2891
            .ball = BALL_MASTER,
#line 2893
            .friendship = 1,
#line 2895
            .nature = NATURE_CAREFUL,
#line 2892
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2896
                MOVE_HIGH_HORSEPOWER,
                MOVE_STONE_EDGE,
                MOVE_GLARE,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 2901
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2901
            .heldItem = ITEM_SCOPE_LENS,
#line 2907
            .ev = TRAINER_PARTY_EVS(156, 0, 0, 252, 100, 0),
#line 2909
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2902
            .ability = ABILITY_SUPER_LUCK,
#line 2903
            .lvl = 87,
#line 2904
            .ball = BALL_MASTER,
#line 2906
            .friendship = 1,
#line 2908
            .nature = NATURE_TIMID,
#line 2905
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2910
                MOVE_DAZZLING_GLEAM,
                MOVE_AIR_CUTTER,
                MOVE_TAILWIND,
                MOVE_FOLLOW_ME,
            },
            },
            {
#line 2915
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2915
            .heldItem = ITEM_FLYING_GEM,
#line 2921
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2923
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2916
            .ability = ABILITY_SAND_VEIL,
#line 2917
            .lvl = 87,
#line 2918
            .ball = BALL_MASTER,
#line 2920
            .friendship = 1,
#line 2922
            .nature = NATURE_JOLLY,
#line 2919
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2923
                MOVE_ACROBATICS,
                MOVE_HIGH_HORSEPOWER,
                MOVE_SWORDS_DANCE,
                MOVE_BRICK_BREAK,
            },
            },
            {
#line 2928
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2928
            .heldItem = ITEM_GROUNDIUM_Z,
#line 2934
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2936
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2929
            .ability = ABILITY_SAND_RUSH,
#line 2930
            .lvl = 88,
#line 2931
            .ball = BALL_MASTER,
#line 2933
            .friendship = 1,
#line 2935
            .nature = NATURE_ADAMANT,
#line 2932
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2936
                MOVE_DRILL_RUN,
                MOVE_IRON_HEAD,
                MOVE_ROCK_SLIDE,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 2941
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2941
            .heldItem = ITEM_TYRANITARITE,
#line 2947
            .ev = TRAINER_PARTY_EVS(252, 104, 0, 76, 0, 76),
#line 2949
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2942
            .ability = ABILITY_SAND_STREAM,
#line 2943
            .lvl = 89,
#line 2944
            .ball = BALL_MASTER,
#line 2946
            .friendship = 1,
#line 2948
            .nature = NATURE_ADAMANT,
#line 2945
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2949
                MOVE_ROCK_SLIDE,
                MOVE_ASSURANCE,
                MOVE_STONE_EDGE,
                MOVE_AERIAL_ACE,
            },
            },
        },
    },
#line 2954
    [DIFFICULTY_NORMAL][TRAINER_ELEANOR] =
    {
#line 2955
        .trainerName = _("Eleanor"),
#line 2956
        .trainerPic = TRAINER_PIC_FRONT_ELEANOR,
#line 2958
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2957
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2963
        .startingStatus = { .swampPlayer = TRUE, },
#line 2959
        .characterRevealId = REVEAL_ELEANOR,
#line 2960
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2961
        .objectEventGraphicsId = OBJ_EVENT_GFX_ELEANOR,
#line 2962
        .mapSec = MAPSEC_NAVAL_BASE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ELEANOR,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2965
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2965
            .heldItem = ITEM_SITRUS_BERRY,
#line 2971
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
#line 2973
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2966
            .ability = ABILITY_SERENE_GRACE,
#line 2967
            .lvl = 89,
#line 2968
            .ball = BALL_MASTER,
#line 2970
            .friendship = 1,
#line 2972
            .nature = NATURE_MODEST,
#line 2969
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2974
                MOVE_AIR_SLASH,
                MOVE_ANCIENT_POWER,
                MOVE_DAZZLING_GLEAM,
                MOVE_HEAT_WAVE,
            },
            },
            {
#line 2979
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2979
            .heldItem = ITEM_SWAMPERTITE,
#line 2985
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 2987
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2980
            .ability = ABILITY_TORRENT,
#line 2981
            .lvl = 91,
#line 2982
            .ball = BALL_MASTER,
#line 2984
            .friendship = 1,
#line 2986
            .nature = NATURE_ADAMANT,
#line 2983
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2987
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ICE_PUNCH,
                MOVE_WATERFALL,
            },
            },
            {
#line 2992
            .species = SPECIES_DHELMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2992
            .heldItem = ITEM_GRASSIUM_Z,
#line 2998
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3000
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2993
            .ability = ABILITY_STEELWORKER,
#line 2994
            .lvl = 89,
#line 2995
            .ball = BALL_MASTER,
#line 2997
            .friendship = 1,
#line 2999
            .nature = NATURE_JOLLY,
#line 2996
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3000
                MOVE_POWER_WHIP,
                MOVE_PHANTOM_FORCE,
                MOVE_ANCHOR_SHOT,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 3005
            .species = SPECIES_WYRDEER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3005
            .heldItem = ITEM_NORMAL_GEM,
#line 3011
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3013
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3006
            .ability = ABILITY_INTIMIDATE,
#line 3007
            .lvl = 90,
#line 3008
            .ball = BALL_MASTER,
#line 3010
            .friendship = 1,
#line 3012
            .nature = NATURE_ADAMANT,
#line 3009
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3013
                MOVE_BODY_SLAM,
                MOVE_BITE,
                MOVE_ZEN_HEADBUTT,
                MOVE_HIGH_HORSEPOWER,
            },
            },
            {
#line 3018
            .species = SPECIES_TOXAPEX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3018
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3024
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 3026
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3019
            .ability = ABILITY_MERCILESS,
#line 3020
            .lvl = 89,
#line 3021
            .ball = BALL_MASTER,
#line 3023
            .friendship = 1,
#line 3025
            .nature = NATURE_ADAMANT,
#line 3022
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3026
                MOVE_POISON_JAB,
                MOVE_LIQUIDATION,
                MOVE_TOXIC,
                MOVE_BANEFUL_BUNKER,
            },
            },
            {
#line 3031
            .species = SPECIES_ARCHALUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3031
            .heldItem = ITEM_ASSAULT_VEST,
#line 3037
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
#line 3039
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3032
            .ability = ABILITY_STAMINA,
#line 3033
            .lvl = 90,
#line 3034
            .ball = BALL_MASTER,
#line 3036
            .friendship = 1,
#line 3038
            .nature = NATURE_MODEST,
#line 3035
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3040
                MOVE_DRAGON_PULSE,
                MOVE_FLASH_CANNON,
                MOVE_BODY_PRESS,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 3045
    [DIFFICULTY_NORMAL][TRAINER_FRANK] =
    {
#line 3046
        .trainerName = _("Frank"),
#line 3047
        .trainerPic = TRAINER_PIC_FRONT_FRANK,
#line 3049
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3048
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3050
        .characterRevealId = REVEAL_FRANK,
#line 3051
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 3052
        .objectEventGraphicsId = OBJ_EVENT_GFX_FRANK,
#line 3053
        .mapSec = MAPSEC_LEAVERRA_FOREST,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_FRANK,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3055
            .species = SPECIES_SCOVILLAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3055
            .heldItem = ITEM_LIFE_ORB,
#line 3061
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 176, 232, 0),
#line 3063
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3056
            .ability = ABILITY_CHLOROPHYLL,
#line 3057
            .lvl = 87,
#line 3058
            .ball = BALL_MASTER,
#line 3060
            .friendship = 1,
#line 3062
            .nature = NATURE_MODEST,
#line 3059
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3064
                MOVE_FLAMETHROWER,
                MOVE_ENERGY_BALL,
                MOVE_WILL_O_WISP,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 3069
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3069
            .heldItem = ITEM_DRAGON_GEM,
#line 3075
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 3077
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3070
            .ability = ABILITY_LEVITATE,
#line 3071
            .lvl = 88,
#line 3072
            .ball = BALL_MASTER,
#line 3074
            .friendship = 1,
#line 3076
            .nature = NATURE_TIMID,
#line 3073
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3078
                MOVE_HEAT_WAVE,
                MOVE_DARK_PULSE,
                MOVE_DRACO_METEOR,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 3083
            .species = SPECIES_MUSHARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3083
            .heldItem = ITEM_LEFTOVERS,
#line 3089
            .ev = TRAINER_PARTY_EVS(252, 0, 220, 0, 0, 36),
#line 3091
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3084
            .ability = ABILITY_TELEPATHY,
#line 3085
            .lvl = 88,
#line 3086
            .ball = BALL_MASTER,
#line 3088
            .friendship = 1,
#line 3090
            .nature = NATURE_BOLD,
#line 3087
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3092
                MOVE_PSYCHIC,
                MOVE_DAZZLING_GLEAM,
                MOVE_CALM_MIND,
                MOVE_MOONLIGHT,
            },
            },
            {
#line 3097
            .species = SPECIES_URSALUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3097
            .heldItem = ITEM_FLAME_ORB,
#line 3103
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3105
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3098
            .ability = ABILITY_GUTS,
#line 3099
            .lvl = 87,
#line 3100
            .ball = BALL_MASTER,
#line 3102
            .friendship = 1,
#line 3104
            .nature = NATURE_ADAMANT,
#line 3101
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3105
                MOVE_FACADE,
                MOVE_EARTHQUAKE,
                MOVE_HEADLONG_RUSH,
                MOVE_PROTECT,
            },
            },
            {
#line 3110
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3110
            .heldItem = ITEM_FIRIUM_Z,
#line 3116
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 36, 220, 0),
#line 3118
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3111
            .ability = ABILITY_FLAME_BODY,
#line 3112
            .lvl = 88,
#line 3113
            .ball = BALL_MASTER,
#line 3115
            .friendship = 1,
#line 3117
            .nature = NATURE_MODEST,
#line 3114
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3119
                MOVE_OVERHEAT,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_SCORCHING_SANDS,
            },
            },
            {
#line 3125
            .species = SPECIES_CENTISKORCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3131
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3133
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3126
            .ability = ABILITY_WHITE_SMOKE,
#line 3127
            .lvl = 89,
#line 3128
            .ball = BALL_MASTER,
#line 3130
            .friendship = 1,
#line 3132
            .nature = NATURE_JOLLY,
#line 3129
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3133
                MOVE_FLARE_BLITZ,
                MOVE_FIRE_LASH,
                MOVE_LEECH_LIFE,
                MOVE_DRAGON_TAIL,
            },
            },
        },
    },
#line 3138
    [DIFFICULTY_NORMAL][TRAINER_KEI_YING] =
    {
#line 3139
        .trainerName = _("Kei-ying"),
#line 3143
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 3140
        .trainerPic = TRAINER_PIC_FRONT_KEI_YING,
#line 3142
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3141
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_KEI_YING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3145
            .species = SPECIES_URSHIFU_RAPID_STRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3145
            .heldItem = ITEM_URSHIFUNITE_RAPID,
#line 3151
            .ev = TRAINER_PARTY_EVS(140, 88, 4, 24, 0, 252),
#line 3153
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3146
            .ability = ABILITY_UNSEEN_FIST,
#line 3147
            .lvl = 88,
#line 3148
            .ball = BALL_MASTER,
#line 3150
            .friendship = 1,
#line 3152
            .nature = NATURE_ADAMANT,
#line 3149
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3153
                MOVE_SURGING_STRIKES,
                MOVE_CLOSE_COMBAT,
                MOVE_AQUA_JET,
                MOVE_BULK_UP,
            },
            },
            {
#line 3158
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3158
            .heldItem = ITEM_FLYING_GEM,
#line 3164
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 3166
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3159
            .ability = ABILITY_DRIZZLE,
#line 3160
            .lvl = 86,
#line 3161
            .ball = BALL_MASTER,
#line 3163
            .friendship = 1,
#line 3165
            .nature = NATURE_TIMID,
#line 3162
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3167
                MOVE_HURRICANE,
                MOVE_WEATHER_BALL,
                MOVE_TAILWIND,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3172
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3172
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3178
            .ev = TRAINER_PARTY_EVS(252, 112, 60, 24, 0, 60),
#line 3180
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3173
            .ability = ABILITY_DRY_SKIN,
#line 3174
            .lvl = 87,
#line 3175
            .ball = BALL_MASTER,
#line 3177
            .friendship = 1,
#line 3179
            .nature = NATURE_ADAMANT,
#line 3176
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3180
                MOVE_CLOSE_COMBAT,
                MOVE_POISON_JAB,
                MOVE_BULK_UP,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 3185
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3185
            .heldItem = ITEM_FIGHTINIUM_Z,
#line 3191
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 3193
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3186
            .ability = ABILITY_TECHNICIAN,
#line 3187
            .lvl = 86,
#line 3188
            .ball = BALL_MASTER,
#line 3190
            .friendship = 1,
#line 3192
            .nature = NATURE_ADAMANT,
#line 3189
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3193
                MOVE_BULLET_PUNCH,
                MOVE_BUG_BITE,
                MOVE_AERIAL_ACE,
                MOVE_CLOSE_COMBAT,
            },
            },
            {
#line 3198
            .species = SPECIES_PAWMOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3198
            .heldItem = ITEM_LIFE_ORB,
#line 3204
            .ev = TRAINER_PARTY_EVS(16, 240, 0, 252, 0, 0),
#line 3206
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3199
            .ability = ABILITY_IRON_FIST,
#line 3200
            .lvl = 87,
#line 3201
            .ball = BALL_MASTER,
#line 3203
            .friendship = 1,
#line 3205
            .nature = NATURE_JOLLY,
#line 3202
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3206
                MOVE_THUNDER_PUNCH,
                MOVE_CLOSE_COMBAT,
                MOVE_MACH_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3211
            .species = SPECIES_URSHIFU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3211
            .heldItem = ITEM_FOCUS_SASH,
#line 3217
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3219
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3212
            .ability = ABILITY_UNSEEN_FIST,
#line 3213
            .lvl = 88,
#line 3214
            .ball = BALL_MASTER,
#line 3216
            .friendship = 1,
#line 3218
            .nature = NATURE_JOLLY,
#line 3215
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3219
                MOVE_WICKED_BLOW,
                MOVE_CLOSE_COMBAT,
                MOVE_SUCKER_PUNCH,
                MOVE_POISON_JAB,
            },
            },
        },
    },
#line 3224
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_QIU] =
    {
#line 3225
        .trainerName = _("Melissa"),
#line 3226
        .trainerPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
#line 3228
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3227
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3230
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3232
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3231
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3233
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3235
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3234
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3236
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3238
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3237
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3239
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_CRESALTA] =
    {
#line 3240
        .trainerName = _("Melissa"),
#line 3241
        .trainerPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
#line 3243
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3242
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3245
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3247
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3246
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3248
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3250
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3249
            .lvl = 1,
            .ball = POKEBALL_COUNT,
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
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3254
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3256
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3255
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3257
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_HALAI] =
    {
#line 3258
        .trainerName = _("Melissa"),
#line 3259
        .trainerPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
#line 3261
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3260
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3263
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3265
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3264
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3266
            .species = SPECIES_FARIGIRAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3268
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3267
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3269
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3271
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3270
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3272
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3274
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3273
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3275
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_REMATCH] =
    {
#line 3276
        .trainerName = _("Melissa"),
#line 3277
        .trainerPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
#line 3279
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3278
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3281
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3283
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3282
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3284
            .species = SPECIES_FARIGIRAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3286
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3285
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3287
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3289
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3288
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3290
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3292
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3291
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3293
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3295
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3294
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3296
            .species = SPECIES_SCRAFTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3298
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3297
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3299
    [DIFFICULTY_NORMAL][TRAINER_MONTY] =
    {
#line 3300
        .trainerName = _("Monty"),
#line 3301
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3302
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3304
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3304
            .heldItem = ITEM_PUNCHING_GLOVE,
#line 3305
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3306
            .lvl = 20,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3307
                MOVE_UPPER_HAND,
                MOVE_FOCUS_PUNCH,
                MOVE_MACH_PUNCH,
            },
            },
        },
    },
#line 3311
    [DIFFICULTY_NORMAL][TRAINER_OLIVER] =
    {
#line 3312
        .trainerName = _("Oliver"),
#line 3313
        .trainerPic = TRAINER_PIC_FRONT_EXPERT_M,
#line 3315
        .isNative = TRUE,
#line 3314
        .characterRevealId = REVEAL_OLIVER,
#line 3316
        .objectEventGraphicsId = OBJ_EVENT_GFX_PROF_BIRCH,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_EXPERT_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3318
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3320
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3319
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3321
    [DIFFICULTY_NORMAL][TRAINER_00317DFA] =
    {
#line 3322
        .trainerName = _("00317DFA"),
#line 3323
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3326
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3324
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3327
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3325
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3329
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3332
            .ev = TRAINER_PARTY_EVS(0, 0, 156, 0, 0, 0),
#line 3334
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3330
            .ability = ABILITY_FRIEND_GUARD,
#line 3331
            .lvl = 19,
            .ball = POKEBALL_COUNT,
#line 3333
            .nature = NATURE_LAX,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3335
                MOVE_HELPING_HAND,
                MOVE_LIGHT_SCREEN,
                MOVE_ICY_WIND,
            },
            },
            {
#line 3339
            .species = SPECIES_SMOLIV,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3339
            .heldItem = ITEM_ORAN_BERRY,
#line 3342
            .ev = TRAINER_PARTY_EVS(144, 12, 0, 0, 0, 0),
#line 3344
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3340
            .ability = ABILITY_HARVEST,
#line 3341
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3343
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3345
                MOVE_LEECH_SEED,
                MOVE_CHARM,
                MOVE_RAZOR_LEAF,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 3350
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3353
            .ev = TRAINER_PARTY_EVS(0, 84, 0, 64, 0, 0),
#line 3355
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3351
            .ability = ABILITY_HUSTLE,
#line 3352
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3354
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3356
                MOVE_QUICK_ATTACK,
                MOVE_AIR_CUTTER,
                MOVE_POUNCE,
                MOVE_REVERSAL,
            },
            },
        },
    },
#line 3361
    [DIFFICULTY_NORMAL][TRAINER_0049EFE8] =
    {
#line 3362
        .trainerName = _("0049EFE8"),
#line 3363
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3364
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3366
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3365
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3368
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3368
            .heldItem = ITEM_CHARCOAL,
#line 3370
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 44, 56, 0),
#line 3372
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3369
            .ability = ABILITY_DROUGHT,
#line 3373
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3371
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3374
                MOVE_FIRE_SPIN,
                MOVE_FLAME_CHARGE,
                MOVE_WEATHER_BALL,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3379
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3379
            .heldItem = ITEM_PASSHO_BERRY,
#line 3381
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 100, 0, 0),
#line 3383
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3380
            .ability = ABILITY_FLAME_BODY,
#line 3384
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3382
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3385
                MOVE_BUG_BITE,
                MOVE_FLAME_WHEEL,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 3389
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3392
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3390
            .ability = ABILITY_FLAME_BODY,
#line 3393
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3391
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3394
                MOVE_WILL_O_WISP,
                MOVE_HEX,
                MOVE_FIRE_SPIN,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 3399
    [DIFFICULTY_NORMAL][TRAINER_023957DE] =
    {
#line 3400
        .trainerName = _("023957DE"),
#line 3401
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3402
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3404
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3403
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3406
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3406
            .heldItem = ITEM_ORAN_BERRY,
#line 3409
            .ev = TRAINER_PARTY_EVS(72, 0, 40, 0, 0, 40),
#line 3411
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3407
            .ability = ABILITY_SHED_SKIN,
#line 3408
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3410
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3412
                MOVE_THUNDER_WAVE,
                MOVE_DRAGON_TAIL,
                MOVE_SUPERSONIC,
                MOVE_SLAM,
            },
            },
            {
#line 3417
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3420
            .ev = TRAINER_PARTY_EVS(0, 148, 4, 0, 0, 0),
#line 3422
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3418
            .ability = ABILITY_HUSTLE,
#line 3419
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3421
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3423
                MOVE_BITE,
                MOVE_HEADBUTT,
                MOVE_DRAGON_TAIL,
            },
            },
            {
#line 3427
            .species = SPECIES_ZWEILOUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3430
            .ev = TRAINER_PARTY_EVS(0, 148, 0, 0, 0, 4),
#line 3432
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3428
            .ability = ABILITY_HUSTLE,
#line 3429
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3431
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3433
                MOVE_BITE,
                MOVE_FIRE_FANG,
                MOVE_THUNDER_FANG,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 3438
    [DIFFICULTY_NORMAL][TRAINER_006E7EFD] =
    {
#line 3439
        .trainerName = _("006E7EFD"),
#line 3440
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3441
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3443
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3442
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3445
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3448
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 100, 0, 0),
#line 3450
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3446
            .ability = ABILITY_INNER_FOCUS,
#line 3447
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3449
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3451
                MOVE_BATON_PASS,
                MOVE_SWORDS_DANCE,
                MOVE_VACUUM_WAVE,
                MOVE_METRONOME,
            },
            },
            {
#line 3456
            .species = SPECIES_PAWMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3459
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 100, 0, 0),
#line 3461
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3457
            .ability = ABILITY_IRON_FIST,
#line 3458
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3460
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3462
                MOVE_BATON_PASS,
                MOVE_MACH_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_AGILITY,
            },
            },
            {
#line 3467
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3467
            .heldItem = ITEM_FOCUS_SASH,
#line 3470
            .ev = TRAINER_PARTY_EVS(72, 0, 36, 0, 0, 36),
#line 3472
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3468
            .ability = ABILITY_RECKLESS,
#line 3469
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3471
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3473
                MOVE_HIGH_JUMP_KICK,
                MOVE_DETECT,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
        },
    },
#line 3478
    [DIFFICULTY_NORMAL][TRAINER_007F06A5] =
    {
#line 3479
        .trainerName = _("007F06A5"),
#line 3480
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3481
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3483
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3482
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3485
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3485
            .heldItem = ITEM_SITRUS_BERRY,
#line 3488
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3486
            .ability = ABILITY_TORRENT,
#line 3487
            .lvl = 20,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3489
                MOVE_MIRROR_COAT,
                MOVE_MUDDY_WATER,
                MOVE_COUNTER,
            },
            },
            {
#line 3493
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3496
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3494
            .ability = ABILITY_OWN_TEMPO,
#line 3495
            .lvl = 24,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3497
                MOVE_LIGHT_SCREEN,
                MOVE_RAIN_DANCE,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 3501
            .species = SPECIES_ARROKUDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3501
            .heldItem = ITEM_METRONOME,
#line 3504
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3502
            .ability = ABILITY_PROPELLER_TAIL,
#line 3503
            .lvl = 24,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3504
                MOVE_AQUA_JET,
            },
            },
        },
    },
#line 3506
    [DIFFICULTY_NORMAL][TRAINER_01103D48] =
    {
#line 3507
        .trainerName = _("01103D48"),
#line 3508
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3512
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3509
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3511
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3510
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3514
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3517
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 144, 0),
#line 3519
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3515
            .ability = ABILITY_PICKUP,
#line 3516
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 3518
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3520
                MOVE_FOLLOW_ME,
                MOVE_CHARGE_BEAM,
                MOVE_THIEF,
                MOVE_MUD_SHOT,
            },
            },
            {
#line 3525
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3525
            .heldItem = ITEM_ORAN_BERRY,
#line 3528
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 64, 80, 0),
#line 3530
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3526
            .ability = ABILITY_WIND_POWER,
#line 3527
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3529
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3531
                MOVE_TAILWIND,
                MOVE_ROOST,
                MOVE_PLUCK,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 3536
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3536
            .heldItem = ITEM_MAGNET,
#line 3539
            .ev = TRAINER_PARTY_EVS(44, 56, 0, 44, 0, 0),
#line 3540
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3537
            .ability = ABILITY_INTIMIDATE,
#line 3538
            .lvl = 21,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3541
                MOVE_BITE,
                MOVE_CHARGE,
                MOVE_SPARK,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 3546
    [DIFFICULTY_NORMAL][TRAINER_0272920D] =
    {
#line 3547
        .trainerName = _("0272920D"),
#line 3548
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3549
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3551
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3550
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3553
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3553
            .heldItem = ITEM_ROCKY_HELMET,
#line 3556
            .ev = TRAINER_PARTY_EVS(0, 116, 0, 28, 0, 0),
#line 3558
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3554
            .ability = ABILITY_ROUGH_SKIN,
#line 3555
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3557
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3559
                MOVE_AQUA_JET,
                MOVE_BITE,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 3563
            .species = SPECIES_THIEVUL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3566
            .ev = TRAINER_PARTY_EVS(36, 0, 32, 24, 32, 24),
#line 3568
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3564
            .ability = ABILITY_UNBURDEN,
#line 3565
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 3567
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3569
                MOVE_NASTY_PLOT,
                MOVE_SNARL,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3573
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3573
            .heldItem = ITEM_MENTAL_HERB,
#line 3576
            .ev = TRAINER_PARTY_EVS(56, 0, 56, 0, 0, 40),
#line 3578
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3574
            .ability = ABILITY_PRANKSTER,
#line 3575
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3577
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3579
                MOVE_HAZE,
                MOVE_WING_ATTACK,
                MOVE_TAUNT,
                MOVE_THIEF,
            },
            },
        },
    },
#line 3584
    [DIFFICULTY_NORMAL][TRAINER_022A53A0] =
    {
#line 3585
        .trainerName = _("022A53A0"),
#line 3586
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3590
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3587
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3589
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3588
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3592
            .species = SPECIES_KRICKETUNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3592
            .heldItem = ITEM_FOCUS_BAND,
#line 3595
            .ev = TRAINER_PARTY_EVS(28, 24, 36, 44, 0, 24),
#line 3597
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3593
            .ability = ABILITY_SWARM,
#line 3594
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3596
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3598
                MOVE_SING,
                MOVE_STICKY_WEB,
                MOVE_LEECH_LIFE,
            },
            },
            {
#line 3602
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3602
            .heldItem = ITEM_FOCUS_BAND,
#line 3605
            .ev = TRAINER_PARTY_EVS(68, 20, 68, 0, 0, 0),
#line 3607
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3603
            .ability = ABILITY_SWARM,
#line 3604
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 3606
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3608
                MOVE_RAZOR_LEAF,
                MOVE_STRUGGLE_BUG,
                MOVE_ELECTROWEB,
            },
            },
            {
#line 3612
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3612
            .heldItem = ITEM_SILVER_POWDER,
#line 3615
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 152, 0, 0),
#line 3617
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3613
            .ability = ABILITY_SWARM,
#line 3614
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3616
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3618
                MOVE_NIGHT_SHADE,
                MOVE_FELL_STINGER,
                MOVE_BUG_BITE,
            },
            },
        },
    },
#line 3624
    [DIFFICULTY_NORMAL][TRAINER_012ED80D] =
    {
#line 3625
        .trainerName = _("012ED80D"),
#line 3626
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3627
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3629
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3628
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3631
            .species = SPECIES_MUDBRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3634
            .ev = TRAINER_PARTY_EVS(0, 24, 128, 0, 0, 0),
#line 3636
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3632
            .ability = ABILITY_STAMINA,
#line 3633
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3635
            .nature = NATURE_LAX,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3637
                MOVE_STRENGTH,
                MOVE_COUNTER,
                MOVE_BULLDOZE,
                MOVE_DOUBLE_KICK,
            },
            },
            {
#line 3642
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3645
            .ev = TRAINER_PARTY_EVS(0, 136, 0, 0, 0, 0),
#line 3647
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3643
            .ability = ABILITY_SAND_FORCE,
#line 3644
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3646
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3648
                MOVE_SANDSTORM,
                MOVE_METAL_CLAW,
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3653
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3656
            .ev = TRAINER_PARTY_EVS(0, 76, 0, 0, 72, 0),
#line 3658
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3654
            .ability = ABILITY_SIMPLE,
#line 3655
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3657
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3659
                MOVE_INCINERATE,
                MOVE_BULLDOZE,
                MOVE_FOCUS_ENERGY,
            },
            },
        },
    },
#line 3663
    [DIFFICULTY_NORMAL][TRAINER_01E6E96E] =
    {
#line 3664
        .trainerName = _("01E6E96E"),
#line 3665
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3669
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3666
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3668
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3667
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3671
            .species = SPECIES_MINIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3671
            .heldItem = ITEM_POWER_HERB,
#line 3674
            .ev = TRAINER_PARTY_EVS(0, 92, 0, 0, 56, 0),
#line 3676
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3672
            .ability = ABILITY_SHIELDS_DOWN,
#line 3673
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3675
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3677
                MOVE_METEOR_BEAM,
                MOVE_ROLLOUT,
                MOVE_ACROBATICS,
                MOVE_U_TURN,
            },
            },
            {
#line 3682
            .species = SPECIES_VIVILLON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3682
            .heldItem = ITEM_MENTAL_HERB,
#line 3685
            .ev = TRAINER_PARTY_EVS(80, 0, 0, 68, 0, 0),
#line 3687
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3683
            .ability = ABILITY_FRIEND_GUARD,
#line 3684
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3686
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3688
                MOVE_SWIFT,
                MOVE_U_TURN,
                MOVE_STUN_SPORE,
                MOVE_TAILWIND,
            },
            },
            {
#line 3693
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3693
            .heldItem = ITEM_SILK_SCARF,
#line 3696
            .ev = TRAINER_PARTY_EVS(0, 148, 0, 0, 0, 0),
#line 3698
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3694
            .ability = ABILITY_SCRAPPY,
#line 3695
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3697
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3699
                MOVE_RAGE,
                MOVE_RETURN,
                MOVE_AERIAL_ACE,
                MOVE_U_TURN,
            },
            },
        },
    },
#line 3704
    [DIFFICULTY_NORMAL][TRAINER_0092D526] =
    {
#line 3705
        .trainerName = _("0092D526"),
#line 3706
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3710
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3707
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3709
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3708
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3712
            .species = SPECIES_BOUNSWEET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3715
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 60, 96, 0),
#line 3717
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3713
            .ability = ABILITY_LEAF_GUARD,
#line 3714
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3716
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3718
                MOVE_MAGICAL_LEAF,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 3721
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3721
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3724
            .ev = TRAINER_PARTY_EVS(0, 0, 84, 0, 0, 64),
#line 3725
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3722
            .ability = ABILITY_EFFECT_SPORE,
#line 3723
            .lvl = 20,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3726
                MOVE_RAGE_POWDER,
                MOVE_POISON_POWDER,
                MOVE_VENOSHOCK,
                MOVE_STUN_SPORE,
            },
            },
            {
#line 3731
            .species = SPECIES_CAPSAKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3734
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 156, 0),
#line 3736
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3732
            .ability = ABILITY_CHLOROPHYLL,
#line 3733
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3735
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3737
                MOVE_MAGICAL_LEAF,
                MOVE_GROWTH,
                MOVE_INGRAIN,
            },
            },
        },
    },
#line 3741
    [DIFFICULTY_NORMAL][TRAINER_00C593A8] =
    {
#line 3742
        .trainerName = _("00C593A8"),
#line 3743
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3747
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3744
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3746
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3745
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3749
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3749
            .heldItem = ITEM_WACAN_BERRY,
#line 3752
            .ev = TRAINER_PARTY_EVS(64, 84, 0, 0, 0, 0),
#line 3754
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3750
            .ability = ABILITY_ICE_BODY,
#line 3751
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3753
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3755
                MOVE_ROLLOUT,
                MOVE_SNOWSCAPE,
                MOVE_ICE_BALL,
            },
            },
            {
#line 3759
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3759
            .heldItem = ITEM_METRONOME,
#line 3762
            .ev = TRAINER_PARTY_EVS(44, 100, 0, 0, 0, 0),
#line 3764
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3760
            .ability = ABILITY_ICE_BODY,
#line 3761
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 3763
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3765
                MOVE_SNOWSCAPE,
                MOVE_ROLLOUT,
                MOVE_ICE_BALL,
            },
            },
            {
#line 3769
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3772
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 0, 104, 0),
#line 3774
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3770
            .ability = ABILITY_OBLIVIOUS,
#line 3771
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 3773
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3775
                MOVE_PSYCHIC_NOISE,
                MOVE_CONFUSION,
                MOVE_ICY_WIND,
            },
            },
        },
    },
#line 3779
    [DIFFICULTY_NORMAL][TRAINER_01E7C79B] =
    {
#line 3780
        .trainerName = _("01E7C79B"),
#line 3781
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3782
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3784
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3783
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3786
            .species = SPECIES_DOTTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3789
            .ev = TRAINER_PARTY_EVS(0, 0, 88, 0, 0, 64),
#line 3791
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3787
            .ability = ABILITY_SWARM,
#line 3788
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3790
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3792
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_CONFUSION,
                MOVE_STRUGGLE_BUG,
            },
            },
            {
#line 3797
            .species = SPECIES_HATENNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3797
            .heldItem = ITEM_TWISTED_SPOON,
#line 3800
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 88, 56, 0),
#line 3802
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3798
            .ability = ABILITY_ANTICIPATION,
#line 3799
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 3801
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3803
                MOVE_PSYBEAM,
                MOVE_DISARMING_VOICE,
                MOVE_NUZZLE,
            },
            },
            {
#line 3807
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3810
            .ev = TRAINER_PARTY_EVS(0, 92, 40, 0, 0, 24),
#line 3812
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3808
            .ability = ABILITY_PURE_POWER,
#line 3809
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 3811
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3813
                MOVE_ZEN_HEADBUTT,
                MOVE_FORCE_PALM,
                MOVE_WORK_UP,
            },
            },
        },
    },
#line 3817
    [DIFFICULTY_NORMAL][TRAINER_01C7AF3F] =
    {
#line 3818
        .trainerName = _("01C7AF3F"),
#line 3819
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3823
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3820
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3822
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3821
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3825
            .nickname = COMPOUND_STRING("Flabebe"),
#line 3825
            .species = SPECIES_FLABEBE_YELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3825
            .heldItem = ITEM_ORAN_BERRY,
#line 3828
            .ev = TRAINER_PARTY_EVS(0, 0, 52, 0, 0, 96),
#line 3830
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 3826
            .ability = ABILITY_SYMBIOSIS,
#line 3827
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 3829
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3831
                MOVE_TEARFUL_LOOK,
                MOVE_DISARMING_VOICE,
                MOVE_MAGICAL_LEAF,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 3836
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3839
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 36, 116, 0),
#line 3841
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3837
            .ability = ABILITY_TRACE,
#line 3838
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3840
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3842
                MOVE_DISARMING_VOICE,
                MOVE_PSYBEAM,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 3846
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3846
            .heldItem = ITEM_SITRUS_BERRY,
#line 3849
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 88, 64, 0),
#line 3851
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3847
            .ability = ABILITY_TRACE,
#line 3848
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3850
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3852
                MOVE_DISARMING_VOICE,
                MOVE_PSYBEAM,
                MOVE_LIFE_DEW,
            },
            },
        },
    },
#line 3858
    [DIFFICULTY_NORMAL][TRAINER_02EEB783] =
    {
#line 3859
        .trainerName = _("02EEB783"),
#line 3860
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3864
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3861
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3863
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3862
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3866
            .species = SPECIES_YAMASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3869
            .ev = TRAINER_PARTY_EVS(80, 0, 0, 0, 76, 0),
#line 3871
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3867
            .ability = ABILITY_MUMMY,
#line 3868
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3870
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3872
                MOVE_WILL_O_WISP,
                MOVE_PROTECT,
                MOVE_HEX,
            },
            },
            {
#line 3876
            .species = SPECIES_HONEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3876
            .heldItem = ITEM_OCCA_BERRY,
#line 3879
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 144),
#line 3881
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3877
            .ability = ABILITY_NO_GUARD,
#line 3878
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3880
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3882
                MOVE_AERIAL_ACE,
                MOVE_SHADOW_SNEAK,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 3886
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3889
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 96, 48),
#line 3891
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3887
            .ability = ABILITY_LEVITATE,
#line 3888
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3890
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3892
                MOVE_CHARGE,
                MOVE_THUNDER_SHOCK,
                MOVE_ASTONISH,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 3897
    [DIFFICULTY_NORMAL][TRAINER_026E91A6] =
    {
#line 3898
        .trainerName = _("026E91A6"),
#line 3899
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3903
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3900
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3902
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3901
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3905
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3905
            .heldItem = ITEM_SITRUS_BERRY,
#line 3908
            .ev = TRAINER_PARTY_EVS(0, 0, 144, 0, 0, 0),
#line 3910
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3906
            .ability = ABILITY_ROCK_HEAD,
#line 3907
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3909
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3911
                MOVE_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_ROCK_TOMB,
                MOVE_ROAR,
            },
            },
            {
#line 3916
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3916
            .heldItem = ITEM_GANLON_BERRY,
#line 3919
            .ev = TRAINER_PARTY_EVS(0, 0, 4, 0, 104, 48),
#line 3921
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 3917
            .ability = ABILITY_CLEAR_BODY,
#line 3918
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 3920
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3922
                MOVE_METAL_SOUND,
                MOVE_CHARGE_BEAM,
                MOVE_SANDSTORM,
            },
            },
            {
#line 3926
            .species = SPECIES_VAROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3929
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 152, 0),
#line 3931
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3927
            .ability = ABILITY_OVERCOAT,
#line 3928
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3930
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3932
                MOVE_SLUDGE,
                MOVE_GYRO_BALL,
                MOVE_HEADBUTT,
                MOVE_LICK,
            },
            },
        },
    },
#line 3937
    [DIFFICULTY_NORMAL][TRAINER_029E0EF0] =
    {
#line 3938
        .trainerName = _("029E0EF0"),
#line 3939
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3940
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3942
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3941
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3944
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3947
            .ev = TRAINER_PARTY_EVS(0, 96, 16, 0, 0, 32),
#line 3949
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3945
            .ability = ABILITY_POISON_POINT,
#line 3946
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3948
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3950
                MOVE_TOXIC_SPIKES,
                MOVE_DIG,
                MOVE_POISON_STING,
                MOVE_TRAILBLAZE,
            },
            },
            {
#line 3955
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3958
            .ev = TRAINER_PARTY_EVS(24, 0, 0, 0, 120, 0),
#line 3960
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3956
            .ability = ABILITY_CLEAR_BODY,
#line 3957
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3959
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3961
                MOVE_BUBBLE_BEAM,
                MOVE_ACID_SPRAY,
                MOVE_TOXIC,
            },
            },
            {
#line 3965
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3965
            .heldItem = ITEM_SITRUS_BERRY,
#line 3968
            .ev = TRAINER_PARTY_EVS(80, 72, 0, 0, 0, 0),
#line 3970
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3966
            .ability = ABILITY_GLUTTONY,
#line 3967
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 3969
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3971
                MOVE_AMNESIA,
                MOVE_ACID_ARMOR,
                MOVE_ENCORE,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
#line 3976
    [DIFFICULTY_NORMAL][TRAINER_00E46F7D] =
    {
#line 3977
        .trainerName = _("00E46F7D"),
#line 3978
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3982
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3979
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3981
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3980
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3984
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3987
            .ev = TRAINER_PARTY_EVS(12, 92, 32, 0, 0, 12),
#line 3989
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3985
            .ability = ABILITY_SHED_SKIN,
#line 3986
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 3988
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3990
                MOVE_STOMPING_TANTRUM,
                MOVE_ROCK_SLIDE,
                MOVE_PAYBACK,
            },
            },
            {
#line 3994
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3997
            .ev = TRAINER_PARTY_EVS(0, 36, 0, 112, 0, 0),
#line 3999
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3995
            .ability = ABILITY_WEAK_ARMOR,
#line 3996
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3998
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4000
                MOVE_AQUA_JET,
                MOVE_ABSORB,
                MOVE_ROCK_TOMB,
                MOVE_PROTECT,
            },
            },
            {
#line 4005
            .species = SPECIES_TYRUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4005
            .heldItem = ITEM_HARD_STONE,
#line 4008
            .ev = TRAINER_PARTY_EVS(0, 72, 80, 0, 0, 0),
#line 4010
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4006
            .ability = ABILITY_STURDY,
#line 4007
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4009
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4011
                MOVE_DRAGON_TAIL,
                MOVE_BITE,
                MOVE_ANCIENT_POWER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 4016
    [DIFFICULTY_NORMAL][TRAINER_032E8AC9] =
    {
#line 4017
        .trainerName = _("032E8AC9"),
#line 4018
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4019
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4021
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4020
        .mapSec = MAPSEC_MERMEREZA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4023
            .species = SPECIES_SHROODLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4023
            .heldItem = ITEM_BIG_NUGGET,
#line 4026
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 128, 0, 0),
#line 4028
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4024
            .ability = ABILITY_UNBURDEN,
#line 4025
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 4027
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4029
                MOVE_FLING,
                MOVE_ACROBATICS,
                MOVE_BATON_PASS,
            },
            },
            {
#line 4033
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4033
            .heldItem = ITEM_ASPEAR_BERRY,
#line 4036
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 136, 0, 0),
#line 4038
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4034
            .ability = ABILITY_FLASH_FIRE,
#line 4035
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4037
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4039
                MOVE_TRICK,
                MOVE_POLTERGEIST,
                MOVE_BITTER_BLADE,
                MOVE_DESTINY_BOND,
            },
            },
        },
    },
#line 4044
    [DIFFICULTY_NORMAL][TRAINER_0389363C] =
    {
#line 4045
        .trainerName = _("0389363C"),
#line 4046
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4048
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4047
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_WEIGH_ABILITY_PREDICTION | AI_FLAG_PREDICT_SWITCH | AI_FLAG_PREDICT_INCOMING_MON | AI_FLAG_PP_STALL_PREVENTION | AI_FLAG_PREDICT_MOVE,
#line 4050
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4049
        .mapSec = MAPSEC_MERMEREZA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4052
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4052
            .heldItem = ITEM_FIGY_BERRY,
#line 4055
            .ev = TRAINER_PARTY_EVS(0, 132, 0, 0, 0, 0),
#line 4057
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4053
            .ability = ABILITY_GLUTTONY,
#line 4054
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 4056
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4058
                MOVE_BELLY_DRUM,
                MOVE_SNORE,
                MOVE_REST,
                MOVE_SLASH,
            },
            },
        },
    },
#line 4063
    [DIFFICULTY_NORMAL][TRAINER_040CEA33] =
    {
#line 4064
        .trainerName = _("040CEA33"),
#line 4065
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4067
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_WEIGH_ABILITY_PREDICTION | AI_FLAG_PREDICT_SWITCH | AI_FLAG_PREDICT_INCOMING_MON | AI_FLAG_PP_STALL_PREVENTION | AI_FLAG_PREDICT_MOVE,
#line 4066
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4068
        .mapSec = MAPSEC_MERMEREZA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4070
            .species = SPECIES_PALPITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4070
            .heldItem = ITEM_RINDO_BERRY,
#line 4073
            .ev = TRAINER_PARTY_EVS(0, 0, 96, 0, 0, 28),
#line 4075
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4071
            .ability = ABILITY_SWIFT_SWIM,
#line 4072
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4074
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4076
                MOVE_RAIN_DANCE,
                MOVE_MUD_SHOT,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 4080
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4080
            .heldItem = ITEM_CHOPLE_BERRY,
#line 4083
            .ev = TRAINER_PARTY_EVS(0, 0, 68, 0, 0, 56),
#line 4085
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4081
            .ability = ABILITY_STENCH,
#line 4082
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 4084
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4086
                MOVE_TOXIC_SPIKES,
                MOVE_VENOSHOCK,
                MOVE_BODY_SLAM,
            },
            },
        },
    },
#line 4090
    [DIFFICULTY_NORMAL][TRAINER_031A849F] =
    {
#line 4091
        .trainerName = _("031A849F"),
#line 4092
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4096
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4093
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4095
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4094
        .mapSec = MAPSEC_TORA_TOWN,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4098
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4098
            .heldItem = ITEM_TWISTED_SPOON,
#line 4101
            .ev = TRAINER_PARTY_EVS(0, 64, 0, 0, 64, 0),
#line 4103
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4099
            .ability = ABILITY_PRANKSTER,
#line 4100
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4102
            .nature = NATURE_DOCILE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4104
                MOVE_TAILWIND,
                MOVE_DUAL_WINGBEAT,
                MOVE_HEAT_WAVE,
            },
            },
            {
#line 4108
            .species = SPECIES_INKAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4108
            .heldItem = ITEM_ROSELI_BERRY,
#line 4111
            .ev = TRAINER_PARTY_EVS(0, 64, 0, 0, 64, 0),
#line 4113
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4109
            .ability = ABILITY_CONTRARY,
#line 4110
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4112
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4114
                MOVE_PSYBEAM,
                MOVE_ROCK_SLIDE,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 4118
            .species = SPECIES_LOKIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4118
            .heldItem = ITEM_CHOPLE_BERRY,
#line 4121
            .ev = TRAINER_PARTY_EVS(0, 128, 0, 0, 0, 0),
#line 4123
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4119
            .ability = ABILITY_TINTED_LENS,
#line 4120
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4122
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4124
                MOVE_AERIAL_ACE,
                MOVE_TRAILBLAZE,
            },
            },
        },
    },
#line 4127
    [DIFFICULTY_NORMAL][TRAINER_045FDD44] =
    {
#line 4128
        .trainerName = _("045FDD44"),
#line 4129
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4132
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4130
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4131
        .mapSec = MAPSEC_TORA_TOWN,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4134
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4134
            .heldItem = ITEM_SHUCA_BERRY,
#line 4137
            .ev = TRAINER_PARTY_EVS(0, 0, 84, 0, 0, 40),
#line 4139
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4135
            .ability = ABILITY_EFFECT_SPORE,
#line 4136
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4138
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4140
                MOVE_POISON_POWDER,
                MOVE_STUN_SPORE,
                MOVE_POLLEN_PUFF,
            },
            },
            {
#line 4144
            .species = SPECIES_VAROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4144
            .heldItem = ITEM_PAYAPA_BERRY,
#line 4147
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 4149
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4145
            .ability = ABILITY_OVERCOAT,
#line 4146
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4148
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4150
                MOVE_TOXIC_SPIKES,
                MOVE_TOXIC,
                MOVE_VENOSHOCK,
            },
            },
            {
#line 4154
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4154
            .heldItem = ITEM_SPELL_TAG,
#line 4157
            .ev = TRAINER_PARTY_EVS(0, 60, 52, 0, 0, 20),
#line 4159
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4155
            .ability = ABILITY_SWARM,
#line 4156
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4158
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4160
                MOVE_HEX,
                MOVE_LEECH_LIFE,
            },
            },
        },
    },
#line 4163
    [DIFFICULTY_NORMAL][TRAINER_041FD20E] =
    {
#line 4164
        .trainerName = _("041FD20E"),
#line 4165
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4168
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4166
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4167
        .mapSec = MAPSEC_TORA_TOWN,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4170
            .species = SPECIES_MAREANIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4170
            .heldItem = ITEM_MYSTIC_WATER,
#line 4173
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 136),
#line 4175
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4171
            .ability = ABILITY_LIMBER,
#line 4172
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4174
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4176
                MOVE_LIQUIDATION,
                MOVE_ICE_SPINNER,
            },
            },
            {
#line 4179
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4179
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 4182
            .ev = TRAINER_PARTY_EVS(0, 64, 0, 0, 64, 0),
#line 4184
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4180
            .ability = ABILITY_HUSTLE,
#line 4181
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4183
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4185
                MOVE_ICE_FANG,
                MOVE_DRAGON_BREATH,
            },
            },
        },
    },
#line 4188
    [DIFFICULTY_NORMAL][TRAINER_0465BF77] =
    {
#line 4189
        .trainerName = _("0465BF77"),
#line 4190
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4193
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4192
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4195
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4195
            .heldItem = ITEM_QUICK_CLAW,
#line 4198
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 132, 0, 0),
#line 4200
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4196
            .ability = ABILITY_LEVITATE,
#line 4197
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4199
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4201
                MOVE_TAUNT,
                MOVE_DESTINY_BOND,
                MOVE_SHADOW_SNEAK,
            },
            },
            {
#line 4205
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4208
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 132, 0, 0),
#line 4210
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4206
            .ability = ABILITY_SPEED_BOOST,
#line 4207
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4209
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4211
                MOVE_DESTINY_BOND,
                MOVE_TAUNT,
                MOVE_ASSURANCE,
                MOVE_PSYCHIC_FANGS,
            },
            },
        },
    },
#line 4216
    [DIFFICULTY_NORMAL][TRAINER_0467DF00] =
    {
#line 4217
        .trainerName = _("0467DF00"),
#line 4218
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4221
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4219
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4220
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4223
            .species = SPECIES_MILTANK,
#line 4223
            .gender = TRAINER_MON_FEMALE,
#line 4223
            .heldItem = ITEM_COVERT_CLOAK,
#line 4226
            .ev = TRAINER_PARTY_EVS(44, 0, 48, 0, 0, 40),
#line 4228
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4224
            .ability = ABILITY_THICK_FAT,
#line 4225
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4227
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4229
                MOVE_SANDSTORM,
                MOVE_ROLLOUT,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4233
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4233
            .heldItem = ITEM_BRIGHT_POWDER,
#line 4236
            .ev = TRAINER_PARTY_EVS(132, 0, 0, 0, 0, 0),
#line 4238
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4234
            .ability = ABILITY_SAND_VEIL,
#line 4235
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4237
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4239
                MOVE_FURY_CUTTER,
                MOVE_TOXIC,
                MOVE_KNOCK_OFF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 4244
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4244
            .heldItem = ITEM_SMOOTH_ROCK,
#line 4247
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 136),
#line 4249
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4245
            .ability = ABILITY_HEALER,
#line 4246
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4248
            .nature = NATURE_GENTLE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4250
                MOVE_SANDSTORM,
                MOVE_HEAL_PULSE,
                MOVE_HYPER_VOICE,
            },
            },
        },
    },
#line 4254
    [DIFFICULTY_NORMAL][TRAINER_04687C53] =
    {
#line 4255
        .trainerName = _("04687C53"),
#line 4256
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4259
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4257
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4260
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4258
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4262
            .species = SPECIES_SLIGGOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4262
            .heldItem = ITEM_ORAN_BERRY,
#line 4265
            .ev = TRAINER_PARTY_EVS(0, 0, 136, 0, 0, 0),
#line 4267
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4263
            .ability = ABILITY_GOOEY,
#line 4264
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4266
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4268
                MOVE_ACID_SPRAY,
                MOVE_CHILLING_WATER,
                MOVE_SKITTER_SMACK,
            },
            },
        },
    },
#line 4272
    [DIFFICULTY_NORMAL][TRAINER_048D5D99] =
    {
#line 4273
        .trainerName = _("048D5D99"),
#line 4274
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4277
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4275
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4278
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4276
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4280
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4280
            .heldItem = ITEM_SITRUS_BERRY,
#line 4283
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 132),
#line 4285
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4281
            .ability = ABILITY_STURDY,
#line 4282
            .lvl = 27,
            .ball = POKEBALL_COUNT,
#line 4284
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4286
                MOVE_METAL_BURST,
                MOVE_CURSE,
                MOVE_HARDEN,
            },
            },
            {
#line 4290
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4290
            .heldItem = ITEM_FOCUS_BAND,
#line 4293
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 132),
#line 4295
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4291
            .ability = ABILITY_STURDY,
#line 4292
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4294
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4296
                MOVE_METAL_BURST,
                MOVE_CURSE,
                MOVE_ENDEAVOR,
                MOVE_SANDSTORM,
            },
            },
        },
    },
#line 4301
    [DIFFICULTY_NORMAL][TRAINER_04A59E40] =
    {
#line 4302
        .trainerName = _("04A59E40"),
#line 4303
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4306
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4304
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4307
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4305
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4309
            .species = SPECIES_FLOETTE,
#line 4309
            .gender = TRAINER_MON_FEMALE,
#line 4309
            .heldItem = ITEM_LUM_BERRY,
#line 4312
            .ev = TRAINER_PARTY_EVS(32, 0, 104, 0, 0, 0),
#line 4314
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4310
            .ability = ABILITY_FLOWER_VEIL,
#line 4311
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4313
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4315
                MOVE_WISH,
                MOVE_BATON_PASS,
                MOVE_LIGHT_SCREEN,
                MOVE_MAGICAL_LEAF,
            },
            },
            {
#line 4320
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4320
            .heldItem = ITEM_MYSTIC_WATER,
#line 4323
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 88, 0, 0),
#line 4325
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4321
            .ability = ABILITY_SHELL_ARMOR,
#line 4322
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4324
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4326
                MOVE_BRICK_BREAK,
                MOVE_RAZOR_SHELL,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 4330
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4330
            .heldItem = ITEM_MYSTIC_WATER,
#line 4333
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 136, 0),
#line 4335
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4331
            .ability = ABILITY_REGENERATOR,
#line 4332
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4334
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4336
                MOVE_AVALANCHE,
                MOVE_PSYCHIC_NOISE,
                MOVE_MUDDY_WATER,
            },
            },
        },
    },
#line 4341
    [DIFFICULTY_NORMAL][TRAINER_04E334E9] =
    {
#line 4342
        .trainerName = _("04E334E9"),
#line 4343
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4346
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4344
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4347
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4345
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4349
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4349
            .heldItem = ITEM_ORAN_BERRY,
#line 4352
            .ev = TRAINER_PARTY_EVS(0, 136, 0, 0, 0, 0),
#line 4354
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4350
            .ability = ABILITY_MOODY,
#line 4351
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4353
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4355
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
                MOVE_ICY_WIND,
                MOVE_ROCK_BLAST,
            },
            },
            {
#line 4360
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4360
            .heldItem = ITEM_ORAN_BERRY,
#line 4363
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 136, 0),
#line 4365
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4361
            .ability = ABILITY_MOODY,
#line 4362
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4364
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4366
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
                MOVE_BULLET_SEED,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 4371
            .species = SPECIES_SCOVILLAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4371
            .heldItem = ITEM_ORAN_BERRY,
#line 4374
            .ev = TRAINER_PARTY_EVS(16, 32, 16, 24, 32, 16),
#line 4376
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4372
            .ability = ABILITY_MOODY,
#line 4373
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4375
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4377
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
                MOVE_MAGICAL_LEAF,
                MOVE_TEMPER_FLARE,
            },
            },
        },
    },
#line 4382
    [DIFFICULTY_NORMAL][TRAINER_05BDEABF] =
    {
#line 4383
        .trainerName = _("05BDEABF"),
#line 4384
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4387
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4385
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4388
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4386
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4390
            .species = SPECIES_CAPSAKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4390
            .heldItem = ITEM_SMOOTH_ROCK,
#line 4393
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4391
            .ability = ABILITY_INSOMNIA,
#line 4392
            .lvl = 23,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4394
                MOVE_SANDSTORM,
                MOVE_LEECH_SEED,
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
            },
            },
            {
#line 4399
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4399
            .heldItem = ITEM_SITRUS_BERRY,
#line 4402
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4400
            .ability = ABILITY_EFFECT_SPORE,
#line 4401
            .lvl = 21,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4403
                MOVE_POISON_POWDER,
                MOVE_POLLEN_PUFF,
                MOVE_PROTECT,
                MOVE_ABSORB,
            },
            },
            {
#line 4408
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4408
            .heldItem = ITEM_LEFTOVERS,
#line 4411
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4409
            .ability = ABILITY_IRON_FIST,
#line 4410
            .lvl = 25,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4412
                MOVE_SANDSTORM,
                MOVE_CURSE,
                MOVE_KNOCK_OFF,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 4417
    [DIFFICULTY_NORMAL][TRAINER_06400A0C] =
    {
#line 4418
        .trainerName = _("06400A0C"),
#line 4419
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4422
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4420
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4423
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4421
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4425
            .species = SPECIES_CHARJABUG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4425
            .heldItem = ITEM_EJECT_BUTTON,
#line 4428
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4426
            .ability = ABILITY_BATTERY,
#line 4427
            .lvl = 24,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4429
                MOVE_STICKY_WEB,
                MOVE_LIGHT_SCREEN,
                MOVE_ELECTROWEB,
                MOVE_BUG_BITE,
            },
            },
            {
#line 4434
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4434
            .heldItem = ITEM_CHERI_BERRY,
#line 4437
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4435
            .ability = ABILITY_FLAME_BODY,
#line 4436
            .lvl = 25,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4438
                MOVE_NIGHT_SHADE,
                MOVE_EMBER,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 4442
            .species = SPECIES_DOUBLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4445
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4443
            .ability = ABILITY_NO_GUARD,
#line 4444
            .lvl = 26,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4446
                MOVE_SHADOW_SNEAK,
                MOVE_SHADOW_CLAW,
                MOVE_BRUTAL_SWING,
            },
            },
        },
    },
#line 4450
    [DIFFICULTY_NORMAL][TRAINER_068B06CE] =
    {
#line 4451
        .trainerName = _("068B06CE"),
#line 4452
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4455
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4453
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4456
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4454
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4458
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4461
            .ev = TRAINER_PARTY_EVS(0, 56, 72, 0, 0, 0),
#line 4463
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4459
            .ability = ABILITY_NEUTRALIZING_GAS,
#line 4460
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4462
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4464
                MOVE_WILL_O_WISP,
                MOVE_SLUDGE,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 4468
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4468
            .heldItem = ITEM_WIDE_LENS,
#line 4471
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 136, 0, 0),
#line 4473
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4469
            .ability = ABILITY_FLASH_FIRE,
#line 4470
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4472
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4474
                MOVE_INFERNO,
                MOVE_BABY_DOLL_EYES,
                MOVE_DIG,
                MOVE_HEX,
            },
            },
            {
#line 4479
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4479
            .heldItem = ITEM_FLAME_ORB,
#line 4482
            .ev = TRAINER_PARTY_EVS(0, 28, 0, 0, 0, 108),
#line 4484
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4480
            .ability = ABILITY_QUICK_FEET,
#line 4481
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4483
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4485
                MOVE_FLING,
                MOVE_FACADE,
                MOVE_PROTECT,
            },
            },
            {
#line 4489
            .species = SPECIES_MAGBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4489
            .heldItem = ITEM_CHARCOAL,
#line 4492
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 48, 0, 0),
#line 4494
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4490
            .ability = ABILITY_FLAME_BODY,
#line 4491
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4493
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4495
                MOVE_WILL_O_WISP,
                MOVE_FLAME_WHEEL,
                MOVE_LOW_KICK,
            },
            },
        },
    },
#line 4500
    [DIFFICULTY_NORMAL][TRAINER_06BE2D1B] =
    {
#line 4501
        .trainerName = _("06BE2D1B"),
#line 4502
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4504
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4503
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4506
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4505
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4508
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4508
            .heldItem = ITEM_SCOPE_LENS,
#line 4511
            .ev = TRAINER_PARTY_EVS(0, 0, 72, 0, 0, 64),
#line 4513
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4509
            .ability = ABILITY_SUPER_LUCK,
#line 4510
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4512
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4514
                MOVE_ANCIENT_POWER,
                MOVE_PLAY_ROUGH,
                MOVE_POUNCE,
                MOVE_FOLLOW_ME,
            },
            },
            {
#line 4519
            .species = SPECIES_CUBCHOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4522
            .ev = TRAINER_PARTY_EVS(0, 92, 44, 0, 0, 0),
#line 4523
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4520
            .ability = ABILITY_RATTLED,
#line 4521
            .lvl = 22,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4524
                MOVE_FROST_BREATH,
                MOVE_DIG,
            },
            },
            {
#line 4527
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4527
            .heldItem = ITEM_SCOPE_LENS,
#line 4530
            .ev = TRAINER_PARTY_EVS(0, 92, 0, 36, 0, 0),
#line 4532
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4528
            .ability = ABILITY_SUPER_LUCK,
#line 4529
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4531
            .nature = NATURE_DOCILE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4533
                MOVE_TAILWIND,
                MOVE_AIR_CUTTER,
                MOVE_SNARL,
            },
            },
            {
#line 4537
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4537
            .heldItem = ITEM_SCOPE_LENS,
#line 4541
            .ev = TRAINER_PARTY_EVS(0, 136, 0, 0, 0, 0),
#line 4543
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4538
            .ability = ABILITY_SNIPER,
#line 4539
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4542
            .nature = NATURE_ADAMANT,
#line 4540
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4544
                MOVE_CROSS_POISON,
                MOVE_NIGHT_SLASH,
            },
            },
        },
    },
#line 4547
    [DIFFICULTY_NORMAL][TRAINER_06C68007] =
    {
#line 4548
        .trainerName = _("06C68007"),
#line 4549
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4551
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4550
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4553
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4552
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4555
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4555
            .heldItem = ITEM_FAIRY_FEATHER,
#line 4558
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 20, 104, 0),
#line 4560
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4556
            .ability = ABILITY_STATIC,
#line 4557
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4559
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4561
                MOVE_DISCHARGE,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 4564
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4564
            .heldItem = ITEM_EXPERT_BELT,
#line 4567
            .ev = TRAINER_PARTY_EVS(0, 96, 0, 0, 0, 32),
#line 4569
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4565
            .ability = ABILITY_OBLIVIOUS,
#line 4566
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4568
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4570
                MOVE_BULLDOZE,
                MOVE_ICY_WIND,
            },
            },
        },
    },
#line 4573
    [DIFFICULTY_NORMAL][TRAINER_06D2BD08] =
    {
#line 4574
        .trainerName = _("06D2BD08"),
#line 4575
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4578
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4579
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4577
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4581
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4581
            .heldItem = ITEM_MAGO_BERRY,
#line 4584
            .ev = TRAINER_PARTY_EVS(36, 0, 0, 0, 96, 0),
#line 4586
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4582
            .ability = ABILITY_TANGLED_FEET,
#line 4583
            .lvl = 27,
            .ball = POKEBALL_COUNT,
#line 4585
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4587
                MOVE_ICY_WIND,
                MOVE_PSYBEAM,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 4591
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4591
            .heldItem = ITEM_BLUNDER_POLICY,
#line 4594
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4592
            .ability = ABILITY_QUICK_FEET,
#line 4593
            .lvl = 25,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4595
                MOVE_ICY_WIND,
                MOVE_BODY_SLAM,
                MOVE_FURY_SWIPES,
            },
            },
            {
#line 4599
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4602
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4600
            .ability = ABILITY_DOWNLOAD,
#line 4601
            .lvl = 27,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4603
                MOVE_ICY_WIND,
                MOVE_TRI_ATTACK,
            },
            },
        },
    },
#line 4606
    [DIFFICULTY_NORMAL][TRAINER_070F6125] =
    {
#line 4607
        .trainerName = _("070F6125"),
#line 4608
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4611
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4609
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4612
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4610
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4614
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4614
            .heldItem = ITEM_SALAC_BERRY,
#line 4617
            .ev = TRAINER_PARTY_EVS(20, 116, 0, 0, 0, 0),
#line 4619
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4615
            .ability = ABILITY_INNER_FOCUS,
#line 4616
            .lvl = 27,
            .ball = POKEBALL_COUNT,
#line 4618
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4619
                MOVE_ENDURE,
                MOVE_REVERSAL,
                MOVE_ACROBATICS,
            },
            },
            {
#line 4623
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4623
            .heldItem = ITEM_BLACK_BELT,
#line 4626
            .ev = TRAINER_PARTY_EVS(0, 116, 0, 0, 0, 12),
#line 4628
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4624
            .ability = ABILITY_UNBURDEN,
#line 4625
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4627
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4628
                MOVE_ENDURE,
                MOVE_REVERSAL,
                MOVE_VACUUM_WAVE,
            },
            },
        },
    },
#line 4632
    [DIFFICULTY_NORMAL][TRAINER_07D063A5] =
    {
#line 4633
        .trainerName = _("07D063A5"),
#line 4634
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4637
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4635
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4638
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4636
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4640
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4643
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4645
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4641
            .ability = ABILITY_INTIMIDATE,
#line 4642
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4644
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4646
                MOVE_HELPING_HAND,
                MOVE_U_TURN,
            },
            },
            {
#line 4649
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4649
            .heldItem = ITEM_SHED_SHELL,
#line 4652
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4654
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4650
            .ability = ABILITY_INTIMIDATE,
#line 4651
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4653
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4655
                MOVE_HELPING_HAND,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 4658
            .species = SPECIES_SQUAWKABILLY_WHITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4658
            .heldItem = ITEM_RED_CARD,
#line 4661
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4663
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4659
            .ability = ABILITY_INTIMIDATE,
#line 4660
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4662
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4664
                MOVE_HELPING_HAND,
                MOVE_HEAT_WAVE,
            },
            },
            {
#line 4667
            .species = SPECIES_SQUAWKABILLY_YELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4667
            .heldItem = ITEM_EJECT_BUTTON,
#line 4670
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4672
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4668
            .ability = ABILITY_INTIMIDATE,
#line 4669
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4671
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4673
                MOVE_HELPING_HAND,
                MOVE_AERIAL_ACE,
            },
            },
        },
    },
#line 4676
    [DIFFICULTY_NORMAL][TRAINER_09AEC824] =
    {
#line 4677
        .trainerName = _("09AEC824"),
#line 4678
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4681
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4679
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4680
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4683
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4686
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 124, 0),
#line 4687
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4684
            .ability = ABILITY_INNER_FOCUS,
#line 4685
            .lvl = 26,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4688
                MOVE_THUNDER_WAVE,
                MOVE_NIGHT_SHADE,
                MOVE_CONFUSION,
            },
            },
            {
#line 4692
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4695
            .ev = TRAINER_PARTY_EVS(64, 0, 40, 0, 0, 24),
#line 4697
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4693
            .ability = ABILITY_VOLT_ABSORB,
#line 4694
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 4696
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4698
                MOVE_BITE,
                MOVE_NUZZLE,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 4702
            .species = SPECIES_SNIVY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4705
            .ev = TRAINER_PARTY_EVS(0, 120, 0, 0, 0, 16),
#line 4707
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4703
            .ability = ABILITY_OVERGROW,
#line 4704
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4706
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4708
                MOVE_PETAL_BLIZZARD,
                MOVE_GLARE,
                MOVE_BULLET_SEED,
            },
            },
            {
#line 4712
            .species = SPECIES_SHIINOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4715
            .ev = TRAINER_PARTY_EVS(84, 0, 0, 0, 0, 44),
#line 4717
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4713
            .ability = ABILITY_EFFECT_SPORE,
#line 4714
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4716
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4718
                MOVE_STUN_SPORE,
                MOVE_REVIVAL_BLESSING,
                MOVE_DRAINING_KISS,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 4723
    [DIFFICULTY_NORMAL][TRAINER_09B7B6C8] =
    {
#line 4724
        .trainerName = _("09B7B6C8"),
#line 4725
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4728
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4726
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4729
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4727
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4731
            .species = SPECIES_MALAMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4731
            .heldItem = ITEM_SITRUS_BERRY,
#line 4734
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 128, 0, 0),
#line 4736
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4732
            .ability = ABILITY_CONTRARY,
#line 4733
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4735
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4737
                MOVE_SWAGGER,
                MOVE_LIGHT_SCREEN,
                MOVE_ACUPRESSURE,
            },
            },
            {
#line 4741
            .species = SPECIES_DITTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4741
            .heldItem = ITEM_CHOICE_SCARF,
#line 4744
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 0, 72, 0),
#line 4746
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4742
            .ability = ABILITY_IMPOSTER,
#line 4743
            .lvl = 29,
            .ball = POKEBALL_COUNT,
#line 4745
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4748
    [DIFFICULTY_NORMAL][TRAINER_0A542D33] =
    {
#line 4749
        .trainerName = _("0A542D33"),
#line 4750
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4753
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4752
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4755
            .species = SPECIES_CLEFFA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4755
            .heldItem = ITEM_MENTAL_HERB,
#line 4758
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 128, 0),
#line 4760
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4756
            .ability = ABILITY_CUTE_CHARM,
#line 4757
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4759
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4761
                MOVE_HELPING_HAND,
                MOVE_DAZZLING_GLEAM,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 4765
            .species = SPECIES_CLEFAIRY,
#line 4765
            .gender = TRAINER_MON_MALE,
#line 4765
            .heldItem = ITEM_MENTAL_HERB,
#line 4768
            .ev = TRAINER_PARTY_EVS(0, 0, 64, 0, 0, 64),
#line 4770
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4766
            .ability = ABILITY_CUTE_CHARM,
#line 4767
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4769
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4771
                MOVE_HELPING_HAND,
                MOVE_DAZZLING_GLEAM,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 4775
            .species = SPECIES_CLEFABLE,
#line 4775
            .gender = TRAINER_MON_FEMALE,
#line 4775
            .heldItem = ITEM_MENTAL_HERB,
#line 4778
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 128, 0),
#line 4780
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4776
            .ability = ABILITY_CUTE_CHARM,
#line 4777
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4779
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4781
                MOVE_HELPING_HAND,
                MOVE_DAZZLING_GLEAM,
                MOVE_LIGHT_SCREEN,
            },
            },
        },
    },
#line 4785
    [DIFFICULTY_NORMAL][TRAINER_0A8B9F88] =
    {
#line 4786
        .trainerName = _("0A8B9F88"),
#line 4787
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4789
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4788
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4791
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4790
        .mapSec = MAPSEC_ROUTE2,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4793
            .species = SPECIES_MINIOR_METEOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4793
            .heldItem = ITEM_METRONOME,
#line 4796
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 84, 0, 0),
#line 4798
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4794
            .ability = ABILITY_SHIELDS_DOWN,
#line 4795
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4797
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4799
                MOVE_ROLLOUT,
            },
            },
            {
#line 4801
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4801
            .heldItem = ITEM_EVIOLITE,
#line 4804
            .ev = TRAINER_PARTY_EVS(52, 80, 0, 0, 0, 0),
#line 4806
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4802
            .ability = ABILITY_THICK_FAT,
#line 4803
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 4805
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4807
                MOVE_ICE_BALL,
            },
            },
            {
#line 4809
            .species = SPECIES_ANORITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4809
            .heldItem = ITEM_PASSHO_BERRY,
#line 4812
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 80, 0, 0),
#line 4814
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4810
            .ability = ABILITY_BATTLE_ARMOR,
#line 4811
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 4813
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4815
                MOVE_FURY_CUTTER,
            },
            },
        },
    },
#line 4817
    [DIFFICULTY_NORMAL][TRAINER_0A8FC005] =
    {
#line 4818
        .trainerName = _("0A8FC005"),
#line 4819
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4821
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4820
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4823
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4822
        .mapSec = MAPSEC_ROUTE4,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4825
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4825
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 4828
            .ev = TRAINER_PARTY_EVS(72, 0, 0, 0, 56, 0),
#line 4830
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4826
            .ability = ABILITY_DRIZZLE,
#line 4827
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4829
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4831
                MOVE_AIR_CUTTER,
                MOVE_ICY_WIND,
                MOVE_CHILLING_WATER,
                MOVE_STOCKPILE,
            },
            },
            {
#line 4836
            .species = SPECIES_TYRUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4836
            .heldItem = ITEM_UTILITY_UMBRELLA,
#line 4839
            .ev = TRAINER_PARTY_EVS(40, 0, 0, 0, 0, 88),
#line 4841
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4837
            .ability = ABILITY_STURDY,
#line 4838
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4840
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4842
                MOVE_ICE_FANG,
                MOVE_THUNDER_FANG,
                MOVE_BITE,
                MOVE_BULLDOZE,
            },
            },
            {
#line 4847
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4847
            .heldItem = ITEM_LEFTOVERS,
#line 4850
            .ev = TRAINER_PARTY_EVS(84, 0, 56, 0, 0, 0),
#line 4852
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4848
            .ability = ABILITY_RAIN_DISH,
#line 4849
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4851
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4853
                MOVE_WHIRLPOOL,
                MOVE_TOXIC,
                MOVE_ACID_ARMOR,
                MOVE_PROTECT,
            },
            },
            {
#line 4858
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4858
            .heldItem = ITEM_SNOWBALL,
#line 4861
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 0, 0, 76),
#line 4863
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4859
            .ability = ABILITY_HYPER_CUTTER,
#line 4860
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4862
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4864
                MOVE_VENOSHOCK,
                MOVE_AERIAL_ACE,
                MOVE_BREAKING_SWIPE,
                MOVE_SAND_TOMB,
            },
            },
        },
    },
#line 4869
    [DIFFICULTY_NORMAL][TRAINER_0AAB38A6] =
    {
#line 4870
        .trainerName = _("0AAB38A6"),
#line 4871
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4873
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4872
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4875
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4874
        .mapSec = MAPSEC_ROUTE4,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4877
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4877
            .heldItem = ITEM_EVIOLITE,
#line 4880
            .ev = TRAINER_PARTY_EVS(60, 0, 0, 0, 72, 0),
#line 4882
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4878
            .ability = ABILITY_LEVITATE,
#line 4879
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4881
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4883
                MOVE_EXTRASENSORY,
                MOVE_SCORCHING_SANDS,
                MOVE_HEX,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 4888
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4888
            .heldItem = ITEM_AIR_BALLOON,
#line 4891
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 0, 0, 88),
#line 4893
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4889
            .ability = ABILITY_ANGER_SHELL,
#line 4890
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4892
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4894
                MOVE_BULLDOZE,
                MOVE_VISE_GRIP,
                MOVE_METAL_CLAW,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 4899
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4899
            .heldItem = ITEM_ASSAULT_VEST,
#line 4902
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 44, 84),
#line 4904
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4900
            .ability = ABILITY_LEVITATE,
#line 4901
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 4903
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4905
                MOVE_SLUDGE_BOMB,
                MOVE_BODY_SLAM,
                MOVE_VENOSHOCK,
                MOVE_GYRO_BALL,
            },
            },
        },
    },
#line 4910
    [DIFFICULTY_NORMAL][TRAINER_0AF40D0B] =
    {
#line 4911
        .trainerName = _("0AF40D0B"),
#line 4912
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4914
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4913
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4916
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4915
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4918
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4918
            .heldItem = ITEM_CHOICE_SCARF,
#line 4921
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4923
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4919
            .ability = ABILITY_SWIFT_SWIM,
#line 4920
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 4922
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4924
                MOVE_SURF,
            },
            },
            {
#line 4926
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4926
            .heldItem = ITEM_CHOPLE_BERRY,
#line 4929
            .ev = TRAINER_PARTY_EVS(52, 0, 76, 0, 0, 0),
#line 4931
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4927
            .ability = ABILITY_STORM_DRAIN,
#line 4928
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 4930
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4932
                MOVE_EARTH_POWER,
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_RECOVER,
            },
            },
        },
    },
#line 4937
    [DIFFICULTY_NORMAL][TRAINER_0B48C7D0] =
    {
#line 4938
        .trainerName = _("0B48C7D0"),
#line 4939
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4941
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4940
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4942
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4943
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4945
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4945
            .heldItem = ITEM_DRAGON_FANG,
#line 4948
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 132, 0, 0),
#line 4950
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4946
            .ability = ABILITY_PRESSURE,
#line 4947
            .lvl = 33,
            .ball = POKEBALL_COUNT,
#line 4949
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4951
                MOVE_ICE_FANG,
                MOVE_BITE,
                MOVE_DRAGON_BREATH,
                MOVE_ROCK_BLAST,
            },
            },
            {
#line 4956
            .species = SPECIES_SILICOBRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4956
            .heldItem = ITEM_SMOOTH_ROCK,
#line 4959
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 4961
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4957
            .ability = ABILITY_SAND_SPIT,
#line 4958
            .lvl = 34,
            .ball = POKEBALL_COUNT,
#line 4960
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4962
                MOVE_SAND_TOMB,
                MOVE_WRAP,
                MOVE_GLARE,
            },
            },
            {
#line 4966
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4966
            .heldItem = ITEM_WIDE_LENS,
#line 4969
            .ev = TRAINER_PARTY_EVS(36, 0, 88, 0, 0, 0),
#line 4971
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4967
            .ability = ABILITY_PRESSURE,
#line 4968
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4970
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4972
                MOVE_DREAM_EATER,
                MOVE_NIGHT_SHADE,
                MOVE_HYPNOSIS,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 4977
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4977
            .heldItem = ITEM_HARD_STONE,
#line 4980
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 4982
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4978
            .ability = ABILITY_SAND_VEIL,
#line 4979
            .lvl = 34,
            .ball = POKEBALL_COUNT,
#line 4981
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4983
                MOVE_FIRE_FANG,
                MOVE_ICE_FANG,
                MOVE_THUNDER_FANG,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 4988
    [DIFFICULTY_NORMAL][TRAINER_0C0A9B2F] =
    {
#line 4989
        .trainerName = _("0C0A9B2F"),
#line 4990
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4992
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4991
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4994
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4993
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4996
            .species = SPECIES_TIRTOUGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4996
            .heldItem = ITEM_RINDO_BERRY,
#line 4999
            .ev = TRAINER_PARTY_EVS(0, 32, 0, 0, 0, 96),
#line 5001
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4997
            .ability = ABILITY_SOLID_ROCK,
#line 4998
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 5000
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5002
                MOVE_ZEN_HEADBUTT,
                MOVE_ANCIENT_POWER,
                MOVE_AQUA_JET,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 5007
            .species = SPECIES_SHIELDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5007
            .heldItem = ITEM_RED_CARD,
#line 5010
            .ev = TRAINER_PARTY_EVS(48, 80, 0, 0, 0, 0),
#line 5012
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5008
            .ability = ABILITY_STURDY,
#line 5009
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 5011
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5013
                MOVE_IRON_HEAD,
                MOVE_POWER_GEM,
                MOVE_METAL_BURST,
                MOVE_ROAR,
            },
            },
            {
#line 5018
            .species = SPECIES_KLEAVOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5018
            .heldItem = ITEM_KINGS_ROCK,
#line 5021
            .ev = TRAINER_PARTY_EVS(20, 0, 0, 0, 0, 108),
#line 5023
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5019
            .ability = ABILITY_SWARM,
#line 5020
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 5022
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5024
                MOVE_WING_ATTACK,
                MOVE_POUNCE,
                MOVE_SMACK_DOWN,
                MOVE_DOUBLE_HIT,
            },
            },
        },
    },
#line 5029
    [DIFFICULTY_NORMAL][TRAINER_0C543C80] =
    {
#line 5030
        .trainerName = _("0C543C80"),
#line 5031
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5033
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5032
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5035
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5034
        .mapSec = MAPSEC_ROUTE2,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5037
            .species = SPECIES_SIGILYPH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5037
            .heldItem = ITEM_FLAME_ORB,
#line 5040
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 80, 0, 0),
#line 5042
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5038
            .ability = ABILITY_MAGIC_GUARD,
#line 5039
            .lvl = 34,
            .ball = POKEBALL_COUNT,
#line 5041
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5043
                MOVE_AIR_CUTTER,
                MOVE_CONFUSION,
                MOVE_PSYCHO_SHIFT,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 5048
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5048
            .heldItem = ITEM_EJECT_BUTTON,
#line 5051
            .ev = TRAINER_PARTY_EVS(44, 0, 80, 0, 0, 0),
#line 5053
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5049
            .ability = ABILITY_FRIEND_GUARD,
#line 5050
            .lvl = 37,
            .ball = POKEBALL_COUNT,
#line 5052
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5054
                MOVE_FOLLOW_ME,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 5057
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5057
            .heldItem = ITEM_FOCUS_SASH,
#line 5060
            .ev = TRAINER_PARTY_EVS(0, 128, 0, 0, 0, 0),
#line 5062
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5058
            .ability = ABILITY_ARENA_TRAP,
#line 5059
            .lvl = 33,
            .ball = POKEBALL_COUNT,
#line 5061
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5063
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
                MOVE_BITE,
                MOVE_BUG_BITE,
            },
            },
            {
#line 5068
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5068
            .heldItem = ITEM_SITRUS_BERRY,
#line 5071
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 5073
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5069
            .ability = ABILITY_MUMMY,
#line 5070
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 5072
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5074
                MOVE_HEX,
                MOVE_WILL_O_WISP,
                MOVE_MEAN_LOOK,
                MOVE_CURSE,
            },
            },
        },
    },
#line 5079
    [DIFFICULTY_NORMAL][TRAINER_0C95C833] =
    {
#line 5080
        .trainerName = _("0C95C833"),
#line 5081
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5083
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5082
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5084
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5085
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5087
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5087
            .heldItem = ITEM_CHOICE_SCARF,
#line 5090
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 124, 0, 0),
#line 5092
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5088
            .ability = ABILITY_ROUGH_SKIN,
#line 5089
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 5091
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5093
                MOVE_FLIP_TURN,
            },
            },
            {
#line 5095
            .species = SPECIES_ARCTOZOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5095
            .heldItem = ITEM_SALAC_BERRY,
#line 5098
            .ev = TRAINER_PARTY_EVS(24, 0, 0, 100, 0, 0),
#line 5100
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5096
            .ability = ABILITY_VOLT_ABSORB,
#line 5097
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 5099
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5101
                MOVE_ROCK_TOMB,
                MOVE_ICY_WIND,
                MOVE_ELECTRO_BALL,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 5106
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5106
            .heldItem = ITEM_SOFT_SAND,
#line 5109
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 5111
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5107
            .ability = ABILITY_SHELL_ARMOR,
#line 5108
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 5110
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5112
                MOVE_BODY_SLAM,
                MOVE_FLAME_WHEEL,
                MOVE_BULLDOZE,
                MOVE_YAWN,
            },
            },
        },
    },
#line 5117
    [DIFFICULTY_NORMAL][TRAINER_0D416B2C] =
    {
#line 5118
        .trainerName = _("0D416B2C"),
#line 5119
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5121
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5120
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5122
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5123
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5125
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5125
            .heldItem = ITEM_EVIOLITE,
#line 5128
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 80, 60, 0),
#line 5130
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5126
            .ability = ABILITY_WIND_POWER,
#line 5127
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5129
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5130
                MOVE_DISCHARGE,
                MOVE_U_TURN,
                MOVE_TAILWIND,
            },
            },
            {
#line 5134
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5134
            .heldItem = ITEM_CELL_BATTERY,
#line 5137
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 60, 0, 0),
#line 5139
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5135
            .ability = ABILITY_LIMBER,
#line 5136
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5138
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5139
                MOVE_BLAZE_KICK,
                MOVE_SUCKER_PUNCH,
                MOVE_LOW_SWEEP,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 5144
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5144
            .heldItem = ITEM_TOXIC_ORB,
#line 5147
            .ev = TRAINER_PARTY_EVS(60, 0, 0, 0, 0, 80),
#line 5149
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5145
            .ability = ABILITY_MARVEL_SCALE,
#line 5146
            .lvl = 42,
            .ball = POKEBALL_COUNT,
#line 5148
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5149
                MOVE_BODY_SLAM,
                MOVE_WATER_PULSE,
                MOVE_BREAKING_SWIPE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 5154
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5154
            .heldItem = ITEM_IAPAPA_BERRY,
#line 5157
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 0, 0, 60),
#line 5159
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5155
            .ability = ABILITY_STURDY,
#line 5156
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5158
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5159
                MOVE_STOMPING_TANTRUM,
                MOVE_KNOCK_OFF,
                MOVE_FIRE_FANG,
                MOVE_COUNTER,
            },
            },
        },
    },
#line 5164
    [DIFFICULTY_NORMAL][TRAINER_0D4BA0F1] =
    {
#line 5165
        .trainerName = _("0D4BA0F1"),
#line 5166
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5168
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5167
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5169
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5170
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5172
            .species = SPECIES_BARRASKEWDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5172
            .heldItem = ITEM_ROCKY_HELMET,
#line 5175
            .ev = TRAINER_PARTY_EVS(0, 0, 40, 0, 0, 100),
#line 5177
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5173
            .ability = ABILITY_PROPELLER_TAIL,
#line 5174
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5176
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5177
                MOVE_DIVE,
                MOVE_DRILL_RUN,
                MOVE_BITE,
                MOVE_AQUA_JET,
            },
            },
            {
#line 5182
            .species = SPECIES_CRAMORANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5182
            .heldItem = ITEM_MYSTIC_WATER,
#line 5185
            .ev = TRAINER_PARTY_EVS(0, 0, 40, 100, 0, 0),
#line 5187
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5183
            .ability = ABILITY_GULP_MISSILE,
#line 5184
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5186
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5187
                MOVE_SURF,
                MOVE_DIVE,
                MOVE_DRILL_PECK,
                MOVE_STOCKPILE,
            },
            },
            {
#line 5192
            .species = SPECIES_PAWMOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5192
            .heldItem = ITEM_PUNCHING_GLOVE,
#line 5195
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 100, 0, 40),
#line 5197
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5193
            .ability = ABILITY_VOLT_ABSORB,
#line 5194
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5196
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5197
                MOVE_THUNDER_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_BRICK_BREAK,
                MOVE_UPPER_HAND,
            },
            },
        },
    },
#line 5202
    [DIFFICULTY_NORMAL][TRAINER_0DA021EF] =
    {
#line 5203
        .trainerName = _("Billy"),
#line 5204
        .trainerPic = TRAINER_PIC_FRONT_BIRD_KEEPER,
#line 5206
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5205
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5207
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5208
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_BIRD_KEEPER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5210
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5210
            .heldItem = ITEM_WACAN_BERRY,
#line 5213
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5215
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5211
            .ability = ABILITY_INTIMIDATE,
#line 5212
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5214
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5215
                MOVE_TAKE_DOWN,
                MOVE_FLY,
                MOVE_U_TURN,
                MOVE_PARTING_SHOT,
            },
            },
            {
#line 5220
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5220
            .heldItem = ITEM_FLAME_ORB,
#line 5223
            .ev = TRAINER_PARTY_EVS(60, 0, 0, 80, 0, 0),
#line 5225
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5221
            .ability = ABILITY_GUTS,
#line 5222
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5224
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5225
                MOVE_FACADE,
                MOVE_LASH_OUT,
                MOVE_DUAL_WINGBEAT,
                MOVE_TORMENT,
            },
            },
            {
#line 5230
            .species = SPECIES_SQUAWKABILLY_YELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5230
            .heldItem = ITEM_WIDE_LENS,
#line 5233
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 80, 0, 0),
#line 5235
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5231
            .ability = ABILITY_HUSTLE,
#line 5232
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5234
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5235
                MOVE_FOUL_PLAY,
                MOVE_AERIAL_ACE,
                MOVE_QUICK_ATTACK,
                MOVE_ROOST,
            },
            },
            {
#line 5240
            .species = SPECIES_SQUAWKABILLY_WHITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5240
            .heldItem = ITEM_LIFE_ORB,
#line 5243
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 80, 60, 0),
#line 5245
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5241
            .ability = ABILITY_SHEER_FORCE,
#line 5242
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5244
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5245
                MOVE_HURRICANE,
                MOVE_HEAT_WAVE,
                MOVE_POUNCE,
                MOVE_MIMIC,
            },
            },
        },
    },
#line 5250
    [DIFFICULTY_NORMAL][TRAINER_0E19F1A8] =
    {
#line 5251
        .trainerName = _("0E19F1A8"),
#line 5252
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5254
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5253
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5255
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5256
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5258
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5258
            .heldItem = ITEM_ADRENALINE_ORB,
#line 5261
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 60, 0, 0),
#line 5263
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5259
            .ability = ABILITY_KEEN_EYE,
#line 5260
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5262
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5263
                MOVE_DRAIN_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_BULLET_PUNCH,
            },
            },
            {
#line 5268
            .species = SPECIES_FLETCHINDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5268
            .heldItem = ITEM_FOCUS_SASH,
#line 5271
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 80, 0, 0),
#line 5273
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5269
            .ability = ABILITY_GALE_WINGS,
#line 5270
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5272
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5273
                MOVE_FLY,
                MOVE_STEEL_WING,
                MOVE_FIRE_SPIN,
                MOVE_TAILWIND,
            },
            },
            {
#line 5278
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5278
            .heldItem = ITEM_POWER_HERB,
#line 5281
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5283
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5279
            .ability = ABILITY_WIND_RIDER,
#line 5280
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5282
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5283
                MOVE_SOLAR_BLADE,
                MOVE_THIEF,
                MOVE_AERIAL_ACE,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 5288
            .species = SPECIES_NOIVERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5288
            .heldItem = ITEM_YACHE_BERRY,
#line 5291
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5293
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5289
            .ability = ABILITY_INFILTRATOR,
#line 5290
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5292
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5293
                MOVE_DRAGON_PULSE,
                MOVE_PSYCHIC_NOISE,
                MOVE_AIR_CUTTER,
                MOVE_TAILWIND,
            },
            },
        },
    },
#line 5298
    [DIFFICULTY_NORMAL][TRAINER_0E42221A] =
    {
#line 5299
        .trainerName = _("0E42221A"),
#line 5300
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5302
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5301
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5303
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5304
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5306
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5306
            .heldItem = ITEM_WEAKNESS_POLICY,
#line 5309
            .ev = TRAINER_PARTY_EVS(0, 0, 140, 0, 0, 0),
#line 5311
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5307
            .ability = ABILITY_TECHNICIAN,
#line 5308
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5310
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5311
                MOVE_BUG_BITE,
                MOVE_TRAILBLAZE,
                MOVE_DUAL_WINGBEAT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 5316
            .species = SPECIES_SWOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5316
            .heldItem = ITEM_MARANGA_BERRY,
#line 5319
            .ev = TRAINER_PARTY_EVS(0, 0, 60, 0, 0, 80),
#line 5321
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5317
            .ability = ABILITY_SIMPLE,
#line 5318
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5320
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5321
                MOVE_STORED_POWER,
                MOVE_CALM_MIND,
            },
            },
            {
#line 5324
            .species = SPECIES_GREEDENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5324
            .heldItem = ITEM_GANLON_BERRY,
#line 5327
            .ev = TRAINER_PARTY_EVS(0, 80, 60, 0, 0, 0),
#line 5328
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5325
            .ability = ABILITY_CHEEK_POUCH,
#line 5326
            .lvl = 45,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5328
                MOVE_BODY_PRESS,
                MOVE_BODY_SLAM,
                MOVE_SEED_BOMB,
                MOVE_STUFF_CHEEKS,
            },
            },
        },
    },
#line 5333
    [DIFFICULTY_NORMAL][TRAINER_0ED24EF1] =
    {
#line 5334
        .trainerName = _("0ED24EF1"),
#line 5335
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5337
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5336
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5338
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5339
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5341
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5341
            .heldItem = ITEM_YACHE_BERRY,
#line 5344
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 80, 0, 0),
#line 5346
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5342
            .ability = ABILITY_HYPER_CUTTER,
#line 5343
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5345
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5346
                MOVE_ROCK_SLIDE,
                MOVE_BULLDOZE,
                MOVE_FIRE_FANG,
                MOVE_TOXIC_SPIKES,
            },
            },
            {
#line 5351
            .species = SPECIES_SHUCKLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5351
            .heldItem = ITEM_LEFTOVERS,
#line 5354
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5356
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5352
            .ability = ABILITY_STURDY,
#line 5353
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5355
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5356
                MOVE_KNOCK_OFF,
                MOVE_INFESTATION,
                MOVE_WRAP,
                MOVE_PROTECT,
            },
            },
            {
#line 5361
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5361
            .heldItem = ITEM_ASSAULT_VEST,
#line 5364
            .ev = TRAINER_PARTY_EVS(0, 0, 60, 0, 0, 80),
#line 5366
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5362
            .ability = ABILITY_SHEER_FORCE,
#line 5363
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5365
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5366
                MOVE_LIQUIDATION,
                MOVE_NIGHT_SLASH,
                MOVE_METAL_CLAW,
                MOVE_HAMMER_ARM,
            },
            },
        },
    },
#line 5371
    [DIFFICULTY_NORMAL][TRAINER_0F03CF8D] =
    {
#line 5372
        .trainerName = _("0F03CF8D"),
#line 5373
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5375
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5374
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5377
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5376
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5379
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5379
            .heldItem = ITEM_SCOPE_LENS,
#line 5382
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 0, 60, 0),
#line 5384
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5380
            .ability = ABILITY_KEEN_EYE,
#line 5381
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5383
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5385
                MOVE_DUAL_WINGBEAT,
                MOVE_STEEL_WING,
                MOVE_TAILWIND,
                MOVE_UPROAR,
            },
            },
            {
#line 5390
            .species = SPECIES_BOMBIRDIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5390
            .heldItem = ITEM_CHARTI_BERRY,
#line 5393
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 0, 0, 60),
#line 5395
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5391
            .ability = ABILITY_ROCKY_PAYLOAD,
#line 5392
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5394
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5395
                MOVE_FOUL_PLAY,
                MOVE_ROCK_SLIDE,
                MOVE_ACROBATICS,
                MOVE_FEATHER_DANCE,
            },
            },
            {
#line 5400
            .species = SPECIES_ORICORIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5400
            .heldItem = ITEM_ABSORB_BULB,
#line 5403
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 60, 80),
#line 5405
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5401
            .ability = ABILITY_DANCER,
#line 5402
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5404
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5405
                MOVE_REVELATION_DANCE,
                MOVE_ACROBATICS,
                MOVE_SWORDS_DANCE,
                MOVE_TAILWIND,
            },
            },
            {
#line 5410
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5410
            .heldItem = ITEM_WIDE_LENS,
#line 5413
            .ev = TRAINER_PARTY_EVS(0, 0, 100, 40, 0, 0),
#line 5415
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5411
            .ability = ABILITY_KEEN_EYE,
#line 5412
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5414
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5415
                MOVE_DREAM_EATER,
                MOVE_AIR_SLASH,
                MOVE_PSYBEAM,
                MOVE_HYPNOSIS,
            },
            },
        },
    },
#line 5420
    [DIFFICULTY_NORMAL][TRAINER_0F3D8011] =
    {
#line 5421
        .trainerName = _("0F3D8011"),
#line 5422
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5424
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5423
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5425
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5426
        .mapSec = MAPSEC_ROUTE11,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 5428
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5428
            .heldItem = ITEM_EVIOLITE,
#line 5431
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5432
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5429
            .ability = ABILITY_FRIEND_GUARD,
#line 5430
            .lvl = 54,
            .ball = POKEBALL_COUNT,
#line 5433
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5434
                MOVE_FOLLOW_ME,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_NIGHT_SHADE,
            },
            },
            {
#line 5439
            .species = SPECIES_GREEDENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5439
            .heldItem = ITEM_SITRUS_BERRY,
#line 5442
            .ev = TRAINER_PARTY_EVS(252, 48, 0, 0, 0, 0),
#line 5443
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5440
            .ability = ABILITY_CHEEK_POUCH,
#line 5441
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 5444
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5445
                MOVE_BODY_PRESS,
                MOVE_BODY_SLAM,
                MOVE_COUNTER,
                MOVE_CRUNCH,
            },
            },
            {
#line 5450
            .species = SPECIES_ARBOLIVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5450
            .heldItem = ITEM_SITRUS_BERRY,
#line 5453
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 0, 252, 0),
#line 5454
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5451
            .ability = ABILITY_HARVEST,
#line 5452
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 5455
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5456
                MOVE_GIGA_DRAIN,
                MOVE_EARTH_POWER,
                MOVE_LEECH_SEED,
                MOVE_SYNTHESIS,
            },
            },
            {
#line 5461
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5461
            .heldItem = ITEM_SITRUS_BERRY,
#line 5464
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 48, 0, 0),
#line 5465
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5462
            .ability = ABILITY_PICKUP,
#line 5463
            .lvl = 52,
            .ball = POKEBALL_COUNT,
#line 5466
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5467
                MOVE_WILD_CHARGE,
                MOVE_PLAY_ROUGH,
                MOVE_SEED_BOMB,
                MOVE_FOLLOW_ME,
            },
            },
            {
#line 5472
            .species = SPECIES_POLTEAGEIST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5472
            .heldItem = ITEM_STARF_BERRY,
#line 5475
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 148, 152, 0),
#line 5477
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5473
            .ability = ABILITY_WEAK_ARMOR,
#line 5474
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 5476
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5478
                MOVE_TEATIME,
                MOVE_GIGA_DRAIN,
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
            },
            },
        },
    },
#line 5483
    [DIFFICULTY_NORMAL][TRAINER_0F3DB5D8] =
    {
#line 5484
        .trainerName = _("0F3DB5D8"),
#line 5485
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5487
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5486
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5489
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5488
        .mapSec = MAPSEC_ROUTE11,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5491
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5491
            .heldItem = ITEM_BLACK_SLUDGE,
#line 5494
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 252, 0, 0),
#line 5496
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5492
            .ability = ABILITY_CLEAR_BODY,
#line 5493
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5495
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5497
                MOVE_TOXIC_SPIKES,
                MOVE_VENOSHOCK,
                MOVE_HEX,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 5502
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5502
            .heldItem = ITEM_SPELL_TAG,
#line 5505
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 48, 0),
#line 5506
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5503
            .ability = ABILITY_LEVITATE,
#line 5504
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 5507
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5508
                MOVE_HEX,
                MOVE_DAZZLING_GLEAM,
                MOVE_MEAN_LOOK,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 5513
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5513
            .heldItem = ITEM_FOCUS_SASH,
#line 5516
            .ev = TRAINER_PARTY_EVS(48, 252, 0, 0, 0, 0),
#line 5517
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5514
            .ability = ABILITY_SNIPER,
#line 5515
            .lvl = 52,
            .ball = POKEBALL_COUNT,
#line 5518
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5519
                MOVE_VENOSHOCK,
                MOVE_TOXIC_THREAD,
                MOVE_FELL_STINGER,
                MOVE_SUCKER_PUNCH,
            },
            },
        },
    },
#line 5524
    [DIFFICULTY_NORMAL][TRAINER_0F5F82C3] =
    {
#line 5525
        .trainerName = _("0F5F82C3"),
#line 5526
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5528
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5527
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5530
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5529
        .mapSec = MAPSEC_ROUTE11,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5532
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5532
            .heldItem = ITEM_PAYAPA_BERRY,
#line 5535
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 48, 0, 0),
#line 5536
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5533
            .ability = ABILITY_POISON_TOUCH,
#line 5534
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 5537
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5538
                MOVE_FAKE_OUT,
                MOVE_SUCKER_PUNCH,
                MOVE_POISON_JAB,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 5543
    [DIFFICULTY_NORMAL][TRAINER_0FFBCCB9] =
    {
#line 5544
        .trainerName = _("0FFBCCB9"),
#line 5545
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5547
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5546
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5549
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5548
        .mapSec = MAPSEC_ROUTE11,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5551
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5551
            .heldItem = ITEM_WEAKNESS_POLICY,
#line 5554
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5555
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5552
            .ability = ABILITY_PRESSURE,
#line 5553
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5556
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5557
                MOVE_FUTURE_SIGHT,
                MOVE_SHADOW_SNEAK,
                MOVE_LEECH_LIFE,
                MOVE_PAIN_SPLIT,
            },
            },
            {
#line 5562
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5562
            .heldItem = ITEM_EXPERT_BELT,
#line 5565
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5566
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5563
            .ability = ABILITY_JUSTIFIED,
#line 5564
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5567
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5568
                MOVE_FUTURE_SIGHT,
                MOVE_DRAIN_PUNCH,
                MOVE_PSYCHO_CUT,
                MOVE_X_SCISSOR,
            },
            },
            {
#line 5573
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5573
            .heldItem = ITEM_FAIRY_FEATHER,
#line 5576
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 48, 0),
#line 5578
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5574
            .ability = ABILITY_TRACE,
#line 5575
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5577
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5579
                MOVE_FUTURE_SIGHT,
                MOVE_DRAINING_KISS,
                MOVE_PSYCHIC,
                MOVE_MYSTICAL_FIRE,
            },
            },
            {
#line 5584
            .species = SPECIES_ORBEETLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5584
            .heldItem = ITEM_LEFTOVERS,
#line 5587
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 48, 252, 0),
#line 5589
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5585
            .ability = ABILITY_SWARM,
#line 5586
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 5588
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5590
                MOVE_FUTURE_SIGHT,
                MOVE_BUG_BUZZ,
                MOVE_INFESTATION,
                MOVE_SUBSTITUTE,
            },
            },
        },
    },
#line 5595
    [DIFFICULTY_NORMAL][TRAINER_1075163A] =
    {
#line 5596
        .trainerName = _("1075163A"),
#line 5597
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5601
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5598
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5600
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5599
        .mapSec = MAPSEC_FORT_YOBU,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5603
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5603
            .heldItem = ITEM_ROSELI_BERRY,
#line 5606
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 48, 0),
#line 5607
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5604
            .ability = ABILITY_LEVITATE,
#line 5605
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5608
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5609
                MOVE_BELCH,
                MOVE_ACROBATICS,
                MOVE_DRAGON_BREATH,
                MOVE_TAILWIND,
            },
            },
            {
#line 5614
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5614
            .heldItem = ITEM_SALAC_BERRY,
#line 5617
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 48, 0, 0),
#line 5618
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5615
            .ability = ABILITY_STURDY,
#line 5616
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5619
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5620
                MOVE_FLAIL,
                MOVE_ROCK_TOMB,
                MOVE_WATERFALL,
                MOVE_SCALE_SHOT,
            },
            },
            {
#line 5625
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5625
            .heldItem = ITEM_IAPAPA_BERRY,
#line 5628
            .ev = TRAINER_PARTY_EVS(52, 248, 0, 0, 0, 0),
#line 5630
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5626
            .ability = ABILITY_GLUTTONY,
#line 5627
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5629
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5631
                MOVE_BELLY_DRUM,
                MOVE_EXTREME_SPEED,
                MOVE_THROAT_CHOP,
                MOVE_THUNDER_WAVE,
            },
            },
        },
    },
#line 5636
    [DIFFICULTY_NORMAL][TRAINER_10751EAA] =
    {
#line 5637
        .trainerName = _("10751EAA"),
#line 5638
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5642
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5639
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5641
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5640
        .mapSec = MAPSEC_FORT_YOBU,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 5644
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5644
            .heldItem = ITEM_PAYAPA_BERRY,
#line 5647
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 48),
#line 5649
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5645
            .ability = ABILITY_LEVITATE,
#line 5646
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5648
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5650
                MOVE_TOXIC_SPIKES,
                MOVE_SLUDGE_BOMB,
                MOVE_HEAT_WAVE,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 5655
            .species = SPECIES_PANGORO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5655
            .heldItem = ITEM_SITRUS_BERRY,
#line 5658
            .ev = TRAINER_PARTY_EVS(48, 252, 0, 0, 0, 0),
#line 5660
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5656
            .ability = ABILITY_SCRAPPY,
#line 5657
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5659
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5661
                MOVE_SUBSTITUTE,
                MOVE_CIRCLE_THROW,
                MOVE_DARKEST_LARIAT,
                MOVE_GUNK_SHOT,
            },
            },
            {
#line 5666
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5666
            .heldItem = ITEM_ASSAULT_VEST,
#line 5669
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 48, 252, 0),
#line 5670
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5667
            .ability = ABILITY_FLAME_BODY,
#line 5668
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5671
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5672
                MOVE_LAVA_PLUME,
                MOVE_SCORCHING_SANDS,
                MOVE_THUNDERBOLT,
                MOVE_FIRE_SPIN,
            },
            },
            {
#line 5677
            .species = SPECIES_CRAMORANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5677
            .heldItem = ITEM_FOCUS_SASH,
#line 5680
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 0, 252, 0),
#line 5682
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5678
            .ability = ABILITY_GULP_MISSILE,
#line 5679
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5681
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5683
                MOVE_AGILITY,
                MOVE_SURF,
                MOVE_ENDEAVOR,
                MOVE_WHIRLPOOL,
            },
            },
            {
#line 5688
            .species = SPECIES_SKUNTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5688
            .heldItem = ITEM_AIR_BALLOON,
#line 5691
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 48, 252, 0),
#line 5693
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5689
            .ability = ABILITY_AFTERMATH,
#line 5690
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5692
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5694
                MOVE_HEX,
                MOVE_VENOSHOCK,
                MOVE_NASTY_PLOT,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 5699
    [DIFFICULTY_NORMAL][TRAINER_10E3552B] =
    {
#line 5700
        .trainerName = _("10E3552B"),
#line 5701
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5703
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5702
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5704
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5705
        .mapSec = MAPSEC_FORT_YOBU,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5707
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5707
            .heldItem = ITEM_FOCUS_SASH,
#line 5710
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5711
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5708
            .ability = ABILITY_REGENERATOR,
#line 5709
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5712
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5713
                MOVE_FAKE_OUT,
                MOVE_DRAIN_PUNCH,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 5718
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5718
            .heldItem = ITEM_LEFTOVERS,
#line 5721
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 48),
#line 5723
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5719
            .ability = ABILITY_REGENERATOR,
#line 5720
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5722
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5724
                MOVE_SCALD,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
                MOVE_SLACK_OFF,
            },
            },
            {
#line 5729
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5729
            .heldItem = ITEM_EVIOLITE,
#line 5732
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5734
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5730
            .ability = ABILITY_SERENE_GRACE,
#line 5731
            .lvl = 48,
            .ball = POKEBALL_COUNT,
#line 5733
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5735
                MOVE_DRAINING_KISS,
                MOVE_ANCIENT_POWER,
                MOVE_WISH,
                MOVE_BATON_PASS,
            },
            },
            {
#line 5740
            .species = SPECIES_LIEPARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5740
            .heldItem = ITEM_NORMAL_GEM,
#line 5743
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5745
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5741
            .ability = ABILITY_UNBURDEN,
#line 5742
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5744
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5746
                MOVE_U_TURN,
                MOVE_FAKE_OUT,
                MOVE_DARK_PULSE,
                MOVE_PLAY_ROUGH,
            },
            },
        },
    },
#line 5751
    [DIFFICULTY_NORMAL][TRAINER_1114BC23] =
    {
#line 5752
        .trainerName = _("1114BC23"),
#line 5753
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5755
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5754
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5756
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5757
        .mapSec = MAPSEC_FORT_YOBU,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5759
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5759
            .heldItem = ITEM_TOXIC_ORB,
#line 5762
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 48, 0, 0),
#line 5764
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5760
            .ability = ABILITY_POISON_HEAL,
#line 5761
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5763
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5765
                MOVE_SUBSTITUTE,
                MOVE_DRAIN_PUNCH,
                MOVE_GIGA_DRAIN,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 5770
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5770
            .heldItem = ITEM_BIG_ROOT,
#line 5773
            .ev = TRAINER_PARTY_EVS(252, 0, 24, 0, 0, 24),
#line 5775
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5771
            .ability = ABILITY_DRY_SKIN,
#line 5772
            .lvl = 47,
            .ball = POKEBALL_COUNT,
#line 5774
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5776
                MOVE_LEECH_SEED,
                MOVE_LEECH_LIFE,
                MOVE_GIGA_DRAIN,
                MOVE_SPORE,
            },
            },
            {
#line 5781
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5781
            .heldItem = ITEM_LEFTOVERS,
#line 5784
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5786
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5782
            .ability = ABILITY_FLASH_FIRE,
#line 5783
            .lvl = 48,
            .ball = POKEBALL_COUNT,
#line 5785
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5787
                MOVE_BITTER_BLADE,
                MOVE_PHANTOM_FORCE,
                MOVE_WILL_O_WISP,
                MOVE_BULK_UP,
            },
            },
            {
#line 5792
            .species = SPECIES_FLORGES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5792
            .heldItem = ITEM_BABIRI_BERRY,
#line 5795
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5797
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5793
            .ability = ABILITY_FLOWER_VEIL,
#line 5794
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5796
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5798
                MOVE_MOONBLAST,
                MOVE_STORED_POWER,
                MOVE_CALM_MIND,
                MOVE_SYNTHESIS,
            },
            },
        },
    },
#line 5803
    [DIFFICULTY_NORMAL][TRAINER_114EB3AD] =
    {
#line 5804
        .trainerName = _("114EB3AD"),
#line 5805
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5807
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5806
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5808
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5809
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5811
            .species = SPECIES_PURUGLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5811
            .heldItem = ITEM_FOCUS_SASH,
#line 5814
            .ev = TRAINER_PARTY_EVS(0, 244, 124, 0, 0, 28),
#line 5816
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5812
            .ability = ABILITY_DEFIANT,
#line 5813
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5815
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5816
                MOVE_FAKE_OUT,
                MOVE_DOUBLE_TEAM,
                MOVE_BODY_SLAM,
                MOVE_SUPER_FANG,
            },
            },
            {
#line 5821
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5821
            .heldItem = ITEM_MUSCLE_BAND,
#line 5824
            .ev = TRAINER_PARTY_EVS(0, 248, 0, 0, 0, 148),
#line 5826
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5822
            .ability = ABILITY_TECHNICIAN,
#line 5823
            .lvl = 48,
            .ball = POKEBALL_COUNT,
#line 5825
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5826
                MOVE_MACH_PUNCH,
                MOVE_BULLET_SEED,
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 5831
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5831
            .heldItem = ITEM_RED_CARD,
#line 5834
            .ev = TRAINER_PARTY_EVS(0, 124, 0, 148, 124, 0),
#line 5836
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5832
            .ability = ABILITY_ILLUSION,
#line 5833
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5835
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5836
                MOVE_NIGHT_DAZE,
                MOVE_FLAMETHROWER,
                MOVE_EXTRASENSORY,
                MOVE_SLUDGE_BOMB,
            },
            },
            {
#line 5841
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5841
            .heldItem = ITEM_TOXIC_ORB,
#line 5844
            .ev = TRAINER_PARTY_EVS(0, 248, 52, 0, 0, 100),
#line 5846
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5842
            .ability = ABILITY_QUICK_FEET,
#line 5843
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 5845
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5846
                MOVE_ROAR,
                MOVE_ICE_PUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_PLAY_ROUGH,
            },
            },
        },
    },
#line 5851
    [DIFFICULTY_NORMAL][TRAINER_11EDE0DC] =
    {
#line 5852
        .trainerName = _("11EDE0DC"),
#line 5853
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5855
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5854
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5856
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5857
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5859
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5859
            .heldItem = ITEM_PAYAPA_BERRY,
#line 5862
            .ev = TRAINER_PARTY_EVS(0, 0, 88, 0, 216, 96),
#line 5864
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5860
            .ability = ABILITY_STICKY_HOLD,
#line 5861
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 5863
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5864
                MOVE_TOXIC_SPIKES,
                MOVE_SLUDGE_WAVE,
                MOVE_GIGA_DRAIN,
                MOVE_MUD_SHOT,
            },
            },
            {
#line 5869
            .species = SPECIES_SCRAFTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5869
            .heldItem = ITEM_ROSELI_BERRY,
#line 5872
            .ev = TRAINER_PARTY_EVS(0, 116, 132, 0, 0, 148),
#line 5874
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5870
            .ability = ABILITY_INTIMIDATE,
#line 5871
            .lvl = 48,
            .ball = POKEBALL_COUNT,
#line 5873
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5874
                MOVE_DRAGON_TAIL,
                MOVE_ZEN_HEADBUTT,
                MOVE_DRAGON_DANCE,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 5879
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5879
            .heldItem = ITEM_RED_CARD,
#line 5882
            .ev = TRAINER_PARTY_EVS(136, 0, 44, 0, 136, 76),
#line 5884
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5880
            .ability = ABILITY_SHEER_FORCE,
#line 5881
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 5883
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5884
                MOVE_ICE_BEAM,
                MOVE_VENOSHOCK,
                MOVE_EARTH_POWER,
                MOVE_TOXIC_SPIKES,
            },
            },
            {
#line 5889
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5889
            .heldItem = ITEM_SCOPE_LENS,
#line 5892
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 148, 0),
#line 5894
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5890
            .ability = ABILITY_SUPER_LUCK,
#line 5891
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5893
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5894
                MOVE_HEX,
                MOVE_HEAT_WAVE,
                MOVE_AIR_CUTTER,
                MOVE_PSYCHIC_NOISE,
            },
            },
        },
    },
#line 5899
    [DIFFICULTY_NORMAL][TRAINER_120A20F6] =
    {
#line 5900
        .trainerName = _("120A20F6"),
#line 5901
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5903
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5902
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5904
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5905
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5907
            .species = SPECIES_KLEFKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5907
            .heldItem = ITEM_RED_CARD,
#line 5910
            .ev = TRAINER_PARTY_EVS(48, 0, 84, 0, 116, 148),
#line 5912
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5908
            .ability = ABILITY_PRANKSTER,
#line 5909
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 5911
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5912
                MOVE_SPIKES,
                MOVE_STEEL_BEAM,
                MOVE_MISTY_TERRAIN,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 5917
            .species = SPECIES_SLURPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5917
            .heldItem = ITEM_MISTY_SEED,
#line 5920
            .ev = TRAINER_PARTY_EVS(116, 0, 28, 252, 0, 0),
#line 5922
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5918
            .ability = ABILITY_UNBURDEN,
#line 5919
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5921
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5922
                MOVE_STICKY_WEB,
                MOVE_SURF,
                MOVE_FLAMETHROWER,
                MOVE_ENERGY_BALL,
            },
            },
            {
#line 5927
            .species = SPECIES_MINIOR_INDIGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5927
            .heldItem = ITEM_SITRUS_BERRY,
#line 5930
            .ev = TRAINER_PARTY_EVS(0, 148, 0, 248, 0, 0),
#line 5932
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5928
            .ability = ABILITY_SHIELDS_DOWN,
#line 5929
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 5931
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5932
                MOVE_STEALTH_ROCK,
                MOVE_ANCIENT_POWER,
                MOVE_SCORCHING_SANDS,
                MOVE_ACROBATICS,
            },
            },
            {
#line 5937
            .species = SPECIES_PANGORO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5937
            .heldItem = ITEM_LIECHI_BERRY,
#line 5940
            .ev = TRAINER_PARTY_EVS(148, 116, 36, 0, 0, 100),
#line 5942
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5938
            .ability = ABILITY_SCRAPPY,
#line 5939
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5941
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5942
                MOVE_CIRCLE_THROW,
                MOVE_LOW_KICK,
                MOVE_EARTHQUAKE,
                MOVE_DARKEST_LARIAT,
            },
            },
        },
    },
#line 5947
    [DIFFICULTY_NORMAL][TRAINER_13113EC0] =
    {
#line 5948
        .trainerName = _("13113EC0"),
#line 5949
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5951
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5950
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5952
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5953
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5955
            .species = SPECIES_VIKAVOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5955
            .heldItem = ITEM_QUICK_CLAW,
#line 5958
            .ev = TRAINER_PARTY_EVS(184, 0, 0, 0, 208, 8),
#line 5960
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5956
            .ability = ABILITY_LEVITATE,
#line 5957
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5959
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5961
                MOVE_STICKY_WEB,
                MOVE_VOLT_SWITCH,
                MOVE_ENERGY_BALL,
                MOVE_BUG_BUZZ,
            },
            },
            {
#line 5966
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5966
            .heldItem = ITEM_RED_CARD,
#line 5969
            .ev = TRAINER_PARTY_EVS(248, 0, 140, 0, 0, 8),
#line 5971
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5967
            .ability = ABILITY_HEATPROOF,
#line 5968
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 5970
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5972
                MOVE_STEALTH_ROCK,
                MOVE_ZEN_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 5977
            .species = SPECIES_URSALUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5977
            .heldItem = ITEM_BERSERK_GENE,
#line 5980
            .ev = TRAINER_PARTY_EVS(156, 124, 116, 0, 0, 0),
#line 5982
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5978
            .ability = ABILITY_UNNERVE,
#line 5979
            .lvl = 48,
            .ball = POKEBALL_COUNT,
#line 5981
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5983
                MOVE_PLAY_ROUGH,
                MOVE_BRICK_BREAK,
                MOVE_BODY_SLAM,
                MOVE_BULLDOZE,
            },
            },
        },
    },
#line 5988
    [DIFFICULTY_NORMAL][TRAINER_1387ABBC] =
    {
#line 5989
        .trainerName = _("1387ABBC"),
#line 5990
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5992
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5991
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5993
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5994
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5996
            .species = SPECIES_ORBEETLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5996
            .heldItem = ITEM_RED_CARD,
#line 5999
            .ev = TRAINER_PARTY_EVS(136, 0, 40, 224, 0, 0),
#line 6001
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5997
            .ability = ABILITY_SWARM,
#line 5998
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 6000
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6002
                MOVE_STICKY_WEB,
                MOVE_HYPNOSIS,
                MOVE_PSYCHIC_NOISE,
                MOVE_BUG_BUZZ,
            },
            },
            {
#line 6007
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6007
            .heldItem = ITEM_EVIOLITE,
#line 6010
            .ev = TRAINER_PARTY_EVS(184, 0, 108, 0, 0, 104),
#line 6012
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6008
            .ability = ABILITY_DEFIANT,
#line 6009
            .lvl = 48,
            .ball = POKEBALL_COUNT,
#line 6011
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6013
                MOVE_STEALTH_ROCK,
                MOVE_STONE_EDGE,
                MOVE_DRAIN_PUNCH,
                MOVE_POISON_JAB,
            },
            },
        },
    },
#line 6018
    [DIFFICULTY_NORMAL][TRAINER_148A3C6B] =
    {
#line 6019
        .trainerName = _("148A3C6B"),
#line 6020
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6022
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6021
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6023
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6024
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6026
            .species = SPECIES_TOEDSCRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6026
            .heldItem = ITEM_YACHE_BERRY,
#line 6029
            .ev = TRAINER_PARTY_EVS(140, 0, 72, 0, 104, 80),
#line 6031
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6027
            .ability = ABILITY_MYCELIUM_MIGHT,
#line 6028
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 6030
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6032
                MOVE_SPORE,
                MOVE_TOXIC_SPIKES,
                MOVE_EARTH_POWER,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6037
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6037
            .heldItem = ITEM_BLUNDER_POLICY,
#line 6040
            .ev = TRAINER_PARTY_EVS(80, 0, 112, 52, 152, 0),
#line 6042
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6038
            .ability = ABILITY_INSOMNIA,
#line 6039
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 6041
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6043
                MOVE_HYPNOSIS,
                MOVE_HURRICANE,
                MOVE_WHIRLWIND,
                MOVE_EXTRASENSORY,
            },
            },
        },
    },
#line 6048
    [DIFFICULTY_NORMAL][TRAINER_14C5EE6C] =
    {
#line 6049
        .trainerName = _("14C5EE6C"),
#line 6050
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6052
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6051
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6053
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6054
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6056
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6056
            .heldItem = ITEM_WACAN_BERRY,
#line 6059
            .ev = TRAINER_PARTY_EVS(0, 144, 0, 252, 0, 4),
#line 6061
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6057
            .ability = ABILITY_MOXIE,
#line 6058
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 6060
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6062
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
                MOVE_AQUA_TAIL,
                MOVE_ICE_FANG,
            },
            },
            {
#line 6067
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6067
            .heldItem = ITEM_SITRUS_BERRY,
#line 6070
            .ev = TRAINER_PARTY_EVS(252, 0, 88, 0, 0, 60),
#line 6071
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6068
            .ability = ABILITY_CUTE_CHARM,
#line 6069
            .lvl = 48,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6072
                MOVE_FOLLOW_ME,
                MOVE_HELPING_HAND,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
            },
            },
        },
    },
#line 6077
    [DIFFICULTY_NORMAL][TRAINER_1508BB71] =
    {
#line 6078
        .trainerName = _("1508BB71"),
#line 6079
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6081
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6080
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6082
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6083
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6085
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6085
            .heldItem = ITEM_LEFTOVERS,
#line 6088
            .ev = TRAINER_PARTY_EVS(208, 0, 184, 0, 8, 0),
#line 6090
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6086
            .ability = ABILITY_SNOW_CLOAK,
#line 6087
            .lvl = 47,
            .ball = POKEBALL_COUNT,
#line 6089
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6091
                MOVE_SNOWSCAPE,
                MOVE_BLIZZARD,
                MOVE_REST,
                MOVE_REFLECT,
            },
            },
            {
#line 6096
            .species = SPECIES_BEARTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6096
            .heldItem = ITEM_STARF_BERRY,
#line 6099
            .ev = TRAINER_PARTY_EVS(0, 252, 72, 0, 0, 72),
#line 6101
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6097
            .ability = ABILITY_SNOW_CLOAK,
#line 6098
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 6100
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6102
                MOVE_SNOWSCAPE,
                MOVE_AVALANCHE,
                MOVE_SHEER_COLD,
            },
            },
        },
    },
#line 6106
    [DIFFICULTY_NORMAL][TRAINER_1510C80A] =
    {
#line 6107
        .trainerName = _("1510C80A"),
#line 6108
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6110
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6109
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6111
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6112
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6114
            .species = SPECIES_MUDSDALE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6114
            .heldItem = ITEM_SMOOTH_ROCK,
#line 6117
            .ev = TRAINER_PARTY_EVS(156, 0, 244, 0, 0, 0),
#line 6119
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6115
            .ability = ABILITY_STAMINA,
#line 6116
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 6118
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6120
                MOVE_SANDSTORM,
                MOVE_BODY_PRESS,
                MOVE_COUNTER,
                MOVE_CURSE,
            },
            },
            {
#line 6125
            .species = SPECIES_SANDACONDA,
#line 6125
            .gender = TRAINER_MON_MALE,
#line 6125
            .heldItem = ITEM_RED_CARD,
#line 6128
            .ev = TRAINER_PARTY_EVS(152, 88, 156, 0, 0, 0),
#line 6129
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6126
            .ability = ABILITY_SAND_SPIT,
#line 6127
            .lvl = 44,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6130
                MOVE_HURRICANE,
                MOVE_DRILL_RUN,
                MOVE_FIRE_FANG,
                MOVE_SKITTER_SMACK,
            },
            },
            {
#line 6135
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6135
            .heldItem = ITEM_LIFE_ORB,
#line 6138
            .ev = TRAINER_PARTY_EVS(0, 0, 148, 0, 252, 0),
#line 6139
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6136
            .ability = ABILITY_MAGIC_GUARD,
#line 6137
            .lvl = 47,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6140
                MOVE_PSYCHIC,
                MOVE_THUNDER_PUNCH,
                MOVE_SHADOW_BALL,
                MOVE_ENERGY_BALL,
            },
            },
        },
    },
#line 6145
    [DIFFICULTY_NORMAL][TRAINER_15598A38] =
    {
#line 6146
        .trainerName = _("15598A38"),
#line 6147
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6149
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6148
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6150
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6151
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6153
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6153
            .heldItem = ITEM_EXPERT_BELT,
#line 6156
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 144, 0, 0),
#line 6158
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6154
            .ability = ABILITY_PURE_POWER,
#line 6155
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 6157
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6159
                MOVE_HIGH_JUMP_KICK,
                MOVE_POISON_JAB,
                MOVE_ZEN_HEADBUTT,
                MOVE_FIRE_PUNCH,
            },
            },
            {
#line 6164
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6164
            .heldItem = ITEM_EXPERT_BELT,
#line 6167
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 148, 0, 0),
#line 6169
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6165
            .ability = ABILITY_PURE_POWER,
#line 6166
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 6168
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6170
                MOVE_ICE_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_ZEN_HEADBUTT,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 6175
            .species = SPECIES_LOKIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6175
            .heldItem = ITEM_EXPERT_BELT,
#line 6178
            .ev = TRAINER_PARTY_EVS(0, 204, 0, 196, 0, 0),
#line 6180
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6176
            .ability = ABILITY_TINTED_LENS,
#line 6177
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 6179
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6181
                MOVE_BUG_BITE,
                MOVE_AERIAL_ACE,
                MOVE_LASH_OUT,
                MOVE_DOUBLE_KICK,
            },
            },
        },
    },
#line 6186
    [DIFFICULTY_NORMAL][TRAINER_15A66566] =
    {
#line 6187
        .trainerName = _("15A66566"),
#line 6188
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6190
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6189
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6191
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6192
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6194
            .species = SPECIES_HAWLUCHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6194
            .heldItem = ITEM_ORAN_BERRY,
#line 6197
            .ev = TRAINER_PARTY_EVS(252, 0, 72, 0, 0, 72),
#line 6199
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6195
            .ability = ABILITY_UNBURDEN,
#line 6196
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 6198
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6200
                MOVE_TAUNT,
                MOVE_ENCORE,
                MOVE_HELPING_HAND,
                MOVE_BRICK_BREAK,
            },
            },
            {
#line 6205
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6205
            .heldItem = ITEM_KINGS_ROCK,
#line 6208
            .ev = TRAINER_PARTY_EVS(76, 252, 72, 0, 0, 0),
#line 6210
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6206
            .ability = ABILITY_ARENA_TRAP,
#line 6207
            .lvl = 40,
            .ball = POKEBALL_COUNT,
#line 6209
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6211
                MOVE_QUICK_ATTACK,
                MOVE_BITE,
                MOVE_STONE_EDGE,
                MOVE_BULLDOZE,
            },
            },
            {
#line 6216
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6216
            .heldItem = ITEM_CHOICE_BAND,
#line 6219
            .ev = TRAINER_PARTY_EVS(76, 252, 72, 0, 0, 0),
#line 6221
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6217
            .ability = ABILITY_ARENA_TRAP,
#line 6218
            .lvl = 40,
            .ball = POKEBALL_COUNT,
#line 6220
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6222
                MOVE_QUICK_ATTACK,
                MOVE_BUG_BITE,
                MOVE_STONE_EDGE,
                MOVE_BULLDOZE,
            },
            },
        },
    },
#line 6227
    [DIFFICULTY_NORMAL][TRAINER_15C87858] =
    {
#line 6228
        .trainerName = _("15C87858"),
#line 6229
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6231
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6230
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6232
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6233
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6235
            .species = SPECIES_SWADLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6238
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6236
            .ability = ABILITY_OVERCOAT,
#line 6237
            .lvl = 45,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6239
                MOVE_LIGHT_SCREEN,
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6244
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6247
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6245
            .ability = ABILITY_HYPER_CUTTER,
#line 6246
            .lvl = 41,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6248
                MOVE_TOXIC,
                MOVE_PROTECT,
                MOVE_SUBSTITUTE,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 6253
            .species = SPECIES_TOEDSCRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6256
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6254
            .ability = ABILITY_MYCELIUM_MIGHT,
#line 6255
            .lvl = 44,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6257
                MOVE_SUBSTITUTE,
                MOVE_LEECH_SEED,
                MOVE_PROTECT,
                MOVE_HEX,
            },
            },
        },
    },
#line 6262
    [DIFFICULTY_NORMAL][TRAINER_1648CE6E] =
    {
#line 6263
        .trainerName = _("1648CE6E"),
#line 6264
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6266
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6265
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6267
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6268
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6270
            .species = SPECIES_VANILLUXE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6270
            .heldItem = ITEM_ICY_ROCK,
#line 6273
            .ev = TRAINER_PARTY_EVS(132, 0, 76, 0, 172, 16),
#line 6275
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6271
            .ability = ABILITY_SNOW_WARNING,
#line 6272
            .lvl = 42,
            .ball = POKEBALL_COUNT,
#line 6274
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6276
                MOVE_MIST,
                MOVE_BLIZZARD,
                MOVE_EXPLOSION,
            },
            },
            {
#line 6280
            .species = SPECIES_CHANSEY,
#line 6280
            .gender = TRAINER_MON_FEMALE,
#line 6280
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 6283
            .ev = TRAINER_PARTY_EVS(0, 0, 144, 0, 252, 0),
#line 6285
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6281
            .ability = ABILITY_SERENE_GRACE,
#line 6282
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 6284
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6286
                MOVE_SNOWSCAPE,
                MOVE_BLIZZARD,
                MOVE_HEALING_WISH,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 6291
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6291
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 6294
            .ev = TRAINER_PARTY_EVS(64, 0, 44, 0, 252, 40),
#line 6296
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6292
            .ability = ABILITY_WATER_ABSORB,
#line 6293
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 6295
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6297
                MOVE_SNOWSCAPE,
                MOVE_BLIZZARD,
                MOVE_PSYCHIC_NOISE,
                MOVE_FREEZE_DRY,
            },
            },
            {
#line 6302
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6302
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 6305
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 148, 252, 0),
#line 6307
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6303
            .ability = ABILITY_SWIFT_SWIM,
#line 6304
            .lvl = 41,
            .ball = POKEBALL_COUNT,
#line 6306
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6308
                MOVE_SNOWSCAPE,
                MOVE_BLIZZARD,
                MOVE_BOUNCE,
                MOVE_SHELL_SMASH,
            },
            },
        },
    },
#line 6313
    [DIFFICULTY_NORMAL][TRAINER_1710375D] =
    {
#line 6314
        .trainerName = _("1710375D"),
#line 6315
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6317
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6316
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6318
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6319
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6321
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6321
            .heldItem = ITEM_AIR_BALLOON,
#line 6324
            .ev = TRAINER_PARTY_EVS(104, 252, 44, 0, 0, 0),
#line 6325
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6322
            .ability = ABILITY_MOLD_BREAKER,
#line 6323
            .lvl = 45,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6326
                MOVE_EARTHQUAKE,
                MOVE_SWORDS_DANCE,
                MOVE_RAPID_SPIN,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 6331
            .species = SPECIES_FRAXURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6331
            .heldItem = ITEM_SITRUS_BERRY,
#line 6334
            .ev = TRAINER_PARTY_EVS(92, 108, 172, 0, 0, 28),
#line 6335
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6332
            .ability = ABILITY_MOLD_BREAKER,
#line 6333
            .lvl = 40,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6336
                MOVE_STOMPING_TANTRUM,
                MOVE_SWORDS_DANCE,
                MOVE_SCALE_SHOT,
                MOVE_BREAKING_SWIPE,
            },
            },
            {
#line 6341
            .species = SPECIES_PANGORO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6341
            .heldItem = ITEM_EXPERT_BELT,
#line 6344
            .ev = TRAINER_PARTY_EVS(108, 248, 44, 0, 0, 0),
#line 6345
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6342
            .ability = ABILITY_MOLD_BREAKER,
#line 6343
            .lvl = 46,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6346
                MOVE_DRAIN_PUNCH,
                MOVE_THIEF,
                MOVE_ICE_PUNCH,
                MOVE_BULLET_PUNCH,
            },
            },
            {
#line 6351
            .species = SPECIES_HAWLUCHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6351
            .heldItem = ITEM_PAYAPA_BERRY,
#line 6354
            .ev = TRAINER_PARTY_EVS(68, 248, 0, 0, 0, 80),
#line 6355
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6352
            .ability = ABILITY_MOLD_BREAKER,
#line 6353
            .lvl = 45,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6356
                MOVE_SWORDS_DANCE,
                MOVE_DUAL_WINGBEAT,
                MOVE_FLYING_PRESS,
                MOVE_GRASS_KNOT,
            },
            },
        },
    },
#line 6361
    [DIFFICULTY_NORMAL][TRAINER_17DCC938] =
    {
#line 6362
        .trainerName = _("17DCC938"),
#line 6363
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6365
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6364
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6366
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6367
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6369
            .species = SPECIES_HONEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6369
            .heldItem = ITEM_ORAN_BERRY,
#line 6372
            .ev = TRAINER_PARTY_EVS(80, 160, 80, 0, 0, 80),
#line 6373
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6370
            .ability = ABILITY_NO_GUARD,
#line 6371
            .lvl = 35,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6374
                MOVE_ROCK_SLIDE,
                MOVE_FURY_CUTTER,
                MOVE_STEEL_BEAM,
            },
            },
            {
#line 6378
            .species = SPECIES_DOUBLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6378
            .heldItem = ITEM_SITRUS_BERRY,
#line 6381
            .ev = TRAINER_PARTY_EVS(172, 92, 132, 0, 0, 0),
#line 6382
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6379
            .ability = ABILITY_NO_GUARD,
#line 6380
            .lvl = 40,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6383
                MOVE_BRICK_BREAK,
                MOVE_GYRO_BALL,
                MOVE_NIGHT_SLASH,
                MOVE_BRUTAL_SWING,
            },
            },
            {
#line 6388
            .species = SPECIES_AEGISLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6388
            .heldItem = ITEM_AIR_BALLOON,
#line 6391
            .ev = TRAINER_PARTY_EVS(108, 252, 36, 0, 0, 0),
#line 6393
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6389
            .ability = ABILITY_STANCE_CHANGE,
#line 6390
            .lvl = 42,
            .ball = POKEBALL_COUNT,
#line 6392
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6394
                MOVE_KINGS_SHIELD,
                MOVE_SWORDS_DANCE,
                MOVE_SHADOW_SNEAK,
                MOVE_CLOSE_COMBAT,
            },
            },
            {
#line 6399
            .species = SPECIES_AEGISLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6399
            .heldItem = ITEM_LEFTOVERS,
#line 6402
            .ev = TRAINER_PARTY_EVS(108, 0, 36, 0, 252, 0),
#line 6404
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6400
            .ability = ABILITY_STANCE_CHANGE,
#line 6401
            .lvl = 42,
            .ball = POKEBALL_COUNT,
#line 6403
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6405
                MOVE_KINGS_SHIELD,
                MOVE_SHADOW_BALL,
                MOVE_SUBSTITUTE,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 6410
    [DIFFICULTY_NORMAL][TRAINER_188A6F20] =
    {
#line 6411
        .trainerName = _("188A6F20"),
#line 6412
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6413
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6415
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6417
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6416
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6418
    [DIFFICULTY_NORMAL][TRAINER_1932C509] =
    {
#line 6419
        .trainerName = _("1932C509"),
#line 6420
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6421
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6423
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6425
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6424
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6426
    [DIFFICULTY_NORMAL][TRAINER_19477C78] =
    {
#line 6427
        .trainerName = _("19477C78"),
#line 6428
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6429
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6431
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6433
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6432
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6434
    [DIFFICULTY_NORMAL][TRAINER_19C5BAD7] =
    {
#line 6435
        .trainerName = _("19C5BAD7"),
#line 6436
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6437
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6439
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6441
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6440
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6442
    [DIFFICULTY_NORMAL][TRAINER_19CD0726] =
    {
#line 6443
        .trainerName = _("19CD0726"),
#line 6444
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6445
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6447
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6449
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6448
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6450
    [DIFFICULTY_NORMAL][TRAINER_19D7682B] =
    {
#line 6451
        .trainerName = _("19D7682B"),
#line 6452
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6453
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6455
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6457
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6456
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6458
    [DIFFICULTY_NORMAL][TRAINER_1A2CA162] =
    {
#line 6459
        .trainerName = _("1A2CA162"),
#line 6460
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6461
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6463
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6465
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6464
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6466
    [DIFFICULTY_NORMAL][TRAINER_1A763631] =
    {
#line 6467
        .trainerName = _("1A763631"),
#line 6468
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6469
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6471
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6473
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6472
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6474
    [DIFFICULTY_NORMAL][TRAINER_1AE5CAF7] =
    {
#line 6475
        .trainerName = _("1AE5CAF7"),
#line 6476
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6477
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6479
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6481
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6480
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6482
    [DIFFICULTY_NORMAL][TRAINER_1AE89BEB] =
    {
#line 6483
        .trainerName = _("1AE89BEB"),
#line 6484
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6485
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6487
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6489
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6488
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6490
    [DIFFICULTY_NORMAL][TRAINER_1AEA3CEA] =
    {
#line 6491
        .trainerName = _("1AEA3CEA"),
#line 6492
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6493
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6495
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6497
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6496
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6498
    [DIFFICULTY_NORMAL][TRAINER_1B517ABD] =
    {
#line 6499
        .trainerName = _("1B517ABD"),
#line 6500
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6501
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6503
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6505
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6504
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6506
    [DIFFICULTY_NORMAL][TRAINER_1B616469] =
    {
#line 6507
        .trainerName = _("1B616469"),
#line 6508
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6509
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6511
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6513
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6512
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6514
    [DIFFICULTY_NORMAL][TRAINER_1BA35D11] =
    {
#line 6515
        .trainerName = _("1BA35D11"),
#line 6516
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6517
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6519
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6521
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6520
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6522
    [DIFFICULTY_NORMAL][TRAINER_1BB1218F] =
    {
#line 6523
        .trainerName = _("1BB1218F"),
#line 6524
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6525
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6527
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6529
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6528
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6530
    [DIFFICULTY_NORMAL][TRAINER_1BC45966] =
    {
#line 6531
        .trainerName = _("1BC45966"),
#line 6532
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6533
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6535
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6537
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6536
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6538
    [DIFFICULTY_NORMAL][TRAINER_1C2B088C] =
    {
#line 6539
        .trainerName = _("1C2B088C"),
#line 6540
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6541
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6543
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6545
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6544
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6546
    [DIFFICULTY_NORMAL][TRAINER_1C6CA7F6] =
    {
#line 6547
        .trainerName = _("1C6CA7F6"),
#line 6548
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6549
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6551
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6553
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6552
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6554
    [DIFFICULTY_NORMAL][TRAINER_1CBE4FB1] =
    {
#line 6555
        .trainerName = _("1CBE4FB1"),
#line 6556
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6557
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6559
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6561
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6560
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6562
    [DIFFICULTY_NORMAL][TRAINER_1CBFAF10] =
    {
#line 6563
        .trainerName = _("1CBFAF10"),
#line 6564
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6565
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6567
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6569
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6568
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6570
    [DIFFICULTY_NORMAL][TRAINER_1CC4D5D6] =
    {
#line 6571
        .trainerName = _("1CC4D5D6"),
#line 6572
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6573
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6575
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6577
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6576
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6578
    [DIFFICULTY_NORMAL][TRAINER_1D63E5A1] =
    {
#line 6579
        .trainerName = _("1D63E5A1"),
#line 6580
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6581
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6583
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6585
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6584
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6586
    [DIFFICULTY_NORMAL][TRAINER_1D7A6DED] =
    {
#line 6587
        .trainerName = _("1D7A6DED"),
#line 6588
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6589
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6591
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6593
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6592
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6594
    [DIFFICULTY_NORMAL][TRAINER_1D93B10D] =
    {
#line 6595
        .trainerName = _("1D93B10D"),
#line 6596
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6597
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6599
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6601
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6600
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6602
    [DIFFICULTY_NORMAL][TRAINER_1DD07C78] =
    {
#line 6603
        .trainerName = _("1DD07C78"),
#line 6604
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6605
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6607
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6609
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6608
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6610
    [DIFFICULTY_NORMAL][TRAINER_1E5E6E80] =
    {
#line 6611
        .trainerName = _("1E5E6E80"),
#line 6612
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6613
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6615
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6617
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6616
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6618
    [DIFFICULTY_NORMAL][TRAINER_1EE34E30] =
    {
#line 6619
        .trainerName = _("1EE34E30"),
#line 6620
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6621
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6623
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6625
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6624
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6626
    [DIFFICULTY_NORMAL][TRAINER_1F24A6B1] =
    {
#line 6627
        .trainerName = _("1F24A6B1"),
#line 6628
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6631
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6633
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6632
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6634
    [DIFFICULTY_NORMAL][TRAINER_1F2A70D3] =
    {
#line 6635
        .trainerName = _("1F2A70D3"),
#line 6636
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6637
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6639
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6641
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6640
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6642
    [DIFFICULTY_NORMAL][TRAINER_1FD08020] =
    {
#line 6643
        .trainerName = _("1FD08020"),
#line 6644
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6645
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6647
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6649
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6648
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6650
    [DIFFICULTY_NORMAL][TRAINER_200650CA] =
    {
#line 6651
        .trainerName = _("200650CA"),
#line 6652
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6653
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6655
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6657
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6656
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6658
    [DIFFICULTY_NORMAL][TRAINER_20170FA5] =
    {
#line 6659
        .trainerName = _("20170FA5"),
#line 6660
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6661
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6663
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6665
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6664
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6666
    [DIFFICULTY_NORMAL][TRAINER_20993B87] =
    {
#line 6667
        .trainerName = _("20993B87"),
#line 6668
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6669
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6671
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6673
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6672
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6674
    [DIFFICULTY_NORMAL][TRAINER_20A10A97] =
    {
#line 6675
        .trainerName = _("20A10A97"),
#line 6676
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6677
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6679
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6681
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6680
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6682
    [DIFFICULTY_NORMAL][TRAINER_20A6F3A6] =
    {
#line 6683
        .trainerName = _("20A6F3A6"),
#line 6684
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6685
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6687
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6689
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6688
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6690
    [DIFFICULTY_NORMAL][TRAINER_20DC389D] =
    {
#line 6691
        .trainerName = _("20DC389D"),
#line 6692
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6693
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6695
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6697
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6696
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6698
    [DIFFICULTY_NORMAL][TRAINER_2177173C] =
    {
#line 6699
        .trainerName = _("2177173C"),
#line 6700
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6701
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6703
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6705
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6704
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6706
    [DIFFICULTY_NORMAL][TRAINER_2180E5CD] =
    {
#line 6707
        .trainerName = _("2180E5CD"),
#line 6708
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6709
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6711
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6713
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6712
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6714
    [DIFFICULTY_NORMAL][TRAINER_21EB8B2C] =
    {
#line 6715
        .trainerName = _("21EB8B2C"),
#line 6716
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6717
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6719
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6721
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6720
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6722
    [DIFFICULTY_NORMAL][TRAINER_22BA389B] =
    {
#line 6723
        .trainerName = _("22BA389B"),
#line 6724
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6725
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6727
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6729
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6728
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6730
    [DIFFICULTY_NORMAL][TRAINER_22DD5E2B] =
    {
#line 6731
        .trainerName = _("22DD5E2B"),
#line 6732
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6733
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6735
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6737
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6736
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6738
    [DIFFICULTY_NORMAL][TRAINER_22E7DE36] =
    {
#line 6739
        .trainerName = _("22E7DE36"),
#line 6740
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6741
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6743
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6745
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6744
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6746
    [DIFFICULTY_NORMAL][TRAINER_23C3170F] =
    {
#line 6747
        .trainerName = _("23C3170F"),
#line 6748
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6749
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6751
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6753
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6752
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6754
    [DIFFICULTY_NORMAL][TRAINER_23F50BC3] =
    {
#line 6755
        .trainerName = _("23F50BC3"),
#line 6756
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6757
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6759
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6761
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6760
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6762
    [DIFFICULTY_NORMAL][TRAINER_2434A25C] =
    {
#line 6763
        .trainerName = _("2434A25C"),
#line 6764
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6765
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6767
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6769
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6768
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6770
    [DIFFICULTY_NORMAL][TRAINER_245235C9] =
    {
#line 6771
        .trainerName = _("245235C9"),
#line 6772
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6773
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6775
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6777
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6776
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6778
    [DIFFICULTY_NORMAL][TRAINER_246CBBD5] =
    {
#line 6779
        .trainerName = _("246CBBD5"),
#line 6780
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6781
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6783
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6785
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6784
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6786
    [DIFFICULTY_NORMAL][TRAINER_247FE019] =
    {
#line 6787
        .trainerName = _("247FE019"),
#line 6788
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6789
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6791
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6793
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6792
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6794
    [DIFFICULTY_NORMAL][TRAINER_24AAFD0D] =
    {
#line 6795
        .trainerName = _("24AAFD0D"),
#line 6796
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6797
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6799
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6801
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6800
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6802
    [DIFFICULTY_NORMAL][TRAINER_24AC96DF] =
    {
#line 6803
        .trainerName = _("24AC96DF"),
#line 6804
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6805
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6807
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6809
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6808
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6810
    [DIFFICULTY_NORMAL][TRAINER_2561CB61] =
    {
#line 6811
        .trainerName = _("2561CB61"),
#line 6812
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6813
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6815
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6817
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6816
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6818
    [DIFFICULTY_NORMAL][TRAINER_26268FB4] =
    {
#line 6819
        .trainerName = _("26268FB4"),
#line 6820
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6821
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6823
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6825
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6824
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6826
    [DIFFICULTY_NORMAL][TRAINER_265174A6] =
    {
#line 6827
        .trainerName = _("265174A6"),
#line 6828
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6829
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6831
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6833
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6832
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6834
    [DIFFICULTY_NORMAL][TRAINER_272FA5B8] =
    {
#line 6835
        .trainerName = _("272FA5B8"),
#line 6836
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6837
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6839
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6841
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6840
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6842
    [DIFFICULTY_NORMAL][TRAINER_27B23C10] =
    {
#line 6843
        .trainerName = _("27B23C10"),
#line 6844
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6845
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6847
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6849
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6848
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6850
    [DIFFICULTY_NORMAL][TRAINER_27CEF8F2] =
    {
#line 6851
        .trainerName = _("27CEF8F2"),
#line 6852
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6855
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6857
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6856
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6858
    [DIFFICULTY_NORMAL][TRAINER_27E6F69F] =
    {
#line 6859
        .trainerName = _("27E6F69F"),
#line 6860
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6861
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6863
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6865
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6864
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6866
    [DIFFICULTY_NORMAL][TRAINER_28B294D2] =
    {
#line 6867
        .trainerName = _("28B294D2"),
#line 6868
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6869
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6871
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6873
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6872
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6874
    [DIFFICULTY_NORMAL][TRAINER_28E0625E] =
    {
#line 6875
        .trainerName = _("28E0625E"),
#line 6876
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6877
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6879
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6881
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6880
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6882
    [DIFFICULTY_NORMAL][TRAINER_292E386F] =
    {
#line 6883
        .trainerName = _("292E386F"),
#line 6884
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6885
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6887
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6889
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6888
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6890
    [DIFFICULTY_NORMAL][TRAINER_29AE727B] =
    {
#line 6891
        .trainerName = _("29AE727B"),
#line 6892
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6893
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6895
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6897
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6896
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6898
    [DIFFICULTY_NORMAL][TRAINER_2A305E88] =
    {
#line 6899
        .trainerName = _("2A305E88"),
#line 6900
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6901
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6903
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6905
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6904
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6906
    [DIFFICULTY_NORMAL][TRAINER_2A3F43CA] =
    {
#line 6907
        .trainerName = _("2A3F43CA"),
#line 6908
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6909
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6911
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6913
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6912
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6914
    [DIFFICULTY_NORMAL][TRAINER_2A7BF9FF] =
    {
#line 6915
        .trainerName = _("2A7BF9FF"),
#line 6916
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6917
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6919
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6921
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6920
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6922
    [DIFFICULTY_NORMAL][TRAINER_2A83B15E] =
    {
#line 6923
        .trainerName = _("2A83B15E"),
#line 6924
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6925
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6927
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6929
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6928
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6930
    [DIFFICULTY_NORMAL][TRAINER_2AD73BF3] =
    {
#line 6931
        .trainerName = _("2AD73BF3"),
#line 6932
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6933
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6935
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6937
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6936
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6938
    [DIFFICULTY_NORMAL][TRAINER_2B163825] =
    {
#line 6939
        .trainerName = _("2B163825"),
#line 6940
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6941
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6943
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6945
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6944
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6946
    [DIFFICULTY_NORMAL][TRAINER_2B249E40] =
    {
#line 6947
        .trainerName = _("2B249E40"),
#line 6948
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6949
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6951
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6953
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6952
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6954
    [DIFFICULTY_NORMAL][TRAINER_2BCA066C] =
    {
#line 6955
        .trainerName = _("2BCA066C"),
#line 6956
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6957
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6959
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6961
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6960
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6962
    [DIFFICULTY_NORMAL][TRAINER_2C040422] =
    {
#line 6963
        .trainerName = _("2C040422"),
#line 6964
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6965
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6967
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6969
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6968
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6970
    [DIFFICULTY_NORMAL][TRAINER_2C22CE48] =
    {
#line 6971
        .trainerName = _("2C22CE48"),
#line 6972
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6973
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6975
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6977
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6976
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6978
    [DIFFICULTY_NORMAL][TRAINER_2C398893] =
    {
#line 6979
        .trainerName = _("2C398893"),
#line 6980
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6981
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6983
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6985
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6984
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6986
    [DIFFICULTY_NORMAL][TRAINER_2C5FFA9F] =
    {
#line 6987
        .trainerName = _("2C5FFA9F"),
#line 6988
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6989
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6991
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6993
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6992
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6994
    [DIFFICULTY_NORMAL][TRAINER_2D1A100A] =
    {
#line 6995
        .trainerName = _("2D1A100A"),
#line 6996
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6999
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7001
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7000
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7002
    [DIFFICULTY_NORMAL][TRAINER_2D203158] =
    {
#line 7003
        .trainerName = _("2D203158"),
#line 7004
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7005
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7007
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7009
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7008
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7010
    [DIFFICULTY_NORMAL][TRAINER_2D29DC23] =
    {
#line 7011
        .trainerName = _("2D29DC23"),
#line 7012
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7013
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7015
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7017
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7016
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7018
    [DIFFICULTY_NORMAL][TRAINER_2D6DE246] =
    {
#line 7019
        .trainerName = _("2D6DE246"),
#line 7020
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7021
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7023
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7025
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7024
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7026
    [DIFFICULTY_NORMAL][TRAINER_2D92F001] =
    {
#line 7027
        .trainerName = _("2D92F001"),
#line 7028
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7029
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7031
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7033
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7032
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7034
    [DIFFICULTY_NORMAL][TRAINER_2DC29B9E] =
    {
#line 7035
        .trainerName = _("2DC29B9E"),
#line 7036
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7037
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7039
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7041
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7040
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7042
    [DIFFICULTY_NORMAL][TRAINER_2E218A8E] =
    {
#line 7043
        .trainerName = _("2E218A8E"),
#line 7044
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7045
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7047
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7049
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7048
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7050
    [DIFFICULTY_NORMAL][TRAINER_2E593FA9] =
    {
#line 7051
        .trainerName = _("2E593FA9"),
#line 7052
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7053
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7055
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7057
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7056
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7058
    [DIFFICULTY_NORMAL][TRAINER_2EC49459] =
    {
#line 7059
        .trainerName = _("2EC49459"),
#line 7060
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7061
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7063
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7065
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7064
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7066
    [DIFFICULTY_NORMAL][TRAINER_2F0770D3] =
    {
#line 7067
        .trainerName = _("2F0770D3"),
#line 7068
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7069
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7071
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7073
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7072
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7074
    [DIFFICULTY_NORMAL][TRAINER_2F09421D] =
    {
#line 7075
        .trainerName = _("2F09421D"),
#line 7076
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7077
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7079
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7081
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7080
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7082
    [DIFFICULTY_NORMAL][TRAINER_2FF79A0B] =
    {
#line 7083
        .trainerName = _("2FF79A0B"),
#line 7084
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7085
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7087
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7089
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7088
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7090
    [DIFFICULTY_NORMAL][TRAINER_3009CC76] =
    {
#line 7091
        .trainerName = _("3009CC76"),
#line 7092
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7093
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7095
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7097
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7096
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7098
    [DIFFICULTY_NORMAL][TRAINER_30522A9A] =
    {
#line 7099
        .trainerName = _("30522A9A"),
#line 7100
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7101
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7103
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7105
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7104
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7106
    [DIFFICULTY_NORMAL][TRAINER_30ACE135] =
    {
#line 7107
        .trainerName = _("30ACE135"),
#line 7108
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7109
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7111
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7113
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7112
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7114
    [DIFFICULTY_NORMAL][TRAINER_311B3EFC] =
    {
#line 7115
        .trainerName = _("311B3EFC"),
#line 7116
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7117
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7119
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7121
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7120
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7122
    [DIFFICULTY_NORMAL][TRAINER_317B8932] =
    {
#line 7123
        .trainerName = _("317B8932"),
#line 7124
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7125
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7127
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7129
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7128
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7130
    [DIFFICULTY_NORMAL][TRAINER_31D36FE6] =
    {
#line 7131
        .trainerName = _("31D36FE6"),
#line 7132
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7133
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7135
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7137
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7136
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7138
    [DIFFICULTY_NORMAL][TRAINER_32C1F13D] =
    {
#line 7139
        .trainerName = _("32C1F13D"),
#line 7140
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7141
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7143
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7145
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7144
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7146
    [DIFFICULTY_NORMAL][TRAINER_33AB4856] =
    {
#line 7147
        .trainerName = _("33AB4856"),
#line 7148
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7149
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7151
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7153
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7152
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7154
    [DIFFICULTY_NORMAL][TRAINER_3566F099] =
    {
#line 7155
        .trainerName = _("3566F099"),
#line 7156
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7157
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7159
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7161
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7160
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7162
    [DIFFICULTY_NORMAL][TRAINER_35E0E027] =
    {
#line 7163
        .trainerName = _("35E0E027"),
#line 7164
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7165
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7167
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7169
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7168
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7170
    [DIFFICULTY_NORMAL][TRAINER_36662EEF] =
    {
#line 7171
        .trainerName = _("36662EEF"),
#line 7172
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7175
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7177
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7176
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7178
    [DIFFICULTY_NORMAL][TRAINER_3681E8DE] =
    {
#line 7179
        .trainerName = _("3681E8DE"),
#line 7180
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7181
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7183
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7185
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7184
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7186
    [DIFFICULTY_NORMAL][TRAINER_3789DC6E] =
    {
#line 7187
        .trainerName = _("3789DC6E"),
#line 7188
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7189
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7191
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7193
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7192
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7194
    [DIFFICULTY_NORMAL][TRAINER_37B9EFB7] =
    {
#line 7195
        .trainerName = _("37B9EFB7"),
#line 7196
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7197
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7199
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7201
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7200
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7202
    [DIFFICULTY_NORMAL][TRAINER_37EDB78E] =
    {
#line 7203
        .trainerName = _("37EDB78E"),
#line 7204
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7205
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7207
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7209
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7208
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7210
    [DIFFICULTY_NORMAL][TRAINER_382E2AB3] =
    {
#line 7211
        .trainerName = _("382E2AB3"),
#line 7212
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7213
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7215
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7217
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7216
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7218
    [DIFFICULTY_NORMAL][TRAINER_3842496B] =
    {
#line 7219
        .trainerName = _("3842496B"),
#line 7220
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7221
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7223
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7225
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7224
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7226
    [DIFFICULTY_NORMAL][TRAINER_387351C1] =
    {
#line 7227
        .trainerName = _("387351C1"),
#line 7228
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7229
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7231
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7233
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7232
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7234
    [DIFFICULTY_NORMAL][TRAINER_38A47BDB] =
    {
#line 7235
        .trainerName = _("38A47BDB"),
#line 7236
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7237
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7239
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7241
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7240
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7242
    [DIFFICULTY_NORMAL][TRAINER_3924756E] =
    {
#line 7243
        .trainerName = _("3924756E"),
#line 7244
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7245
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7247
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7249
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7248
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7250
    [DIFFICULTY_NORMAL][TRAINER_3947ACC3] =
    {
#line 7251
        .trainerName = _("3947ACC3"),
#line 7252
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7253
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7255
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7257
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7256
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7258
    [DIFFICULTY_NORMAL][TRAINER_39AD4606] =
    {
#line 7259
        .trainerName = _("39AD4606"),
#line 7260
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7261
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7263
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7265
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7264
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7266
    [DIFFICULTY_NORMAL][TRAINER_39E0AE4F] =
    {
#line 7267
        .trainerName = _("39E0AE4F"),
#line 7268
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7269
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7271
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7273
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7272
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7274
    [DIFFICULTY_NORMAL][TRAINER_39E78D45] =
    {
#line 7275
        .trainerName = _("39E78D45"),
#line 7276
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7277
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7279
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7281
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7280
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7282
    [DIFFICULTY_NORMAL][TRAINER_3A11452B] =
    {
#line 7283
        .trainerName = _("3A11452B"),
#line 7284
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7285
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7287
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7289
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7288
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7290
    [DIFFICULTY_NORMAL][TRAINER_3A840205] =
    {
#line 7291
        .trainerName = _("3A840205"),
#line 7292
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7293
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7295
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7297
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7296
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7298
    [DIFFICULTY_NORMAL][TRAINER_3AD97475] =
    {
#line 7299
        .trainerName = _("3AD97475"),
#line 7300
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7301
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7303
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7305
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7304
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7306
    [DIFFICULTY_NORMAL][TRAINER_3AEE4974] =
    {
#line 7307
        .trainerName = _("3AEE4974"),
#line 7308
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7309
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7311
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7313
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7312
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7314
    [DIFFICULTY_NORMAL][TRAINER_3BAF0C60] =
    {
#line 7315
        .trainerName = _("3BAF0C60"),
#line 7316
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7317
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7319
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7321
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7320
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7322
    [DIFFICULTY_NORMAL][TRAINER_3BDED445] =
    {
#line 7323
        .trainerName = _("3BDED445"),
#line 7324
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7325
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7327
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7329
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7328
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7330
    [DIFFICULTY_NORMAL][TRAINER_3C621048] =
    {
#line 7331
        .trainerName = _("3C621048"),
#line 7332
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7333
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7335
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7337
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7336
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7338
    [DIFFICULTY_NORMAL][TRAINER_3C74DAE2] =
    {
#line 7339
        .trainerName = _("3C74DAE2"),
#line 7340
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7341
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7343
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7345
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7344
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7346
    [DIFFICULTY_NORMAL][TRAINER_3C7AC359] =
    {
#line 7347
        .trainerName = _("3C7AC359"),
#line 7348
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7349
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7351
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7353
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7352
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7354
    [DIFFICULTY_NORMAL][TRAINER_3CDE5F9E] =
    {
#line 7355
        .trainerName = _("3CDE5F9E"),
#line 7356
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7357
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7359
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7361
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7360
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7362
    [DIFFICULTY_NORMAL][TRAINER_3CECE368] =
    {
#line 7363
        .trainerName = _("3CECE368"),
#line 7364
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7365
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7367
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7369
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7368
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7370
    [DIFFICULTY_NORMAL][TRAINER_3CFF3841] =
    {
#line 7371
        .trainerName = _("3CFF3841"),
#line 7372
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7373
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7375
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7377
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7376
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7378
    [DIFFICULTY_NORMAL][TRAINER_3D502E2F] =
    {
#line 7379
        .trainerName = _("3D502E2F"),
#line 7380
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7381
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7383
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7385
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7384
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7386
    [DIFFICULTY_NORMAL][TRAINER_3D7FDE57] =
    {
#line 7387
        .trainerName = _("3D7FDE57"),
#line 7388
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7389
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7391
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7393
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7392
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7394
    [DIFFICULTY_NORMAL][TRAINER_3DCD0BBC] =
    {
#line 7395
        .trainerName = _("3DCD0BBC"),
#line 7396
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7397
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7399
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7401
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7400
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7402
    [DIFFICULTY_NORMAL][TRAINER_3E17924C] =
    {
#line 7403
        .trainerName = _("3E17924C"),
#line 7404
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7405
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7407
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7409
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7408
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7410
    [DIFFICULTY_NORMAL][TRAINER_3EB6FA04] =
    {
#line 7411
        .trainerName = _("3EB6FA04"),
#line 7412
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7413
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7415
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7417
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7416
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7418
    [DIFFICULTY_NORMAL][TRAINER_3EFCF1C8] =
    {
#line 7419
        .trainerName = _("3EFCF1C8"),
#line 7420
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7421
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7423
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7425
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7424
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7426
    [DIFFICULTY_NORMAL][TRAINER_3F0BF52E] =
    {
#line 7427
        .trainerName = _("3F0BF52E"),
#line 7428
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7429
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7431
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7433
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7432
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7434
    [DIFFICULTY_NORMAL][TRAINER_4000C8A0] =
    {
#line 7435
        .trainerName = _("4000C8A0"),
#line 7436
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7437
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7439
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7441
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7440
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7442
    [DIFFICULTY_NORMAL][TRAINER_403D932D] =
    {
#line 7443
        .trainerName = _("403D932D"),
#line 7444
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7445
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7447
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7449
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7448
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7450
    [DIFFICULTY_NORMAL][TRAINER_408862C4] =
    {
#line 7451
        .trainerName = _("408862C4"),
#line 7452
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7453
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7455
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7457
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7456
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7458
    [DIFFICULTY_NORMAL][TRAINER_419282AD] =
    {
#line 7459
        .trainerName = _("419282AD"),
#line 7460
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7461
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7463
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7465
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7464
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7466
    [DIFFICULTY_NORMAL][TRAINER_419FCBAE] =
    {
#line 7467
        .trainerName = _("419FCBAE"),
#line 7468
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7469
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7471
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7473
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7472
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7474
    [DIFFICULTY_NORMAL][TRAINER_41B8591B] =
    {
#line 7475
        .trainerName = _("41B8591B"),
#line 7476
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7477
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7479
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7481
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7480
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7482
    [DIFFICULTY_NORMAL][TRAINER_41DCF7BA] =
    {
#line 7483
        .trainerName = _("41DCF7BA"),
#line 7484
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7485
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7487
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7489
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7488
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7490
    [DIFFICULTY_NORMAL][TRAINER_4227B911] =
    {
#line 7491
        .trainerName = _("4227B911"),
#line 7492
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7493
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7495
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7497
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7496
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7498
    [DIFFICULTY_NORMAL][TRAINER_4239B726] =
    {
#line 7499
        .trainerName = _("4239B726"),
#line 7500
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7501
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7503
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7505
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7504
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7506
    [DIFFICULTY_NORMAL][TRAINER_42BC1D70] =
    {
#line 7507
        .trainerName = _("42BC1D70"),
#line 7508
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7509
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7511
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7513
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7512
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7514
    [DIFFICULTY_NORMAL][TRAINER_42BE3E94] =
    {
#line 7515
        .trainerName = _("42BE3E94"),
#line 7516
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7517
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7519
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7521
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7520
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7522
    [DIFFICULTY_NORMAL][TRAINER_42C68371] =
    {
#line 7523
        .trainerName = _("42C68371"),
#line 7524
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7525
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7527
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7529
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7528
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7530
    [DIFFICULTY_NORMAL][TRAINER_432F34FA] =
    {
#line 7531
        .trainerName = _("432F34FA"),
#line 7532
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7533
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7535
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7537
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7536
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7538
    [DIFFICULTY_NORMAL][TRAINER_437E553A] =
    {
#line 7539
        .trainerName = _("437E553A"),
#line 7540
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7541
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7543
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7545
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7544
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7546
    [DIFFICULTY_NORMAL][TRAINER_4394141C] =
    {
#line 7547
        .trainerName = _("4394141C"),
#line 7548
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7549
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7551
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7553
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7552
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7554
    [DIFFICULTY_NORMAL][TRAINER_43B111AD] =
    {
#line 7555
        .trainerName = _("43B111AD"),
#line 7556
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7557
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7559
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7561
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7560
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7562
    [DIFFICULTY_NORMAL][TRAINER_43B30B5D] =
    {
#line 7563
        .trainerName = _("43B30B5D"),
#line 7564
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7565
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7567
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7569
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7568
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7570
    [DIFFICULTY_NORMAL][TRAINER_43D6557C] =
    {
#line 7571
        .trainerName = _("43D6557C"),
#line 7572
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7573
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7575
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7577
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7576
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7578
    [DIFFICULTY_NORMAL][TRAINER_44251BF9] =
    {
#line 7579
        .trainerName = _("44251BF9"),
#line 7580
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7581
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7583
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7585
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7584
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7586
    [DIFFICULTY_NORMAL][TRAINER_44D28B98] =
    {
#line 7587
        .trainerName = _("44D28B98"),
#line 7588
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7589
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7591
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7593
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7592
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7594
    [DIFFICULTY_NORMAL][TRAINER_44E68738] =
    {
#line 7595
        .trainerName = _("44E68738"),
#line 7596
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7597
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7599
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7601
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7600
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7602
    [DIFFICULTY_NORMAL][TRAINER_44F86666] =
    {
#line 7603
        .trainerName = _("44F86666"),
#line 7604
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7605
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7607
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7609
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7608
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7610
    [DIFFICULTY_NORMAL][TRAINER_458C3B90] =
    {
#line 7611
        .trainerName = _("458C3B90"),
#line 7612
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7613
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7615
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7617
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7616
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7618
    [DIFFICULTY_NORMAL][TRAINER_45CBA787] =
    {
#line 7619
        .trainerName = _("45CBA787"),
#line 7620
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7621
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7623
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7625
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7624
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7626
    [DIFFICULTY_NORMAL][TRAINER_45E5EB22] =
    {
#line 7627
        .trainerName = _("45E5EB22"),
#line 7628
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7631
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7633
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7632
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7634
    [DIFFICULTY_NORMAL][TRAINER_45ECBA80] =
    {
#line 7635
        .trainerName = _("45ECBA80"),
#line 7636
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7637
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7639
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7641
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7640
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7642
    [DIFFICULTY_NORMAL][TRAINER_460AB144] =
    {
#line 7643
        .trainerName = _("460AB144"),
#line 7644
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7645
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7647
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7649
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7648
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7650
    [DIFFICULTY_NORMAL][TRAINER_46169EA5] =
    {
#line 7651
        .trainerName = _("46169EA5"),
#line 7652
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7653
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7655
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7657
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7656
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7658
    [DIFFICULTY_NORMAL][TRAINER_464C4C44] =
    {
#line 7659
        .trainerName = _("464C4C44"),
#line 7660
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7661
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7663
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7665
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7664
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7666
    [DIFFICULTY_NORMAL][TRAINER_473EE9DE] =
    {
#line 7667
        .trainerName = _("473EE9DE"),
#line 7668
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7669
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7671
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7673
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7672
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7674
    [DIFFICULTY_NORMAL][TRAINER_4787A98D] =
    {
#line 7675
        .trainerName = _("4787A98D"),
#line 7676
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7677
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7679
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7681
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7680
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7682
    [DIFFICULTY_NORMAL][TRAINER_479BBFEB] =
    {
#line 7683
        .trainerName = _("479BBFEB"),
#line 7684
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7685
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7687
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7689
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7688
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7690
    [DIFFICULTY_NORMAL][TRAINER_47EACF7E] =
    {
#line 7691
        .trainerName = _("47EACF7E"),
#line 7692
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7693
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7695
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7697
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7696
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7698
    [DIFFICULTY_NORMAL][TRAINER_4848801D] =
    {
#line 7699
        .trainerName = _("4848801D"),
#line 7700
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7701
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7703
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7705
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7704
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7706
    [DIFFICULTY_NORMAL][TRAINER_487BEC6D] =
    {
#line 7707
        .trainerName = _("487BEC6D"),
#line 7708
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7709
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7711
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7713
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7712
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7714
    [DIFFICULTY_NORMAL][TRAINER_492E0A66] =
    {
#line 7715
        .trainerName = _("492E0A66"),
#line 7716
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7717
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7719
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7721
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7720
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7722
    [DIFFICULTY_NORMAL][TRAINER_494ECB35] =
    {
#line 7723
        .trainerName = _("494ECB35"),
#line 7724
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7725
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7727
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7729
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7728
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7730
    [DIFFICULTY_NORMAL][TRAINER_494F5379] =
    {
#line 7731
        .trainerName = _("494F5379"),
#line 7732
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7733
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7735
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7737
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7736
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7738
    [DIFFICULTY_NORMAL][TRAINER_49805D55] =
    {
#line 7739
        .trainerName = _("49805D55"),
#line 7740
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7741
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7743
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7745
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7744
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7746
    [DIFFICULTY_NORMAL][TRAINER_49EA8A40] =
    {
#line 7747
        .trainerName = _("49EA8A40"),
#line 7748
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7749
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7751
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7753
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7752
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7754
    [DIFFICULTY_NORMAL][TRAINER_4A323E4A] =
    {
#line 7755
        .trainerName = _("4A323E4A"),
#line 7756
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7757
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7759
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7761
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7760
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7762
    [DIFFICULTY_NORMAL][TRAINER_4A3EB696] =
    {
#line 7763
        .trainerName = _("4A3EB696"),
#line 7764
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7765
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7767
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7769
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7768
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7770
    [DIFFICULTY_NORMAL][TRAINER_4ABDB43A] =
    {
#line 7771
        .trainerName = _("4ABDB43A"),
#line 7772
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7773
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7775
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7777
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7776
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7778
    [DIFFICULTY_NORMAL][TRAINER_4AD6DB47] =
    {
#line 7779
        .trainerName = _("4AD6DB47"),
#line 7780
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7781
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7783
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7785
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7784
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7786
    [DIFFICULTY_NORMAL][TRAINER_4AF51B8A] =
    {
#line 7787
        .trainerName = _("4AF51B8A"),
#line 7788
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7789
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7791
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7793
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7792
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7794
    [DIFFICULTY_NORMAL][TRAINER_4B2BC403] =
    {
#line 7795
        .trainerName = _("4B2BC403"),
#line 7796
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7797
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7799
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7801
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7800
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7802
    [DIFFICULTY_NORMAL][TRAINER_4B3B0356] =
    {
#line 7803
        .trainerName = _("4B3B0356"),
#line 7804
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7805
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7807
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7809
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7808
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7810
    [DIFFICULTY_NORMAL][TRAINER_4B431569] =
    {
#line 7811
        .trainerName = _("4B431569"),
#line 7812
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7813
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7815
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7817
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7816
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7818
    [DIFFICULTY_NORMAL][TRAINER_4B5B4954] =
    {
#line 7819
        .trainerName = _("4B5B4954"),
#line 7820
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7821
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7823
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7825
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7824
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7826
    [DIFFICULTY_NORMAL][TRAINER_4C2D23EC] =
    {
#line 7827
        .trainerName = _("4C2D23EC"),
#line 7828
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7829
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7831
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7833
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7832
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7834
    [DIFFICULTY_NORMAL][TRAINER_4CE97031] =
    {
#line 7835
        .trainerName = _("4CE97031"),
#line 7836
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7837
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7839
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7841
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7840
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7842
    [DIFFICULTY_NORMAL][TRAINER_4CF43F23] =
    {
#line 7843
        .trainerName = _("4CF43F23"),
#line 7844
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7845
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7847
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7849
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7848
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7850
    [DIFFICULTY_NORMAL][TRAINER_4D8F9D46] =
    {
#line 7851
        .trainerName = _("4D8F9D46"),
#line 7852
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7855
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7857
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7856
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7858
    [DIFFICULTY_NORMAL][TRAINER_4D98F6C4] =
    {
#line 7859
        .trainerName = _("4D98F6C4"),
#line 7860
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7861
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7863
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7865
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7864
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7866
    [DIFFICULTY_NORMAL][TRAINER_4E072263] =
    {
#line 7867
        .trainerName = _("4E072263"),
#line 7868
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7869
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7871
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7873
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7872
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7874
    [DIFFICULTY_NORMAL][TRAINER_4E0C1EFE] =
    {
#line 7875
        .trainerName = _("4E0C1EFE"),
#line 7876
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7877
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7879
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7881
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7880
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7882
    [DIFFICULTY_NORMAL][TRAINER_4E226A6E] =
    {
#line 7883
        .trainerName = _("4E226A6E"),
#line 7884
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7885
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7887
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7889
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7888
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7890
    [DIFFICULTY_NORMAL][TRAINER_4E5AAFAE] =
    {
#line 7891
        .trainerName = _("4E5AAFAE"),
#line 7892
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7893
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7895
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7897
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7896
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7898
    [DIFFICULTY_NORMAL][TRAINER_4F10DCA9] =
    {
#line 7899
        .trainerName = _("4F10DCA9"),
#line 7900
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7901
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7903
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7905
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7904
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7906
    [DIFFICULTY_NORMAL][TRAINER_50AE78E5] =
    {
#line 7907
        .trainerName = _("50AE78E5"),
#line 7908
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7909
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7911
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7913
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7912
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7914
    [DIFFICULTY_NORMAL][TRAINER_513A43EE] =
    {
#line 7915
        .trainerName = _("513A43EE"),
#line 7916
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7917
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7919
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7921
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7920
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7922
    [DIFFICULTY_NORMAL][TRAINER_51A32DCA] =
    {
#line 7923
        .trainerName = _("51A32DCA"),
#line 7924
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7925
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7927
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7929
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7928
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7930
    [DIFFICULTY_NORMAL][TRAINER_51F6B834] =
    {
#line 7931
        .trainerName = _("51F6B834"),
#line 7932
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7933
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7935
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7937
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7936
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7938
    [DIFFICULTY_NORMAL][TRAINER_5209EDF0] =
    {
#line 7939
        .trainerName = _("5209EDF0"),
#line 7940
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7941
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7943
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7945
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7944
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7946
    [DIFFICULTY_NORMAL][TRAINER_52CFC159] =
    {
#line 7947
        .trainerName = _("52CFC159"),
#line 7948
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7949
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7951
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7953
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7952
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7954
    [DIFFICULTY_NORMAL][TRAINER_538D052D] =
    {
#line 7955
        .trainerName = _("538D052D"),
#line 7956
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7957
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7959
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7961
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7960
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7962
    [DIFFICULTY_NORMAL][TRAINER_53A1A61A] =
    {
#line 7963
        .trainerName = _("53A1A61A"),
#line 7964
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7965
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7967
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7969
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7968
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7970
    [DIFFICULTY_NORMAL][TRAINER_53B06C7B] =
    {
#line 7971
        .trainerName = _("53B06C7B"),
#line 7972
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7973
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7975
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7977
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7976
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7978
    [DIFFICULTY_NORMAL][TRAINER_54110A38] =
    {
#line 7979
        .trainerName = _("54110A38"),
#line 7980
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7981
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7983
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7985
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7984
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7986
    [DIFFICULTY_NORMAL][TRAINER_549792BA] =
    {
#line 7987
        .trainerName = _("549792BA"),
#line 7988
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7989
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7991
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7993
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7992
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7994
    [DIFFICULTY_NORMAL][TRAINER_54BAC2DA] =
    {
#line 7995
        .trainerName = _("54BAC2DA"),
#line 7996
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7999
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8001
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8000
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8002
    [DIFFICULTY_NORMAL][TRAINER_54F170BE] =
    {
#line 8003
        .trainerName = _("54F170BE"),
#line 8004
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8005
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8007
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8009
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8008
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8010
    [DIFFICULTY_NORMAL][TRAINER_558F80F9] =
    {
#line 8011
        .trainerName = _("558F80F9"),
#line 8012
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8013
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8015
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8017
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8016
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8018
    [DIFFICULTY_NORMAL][TRAINER_55CA00A1] =
    {
#line 8019
        .trainerName = _("55CA00A1"),
#line 8020
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8021
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8023
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8025
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8024
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8026
    [DIFFICULTY_NORMAL][TRAINER_55D0BEAA] =
    {
#line 8027
        .trainerName = _("55D0BEAA"),
#line 8028
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8029
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8031
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8033
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8032
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8034
    [DIFFICULTY_NORMAL][TRAINER_55D90FA8] =
    {
#line 8035
        .trainerName = _("55D90FA8"),
#line 8036
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8037
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8039
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8041
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8040
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8042
    [DIFFICULTY_NORMAL][TRAINER_55EBF949] =
    {
#line 8043
        .trainerName = _("55EBF949"),
#line 8044
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8045
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8047
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8049
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8048
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8050
    [DIFFICULTY_NORMAL][TRAINER_565DE3C4] =
    {
#line 8051
        .trainerName = _("565DE3C4"),
#line 8052
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8053
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8055
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8057
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8056
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8058
    [DIFFICULTY_NORMAL][TRAINER_56775C71] =
    {
#line 8059
        .trainerName = _("56775C71"),
#line 8060
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8061
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8063
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8065
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8064
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8066
    [DIFFICULTY_NORMAL][TRAINER_56C1FE08] =
    {
#line 8067
        .trainerName = _("56C1FE08"),
#line 8068
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8069
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8071
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8073
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8072
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8074
    [DIFFICULTY_NORMAL][TRAINER_56E6EFAA] =
    {
#line 8075
        .trainerName = _("56E6EFAA"),
#line 8076
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8077
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8079
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8081
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8080
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8082
    [DIFFICULTY_NORMAL][TRAINER_57E254F5] =
    {
#line 8083
        .trainerName = _("57E254F5"),
#line 8084
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8085
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8087
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8089
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8088
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8090
    [DIFFICULTY_NORMAL][TRAINER_57E7E83A] =
    {
#line 8091
        .trainerName = _("57E7E83A"),
#line 8092
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8093
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8095
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8097
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8096
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8098
    [DIFFICULTY_NORMAL][TRAINER_5819E497] =
    {
#line 8099
        .trainerName = _("5819E497"),
#line 8100
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8101
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8103
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8105
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8104
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8106
    [DIFFICULTY_NORMAL][TRAINER_58A6A51E] =
    {
#line 8107
        .trainerName = _("58A6A51E"),
#line 8108
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8109
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8111
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8113
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8112
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8114
    [DIFFICULTY_NORMAL][TRAINER_58BEBECC] =
    {
#line 8115
        .trainerName = _("58BEBECC"),
#line 8116
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8117
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8119
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8121
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8120
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8122
    [DIFFICULTY_NORMAL][TRAINER_58F43966] =
    {
#line 8123
        .trainerName = _("58F43966"),
#line 8124
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8125
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8127
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8129
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8128
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8130
    [DIFFICULTY_NORMAL][TRAINER_59592DE4] =
    {
#line 8131
        .trainerName = _("59592DE4"),
#line 8132
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8133
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8135
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8137
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8136
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8138
    [DIFFICULTY_NORMAL][TRAINER_598585C1] =
    {
#line 8139
        .trainerName = _("598585C1"),
#line 8140
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8141
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8143
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8145
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8144
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8146
    [DIFFICULTY_NORMAL][TRAINER_59981F0D] =
    {
#line 8147
        .trainerName = _("59981F0D"),
#line 8148
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8149
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8151
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8153
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8152
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8154
    [DIFFICULTY_NORMAL][TRAINER_59E335AB] =
    {
#line 8155
        .trainerName = _("59E335AB"),
#line 8156
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8157
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8159
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8161
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8160
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8162
    [DIFFICULTY_NORMAL][TRAINER_59FFFCED] =
    {
#line 8163
        .trainerName = _("59FFFCED"),
#line 8164
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8165
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8167
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8169
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8168
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8170
    [DIFFICULTY_NORMAL][TRAINER_5ABF4FA4] =
    {
#line 8171
        .trainerName = _("5ABF4FA4"),
#line 8172
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8175
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8177
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8176
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8178
    [DIFFICULTY_NORMAL][TRAINER_5AC61FE5] =
    {
#line 8179
        .trainerName = _("5AC61FE5"),
#line 8180
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8181
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8183
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8185
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8184
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8186
    [DIFFICULTY_NORMAL][TRAINER_5AD29FF8] =
    {
#line 8187
        .trainerName = _("5AD29FF8"),
#line 8188
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8189
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8191
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8193
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8192
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8194
    [DIFFICULTY_NORMAL][TRAINER_5AD4C218] =
    {
#line 8195
        .trainerName = _("5AD4C218"),
#line 8196
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8197
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8199
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8201
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8200
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8202
    [DIFFICULTY_NORMAL][TRAINER_5B5F6AE8] =
    {
#line 8203
        .trainerName = _("5B5F6AE8"),
#line 8204
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8205
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8207
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8209
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8208
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8210
    [DIFFICULTY_NORMAL][TRAINER_5B6304FF] =
    {
#line 8211
        .trainerName = _("5B6304FF"),
#line 8212
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8213
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8215
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8217
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8216
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8218
    [DIFFICULTY_NORMAL][TRAINER_5B75B30F] =
    {
#line 8219
        .trainerName = _("5B75B30F"),
#line 8220
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8221
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8223
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8225
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8224
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8226
    [DIFFICULTY_NORMAL][TRAINER_5B983361] =
    {
#line 8227
        .trainerName = _("5B983361"),
#line 8228
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8229
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8231
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8233
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8232
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8234
    [DIFFICULTY_NORMAL][TRAINER_5BD8EA81] =
    {
#line 8235
        .trainerName = _("5BD8EA81"),
#line 8236
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8237
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8239
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8241
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8240
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8242
    [DIFFICULTY_NORMAL][TRAINER_5C315841] =
    {
#line 8243
        .trainerName = _("5C315841"),
#line 8244
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8245
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8247
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8249
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8248
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8250
    [DIFFICULTY_NORMAL][TRAINER_5C573C11] =
    {
#line 8251
        .trainerName = _("5C573C11"),
#line 8252
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8253
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8255
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8257
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8256
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8258
    [DIFFICULTY_NORMAL][TRAINER_5CAB03DD] =
    {
#line 8259
        .trainerName = _("5CAB03DD"),
#line 8260
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8261
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8263
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8265
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8264
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8266
    [DIFFICULTY_NORMAL][TRAINER_5CBDB116] =
    {
#line 8267
        .trainerName = _("5CBDB116"),
#line 8268
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8269
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8271
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8273
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8272
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8274
    [DIFFICULTY_NORMAL][TRAINER_5D0C4B8F] =
    {
#line 8275
        .trainerName = _("5D0C4B8F"),
#line 8276
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8277
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8279
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8281
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8280
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8282
    [DIFFICULTY_NORMAL][TRAINER_5D2CCD41] =
    {
#line 8283
        .trainerName = _("5D2CCD41"),
#line 8284
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8285
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8287
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8289
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8288
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8290
    [DIFFICULTY_NORMAL][TRAINER_5D5F491E] =
    {
#line 8291
        .trainerName = _("5D5F491E"),
#line 8292
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8293
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8295
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8297
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8296
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8298
    [DIFFICULTY_NORMAL][TRAINER_5D81D8F9] =
    {
#line 8299
        .trainerName = _("5D81D8F9"),
#line 8300
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8301
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8303
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8305
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8304
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8306
    [DIFFICULTY_NORMAL][TRAINER_5D86E702] =
    {
#line 8307
        .trainerName = _("5D86E702"),
#line 8308
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8309
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8311
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8313
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8312
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8314
    [DIFFICULTY_NORMAL][TRAINER_5D9ABC58] =
    {
#line 8315
        .trainerName = _("5D9ABC58"),
#line 8316
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8317
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8319
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8321
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8320
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8322
    [DIFFICULTY_NORMAL][TRAINER_5DA9F2AE] =
    {
#line 8323
        .trainerName = _("5DA9F2AE"),
#line 8324
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8325
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8327
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8329
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8328
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8330
    [DIFFICULTY_NORMAL][TRAINER_5E13316C] =
    {
#line 8331
        .trainerName = _("5E13316C"),
#line 8332
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8333
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8335
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8337
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8336
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8338
    [DIFFICULTY_NORMAL][TRAINER_5EA7A638] =
    {
#line 8339
        .trainerName = _("5EA7A638"),
#line 8340
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8341
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8343
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8345
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8344
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8346
    [DIFFICULTY_NORMAL][TRAINER_5EB4C98F] =
    {
#line 8347
        .trainerName = _("5EB4C98F"),
#line 8348
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8349
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8351
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8353
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8352
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8354
    [DIFFICULTY_NORMAL][TRAINER_5EF71DA1] =
    {
#line 8355
        .trainerName = _("5EF71DA1"),
#line 8356
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8357
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8359
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8361
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8360
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8362
    [DIFFICULTY_NORMAL][TRAINER_5F858802] =
    {
#line 8363
        .trainerName = _("5F858802"),
#line 8364
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8365
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8367
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8369
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8368
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8370
    [DIFFICULTY_NORMAL][TRAINER_5FA4C80F] =
    {
#line 8371
        .trainerName = _("5FA4C80F"),
#line 8372
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8373
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8375
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8377
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8376
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8378
    [DIFFICULTY_NORMAL][TRAINER_5FD48FB2] =
    {
#line 8379
        .trainerName = _("5FD48FB2"),
#line 8380
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8381
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8383
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8385
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8384
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8386
    [DIFFICULTY_NORMAL][TRAINER_5FF1DEC5] =
    {
#line 8387
        .trainerName = _("5FF1DEC5"),
#line 8388
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8389
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8391
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8393
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8392
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8394
    [DIFFICULTY_NORMAL][TRAINER_6016A968] =
    {
#line 8395
        .trainerName = _("6016A968"),
#line 8396
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8397
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8399
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8401
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8400
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8402
    [DIFFICULTY_NORMAL][TRAINER_6058C03B] =
    {
#line 8403
        .trainerName = _("6058C03B"),
#line 8404
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8405
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8407
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8409
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8408
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8410
    [DIFFICULTY_NORMAL][TRAINER_60C3BD24] =
    {
#line 8411
        .trainerName = _("60C3BD24"),
#line 8412
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8413
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8415
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8417
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8416
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8418
    [DIFFICULTY_NORMAL][TRAINER_60C56554] =
    {
#line 8419
        .trainerName = _("60C56554"),
#line 8420
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8421
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8423
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8425
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8424
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8426
    [DIFFICULTY_NORMAL][TRAINER_60D66B86] =
    {
#line 8427
        .trainerName = _("60D66B86"),
#line 8428
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8429
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8431
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8433
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8432
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8434
    [DIFFICULTY_NORMAL][TRAINER_6102A0FC] =
    {
#line 8435
        .trainerName = _("6102A0FC"),
#line 8436
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8437
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8439
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8441
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8440
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8442
    [DIFFICULTY_NORMAL][TRAINER_61E76999] =
    {
#line 8443
        .trainerName = _("61E76999"),
#line 8444
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8445
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8447
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8449
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8448
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8450
    [DIFFICULTY_NORMAL][TRAINER_626AECE8] =
    {
#line 8451
        .trainerName = _("626AECE8"),
#line 8452
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8453
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8455
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8457
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8456
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8458
    [DIFFICULTY_NORMAL][TRAINER_62851FFB] =
    {
#line 8459
        .trainerName = _("62851FFB"),
#line 8460
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8461
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8463
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8465
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8464
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8466
    [DIFFICULTY_NORMAL][TRAINER_62C33409] =
    {
#line 8467
        .trainerName = _("62C33409"),
#line 8468
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8469
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8471
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8473
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8472
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8474
    [DIFFICULTY_NORMAL][TRAINER_62D0F875] =
    {
#line 8475
        .trainerName = _("62D0F875"),
#line 8476
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8477
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8479
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8481
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8480
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8482
    [DIFFICULTY_NORMAL][TRAINER_63409A54] =
    {
#line 8483
        .trainerName = _("63409A54"),
#line 8484
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8485
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8487
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8489
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8488
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8490
    [DIFFICULTY_NORMAL][TRAINER_6397B964] =
    {
#line 8491
        .trainerName = _("6397B964"),
#line 8492
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8493
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8495
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8497
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8496
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8498
    [DIFFICULTY_NORMAL][TRAINER_63DB05B6] =
    {
#line 8499
        .trainerName = _("63DB05B6"),
#line 8500
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8501
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8503
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8505
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8504
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8506
    [DIFFICULTY_NORMAL][TRAINER_63DC02C9] =
    {
#line 8507
        .trainerName = _("63DC02C9"),
#line 8508
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8509
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8511
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8513
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8512
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8514
    [DIFFICULTY_NORMAL][TRAINER_6439D44C] =
    {
#line 8515
        .trainerName = _("6439D44C"),
#line 8516
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8517
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8519
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8521
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8520
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8522
    [DIFFICULTY_NORMAL][TRAINER_64E30596] =
    {
#line 8523
        .trainerName = _("64E30596"),
#line 8524
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8525
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8527
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8529
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8528
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8530
    [DIFFICULTY_NORMAL][TRAINER_6566F645] =
    {
#line 8531
        .trainerName = _("6566F645"),
#line 8532
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8533
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8535
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8537
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8536
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8538
    [DIFFICULTY_NORMAL][TRAINER_656A39C8] =
    {
#line 8539
        .trainerName = _("656A39C8"),
#line 8540
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8541
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8543
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8545
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8544
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8546
    [DIFFICULTY_NORMAL][TRAINER_656EC067] =
    {
#line 8547
        .trainerName = _("656EC067"),
#line 8548
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8549
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8551
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8553
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8552
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8554
    [DIFFICULTY_NORMAL][TRAINER_65CE4F87] =
    {
#line 8555
        .trainerName = _("65CE4F87"),
#line 8556
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8557
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8559
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8561
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8560
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8562
    [DIFFICULTY_NORMAL][TRAINER_662EBAAA] =
    {
#line 8563
        .trainerName = _("662EBAAA"),
#line 8564
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8565
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8567
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8569
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8568
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8570
    [DIFFICULTY_NORMAL][TRAINER_66531C74] =
    {
#line 8571
        .trainerName = _("66531C74"),
#line 8572
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8573
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8575
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8577
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8576
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8578
    [DIFFICULTY_NORMAL][TRAINER_66B16F22] =
    {
#line 8579
        .trainerName = _("66B16F22"),
#line 8580
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8581
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8583
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8585
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8584
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8586
    [DIFFICULTY_NORMAL][TRAINER_66D26AEC] =
    {
#line 8587
        .trainerName = _("66D26AEC"),
#line 8588
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8589
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8591
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8593
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8592
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8594
    [DIFFICULTY_NORMAL][TRAINER_675DA518] =
    {
#line 8595
        .trainerName = _("675DA518"),
#line 8596
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8597
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8599
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8601
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8600
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8602
    [DIFFICULTY_NORMAL][TRAINER_677A22D7] =
    {
#line 8603
        .trainerName = _("677A22D7"),
#line 8604
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8605
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8607
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8609
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8608
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8610
    [DIFFICULTY_NORMAL][TRAINER_6792B394] =
    {
#line 8611
        .trainerName = _("6792B394"),
#line 8612
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8613
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8615
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8617
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8616
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8618
    [DIFFICULTY_NORMAL][TRAINER_683A2305] =
    {
#line 8619
        .trainerName = _("683A2305"),
#line 8620
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8621
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8623
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8625
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8624
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8626
    [DIFFICULTY_NORMAL][TRAINER_692DD7CF] =
    {
#line 8627
        .trainerName = _("692DD7CF"),
#line 8628
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8631
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8633
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8632
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8634
    [DIFFICULTY_NORMAL][TRAINER_698BB117] =
    {
#line 8635
        .trainerName = _("698BB117"),
#line 8636
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8637
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8639
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8641
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8640
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8642
    [DIFFICULTY_NORMAL][TRAINER_69EE8132] =
    {
#line 8643
        .trainerName = _("69EE8132"),
#line 8644
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8645
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8647
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8649
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8648
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8650
    [DIFFICULTY_NORMAL][TRAINER_6A35EE35] =
    {
#line 8651
        .trainerName = _("6A35EE35"),
#line 8652
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8653
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8655
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8657
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8656
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8658
    [DIFFICULTY_NORMAL][TRAINER_6A3930E6] =
    {
#line 8659
        .trainerName = _("6A3930E6"),
#line 8660
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8661
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8663
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8665
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8664
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8666
    [DIFFICULTY_NORMAL][TRAINER_6A48F28F] =
    {
#line 8667
        .trainerName = _("6A48F28F"),
#line 8668
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8669
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8671
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8673
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8672
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8674
    [DIFFICULTY_NORMAL][TRAINER_6A8EEC78] =
    {
#line 8675
        .trainerName = _("6A8EEC78"),
#line 8676
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8677
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8679
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8681
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8680
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8682
    [DIFFICULTY_NORMAL][TRAINER_6AABC7EA] =
    {
#line 8683
        .trainerName = _("6AABC7EA"),
#line 8684
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8685
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8687
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8689
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8688
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8690
    [DIFFICULTY_NORMAL][TRAINER_6ABE3EC1] =
    {
#line 8691
        .trainerName = _("6ABE3EC1"),
#line 8692
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8693
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8695
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8697
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8696
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8698
    [DIFFICULTY_NORMAL][TRAINER_6B14C259] =
    {
#line 8699
        .trainerName = _("6B14C259"),
#line 8700
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8701
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8703
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8705
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8704
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8706
    [DIFFICULTY_NORMAL][TRAINER_6BEEE6BE] =
    {
#line 8707
        .trainerName = _("6BEEE6BE"),
#line 8708
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8709
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8711
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8713
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8712
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8714
    [DIFFICULTY_NORMAL][TRAINER_6C7736F9] =
    {
#line 8715
        .trainerName = _("6C7736F9"),
#line 8716
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8717
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8719
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8721
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8720
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8722
    [DIFFICULTY_NORMAL][TRAINER_6CC913A2] =
    {
#line 8723
        .trainerName = _("6CC913A2"),
#line 8724
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8725
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8727
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8729
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8728
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8730
    [DIFFICULTY_NORMAL][TRAINER_6D45549A] =
    {
#line 8731
        .trainerName = _("6D45549A"),
#line 8732
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8733
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8735
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8737
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8736
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8738
    [DIFFICULTY_NORMAL][TRAINER_6E1E82B2] =
    {
#line 8739
        .trainerName = _("6E1E82B2"),
#line 8740
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8741
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8743
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8745
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8744
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8746
    [DIFFICULTY_NORMAL][TRAINER_6E663040] =
    {
#line 8747
        .trainerName = _("6E663040"),
#line 8748
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8749
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8751
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8753
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8752
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8754
    [DIFFICULTY_NORMAL][TRAINER_6ED2C120] =
    {
#line 8755
        .trainerName = _("6ED2C120"),
#line 8756
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8757
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8759
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8761
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8760
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8762
    [DIFFICULTY_NORMAL][TRAINER_6F5C8078] =
    {
#line 8763
        .trainerName = _("6F5C8078"),
#line 8764
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8765
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8767
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8769
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8768
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8770
    [DIFFICULTY_NORMAL][TRAINER_6F5E9CF9] =
    {
#line 8771
        .trainerName = _("6F5E9CF9"),
#line 8772
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8773
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8775
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8777
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8776
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8778
    [DIFFICULTY_NORMAL][TRAINER_6FC24896] =
    {
#line 8779
        .trainerName = _("6FC24896"),
#line 8780
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8781
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8783
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8785
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8784
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8786
    [DIFFICULTY_NORMAL][TRAINER_6FF3213D] =
    {
#line 8787
        .trainerName = _("6FF3213D"),
#line 8788
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8789
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8791
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8793
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8792
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8794
    [DIFFICULTY_NORMAL][TRAINER_701AC24E] =
    {
#line 8795
        .trainerName = _("701AC24E"),
#line 8796
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8797
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8799
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8801
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8800
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8802
    [DIFFICULTY_NORMAL][TRAINER_703B73C4] =
    {
#line 8803
        .trainerName = _("703B73C4"),
#line 8804
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8805
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8807
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8809
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8808
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8810
    [DIFFICULTY_NORMAL][TRAINER_70C712D3] =
    {
#line 8811
        .trainerName = _("70C712D3"),
#line 8812
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8813
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8815
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8817
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8816
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8818
    [DIFFICULTY_NORMAL][TRAINER_70EAAAF5] =
    {
#line 8819
        .trainerName = _("70EAAAF5"),
#line 8820
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8821
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8823
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8825
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8824
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8826
    [DIFFICULTY_NORMAL][TRAINER_70F1A62B] =
    {
#line 8827
        .trainerName = _("70F1A62B"),
#line 8828
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8829
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8831
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8833
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8832
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8834
    [DIFFICULTY_NORMAL][TRAINER_7169C897] =
    {
#line 8835
        .trainerName = _("7169C897"),
#line 8836
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8837
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8839
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8841
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8840
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8842
    [DIFFICULTY_NORMAL][TRAINER_7178DF27] =
    {
#line 8843
        .trainerName = _("7178DF27"),
#line 8844
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8845
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8847
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8849
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8848
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8850
    [DIFFICULTY_NORMAL][TRAINER_7190E405] =
    {
#line 8851
        .trainerName = _("7190E405"),
#line 8852
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8855
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8857
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8856
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8858
    [DIFFICULTY_NORMAL][TRAINER_71CE545E] =
    {
#line 8859
        .trainerName = _("71CE545E"),
#line 8860
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8861
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8863
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8865
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8864
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8866
    [DIFFICULTY_NORMAL][TRAINER_7249425F] =
    {
#line 8867
        .trainerName = _("7249425F"),
#line 8868
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8869
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8871
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8873
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8872
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8874
    [DIFFICULTY_NORMAL][TRAINER_72641C9D] =
    {
#line 8875
        .trainerName = _("72641C9D"),
#line 8876
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8877
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8879
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8881
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8880
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8882
    [DIFFICULTY_NORMAL][TRAINER_729F2BBB] =
    {
#line 8883
        .trainerName = _("729F2BBB"),
#line 8884
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8885
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8887
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8889
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8888
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8890
    [DIFFICULTY_NORMAL][TRAINER_72F25B41] =
    {
#line 8891
        .trainerName = _("72F25B41"),
#line 8892
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8893
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8895
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8897
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8896
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8898
    [DIFFICULTY_NORMAL][TRAINER_732D4997] =
    {
#line 8899
        .trainerName = _("732D4997"),
#line 8900
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8901
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8903
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8905
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8904
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8906
    [DIFFICULTY_NORMAL][TRAINER_73A561CC] =
    {
#line 8907
        .trainerName = _("73A561CC"),
#line 8908
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8909
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8911
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8913
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8912
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8914
    [DIFFICULTY_NORMAL][TRAINER_7420DB0C] =
    {
#line 8915
        .trainerName = _("7420DB0C"),
#line 8916
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8917
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8919
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8921
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8920
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8922
    [DIFFICULTY_NORMAL][TRAINER_7435DE7C] =
    {
#line 8923
        .trainerName = _("7435DE7C"),
#line 8924
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8925
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8927
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8929
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8928
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8930
    [DIFFICULTY_NORMAL][TRAINER_75A2A667] =
    {
#line 8931
        .trainerName = _("75A2A667"),
#line 8932
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8933
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8935
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8937
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8936
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8938
    [DIFFICULTY_NORMAL][TRAINER_75D602F2] =
    {
#line 8939
        .trainerName = _("75D602F2"),
#line 8940
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8941
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8943
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8945
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8944
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8946
    [DIFFICULTY_NORMAL][TRAINER_77DDBBAF] =
    {
#line 8947
        .trainerName = _("77DDBBAF"),
#line 8948
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8949
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8951
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8953
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8952
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8954
    [DIFFICULTY_NORMAL][TRAINER_783AB388] =
    {
#line 8955
        .trainerName = _("783AB388"),
#line 8956
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8957
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8959
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8961
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8960
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8962
    [DIFFICULTY_NORMAL][TRAINER_78564BE5] =
    {
#line 8963
        .trainerName = _("78564BE5"),
#line 8964
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8965
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8967
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8969
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8968
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8970
    [DIFFICULTY_NORMAL][TRAINER_7885ECAF] =
    {
#line 8971
        .trainerName = _("7885ECAF"),
#line 8972
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8973
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8975
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8977
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8976
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8978
    [DIFFICULTY_NORMAL][TRAINER_78B73516] =
    {
#line 8979
        .trainerName = _("78B73516"),
#line 8980
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8981
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8983
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8985
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8984
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8986
    [DIFFICULTY_NORMAL][TRAINER_78BD858D] =
    {
#line 8987
        .trainerName = _("78BD858D"),
#line 8988
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8989
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8991
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8993
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8992
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8994
    [DIFFICULTY_NORMAL][TRAINER_7933DA6C] =
    {
#line 8995
        .trainerName = _("7933DA6C"),
#line 8996
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8999
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9001
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9000
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9002
    [DIFFICULTY_NORMAL][TRAINER_793992D8] =
    {
#line 9003
        .trainerName = _("793992D8"),
#line 9004
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9005
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9007
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9009
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9008
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9010
    [DIFFICULTY_NORMAL][TRAINER_797E296B] =
    {
#line 9011
        .trainerName = _("797E296B"),
#line 9012
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9013
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9015
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9017
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9016
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9018
    [DIFFICULTY_NORMAL][TRAINER_79EF1DEB] =
    {
#line 9019
        .trainerName = _("79EF1DEB"),
#line 9020
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9021
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9023
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9025
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9024
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9026
    [DIFFICULTY_NORMAL][TRAINER_7A03677D] =
    {
#line 9027
        .trainerName = _("7A03677D"),
#line 9028
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9029
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9031
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9033
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9032
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9034
    [DIFFICULTY_NORMAL][TRAINER_7A0C086F] =
    {
#line 9035
        .trainerName = _("7A0C086F"),
#line 9036
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9037
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9039
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9041
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9040
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9042
    [DIFFICULTY_NORMAL][TRAINER_7A89C403] =
    {
#line 9043
        .trainerName = _("7A89C403"),
#line 9044
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9045
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9047
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9049
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9048
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9050
    [DIFFICULTY_NORMAL][TRAINER_7A8D30C6] =
    {
#line 9051
        .trainerName = _("7A8D30C6"),
#line 9052
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9053
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9055
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9057
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9056
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9058
    [DIFFICULTY_NORMAL][TRAINER_7ABC77C1] =
    {
#line 9059
        .trainerName = _("7ABC77C1"),
#line 9060
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9061
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9063
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9065
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9064
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9066
    [DIFFICULTY_NORMAL][TRAINER_7B5DF36F] =
    {
#line 9067
        .trainerName = _("7B5DF36F"),
#line 9068
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9069
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9071
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9073
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9072
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9074
    [DIFFICULTY_NORMAL][TRAINER_7C3BD57C] =
    {
#line 9075
        .trainerName = _("7C3BD57C"),
#line 9076
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9077
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9079
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9081
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9080
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9082
    [DIFFICULTY_NORMAL][TRAINER_7C4240E1] =
    {
#line 9083
        .trainerName = _("7C4240E1"),
#line 9084
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9085
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9087
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9089
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9088
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9090
    [DIFFICULTY_NORMAL][TRAINER_7C5056CA] =
    {
#line 9091
        .trainerName = _("7C5056CA"),
#line 9092
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9093
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9095
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9097
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9096
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9098
    [DIFFICULTY_NORMAL][TRAINER_7C8BD62F] =
    {
#line 9099
        .trainerName = _("7C8BD62F"),
#line 9100
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9101
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9103
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9105
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9104
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9106
    [DIFFICULTY_NORMAL][TRAINER_7C9308EF] =
    {
#line 9107
        .trainerName = _("7C9308EF"),
#line 9108
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9109
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9111
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9113
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9112
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9114
    [DIFFICULTY_NORMAL][TRAINER_7CAF6877] =
    {
#line 9115
        .trainerName = _("7CAF6877"),
#line 9116
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9117
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9119
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9121
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9120
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9122
    [DIFFICULTY_NORMAL][TRAINER_7CBB25EB] =
    {
#line 9123
        .trainerName = _("7CBB25EB"),
#line 9124
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9125
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9127
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9129
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9128
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9130
    [DIFFICULTY_NORMAL][TRAINER_7CD1AAE1] =
    {
#line 9131
        .trainerName = _("7CD1AAE1"),
#line 9132
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9133
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9135
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9137
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9136
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9138
    [DIFFICULTY_NORMAL][TRAINER_7D0F1751] =
    {
#line 9139
        .trainerName = _("7D0F1751"),
#line 9140
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9141
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9143
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9145
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9144
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9146
    [DIFFICULTY_NORMAL][TRAINER_7D28CB20] =
    {
#line 9147
        .trainerName = _("7D28CB20"),
#line 9148
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9149
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9151
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9153
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9152
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9154
    [DIFFICULTY_NORMAL][TRAINER_7D536E72] =
    {
#line 9155
        .trainerName = _("7D536E72"),
#line 9156
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9157
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9159
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9161
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9160
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9162
    [DIFFICULTY_NORMAL][TRAINER_7DC358C0] =
    {
#line 9163
        .trainerName = _("7DC358C0"),
#line 9164
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9165
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9167
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9169
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9168
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9170
    [DIFFICULTY_NORMAL][TRAINER_7DEC9A40] =
    {
#line 9171
        .trainerName = _("7DEC9A40"),
#line 9172
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9175
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9177
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9176
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9178
    [DIFFICULTY_NORMAL][TRAINER_7E2F7EB8] =
    {
#line 9179
        .trainerName = _("7E2F7EB8"),
#line 9180
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9181
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9183
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9185
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9184
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9186
    [DIFFICULTY_NORMAL][TRAINER_7E7CD9D3] =
    {
#line 9187
        .trainerName = _("7E7CD9D3"),
#line 9188
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9189
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9191
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9193
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9192
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9194
    [DIFFICULTY_NORMAL][TRAINER_7E8CCD84] =
    {
#line 9195
        .trainerName = _("7E8CCD84"),
#line 9196
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9197
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9199
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9201
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9200
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9202
    [DIFFICULTY_NORMAL][TRAINER_8010F97E] =
    {
#line 9203
        .trainerName = _("8010F97E"),
#line 9204
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9205
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9207
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9209
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9208
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9210
    [DIFFICULTY_NORMAL][TRAINER_805C25F0] =
    {
#line 9211
        .trainerName = _("805C25F0"),
#line 9212
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9213
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9215
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9217
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9216
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9218
    [DIFFICULTY_NORMAL][TRAINER_80941A21] =
    {
#line 9219
        .trainerName = _("80941A21"),
#line 9220
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9221
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9223
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9225
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9224
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9226
    [DIFFICULTY_NORMAL][TRAINER_80AAA333] =
    {
#line 9227
        .trainerName = _("80AAA333"),
#line 9228
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9229
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9231
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9233
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9232
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9234
    [DIFFICULTY_NORMAL][TRAINER_810A3F32] =
    {
#line 9235
        .trainerName = _("810A3F32"),
#line 9236
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9237
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9239
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9241
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9240
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9242
    [DIFFICULTY_NORMAL][TRAINER_811C7730] =
    {
#line 9243
        .trainerName = _("811C7730"),
#line 9244
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9245
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9247
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9249
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9248
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9250
    [DIFFICULTY_NORMAL][TRAINER_814D0113] =
    {
#line 9251
        .trainerName = _("814D0113"),
#line 9252
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9253
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9255
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9257
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9256
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9258
    [DIFFICULTY_NORMAL][TRAINER_822DC7A8] =
    {
#line 9259
        .trainerName = _("822DC7A8"),
#line 9260
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9261
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9263
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9265
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9264
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9266
    [DIFFICULTY_NORMAL][TRAINER_827A5D21] =
    {
#line 9267
        .trainerName = _("827A5D21"),
#line 9268
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9269
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9271
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9273
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9272
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9274
    [DIFFICULTY_NORMAL][TRAINER_82A19B69] =
    {
#line 9275
        .trainerName = _("82A19B69"),
#line 9276
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9277
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9279
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9281
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9280
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9282
    [DIFFICULTY_NORMAL][TRAINER_83008F9D] =
    {
#line 9283
        .trainerName = _("83008F9D"),
#line 9284
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9285
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9287
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9289
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9288
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9290
    [DIFFICULTY_NORMAL][TRAINER_831DE561] =
    {
#line 9291
        .trainerName = _("831DE561"),
#line 9292
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9293
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9295
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9297
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9296
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9298
    [DIFFICULTY_NORMAL][TRAINER_8327758B] =
    {
#line 9299
        .trainerName = _("8327758B"),
#line 9300
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9301
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9303
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9305
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9304
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9306
    [DIFFICULTY_NORMAL][TRAINER_834B75E7] =
    {
#line 9307
        .trainerName = _("834B75E7"),
#line 9308
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9309
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9311
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9313
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9312
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9314
    [DIFFICULTY_NORMAL][TRAINER_8365EA32] =
    {
#line 9315
        .trainerName = _("8365EA32"),
#line 9316
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9317
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9319
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9321
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9320
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9322
    [DIFFICULTY_NORMAL][TRAINER_83A26233] =
    {
#line 9323
        .trainerName = _("83A26233"),
#line 9324
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9325
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9327
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9329
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9328
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9330
    [DIFFICULTY_NORMAL][TRAINER_83B9A038] =
    {
#line 9331
        .trainerName = _("83B9A038"),
#line 9332
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9333
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9335
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9337
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9336
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9338
    [DIFFICULTY_NORMAL][TRAINER_840416CD] =
    {
#line 9339
        .trainerName = _("840416CD"),
#line 9340
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9341
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9343
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9345
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9344
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9346
    [DIFFICULTY_NORMAL][TRAINER_843DFC91] =
    {
#line 9347
        .trainerName = _("843DFC91"),
#line 9348
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9349
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9351
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9353
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9352
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9354
    [DIFFICULTY_NORMAL][TRAINER_857ACD94] =
    {
#line 9355
        .trainerName = _("857ACD94"),
#line 9356
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9357
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9359
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9361
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9360
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9362
    [DIFFICULTY_NORMAL][TRAINER_8580525E] =
    {
#line 9363
        .trainerName = _("8580525E"),
#line 9364
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9365
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9367
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9369
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9368
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9370
    [DIFFICULTY_NORMAL][TRAINER_866AE208] =
    {
#line 9371
        .trainerName = _("866AE208"),
#line 9372
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9373
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9375
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9377
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9376
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9378
    [DIFFICULTY_NORMAL][TRAINER_8677EFB3] =
    {
#line 9379
        .trainerName = _("8677EFB3"),
#line 9380
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9381
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9383
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9385
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9384
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9386
    [DIFFICULTY_NORMAL][TRAINER_86D37FF1] =
    {
#line 9387
        .trainerName = _("86D37FF1"),
#line 9388
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9389
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9391
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9393
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9392
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9394
    [DIFFICULTY_NORMAL][TRAINER_86F7AA4A] =
    {
#line 9395
        .trainerName = _("86F7AA4A"),
#line 9396
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9397
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9399
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9401
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9400
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9402
    [DIFFICULTY_NORMAL][TRAINER_872183CD] =
    {
#line 9403
        .trainerName = _("872183CD"),
#line 9404
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9405
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9407
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9409
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9408
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9410
    [DIFFICULTY_NORMAL][TRAINER_87B5E929] =
    {
#line 9411
        .trainerName = _("87B5E929"),
#line 9412
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9413
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9415
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9417
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9416
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9418
    [DIFFICULTY_NORMAL][TRAINER_885C781B] =
    {
#line 9419
        .trainerName = _("885C781B"),
#line 9420
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9421
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9423
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9425
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9424
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9426
    [DIFFICULTY_NORMAL][TRAINER_8878003B] =
    {
#line 9427
        .trainerName = _("8878003B"),
#line 9428
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9429
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9431
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9433
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9432
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9434
    [DIFFICULTY_NORMAL][TRAINER_88864D1E] =
    {
#line 9435
        .trainerName = _("88864D1E"),
#line 9436
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9437
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9439
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9441
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9440
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9442
    [DIFFICULTY_NORMAL][TRAINER_8972F540] =
    {
#line 9443
        .trainerName = _("8972F540"),
#line 9444
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9445
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9447
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9449
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9448
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9450
    [DIFFICULTY_NORMAL][TRAINER_898AF31D] =
    {
#line 9451
        .trainerName = _("898AF31D"),
#line 9452
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9453
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9455
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9457
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9456
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9458
    [DIFFICULTY_NORMAL][TRAINER_8A0B40C0] =
    {
#line 9459
        .trainerName = _("8A0B40C0"),
#line 9460
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9461
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9463
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9465
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9464
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9466
    [DIFFICULTY_NORMAL][TRAINER_8A2C65A3] =
    {
#line 9467
        .trainerName = _("8A2C65A3"),
#line 9468
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9469
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9471
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9473
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9472
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9474
    [DIFFICULTY_NORMAL][TRAINER_8A829476] =
    {
#line 9475
        .trainerName = _("8A829476"),
#line 9476
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9477
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9479
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9481
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9480
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9482
    [DIFFICULTY_NORMAL][TRAINER_8AC1B5C1] =
    {
#line 9483
        .trainerName = _("8AC1B5C1"),
#line 9484
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9485
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9487
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9489
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9488
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9490
    [DIFFICULTY_NORMAL][TRAINER_8AF40B23] =
    {
#line 9491
        .trainerName = _("8AF40B23"),
#line 9492
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9493
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9495
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9497
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9496
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9498
    [DIFFICULTY_NORMAL][TRAINER_8B31AC38] =
    {
#line 9499
        .trainerName = _("8B31AC38"),
#line 9500
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9501
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9503
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9505
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9504
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9506
    [DIFFICULTY_NORMAL][TRAINER_8B32317E] =
    {
#line 9507
        .trainerName = _("8B32317E"),
#line 9508
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9509
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9511
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9513
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9512
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9514
    [DIFFICULTY_NORMAL][TRAINER_8B3657A9] =
    {
#line 9515
        .trainerName = _("8B3657A9"),
#line 9516
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9517
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9519
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9521
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9520
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9522
    [DIFFICULTY_NORMAL][TRAINER_8B3C49E3] =
    {
#line 9523
        .trainerName = _("8B3C49E3"),
#line 9524
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9525
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9527
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9529
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9528
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9530
    [DIFFICULTY_NORMAL][TRAINER_8B6D195D] =
    {
#line 9531
        .trainerName = _("8B6D195D"),
#line 9532
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9533
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9535
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9537
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9536
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9538
    [DIFFICULTY_NORMAL][TRAINER_8BB65E5E] =
    {
#line 9539
        .trainerName = _("8BB65E5E"),
#line 9540
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9541
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9543
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9545
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9544
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9546
    [DIFFICULTY_NORMAL][TRAINER_8C186D17] =
    {
#line 9547
        .trainerName = _("8C186D17"),
#line 9548
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9549
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9551
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9553
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9552
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9554
    [DIFFICULTY_NORMAL][TRAINER_8C853607] =
    {
#line 9555
        .trainerName = _("8C853607"),
#line 9556
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9557
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9559
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9561
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9560
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9562
    [DIFFICULTY_NORMAL][TRAINER_8D6D5B2C] =
    {
#line 9563
        .trainerName = _("8D6D5B2C"),
#line 9564
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9565
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9567
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9569
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9568
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9570
    [DIFFICULTY_NORMAL][TRAINER_8D93124A] =
    {
#line 9571
        .trainerName = _("8D93124A"),
#line 9572
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9573
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9575
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9577
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9576
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9578
    [DIFFICULTY_NORMAL][TRAINER_8DAF08C5] =
    {
#line 9579
        .trainerName = _("8DAF08C5"),
#line 9580
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9581
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9583
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9585
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9584
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9586
    [DIFFICULTY_NORMAL][TRAINER_8DE17D94] =
    {
#line 9587
        .trainerName = _("8DE17D94"),
#line 9588
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9589
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9591
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9593
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9592
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9594
    [DIFFICULTY_NORMAL][TRAINER_8E60CF6E] =
    {
#line 9595
        .trainerName = _("8E60CF6E"),
#line 9596
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9597
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9599
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9601
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9600
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9602
    [DIFFICULTY_NORMAL][TRAINER_8EA873A0] =
    {
#line 9603
        .trainerName = _("8EA873A0"),
#line 9604
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9605
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9607
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9609
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9608
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9610
    [DIFFICULTY_NORMAL][TRAINER_8EB76821] =
    {
#line 9611
        .trainerName = _("8EB76821"),
#line 9612
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9613
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9615
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9617
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9616
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9618
    [DIFFICULTY_NORMAL][TRAINER_8ED15D51] =
    {
#line 9619
        .trainerName = _("8ED15D51"),
#line 9620
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9621
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9623
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9625
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9624
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9626
    [DIFFICULTY_NORMAL][TRAINER_8F28F86A] =
    {
#line 9627
        .trainerName = _("8F28F86A"),
#line 9628
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9631
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9633
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9632
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9634
    [DIFFICULTY_NORMAL][TRAINER_8F2EA270] =
    {
#line 9635
        .trainerName = _("8F2EA270"),
#line 9636
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9637
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9639
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9641
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9640
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9642
    [DIFFICULTY_NORMAL][TRAINER_8F9579E4] =
    {
#line 9643
        .trainerName = _("8F9579E4"),
#line 9644
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9645
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9647
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9649
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9648
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9650
    [DIFFICULTY_NORMAL][TRAINER_8F988020] =
    {
#line 9651
        .trainerName = _("8F988020"),
#line 9652
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9653
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9655
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9657
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9656
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9658
    [DIFFICULTY_NORMAL][TRAINER_8FE817BA] =
    {
#line 9659
        .trainerName = _("8FE817BA"),
#line 9660
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9661
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9663
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9665
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9664
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9666
    [DIFFICULTY_NORMAL][TRAINER_90353D81] =
    {
#line 9667
        .trainerName = _("90353D81"),
#line 9668
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9669
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9671
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9673
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9672
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9674
    [DIFFICULTY_NORMAL][TRAINER_9054973F] =
    {
#line 9675
        .trainerName = _("9054973F"),
#line 9676
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9677
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9679
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9681
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9680
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9682
    [DIFFICULTY_NORMAL][TRAINER_90A72ACF] =
    {
#line 9683
        .trainerName = _("90A72ACF"),
#line 9684
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9685
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9687
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9689
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9688
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9690
    [DIFFICULTY_NORMAL][TRAINER_90E1658C] =
    {
#line 9691
        .trainerName = _("90E1658C"),
#line 9692
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9693
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9695
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9697
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9696
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9698
    [DIFFICULTY_NORMAL][TRAINER_918A1734] =
    {
#line 9699
        .trainerName = _("918A1734"),
#line 9700
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9701
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9703
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9705
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9704
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9706
    [DIFFICULTY_NORMAL][TRAINER_91D249C3] =
    {
#line 9707
        .trainerName = _("91D249C3"),
#line 9708
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9709
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9711
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9713
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9712
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9714
    [DIFFICULTY_NORMAL][TRAINER_91D48E4E] =
    {
#line 9715
        .trainerName = _("91D48E4E"),
#line 9716
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9717
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9719
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9721
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9720
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9722
    [DIFFICULTY_NORMAL][TRAINER_922542C3] =
    {
#line 9723
        .trainerName = _("922542C3"),
#line 9724
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9725
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9727
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9729
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9728
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9730
    [DIFFICULTY_NORMAL][TRAINER_93009D3B] =
    {
#line 9731
        .trainerName = _("93009D3B"),
#line 9732
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9733
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9735
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9737
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9736
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9738
    [DIFFICULTY_NORMAL][TRAINER_93D9B506] =
    {
#line 9739
        .trainerName = _("93D9B506"),
#line 9740
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9741
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9743
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9745
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9744
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9746
    [DIFFICULTY_NORMAL][TRAINER_9427896B] =
    {
#line 9747
        .trainerName = _("9427896B"),
#line 9748
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9749
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9751
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9753
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9752
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9754
    [DIFFICULTY_NORMAL][TRAINER_9501C16B] =
    {
#line 9755
        .trainerName = _("9501C16B"),
#line 9756
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9757
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9759
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9761
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9760
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9762
    [DIFFICULTY_NORMAL][TRAINER_9566DD87] =
    {
#line 9763
        .trainerName = _("9566DD87"),
#line 9764
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9765
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9767
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9769
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9768
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9770
    [DIFFICULTY_NORMAL][TRAINER_95A74E78] =
    {
#line 9771
        .trainerName = _("95A74E78"),
#line 9772
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9773
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9775
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9777
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9776
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9778
    [DIFFICULTY_NORMAL][TRAINER_963F893A] =
    {
#line 9779
        .trainerName = _("963F893A"),
#line 9780
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9781
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9783
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9785
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9784
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9786
    [DIFFICULTY_NORMAL][TRAINER_966F37E6] =
    {
#line 9787
        .trainerName = _("966F37E6"),
#line 9788
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9789
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9791
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9793
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9792
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9794
    [DIFFICULTY_NORMAL][TRAINER_96859C9B] =
    {
#line 9795
        .trainerName = _("96859C9B"),
#line 9796
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9797
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9799
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9801
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9800
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9802
    [DIFFICULTY_NORMAL][TRAINER_9695D7CC] =
    {
#line 9803
        .trainerName = _("9695D7CC"),
#line 9804
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9805
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9807
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9809
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9808
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9810
    [DIFFICULTY_NORMAL][TRAINER_96A60AED] =
    {
#line 9811
        .trainerName = _("96A60AED"),
#line 9812
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9813
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9815
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9817
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9816
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9818
    [DIFFICULTY_NORMAL][TRAINER_973C00CE] =
    {
#line 9819
        .trainerName = _("973C00CE"),
#line 9820
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9821
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9823
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9825
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9824
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9826
    [DIFFICULTY_NORMAL][TRAINER_9784BB4E] =
    {
#line 9827
        .trainerName = _("9784BB4E"),
#line 9828
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9829
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9831
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9833
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9832
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9834
    [DIFFICULTY_NORMAL][TRAINER_9834CDCC] =
    {
#line 9835
        .trainerName = _("9834CDCC"),
#line 9836
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9837
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9839
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9841
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9840
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9842
    [DIFFICULTY_NORMAL][TRAINER_98547A36] =
    {
#line 9843
        .trainerName = _("98547A36"),
#line 9844
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9845
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9847
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9849
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9848
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9850
    [DIFFICULTY_NORMAL][TRAINER_98C7143B] =
    {
#line 9851
        .trainerName = _("98C7143B"),
#line 9852
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9855
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9857
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9856
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9858
    [DIFFICULTY_NORMAL][TRAINER_992FCC96] =
    {
#line 9859
        .trainerName = _("992FCC96"),
#line 9860
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9861
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9863
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9865
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9864
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9866
    [DIFFICULTY_NORMAL][TRAINER_99D74322] =
    {
#line 9867
        .trainerName = _("99D74322"),
#line 9868
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9869
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9871
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9873
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9872
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9874
    [DIFFICULTY_NORMAL][TRAINER_9A45ED29] =
    {
#line 9875
        .trainerName = _("9A45ED29"),
#line 9876
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9877
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9879
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9881
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9880
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9882
    [DIFFICULTY_NORMAL][TRAINER_9AAFB9A8] =
    {
#line 9883
        .trainerName = _("9AAFB9A8"),
#line 9884
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9885
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9887
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9889
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9888
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9890
    [DIFFICULTY_NORMAL][TRAINER_9B4CAAEF] =
    {
#line 9891
        .trainerName = _("9B4CAAEF"),
#line 9892
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9893
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9895
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9897
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9896
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9898
    [DIFFICULTY_NORMAL][TRAINER_9B92F975] =
    {
#line 9899
        .trainerName = _("9B92F975"),
#line 9900
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9901
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9903
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9905
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9904
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9906
    [DIFFICULTY_NORMAL][TRAINER_9BA8D6B8] =
    {
#line 9907
        .trainerName = _("9BA8D6B8"),
#line 9908
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9909
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9911
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9913
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9912
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9914
    [DIFFICULTY_NORMAL][TRAINER_9BBA4D3E] =
    {
#line 9915
        .trainerName = _("9BBA4D3E"),
#line 9916
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9917
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9919
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9921
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9920
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9922
    [DIFFICULTY_NORMAL][TRAINER_9BD745C1] =
    {
#line 9923
        .trainerName = _("9BD745C1"),
#line 9924
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9925
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9927
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9929
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9928
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9930
    [DIFFICULTY_NORMAL][TRAINER_9C9A9B43] =
    {
#line 9931
        .trainerName = _("9C9A9B43"),
#line 9932
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9933
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9935
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9937
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9936
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9938
    [DIFFICULTY_NORMAL][TRAINER_9CC51698] =
    {
#line 9939
        .trainerName = _("9CC51698"),
#line 9940
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9941
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9943
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9945
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9944
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9946
    [DIFFICULTY_NORMAL][TRAINER_9D0B799C] =
    {
#line 9947
        .trainerName = _("9D0B799C"),
#line 9948
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9949
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9951
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9953
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9952
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9954
    [DIFFICULTY_NORMAL][TRAINER_9D2974CA] =
    {
#line 9955
        .trainerName = _("9D2974CA"),
#line 9956
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9957
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9959
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9961
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9960
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9962
    [DIFFICULTY_NORMAL][TRAINER_9DE6AF69] =
    {
#line 9963
        .trainerName = _("9DE6AF69"),
#line 9964
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9965
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9967
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9969
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9968
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9970
    [DIFFICULTY_NORMAL][TRAINER_9E9E96C3] =
    {
#line 9971
        .trainerName = _("9E9E96C3"),
#line 9972
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9973
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9975
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9977
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9976
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9978
    [DIFFICULTY_NORMAL][TRAINER_9EBDE860] =
    {
#line 9979
        .trainerName = _("9EBDE860"),
#line 9980
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9981
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9983
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9985
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9984
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9986
    [DIFFICULTY_NORMAL][TRAINER_9F335F56] =
    {
#line 9987
        .trainerName = _("9F335F56"),
#line 9988
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9989
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9991
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9993
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9992
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9994
    [DIFFICULTY_NORMAL][TRAINER_9FB07CC0] =
    {
#line 9995
        .trainerName = _("9FB07CC0"),
#line 9996
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9999
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10001
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10000
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10002
    [DIFFICULTY_NORMAL][TRAINER_9FFBEDD1] =
    {
#line 10003
        .trainerName = _("9FFBEDD1"),
#line 10004
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10005
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10007
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10009
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10008
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10010
    [DIFFICULTY_NORMAL][TRAINER_A03F3B0B] =
    {
#line 10011
        .trainerName = _("A03F3B0B"),
#line 10012
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10013
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10015
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10017
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10016
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10018
    [DIFFICULTY_NORMAL][TRAINER_A0852317] =
    {
#line 10019
        .trainerName = _("A0852317"),
#line 10020
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10021
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10023
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10025
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10024
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10026
    [DIFFICULTY_NORMAL][TRAINER_A0CE2BCF] =
    {
#line 10027
        .trainerName = _("A0CE2BCF"),
#line 10028
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10029
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10031
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10033
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10032
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10034
    [DIFFICULTY_NORMAL][TRAINER_A122FEC6] =
    {
#line 10035
        .trainerName = _("A122FEC6"),
#line 10036
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10037
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10039
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10041
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10040
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10042
    [DIFFICULTY_NORMAL][TRAINER_A1502FA5] =
    {
#line 10043
        .trainerName = _("A1502FA5"),
#line 10044
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10045
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10047
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10049
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10048
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10050
    [DIFFICULTY_NORMAL][TRAINER_A173BD9E] =
    {
#line 10051
        .trainerName = _("A173BD9E"),
#line 10052
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10053
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10055
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10057
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10056
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10058
    [DIFFICULTY_NORMAL][TRAINER_A1B34299] =
    {
#line 10059
        .trainerName = _("A1B34299"),
#line 10060
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10061
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10063
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10065
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10064
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10066
    [DIFFICULTY_NORMAL][TRAINER_A226BBD6] =
    {
#line 10067
        .trainerName = _("A226BBD6"),
#line 10068
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10069
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10071
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10073
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10072
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10074
    [DIFFICULTY_NORMAL][TRAINER_A26B64E5] =
    {
#line 10075
        .trainerName = _("A26B64E5"),
#line 10076
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10077
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10079
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10081
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10080
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10082
    [DIFFICULTY_NORMAL][TRAINER_A2F2E8FF] =
    {
#line 10083
        .trainerName = _("A2F2E8FF"),
#line 10084
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10085
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10087
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10089
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10088
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10090
    [DIFFICULTY_NORMAL][TRAINER_A30D6A65] =
    {
#line 10091
        .trainerName = _("A30D6A65"),
#line 10092
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10093
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10095
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10097
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10096
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10098
    [DIFFICULTY_NORMAL][TRAINER_A33F468D] =
    {
#line 10099
        .trainerName = _("A33F468D"),
#line 10100
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10101
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10103
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10105
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10104
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10106
    [DIFFICULTY_NORMAL][TRAINER_A377CCDF] =
    {
#line 10107
        .trainerName = _("A377CCDF"),
#line 10108
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10109
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10111
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10113
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10112
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10114
    [DIFFICULTY_NORMAL][TRAINER_A393F9F0] =
    {
#line 10115
        .trainerName = _("A393F9F0"),
#line 10116
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10117
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10119
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10121
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10120
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10122
    [DIFFICULTY_NORMAL][TRAINER_A39AB67C] =
    {
#line 10123
        .trainerName = _("A39AB67C"),
#line 10124
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10125
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10127
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10129
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10128
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10130
    [DIFFICULTY_NORMAL][TRAINER_A3EBD43B] =
    {
#line 10131
        .trainerName = _("A3EBD43B"),
#line 10132
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10133
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10135
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10137
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10136
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10138
    [DIFFICULTY_NORMAL][TRAINER_A489434F] =
    {
#line 10139
        .trainerName = _("A489434F"),
#line 10140
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10141
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10143
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10145
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10144
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10146
    [DIFFICULTY_NORMAL][TRAINER_A49FED84] =
    {
#line 10147
        .trainerName = _("A49FED84"),
#line 10148
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10149
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10151
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10153
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10152
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10154
    [DIFFICULTY_NORMAL][TRAINER_A4BDD551] =
    {
#line 10155
        .trainerName = _("A4BDD551"),
#line 10156
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10157
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10159
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10161
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10160
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10162
    [DIFFICULTY_NORMAL][TRAINER_A4D47D9E] =
    {
#line 10163
        .trainerName = _("A4D47D9E"),
#line 10164
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10165
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10167
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10169
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10168
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10170
    [DIFFICULTY_NORMAL][TRAINER_A4DC84A0] =
    {
#line 10171
        .trainerName = _("A4DC84A0"),
#line 10172
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10175
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10177
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10176
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10178
    [DIFFICULTY_NORMAL][TRAINER_A4EC97B5] =
    {
#line 10179
        .trainerName = _("A4EC97B5"),
#line 10180
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10181
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10183
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10185
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10184
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10186
    [DIFFICULTY_NORMAL][TRAINER_A50CF67B] =
    {
#line 10187
        .trainerName = _("A50CF67B"),
#line 10188
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10189
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10191
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10193
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10192
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10194
    [DIFFICULTY_NORMAL][TRAINER_A62D49C6] =
    {
#line 10195
        .trainerName = _("A62D49C6"),
#line 10196
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10197
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10199
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10201
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10200
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10202
    [DIFFICULTY_NORMAL][TRAINER_A6328173] =
    {
#line 10203
        .trainerName = _("A6328173"),
#line 10204
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10205
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10207
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10209
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10208
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10210
    [DIFFICULTY_NORMAL][TRAINER_A686809A] =
    {
#line 10211
        .trainerName = _("A686809A"),
#line 10212
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10213
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10215
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10217
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10216
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10218
    [DIFFICULTY_NORMAL][TRAINER_A7154C64] =
    {
#line 10219
        .trainerName = _("A7154C64"),
#line 10220
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10221
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10223
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10225
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10224
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10226
    [DIFFICULTY_NORMAL][TRAINER_A725F3F3] =
    {
#line 10227
        .trainerName = _("A725F3F3"),
#line 10228
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10229
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10231
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10233
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10232
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10234
    [DIFFICULTY_NORMAL][TRAINER_A7376C87] =
    {
#line 10235
        .trainerName = _("A7376C87"),
#line 10236
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10237
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10239
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10241
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10240
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10242
    [DIFFICULTY_NORMAL][TRAINER_A76F8352] =
    {
#line 10243
        .trainerName = _("A76F8352"),
#line 10244
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10245
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10247
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10249
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10248
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10250
    [DIFFICULTY_NORMAL][TRAINER_A783BCA8] =
    {
#line 10251
        .trainerName = _("A783BCA8"),
#line 10252
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10253
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10255
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10257
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10256
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10258
    [DIFFICULTY_NORMAL][TRAINER_A7D689F5] =
    {
#line 10259
        .trainerName = _("A7D689F5"),
#line 10260
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10261
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10263
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10265
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10264
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10266
    [DIFFICULTY_NORMAL][TRAINER_A7DCD657] =
    {
#line 10267
        .trainerName = _("A7DCD657"),
#line 10268
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10269
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10271
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10273
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10272
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10274
    [DIFFICULTY_NORMAL][TRAINER_A80F3799] =
    {
#line 10275
        .trainerName = _("A80F3799"),
#line 10276
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10277
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10279
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10281
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10280
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10282
    [DIFFICULTY_NORMAL][TRAINER_A82FABFC] =
    {
#line 10283
        .trainerName = _("A82FABFC"),
#line 10284
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10285
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10287
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10289
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10288
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10290
    [DIFFICULTY_NORMAL][TRAINER_A8413608] =
    {
#line 10291
        .trainerName = _("A8413608"),
#line 10292
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10293
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10295
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10297
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10296
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10298
    [DIFFICULTY_NORMAL][TRAINER_A8BA94B6] =
    {
#line 10299
        .trainerName = _("A8BA94B6"),
#line 10300
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10301
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10303
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10305
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10304
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10306
    [DIFFICULTY_NORMAL][TRAINER_A90E2D03] =
    {
#line 10307
        .trainerName = _("A90E2D03"),
#line 10308
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10309
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10311
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10313
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10312
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10314
    [DIFFICULTY_NORMAL][TRAINER_A968DBA5] =
    {
#line 10315
        .trainerName = _("A968DBA5"),
#line 10316
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10317
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10319
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10321
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10320
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10322
    [DIFFICULTY_NORMAL][TRAINER_A990AE14] =
    {
#line 10323
        .trainerName = _("A990AE14"),
#line 10324
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10325
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10327
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10329
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10328
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10330
    [DIFFICULTY_NORMAL][TRAINER_A9F2709A] =
    {
#line 10331
        .trainerName = _("A9F2709A"),
#line 10332
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10333
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10335
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10337
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10336
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10338
    [DIFFICULTY_NORMAL][TRAINER_AA81DD0B] =
    {
#line 10339
        .trainerName = _("AA81DD0B"),
#line 10340
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10341
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10343
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10345
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10344
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10346
    [DIFFICULTY_NORMAL][TRAINER_AB576C3B] =
    {
#line 10347
        .trainerName = _("AB576C3B"),
#line 10348
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10349
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10351
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10353
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10352
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10354
    [DIFFICULTY_NORMAL][TRAINER_ABD18218] =
    {
#line 10355
        .trainerName = _("ABD18218"),
#line 10356
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10357
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10359
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10361
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10360
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10362
    [DIFFICULTY_NORMAL][TRAINER_ABF9DAAF] =
    {
#line 10363
        .trainerName = _("ABF9DAAF"),
#line 10364
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10365
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10367
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10369
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10368
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10370
    [DIFFICULTY_NORMAL][TRAINER_ABFE6286] =
    {
#line 10371
        .trainerName = _("ABFE6286"),
#line 10372
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10373
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10375
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10377
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10376
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10378
    [DIFFICULTY_NORMAL][TRAINER_AC004835] =
    {
#line 10379
        .trainerName = _("AC004835"),
#line 10380
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10381
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10383
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10385
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10384
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10386
    [DIFFICULTY_NORMAL][TRAINER_ACB85CBA] =
    {
#line 10387
        .trainerName = _("ACB85CBA"),
#line 10388
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10389
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10391
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10393
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10392
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10394
    [DIFFICULTY_NORMAL][TRAINER_ACE2090A] =
    {
#line 10395
        .trainerName = _("ACE2090A"),
#line 10396
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10397
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10399
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10401
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10400
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10402
    [DIFFICULTY_NORMAL][TRAINER_AD1AA26D] =
    {
#line 10403
        .trainerName = _("AD1AA26D"),
#line 10404
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10405
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10407
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10409
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10408
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10410
    [DIFFICULTY_NORMAL][TRAINER_AD70C4BA] =
    {
#line 10411
        .trainerName = _("AD70C4BA"),
#line 10412
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10413
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10415
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10417
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10416
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10418
    [DIFFICULTY_NORMAL][TRAINER_AD8C8210] =
    {
#line 10419
        .trainerName = _("AD8C8210"),
#line 10420
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10421
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10423
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10425
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10424
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10426
    [DIFFICULTY_NORMAL][TRAINER_ADC94E2C] =
    {
#line 10427
        .trainerName = _("ADC94E2C"),
#line 10428
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10429
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10431
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10433
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10432
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10434
    [DIFFICULTY_NORMAL][TRAINER_AE0ED10D] =
    {
#line 10435
        .trainerName = _("AE0ED10D"),
#line 10436
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10437
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10439
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10441
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10440
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10442
    [DIFFICULTY_NORMAL][TRAINER_AE99A6E1] =
    {
#line 10443
        .trainerName = _("AE99A6E1"),
#line 10444
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10445
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10447
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10449
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10448
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10450
    [DIFFICULTY_NORMAL][TRAINER_AE9CFA41] =
    {
#line 10451
        .trainerName = _("AE9CFA41"),
#line 10452
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10453
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10455
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10457
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10456
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10458
    [DIFFICULTY_NORMAL][TRAINER_AEDC9768] =
    {
#line 10459
        .trainerName = _("AEDC9768"),
#line 10460
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10461
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10463
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10465
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10464
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10466
    [DIFFICULTY_NORMAL][TRAINER_AF0898E7] =
    {
#line 10467
        .trainerName = _("AF0898E7"),
#line 10468
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10469
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10471
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10473
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10472
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10474
    [DIFFICULTY_NORMAL][TRAINER_AF765F9F] =
    {
#line 10475
        .trainerName = _("AF765F9F"),
#line 10476
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10477
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10479
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10481
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10480
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10482
    [DIFFICULTY_NORMAL][TRAINER_AFA4A980] =
    {
#line 10483
        .trainerName = _("AFA4A980"),
#line 10484
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10485
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10487
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10489
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10488
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10490
    [DIFFICULTY_NORMAL][TRAINER_AFA5BAC9] =
    {
#line 10491
        .trainerName = _("AFA5BAC9"),
#line 10492
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10493
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10495
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10497
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10496
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10498
    [DIFFICULTY_NORMAL][TRAINER_AFD8F2EF] =
    {
#line 10499
        .trainerName = _("AFD8F2EF"),
#line 10500
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10501
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10503
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10505
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10504
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10506
    [DIFFICULTY_NORMAL][TRAINER_AFE855B1] =
    {
#line 10507
        .trainerName = _("AFE855B1"),
#line 10508
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10509
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10511
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10513
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10512
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10514
    [DIFFICULTY_NORMAL][TRAINER_AFFCC47E] =
    {
#line 10515
        .trainerName = _("AFFCC47E"),
#line 10516
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10517
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10519
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10521
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10520
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10522
    [DIFFICULTY_NORMAL][TRAINER_B0FC622D] =
    {
#line 10523
        .trainerName = _("B0FC622D"),
#line 10524
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10525
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10527
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10529
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10528
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10530
    [DIFFICULTY_NORMAL][TRAINER_B1DA7383] =
    {
#line 10531
        .trainerName = _("B1DA7383"),
#line 10532
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10533
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10535
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10537
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10536
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10538
    [DIFFICULTY_NORMAL][TRAINER_B253DEF2] =
    {
#line 10539
        .trainerName = _("B253DEF2"),
#line 10540
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10541
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10543
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10545
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10544
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10546
    [DIFFICULTY_NORMAL][TRAINER_B2925134] =
    {
#line 10547
        .trainerName = _("B2925134"),
#line 10548
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10549
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10551
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10553
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10552
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10554
    [DIFFICULTY_NORMAL][TRAINER_B2A5CB2B] =
    {
#line 10555
        .trainerName = _("B2A5CB2B"),
#line 10556
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10557
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10559
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10561
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10560
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10562
    [DIFFICULTY_NORMAL][TRAINER_B32A1E98] =
    {
#line 10563
        .trainerName = _("B32A1E98"),
#line 10564
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10565
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10567
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10569
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10568
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10570
    [DIFFICULTY_NORMAL][TRAINER_B3B1644E] =
    {
#line 10571
        .trainerName = _("B3B1644E"),
#line 10572
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10573
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10575
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10577
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10576
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10578
    [DIFFICULTY_NORMAL][TRAINER_B3CE95A4] =
    {
#line 10579
        .trainerName = _("B3CE95A4"),
#line 10580
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10581
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10583
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10585
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10584
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10586
    [DIFFICULTY_NORMAL][TRAINER_B3FB2F4B] =
    {
#line 10587
        .trainerName = _("B3FB2F4B"),
#line 10588
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10589
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10591
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10593
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10592
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10594
    [DIFFICULTY_NORMAL][TRAINER_B42E7E27] =
    {
#line 10595
        .trainerName = _("B42E7E27"),
#line 10596
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10597
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10599
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10601
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10600
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10602
    [DIFFICULTY_NORMAL][TRAINER_B42F5023] =
    {
#line 10603
        .trainerName = _("B42F5023"),
#line 10604
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10605
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10607
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10609
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10608
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10610
    [DIFFICULTY_NORMAL][TRAINER_B435B7EF] =
    {
#line 10611
        .trainerName = _("B435B7EF"),
#line 10612
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10613
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10615
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10617
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10616
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10618
    [DIFFICULTY_NORMAL][TRAINER_B490300F] =
    {
#line 10619
        .trainerName = _("B490300F"),
#line 10620
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10621
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10623
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10625
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10624
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10626
    [DIFFICULTY_NORMAL][TRAINER_B53E1C28] =
    {
#line 10627
        .trainerName = _("B53E1C28"),
#line 10628
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10631
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10633
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10632
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10634
    [DIFFICULTY_NORMAL][TRAINER_C789FBF5] =
    {
#line 10635
        .trainerName = _("C789FBF5"),
#line 10636
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10637
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10639
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10641
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10640
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10642
    [DIFFICULTY_NORMAL][TRAINER_C7E06CB4] =
    {
#line 10643
        .trainerName = _("C7E06CB4"),
#line 10644
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10645
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10647
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10649
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10648
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10650
    [DIFFICULTY_NORMAL][TRAINER_C7F16F5B] =
    {
#line 10651
        .trainerName = _("C7F16F5B"),
#line 10652
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10653
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10655
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10657
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10656
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10658
    [DIFFICULTY_NORMAL][TRAINER_C82E0F99] =
    {
#line 10659
        .trainerName = _("C82E0F99"),
#line 10660
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10661
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10663
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10665
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10664
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10666
    [DIFFICULTY_NORMAL][TRAINER_C84D5BA6] =
    {
#line 10667
        .trainerName = _("C84D5BA6"),
#line 10668
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10669
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10671
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10673
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10672
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10674
    [DIFFICULTY_NORMAL][TRAINER_C8563FAA] =
    {
#line 10675
        .trainerName = _("C8563FAA"),
#line 10676
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10677
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10679
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10681
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10680
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10682
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 10683
        .trainerName = _("LEAF"),
#line 10684
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10685
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10687
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10689
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10688
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10690
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 10691
        .trainerName = _("RED"),
#line 10692
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10693
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10695
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10697
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10696
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
