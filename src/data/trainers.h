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
    [DIFFICULTY_NORMAL][TRAINER_KAI_NEWASSHOLEAPPEARS] =
    {
#line 271
        .trainerName = _("Kai"),
#line 273
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 272
        .trainerPic = TRAINER_PIC_FRONT_KAI,
#line 275
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 277
        .isNative = TRUE,
#line 274
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 276
        .characterRevealId = REVEAL_KAI,
#line 278
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 279
        .objectEventGraphicsId = OBJ_EVENT_GFX_KAI,
#line 280
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_KAI,
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
#line 338
        .trainerPic = TRAINER_PIC_FRONT_CHARLOTTE,
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
        .trainerBackPic = TRAINER_PIC_FRONT_CHARLOTTE,
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
            .ball = BALL_MASTER,
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
            .ball = BALL_MASTER,
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
            .ball = BALL_MASTER,
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
            .ball = BALL_MASTER,
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
    [DIFFICULTY_NORMAL][TRAINER_KAI_ASSHOLEHOME] =
    {
#line 397
        .trainerName = _("Kai"),
#line 399
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 398
        .trainerPic = TRAINER_PIC_FRONT_KAI,
#line 401
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 400
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_KAI,
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
            .ball = BALL_MASTER,
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
            .ball = BALL_MASTER,
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
            .ball = BALL_MASTER,
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
            .ball = BALL_MASTER,
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
    [DIFFICULTY_NORMAL][TRAINER_KAUNA] =
    {
#line 456
        .trainerName = _("Kauna"),
#line 460
        .trainerClass = TRAINER_CLASS_LEADER,
#line 457
        .trainerPic = TRAINER_PIC_FRONT_KAUNA,
#line 458
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 459
        .characterRevealId = REVEAL_KAUNA,
#line 461
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 462
        .objectEventGraphicsId = OBJ_EVENT_GFX_KAUNA,
#line 463
        .mapSec = MAPSEC_CHASILLA,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_KAUNA,
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
            .ball = BALL_MASTER,
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
            .ball = BALL_MASTER,
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
            .ball = BALL_MASTER,
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
            .ball = BALL_MASTER,
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
            .ball = BALL_MASTER,
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
        .trainerPic = TRAINER_PIC_FRONT_TALA,
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
        .trainerBackPic = TRAINER_PIC_FRONT_TALA,
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
            .ball = BALL_MASTER,
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
            .ball = BALL_MASTER,
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
            .ball = BALL_MASTER,
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
            .ball = BALL_MASTER,
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
            .ball = BALL_MASTER,
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
            .ball = BALL_MASTER,
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
        .trainerPic = TRAINER_PIC_FRONT_NERIENE,
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
        .trainerBackPic = TRAINER_PIC_FRONT_NERIENE,
        .partySize = 7,
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
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 634
            .ability = ABILITY_POISON_HEAL,
#line 635
            .lvl = 49,
#line 636
            .ball = BALL_MASTER,
#line 638
            .friendship = 1,
#line 640
            .nature = NATURE_JOLLY,
#line 637
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 642
                MOVE_TOXIC_SPIKES,
                MOVE_PROTECT,
                MOVE_EARTHQUAKE,
                MOVE_DUAL_WINGBEAT,
            },
            },
            {
#line 647
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 647
            .heldItem = ITEM_CHOPLE_BERRY,
#line 651
            .ev = TRAINER_PARTY_EVS(252, 0, 45, 1, 0, 0),
#line 653
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 648
            .ability = ABILITY_SERENE_GRACE,
#line 649
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 652
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 650
            .teraType = TYPE_NORMAL,
            .moves = {
#line 654
                MOVE_SOFT_BOILED,
                MOVE_PROTECT,
                MOVE_SEISMIC_TOSS,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 659
            .species = SPECIES_FARIGIRAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 659
            .heldItem = ITEM_SITRUS_BERRY,
#line 663
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 1, 252, 0),
#line 665
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 660
            .ability = ABILITY_CUD_CHEW,
#line 661
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 664
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 662
            .teraType = TYPE_NORMAL,
            .moves = {
#line 666
                MOVE_PSYCHIC,
                MOVE_HYPER_VOICE,
                MOVE_DAZZLING_GLEAM,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 671
            .species = SPECIES_TOXAPEX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 671
            .heldItem = ITEM_BLACK_SLUDGE,
#line 677
            .ev = TRAINER_PARTY_EVS(250, 150, 0, 0, 0, 0),
#line 679
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 672
            .ability = ABILITY_MERCILESS,
#line 673
            .lvl = 50,
#line 674
            .ball = BALL_MASTER,
#line 676
            .friendship = 1,
#line 678
            .nature = NATURE_ADAMANT,
#line 675
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 680
                MOVE_POISON_JAB,
                MOVE_LIQUIDATION,
                MOVE_BANEFUL_BUNKER,
                MOVE_RECOVER,
            },
            },
            {
#line 685
            .species = SPECIES_FARIGIRAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 685
            .heldItem = ITEM_SITRUS_BERRY,
#line 691
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 0, 200, 0),
#line 693
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 686
            .ability = ABILITY_CUD_CHEW,
#line 687
            .lvl = 50,
#line 688
            .ball = BALL_MASTER,
#line 690
            .friendship = 1,
#line 692
            .nature = NATURE_MODEST,
#line 689
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 694
                MOVE_PSYCHIC,
                MOVE_HYPER_VOICE,
                MOVE_NASTY_PLOT,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 699
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 699
            .heldItem = ITEM_LEFTOVERS,
#line 705
            .ev = TRAINER_PARTY_EVS(0, 0, 250, 0, 0, 150),
#line 707
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 700
            .ability = ABILITY_NATURAL_CURE,
#line 701
            .lvl = 51,
#line 702
            .ball = BALL_MASTER,
#line 704
            .friendship = 1,
#line 706
            .nature = NATURE_BOLD,
#line 703
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 708
                MOVE_WISH,
                MOVE_TELEPORT,
                MOVE_SEISMIC_TOSS,
                MOVE_PROTECT,
            },
            },
            {
#line 713
            .species = SPECIES_AEGISLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 713
            .heldItem = ITEM_STEELIUM_Z,
#line 719
            .ev = TRAINER_PARTY_EVS(200, 200, 0, 0, 0, 0),
#line 721
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 714
            .ability = ABILITY_STANCE_CHANGE,
#line 715
            .lvl = 52,
#line 716
            .ball = BALL_MASTER,
#line 718
            .friendship = 1,
#line 720
            .nature = NATURE_ADAMANT,
#line 717
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 722
                MOVE_IRON_HEAD,
                MOVE_SHADOW_SNEAK,
                MOVE_SWORDS_DANCE,
                MOVE_KINGS_SHIELD,
            },
            },
        },
    },
#line 727
    [DIFFICULTY_NORMAL][TRAINER_DIMU] =
    {
#line 728
        .trainerName = _("Dimu"),
#line 732
        .trainerClass = TRAINER_CLASS_LEADER,
#line 729
        .trainerPic = TRAINER_PIC_FRONT_DIMU,
#line 730
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 731
        .characterRevealId = REVEAL_DIMU,
#line 733
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 734
        .objectEventGraphicsId = OBJ_EVENT_GFX_DIMU,
#line 735
        .mapSec = MAPSEC_HALERBA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_DIMU,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 737
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 737
            .heldItem = ITEM_FOCUS_SASH,
#line 743
            .ev = TRAINER_PARTY_EVS(0, 200, 0, 200, 0, 0),
#line 745
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 738
            .ability = ABILITY_WIND_RIDER,
#line 739
            .lvl = 49,
#line 740
            .ball = BALL_MASTER,
#line 742
            .friendship = 1,
#line 744
            .nature = NATURE_JOLLY,
#line 741
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 745
                MOVE_GRASSY_GLIDE,
                MOVE_NIGHT_SLASH,
                MOVE_SWORDS_DANCE,
                MOVE_TAILWIND,
            },
            },
            {
#line 750
            .species = SPECIES_FLORGES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 750
            .heldItem = ITEM_SITRUS_BERRY,
#line 756
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 0, 200, 0),
#line 758
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 751
            .ability = ABILITY_FLOWER_VEIL,
#line 752
            .lvl = 50,
#line 753
            .ball = BALL_MASTER,
#line 755
            .friendship = 1,
#line 757
            .nature = NATURE_MODEST,
#line 754
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 759
                MOVE_MOONBLAST,
                MOVE_ENERGY_BALL,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
            },
            },
            {
#line 764
            .species = SPECIES_SCOVILLAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 764
            .heldItem = ITEM_LEFTOVERS,
#line 770
            .ev = TRAINER_PARTY_EVS(200, 200, 0, 0, 0, 0),
#line 771
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 765
            .ability = ABILITY_MOODY,
#line 766
            .lvl = 50,
#line 767
            .ball = BALL_MASTER,
#line 769
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 768
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 771
                MOVE_OVERHEAT,
                MOVE_SEED_BOMB,
                MOVE_GRASSY_GLIDE,
                MOVE_PROTECT,
            },
            },
            {
#line 776
            .species = SPECIES_WYRDEER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 776
            .heldItem = ITEM_GRASSY_SEED,
#line 782
            .ev = TRAINER_PARTY_EVS(100, 200, 0, 100, 0, 0),
#line 784
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 777
            .ability = ABILITY_INTIMIDATE,
#line 778
            .lvl = 51,
#line 779
            .ball = BALL_MASTER,
#line 781
            .friendship = 1,
#line 783
            .nature = NATURE_JOLLY,
#line 780
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 784
                MOVE_PSYSHIELD_BASH,
                MOVE_BODY_SLAM,
                MOVE_HIGH_HORSEPOWER,
                MOVE_REST,
            },
            },
            {
#line 789
            .species = SPECIES_ARBOLIVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 789
            .heldItem = ITEM_GRASSIUM_Z,
#line 795
            .ev = TRAINER_PARTY_EVS(200, 0, 100, 0, 100, 0),
#line 797
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 790
            .ability = ABILITY_SEED_SOWER,
#line 791
            .lvl = 52,
#line 792
            .ball = BALL_MASTER,
#line 794
            .friendship = 1,
#line 796
            .nature = NATURE_MODEST,
#line 793
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 798
                MOVE_ENERGY_BALL,
                MOVE_HYPER_VOICE,
                MOVE_EARTH_POWER,
                MOVE_DAZZLING_GLEAM,
            },
            },
        },
    },
#line 803
    [DIFFICULTY_NORMAL][TRAINER_BD] =
    {
#line 804
        .trainerName = _("BD"),
#line 808
        .trainerClass = TRAINER_CLASS_LEADER,
#line 805
        .trainerPic = TRAINER_PIC_FRONT_BD,
#line 806
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 807
        .characterRevealId = REVEAL_BD,
#line 809
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 810
        .objectEventGraphicsId = OBJ_EVENT_GFX_BD,
#line 811
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_BD,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 813
            .species = SPECIES_SHIINOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 813
            .heldItem = ITEM_RED_CARD,
#line 819
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 0, 200, 0),
#line 821
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 814
            .ability = ABILITY_EFFECT_SPORE,
#line 815
            .lvl = 49,
#line 816
            .ball = BALL_MASTER,
#line 818
            .friendship = 1,
#line 820
            .nature = NATURE_MODEST,
#line 817
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 822
                MOVE_MOONBLAST,
                MOVE_ENERGY_BALL,
                MOVE_SPORE,
                MOVE_MOONLIGHT,
            },
            },
            {
#line 827
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 827
            .heldItem = ITEM_RED_CARD,
#line 833
            .ev = TRAINER_PARTY_EVS(0, 200, 0, 200, 0, 0),
#line 835
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 828
            .ability = ABILITY_CONTRARY,
#line 829
            .lvl = 50,
#line 830
            .ball = BALL_MASTER,
#line 832
            .friendship = 1,
#line 834
            .nature = NATURE_JOLLY,
#line 831
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 835
                MOVE_SUPERPOWER,
                MOVE_DOUBLE_EDGE,
                MOVE_DIZZY_PUNCH,
                MOVE_SUCKER_PUNCH,
            },
            },
            {
#line 840
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 840
            .heldItem = ITEM_RED_CARD,
#line 846
            .ev = TRAINER_PARTY_EVS(200, 100, 0, 0, 100, 0),
#line 848
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 841
            .ability = ABILITY_LEVITATE,
#line 842
            .lvl = 50,
#line 843
            .ball = BALL_MASTER,
#line 845
            .friendship = 1,
#line 847
            .nature = NATURE_BRAVE,
#line 844
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 848
                MOVE_GUNK_SHOT,
                MOVE_DESTINY_BOND,
                MOVE_FLAMETHROWER,
                MOVE_DARK_PULSE,
            },
            },
            {
#line 853
            .species = SPECIES_GRAFAIAI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 853
            .heldItem = ITEM_POISONIUM_Z,
#line 859
            .ev = TRAINER_PARTY_EVS(100, 250, 0, 50, 0, 0),
#line 861
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 854
            .ability = ABILITY_UNBURDEN,
#line 855
            .lvl = 51,
#line 856
            .ball = BALL_MASTER,
#line 858
            .friendship = 1,
#line 860
            .nature = NATURE_ADAMANT,
#line 857
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 861
                MOVE_GUNK_SHOT,
                MOVE_LOW_SWEEP,
                MOVE_KNOCK_OFF,
                MOVE_TAUNT,
            },
            },
            {
#line 866
            .species = SPECIES_ANNIHILAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 866
            .heldItem = ITEM_SITRUS_BERRY,
#line 872
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 200, 0, 0),
#line 874
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 867
            .ability = ABILITY_DEFIANT,
#line 868
            .lvl = 52,
#line 869
            .ball = BALL_MASTER,
#line 871
            .friendship = 1,
#line 873
            .nature = NATURE_ADAMANT,
#line 870
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 874
                MOVE_CLOSE_COMBAT,
                MOVE_DRAIN_PUNCH,
                MOVE_SHADOW_CLAW,
                MOVE_TAUNT,
            },
            },
        },
    },
#line 879
    [DIFFICULTY_NORMAL][TRAINER_AMIARGENTO] =
    {
#line 880
        .trainerName = _("AmiArgento"),
#line 884
        .trainerClass = TRAINER_CLASS_LEADER,
#line 881
        .trainerPic = TRAINER_PIC_FRONT_AMI,
#line 882
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 883
        .characterRevealId = REVEAL_AMI,
#line 885
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 886
        .objectEventGraphicsId = OBJ_EVENT_GFX_AMIARGENTO,
#line 887
        .mapSec = MAPSEC_IRISINA_TOWN,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_AMI,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 889
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 889
            .heldItem = ITEM_LEFTOVERS,
#line 895
            .ev = TRAINER_PARTY_EVS(200, 0, 100, 0, 100, 0),
#line 897
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
#line 890
            .ability = ABILITY_OBLIVIOUS,
#line 891
            .lvl = 49,
#line 892
            .ball = BALL_MASTER,
#line 894
            .friendship = 1,
#line 896
            .nature = NATURE_RELAXED,
#line 893
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 898
                MOVE_IRON_DEFENSE,
                MOVE_BODY_PRESS,
                MOVE_TRICK_ROOM,
                MOVE_PSYCHIC,
            },
            },
            {
#line 903
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 903
            .heldItem = ITEM_EVIOLITE,
#line 909
            .ev = TRAINER_PARTY_EVS(200, 0, 50, 0, 75, 75),
#line 911
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
#line 904
            .ability = ABILITY_DOWNLOAD,
#line 905
            .lvl = 50,
#line 906
            .ball = BALL_MASTER,
#line 908
            .friendship = 1,
#line 910
            .nature = NATURE_QUIET,
#line 907
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 912
                MOVE_TRI_ATTACK,
                MOVE_THUNDERBOLT,
                MOVE_ICE_BEAM,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 917
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 917
            .heldItem = ITEM_ROCKY_HELMET,
#line 923
            .ev = TRAINER_PARTY_EVS(200, 0, 75, 0, 50, 75),
#line 925
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
#line 918
            .ability = ABILITY_FLAME_BODY,
#line 919
            .lvl = 50,
#line 920
            .ball = BALL_MASTER,
#line 922
            .friendship = 1,
#line 924
            .nature = NATURE_QUIET,
#line 921
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 926
                MOVE_FLAMETHROWER,
                MOVE_SHADOW_BALL,
                MOVE_CALM_MIND,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 931
            .species = SPECIES_COPPERAJAH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 931
            .heldItem = ITEM_IRON_BALL,
#line 937
            .ev = TRAINER_PARTY_EVS(0, 200, 100, 0, 0, 100),
#line 939
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 932
            .ability = ABILITY_SHEER_FORCE,
#line 933
            .lvl = 51,
#line 934
            .ball = BALL_MASTER,
#line 936
            .friendship = 1,
#line 938
            .nature = NATURE_BRAVE,
#line 935
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 940
                MOVE_IRON_HEAD,
                MOVE_ROCK_SLIDE,
                MOVE_HIGH_HORSEPOWER,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 945
            .species = SPECIES_HATTERENE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 945
            .heldItem = ITEM_FAIRIUM_Z,
#line 951
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 0, 200, 0),
#line 953
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
#line 946
            .ability = ABILITY_MAGIC_BOUNCE,
#line 947
            .lvl = 52,
#line 948
            .ball = BALL_MASTER,
#line 950
            .friendship = 1,
#line 952
            .nature = NATURE_QUIET,
#line 949
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 954
                MOVE_DAZZLING_GLEAM,
                MOVE_PSYCHIC,
                MOVE_DARK_PULSE,
                MOVE_CALM_MIND,
            },
            },
        },
    },
#line 959
    [DIFFICULTY_NORMAL][TRAINER_KAI_BATTLE8] =
    {
#line 960
        .trainerName = _("Kai"),
#line 962
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 961
        .trainerPic = TRAINER_PIC_FRONT_KAI,
#line 964
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 963
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_KAI,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 966
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 966
            .heldItem = ITEM_FOCUS_SASH,
#line 972
            .ev = TRAINER_PARTY_EVS(0, 0, 150, 0, 0, 150),
#line 973
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 967
            .ability = ABILITY_EFFECT_SPORE,
#line 968
            .lvl = 47,
#line 969
            .ball = BALL_MASTER,
#line 971
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 970
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 973
                MOVE_SEED_BOMB,
                MOVE_LEECH_LIFE,
                MOVE_SPORE,
                MOVE_RAGE_POWDER,
            },
            },
            {
#line 978
            .species = SPECIES_ROTOM_HEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 984
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 150, 150, 0),
#line 986
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 979
            .ability = ABILITY_LEVITATE,
#line 980
            .lvl = 49,
#line 981
            .ball = BALL_MASTER,
#line 983
            .friendship = 1,
#line 985
            .nature = NATURE_TIMID,
#line 982
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 987
                MOVE_OVERHEAT,
                MOVE_THUNDERBOLT,
                MOVE_VOLT_SWITCH,
                MOVE_CHARGE,
            },
            },
            {
#line 992
            .species = SPECIES_HUNTAIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 992
            .heldItem = ITEM_MYSTIC_WATER,
#line 998
            .ev = TRAINER_PARTY_EVS(100, 100, 100, 0, 0, 0),
#line 1000
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 993
            .ability = ABILITY_WATER_VEIL,
#line 994
            .lvl = 48,
#line 995
            .ball = BALL_MASTER,
#line 997
            .friendship = 1,
#line 999
            .nature = NATURE_ADAMANT,
#line 996
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1000
                MOVE_WATERFALL,
                MOVE_ICE_FANG,
                MOVE_AQUA_RING,
                MOVE_CLAMP,
            },
            },
            {
#line 1005
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1011
            .ev = TRAINER_PARTY_EVS(100, 50, 0, 150, 0, 0),
#line 1013
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1006
            .ability = ABILITY_CUTE_CHARM,
#line 1007
            .lvl = 49,
#line 1008
            .ball = BALL_MASTER,
#line 1010
            .friendship = 1,
#line 1012
            .nature = NATURE_JOLLY,
#line 1009
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1013
                MOVE_FAKE_OUT,
                MOVE_FACADE,
                MOVE_HELPING_HAND,
                MOVE_PAYBACK,
            },
            },
            {
#line 1018
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1018
            .heldItem = ITEM_DRAGONIUM_Z,
#line 1024
            .ev = TRAINER_PARTY_EVS(0, 175, 0, 100, 15, 0),
#line 1025
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1019
            .ability = ABILITY_SHED_SKIN,
#line 1020
            .lvl = 51,
#line 1021
            .ball = BALL_MASTER,
#line 1023
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 1022
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1025
                MOVE_DRAGON_RUSH,
                MOVE_IRON_HEAD,
                MOVE_EXTREME_SPEED,
                MOVE_WATERFALL,
            },
            },
        },
    },
#line 1030
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE_BEACHBATTLE] =
    {
#line 1031
        .trainerName = _("Charlotte"),
#line 1032
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
#line 1033
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1035
            .species = SPECIES_PALAFIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1035
            .heldItem = ITEM_CHOICE_SCARF,
#line 1041
            .ev = TRAINER_PARTY_EVS(0, 250, 0, 150, 0, 0),
#line 1043
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1036
            .ability = ABILITY_ZERO_TO_HERO,
#line 1037
            .lvl = 50,
#line 1038
            .ball = BALL_MASTER,
#line 1040
            .friendship = 1,
#line 1042
            .nature = NATURE_ADAMANT,
#line 1039
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1043
                MOVE_WAVE_CRASH,
                MOVE_FLIP_TURN,
                MOVE_CLOSE_COMBAT,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 1048
            .species = SPECIES_TALONFLAME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1048
            .heldItem = ITEM_SHARP_BEAK,
#line 1054
            .ev = TRAINER_PARTY_EVS(0, 200, 0, 200, 0, 0),
#line 1056
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1049
            .ability = ABILITY_GALE_WINGS,
#line 1050
            .lvl = 49,
#line 1051
            .ball = BALL_MASTER,
#line 1053
            .friendship = 1,
#line 1055
            .nature = NATURE_ADAMANT,
#line 1052
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1056
                MOVE_BRAVE_BIRD,
                MOVE_FLARE_BLITZ,
                MOVE_TAILWIND,
                MOVE_DUAL_WINGBEAT,
            },
            },
            {
#line 1061
            .species = SPECIES_DOUBLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1061
            .heldItem = ITEM_EVIOLITE,
#line 1067
            .ev = TRAINER_PARTY_EVS(50, 250, 0, 0, 0, 100),
#line 1069
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1062
            .ability = ABILITY_NO_GUARD,
#line 1063
            .lvl = 50,
#line 1064
            .ball = BALL_MASTER,
#line 1066
            .friendship = 1,
#line 1068
            .nature = NATURE_ADAMANT,
#line 1065
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1069
                MOVE_IRON_HEAD,
                MOVE_SACRED_SWORD,
                MOVE_SHADOW_CLAW,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 1074
            .species = SPECIES_TOEDSCRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1074
            .heldItem = ITEM_GROUNDIUM_Z,
#line 1080
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 200, 200, 0),
#line 1082
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1075
            .ability = ABILITY_MYCELIUM_MIGHT,
#line 1076
            .lvl = 51,
#line 1077
            .ball = BALL_MASTER,
#line 1079
            .friendship = 1,
#line 1081
            .nature = NATURE_MODEST,
#line 1078
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1083
                MOVE_EARTH_POWER,
                MOVE_ENERGY_BALL,
                MOVE_SPORE,
                MOVE_SLUDGE_BOMB,
            },
            },
            {
#line 1088
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1088
            .heldItem = ITEM_FOCUS_SASH,
#line 1094
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 150, 250, 0),
#line 1096
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1089
            .ability = ABILITY_LEVITATE,
#line 1090
            .lvl = 52,
#line 1091
            .ball = BALL_MASTER,
#line 1093
            .friendship = 1,
#line 1095
            .nature = NATURE_SERIOUS,
#line 1092
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1097
                MOVE_DARK_PULSE,
                MOVE_DRAGON_PULSE,
                MOVE_FLAMETHROWER,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 1102
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1102
            .heldItem = ITEM_GALLADITE,
#line 1108
            .ev = TRAINER_PARTY_EVS(200, 200, 0, 0, 0, 0),
#line 1110
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1103
            .ability = ABILITY_SHARPNESS,
#line 1104
            .lvl = 53,
#line 1105
            .ball = BALL_MASTER,
#line 1107
            .friendship = 1,
#line 1109
            .nature = NATURE_SERIOUS,
#line 1106
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1110
                MOVE_SACRED_SWORD,
                MOVE_PSYCHO_CUT,
                MOVE_NIGHT_SLASH,
                MOVE_TRICK_ROOM,
            },
            },
        },
    },
#line 1115
    [DIFFICULTY_NORMAL][TRAINER_ALCMENE] =
    {
#line 1116
        .trainerName = _("Alcmene"),
#line 1121
        .trainerClass = TRAINER_CLASS_THE_TIDE_LEADER,
#line 1117
        .trainerPic = TRAINER_PIC_FRONT_ALCMENE,
#line 1119
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1118
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 1120
        .characterRevealId = REVEAL_ALCMENE,
#line 1122
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 1123
        .objectEventGraphicsId = OBJ_EVENT_GFX_ALCMENE,
#line 1124
        .mapSec = MAPSEC_NAVAL_BASE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ALCMENE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1126
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1126
            .heldItem = ITEM_FOCUS_SASH,
#line 1132
            .ev = TRAINER_PARTY_EVS(12, 248, 0, 248, 0, 0),
#line 1134
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1127
            .ability = ABILITY_SWIFT_SWIM,
#line 1128
            .lvl = 76,
#line 1129
            .ball = BALL_MASTER,
#line 1131
            .friendship = 1,
#line 1133
            .nature = NATURE_ADAMANT,
#line 1130
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1134
                MOVE_LIQUIDATION,
                MOVE_CLOSE_COMBAT,
                MOVE_ICE_PUNCH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 1139
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1139
            .heldItem = ITEM_WACAN_BERRY,
#line 1145
            .ev = TRAINER_PARTY_EVS(132, 132, 4, 236, 0, 4),
#line 1147
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1140
            .ability = ABILITY_INTIMIDATE,
#line 1141
            .lvl = 75,
#line 1142
            .ball = BALL_MASTER,
#line 1144
            .friendship = 1,
#line 1146
            .nature = NATURE_ADAMANT,
#line 1143
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1147
                MOVE_WATERFALL,
                MOVE_POWER_WHIP,
                MOVE_CRUNCH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 1152
            .species = SPECIES_BEARTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1152
            .heldItem = ITEM_WATERIUM_Z,
#line 1158
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1160
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1153
            .ability = ABILITY_SWIFT_SWIM,
#line 1154
            .lvl = 75,
#line 1155
            .ball = BALL_MASTER,
#line 1157
            .friendship = 1,
#line 1159
            .nature = NATURE_ADAMANT,
#line 1156
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1160
                MOVE_ICICLE_CRASH,
                MOVE_LIQUIDATION,
                MOVE_AQUA_JET,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 1165
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1165
            .heldItem = ITEM_CHOICE_BAND,
#line 1171
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1173
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1166
            .ability = ABILITY_INNER_FOCUS,
#line 1167
            .lvl = 76,
#line 1168
            .ball = BALL_MASTER,
#line 1170
            .friendship = 1,
#line 1172
            .nature = NATURE_JOLLY,
#line 1169
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1173
                MOVE_CLOSE_COMBAT,
                MOVE_U_TURN,
                MOVE_POISON_JAB,
                MOVE_TRIPLE_AXEL,
            },
            },
            {
#line 1178
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1178
            .heldItem = ITEM_FLYING_GEM,
#line 1184
            .ev = TRAINER_PARTY_EVS(64, 196, 0, 248, 0, 0),
#line 1186
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1179
            .ability = ABILITY_HYPER_CUTTER,
#line 1180
            .lvl = 76,
#line 1181
            .ball = BALL_MASTER,
#line 1183
            .friendship = 1,
#line 1185
            .nature = NATURE_ADAMANT,
#line 1182
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1186
                MOVE_HIGH_HORSEPOWER,
                MOVE_ACROBATICS,
                MOVE_X_SCISSOR,
                MOVE_CRABHAMMER,
            },
            },
            {
#line 1191
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1191
            .heldItem = ITEM_SWAMPERTITE,
#line 1197
            .ev = TRAINER_PARTY_EVS(136, 116, 4, 248, 0, 4),
#line 1199
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1192
            .ability = ABILITY_TORRENT,
#line 1193
            .lvl = 77,
#line 1194
            .ball = BALL_MASTER,
#line 1196
            .friendship = 1,
#line 1198
            .nature = NATURE_ADAMANT,
#line 1195
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1199
                MOVE_LIQUIDATION,
                MOVE_EARTHQUAKE,
                MOVE_HIGH_HORSEPOWER,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
#line 1204
    [DIFFICULTY_NORMAL][TRAINER_KAI_WHYAREYOUHELPINGTHEM] =
    {
#line 1205
        .trainerName = _("Kai"),
#line 1207
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 1206
        .trainerPic = TRAINER_PIC_FRONT_KAI,
#line 1209
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1208
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_KAI,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1211
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1211
            .heldItem = ITEM_FOCUS_SASH,
#line 1217
            .ev = TRAINER_PARTY_EVS(0, 0, 200, 0, 0, 200),
#line 1218
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1212
            .ability = ABILITY_EFFECT_SPORE,
#line 1213
            .lvl = 67,
#line 1214
            .ball = BALL_MASTER,
#line 1216
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 1215
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1218
                MOVE_SEED_BOMB,
                MOVE_LEECH_LIFE,
                MOVE_SPORE,
                MOVE_RAGE_POWDER,
            },
            },
            {
#line 1223
            .species = SPECIES_ROTOM_FROST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1229
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 200, 200, 0),
#line 1231
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1224
            .ability = ABILITY_LEVITATE,
#line 1225
            .lvl = 69,
#line 1226
            .ball = BALL_MASTER,
#line 1228
            .friendship = 1,
#line 1230
            .nature = NATURE_SERIOUS,
#line 1227
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1232
                MOVE_BLIZZARD,
                MOVE_THUNDERBOLT,
                MOVE_VOLT_SWITCH,
                MOVE_CHARGE,
            },
            },
            {
#line 1237
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1237
            .heldItem = ITEM_CHARCOAL,
#line 1243
            .ev = TRAINER_PARTY_EVS(50, 150, 0, 200, 0, 0),
#line 1245
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1238
            .ability = ABILITY_FLASH_FIRE,
#line 1239
            .lvl = 68,
#line 1240
            .ball = BALL_MASTER,
#line 1242
            .friendship = 1,
#line 1244
            .nature = NATURE_ADAMANT,
#line 1241
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1245
                MOVE_BITTER_BLADE,
                MOVE_SHADOW_CLAW,
                MOVE_SHADOW_SNEAK,
                MOVE_BULK_UP,
            },
            },
            {
#line 1250
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1250
            .heldItem = ITEM_SITRUS_BERRY,
#line 1256
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 150, 150, 0),
#line 1258
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1251
            .ability = ABILITY_SHEER_FORCE,
#line 1252
            .lvl = 68,
#line 1253
            .ball = BALL_MASTER,
#line 1255
            .friendship = 1,
#line 1257
            .nature = NATURE_TIMID,
#line 1254
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1259
                MOVE_EARTH_POWER,
                MOVE_SLUDGE_BOMB,
                MOVE_ICE_BEAM,
                MOVE_ROAR,
            },
            },
            {
#line 1264
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1270
            .ev = TRAINER_PARTY_EVS(100, 50, 25, 200, 0, 25),
#line 1272
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1265
            .ability = ABILITY_CUTE_CHARM,
#line 1266
            .lvl = 69,
#line 1267
            .ball = BALL_MASTER,
#line 1269
            .friendship = 1,
#line 1271
            .nature = NATURE_JOLLY,
#line 1268
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1272
                MOVE_FAKE_OUT,
                MOVE_FACADE,
                MOVE_HELPING_HAND,
                MOVE_HIGH_JUMP_KICK,
            },
            },
            {
#line 1277
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1277
            .heldItem = ITEM_DRAGONIUM_Z,
#line 1283
            .ev = TRAINER_PARTY_EVS(0, 235, 0, 150, 15, 0),
#line 1284
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1278
            .ability = ABILITY_INNER_FOCUS,
#line 1279
            .lvl = 70,
#line 1280
            .ball = BALL_MASTER,
#line 1282
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 1281
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1284
                MOVE_DRAGON_CLAW,
                MOVE_AERIAL_ACE,
                MOVE_EXTREME_SPEED,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 1289
    [DIFFICULTY_NORMAL][TRAINER_LEAGUEOPPONENT1] =
    {
#line 1290
        .trainerName = _("League1"),
#line 1291
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
#line 1292
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1294
            .species = SPECIES_GRAFAIAI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1294
            .heldItem = ITEM_ROCKY_HELMET,
#line 1300
            .ev = TRAINER_PARTY_EVS(252, 240, 12, 4, 0, 0),
#line 1302
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1295
            .ability = ABILITY_PRANKSTER,
#line 1296
            .lvl = 72,
#line 1297
            .ball = BALL_MASTER,
#line 1299
            .friendship = 1,
#line 1301
            .nature = NATURE_ADAMANT,
#line 1298
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1302
                MOVE_SCARY_FACE,
                MOVE_ENCORE,
                MOVE_GUNK_SHOT,
                MOVE_DOUBLE_EDGE,
            },
            },
            {
#line 1307
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1307
            .heldItem = ITEM_DARKINIUM_Z,
#line 1313
            .ev = TRAINER_PARTY_EVS(4, 4, 0, 248, 252, 0),
#line 1315
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1308
            .ability = ABILITY_ILLUSION,
#line 1309
            .lvl = 72,
#line 1310
            .ball = BALL_MASTER,
#line 1312
            .friendship = 1,
#line 1314
            .nature = NATURE_HASTY,
#line 1311
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1315
                MOVE_DARK_PULSE,
                MOVE_SUCKER_PUNCH,
                MOVE_FLAMETHROWER,
                MOVE_EXTRASENSORY,
            },
            },
            {
#line 1320
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1320
            .heldItem = ITEM_SCIZORITE,
#line 1326
            .ev = TRAINER_PARTY_EVS(248, 252, 0, 4, 0, 4),
#line 1328
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1321
            .ability = ABILITY_TECHNICIAN,
#line 1322
            .lvl = 73,
#line 1323
            .ball = BALL_MASTER,
#line 1325
            .friendship = 1,
#line 1327
            .nature = NATURE_ADAMANT,
#line 1324
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1328
                MOVE_BULLET_PUNCH,
                MOVE_QUICK_ATTACK,
                MOVE_BUG_BITE,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
#line 1333
    [DIFFICULTY_NORMAL][TRAINER_LEAGUEOPPONENT2] =
    {
#line 1334
        .trainerName = _("League2"),
#line 1335
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
#line 1336
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1338
            .species = SPECIES_VANILLUXE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1338
            .heldItem = ITEM_ICY_ROCK,
#line 1344
            .ev = TRAINER_PARTY_EVS(220, 0, 0, 252, 36, 0),
#line 1346
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1339
            .ability = ABILITY_SNOW_WARNING,
#line 1340
            .lvl = 72,
#line 1341
            .ball = BALL_MASTER,
#line 1343
            .friendship = 1,
#line 1345
            .nature = NATURE_TIMID,
#line 1342
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1347
                MOVE_BLIZZARD,
                MOVE_AURORA_VEIL,
                MOVE_FLASH_CANNON,
                MOVE_SHEER_COLD,
            },
            },
            {
#line 1352
            .species = SPECIES_CETITAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1352
            .heldItem = ITEM_SITRUS_BERRY,
#line 1358
            .ev = TRAINER_PARTY_EVS(8, 112, 104, 100, 0, 184),
#line 1360
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1353
            .ability = ABILITY_SLUSH_RUSH,
#line 1354
            .lvl = 72,
#line 1355
            .ball = BALL_MASTER,
#line 1357
            .friendship = 1,
#line 1359
            .nature = NATURE_ADAMANT,
#line 1356
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1360
                MOVE_ICICLE_CRASH,
                MOVE_LIQUIDATION,
                MOVE_BELLY_DRUM,
                MOVE_HIGH_HORSEPOWER,
            },
            },
            {
#line 1366
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1372
            .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
#line 1374
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1367
            .ability = ABILITY_HYPER_CUTTER,
#line 1368
            .lvl = 73,
#line 1369
            .ball = BALL_MASTER,
#line 1371
            .friendship = 1,
#line 1373
            .nature = NATURE_ADAMANT,
#line 1370
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1374
                MOVE_CRABHAMMER,
                MOVE_BODY_SLAM,
                MOVE_HIGH_HORSEPOWER,
                MOVE_X_SCISSOR,
            },
            },
        },
    },
#line 1379
    [DIFFICULTY_NORMAL][TRAINER_LEAGUEOPPONENT3] =
    {
#line 1380
        .trainerName = _("League3"),
#line 1381
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
#line 1382
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1384
            .species = SPECIES_TOXAPEX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1384
            .heldItem = ITEM_BLACK_SLUDGE,
#line 1390
            .ev = TRAINER_PARTY_EVS(252, 12, 84, 0, 0, 160),
#line 1392
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1385
            .ability = ABILITY_MERCILESS,
#line 1386
            .lvl = 72,
#line 1387
            .ball = BALL_MASTER,
#line 1389
            .friendship = 1,
#line 1391
            .nature = NATURE_ADAMANT,
#line 1388
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1392
                MOVE_TOXIC,
                MOVE_BANEFUL_BUNKER,
                MOVE_LIQUIDATION,
                MOVE_POISON_JAB,
            },
            },
            {
#line 1397
            .species = SPECIES_URSALUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1397
            .heldItem = ITEM_CHESTO_BERRY,
#line 1403
            .ev = TRAINER_PARTY_EVS(248, 48, 0, 0, 0, 212),
#line 1405
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1398
            .ability = ABILITY_UNNERVE,
#line 1399
            .lvl = 72,
#line 1400
            .ball = BALL_MASTER,
#line 1402
            .friendship = 1,
#line 1404
            .nature = NATURE_CAREFUL,
#line 1401
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1405
                MOVE_YAWN,
                MOVE_REST,
                MOVE_EARTHQUAKE,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 1410
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1410
            .heldItem = ITEM_SLOWBRONITE,
#line 1416
            .ev = TRAINER_PARTY_EVS(252, 0, 60, 0, 0, 196),
#line 1418
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1411
            .ability = ABILITY_OBLIVIOUS,
#line 1412
            .lvl = 73,
#line 1413
            .ball = BALL_MASTER,
#line 1415
            .friendship = 1,
#line 1417
            .nature = NATURE_CALM,
#line 1414
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1419
                MOVE_TOXIC,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
        },
    },
#line 1424
    [DIFFICULTY_NORMAL][TRAINER_LEAGUEOPPONENT4] =
    {
#line 1425
        .trainerName = _("League4"),
#line 1426
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
#line 1427
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1429
            .species = SPECIES_KILOWATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1429
            .heldItem = ITEM_FLYINIUM_Z,
#line 1435
            .ev = TRAINER_PARTY_EVS(8, 0, 0, 252, 248, 0),
#line 1437
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1430
            .ability = ABILITY_COMPETITIVE,
#line 1431
            .lvl = 73,
#line 1432
            .ball = BALL_MASTER,
#line 1434
            .friendship = 1,
#line 1436
            .nature = NATURE_TIMID,
#line 1433
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1438
                MOVE_HURRICANE,
                MOVE_AIR_SLASH,
                MOVE_THUNDERBOLT,
                MOVE_VOLT_SWITCH,
            },
            },
            {
#line 1443
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1443
            .heldItem = ITEM_MENTAL_HERB,
#line 1449
            .ev = TRAINER_PARTY_EVS(156, 0, 100, 252, 0, 0),
#line 1451
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1444
            .ability = ABILITY_INNER_FOCUS,
#line 1445
            .lvl = 73,
#line 1446
            .ball = BALL_MASTER,
#line 1448
            .friendship = 1,
#line 1450
            .nature = NATURE_JOLLY,
#line 1447
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1452
                MOVE_BELLY_DRUM,
                MOVE_BATON_PASS,
                MOVE_COUNTER,
            },
            },
            {
#line 1456
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1456
            .heldItem = ITEM_GYARADOSITE,
#line 1458
            .ev = TRAINER_PARTY_EVS(156, 252, 0, 100, 0, 0),
#line 1460
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1457
            .ability = ABILITY_INTIMIDATE,
#line 1460
            .lvl = 100,
            .ball = POKEBALL_COUNT,
#line 1459
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1460
                MOVE_WATERFALL,
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 1465
    [DIFFICULTY_NORMAL][TRAINER_KAI_FINALS] =
    {
#line 1466
        .trainerName = _("Kai"),
#line 1468
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 1467
        .trainerPic = TRAINER_PIC_FRONT_KAI,
#line 1469
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_KAI,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1471
            .species = SPECIES_KLEFKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1471
            .heldItem = ITEM_LIGHT_CLAY,
#line 1477
            .ev = TRAINER_PARTY_EVS(248, 0, 32, 0, 196, 32),
#line 1479
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1472
            .ability = ABILITY_PRANKSTER,
#line 1473
            .lvl = 73,
#line 1474
            .ball = BALL_MASTER,
#line 1476
            .friendship = 1,
#line 1478
            .nature = NATURE_MODEST,
#line 1475
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1480
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_DAZZLING_GLEAM,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 1485
            .species = SPECIES_HUNTAIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1485
            .heldItem = ITEM_MYSTIC_WATER,
#line 1491
            .ev = TRAINER_PARTY_EVS(100, 228, 100, 80, 0, 0),
#line 1493
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1486
            .ability = ABILITY_WATER_VEIL,
#line 1487
            .lvl = 73,
#line 1488
            .ball = BALL_MASTER,
#line 1490
            .friendship = 1,
#line 1492
            .nature = NATURE_ADAMANT,
#line 1489
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1493
                MOVE_WATERFALL,
                MOVE_ICE_FANG,
                MOVE_CRUNCH,
                MOVE_SHELL_SMASH,
            },
            },
            {
#line 1498
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1498
            .heldItem = ITEM_CHARCOAL,
#line 1504
            .ev = TRAINER_PARTY_EVS(88, 164, 4, 252, 0, 0),
#line 1506
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1499
            .ability = ABILITY_FLASH_FIRE,
#line 1500
            .lvl = 73,
#line 1501
            .ball = BALL_MASTER,
#line 1503
            .friendship = 1,
#line 1505
            .nature = NATURE_ADAMANT,
#line 1502
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1506
                MOVE_BITTER_BLADE,
                MOVE_SHADOW_CLAW,
                MOVE_SHADOW_SNEAK,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 1511
            .species = SPECIES_ROTOM_MOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1511
            .heldItem = ITEM_MIRACLE_SEED,
#line 1517
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 252, 200, 4),
#line 1519
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1512
            .ability = ABILITY_LEVITATE,
#line 1513
            .lvl = 73,
#line 1514
            .ball = BALL_MASTER,
#line 1516
            .friendship = 1,
#line 1518
            .nature = NATURE_TIMID,
#line 1515
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1520
                MOVE_LEAF_STORM,
                MOVE_THUNDERBOLT,
                MOVE_NASTY_PLOT,
                MOVE_DISCHARGE,
            },
            },
            {
#line 1525
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1525
            .heldItem = ITEM_LOPUNNITE,
#line 1531
            .ev = TRAINER_PARTY_EVS(100, 104, 28, 248, 0, 28),
#line 1533
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1526
            .ability = ABILITY_CUTE_CHARM,
#line 1527
            .lvl = 74,
#line 1528
            .ball = BALL_MASTER,
#line 1530
            .friendship = 1,
#line 1532
            .nature = NATURE_JOLLY,
#line 1529
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1533
                MOVE_FACADE,
                MOVE_HIGH_JUMP_KICK,
                MOVE_DRAIN_PUNCH,
                MOVE_BOUNCE,
            },
            },
            {
#line 1538
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1538
            .heldItem = ITEM_DRAGONIUM_Z,
#line 1544
            .ev = TRAINER_PARTY_EVS(60, 248, 0, 200, 0, 0),
#line 1545
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1539
            .ability = ABILITY_INNER_FOCUS,
#line 1540
            .lvl = 74,
#line 1541
            .ball = BALL_MASTER,
#line 1543
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 1542
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1545
                MOVE_OUTRAGE,
                MOVE_DRAGON_CLAW,
                MOVE_AERIAL_ACE,
                MOVE_IRON_HEAD,
            },
            },
        },
    },
#line 1550
    [DIFFICULTY_NORMAL][TRAINER_KAI_LETSGRABLUNCH] =
    {
#line 1551
        .trainerName = _("Kai"),
#line 1553
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 1552
        .trainerPic = TRAINER_PIC_FRONT_KAI,
#line 1555
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1554
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_KAI,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1557
            .species = SPECIES_KLEFKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1557
            .heldItem = ITEM_LIGHT_CLAY,
#line 1563
            .ev = TRAINER_PARTY_EVS(248, 0, 32, 0, 196, 32),
#line 1565
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1558
            .ability = ABILITY_PRANKSTER,
#line 1559
            .lvl = 73,
#line 1560
            .ball = BALL_MASTER,
#line 1562
            .friendship = 1,
#line 1564
            .nature = NATURE_MODEST,
#line 1561
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1566
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_DAZZLING_GLEAM,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 1571
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1571
            .heldItem = ITEM_LIFE_ORB,
#line 1577
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 212, 196, 0),
#line 1579
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1572
            .ability = ABILITY_SHEER_FORCE,
#line 1573
            .lvl = 73,
#line 1574
            .ball = BALL_MASTER,
#line 1576
            .friendship = 1,
#line 1578
            .nature = NATURE_TIMID,
#line 1575
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1580
                MOVE_EARTH_POWER,
                MOVE_SLUDGE_WAVE,
                MOVE_ICE_BEAM,
                MOVE_FOCUS_BLAST,
            },
            },
            {
#line 1585
            .species = SPECIES_HUNTAIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1585
            .heldItem = ITEM_MYSTIC_WATER,
#line 1591
            .ev = TRAINER_PARTY_EVS(100, 228, 100, 80, 0, 0),
#line 1593
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1586
            .ability = ABILITY_WATER_VEIL,
#line 1587
            .lvl = 73,
#line 1588
            .ball = BALL_MASTER,
#line 1590
            .friendship = 1,
#line 1592
            .nature = NATURE_ADAMANT,
#line 1589
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1593
                MOVE_WATERFALL,
                MOVE_ICE_FANG,
                MOVE_CRUNCH,
                MOVE_SHELL_SMASH,
            },
            },
            {
#line 1598
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1598
            .heldItem = ITEM_CHARCOAL,
#line 1604
            .ev = TRAINER_PARTY_EVS(88, 164, 4, 252, 0, 0),
#line 1606
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1599
            .ability = ABILITY_FLASH_FIRE,
#line 1600
            .lvl = 73,
#line 1601
            .ball = BALL_MASTER,
#line 1603
            .friendship = 1,
#line 1605
            .nature = NATURE_ADAMANT,
#line 1602
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1606
                MOVE_BITTER_BLADE,
                MOVE_SHADOW_CLAW,
                MOVE_SHADOW_SNEAK,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 1611
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1611
            .heldItem = ITEM_LOPUNNITE,
#line 1617
            .ev = TRAINER_PARTY_EVS(100, 104, 28, 248, 0, 28),
#line 1619
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1612
            .ability = ABILITY_CUTE_CHARM,
#line 1613
            .lvl = 74,
#line 1614
            .ball = BALL_MASTER,
#line 1616
            .friendship = 1,
#line 1618
            .nature = NATURE_JOLLY,
#line 1615
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1619
                MOVE_FACADE,
                MOVE_HIGH_JUMP_KICK,
                MOVE_DRAIN_PUNCH,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 1624
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1624
            .heldItem = ITEM_FLYINIUM_Z,
#line 1630
            .ev = TRAINER_PARTY_EVS(60, 248, 0, 200, 0, 0),
#line 1631
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1625
            .ability = ABILITY_INNER_FOCUS,
#line 1626
            .lvl = 75,
#line 1627
            .ball = BALL_MASTER,
#line 1629
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 1628
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1631
                MOVE_DRAGON_CLAW,
                MOVE_AERIAL_ACE,
                MOVE_DRAGON_DANCE,
                MOVE_IRON_HEAD,
            },
            },
        },
    },
#line 1636
    [DIFFICULTY_NORMAL][TRAINER_DOYLE_ZENZU_ISLAND] =
    {
#line 1637
        .trainerName = _("Doyle"),
#line 1639
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 1638
        .trainerPic = TRAINER_PIC_FRONT_DOYLE,
#line 1641
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1640
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 1642
        .characterRevealId = REVEAL_DOYLE,
#line 1643
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 1644
        .objectEventGraphicsId = OBJ_EVENT_GFX_DOYLE,
#line 1645
        .mapSec = MAPSEC_ZENZU_ISLAND,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_DOYLE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1647
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1647
            .heldItem = ITEM_LIFE_ORB,
#line 1653
            .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
#line 1655
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1648
            .ability = ABILITY_SHEER_FORCE,
#line 1649
            .lvl = 75,
#line 1650
            .ball = BALL_MASTER,
#line 1652
            .friendship = 1,
#line 1654
            .nature = NATURE_TIMID,
#line 1651
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1656
                MOVE_EARTH_POWER,
                MOVE_SLUDGE_BOMB,
                MOVE_ICE_BEAM,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 1661
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1661
            .heldItem = ITEM_CHOPLE_BERRY,
#line 1667
            .ev = TRAINER_PARTY_EVS(252, 60, 52, 0, 0, 144),
#line 1669
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1662
            .ability = ABILITY_SAND_STREAM,
#line 1663
            .lvl = 75,
#line 1664
            .ball = BALL_MASTER,
#line 1666
            .friendship = 1,
#line 1668
            .nature = NATURE_ADAMANT,
#line 1665
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1669
                MOVE_ROCK_SLIDE,
                MOVE_ASSURANCE,
                MOVE_HELPING_HAND,
                MOVE_DRAGON_TAIL,
            },
            },
            {
#line 1674
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1674
            .heldItem = ITEM_ASSAULT_VEST,
#line 1680
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 252, 148, 8),
#line 1682
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1675
            .ability = ABILITY_LEVITATE,
#line 1676
            .lvl = 74,
#line 1677
            .ball = BALL_MASTER,
#line 1679
            .friendship = 1,
#line 1681
            .nature = NATURE_MODEST,
#line 1678
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1683
                MOVE_DARK_PULSE,
                MOVE_DRACO_METEOR,
                MOVE_EARTH_POWER,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 1688
            .species = SPECIES_VOLCARONA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1688
            .heldItem = ITEM_FIRIUM_Z,
#line 1694
            .ev = TRAINER_PARTY_EVS(128, 0, 120, 252, 8, 0),
#line 1696
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1689
            .ability = ABILITY_FLAME_BODY,
#line 1690
            .lvl = 76,
#line 1691
            .ball = BALL_MASTER,
#line 1693
            .friendship = 1,
#line 1695
            .nature = NATURE_TIMID,
#line 1692
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1697
                MOVE_FLAMETHROWER,
                MOVE_BUG_BUZZ,
                MOVE_GIGA_DRAIN,
                MOVE_RAGE_POWDER,
            },
            },
            {
#line 1703
            .species = SPECIES_DURALUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1709
            .ev = TRAINER_PARTY_EVS(8, 0, 0, 0, 248, 252),
#line 1711
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1704
            .ability = ABILITY_STALWART,
#line 1705
            .lvl = 76,
#line 1706
            .ball = BALL_MASTER,
#line 1708
            .friendship = 1,
#line 1710
            .nature = NATURE_MODEST,
#line 1707
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1712
                MOVE_FLASH_CANNON,
                MOVE_DRAGON_PULSE,
                MOVE_THUNDERBOLT,
                MOVE_DARK_PULSE,
            },
            },
        },
    },
#line 1717
    [DIFFICULTY_NORMAL][TRAINER_IMELDA] =
    {
#line 1718
        .trainerName = _("Imelda"),
#line 1719
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 1720
        .trainerPic = TRAINER_PIC_FRONT_IMELDA,
#line 1722
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1721
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 1723
        .characterRevealId = REVEAL_IMELDA,
#line 1724
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 1725
        .objectEventGraphicsId = OBJ_EVENT_GFX_IMELDA,
#line 1726
        .mapSec = MAPSEC_ESPULEE_OUTSKIRTS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_IMELDA,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1728
            .species = SPECIES_REVAVROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1728
            .heldItem = ITEM_COVERT_CLOAK,
#line 1734
            .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
#line 1736
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1729
            .ability = ABILITY_OVERCOAT,
#line 1730
            .lvl = 75,
#line 1731
            .ball = BALL_MASTER,
#line 1733
            .friendship = 1,
#line 1735
            .nature = NATURE_JOLLY,
#line 1732
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1736
                MOVE_SPIN_OUT,
                MOVE_POISON_GAS,
                MOVE_GUNK_SHOT,
                MOVE_TOXIC_SPIKES,
            },
            },
            {
#line 1741
            .species = SPECIES_POLTEAGEIST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1741
            .heldItem = ITEM_WHITE_HERB,
#line 1747
            .ev = TRAINER_PARTY_EVS(140, 0, 100, 252, 16, 0),
#line 1749
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1742
            .ability = ABILITY_WEAK_ARMOR,
#line 1743
            .lvl = 74,
#line 1744
            .ball = BALL_MASTER,
#line 1746
            .friendship = 1,
#line 1748
            .nature = NATURE_TIMID,
#line 1745
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1750
                MOVE_SHADOW_BALL,
                MOVE_GIGA_DRAIN,
                MOVE_SHELL_SMASH,
                MOVE_DARK_PULSE,
            },
            },
            {
#line 1755
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1755
            .heldItem = ITEM_PSYCHIUM_Z,
#line 1761
            .ev = TRAINER_PARTY_EVS(128, 0, 132, 0, 248, 0),
#line 1763
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
#line 1756
            .ability = ABILITY_FLASH_FIRE,
#line 1757
            .lvl = 76,
#line 1758
            .ball = BALL_MASTER,
#line 1760
            .friendship = 1,
#line 1762
            .nature = NATURE_RELAXED,
#line 1759
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1764
                MOVE_SHADOW_BALL,
                MOVE_HEAT_WAVE,
                MOVE_TRICK_ROOM,
                MOVE_INFERNO,
            },
            },
            {
#line 1769
            .species = SPECIES_DHELMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1769
            .heldItem = ITEM_ASSAULT_VEST,
#line 1775
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
#line 1777
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 1770
            .ability = ABILITY_STEELWORKER,
#line 1771
            .lvl = 75,
#line 1772
            .ball = BALL_MASTER,
#line 1774
            .friendship = 1,
#line 1776
            .nature = NATURE_BRAVE,
#line 1773
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1778
                MOVE_POLTERGEIST,
                MOVE_POWER_WHIP,
                MOVE_ANCHOR_SHOT,
                MOVE_LIQUIDATION,
            },
            },
            {
#line 1784
            .species = SPECIES_GARBODOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1790
            .ev = TRAINER_PARTY_EVS(4, 248, 128, 0, 0, 128),
#line 1792
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 1785
            .ability = ABILITY_STENCH,
#line 1786
            .lvl = 76,
#line 1787
            .ball = BALL_MASTER,
#line 1789
            .friendship = 1,
#line 1791
            .nature = NATURE_BRAVE,
#line 1788
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1793
                MOVE_GUNK_SHOT,
                MOVE_PAYBACK,
                MOVE_SEED_BOMB,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 1798
    [DIFFICULTY_NORMAL][TRAINER_ADAORA_HOWDISAPPOINTING] =
    {
#line 1799
        .trainerName = _("Adaora"),
#line 1804
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 1800
        .trainerPic = TRAINER_PIC_FRONT_ADAORA,
#line 1802
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1801
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 1803
        .characterRevealId = REVEAL_ADAORA,
#line 1805
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 1806
        .objectEventGraphicsId = OBJ_EVENT_GFX_ADAORA,
#line 1807
        .mapSec = MAPSEC_HODOU_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ADAORA,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1809
            .species = SPECIES_BARRASKEWDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1809
            .heldItem = ITEM_CHOICE_BAND,
#line 1815
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1817
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1810
            .ability = ABILITY_SWIFT_SWIM,
#line 1811
            .lvl = 73,
#line 1812
            .ball = BALL_MASTER,
#line 1814
            .friendship = 1,
#line 1816
            .nature = NATURE_ADAMANT,
#line 1813
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1817
                MOVE_LIQUIDATION,
                MOVE_FLIP_TURN,
                MOVE_CLOSE_COMBAT,
                MOVE_CRUNCH,
            },
            },
            {
#line 1822
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1822
            .heldItem = ITEM_ROCKIUM_Z,
#line 1828
            .ev = TRAINER_PARTY_EVS(136, 100, 8, 252, 0, 12),
#line 1830
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1823
            .ability = ABILITY_SWIFT_SWIM,
#line 1824
            .lvl = 74,
#line 1825
            .ball = BALL_MASTER,
#line 1827
            .friendship = 1,
#line 1829
            .nature = NATURE_JOLLY,
#line 1826
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1830
                MOVE_ROCK_SLIDE,
                MOVE_X_SCISSOR,
                MOVE_STONE_EDGE,
                MOVE_STOMPING_TANTRUM,
            },
            },
            {
#line 1835
            .species = SPECIES_GRAPPLOCT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1835
            .heldItem = ITEM_ASSAULT_VEST,
#line 1841
            .ev = TRAINER_PARTY_EVS(252, 112, 132, 0, 0, 12),
#line 1843
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1836
            .ability = ABILITY_TECHNICIAN,
#line 1837
            .lvl = 73,
#line 1838
            .ball = BALL_MASTER,
#line 1840
            .friendship = 1,
#line 1842
            .nature = NATURE_ADAMANT,
#line 1839
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1843
                MOVE_CLOSE_COMBAT,
                MOVE_CIRCLE_THROW,
                MOVE_LIQUIDATION,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 1848
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1848
            .heldItem = ITEM_FOCUS_SASH,
#line 1854
            .ev = TRAINER_PARTY_EVS(8, 248, 0, 252, 0, 0),
#line 1856
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1849
            .ability = ABILITY_TECHNICIAN,
#line 1850
            .lvl = 74,
#line 1851
            .ball = BALL_MASTER,
#line 1853
            .friendship = 1,
#line 1855
            .nature = NATURE_JOLLY,
#line 1852
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1856
                MOVE_MACH_PUNCH,
                MOVE_BULLET_SEED,
                MOVE_SPORE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 1861
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1861
            .heldItem = ITEM_CHOICE_SPECS,
#line 1867
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 12, 248, 0),
#line 1869
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1862
            .ability = ABILITY_RAIN_DISH,
#line 1863
            .lvl = 74,
#line 1864
            .ball = BALL_MASTER,
#line 1866
            .friendship = 1,
#line 1868
            .nature = NATURE_MODEST,
#line 1865
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1870
                MOVE_SLUDGE_BOMB,
                MOVE_MUDDY_WATER,
                MOVE_DAZZLING_GLEAM,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 1876
            .species = SPECIES_DREDNAW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1882
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
#line 1884
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1877
            .ability = ABILITY_SWIFT_SWIM,
#line 1878
            .lvl = 75,
#line 1879
            .ball = BALL_MASTER,
#line 1881
            .friendship = 1,
#line 1883
            .nature = NATURE_CAREFUL,
#line 1880
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1884
                MOVE_ROCK_SLIDE,
                MOVE_LIQUIDATION,
                MOVE_HIGH_HORSEPOWER,
                MOVE_BODY_PRESS,
            },
            },
        },
    },
#line 1889
    [DIFFICULTY_NORMAL][TRAINER_KAI_LETSBURNTHISMOTHERDOWN] =
    {
#line 1890
        .trainerName = _("Kai"),
#line 1892
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 1891
        .trainerPic = TRAINER_PIC_FRONT_KAI,
#line 1894
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1893
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_KAI,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1896
            .species = SPECIES_KLEFKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1896
            .heldItem = ITEM_LIGHT_CLAY,
#line 1902
            .ev = TRAINER_PARTY_EVS(248, 0, 32, 0, 196, 32),
#line 1904
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1897
            .ability = ABILITY_PRANKSTER,
#line 1898
            .lvl = 74,
#line 1899
            .ball = BALL_MASTER,
#line 1901
            .friendship = 1,
#line 1903
            .nature = NATURE_MODEST,
#line 1900
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1905
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_DAZZLING_GLEAM,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 1910
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1910
            .heldItem = ITEM_LOPUNNITE,
#line 1916
            .ev = TRAINER_PARTY_EVS(100, 156, 0, 252, 0, 0),
#line 1918
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1911
            .ability = ABILITY_CUTE_CHARM,
#line 1912
            .lvl = 76,
#line 1913
            .ball = BALL_MASTER,
#line 1915
            .friendship = 1,
#line 1917
            .nature = NATURE_JOLLY,
#line 1914
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1918
                MOVE_FAKE_OUT,
                MOVE_FACADE,
                MOVE_HIGH_JUMP_KICK,
                MOVE_U_TURN,
            },
            },
            {
#line 1923
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1923
            .heldItem = ITEM_LIFE_ORB,
#line 1929
            .ev = TRAINER_PARTY_EVS(0, 100, 0, 212, 196, 0),
#line 1931
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1924
            .ability = ABILITY_SHEER_FORCE,
#line 1925
            .lvl = 75,
#line 1926
            .ball = BALL_MASTER,
#line 1928
            .friendship = 1,
#line 1930
            .nature = NATURE_HASTY,
#line 1927
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1931
                MOVE_EARTH_POWER,
                MOVE_SLUDGE_BOMB,
                MOVE_ROCK_SLIDE,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 1936
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1936
            .heldItem = ITEM_BIG_ROOT,
#line 1942
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1944
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1937
            .ability = ABILITY_FLASH_FIRE,
#line 1938
            .lvl = 75,
#line 1939
            .ball = BALL_MASTER,
#line 1941
            .friendship = 1,
#line 1943
            .nature = NATURE_ADAMANT,
#line 1940
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1944
                MOVE_BITTER_BLADE,
                MOVE_SHADOW_CLAW,
                MOVE_SHADOW_SNEAK,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 1949
            .species = SPECIES_ROTOM_WASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1949
            .heldItem = ITEM_SITRUS_BERRY,
#line 1955
            .ev = TRAINER_PARTY_EVS(156, 0, 0, 252, 100, 0),
#line 1957
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1950
            .ability = ABILITY_LEVITATE,
#line 1951
            .lvl = 75,
#line 1952
            .ball = BALL_MASTER,
#line 1954
            .friendship = 1,
#line 1956
            .nature = NATURE_TIMID,
#line 1953
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1958
                MOVE_HYDRO_PUMP,
                MOVE_THUNDERBOLT,
                MOVE_WILL_O_WISP,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 1963
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1963
            .heldItem = ITEM_FLYINIUM_Z,
#line 1969
            .ev = TRAINER_PARTY_EVS(52, 252, 0, 200, 0, 4),
#line 1971
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1964
            .ability = ABILITY_INNER_FOCUS,
#line 1965
            .lvl = 77,
#line 1966
            .ball = BALL_MASTER,
#line 1968
            .friendship = 1,
#line 1970
            .nature = NATURE_ADAMANT,
#line 1967
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1971
                MOVE_DRAGON_CLAW,
                MOVE_FLY,
                MOVE_IRON_HEAD,
                MOVE_DRAGON_DANCE,
            },
            },
        },
    },
#line 1976
    [DIFFICULTY_NORMAL][TRAINER_DIANTHA] =
    {
#line 1977
        .trainerName = _("Diantha"),
#line 1978
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
#line 1979
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1981
            .species = SPECIES_HAWLUCHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1981
            .heldItem = ITEM_FLYING_GEM,
#line 1987
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1989
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1982
            .ability = ABILITY_UNBURDEN,
#line 1983
            .lvl = 77,
#line 1984
            .ball = BALL_MASTER,
#line 1986
            .friendship = 1,
#line 1988
            .nature = NATURE_ADAMANT,
#line 1985
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1989
                MOVE_ACROBATICS,
                MOVE_FLYING_PRESS,
                MOVE_X_SCISSOR,
                MOVE_POISON_JAB,
            },
            },
            {
#line 1994
            .species = SPECIES_TYRANTRUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1994
            .heldItem = ITEM_ASSAULT_VEST,
#line 2000
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 2002
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1995
            .ability = ABILITY_ROCK_HEAD,
#line 1996
            .lvl = 76,
#line 1997
            .ball = BALL_MASTER,
#line 1999
            .friendship = 1,
#line 2001
            .nature = NATURE_ADAMANT,
#line 1998
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2002
                MOVE_HEAD_SMASH,
                MOVE_DRAGON_CLAW,
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 2007
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2007
            .heldItem = ITEM_EJECT_BUTTON,
#line 2013
            .ev = TRAINER_PARTY_EVS(244, 0, 80, 0, 172, 12),
#line 2015
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2008
            .ability = ABILITY_REGENERATOR,
#line 2009
            .lvl = 76,
#line 2010
            .ball = BALL_MASTER,
#line 2012
            .friendship = 1,
#line 2014
            .nature = NATURE_MODEST,
#line 2011
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2016
                MOVE_SLUDGE_BOMB,
                MOVE_GRASS_KNOT,
                MOVE_SPORE,
                MOVE_FOUL_PLAY,
            },
            },
            {
#line 2021
            .species = SPECIES_AEGISLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2021
            .heldItem = ITEM_LIFE_ORB,
#line 2027
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 8, 252, 0),
#line 2029
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2022
            .ability = ABILITY_STANCE_CHANGE,
#line 2023
            .lvl = 78,
#line 2024
            .ball = BALL_MASTER,
#line 2026
            .friendship = 1,
#line 2028
            .nature = NATURE_MODEST,
#line 2025
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2029
                MOVE_FLASH_CANNON,
                MOVE_SHADOW_BALL,
                MOVE_KINGS_SHIELD,
                MOVE_SHADOW_SNEAK,
            },
            },
            {
#line 2034
            .species = SPECIES_BAXCALIBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2034
            .heldItem = ITEM_ICIUM_Z,
#line 2040
            .ev = TRAINER_PARTY_EVS(76, 180, 0, 252, 0, 0),
#line 2042
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2035
            .ability = ABILITY_THERMAL_EXCHANGE,
#line 2036
            .lvl = 78,
#line 2037
            .ball = BALL_MASTER,
#line 2039
            .friendship = 1,
#line 2041
            .nature = NATURE_ADAMANT,
#line 2038
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2042
                MOVE_ICICLE_CRASH,
                MOVE_GLAIVE_RUSH,
                MOVE_HIGH_HORSEPOWER,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 2047
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2047
            .heldItem = ITEM_GARDEVOIRITE,
#line 2053
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2055
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2048
            .ability = ABILITY_TRACE,
#line 2049
            .lvl = 79,
#line 2050
            .ball = BALL_MASTER,
#line 2052
            .friendship = 1,
#line 2054
            .nature = NATURE_TIMID,
#line 2051
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2056
                MOVE_MOONBLAST,
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 2061
    [DIFFICULTY_NORMAL][TRAINER_KEI_YING_WAREHOUSE_RAVE] =
    {
#line 2062
        .trainerName = _("Kei-ying"),
#line 2066
        .trainerClass = TRAINER_CLASS_SHARPRISE_COO,
#line 2063
        .trainerPic = TRAINER_PIC_FRONT_KEI_YING,
#line 2064
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2065
        .characterRevealId = REVEAL_KEI_YING,
#line 2067
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2068
        .objectEventGraphicsId = OBJ_EVENT_GFX_KEIYING,
#line 2069
        .mapSec = MAPSEC_CURENO_PORT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_KEI_YING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2071
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2071
            .heldItem = ITEM_FAIRY_GEM,
#line 2077
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 204, 252, 0),
#line 2079
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2072
            .ability = ABILITY_TELEPATHY,
#line 2073
            .lvl = 81,
#line 2074
            .ball = BALL_MASTER,
#line 2076
            .friendship = 1,
#line 2078
            .nature = NATURE_TIMID,
#line 2075
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2080
                MOVE_MISTY_EXPLOSION,
            },
            },
            {
#line 2082
            .species = SPECIES_FLORGES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2082
            .heldItem = ITEM_FAIRY_GEM,
#line 2088
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2090
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2083
            .ability = ABILITY_FLOWER_VEIL,
#line 2084
            .lvl = 81,
#line 2085
            .ball = BALL_MASTER,
#line 2087
            .friendship = 1,
#line 2089
            .nature = NATURE_TIMID,
#line 2086
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2091
                MOVE_MISTY_EXPLOSION,
            },
            },
            {
#line 2093
            .species = SPECIES_HATTERENE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2093
            .heldItem = ITEM_FAIRY_GEM,
#line 2099
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
#line 2101
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2094
            .ability = ABILITY_MAGIC_BOUNCE,
#line 2095
            .lvl = 81,
#line 2096
            .ball = BALL_MASTER,
#line 2098
            .friendship = 1,
#line 2100
            .nature = NATURE_MODEST,
#line 2097
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2102
                MOVE_MISTY_EXPLOSION,
            },
            },
            {
#line 2104
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2104
            .heldItem = ITEM_NORMAL_GEM,
#line 2110
            .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
#line 2112
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 2105
            .ability = ABILITY_LEVITATE,
#line 2106
            .lvl = 81,
#line 2107
            .ball = BALL_MASTER,
#line 2109
            .friendship = 1,
#line 2111
            .nature = NATURE_BRAVE,
#line 2108
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2113
                MOVE_EXPLOSION,
            },
            },
        },
    },
#line 2115
    [DIFFICULTY_NORMAL][TRAINER_ARRIBA_CEO] =
    {
#line 2116
        .trainerName = _("Arribaceo"),
#line 2117
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
#line 2118
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2120
            .species = SPECIES_REVAVROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2120
            .heldItem = ITEM_SHUCA_BERRY,
#line 2126
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2128
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2121
            .ability = ABILITY_FILTER,
#line 2122
            .lvl = 80,
#line 2123
            .ball = BALL_MASTER,
#line 2125
            .friendship = 1,
#line 2127
            .nature = NATURE_JOLLY,
#line 2124
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2128
                MOVE_SPIN_OUT,
                MOVE_GUNK_SHOT,
                MOVE_OVERHEAT,
                MOVE_SHIFT_GEAR,
            },
            },
            {
#line 2133
            .species = SPECIES_ROTOM_FAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2133
            .heldItem = ITEM_ASSAULT_VEST,
#line 2139
            .ev = TRAINER_PARTY_EVS(128, 0, 0, 128, 252, 0),
#line 2141
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2134
            .ability = ABILITY_LEVITATE,
#line 2135
            .lvl = 79,
#line 2136
            .ball = BALL_MASTER,
#line 2138
            .friendship = 1,
#line 2140
            .nature = NATURE_TIMID,
#line 2137
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2142
                MOVE_THUNDERBOLT,
                MOVE_AIR_SLASH,
                MOVE_VOLT_SWITCH,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 2147
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2147
            .heldItem = ITEM_FOCUS_SASH,
#line 2153
            .ev = TRAINER_PARTY_EVS(8, 248, 0, 252, 0, 0),
#line 2155
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2148
            .ability = ABILITY_SPEED_BOOST,
#line 2149
            .lvl = 79,
#line 2150
            .ball = BALL_MASTER,
#line 2152
            .friendship = 1,
#line 2154
            .nature = NATURE_ADAMANT,
#line 2151
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2155
                MOVE_WATERFALL,
                MOVE_CRUNCH,
                MOVE_PROTECT,
                MOVE_PSYCHIC_FANGS,
            },
            },
            {
#line 2160
            .species = SPECIES_HAWLUCHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2160
            .heldItem = ITEM_FIGHTING_GEM,
#line 2166
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2168
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2161
            .ability = ABILITY_UNBURDEN,
#line 2162
            .lvl = 80,
#line 2163
            .ball = BALL_MASTER,
#line 2165
            .friendship = 1,
#line 2167
            .nature = NATURE_ADAMANT,
#line 2164
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2168
                MOVE_FLYING_PRESS,
                MOVE_ACROBATICS,
                MOVE_ROCK_SLIDE,
                MOVE_U_TURN,
            },
            },
        },
    },
#line 2173
    [DIFFICULTY_NORMAL][TRAINER_BUZZR_CEO] =
    {
#line 2174
        .trainerName = _("Arribaceo"),
#line 2175
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
#line 2176
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2178
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2178
            .heldItem = ITEM_FLAME_ORB,
#line 2184
            .ev = TRAINER_PARTY_EVS(8, 248, 0, 252, 0, 0),
#line 2186
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2179
            .ability = ABILITY_GUTS,
#line 2180
            .lvl = 80,
#line 2181
            .ball = BALL_MASTER,
#line 2183
            .friendship = 1,
#line 2185
            .nature = NATURE_JOLLY,
#line 2182
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2186
                MOVE_FACADE,
                MOVE_DUAL_WINGBEAT,
                MOVE_PROTECT,
                MOVE_PARTING_SHOT,
            },
            },
            {
#line 2191
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2191
            .heldItem = ITEM_PSYCHIC_SEED,
#line 2197
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 60, 192, 4),
#line 2199
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2192
            .ability = ABILITY_ADAPTABILITY,
#line 2193
            .lvl = 79,
#line 2194
            .ball = BALL_MASTER,
#line 2196
            .friendship = 1,
#line 2198
            .nature = NATURE_MODEST,
#line 2195
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2200
                MOVE_TRI_ATTACK,
                MOVE_ICE_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_CONVERSION_2,
            },
            },
            {
#line 2205
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2205
            .heldItem = ITEM_FOCUS_SASH,
#line 2211
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2213
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2206
            .ability = ABILITY_SHARPNESS,
#line 2207
            .lvl = 79,
#line 2208
            .ball = BALL_MASTER,
#line 2210
            .friendship = 1,
#line 2212
            .nature = NATURE_JOLLY,
#line 2209
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2213
                MOVE_PSYCHO_CUT,
                MOVE_SACRED_SWORD,
                MOVE_LEAF_BLADE,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 2218
            .species = SPECIES_ARMAROUGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2218
            .heldItem = ITEM_PSYCHIC_GEM,
#line 2224
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 252, 204, 0),
#line 2226
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2219
            .ability = ABILITY_FLASH_FIRE,
#line 2220
            .lvl = 80,
#line 2221
            .ball = BALL_MASTER,
#line 2223
            .friendship = 1,
#line 2225
            .nature = NATURE_MODEST,
#line 2222
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2227
                MOVE_EXPANDING_FORCE,
                MOVE_ARMOR_CANNON,
                MOVE_ENERGY_BALL,
                MOVE_CALM_MIND,
            },
            },
        },
    },
#line 2232
    [DIFFICULTY_NORMAL][TRAINER_PRESTO_CEO] =
    {
#line 2233
        .trainerName = _("Buzzrceo"),
#line 2234
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
#line 2235
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2237
            .species = SPECIES_DRACOZOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2237
            .heldItem = ITEM_BLUNDER_POLICY,
#line 2243
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2245
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2238
            .ability = ABILITY_HUSTLE,
#line 2239
            .lvl = 80,
#line 2240
            .ball = BALL_MASTER,
#line 2242
            .friendship = 1,
#line 2244
            .nature = NATURE_JOLLY,
#line 2241
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2245
                MOVE_BOLT_BEAK,
                MOVE_DRAGON_CLAW,
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 2250
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2250
            .heldItem = ITEM_ELECTRIC_SEED,
#line 2256
            .ev = TRAINER_PARTY_EVS(252, 248, 4, 0, 0, 4),
#line 2258
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2251
            .ability = ABILITY_UNBURDEN,
#line 2252
            .lvl = 79,
#line 2253
            .ball = BALL_MASTER,
#line 2255
            .friendship = 1,
#line 2257
            .nature = NATURE_ADAMANT,
#line 2254
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2258
                MOVE_HIGH_JUMP_KICK,
                MOVE_BLAZE_KICK,
                MOVE_BULLET_PUNCH,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 2263
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2263
            .heldItem = ITEM_ASSAULT_VEST,
#line 2269
            .ev = TRAINER_PARTY_EVS(56, 252, 4, 192, 0, 4),
#line 2271
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2264
            .ability = ABILITY_TECHNICIAN,
#line 2265
            .lvl = 79,
#line 2266
            .ball = BALL_MASTER,
#line 2268
            .friendship = 1,
#line 2270
            .nature = NATURE_JOLLY,
#line 2267
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2271
                MOVE_BULLET_PUNCH,
                MOVE_BUG_BITE,
                MOVE_AERIAL_ACE,
                MOVE_U_TURN,
            },
            },
            {
#line 2276
            .species = SPECIES_VIKAVOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2276
            .heldItem = ITEM_ELECTRIC_GEM,
#line 2282
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
#line 2284
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2277
            .ability = ABILITY_LEVITATE,
#line 2278
            .lvl = 80,
#line 2279
            .ball = BALL_MASTER,
#line 2281
            .friendship = 1,
#line 2283
            .nature = NATURE_MODEST,
#line 2280
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2285
                MOVE_RISING_VOLTAGE,
                MOVE_BUG_BUZZ,
                MOVE_ROOST,
                MOVE_FLASH_CANNON,
            },
            },
        },
    },
#line 2290
    [DIFFICULTY_NORMAL][TRAINER_ARRIBA_CEO_RAID] =
    {
#line 2291
        .trainerName = _("Buzzrceo"),
#line 2292
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
#line 2293
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2295
            .species = SPECIES_REVAVROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2295
            .heldItem = ITEM_SHUCA_BERRY,
#line 2301
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2303
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2296
            .ability = ABILITY_FILTER,
#line 2297
            .lvl = 80,
#line 2298
            .ball = BALL_MASTER,
#line 2300
            .friendship = 1,
#line 2302
            .nature = NATURE_JOLLY,
#line 2299
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2303
                MOVE_SPIN_OUT,
                MOVE_GUNK_SHOT,
                MOVE_OVERHEAT,
                MOVE_SHIFT_GEAR,
            },
            },
            {
#line 2308
            .species = SPECIES_ROTOM_FAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2308
            .heldItem = ITEM_ASSAULT_VEST,
#line 2314
            .ev = TRAINER_PARTY_EVS(128, 0, 0, 128, 252, 0),
#line 2316
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2309
            .ability = ABILITY_LEVITATE,
#line 2310
            .lvl = 79,
#line 2311
            .ball = BALL_MASTER,
#line 2313
            .friendship = 1,
#line 2315
            .nature = NATURE_TIMID,
#line 2312
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2317
                MOVE_THUNDERBOLT,
                MOVE_AIR_SLASH,
                MOVE_VOLT_SWITCH,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 2322
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2322
            .heldItem = ITEM_FOCUS_SASH,
#line 2328
            .ev = TRAINER_PARTY_EVS(8, 248, 0, 252, 0, 0),
#line 2330
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2323
            .ability = ABILITY_SPEED_BOOST,
#line 2324
            .lvl = 79,
#line 2325
            .ball = BALL_MASTER,
#line 2327
            .friendship = 1,
#line 2329
            .nature = NATURE_ADAMANT,
#line 2326
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2330
                MOVE_WATERFALL,
                MOVE_CRUNCH,
                MOVE_PROTECT,
                MOVE_PSYCHIC_FANGS,
            },
            },
            {
#line 2335
            .species = SPECIES_HAWLUCHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2335
            .heldItem = ITEM_FIGHTING_GEM,
#line 2341
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2343
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2336
            .ability = ABILITY_UNBURDEN,
#line 2337
            .lvl = 80,
#line 2338
            .ball = BALL_MASTER,
#line 2340
            .friendship = 1,
#line 2342
            .nature = NATURE_ADAMANT,
#line 2339
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2343
                MOVE_FLYING_PRESS,
                MOVE_ACROBATICS,
                MOVE_ROCK_SLIDE,
                MOVE_U_TURN,
            },
            },
            {
#line 2348
            .species = SPECIES_PHEROMOSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2348
            .heldItem = ITEM_FIGHTINIUM_Z,
#line 2354
            .ev = TRAINER_PARTY_EVS(100, 28, 0, 128, 252, 0),
#line 2355
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2349
            .ability = ABILITY_SWIFT_ASCENT,
#line 2350
            .lvl = 81,
#line 2351
            .ball = BALL_MASTER,
#line 2353
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 2352
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2355
                MOVE_FOCUS_BLAST,
                MOVE_BUG_BUZZ,
                MOVE_ICE_BEAM,
                MOVE_CLOSE_COMBAT,
            },
            },
        },
    },
#line 2360
    [DIFFICULTY_NORMAL][TRAINER_BUZZR_CEO_RAID] =
    {
#line 2361
        .trainerName = _("Prestoceo"),
#line 2362
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
#line 2363
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2365
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2365
            .heldItem = ITEM_FLAME_ORB,
#line 2371
            .ev = TRAINER_PARTY_EVS(8, 248, 0, 252, 0, 0),
#line 2373
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2366
            .ability = ABILITY_GUTS,
#line 2367
            .lvl = 80,
#line 2368
            .ball = BALL_MASTER,
#line 2370
            .friendship = 1,
#line 2372
            .nature = NATURE_JOLLY,
#line 2369
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2373
                MOVE_FACADE,
                MOVE_DUAL_WINGBEAT,
                MOVE_PROTECT,
                MOVE_PARTING_SHOT,
            },
            },
            {
#line 2378
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2378
            .heldItem = ITEM_PSYCHIC_SEED,
#line 2384
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 60, 192, 4),
#line 2386
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2379
            .ability = ABILITY_ADAPTABILITY,
#line 2380
            .lvl = 79,
#line 2381
            .ball = BALL_MASTER,
#line 2383
            .friendship = 1,
#line 2385
            .nature = NATURE_MODEST,
#line 2382
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2387
                MOVE_TRI_ATTACK,
                MOVE_ICE_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_CONVERSION_2,
            },
            },
            {
#line 2392
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2392
            .heldItem = ITEM_FOCUS_SASH,
#line 2398
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2400
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2393
            .ability = ABILITY_SHARPNESS,
#line 2394
            .lvl = 79,
#line 2395
            .ball = BALL_MASTER,
#line 2397
            .friendship = 1,
#line 2399
            .nature = NATURE_JOLLY,
#line 2396
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2400
                MOVE_PSYCHO_CUT,
                MOVE_SACRED_SWORD,
                MOVE_LEAF_BLADE,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 2405
            .species = SPECIES_ARMAROUGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2405
            .heldItem = ITEM_PSYCHIC_GEM,
#line 2411
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 252, 204, 0),
#line 2413
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2406
            .ability = ABILITY_FLASH_FIRE,
#line 2407
            .lvl = 80,
#line 2408
            .ball = BALL_MASTER,
#line 2410
            .friendship = 1,
#line 2412
            .nature = NATURE_MODEST,
#line 2409
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2414
                MOVE_EXPANDING_FORCE,
                MOVE_ARMOR_CANNON,
                MOVE_ENERGY_BALL,
                MOVE_CALM_MIND,
            },
            },
            {
#line 2419
            .species = SPECIES_BLACEPHALON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2419
            .heldItem = ITEM_PSYCHIUM_Z,
#line 2425
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2427
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2420
            .ability = ABILITY_SWIFT_ASCENT,
#line 2421
            .lvl = 81,
#line 2422
            .ball = BALL_MASTER,
#line 2424
            .friendship = 1,
#line 2426
            .nature = NATURE_TIMID,
#line 2423
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2428
                MOVE_EXPANDING_FORCE,
                MOVE_SHADOW_BALL,
                MOVE_FLAMETHROWER,
                MOVE_MIND_BLOWN,
            },
            },
        },
    },
#line 2433
    [DIFFICULTY_NORMAL][TRAINER_PRESTO_CEO_RAID] =
    {
#line 2434
        .trainerName = _("Prestoceo"),
#line 2435
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
#line 2436
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2438
            .species = SPECIES_DRACOZOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2438
            .heldItem = ITEM_BLUNDER_POLICY,
#line 2444
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2446
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2439
            .ability = ABILITY_HUSTLE,
#line 2440
            .lvl = 80,
#line 2441
            .ball = BALL_MASTER,
#line 2443
            .friendship = 1,
#line 2445
            .nature = NATURE_JOLLY,
#line 2442
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2446
                MOVE_BOLT_BEAK,
                MOVE_DRAGON_CLAW,
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 2451
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2451
            .heldItem = ITEM_ELECTRIC_SEED,
#line 2457
            .ev = TRAINER_PARTY_EVS(252, 248, 4, 0, 0, 4),
#line 2459
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2452
            .ability = ABILITY_UNBURDEN,
#line 2453
            .lvl = 79,
#line 2454
            .ball = BALL_MASTER,
#line 2456
            .friendship = 1,
#line 2458
            .nature = NATURE_ADAMANT,
#line 2455
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2459
                MOVE_HIGH_JUMP_KICK,
                MOVE_BLAZE_KICK,
                MOVE_BULLET_PUNCH,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 2464
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2464
            .heldItem = ITEM_ASSAULT_VEST,
#line 2470
            .ev = TRAINER_PARTY_EVS(56, 252, 4, 192, 0, 4),
#line 2472
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2465
            .ability = ABILITY_TECHNICIAN,
#line 2466
            .lvl = 79,
#line 2467
            .ball = BALL_MASTER,
#line 2469
            .friendship = 1,
#line 2471
            .nature = NATURE_JOLLY,
#line 2468
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2472
                MOVE_BULLET_PUNCH,
                MOVE_BUG_BITE,
                MOVE_AERIAL_ACE,
                MOVE_U_TURN,
            },
            },
            {
#line 2477
            .species = SPECIES_VIKAVOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2477
            .heldItem = ITEM_ELECTRIC_GEM,
#line 2483
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
#line 2485
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2478
            .ability = ABILITY_LEVITATE,
#line 2479
            .lvl = 80,
#line 2480
            .ball = BALL_MASTER,
#line 2482
            .friendship = 1,
#line 2484
            .nature = NATURE_MODEST,
#line 2481
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2486
                MOVE_RISING_VOLTAGE,
                MOVE_BUG_BUZZ,
                MOVE_ROOST,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 2491
            .species = SPECIES_XURKITREE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2491
            .heldItem = ITEM_ELECTRIUM_Z,
#line 2497
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
#line 2499
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2492
            .ability = ABILITY_SWIFT_ASCENT,
#line 2493
            .lvl = 81,
#line 2494
            .ball = BALL_MASTER,
#line 2496
            .friendship = 1,
#line 2498
            .nature = NATURE_TIMID,
#line 2495
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2500
                MOVE_RISING_VOLTAGE,
                MOVE_DAZZLING_GLEAM,
                MOVE_ENERGY_BALL,
                MOVE_TAIL_GLOW,
            },
            },
        },
    },
#line 2505
    [DIFFICULTY_NORMAL][TRAINER_RAMESH_IMIN] =
    {
#line 2506
        .trainerName = _("Ramesh"),
#line 2510
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 2507
        .trainerPic = TRAINER_PIC_FRONT_MAGMA_ADMIN,
#line 2508
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2509
        .characterRevealId = REVEAL_RAMESH,
#line 2511
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2512
        .objectEventGraphicsId = OBJ_EVENT_GFX_RAMESH,
#line 2513
        .mapSec = MAPSEC_SHARPRISESPIRE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_MAGMA_ADMIN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2515
            .species = SPECIES_GHOLDENGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2515
            .heldItem = ITEM_STEEL_GEM,
#line 2521
            .ev = TRAINER_PARTY_EVS(248, 0, 96, 0, 0, 164),
#line 2523
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2516
            .ability = ABILITY_GOOD_AS_GOLD,
#line 2517
            .lvl = 84,
#line 2518
            .ball = BALL_MASTER,
#line 2520
            .friendship = 1,
#line 2522
            .nature = NATURE_BOLD,
#line 2519
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2524
                MOVE_MAKE_IT_RAIN,
                MOVE_SHADOW_BALL,
                MOVE_NASTY_PLOT,
                MOVE_RECOVER,
            },
            },
            {
#line 2529
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2529
            .heldItem = ITEM_FOCUS_SASH,
#line 2535
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2537
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2530
            .ability = ABILITY_LEVITATE,
#line 2531
            .lvl = 83,
#line 2532
            .ball = BALL_MASTER,
#line 2534
            .friendship = 1,
#line 2536
            .nature = NATURE_TIMID,
#line 2533
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2538
                MOVE_DARK_PULSE,
                MOVE_DRAGON_PULSE,
                MOVE_FLAMETHROWER,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 2543
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2543
            .heldItem = ITEM_ASSAULT_VEST,
#line 2549
            .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
#line 2551
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2544
            .ability = ABILITY_ROCK_HEAD,
#line 2545
            .lvl = 84,
#line 2546
            .ball = BALL_MASTER,
#line 2548
            .friendship = 1,
#line 2550
            .nature = NATURE_CAREFUL,
#line 2547
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2551
                MOVE_HEAD_SMASH,
                MOVE_LIQUIDATION,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 2556
            .species = SPECIES_BUZZWOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2556
            .heldItem = ITEM_BUGINIUM_Z,
#line 2562
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
#line 2564
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2557
            .ability = ABILITY_SWIFT_ASCENT,
#line 2558
            .lvl = 85,
#line 2559
            .ball = BALL_MASTER,
#line 2561
            .friendship = 1,
#line 2563
            .nature = NATURE_ADAMANT,
#line 2560
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2564
                MOVE_CLOSE_COMBAT,
                MOVE_LEECH_LIFE,
                MOVE_EARTHQUAKE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 2569
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2569
            .heldItem = ITEM_ALAKAZITE,
#line 2575
            .ev = TRAINER_PARTY_EVS(8, 0, 0, 248, 252, 0),
#line 2577
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2570
            .ability = ABILITY_SYNCHRONIZE,
#line 2571
            .lvl = 85,
#line 2572
            .ball = BALL_MASTER,
#line 2574
            .friendship = 1,
#line 2576
            .nature = NATURE_TIMID,
#line 2573
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2578
                MOVE_PSYCHIC,
                MOVE_DAZZLING_GLEAM,
                MOVE_SHADOW_BALL,
                MOVE_FOCUS_BLAST,
            },
            },
        },
    },
#line 2583
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE_IMIN] =
    {
#line 2584
        .trainerName = _("Charlotte"),
#line 2585
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
#line 2586
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2588
            .species = SPECIES_ARMAROUGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2588
            .heldItem = ITEM_WEAKNESS_POLICY,
#line 2594
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
#line 2596
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2589
            .ability = ABILITY_WEAK_ARMOR,
#line 2590
            .lvl = 85,
#line 2591
            .ball = BALL_MASTER,
#line 2593
            .friendship = 1,
#line 2595
            .nature = NATURE_TIMID,
#line 2592
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2597
                MOVE_ARMOR_CANNON,
                MOVE_PSYCHIC,
                MOVE_AURA_SPHERE,
                MOVE_ENERGY_BALL,
            },
            },
            {
#line 2602
            .species = SPECIES_HAXORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2602
            .heldItem = ITEM_ASSAULT_VEST,
#line 2608
            .ev = TRAINER_PARTY_EVS(152, 252, 4, 100, 0, 0),
#line 2610
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2603
            .ability = ABILITY_MOLD_BREAKER,
#line 2604
            .lvl = 86,
#line 2605
            .ball = BALL_MASTER,
#line 2607
            .friendship = 1,
#line 2609
            .nature = NATURE_ADAMANT,
#line 2606
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2610
                MOVE_DRAGON_CLAW,
                MOVE_IRON_HEAD,
                MOVE_FIRST_IMPRESSION,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 2615
            .species = SPECIES_CORVIKNIGHT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2615
            .heldItem = ITEM_WACAN_BERRY,
#line 2621
            .ev = TRAINER_PARTY_EVS(252, 100, 0, 100, 0, 56),
#line 2623
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2616
            .ability = ABILITY_MIRROR_ARMOR,
#line 2617
            .lvl = 85,
#line 2618
            .ball = BALL_MASTER,
#line 2620
            .friendship = 1,
#line 2622
            .nature = NATURE_ADAMANT,
#line 2619
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2623
                MOVE_IRON_HEAD,
                MOVE_BRAVE_BIRD,
                MOVE_BULK_UP,
                MOVE_POWER_TRIP,
            },
            },
            {
#line 2628
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2628
            .heldItem = ITEM_FAIRY_GEM,
#line 2634
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2636
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2629
            .ability = ABILITY_SYNCHRONIZE,
#line 2630
            .lvl = 86,
#line 2631
            .ball = BALL_MASTER,
#line 2633
            .friendship = 1,
#line 2635
            .nature = NATURE_TIMID,
#line 2632
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2637
                MOVE_MOONBLAST,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 2642
            .species = SPECIES_SERPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2642
            .heldItem = ITEM_GRASSIUM_Z,
#line 2648
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
#line 2650
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2643
            .ability = ABILITY_CONTRARY,
#line 2644
            .lvl = 86,
#line 2645
            .ball = BALL_MASTER,
#line 2647
            .friendship = 1,
#line 2649
            .nature = NATURE_QUIRKY,
#line 2646
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2650
                MOVE_LEAF_STORM,
                MOVE_AQUA_TAIL,
                MOVE_DRAGON_PULSE,
                MOVE_FRENZY_PLANT,
            },
            },
            {
#line 2656
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2662
            .ev = TRAINER_PARTY_EVS(176, 0, 0, 80, 252, 0),
#line 2664
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2657
            .ability = ABILITY_WATER_ABSORB,
#line 2658
            .lvl = 87,
#line 2659
            .ball = BALL_MASTER,
#line 2661
            .friendship = 1,
#line 2663
            .nature = NATURE_MODEST,
#line 2660
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2665
                MOVE_ICE_BEAM,
                MOVE_SPARKLING_ARIA,
                MOVE_THUNDERBOLT,
                MOVE_REST,
            },
            },
        },
    },
#line 2670
    [DIFFICULTY_NORMAL][TRAINER_ADELAIDE_A] =
    {
#line 2671
        .trainerName = _("Adelaide"),
#line 2675
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 2672
        .trainerPic = TRAINER_PIC_FRONT_ADELAIDE,
#line 2673
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2674
        .characterRevealId = REVEAL_ADELAIDE,
#line 2676
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2677
        .objectEventGraphicsId = OBJ_EVENT_GFX_ADELAIDE,
#line 2678
        .mapSec = MAPSEC_SHARPRISESPIRE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ADELAIDE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2680
            .species = SPECIES_SALAZZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2680
            .heldItem = ITEM_FOCUS_SASH,
#line 2686
            .ev = TRAINER_PARTY_EVS(8, 0, 0, 252, 248, 0),
#line 2688
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2681
            .ability = ABILITY_OBLIVIOUS,
#line 2682
            .lvl = 87,
#line 2683
            .ball = BALL_MASTER,
#line 2685
            .friendship = 1,
#line 2687
            .nature = NATURE_TIMID,
#line 2684
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2689
                MOVE_FLAMETHROWER,
                MOVE_SLUDGE_WAVE,
                MOVE_TOXIC_SPIKES,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 2694
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2694
            .heldItem = ITEM_CHOPLE_BERRY,
#line 2700
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 2702
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2695
            .ability = ABILITY_SAND_STREAM,
#line 2696
            .lvl = 86,
#line 2697
            .ball = BALL_MASTER,
#line 2699
            .friendship = 1,
#line 2701
            .nature = NATURE_ADAMANT,
#line 2698
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2702
                MOVE_ROCK_SLIDE,
                MOVE_CRUNCH,
                MOVE_IRON_HEAD,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 2707
            .species = SPECIES_ANNIHILAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2707
            .heldItem = ITEM_FIGHTING_GEM,
#line 2713
            .ev = TRAINER_PARTY_EVS(252, 144, 12, 96, 0, 4),
#line 2715
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2708
            .ability = ABILITY_DEFIANT,
#line 2709
            .lvl = 86,
#line 2710
            .ball = BALL_MASTER,
#line 2712
            .friendship = 1,
#line 2714
            .nature = NATURE_ADAMANT,
#line 2711
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2715
                MOVE_RAGE_FIST,
                MOVE_DRAIN_PUNCH,
                MOVE_BULK_UP,
                MOVE_CLOSE_COMBAT,
            },
            },
            {
#line 2720
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2720
            .heldItem = ITEM_SCOPE_LENS,
#line 2726
            .ev = TRAINER_PARTY_EVS(116, 0, 0, 248, 144, 0),
#line 2728
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2721
            .ability = ABILITY_SUPER_LUCK,
#line 2722
            .lvl = 87,
#line 2723
            .ball = BALL_MASTER,
#line 2725
            .friendship = 1,
#line 2727
            .nature = NATURE_TIMID,
#line 2724
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2729
                MOVE_AIR_SLASH,
                MOVE_DAZZLING_GLEAM,
                MOVE_HEAT_WAVE,
                MOVE_TAILWIND,
            },
            },
            {
#line 2734
            .species = SPECIES_ARCHALUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2734
            .heldItem = ITEM_DRAGONIUM_Z,
#line 2740
            .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 252, 0),
#line 2742
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2735
            .ability = ABILITY_STAMINA,
#line 2736
            .lvl = 88,
#line 2737
            .ball = BALL_MASTER,
#line 2739
            .friendship = 1,
#line 2741
            .nature = NATURE_BOLD,
#line 2738
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2743
                MOVE_DRACO_METEOR,
                MOVE_FLASH_CANNON,
                MOVE_BODY_PRESS,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 2749
            .species = SPECIES_ORBEETLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2755
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 8, 248, 0),
#line 2757
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2750
            .ability = ABILITY_FRISK,
#line 2751
            .lvl = 89,
#line 2752
            .ball = BALL_MASTER,
#line 2754
            .friendship = 1,
#line 2756
            .nature = NATURE_MODEST,
#line 2753
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2758
                MOVE_EXPANDING_FORCE,
                MOVE_BUG_BUZZ,
                MOVE_ENERGY_BALL,
                MOVE_AGILITY,
            },
            },
        },
    },
#line 2763
    [DIFFICULTY_NORMAL][TRAINER_ADELAIDE_B] =
    {
#line 2764
        .trainerName = _("Adelaide"),
#line 2765
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
#line 2766
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2767
        .mapSec = MAPSEC_SHARPRISESPIRE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2769
            .species = SPECIES_NIHILEGO_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2769
            .heldItem = ITEM_POWER_HERB,
#line 2775
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2777
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2770
            .ability = ABILITY_SWIFT_ASCENT,
#line 2771
            .lvl = 90,
#line 2772
            .ball = BALL_MASTER,
#line 2774
            .friendship = 1,
#line 2776
            .nature = NATURE_TIMID,
#line 2773
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2778
                MOVE_POWER_GEM,
                MOVE_SLUDGE_WAVE,
                MOVE_DAZZLING_GLEAM,
                MOVE_METEOR_BEAM,
            },
            },
            {
#line 2783
            .species = SPECIES_CELESTEELA_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2783
            .heldItem = ITEM_LEFTOVERS,
#line 2789
            .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 0, 128),
#line 2790
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2784
            .ability = ABILITY_SWIFT_ASCENT,
#line 2785
            .lvl = 90,
#line 2786
            .ball = BALL_MASTER,
#line 2788
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 2787
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2790
                MOVE_HEAVY_SLAM,
                MOVE_LEECH_SEED,
                MOVE_PROTECT,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 2795
            .species = SPECIES_KARTANA_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2795
            .heldItem = ITEM_ASSAULT_VEST,
#line 2801
            .ev = TRAINER_PARTY_EVS(0, 8, 0, 252, 0, 248),
#line 2803
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2796
            .ability = ABILITY_SWIFT_ASCENT,
#line 2797
            .lvl = 90,
#line 2798
            .ball = BALL_MASTER,
#line 2800
            .friendship = 1,
#line 2802
            .nature = NATURE_ADAMANT,
#line 2799
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2803
                MOVE_LEAF_BLADE,
                MOVE_SMART_STRIKE,
                MOVE_SACRED_SWORD,
                MOVE_GUILLOTINE,
            },
            },
            {
#line 2808
            .species = SPECIES_GUZZLORD_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2808
            .heldItem = ITEM_ROSELI_BERRY,
#line 2814
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 4),
#line 2815
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 2809
            .ability = ABILITY_SWIFT_ASCENT,
#line 2810
            .lvl = 90,
#line 2811
            .ball = BALL_MASTER,
#line 2813
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 2812
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2816
                MOVE_DRAGON_PULSE,
                MOVE_DARK_PULSE,
                MOVE_FLAMETHROWER,
                MOVE_GYRO_BALL,
            },
            },
            {
#line 2821
            .species = SPECIES_NAGANADEL_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2821
            .heldItem = ITEM_POISONIUM_Z,
#line 2827
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2829
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2822
            .ability = ABILITY_SWIFT_ASCENT,
#line 2823
            .lvl = 90,
#line 2824
            .ball = BALL_MASTER,
#line 2826
            .friendship = 1,
#line 2828
            .nature = NATURE_TIMID,
#line 2825
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2830
                MOVE_SLUDGE_WAVE,
                MOVE_DRACO_METEOR,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 2835
            .species = SPECIES_STAKATAKA_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2835
            .heldItem = ITEM_SHUCA_BERRY,
#line 2841
            .ev = TRAINER_PARTY_EVS(252, 0, 96, 0, 0, 160),
#line 2843
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 2836
            .ability = ABILITY_SWIFT_ASCENT,
#line 2837
            .lvl = 90,
#line 2838
            .ball = BALL_MASTER,
#line 2840
            .friendship = 1,
#line 2842
            .nature = NATURE_CAREFUL,
#line 2839
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2844
                MOVE_GYRO_BALL,
                MOVE_STONE_EDGE,
                MOVE_BODY_PRESS,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 2849
    [DIFFICULTY_NORMAL][TRAINER_MAGNUS_PROLOGUE] =
    {
#line 2850
        .trainerName = _("Magnus"),
#line 2855
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 2851
        .trainerPic = TRAINER_PIC_FRONT_MAGNUS,
#line 2853
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2852
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2854
        .characterRevealId = REVEAL_MAGNUS,
#line 2856
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2857
        .objectEventGraphicsId = OBJ_EVENT_GFX_MAGNUS,
#line 2858
        .mapSec = MAPSEC_OROLAND_COLISEUM,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_MAGNUS,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2860
            .species = SPECIES_DRACOVISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2860
            .heldItem = ITEM_MYSTIC_WATER,
#line 2866
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2868
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2861
            .ability = ABILITY_SAND_RUSH,
#line 2862
            .lvl = 87,
#line 2863
            .ball = BALL_MASTER,
#line 2865
            .friendship = 1,
#line 2867
            .nature = NATURE_ADAMANT,
#line 2864
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2868
                MOVE_FISHIOUS_REND,
                MOVE_EARTHQUAKE,
                MOVE_DRAGON_RUSH,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 2873
            .species = SPECIES_SANDACONDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2873
            .heldItem = ITEM_SITRUS_BERRY,
#line 2879
            .ev = TRAINER_PARTY_EVS(252, 80, 0, 0, 0, 176),
#line 2881
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2874
            .ability = ABILITY_SAND_SPIT,
#line 2875
            .lvl = 88,
#line 2876
            .ball = BALL_MASTER,
#line 2878
            .friendship = 1,
#line 2880
            .nature = NATURE_CAREFUL,
#line 2877
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2881
                MOVE_HIGH_HORSEPOWER,
                MOVE_STONE_EDGE,
                MOVE_GLARE,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 2886
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2886
            .heldItem = ITEM_SCOPE_LENS,
#line 2892
            .ev = TRAINER_PARTY_EVS(156, 0, 0, 252, 100, 0),
#line 2894
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2887
            .ability = ABILITY_SUPER_LUCK,
#line 2888
            .lvl = 87,
#line 2889
            .ball = BALL_MASTER,
#line 2891
            .friendship = 1,
#line 2893
            .nature = NATURE_TIMID,
#line 2890
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2895
                MOVE_DAZZLING_GLEAM,
                MOVE_AIR_CUTTER,
                MOVE_TAILWIND,
                MOVE_FOLLOW_ME,
            },
            },
            {
#line 2900
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2900
            .heldItem = ITEM_FLYING_GEM,
#line 2906
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2908
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2901
            .ability = ABILITY_SAND_VEIL,
#line 2902
            .lvl = 87,
#line 2903
            .ball = BALL_MASTER,
#line 2905
            .friendship = 1,
#line 2907
            .nature = NATURE_JOLLY,
#line 2904
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2908
                MOVE_ACROBATICS,
                MOVE_HIGH_HORSEPOWER,
                MOVE_SWORDS_DANCE,
                MOVE_BRICK_BREAK,
            },
            },
            {
#line 2913
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2913
            .heldItem = ITEM_GROUNDIUM_Z,
#line 2919
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2921
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2914
            .ability = ABILITY_SAND_RUSH,
#line 2915
            .lvl = 88,
#line 2916
            .ball = BALL_MASTER,
#line 2918
            .friendship = 1,
#line 2920
            .nature = NATURE_ADAMANT,
#line 2917
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2921
                MOVE_DRILL_RUN,
                MOVE_IRON_HEAD,
                MOVE_ROCK_SLIDE,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 2926
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2926
            .heldItem = ITEM_TYRANITARITE,
#line 2932
            .ev = TRAINER_PARTY_EVS(252, 104, 0, 76, 0, 76),
#line 2934
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2927
            .ability = ABILITY_SAND_STREAM,
#line 2928
            .lvl = 89,
#line 2929
            .ball = BALL_MASTER,
#line 2931
            .friendship = 1,
#line 2933
            .nature = NATURE_ADAMANT,
#line 2930
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2934
                MOVE_ROCK_SLIDE,
                MOVE_ASSURANCE,
                MOVE_STONE_EDGE,
                MOVE_AERIAL_ACE,
            },
            },
        },
    },
#line 2939
    [DIFFICULTY_NORMAL][TRAINER_ELLEN] =
    {
#line 2940
        .trainerName = _("Ellen"),
#line 2941
        .trainerPic = TRAINER_PIC_FRONT_ELLEN,
#line 2943
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2942
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2944
        .characterRevealId = REVEAL_ELLEN,
#line 2945
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2946
        .objectEventGraphicsId = OBJ_EVENT_GFX_ELLEN,
#line 2947
        .mapSec = MAPSEC_NAVAL_BASE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ELLEN,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2949
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2949
            .heldItem = ITEM_SITRUS_BERRY,
#line 2955
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
#line 2957
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2950
            .ability = ABILITY_SERENE_GRACE,
#line 2951
            .lvl = 89,
#line 2952
            .ball = BALL_MASTER,
#line 2954
            .friendship = 1,
#line 2956
            .nature = NATURE_MODEST,
#line 2953
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2958
                MOVE_AIR_SLASH,
                MOVE_ANCIENT_POWER,
                MOVE_DAZZLING_GLEAM,
                MOVE_HEAT_WAVE,
            },
            },
            {
#line 2963
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2963
            .heldItem = ITEM_SWAMPERTITE,
#line 2969
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 2971
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2964
            .ability = ABILITY_TORRENT,
#line 2965
            .lvl = 91,
#line 2966
            .ball = BALL_MASTER,
#line 2968
            .friendship = 1,
#line 2970
            .nature = NATURE_ADAMANT,
#line 2967
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2971
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ICE_PUNCH,
                MOVE_WATERFALL,
            },
            },
            {
#line 2976
            .species = SPECIES_DHELMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2976
            .heldItem = ITEM_GRASSIUM_Z,
#line 2982
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2984
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2977
            .ability = ABILITY_STEELWORKER,
#line 2978
            .lvl = 89,
#line 2979
            .ball = BALL_MASTER,
#line 2981
            .friendship = 1,
#line 2983
            .nature = NATURE_JOLLY,
#line 2980
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2984
                MOVE_POWER_WHIP,
                MOVE_PHANTOM_FORCE,
                MOVE_ANCHOR_SHOT,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 2989
            .species = SPECIES_WYRDEER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2989
            .heldItem = ITEM_NORMAL_GEM,
#line 2995
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2997
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2990
            .ability = ABILITY_INTIMIDATE,
#line 2991
            .lvl = 90,
#line 2992
            .ball = BALL_MASTER,
#line 2994
            .friendship = 1,
#line 2996
            .nature = NATURE_ADAMANT,
#line 2993
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2997
                MOVE_BODY_SLAM,
                MOVE_BITE,
                MOVE_ZEN_HEADBUTT,
                MOVE_HIGH_HORSEPOWER,
            },
            },
            {
#line 3002
            .species = SPECIES_TOXAPEX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3002
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3008
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 3010
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3003
            .ability = ABILITY_MERCILESS,
#line 3004
            .lvl = 89,
#line 3005
            .ball = BALL_MASTER,
#line 3007
            .friendship = 1,
#line 3009
            .nature = NATURE_ADAMANT,
#line 3006
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3010
                MOVE_POISON_JAB,
                MOVE_LIQUIDATION,
                MOVE_TOXIC,
                MOVE_BANEFUL_BUNKER,
            },
            },
            {
#line 3015
            .species = SPECIES_ARCHALUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3015
            .heldItem = ITEM_ASSAULT_VEST,
#line 3021
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
#line 3023
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3016
            .ability = ABILITY_STAMINA,
#line 3017
            .lvl = 90,
#line 3018
            .ball = BALL_MASTER,
#line 3020
            .friendship = 1,
#line 3022
            .nature = NATURE_MODEST,
#line 3019
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3024
                MOVE_DRAGON_PULSE,
                MOVE_FLASH_CANNON,
                MOVE_BODY_PRESS,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 3029
    [DIFFICULTY_NORMAL][TRAINER_ARMANDO] =
    {
#line 3030
        .trainerName = _("Armando"),
#line 3031
        .trainerPic = TRAINER_PIC_FRONT_ARMANDO,
#line 3033
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3032
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3034
        .characterRevealId = REVEAL_ARMANDO,
#line 3035
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 3036
        .objectEventGraphicsId = OBJ_EVENT_GFX_ARMANDO,
#line 3037
        .mapSec = MAPSEC_LEAVERRA_FOREST,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ARMANDO,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3039
            .species = SPECIES_SCOVILLAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3039
            .heldItem = ITEM_LIFE_ORB,
#line 3045
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 176, 232, 0),
#line 3047
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3040
            .ability = ABILITY_CHLOROPHYLL,
#line 3041
            .lvl = 87,
#line 3042
            .ball = BALL_MASTER,
#line 3044
            .friendship = 1,
#line 3046
            .nature = NATURE_MODEST,
#line 3043
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3048
                MOVE_FLAMETHROWER,
                MOVE_ENERGY_BALL,
                MOVE_WILL_O_WISP,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 3053
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3053
            .heldItem = ITEM_DRAGON_GEM,
#line 3059
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 3061
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3054
            .ability = ABILITY_LEVITATE,
#line 3055
            .lvl = 88,
#line 3056
            .ball = BALL_MASTER,
#line 3058
            .friendship = 1,
#line 3060
            .nature = NATURE_TIMID,
#line 3057
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3062
                MOVE_HEAT_WAVE,
                MOVE_DARK_PULSE,
                MOVE_DRACO_METEOR,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 3067
            .species = SPECIES_MUSHARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3067
            .heldItem = ITEM_LEFTOVERS,
#line 3073
            .ev = TRAINER_PARTY_EVS(252, 0, 220, 0, 0, 36),
#line 3075
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3068
            .ability = ABILITY_TELEPATHY,
#line 3069
            .lvl = 88,
#line 3070
            .ball = BALL_MASTER,
#line 3072
            .friendship = 1,
#line 3074
            .nature = NATURE_BOLD,
#line 3071
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3076
                MOVE_PSYCHIC,
                MOVE_DAZZLING_GLEAM,
                MOVE_CALM_MIND,
                MOVE_MOONLIGHT,
            },
            },
            {
#line 3081
            .species = SPECIES_URSALUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3081
            .heldItem = ITEM_FLAME_ORB,
#line 3087
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3089
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3082
            .ability = ABILITY_GUTS,
#line 3083
            .lvl = 87,
#line 3084
            .ball = BALL_MASTER,
#line 3086
            .friendship = 1,
#line 3088
            .nature = NATURE_ADAMANT,
#line 3085
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3089
                MOVE_FACADE,
                MOVE_EARTHQUAKE,
                MOVE_HEADLONG_RUSH,
                MOVE_PROTECT,
            },
            },
            {
#line 3094
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3094
            .heldItem = ITEM_FIRIUM_Z,
#line 3100
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 36, 220, 0),
#line 3102
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3095
            .ability = ABILITY_FLAME_BODY,
#line 3096
            .lvl = 88,
#line 3097
            .ball = BALL_MASTER,
#line 3099
            .friendship = 1,
#line 3101
            .nature = NATURE_MODEST,
#line 3098
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3103
                MOVE_OVERHEAT,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_SCORCHING_SANDS,
            },
            },
            {
#line 3109
            .species = SPECIES_CENTISKORCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3115
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3117
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3110
            .ability = ABILITY_WHITE_SMOKE,
#line 3111
            .lvl = 89,
#line 3112
            .ball = BALL_MASTER,
#line 3114
            .friendship = 1,
#line 3116
            .nature = NATURE_JOLLY,
#line 3113
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3117
                MOVE_FLARE_BLITZ,
                MOVE_FIRE_LASH,
                MOVE_LEECH_LIFE,
                MOVE_DRAGON_TAIL,
            },
            },
        },
    },
#line 3122
    [DIFFICULTY_NORMAL][TRAINER_KEI_YING] =
    {
#line 3123
        .trainerName = _("Kei-ying"),
#line 3127
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 3124
        .trainerPic = TRAINER_PIC_FRONT_KEI_YING,
#line 3126
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3125
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_KEI_YING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3129
            .species = SPECIES_URSHIFU_RAPID_STRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3129
            .heldItem = ITEM_URSHIFUNITE_RAPID,
#line 3135
            .ev = TRAINER_PARTY_EVS(140, 88, 4, 24, 0, 252),
#line 3137
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3130
            .ability = ABILITY_UNSEEN_FIST,
#line 3131
            .lvl = 88,
#line 3132
            .ball = BALL_MASTER,
#line 3134
            .friendship = 1,
#line 3136
            .nature = NATURE_ADAMANT,
#line 3133
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3137
                MOVE_SURGING_STRIKES,
                MOVE_CLOSE_COMBAT,
                MOVE_AQUA_JET,
                MOVE_BULK_UP,
            },
            },
            {
#line 3142
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3142
            .heldItem = ITEM_FLYING_GEM,
#line 3148
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 3150
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3143
            .ability = ABILITY_DRIZZLE,
#line 3144
            .lvl = 86,
#line 3145
            .ball = BALL_MASTER,
#line 3147
            .friendship = 1,
#line 3149
            .nature = NATURE_TIMID,
#line 3146
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3151
                MOVE_HURRICANE,
                MOVE_WEATHER_BALL,
                MOVE_TAILWIND,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3156
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3156
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3162
            .ev = TRAINER_PARTY_EVS(252, 112, 60, 24, 0, 60),
#line 3164
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3157
            .ability = ABILITY_DRY_SKIN,
#line 3158
            .lvl = 87,
#line 3159
            .ball = BALL_MASTER,
#line 3161
            .friendship = 1,
#line 3163
            .nature = NATURE_ADAMANT,
#line 3160
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3164
                MOVE_CLOSE_COMBAT,
                MOVE_POISON_JAB,
                MOVE_BULK_UP,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 3169
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3169
            .heldItem = ITEM_FIGHTINIUM_Z,
#line 3175
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 3177
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3170
            .ability = ABILITY_TECHNICIAN,
#line 3171
            .lvl = 86,
#line 3172
            .ball = BALL_MASTER,
#line 3174
            .friendship = 1,
#line 3176
            .nature = NATURE_ADAMANT,
#line 3173
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3177
                MOVE_BULLET_PUNCH,
                MOVE_BUG_BITE,
                MOVE_AERIAL_ACE,
                MOVE_CLOSE_COMBAT,
            },
            },
            {
#line 3182
            .species = SPECIES_PAWMOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3182
            .heldItem = ITEM_LIFE_ORB,
#line 3188
            .ev = TRAINER_PARTY_EVS(16, 240, 0, 252, 0, 0),
#line 3190
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3183
            .ability = ABILITY_IRON_FIST,
#line 3184
            .lvl = 87,
#line 3185
            .ball = BALL_MASTER,
#line 3187
            .friendship = 1,
#line 3189
            .nature = NATURE_JOLLY,
#line 3186
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3190
                MOVE_THUNDER_PUNCH,
                MOVE_CLOSE_COMBAT,
                MOVE_MACH_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3195
            .species = SPECIES_URSHIFU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3195
            .heldItem = ITEM_FOCUS_SASH,
#line 3201
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3203
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3196
            .ability = ABILITY_UNSEEN_FIST,
#line 3197
            .lvl = 88,
#line 3198
            .ball = BALL_MASTER,
#line 3200
            .friendship = 1,
#line 3202
            .nature = NATURE_JOLLY,
#line 3199
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3203
                MOVE_WICKED_BLOW,
                MOVE_CLOSE_COMBAT,
                MOVE_SUCKER_PUNCH,
                MOVE_POISON_JAB,
            },
            },
        },
    },
#line 3208
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_QIU] =
    {
#line 3209
        .trainerName = _("Melissa"),
#line 3210
        .trainerPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
#line 3212
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3211
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3214
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3216
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3215
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3217
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3219
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3218
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3220
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3222
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3221
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3223
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_CRESALTA] =
    {
#line 3224
        .trainerName = _("Melissa"),
#line 3225
        .trainerPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
#line 3227
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3226
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3229
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3231
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3230
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3232
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3234
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3233
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3235
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3237
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3236
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3238
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3240
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3239
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3241
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_HALAI] =
    {
#line 3242
        .trainerName = _("Melissa"),
#line 3243
        .trainerPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
#line 3245
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3244
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3247
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3249
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3248
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3250
            .species = SPECIES_FARIGIRAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3252
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3251
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3253
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3255
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3254
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3256
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3258
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3257
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3259
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_REMATCH] =
    {
#line 3260
        .trainerName = _("Melissa"),
#line 3261
        .trainerPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
#line 3263
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3262
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3265
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3267
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3266
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3268
            .species = SPECIES_FARIGIRAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3270
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3269
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3271
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3273
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3272
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3274
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3276
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3275
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3277
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3279
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3278
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3280
            .species = SPECIES_SCRAFTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3282
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3281
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3283
    [DIFFICULTY_NORMAL][TRAINER_MONTY] =
    {
#line 3284
        .trainerName = _("Monty"),
#line 3285
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3286
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3288
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3288
            .heldItem = ITEM_PUNCHING_GLOVE,
#line 3289
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3290
            .lvl = 20,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3291
                MOVE_UPPER_HAND,
                MOVE_FOCUS_PUNCH,
                MOVE_MACH_PUNCH,
            },
            },
        },
    },
#line 3295
    [DIFFICULTY_NORMAL][TRAINER_OLIVER] =
    {
#line 3296
        .trainerName = _("Oliver"),
#line 3297
        .trainerPic = TRAINER_PIC_FRONT_EXPERT_M,
#line 3299
        .isNative = TRUE,
#line 3298
        .characterRevealId = REVEAL_OLIVER,
#line 3300
        .objectEventGraphicsId = OBJ_EVENT_GFX_PROF_BIRCH,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_EXPERT_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3302
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3304
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3303
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3305
    [DIFFICULTY_NORMAL][TRAINER_00317DFA] =
    {
#line 3306
        .trainerName = _("00317DFA"),
#line 3307
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3310
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3308
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3311
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3309
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3313
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3316
            .ev = TRAINER_PARTY_EVS(0, 0, 156, 0, 0, 0),
#line 3318
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3314
            .ability = ABILITY_FRIEND_GUARD,
#line 3315
            .lvl = 19,
            .ball = POKEBALL_COUNT,
#line 3317
            .nature = NATURE_LAX,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3319
                MOVE_HELPING_HAND,
                MOVE_LIGHT_SCREEN,
                MOVE_ICY_WIND,
            },
            },
            {
#line 3323
            .species = SPECIES_SMOLIV,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3323
            .heldItem = ITEM_ORAN_BERRY,
#line 3326
            .ev = TRAINER_PARTY_EVS(144, 12, 0, 0, 0, 0),
#line 3328
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3324
            .ability = ABILITY_HARVEST,
#line 3325
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3327
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3329
                MOVE_LEECH_SEED,
                MOVE_CHARM,
                MOVE_RAZOR_LEAF,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 3334
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3337
            .ev = TRAINER_PARTY_EVS(0, 84, 0, 64, 0, 0),
#line 3339
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3335
            .ability = ABILITY_HUSTLE,
#line 3336
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3338
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3340
                MOVE_QUICK_ATTACK,
                MOVE_AIR_CUTTER,
                MOVE_POUNCE,
                MOVE_REVERSAL,
            },
            },
        },
    },
#line 3345
    [DIFFICULTY_NORMAL][TRAINER_0049EFE8] =
    {
#line 3346
        .trainerName = _("0049EFE8"),
#line 3347
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3348
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3350
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3349
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3352
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3352
            .heldItem = ITEM_CHARCOAL,
#line 3354
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 44, 56, 0),
#line 3356
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3353
            .ability = ABILITY_DROUGHT,
#line 3357
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3355
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3358
                MOVE_FIRE_SPIN,
                MOVE_FLAME_CHARGE,
                MOVE_WEATHER_BALL,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3363
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3363
            .heldItem = ITEM_PASSHO_BERRY,
#line 3365
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 100, 0, 0),
#line 3367
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3364
            .ability = ABILITY_FLAME_BODY,
#line 3368
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3366
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3369
                MOVE_BUG_BITE,
                MOVE_FLAME_WHEEL,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 3373
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3376
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3374
            .ability = ABILITY_FLAME_BODY,
#line 3377
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3375
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3378
                MOVE_WILL_O_WISP,
                MOVE_HEX,
                MOVE_FIRE_SPIN,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 3383
    [DIFFICULTY_NORMAL][TRAINER_023957DE] =
    {
#line 3384
        .trainerName = _("023957DE"),
#line 3385
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3386
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3388
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3387
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3390
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3390
            .heldItem = ITEM_ORAN_BERRY,
#line 3393
            .ev = TRAINER_PARTY_EVS(72, 0, 40, 0, 0, 40),
#line 3395
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3391
            .ability = ABILITY_SHED_SKIN,
#line 3392
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3394
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3396
                MOVE_THUNDER_WAVE,
                MOVE_DRAGON_TAIL,
                MOVE_SUPERSONIC,
                MOVE_SLAM,
            },
            },
            {
#line 3401
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3404
            .ev = TRAINER_PARTY_EVS(0, 148, 4, 0, 0, 0),
#line 3406
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3402
            .ability = ABILITY_HUSTLE,
#line 3403
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3405
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3407
                MOVE_BITE,
                MOVE_HEADBUTT,
                MOVE_DRAGON_TAIL,
            },
            },
            {
#line 3411
            .species = SPECIES_ZWEILOUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3414
            .ev = TRAINER_PARTY_EVS(0, 148, 0, 0, 0, 4),
#line 3416
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3412
            .ability = ABILITY_HUSTLE,
#line 3413
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3415
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3417
                MOVE_BITE,
                MOVE_FIRE_FANG,
                MOVE_THUNDER_FANG,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 3422
    [DIFFICULTY_NORMAL][TRAINER_006E7EFD] =
    {
#line 3423
        .trainerName = _("006E7EFD"),
#line 3424
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3425
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3427
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3426
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3429
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3432
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 100, 0, 0),
#line 3434
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3430
            .ability = ABILITY_INNER_FOCUS,
#line 3431
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3433
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3435
                MOVE_BATON_PASS,
                MOVE_SWORDS_DANCE,
                MOVE_VACUUM_WAVE,
                MOVE_METRONOME,
            },
            },
            {
#line 3440
            .species = SPECIES_PAWMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3443
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 100, 0, 0),
#line 3445
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3441
            .ability = ABILITY_IRON_FIST,
#line 3442
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3444
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3446
                MOVE_BATON_PASS,
                MOVE_MACH_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_AGILITY,
            },
            },
            {
#line 3451
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3451
            .heldItem = ITEM_FOCUS_SASH,
#line 3454
            .ev = TRAINER_PARTY_EVS(72, 0, 36, 0, 0, 36),
#line 3456
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3452
            .ability = ABILITY_RECKLESS,
#line 3453
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3455
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3457
                MOVE_HIGH_JUMP_KICK,
                MOVE_DETECT,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
        },
    },
#line 3462
    [DIFFICULTY_NORMAL][TRAINER_007F06A5] =
    {
#line 3463
        .trainerName = _("007F06A5"),
#line 3464
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3465
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3467
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3466
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3469
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3469
            .heldItem = ITEM_SITRUS_BERRY,
#line 3472
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3470
            .ability = ABILITY_TORRENT,
#line 3471
            .lvl = 20,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3473
                MOVE_MIRROR_COAT,
                MOVE_MUDDY_WATER,
                MOVE_COUNTER,
            },
            },
            {
#line 3477
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3480
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3478
            .ability = ABILITY_OWN_TEMPO,
#line 3479
            .lvl = 24,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3481
                MOVE_LIGHT_SCREEN,
                MOVE_RAIN_DANCE,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 3485
            .species = SPECIES_ARROKUDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3485
            .heldItem = ITEM_METRONOME,
#line 3488
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3486
            .ability = ABILITY_PROPELLER_TAIL,
#line 3487
            .lvl = 24,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3488
                MOVE_AQUA_JET,
            },
            },
        },
    },
#line 3490
    [DIFFICULTY_NORMAL][TRAINER_01103D48] =
    {
#line 3491
        .trainerName = _("01103D48"),
#line 3492
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3496
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3493
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3495
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3494
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3498
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3501
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 144, 0),
#line 3503
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3499
            .ability = ABILITY_PICKUP,
#line 3500
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 3502
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3504
                MOVE_FOLLOW_ME,
                MOVE_CHARGE_BEAM,
                MOVE_THIEF,
                MOVE_MUD_SHOT,
            },
            },
            {
#line 3509
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3509
            .heldItem = ITEM_ORAN_BERRY,
#line 3512
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 64, 80, 0),
#line 3514
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3510
            .ability = ABILITY_WIND_POWER,
#line 3511
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3513
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3515
                MOVE_TAILWIND,
                MOVE_ROOST,
                MOVE_PLUCK,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 3520
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3520
            .heldItem = ITEM_MAGNET,
#line 3523
            .ev = TRAINER_PARTY_EVS(44, 56, 0, 44, 0, 0),
#line 3524
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3521
            .ability = ABILITY_INTIMIDATE,
#line 3522
            .lvl = 21,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3525
                MOVE_BITE,
                MOVE_CHARGE,
                MOVE_SPARK,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 3530
    [DIFFICULTY_NORMAL][TRAINER_0272920D] =
    {
#line 3531
        .trainerName = _("0272920D"),
#line 3532
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3533
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3535
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3534
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3537
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3537
            .heldItem = ITEM_ROCKY_HELMET,
#line 3540
            .ev = TRAINER_PARTY_EVS(0, 116, 0, 28, 0, 0),
#line 3542
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3538
            .ability = ABILITY_ROUGH_SKIN,
#line 3539
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3541
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3543
                MOVE_AQUA_JET,
                MOVE_BITE,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 3547
            .species = SPECIES_THIEVUL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3550
            .ev = TRAINER_PARTY_EVS(36, 0, 32, 24, 32, 24),
#line 3552
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3548
            .ability = ABILITY_UNBURDEN,
#line 3549
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 3551
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3553
                MOVE_NASTY_PLOT,
                MOVE_SNARL,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3557
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3557
            .heldItem = ITEM_MENTAL_HERB,
#line 3560
            .ev = TRAINER_PARTY_EVS(56, 0, 56, 0, 0, 40),
#line 3562
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3558
            .ability = ABILITY_PRANKSTER,
#line 3559
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3561
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3563
                MOVE_HAZE,
                MOVE_WING_ATTACK,
                MOVE_TAUNT,
                MOVE_THIEF,
            },
            },
        },
    },
#line 3568
    [DIFFICULTY_NORMAL][TRAINER_022A53A0] =
    {
#line 3569
        .trainerName = _("022A53A0"),
#line 3570
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3574
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3571
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3573
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3572
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3576
            .species = SPECIES_KRICKETUNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3576
            .heldItem = ITEM_FOCUS_BAND,
#line 3579
            .ev = TRAINER_PARTY_EVS(28, 24, 36, 44, 0, 24),
#line 3581
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3577
            .ability = ABILITY_SWARM,
#line 3578
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3580
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3582
                MOVE_SING,
                MOVE_STICKY_WEB,
                MOVE_LEECH_LIFE,
            },
            },
            {
#line 3586
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3586
            .heldItem = ITEM_FOCUS_BAND,
#line 3589
            .ev = TRAINER_PARTY_EVS(68, 20, 68, 0, 0, 0),
#line 3591
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3587
            .ability = ABILITY_SWARM,
#line 3588
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 3590
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3592
                MOVE_RAZOR_LEAF,
                MOVE_STRUGGLE_BUG,
                MOVE_ELECTROWEB,
            },
            },
            {
#line 3596
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3596
            .heldItem = ITEM_SILVER_POWDER,
#line 3599
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 152, 0, 0),
#line 3601
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3597
            .ability = ABILITY_SWARM,
#line 3598
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3600
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3602
                MOVE_NIGHT_SHADE,
                MOVE_FELL_STINGER,
                MOVE_BUG_BITE,
            },
            },
        },
    },
#line 3608
    [DIFFICULTY_NORMAL][TRAINER_012ED80D] =
    {
#line 3609
        .trainerName = _("012ED80D"),
#line 3610
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3611
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3613
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3612
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3615
            .species = SPECIES_MUDBRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3618
            .ev = TRAINER_PARTY_EVS(0, 24, 128, 0, 0, 0),
#line 3620
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3616
            .ability = ABILITY_STAMINA,
#line 3617
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3619
            .nature = NATURE_LAX,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3621
                MOVE_STRENGTH,
                MOVE_COUNTER,
                MOVE_BULLDOZE,
                MOVE_DOUBLE_KICK,
            },
            },
            {
#line 3626
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3629
            .ev = TRAINER_PARTY_EVS(0, 136, 0, 0, 0, 0),
#line 3631
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3627
            .ability = ABILITY_SAND_FORCE,
#line 3628
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3630
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3632
                MOVE_SANDSTORM,
                MOVE_METAL_CLAW,
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3637
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3640
            .ev = TRAINER_PARTY_EVS(0, 76, 0, 0, 72, 0),
#line 3642
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3638
            .ability = ABILITY_SIMPLE,
#line 3639
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3641
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3643
                MOVE_INCINERATE,
                MOVE_BULLDOZE,
                MOVE_FOCUS_ENERGY,
            },
            },
        },
    },
#line 3647
    [DIFFICULTY_NORMAL][TRAINER_01E6E96E] =
    {
#line 3648
        .trainerName = _("01E6E96E"),
#line 3649
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3653
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3650
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3652
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3651
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3655
            .species = SPECIES_MINIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3655
            .heldItem = ITEM_POWER_HERB,
#line 3658
            .ev = TRAINER_PARTY_EVS(0, 92, 0, 0, 56, 0),
#line 3660
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3656
            .ability = ABILITY_SHIELDS_DOWN,
#line 3657
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3659
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3661
                MOVE_METEOR_BEAM,
                MOVE_ROLLOUT,
                MOVE_ACROBATICS,
                MOVE_U_TURN,
            },
            },
            {
#line 3666
            .species = SPECIES_VIVILLON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3666
            .heldItem = ITEM_MENTAL_HERB,
#line 3669
            .ev = TRAINER_PARTY_EVS(80, 0, 0, 68, 0, 0),
#line 3671
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3667
            .ability = ABILITY_FRIEND_GUARD,
#line 3668
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3670
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3672
                MOVE_SWIFT,
                MOVE_U_TURN,
                MOVE_STUN_SPORE,
                MOVE_TAILWIND,
            },
            },
            {
#line 3677
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3677
            .heldItem = ITEM_SILK_SCARF,
#line 3680
            .ev = TRAINER_PARTY_EVS(0, 148, 0, 0, 0, 0),
#line 3682
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3678
            .ability = ABILITY_SCRAPPY,
#line 3679
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3681
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3683
                MOVE_RAGE,
                MOVE_RETURN,
                MOVE_AERIAL_ACE,
                MOVE_U_TURN,
            },
            },
        },
    },
#line 3688
    [DIFFICULTY_NORMAL][TRAINER_0092D526] =
    {
#line 3689
        .trainerName = _("0092D526"),
#line 3690
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3694
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3691
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3693
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3692
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3696
            .species = SPECIES_BOUNSWEET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3699
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 60, 96, 0),
#line 3701
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3697
            .ability = ABILITY_LEAF_GUARD,
#line 3698
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3700
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3702
                MOVE_MAGICAL_LEAF,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 3705
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3705
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3708
            .ev = TRAINER_PARTY_EVS(0, 0, 84, 0, 0, 64),
#line 3709
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3706
            .ability = ABILITY_EFFECT_SPORE,
#line 3707
            .lvl = 20,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3710
                MOVE_RAGE_POWDER,
                MOVE_POISON_POWDER,
                MOVE_VENOSHOCK,
                MOVE_STUN_SPORE,
            },
            },
            {
#line 3715
            .species = SPECIES_CAPSAKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3718
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 156, 0),
#line 3720
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3716
            .ability = ABILITY_CHLOROPHYLL,
#line 3717
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3719
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3721
                MOVE_MAGICAL_LEAF,
                MOVE_GROWTH,
                MOVE_INGRAIN,
            },
            },
        },
    },
#line 3725
    [DIFFICULTY_NORMAL][TRAINER_00C593A8] =
    {
#line 3726
        .trainerName = _("00C593A8"),
#line 3727
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3731
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3728
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3730
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3729
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3733
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3733
            .heldItem = ITEM_WACAN_BERRY,
#line 3736
            .ev = TRAINER_PARTY_EVS(64, 84, 0, 0, 0, 0),
#line 3738
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3734
            .ability = ABILITY_ICE_BODY,
#line 3735
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3737
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3739
                MOVE_ROLLOUT,
                MOVE_SNOWSCAPE,
                MOVE_ICE_BALL,
            },
            },
            {
#line 3743
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3743
            .heldItem = ITEM_METRONOME,
#line 3746
            .ev = TRAINER_PARTY_EVS(44, 100, 0, 0, 0, 0),
#line 3748
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3744
            .ability = ABILITY_ICE_BODY,
#line 3745
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 3747
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3749
                MOVE_SNOWSCAPE,
                MOVE_ROLLOUT,
                MOVE_ICE_BALL,
            },
            },
            {
#line 3753
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3756
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 0, 104, 0),
#line 3758
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3754
            .ability = ABILITY_OBLIVIOUS,
#line 3755
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 3757
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3759
                MOVE_PSYCHIC_NOISE,
                MOVE_CONFUSION,
                MOVE_ICY_WIND,
            },
            },
        },
    },
#line 3763
    [DIFFICULTY_NORMAL][TRAINER_01E7C79B] =
    {
#line 3764
        .trainerName = _("01E7C79B"),
#line 3765
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3766
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3768
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3767
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3770
            .species = SPECIES_DOTTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3773
            .ev = TRAINER_PARTY_EVS(0, 0, 88, 0, 0, 64),
#line 3775
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3771
            .ability = ABILITY_SWARM,
#line 3772
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3774
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3776
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_CONFUSION,
                MOVE_STRUGGLE_BUG,
            },
            },
            {
#line 3781
            .species = SPECIES_HATENNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3781
            .heldItem = ITEM_TWISTED_SPOON,
#line 3784
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 88, 56, 0),
#line 3786
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3782
            .ability = ABILITY_ANTICIPATION,
#line 3783
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 3785
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3787
                MOVE_PSYBEAM,
                MOVE_DISARMING_VOICE,
                MOVE_NUZZLE,
            },
            },
            {
#line 3791
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3794
            .ev = TRAINER_PARTY_EVS(0, 92, 40, 0, 0, 24),
#line 3796
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3792
            .ability = ABILITY_PURE_POWER,
#line 3793
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 3795
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3797
                MOVE_ZEN_HEADBUTT,
                MOVE_FORCE_PALM,
                MOVE_WORK_UP,
            },
            },
        },
    },
#line 3801
    [DIFFICULTY_NORMAL][TRAINER_01C7AF3F] =
    {
#line 3802
        .trainerName = _("01C7AF3F"),
#line 3803
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3807
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3804
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3806
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3805
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3809
            .nickname = COMPOUND_STRING("Flabebe"),
#line 3809
            .species = SPECIES_FLABEBE_YELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3809
            .heldItem = ITEM_ORAN_BERRY,
#line 3812
            .ev = TRAINER_PARTY_EVS(0, 0, 52, 0, 0, 96),
#line 3814
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 3810
            .ability = ABILITY_SYMBIOSIS,
#line 3811
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 3813
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3815
                MOVE_TEARFUL_LOOK,
                MOVE_DISARMING_VOICE,
                MOVE_MAGICAL_LEAF,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 3820
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3823
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 36, 116, 0),
#line 3825
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3821
            .ability = ABILITY_TRACE,
#line 3822
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3824
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3826
                MOVE_DISARMING_VOICE,
                MOVE_PSYBEAM,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 3830
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3830
            .heldItem = ITEM_SITRUS_BERRY,
#line 3833
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 88, 64, 0),
#line 3835
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3831
            .ability = ABILITY_TRACE,
#line 3832
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3834
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3836
                MOVE_DISARMING_VOICE,
                MOVE_PSYBEAM,
                MOVE_LIFE_DEW,
            },
            },
        },
    },
#line 3842
    [DIFFICULTY_NORMAL][TRAINER_02EEB783] =
    {
#line 3843
        .trainerName = _("02EEB783"),
#line 3844
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3848
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3845
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3847
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3846
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3850
            .species = SPECIES_YAMASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3853
            .ev = TRAINER_PARTY_EVS(80, 0, 0, 0, 76, 0),
#line 3855
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3851
            .ability = ABILITY_MUMMY,
#line 3852
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3854
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3856
                MOVE_WILL_O_WISP,
                MOVE_PROTECT,
                MOVE_HEX,
            },
            },
            {
#line 3860
            .species = SPECIES_HONEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3860
            .heldItem = ITEM_OCCA_BERRY,
#line 3863
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 144),
#line 3865
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3861
            .ability = ABILITY_NO_GUARD,
#line 3862
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3864
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3866
                MOVE_AERIAL_ACE,
                MOVE_SHADOW_SNEAK,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 3870
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3873
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 96, 48),
#line 3875
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3871
            .ability = ABILITY_LEVITATE,
#line 3872
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3874
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3876
                MOVE_CHARGE,
                MOVE_THUNDER_SHOCK,
                MOVE_ASTONISH,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 3881
    [DIFFICULTY_NORMAL][TRAINER_026E91A6] =
    {
#line 3882
        .trainerName = _("026E91A6"),
#line 3883
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3887
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3884
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3886
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3885
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3889
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3889
            .heldItem = ITEM_SITRUS_BERRY,
#line 3892
            .ev = TRAINER_PARTY_EVS(0, 0, 144, 0, 0, 0),
#line 3894
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3890
            .ability = ABILITY_ROCK_HEAD,
#line 3891
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3893
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3895
                MOVE_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_ROCK_TOMB,
                MOVE_ROAR,
            },
            },
            {
#line 3900
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3900
            .heldItem = ITEM_GANLON_BERRY,
#line 3903
            .ev = TRAINER_PARTY_EVS(0, 0, 4, 0, 104, 48),
#line 3905
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 3901
            .ability = ABILITY_CLEAR_BODY,
#line 3902
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 3904
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3906
                MOVE_METAL_SOUND,
                MOVE_CHARGE_BEAM,
                MOVE_SANDSTORM,
            },
            },
            {
#line 3910
            .species = SPECIES_VAROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3913
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 152, 0),
#line 3915
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3911
            .ability = ABILITY_OVERCOAT,
#line 3912
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3914
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3916
                MOVE_SLUDGE,
                MOVE_GYRO_BALL,
                MOVE_HEADBUTT,
                MOVE_LICK,
            },
            },
        },
    },
#line 3921
    [DIFFICULTY_NORMAL][TRAINER_029E0EF0] =
    {
#line 3922
        .trainerName = _("029E0EF0"),
#line 3923
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3924
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3926
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3925
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3928
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3931
            .ev = TRAINER_PARTY_EVS(0, 96, 16, 0, 0, 32),
#line 3933
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3929
            .ability = ABILITY_POISON_POINT,
#line 3930
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3932
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3934
                MOVE_TOXIC_SPIKES,
                MOVE_DIG,
                MOVE_POISON_STING,
                MOVE_TRAILBLAZE,
            },
            },
            {
#line 3939
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3942
            .ev = TRAINER_PARTY_EVS(24, 0, 0, 0, 120, 0),
#line 3944
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3940
            .ability = ABILITY_CLEAR_BODY,
#line 3941
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3943
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3945
                MOVE_BUBBLE_BEAM,
                MOVE_ACID_SPRAY,
                MOVE_TOXIC,
            },
            },
            {
#line 3949
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3949
            .heldItem = ITEM_SITRUS_BERRY,
#line 3952
            .ev = TRAINER_PARTY_EVS(80, 72, 0, 0, 0, 0),
#line 3954
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3950
            .ability = ABILITY_GLUTTONY,
#line 3951
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 3953
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3955
                MOVE_AMNESIA,
                MOVE_ACID_ARMOR,
                MOVE_ENCORE,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
#line 3960
    [DIFFICULTY_NORMAL][TRAINER_00E46F7D] =
    {
#line 3961
        .trainerName = _("00E46F7D"),
#line 3962
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3966
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3963
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3965
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3964
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3968
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3971
            .ev = TRAINER_PARTY_EVS(12, 92, 32, 0, 0, 12),
#line 3973
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3969
            .ability = ABILITY_SHED_SKIN,
#line 3970
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 3972
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3974
                MOVE_STOMPING_TANTRUM,
                MOVE_ROCK_SLIDE,
                MOVE_PAYBACK,
            },
            },
            {
#line 3978
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3981
            .ev = TRAINER_PARTY_EVS(0, 36, 0, 112, 0, 0),
#line 3983
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3979
            .ability = ABILITY_WEAK_ARMOR,
#line 3980
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3982
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3984
                MOVE_AQUA_JET,
                MOVE_ABSORB,
                MOVE_ROCK_TOMB,
                MOVE_PROTECT,
            },
            },
            {
#line 3989
            .species = SPECIES_TYRUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3989
            .heldItem = ITEM_HARD_STONE,
#line 3992
            .ev = TRAINER_PARTY_EVS(0, 72, 80, 0, 0, 0),
#line 3994
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3990
            .ability = ABILITY_STURDY,
#line 3991
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 3993
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3995
                MOVE_DRAGON_TAIL,
                MOVE_BITE,
                MOVE_ANCIENT_POWER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 4000
    [DIFFICULTY_NORMAL][TRAINER_032E8AC9] =
    {
#line 4001
        .trainerName = _("032E8AC9"),
#line 4002
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4003
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4005
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4004
        .mapSec = MAPSEC_MERMEREZA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4007
            .species = SPECIES_SHROODLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4007
            .heldItem = ITEM_BIG_NUGGET,
#line 4010
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 128, 0, 0),
#line 4012
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4008
            .ability = ABILITY_UNBURDEN,
#line 4009
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 4011
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4013
                MOVE_FLING,
                MOVE_ACROBATICS,
                MOVE_BATON_PASS,
            },
            },
            {
#line 4017
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4017
            .heldItem = ITEM_ASPEAR_BERRY,
#line 4020
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 136, 0, 0),
#line 4022
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4018
            .ability = ABILITY_FLASH_FIRE,
#line 4019
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4021
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4023
                MOVE_TRICK,
                MOVE_POLTERGEIST,
                MOVE_BITTER_BLADE,
                MOVE_DESTINY_BOND,
            },
            },
        },
    },
#line 4028
    [DIFFICULTY_NORMAL][TRAINER_0389363C] =
    {
#line 4029
        .trainerName = _("0389363C"),
#line 4030
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4032
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4031
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_WEIGH_ABILITY_PREDICTION | AI_FLAG_PREDICT_SWITCH | AI_FLAG_PREDICT_INCOMING_MON | AI_FLAG_PP_STALL_PREVENTION | AI_FLAG_PREDICT_MOVE,
#line 4034
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4033
        .mapSec = MAPSEC_MERMEREZA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4036
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4036
            .heldItem = ITEM_FIGY_BERRY,
#line 4039
            .ev = TRAINER_PARTY_EVS(0, 132, 0, 0, 0, 0),
#line 4041
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4037
            .ability = ABILITY_GLUTTONY,
#line 4038
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 4040
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4042
                MOVE_BELLY_DRUM,
                MOVE_SNORE,
                MOVE_REST,
                MOVE_SLASH,
            },
            },
        },
    },
#line 4047
    [DIFFICULTY_NORMAL][TRAINER_040CEA33] =
    {
#line 4048
        .trainerName = _("040CEA33"),
#line 4049
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4051
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_WEIGH_ABILITY_PREDICTION | AI_FLAG_PREDICT_SWITCH | AI_FLAG_PREDICT_INCOMING_MON | AI_FLAG_PP_STALL_PREVENTION | AI_FLAG_PREDICT_MOVE,
#line 4050
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4052
        .mapSec = MAPSEC_MERMEREZA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4054
            .species = SPECIES_PALPITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4054
            .heldItem = ITEM_RINDO_BERRY,
#line 4057
            .ev = TRAINER_PARTY_EVS(0, 0, 96, 0, 0, 28),
#line 4059
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4055
            .ability = ABILITY_SWIFT_SWIM,
#line 4056
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4058
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4060
                MOVE_RAIN_DANCE,
                MOVE_MUD_SHOT,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 4064
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4064
            .heldItem = ITEM_CHOPLE_BERRY,
#line 4067
            .ev = TRAINER_PARTY_EVS(0, 0, 68, 0, 0, 56),
#line 4069
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4065
            .ability = ABILITY_STENCH,
#line 4066
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 4068
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4070
                MOVE_TOXIC_SPIKES,
                MOVE_VENOSHOCK,
                MOVE_BODY_SLAM,
            },
            },
        },
    },
#line 4074
    [DIFFICULTY_NORMAL][TRAINER_031A849F] =
    {
#line 4075
        .trainerName = _("031A849F"),
#line 4076
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4080
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4077
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4079
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4078
        .mapSec = MAPSEC_TORA_TOWN,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4082
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4082
            .heldItem = ITEM_TWISTED_SPOON,
#line 4085
            .ev = TRAINER_PARTY_EVS(0, 64, 0, 0, 64, 0),
#line 4087
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4083
            .ability = ABILITY_PRANKSTER,
#line 4084
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4086
            .nature = NATURE_DOCILE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4088
                MOVE_TAILWIND,
                MOVE_DUAL_WINGBEAT,
                MOVE_HEAT_WAVE,
            },
            },
            {
#line 4092
            .species = SPECIES_INKAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4092
            .heldItem = ITEM_ROSELI_BERRY,
#line 4095
            .ev = TRAINER_PARTY_EVS(0, 64, 0, 0, 64, 0),
#line 4097
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4093
            .ability = ABILITY_CONTRARY,
#line 4094
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4096
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4098
                MOVE_PSYBEAM,
                MOVE_ROCK_SLIDE,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 4102
            .species = SPECIES_LOKIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4102
            .heldItem = ITEM_CHOPLE_BERRY,
#line 4105
            .ev = TRAINER_PARTY_EVS(0, 128, 0, 0, 0, 0),
#line 4107
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4103
            .ability = ABILITY_TINTED_LENS,
#line 4104
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4106
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4108
                MOVE_AERIAL_ACE,
                MOVE_TRAILBLAZE,
            },
            },
        },
    },
#line 4111
    [DIFFICULTY_NORMAL][TRAINER_045FDD44] =
    {
#line 4112
        .trainerName = _("045FDD44"),
#line 4113
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4116
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4114
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4115
        .mapSec = MAPSEC_TORA_TOWN,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4118
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4118
            .heldItem = ITEM_SHUCA_BERRY,
#line 4121
            .ev = TRAINER_PARTY_EVS(0, 0, 84, 0, 0, 40),
#line 4123
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4119
            .ability = ABILITY_EFFECT_SPORE,
#line 4120
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4122
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4124
                MOVE_POISON_POWDER,
                MOVE_STUN_SPORE,
                MOVE_POLLEN_PUFF,
            },
            },
            {
#line 4128
            .species = SPECIES_VAROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4128
            .heldItem = ITEM_PAYAPA_BERRY,
#line 4131
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 4133
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4129
            .ability = ABILITY_OVERCOAT,
#line 4130
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4132
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4134
                MOVE_TOXIC_SPIKES,
                MOVE_TOXIC,
                MOVE_VENOSHOCK,
            },
            },
            {
#line 4138
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4138
            .heldItem = ITEM_SPELL_TAG,
#line 4141
            .ev = TRAINER_PARTY_EVS(0, 60, 52, 0, 0, 20),
#line 4143
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4139
            .ability = ABILITY_SWARM,
#line 4140
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4142
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4144
                MOVE_HEX,
                MOVE_LEECH_LIFE,
            },
            },
        },
    },
#line 4147
    [DIFFICULTY_NORMAL][TRAINER_041FD20E] =
    {
#line 4148
        .trainerName = _("041FD20E"),
#line 4149
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4152
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4150
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4151
        .mapSec = MAPSEC_TORA_TOWN,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4154
            .species = SPECIES_MAREANIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4154
            .heldItem = ITEM_MYSTIC_WATER,
#line 4157
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 136),
#line 4159
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4155
            .ability = ABILITY_LIMBER,
#line 4156
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4158
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4160
                MOVE_LIQUIDATION,
                MOVE_ICE_SPINNER,
            },
            },
            {
#line 4163
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4163
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 4166
            .ev = TRAINER_PARTY_EVS(0, 64, 0, 0, 64, 0),
#line 4168
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4164
            .ability = ABILITY_HUSTLE,
#line 4165
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4167
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4169
                MOVE_ICE_FANG,
                MOVE_DRAGON_BREATH,
            },
            },
        },
    },
#line 4172
    [DIFFICULTY_NORMAL][TRAINER_0465BF77] =
    {
#line 4173
        .trainerName = _("0465BF77"),
#line 4174
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4177
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4175
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4176
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4179
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4179
            .heldItem = ITEM_QUICK_CLAW,
#line 4182
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 132, 0, 0),
#line 4184
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4180
            .ability = ABILITY_LEVITATE,
#line 4181
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4183
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4185
                MOVE_TAUNT,
                MOVE_DESTINY_BOND,
                MOVE_SHADOW_SNEAK,
            },
            },
            {
#line 4189
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4192
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 132, 0, 0),
#line 4194
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4190
            .ability = ABILITY_SPEED_BOOST,
#line 4191
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4193
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4195
                MOVE_DESTINY_BOND,
                MOVE_TAUNT,
                MOVE_ASSURANCE,
                MOVE_PSYCHIC_FANGS,
            },
            },
        },
    },
#line 4200
    [DIFFICULTY_NORMAL][TRAINER_0467DF00] =
    {
#line 4201
        .trainerName = _("0467DF00"),
#line 4202
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4205
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4203
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4204
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4207
            .species = SPECIES_MILTANK,
#line 4207
            .gender = TRAINER_MON_FEMALE,
#line 4207
            .heldItem = ITEM_COVERT_CLOAK,
#line 4210
            .ev = TRAINER_PARTY_EVS(44, 0, 48, 0, 0, 40),
#line 4212
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4208
            .ability = ABILITY_THICK_FAT,
#line 4209
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4211
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4213
                MOVE_SANDSTORM,
                MOVE_ROLLOUT,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4217
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4217
            .heldItem = ITEM_BRIGHT_POWDER,
#line 4220
            .ev = TRAINER_PARTY_EVS(132, 0, 0, 0, 0, 0),
#line 4222
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4218
            .ability = ABILITY_SAND_VEIL,
#line 4219
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4221
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4223
                MOVE_FURY_CUTTER,
                MOVE_TOXIC,
                MOVE_KNOCK_OFF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 4228
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4228
            .heldItem = ITEM_SMOOTH_ROCK,
#line 4231
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 136),
#line 4233
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4229
            .ability = ABILITY_HEALER,
#line 4230
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4232
            .nature = NATURE_GENTLE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4234
                MOVE_SANDSTORM,
                MOVE_HEAL_PULSE,
                MOVE_HYPER_VOICE,
            },
            },
        },
    },
#line 4238
    [DIFFICULTY_NORMAL][TRAINER_04687C53] =
    {
#line 4239
        .trainerName = _("04687C53"),
#line 4240
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4243
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4241
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4244
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4242
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4246
            .species = SPECIES_SLIGGOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4246
            .heldItem = ITEM_ORAN_BERRY,
#line 4249
            .ev = TRAINER_PARTY_EVS(0, 0, 136, 0, 0, 0),
#line 4251
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4247
            .ability = ABILITY_GOOEY,
#line 4248
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4250
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4252
                MOVE_ACID_SPRAY,
                MOVE_CHILLING_WATER,
                MOVE_SKITTER_SMACK,
            },
            },
        },
    },
#line 4256
    [DIFFICULTY_NORMAL][TRAINER_048D5D99] =
    {
#line 4257
        .trainerName = _("048D5D99"),
#line 4258
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4261
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4259
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4262
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4260
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4264
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4264
            .heldItem = ITEM_SITRUS_BERRY,
#line 4267
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 132),
#line 4269
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4265
            .ability = ABILITY_STURDY,
#line 4266
            .lvl = 27,
            .ball = POKEBALL_COUNT,
#line 4268
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4270
                MOVE_METAL_BURST,
                MOVE_CURSE,
                MOVE_HARDEN,
            },
            },
            {
#line 4274
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4274
            .heldItem = ITEM_FOCUS_BAND,
#line 4277
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 132),
#line 4279
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4275
            .ability = ABILITY_STURDY,
#line 4276
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4278
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4280
                MOVE_METAL_BURST,
                MOVE_CURSE,
                MOVE_ENDEAVOR,
                MOVE_SANDSTORM,
            },
            },
        },
    },
#line 4285
    [DIFFICULTY_NORMAL][TRAINER_04A59E40] =
    {
#line 4286
        .trainerName = _("04A59E40"),
#line 4287
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4290
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4288
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4291
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4289
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4293
            .species = SPECIES_FLOETTE,
#line 4293
            .gender = TRAINER_MON_FEMALE,
#line 4293
            .heldItem = ITEM_LUM_BERRY,
#line 4296
            .ev = TRAINER_PARTY_EVS(32, 0, 104, 0, 0, 0),
#line 4298
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4294
            .ability = ABILITY_FLOWER_VEIL,
#line 4295
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4297
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4299
                MOVE_WISH,
                MOVE_BATON_PASS,
                MOVE_LIGHT_SCREEN,
                MOVE_MAGICAL_LEAF,
            },
            },
            {
#line 4304
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4304
            .heldItem = ITEM_MYSTIC_WATER,
#line 4307
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 88, 0, 0),
#line 4309
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4305
            .ability = ABILITY_SHELL_ARMOR,
#line 4306
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4308
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4310
                MOVE_BRICK_BREAK,
                MOVE_RAZOR_SHELL,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 4314
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4314
            .heldItem = ITEM_MYSTIC_WATER,
#line 4317
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 136, 0),
#line 4319
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4315
            .ability = ABILITY_REGENERATOR,
#line 4316
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4318
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4320
                MOVE_AVALANCHE,
                MOVE_PSYCHIC_NOISE,
                MOVE_MUDDY_WATER,
            },
            },
        },
    },
#line 4325
    [DIFFICULTY_NORMAL][TRAINER_04E334E9] =
    {
#line 4326
        .trainerName = _("04E334E9"),
#line 4327
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4330
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4328
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4331
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4329
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4333
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4333
            .heldItem = ITEM_ORAN_BERRY,
#line 4336
            .ev = TRAINER_PARTY_EVS(0, 136, 0, 0, 0, 0),
#line 4338
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4334
            .ability = ABILITY_MOODY,
#line 4335
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4337
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4339
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
                MOVE_ICY_WIND,
                MOVE_ROCK_BLAST,
            },
            },
            {
#line 4344
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4344
            .heldItem = ITEM_ORAN_BERRY,
#line 4347
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 136, 0),
#line 4349
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4345
            .ability = ABILITY_MOODY,
#line 4346
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4348
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4350
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
                MOVE_BULLET_SEED,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 4355
            .species = SPECIES_SCOVILLAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4355
            .heldItem = ITEM_ORAN_BERRY,
#line 4358
            .ev = TRAINER_PARTY_EVS(16, 32, 16, 24, 32, 16),
#line 4360
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4356
            .ability = ABILITY_MOODY,
#line 4357
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4359
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4361
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
                MOVE_MAGICAL_LEAF,
                MOVE_TEMPER_FLARE,
            },
            },
        },
    },
#line 4366
    [DIFFICULTY_NORMAL][TRAINER_05BDEABF] =
    {
#line 4367
        .trainerName = _("05BDEABF"),
#line 4368
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4371
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4369
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4372
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4370
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4374
            .species = SPECIES_CAPSAKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4374
            .heldItem = ITEM_SMOOTH_ROCK,
#line 4377
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4375
            .ability = ABILITY_INSOMNIA,
#line 4376
            .lvl = 23,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4378
                MOVE_SANDSTORM,
                MOVE_LEECH_SEED,
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
            },
            },
            {
#line 4383
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4383
            .heldItem = ITEM_SITRUS_BERRY,
#line 4386
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4384
            .ability = ABILITY_EFFECT_SPORE,
#line 4385
            .lvl = 21,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4387
                MOVE_POISON_POWDER,
                MOVE_POLLEN_PUFF,
                MOVE_PROTECT,
                MOVE_ABSORB,
            },
            },
            {
#line 4392
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4392
            .heldItem = ITEM_LEFTOVERS,
#line 4395
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4393
            .ability = ABILITY_IRON_FIST,
#line 4394
            .lvl = 25,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4396
                MOVE_SANDSTORM,
                MOVE_CURSE,
                MOVE_KNOCK_OFF,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 4401
    [DIFFICULTY_NORMAL][TRAINER_06400A0C] =
    {
#line 4402
        .trainerName = _("06400A0C"),
#line 4403
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4406
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4404
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4407
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4405
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4409
            .species = SPECIES_CHARJABUG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4409
            .heldItem = ITEM_EJECT_BUTTON,
#line 4412
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4410
            .ability = ABILITY_BATTERY,
#line 4411
            .lvl = 24,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4413
                MOVE_STICKY_WEB,
                MOVE_LIGHT_SCREEN,
                MOVE_ELECTROWEB,
                MOVE_BUG_BITE,
            },
            },
            {
#line 4418
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4418
            .heldItem = ITEM_CHERI_BERRY,
#line 4421
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4419
            .ability = ABILITY_FLAME_BODY,
#line 4420
            .lvl = 25,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4422
                MOVE_NIGHT_SHADE,
                MOVE_EMBER,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 4426
            .species = SPECIES_DOUBLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4429
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4427
            .ability = ABILITY_NO_GUARD,
#line 4428
            .lvl = 26,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4430
                MOVE_SHADOW_SNEAK,
                MOVE_SHADOW_CLAW,
                MOVE_BRUTAL_SWING,
            },
            },
        },
    },
#line 4434
    [DIFFICULTY_NORMAL][TRAINER_068B06CE] =
    {
#line 4435
        .trainerName = _("068B06CE"),
#line 4436
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4439
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4437
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4440
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4438
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4442
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4445
            .ev = TRAINER_PARTY_EVS(0, 56, 72, 0, 0, 0),
#line 4447
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4443
            .ability = ABILITY_NEUTRALIZING_GAS,
#line 4444
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4446
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4448
                MOVE_WILL_O_WISP,
                MOVE_SLUDGE,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 4452
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4452
            .heldItem = ITEM_WIDE_LENS,
#line 4455
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 136, 0, 0),
#line 4457
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4453
            .ability = ABILITY_FLASH_FIRE,
#line 4454
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4456
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4458
                MOVE_INFERNO,
                MOVE_BABY_DOLL_EYES,
                MOVE_DIG,
                MOVE_HEX,
            },
            },
            {
#line 4463
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4463
            .heldItem = ITEM_FLAME_ORB,
#line 4466
            .ev = TRAINER_PARTY_EVS(0, 28, 0, 0, 0, 108),
#line 4468
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4464
            .ability = ABILITY_QUICK_FEET,
#line 4465
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4467
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4469
                MOVE_FLING,
                MOVE_FACADE,
                MOVE_PROTECT,
            },
            },
            {
#line 4473
            .species = SPECIES_MAGBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4473
            .heldItem = ITEM_CHARCOAL,
#line 4476
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 48, 0, 0),
#line 4478
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4474
            .ability = ABILITY_FLAME_BODY,
#line 4475
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4477
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4479
                MOVE_WILL_O_WISP,
                MOVE_FLAME_WHEEL,
                MOVE_LOW_KICK,
            },
            },
        },
    },
#line 4484
    [DIFFICULTY_NORMAL][TRAINER_06BE2D1B] =
    {
#line 4485
        .trainerName = _("06BE2D1B"),
#line 4486
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4488
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4487
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4490
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4489
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4492
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4492
            .heldItem = ITEM_SCOPE_LENS,
#line 4495
            .ev = TRAINER_PARTY_EVS(0, 0, 72, 0, 0, 64),
#line 4497
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4493
            .ability = ABILITY_SUPER_LUCK,
#line 4494
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4496
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4498
                MOVE_ANCIENT_POWER,
                MOVE_PLAY_ROUGH,
                MOVE_POUNCE,
                MOVE_FOLLOW_ME,
            },
            },
            {
#line 4503
            .species = SPECIES_CUBCHOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4506
            .ev = TRAINER_PARTY_EVS(0, 92, 44, 0, 0, 0),
#line 4507
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4504
            .ability = ABILITY_RATTLED,
#line 4505
            .lvl = 22,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4508
                MOVE_FROST_BREATH,
                MOVE_DIG,
            },
            },
            {
#line 4511
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4511
            .heldItem = ITEM_SCOPE_LENS,
#line 4514
            .ev = TRAINER_PARTY_EVS(0, 92, 0, 36, 0, 0),
#line 4516
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4512
            .ability = ABILITY_SUPER_LUCK,
#line 4513
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4515
            .nature = NATURE_DOCILE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4517
                MOVE_TAILWIND,
                MOVE_AIR_CUTTER,
                MOVE_SNARL,
            },
            },
            {
#line 4521
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4521
            .heldItem = ITEM_SCOPE_LENS,
#line 4525
            .ev = TRAINER_PARTY_EVS(0, 136, 0, 0, 0, 0),
#line 4527
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4522
            .ability = ABILITY_SNIPER,
#line 4523
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4526
            .nature = NATURE_ADAMANT,
#line 4524
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4528
                MOVE_CROSS_POISON,
                MOVE_NIGHT_SLASH,
            },
            },
        },
    },
#line 4531
    [DIFFICULTY_NORMAL][TRAINER_06C68007] =
    {
#line 4532
        .trainerName = _("06C68007"),
#line 4533
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4535
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4534
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4537
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4536
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4539
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4539
            .heldItem = ITEM_FAIRY_FEATHER,
#line 4542
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 20, 104, 0),
#line 4544
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4540
            .ability = ABILITY_STATIC,
#line 4541
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4543
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4545
                MOVE_DISCHARGE,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 4548
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4548
            .heldItem = ITEM_EXPERT_BELT,
#line 4551
            .ev = TRAINER_PARTY_EVS(0, 96, 0, 0, 0, 32),
#line 4553
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4549
            .ability = ABILITY_OBLIVIOUS,
#line 4550
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4552
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4554
                MOVE_BULLDOZE,
                MOVE_ICY_WIND,
            },
            },
        },
    },
#line 4557
    [DIFFICULTY_NORMAL][TRAINER_06D2BD08] =
    {
#line 4558
        .trainerName = _("06D2BD08"),
#line 4559
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4562
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4560
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4563
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4561
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4565
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4565
            .heldItem = ITEM_MAGO_BERRY,
#line 4568
            .ev = TRAINER_PARTY_EVS(36, 0, 0, 0, 96, 0),
#line 4570
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4566
            .ability = ABILITY_TANGLED_FEET,
#line 4567
            .lvl = 27,
            .ball = POKEBALL_COUNT,
#line 4569
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4571
                MOVE_ICY_WIND,
                MOVE_PSYBEAM,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 4575
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4575
            .heldItem = ITEM_BLUNDER_POLICY,
#line 4578
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4576
            .ability = ABILITY_QUICK_FEET,
#line 4577
            .lvl = 25,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4579
                MOVE_ICY_WIND,
                MOVE_BODY_SLAM,
                MOVE_FURY_SWIPES,
            },
            },
            {
#line 4583
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4586
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4584
            .ability = ABILITY_DOWNLOAD,
#line 4585
            .lvl = 27,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4587
                MOVE_ICY_WIND,
                MOVE_TRI_ATTACK,
            },
            },
        },
    },
#line 4590
    [DIFFICULTY_NORMAL][TRAINER_070F6125] =
    {
#line 4591
        .trainerName = _("070F6125"),
#line 4592
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4595
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4593
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4596
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4594
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4598
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4598
            .heldItem = ITEM_SALAC_BERRY,
#line 4601
            .ev = TRAINER_PARTY_EVS(20, 116, 0, 0, 0, 0),
#line 4603
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4599
            .ability = ABILITY_INNER_FOCUS,
#line 4600
            .lvl = 27,
            .ball = POKEBALL_COUNT,
#line 4602
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4603
                MOVE_ENDURE,
                MOVE_REVERSAL,
                MOVE_ACROBATICS,
            },
            },
            {
#line 4607
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4607
            .heldItem = ITEM_BLACK_BELT,
#line 4610
            .ev = TRAINER_PARTY_EVS(0, 116, 0, 0, 0, 12),
#line 4612
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4608
            .ability = ABILITY_UNBURDEN,
#line 4609
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4611
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4612
                MOVE_ENDURE,
                MOVE_REVERSAL,
                MOVE_VACUUM_WAVE,
            },
            },
        },
    },
#line 4616
    [DIFFICULTY_NORMAL][TRAINER_07D063A5] =
    {
#line 4617
        .trainerName = _("07D063A5"),
#line 4618
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4621
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4619
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4622
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4620
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4624
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4627
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4629
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4625
            .ability = ABILITY_INTIMIDATE,
#line 4626
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4628
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4630
                MOVE_HELPING_HAND,
                MOVE_U_TURN,
            },
            },
            {
#line 4633
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4633
            .heldItem = ITEM_SHED_SHELL,
#line 4636
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4638
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4634
            .ability = ABILITY_INTIMIDATE,
#line 4635
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4637
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4639
                MOVE_HELPING_HAND,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 4642
            .species = SPECIES_SQUAWKABILLY_WHITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4642
            .heldItem = ITEM_RED_CARD,
#line 4645
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4647
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4643
            .ability = ABILITY_INTIMIDATE,
#line 4644
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4646
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4648
                MOVE_HELPING_HAND,
                MOVE_HEAT_WAVE,
            },
            },
            {
#line 4651
            .species = SPECIES_SQUAWKABILLY_YELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4651
            .heldItem = ITEM_EJECT_BUTTON,
#line 4654
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4656
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4652
            .ability = ABILITY_INTIMIDATE,
#line 4653
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4655
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4657
                MOVE_HELPING_HAND,
                MOVE_AERIAL_ACE,
            },
            },
        },
    },
#line 4660
    [DIFFICULTY_NORMAL][TRAINER_09AEC824] =
    {
#line 4661
        .trainerName = _("09AEC824"),
#line 4662
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4665
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4663
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4664
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4667
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4670
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 124, 0),
#line 4671
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4668
            .ability = ABILITY_INNER_FOCUS,
#line 4669
            .lvl = 26,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4672
                MOVE_THUNDER_WAVE,
                MOVE_NIGHT_SHADE,
                MOVE_CONFUSION,
            },
            },
            {
#line 4676
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4679
            .ev = TRAINER_PARTY_EVS(64, 0, 40, 0, 0, 24),
#line 4681
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4677
            .ability = ABILITY_VOLT_ABSORB,
#line 4678
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 4680
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4682
                MOVE_BITE,
                MOVE_NUZZLE,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 4686
            .species = SPECIES_SNIVY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4689
            .ev = TRAINER_PARTY_EVS(0, 120, 0, 0, 0, 16),
#line 4691
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4687
            .ability = ABILITY_OVERGROW,
#line 4688
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4690
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4692
                MOVE_PETAL_BLIZZARD,
                MOVE_GLARE,
                MOVE_BULLET_SEED,
            },
            },
            {
#line 4696
            .species = SPECIES_SHIINOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4699
            .ev = TRAINER_PARTY_EVS(84, 0, 0, 0, 0, 44),
#line 4701
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4697
            .ability = ABILITY_EFFECT_SPORE,
#line 4698
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4700
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4702
                MOVE_STUN_SPORE,
                MOVE_REVIVAL_BLESSING,
                MOVE_DRAINING_KISS,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 4707
    [DIFFICULTY_NORMAL][TRAINER_09B7B6C8] =
    {
#line 4708
        .trainerName = _("09B7B6C8"),
#line 4709
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4712
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4710
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4713
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4711
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4715
            .species = SPECIES_MALAMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4715
            .heldItem = ITEM_SITRUS_BERRY,
#line 4718
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 128, 0, 0),
#line 4720
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4716
            .ability = ABILITY_CONTRARY,
#line 4717
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4719
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4721
                MOVE_SWAGGER,
                MOVE_LIGHT_SCREEN,
                MOVE_ACUPRESSURE,
            },
            },
            {
#line 4725
            .species = SPECIES_DITTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4725
            .heldItem = ITEM_CHOICE_SCARF,
#line 4728
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 0, 72, 0),
#line 4730
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4726
            .ability = ABILITY_IMPOSTER,
#line 4727
            .lvl = 29,
            .ball = POKEBALL_COUNT,
#line 4729
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4732
    [DIFFICULTY_NORMAL][TRAINER_0A542D33] =
    {
#line 4733
        .trainerName = _("0A542D33"),
#line 4734
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4737
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4735
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4736
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4739
            .species = SPECIES_CLEFFA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4739
            .heldItem = ITEM_MENTAL_HERB,
#line 4742
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 128, 0),
#line 4744
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4740
            .ability = ABILITY_CUTE_CHARM,
#line 4741
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4743
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4745
                MOVE_HELPING_HAND,
                MOVE_DAZZLING_GLEAM,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 4749
            .species = SPECIES_CLEFAIRY,
#line 4749
            .gender = TRAINER_MON_MALE,
#line 4749
            .heldItem = ITEM_MENTAL_HERB,
#line 4752
            .ev = TRAINER_PARTY_EVS(0, 0, 64, 0, 0, 64),
#line 4754
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4750
            .ability = ABILITY_CUTE_CHARM,
#line 4751
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4753
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4755
                MOVE_HELPING_HAND,
                MOVE_DAZZLING_GLEAM,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 4759
            .species = SPECIES_CLEFABLE,
#line 4759
            .gender = TRAINER_MON_FEMALE,
#line 4759
            .heldItem = ITEM_MENTAL_HERB,
#line 4762
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 128, 0),
#line 4764
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4760
            .ability = ABILITY_CUTE_CHARM,
#line 4761
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4763
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4765
                MOVE_HELPING_HAND,
                MOVE_DAZZLING_GLEAM,
                MOVE_LIGHT_SCREEN,
            },
            },
        },
    },
#line 4769
    [DIFFICULTY_NORMAL][TRAINER_0A8B9F88] =
    {
#line 4770
        .trainerName = _("0A8B9F88"),
#line 4771
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4773
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4772
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4775
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4774
        .mapSec = MAPSEC_ROUTE2,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4777
            .species = SPECIES_MINIOR_METEOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4777
            .heldItem = ITEM_METRONOME,
#line 4780
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 84, 0, 0),
#line 4782
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4778
            .ability = ABILITY_SHIELDS_DOWN,
#line 4779
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4781
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4783
                MOVE_ROLLOUT,
            },
            },
            {
#line 4785
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4785
            .heldItem = ITEM_EVIOLITE,
#line 4788
            .ev = TRAINER_PARTY_EVS(52, 80, 0, 0, 0, 0),
#line 4790
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4786
            .ability = ABILITY_THICK_FAT,
#line 4787
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 4789
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4791
                MOVE_ICE_BALL,
            },
            },
            {
#line 4793
            .species = SPECIES_ANORITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4793
            .heldItem = ITEM_PASSHO_BERRY,
#line 4796
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 80, 0, 0),
#line 4798
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4794
            .ability = ABILITY_BATTLE_ARMOR,
#line 4795
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 4797
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4799
                MOVE_FURY_CUTTER,
            },
            },
        },
    },
#line 4801
    [DIFFICULTY_NORMAL][TRAINER_0A8FC005] =
    {
#line 4802
        .trainerName = _("0A8FC005"),
#line 4803
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4805
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4804
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4807
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4806
        .mapSec = MAPSEC_ROUTE4,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4809
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4809
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 4812
            .ev = TRAINER_PARTY_EVS(72, 0, 0, 0, 56, 0),
#line 4814
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4810
            .ability = ABILITY_DRIZZLE,
#line 4811
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4813
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4815
                MOVE_AIR_CUTTER,
                MOVE_ICY_WIND,
                MOVE_CHILLING_WATER,
                MOVE_STOCKPILE,
            },
            },
            {
#line 4820
            .species = SPECIES_TYRUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4820
            .heldItem = ITEM_UTILITY_UMBRELLA,
#line 4823
            .ev = TRAINER_PARTY_EVS(40, 0, 0, 0, 0, 88),
#line 4825
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4821
            .ability = ABILITY_STURDY,
#line 4822
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4824
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4826
                MOVE_ICE_FANG,
                MOVE_THUNDER_FANG,
                MOVE_BITE,
                MOVE_BULLDOZE,
            },
            },
            {
#line 4831
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4831
            .heldItem = ITEM_LEFTOVERS,
#line 4834
            .ev = TRAINER_PARTY_EVS(84, 0, 56, 0, 0, 0),
#line 4836
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4832
            .ability = ABILITY_RAIN_DISH,
#line 4833
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4835
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4837
                MOVE_WHIRLPOOL,
                MOVE_TOXIC,
                MOVE_ACID_ARMOR,
                MOVE_PROTECT,
            },
            },
            {
#line 4842
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4842
            .heldItem = ITEM_SNOWBALL,
#line 4845
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 0, 0, 76),
#line 4847
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4843
            .ability = ABILITY_HYPER_CUTTER,
#line 4844
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4846
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4848
                MOVE_VENOSHOCK,
                MOVE_AERIAL_ACE,
                MOVE_BREAKING_SWIPE,
                MOVE_SAND_TOMB,
            },
            },
        },
    },
#line 4853
    [DIFFICULTY_NORMAL][TRAINER_0AAB38A6] =
    {
#line 4854
        .trainerName = _("0AAB38A6"),
#line 4855
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4857
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4856
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4859
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4858
        .mapSec = MAPSEC_ROUTE4,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4861
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4861
            .heldItem = ITEM_EVIOLITE,
#line 4864
            .ev = TRAINER_PARTY_EVS(60, 0, 0, 0, 72, 0),
#line 4866
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4862
            .ability = ABILITY_LEVITATE,
#line 4863
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4865
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4867
                MOVE_EXTRASENSORY,
                MOVE_SCORCHING_SANDS,
                MOVE_HEX,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 4872
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4872
            .heldItem = ITEM_AIR_BALLOON,
#line 4875
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 0, 0, 88),
#line 4877
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4873
            .ability = ABILITY_ANGER_SHELL,
#line 4874
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4876
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4878
                MOVE_BULLDOZE,
                MOVE_VISE_GRIP,
                MOVE_METAL_CLAW,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 4883
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4883
            .heldItem = ITEM_ASSAULT_VEST,
#line 4886
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 44, 84),
#line 4888
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4884
            .ability = ABILITY_LEVITATE,
#line 4885
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 4887
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4889
                MOVE_SLUDGE_BOMB,
                MOVE_BODY_SLAM,
                MOVE_VENOSHOCK,
                MOVE_GYRO_BALL,
            },
            },
        },
    },
#line 4894
    [DIFFICULTY_NORMAL][TRAINER_0AF40D0B] =
    {
#line 4895
        .trainerName = _("0AF40D0B"),
#line 4896
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4898
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4897
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4900
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4899
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4902
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4902
            .heldItem = ITEM_CHOICE_SCARF,
#line 4905
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4907
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4903
            .ability = ABILITY_SWIFT_SWIM,
#line 4904
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 4906
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4908
                MOVE_SURF,
            },
            },
            {
#line 4910
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4910
            .heldItem = ITEM_CHOPLE_BERRY,
#line 4913
            .ev = TRAINER_PARTY_EVS(52, 0, 76, 0, 0, 0),
#line 4915
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4911
            .ability = ABILITY_STORM_DRAIN,
#line 4912
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 4914
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4916
                MOVE_EARTH_POWER,
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_RECOVER,
            },
            },
        },
    },
#line 4921
    [DIFFICULTY_NORMAL][TRAINER_0B48C7D0] =
    {
#line 4922
        .trainerName = _("0B48C7D0"),
#line 4923
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4925
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4924
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4926
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4927
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4929
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4929
            .heldItem = ITEM_DRAGON_FANG,
#line 4932
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 132, 0, 0),
#line 4934
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4930
            .ability = ABILITY_PRESSURE,
#line 4931
            .lvl = 33,
            .ball = POKEBALL_COUNT,
#line 4933
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4935
                MOVE_ICE_FANG,
                MOVE_BITE,
                MOVE_DRAGON_BREATH,
                MOVE_ROCK_BLAST,
            },
            },
            {
#line 4940
            .species = SPECIES_SILICOBRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4940
            .heldItem = ITEM_SMOOTH_ROCK,
#line 4943
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 4945
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4941
            .ability = ABILITY_SAND_SPIT,
#line 4942
            .lvl = 34,
            .ball = POKEBALL_COUNT,
#line 4944
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4946
                MOVE_SAND_TOMB,
                MOVE_WRAP,
                MOVE_GLARE,
            },
            },
            {
#line 4950
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4950
            .heldItem = ITEM_WIDE_LENS,
#line 4953
            .ev = TRAINER_PARTY_EVS(36, 0, 88, 0, 0, 0),
#line 4955
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4951
            .ability = ABILITY_PRESSURE,
#line 4952
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4954
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4956
                MOVE_DREAM_EATER,
                MOVE_NIGHT_SHADE,
                MOVE_HYPNOSIS,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 4961
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4961
            .heldItem = ITEM_HARD_STONE,
#line 4964
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 4966
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4962
            .ability = ABILITY_SAND_VEIL,
#line 4963
            .lvl = 34,
            .ball = POKEBALL_COUNT,
#line 4965
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4967
                MOVE_FIRE_FANG,
                MOVE_ICE_FANG,
                MOVE_THUNDER_FANG,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 4972
    [DIFFICULTY_NORMAL][TRAINER_0C0A9B2F] =
    {
#line 4973
        .trainerName = _("0C0A9B2F"),
#line 4974
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4976
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4975
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4978
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4977
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4980
            .species = SPECIES_TIRTOUGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4980
            .heldItem = ITEM_RINDO_BERRY,
#line 4983
            .ev = TRAINER_PARTY_EVS(0, 32, 0, 0, 0, 96),
#line 4985
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4981
            .ability = ABILITY_SOLID_ROCK,
#line 4982
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 4984
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4986
                MOVE_ZEN_HEADBUTT,
                MOVE_ANCIENT_POWER,
                MOVE_AQUA_JET,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 4991
            .species = SPECIES_SHIELDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4991
            .heldItem = ITEM_RED_CARD,
#line 4994
            .ev = TRAINER_PARTY_EVS(48, 80, 0, 0, 0, 0),
#line 4996
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4992
            .ability = ABILITY_STURDY,
#line 4993
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4995
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4997
                MOVE_IRON_HEAD,
                MOVE_POWER_GEM,
                MOVE_METAL_BURST,
                MOVE_ROAR,
            },
            },
            {
#line 5002
            .species = SPECIES_KLEAVOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5002
            .heldItem = ITEM_KINGS_ROCK,
#line 5005
            .ev = TRAINER_PARTY_EVS(20, 0, 0, 0, 0, 108),
#line 5007
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5003
            .ability = ABILITY_SWARM,
#line 5004
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 5006
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5008
                MOVE_WING_ATTACK,
                MOVE_POUNCE,
                MOVE_SMACK_DOWN,
                MOVE_DOUBLE_HIT,
            },
            },
        },
    },
#line 5013
    [DIFFICULTY_NORMAL][TRAINER_0C543C80] =
    {
#line 5014
        .trainerName = _("0C543C80"),
#line 5015
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5017
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5019
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5018
        .mapSec = MAPSEC_ROUTE2,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5021
            .species = SPECIES_SIGILYPH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5021
            .heldItem = ITEM_FLAME_ORB,
#line 5024
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 80, 0, 0),
#line 5026
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5022
            .ability = ABILITY_MAGIC_GUARD,
#line 5023
            .lvl = 34,
            .ball = POKEBALL_COUNT,
#line 5025
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5027
                MOVE_AIR_CUTTER,
                MOVE_CONFUSION,
                MOVE_PSYCHO_SHIFT,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 5032
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5032
            .heldItem = ITEM_EJECT_BUTTON,
#line 5035
            .ev = TRAINER_PARTY_EVS(44, 0, 80, 0, 0, 0),
#line 5037
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5033
            .ability = ABILITY_FRIEND_GUARD,
#line 5034
            .lvl = 37,
            .ball = POKEBALL_COUNT,
#line 5036
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5038
                MOVE_FOLLOW_ME,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 5041
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5041
            .heldItem = ITEM_FOCUS_SASH,
#line 5044
            .ev = TRAINER_PARTY_EVS(0, 128, 0, 0, 0, 0),
#line 5046
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5042
            .ability = ABILITY_ARENA_TRAP,
#line 5043
            .lvl = 33,
            .ball = POKEBALL_COUNT,
#line 5045
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5047
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
                MOVE_BITE,
                MOVE_BUG_BITE,
            },
            },
            {
#line 5052
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5052
            .heldItem = ITEM_SITRUS_BERRY,
#line 5055
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 5057
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5053
            .ability = ABILITY_MUMMY,
#line 5054
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 5056
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5058
                MOVE_HEX,
                MOVE_WILL_O_WISP,
                MOVE_MEAN_LOOK,
                MOVE_CURSE,
            },
            },
        },
    },
#line 5063
    [DIFFICULTY_NORMAL][TRAINER_0C95C833] =
    {
#line 5064
        .trainerName = _("0C95C833"),
#line 5065
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5067
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5066
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5068
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5069
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5071
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5071
            .heldItem = ITEM_CHOICE_SCARF,
#line 5074
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 124, 0, 0),
#line 5076
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5072
            .ability = ABILITY_ROUGH_SKIN,
#line 5073
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 5075
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5077
                MOVE_FLIP_TURN,
            },
            },
            {
#line 5079
            .species = SPECIES_ARCTOZOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5079
            .heldItem = ITEM_SALAC_BERRY,
#line 5082
            .ev = TRAINER_PARTY_EVS(24, 0, 0, 100, 0, 0),
#line 5084
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5080
            .ability = ABILITY_VOLT_ABSORB,
#line 5081
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 5083
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5085
                MOVE_ROCK_TOMB,
                MOVE_ICY_WIND,
                MOVE_ELECTRO_BALL,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 5090
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5090
            .heldItem = ITEM_SOFT_SAND,
#line 5093
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 5095
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5091
            .ability = ABILITY_SHELL_ARMOR,
#line 5092
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 5094
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5096
                MOVE_BODY_SLAM,
                MOVE_FLAME_WHEEL,
                MOVE_BULLDOZE,
                MOVE_YAWN,
            },
            },
        },
    },
#line 5101
    [DIFFICULTY_NORMAL][TRAINER_0D416B2C] =
    {
#line 5102
        .trainerName = _("0D416B2C"),
#line 5103
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5105
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5106
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5107
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5109
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5109
            .heldItem = ITEM_EVIOLITE,
#line 5112
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 80, 60, 0),
#line 5114
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5110
            .ability = ABILITY_WIND_POWER,
#line 5111
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5113
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5114
                MOVE_DISCHARGE,
                MOVE_U_TURN,
                MOVE_TAILWIND,
            },
            },
            {
#line 5118
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5118
            .heldItem = ITEM_CELL_BATTERY,
#line 5121
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 60, 0, 0),
#line 5123
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5119
            .ability = ABILITY_LIMBER,
#line 5120
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5122
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5123
                MOVE_BLAZE_KICK,
                MOVE_SUCKER_PUNCH,
                MOVE_LOW_SWEEP,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 5128
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5128
            .heldItem = ITEM_TOXIC_ORB,
#line 5131
            .ev = TRAINER_PARTY_EVS(60, 0, 0, 0, 0, 80),
#line 5133
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5129
            .ability = ABILITY_MARVEL_SCALE,
#line 5130
            .lvl = 42,
            .ball = POKEBALL_COUNT,
#line 5132
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5133
                MOVE_BODY_SLAM,
                MOVE_WATER_PULSE,
                MOVE_BREAKING_SWIPE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 5138
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5138
            .heldItem = ITEM_IAPAPA_BERRY,
#line 5141
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 0, 0, 60),
#line 5143
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5139
            .ability = ABILITY_STURDY,
#line 5140
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5142
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5143
                MOVE_STOMPING_TANTRUM,
                MOVE_KNOCK_OFF,
                MOVE_FIRE_FANG,
                MOVE_COUNTER,
            },
            },
        },
    },
#line 5148
    [DIFFICULTY_NORMAL][TRAINER_0D4BA0F1] =
    {
#line 5149
        .trainerName = _("0D4BA0F1"),
#line 5150
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5152
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5151
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5153
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5154
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5156
            .species = SPECIES_BARRASKEWDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5156
            .heldItem = ITEM_ROCKY_HELMET,
#line 5159
            .ev = TRAINER_PARTY_EVS(0, 0, 40, 0, 0, 100),
#line 5161
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5157
            .ability = ABILITY_PROPELLER_TAIL,
#line 5158
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5160
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5161
                MOVE_DIVE,
                MOVE_DRILL_RUN,
                MOVE_BITE,
                MOVE_AQUA_JET,
            },
            },
            {
#line 5166
            .species = SPECIES_CRAMORANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5166
            .heldItem = ITEM_MYSTIC_WATER,
#line 5169
            .ev = TRAINER_PARTY_EVS(0, 0, 40, 100, 0, 0),
#line 5171
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5167
            .ability = ABILITY_GULP_MISSILE,
#line 5168
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5170
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5171
                MOVE_SURF,
                MOVE_DIVE,
                MOVE_DRILL_PECK,
                MOVE_STOCKPILE,
            },
            },
            {
#line 5176
            .species = SPECIES_PAWMOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5176
            .heldItem = ITEM_PUNCHING_GLOVE,
#line 5179
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 100, 0, 40),
#line 5181
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5177
            .ability = ABILITY_VOLT_ABSORB,
#line 5178
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5180
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5181
                MOVE_THUNDER_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_BRICK_BREAK,
                MOVE_UPPER_HAND,
            },
            },
        },
    },
#line 5186
    [DIFFICULTY_NORMAL][TRAINER_0DA021EF] =
    {
#line 5187
        .trainerName = _("Billy"),
#line 5188
        .trainerPic = TRAINER_PIC_FRONT_BIRD_KEEPER,
#line 5190
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5189
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5191
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5192
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_BIRD_KEEPER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5194
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5194
            .heldItem = ITEM_WACAN_BERRY,
#line 5197
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5199
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5195
            .ability = ABILITY_INTIMIDATE,
#line 5196
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5198
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5199
                MOVE_TAKE_DOWN,
                MOVE_FLY,
                MOVE_U_TURN,
                MOVE_PARTING_SHOT,
            },
            },
            {
#line 5204
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5204
            .heldItem = ITEM_FLAME_ORB,
#line 5207
            .ev = TRAINER_PARTY_EVS(60, 0, 0, 80, 0, 0),
#line 5209
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5205
            .ability = ABILITY_GUTS,
#line 5206
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5208
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5209
                MOVE_FACADE,
                MOVE_LASH_OUT,
                MOVE_DUAL_WINGBEAT,
                MOVE_TORMENT,
            },
            },
            {
#line 5214
            .species = SPECIES_SQUAWKABILLY_YELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5214
            .heldItem = ITEM_WIDE_LENS,
#line 5217
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 80, 0, 0),
#line 5219
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5215
            .ability = ABILITY_HUSTLE,
#line 5216
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5218
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5219
                MOVE_FOUL_PLAY,
                MOVE_AERIAL_ACE,
                MOVE_QUICK_ATTACK,
                MOVE_ROOST,
            },
            },
            {
#line 5224
            .species = SPECIES_SQUAWKABILLY_WHITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5224
            .heldItem = ITEM_LIFE_ORB,
#line 5227
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 80, 60, 0),
#line 5229
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5225
            .ability = ABILITY_SHEER_FORCE,
#line 5226
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5228
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5229
                MOVE_HURRICANE,
                MOVE_HEAT_WAVE,
                MOVE_POUNCE,
                MOVE_MIMIC,
            },
            },
        },
    },
#line 5234
    [DIFFICULTY_NORMAL][TRAINER_0E19F1A8] =
    {
#line 5235
        .trainerName = _("0E19F1A8"),
#line 5236
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5238
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5237
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5239
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5240
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5242
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5242
            .heldItem = ITEM_ADRENALINE_ORB,
#line 5245
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 60, 0, 0),
#line 5247
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5243
            .ability = ABILITY_KEEN_EYE,
#line 5244
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5246
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5247
                MOVE_DRAIN_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_BULLET_PUNCH,
            },
            },
            {
#line 5252
            .species = SPECIES_FLETCHINDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5252
            .heldItem = ITEM_FOCUS_SASH,
#line 5255
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 80, 0, 0),
#line 5257
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5253
            .ability = ABILITY_GALE_WINGS,
#line 5254
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5256
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5257
                MOVE_FLY,
                MOVE_STEEL_WING,
                MOVE_FIRE_SPIN,
                MOVE_TAILWIND,
            },
            },
            {
#line 5262
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5262
            .heldItem = ITEM_POWER_HERB,
#line 5265
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5267
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5263
            .ability = ABILITY_WIND_RIDER,
#line 5264
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5266
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5267
                MOVE_SOLAR_BLADE,
                MOVE_THIEF,
                MOVE_AERIAL_ACE,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 5272
            .species = SPECIES_NOIVERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5272
            .heldItem = ITEM_YACHE_BERRY,
#line 5275
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5277
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5273
            .ability = ABILITY_INFILTRATOR,
#line 5274
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5276
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5277
                MOVE_DRAGON_PULSE,
                MOVE_PSYCHIC_NOISE,
                MOVE_AIR_CUTTER,
                MOVE_TAILWIND,
            },
            },
        },
    },
#line 5282
    [DIFFICULTY_NORMAL][TRAINER_0E42221A] =
    {
#line 5283
        .trainerName = _("0E42221A"),
#line 5284
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5286
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5285
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5287
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5288
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5290
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5290
            .heldItem = ITEM_WEAKNESS_POLICY,
#line 5293
            .ev = TRAINER_PARTY_EVS(0, 0, 140, 0, 0, 0),
#line 5295
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5291
            .ability = ABILITY_TECHNICIAN,
#line 5292
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5294
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5295
                MOVE_BUG_BITE,
                MOVE_TRAILBLAZE,
                MOVE_DUAL_WINGBEAT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 5300
            .species = SPECIES_SWOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5300
            .heldItem = ITEM_MARANGA_BERRY,
#line 5303
            .ev = TRAINER_PARTY_EVS(0, 0, 60, 0, 0, 80),
#line 5305
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5301
            .ability = ABILITY_SIMPLE,
#line 5302
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5304
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5305
                MOVE_STORED_POWER,
                MOVE_CALM_MIND,
            },
            },
            {
#line 5308
            .species = SPECIES_GREEDENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5308
            .heldItem = ITEM_GANLON_BERRY,
#line 5311
            .ev = TRAINER_PARTY_EVS(0, 80, 60, 0, 0, 0),
#line 5312
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5309
            .ability = ABILITY_CHEEK_POUCH,
#line 5310
            .lvl = 45,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5312
                MOVE_BODY_PRESS,
                MOVE_BODY_SLAM,
                MOVE_SEED_BOMB,
                MOVE_STUFF_CHEEKS,
            },
            },
        },
    },
#line 5317
    [DIFFICULTY_NORMAL][TRAINER_0ED24EF1] =
    {
#line 5318
        .trainerName = _("0ED24EF1"),
#line 5319
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5321
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5320
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5322
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5323
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5325
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5325
            .heldItem = ITEM_YACHE_BERRY,
#line 5328
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 80, 0, 0),
#line 5330
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5326
            .ability = ABILITY_HYPER_CUTTER,
#line 5327
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5329
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5330
                MOVE_ROCK_SLIDE,
                MOVE_BULLDOZE,
                MOVE_FIRE_FANG,
                MOVE_TOXIC_SPIKES,
            },
            },
            {
#line 5335
            .species = SPECIES_SHUCKLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5335
            .heldItem = ITEM_LEFTOVERS,
#line 5338
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5340
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5336
            .ability = ABILITY_STURDY,
#line 5337
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5339
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5340
                MOVE_KNOCK_OFF,
                MOVE_INFESTATION,
                MOVE_WRAP,
                MOVE_PROTECT,
            },
            },
            {
#line 5345
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5345
            .heldItem = ITEM_ASSAULT_VEST,
#line 5348
            .ev = TRAINER_PARTY_EVS(0, 0, 60, 0, 0, 80),
#line 5350
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5346
            .ability = ABILITY_SHEER_FORCE,
#line 5347
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5349
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5350
                MOVE_LIQUIDATION,
                MOVE_NIGHT_SLASH,
                MOVE_METAL_CLAW,
                MOVE_HAMMER_ARM,
            },
            },
        },
    },
#line 5355
    [DIFFICULTY_NORMAL][TRAINER_0F03CF8D] =
    {
#line 5356
        .trainerName = _("0F03CF8D"),
#line 5357
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5359
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5358
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5361
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5360
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5363
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5363
            .heldItem = ITEM_SCOPE_LENS,
#line 5366
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 0, 60, 0),
#line 5368
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5364
            .ability = ABILITY_KEEN_EYE,
#line 5365
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5367
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5369
                MOVE_DUAL_WINGBEAT,
                MOVE_STEEL_WING,
                MOVE_TAILWIND,
                MOVE_UPROAR,
            },
            },
            {
#line 5374
            .species = SPECIES_BOMBIRDIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5374
            .heldItem = ITEM_CHARTI_BERRY,
#line 5377
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 0, 0, 60),
#line 5379
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5375
            .ability = ABILITY_ROCKY_PAYLOAD,
#line 5376
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5378
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5379
                MOVE_FOUL_PLAY,
                MOVE_ROCK_SLIDE,
                MOVE_ACROBATICS,
                MOVE_FEATHER_DANCE,
            },
            },
            {
#line 5384
            .species = SPECIES_ORICORIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5384
            .heldItem = ITEM_ABSORB_BULB,
#line 5387
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 60, 80),
#line 5389
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5385
            .ability = ABILITY_DANCER,
#line 5386
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5388
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5389
                MOVE_REVELATION_DANCE,
                MOVE_ACROBATICS,
                MOVE_SWORDS_DANCE,
                MOVE_TAILWIND,
            },
            },
            {
#line 5394
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5394
            .heldItem = ITEM_WIDE_LENS,
#line 5397
            .ev = TRAINER_PARTY_EVS(0, 0, 100, 40, 0, 0),
#line 5399
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5395
            .ability = ABILITY_KEEN_EYE,
#line 5396
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5398
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5399
                MOVE_DREAM_EATER,
                MOVE_AIR_SLASH,
                MOVE_PSYBEAM,
                MOVE_HYPNOSIS,
            },
            },
        },
    },
#line 5404
    [DIFFICULTY_NORMAL][TRAINER_0F3D8011] =
    {
#line 5405
        .trainerName = _("0F3D8011"),
#line 5406
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5408
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5407
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5409
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5410
        .mapSec = MAPSEC_ROUTE11,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 5412
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5412
            .heldItem = ITEM_EVIOLITE,
#line 5415
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5416
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5413
            .ability = ABILITY_FRIEND_GUARD,
#line 5414
            .lvl = 54,
            .ball = POKEBALL_COUNT,
#line 5417
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5418
                MOVE_FOLLOW_ME,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_NIGHT_SHADE,
            },
            },
            {
#line 5423
            .species = SPECIES_GREEDENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5423
            .heldItem = ITEM_SITRUS_BERRY,
#line 5426
            .ev = TRAINER_PARTY_EVS(252, 48, 0, 0, 0, 0),
#line 5427
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5424
            .ability = ABILITY_CHEEK_POUCH,
#line 5425
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 5428
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5429
                MOVE_BODY_PRESS,
                MOVE_BODY_SLAM,
                MOVE_COUNTER,
                MOVE_CRUNCH,
            },
            },
            {
#line 5434
            .species = SPECIES_ARBOLIVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5434
            .heldItem = ITEM_SITRUS_BERRY,
#line 5437
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 0, 252, 0),
#line 5438
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5435
            .ability = ABILITY_HARVEST,
#line 5436
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 5439
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5440
                MOVE_GIGA_DRAIN,
                MOVE_EARTH_POWER,
                MOVE_LEECH_SEED,
                MOVE_SYNTHESIS,
            },
            },
            {
#line 5445
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5445
            .heldItem = ITEM_SITRUS_BERRY,
#line 5448
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 48, 0, 0),
#line 5449
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5446
            .ability = ABILITY_PICKUP,
#line 5447
            .lvl = 52,
            .ball = POKEBALL_COUNT,
#line 5450
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5451
                MOVE_WILD_CHARGE,
                MOVE_PLAY_ROUGH,
                MOVE_SEED_BOMB,
                MOVE_FOLLOW_ME,
            },
            },
            {
#line 5456
            .species = SPECIES_POLTEAGEIST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5456
            .heldItem = ITEM_STARF_BERRY,
#line 5459
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 148, 152, 0),
#line 5461
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5457
            .ability = ABILITY_WEAK_ARMOR,
#line 5458
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 5460
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5462
                MOVE_TEATIME,
                MOVE_GIGA_DRAIN,
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
            },
            },
        },
    },
#line 5467
    [DIFFICULTY_NORMAL][TRAINER_0F3DB5D8] =
    {
#line 5468
        .trainerName = _("0F3DB5D8"),
#line 5469
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5471
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5470
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5473
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5472
        .mapSec = MAPSEC_ROUTE11,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5475
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5475
            .heldItem = ITEM_BLACK_SLUDGE,
#line 5478
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 252, 0, 0),
#line 5480
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5476
            .ability = ABILITY_CLEAR_BODY,
#line 5477
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5479
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5481
                MOVE_TOXIC_SPIKES,
                MOVE_VENOSHOCK,
                MOVE_HEX,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 5486
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5486
            .heldItem = ITEM_SPELL_TAG,
#line 5489
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 48, 0),
#line 5490
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5487
            .ability = ABILITY_LEVITATE,
#line 5488
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 5491
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5492
                MOVE_HEX,
                MOVE_DAZZLING_GLEAM,
                MOVE_MEAN_LOOK,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 5497
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5497
            .heldItem = ITEM_FOCUS_SASH,
#line 5500
            .ev = TRAINER_PARTY_EVS(48, 252, 0, 0, 0, 0),
#line 5501
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5498
            .ability = ABILITY_SNIPER,
#line 5499
            .lvl = 52,
            .ball = POKEBALL_COUNT,
#line 5502
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5503
                MOVE_VENOSHOCK,
                MOVE_TOXIC_THREAD,
                MOVE_FELL_STINGER,
                MOVE_SUCKER_PUNCH,
            },
            },
        },
    },
#line 5508
    [DIFFICULTY_NORMAL][TRAINER_0F5F82C3] =
    {
#line 5509
        .trainerName = _("0F5F82C3"),
#line 5510
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5512
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5511
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5514
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5513
        .mapSec = MAPSEC_ROUTE11,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5516
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5516
            .heldItem = ITEM_PAYAPA_BERRY,
#line 5519
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 48, 0, 0),
#line 5520
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5517
            .ability = ABILITY_POISON_TOUCH,
#line 5518
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 5521
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5522
                MOVE_FAKE_OUT,
                MOVE_SUCKER_PUNCH,
                MOVE_POISON_JAB,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 5527
    [DIFFICULTY_NORMAL][TRAINER_0FFBCCB9] =
    {
#line 5528
        .trainerName = _("0FFBCCB9"),
#line 5529
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5531
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5530
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5533
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5532
        .mapSec = MAPSEC_ROUTE11,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5535
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5535
            .heldItem = ITEM_WEAKNESS_POLICY,
#line 5538
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5539
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5536
            .ability = ABILITY_PRESSURE,
#line 5537
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5540
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5541
                MOVE_FUTURE_SIGHT,
                MOVE_SHADOW_SNEAK,
                MOVE_LEECH_LIFE,
                MOVE_PAIN_SPLIT,
            },
            },
            {
#line 5546
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5546
            .heldItem = ITEM_EXPERT_BELT,
#line 5549
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5550
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5547
            .ability = ABILITY_JUSTIFIED,
#line 5548
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5551
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5552
                MOVE_FUTURE_SIGHT,
                MOVE_DRAIN_PUNCH,
                MOVE_PSYCHO_CUT,
                MOVE_X_SCISSOR,
            },
            },
            {
#line 5557
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5557
            .heldItem = ITEM_FAIRY_FEATHER,
#line 5560
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 48, 0),
#line 5562
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5558
            .ability = ABILITY_TRACE,
#line 5559
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5561
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5563
                MOVE_FUTURE_SIGHT,
                MOVE_DRAINING_KISS,
                MOVE_PSYCHIC,
                MOVE_MYSTICAL_FIRE,
            },
            },
            {
#line 5568
            .species = SPECIES_ORBEETLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5568
            .heldItem = ITEM_LEFTOVERS,
#line 5571
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 48, 252, 0),
#line 5573
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5569
            .ability = ABILITY_SWARM,
#line 5570
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 5572
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5574
                MOVE_FUTURE_SIGHT,
                MOVE_BUG_BUZZ,
                MOVE_INFESTATION,
                MOVE_SUBSTITUTE,
            },
            },
        },
    },
#line 5579
    [DIFFICULTY_NORMAL][TRAINER_1075163A] =
    {
#line 5580
        .trainerName = _("1075163A"),
#line 5581
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5585
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5582
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5584
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5583
        .mapSec = MAPSEC_FORT_YOBU,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5587
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5587
            .heldItem = ITEM_ROSELI_BERRY,
#line 5590
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 48, 0),
#line 5591
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5588
            .ability = ABILITY_LEVITATE,
#line 5589
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5592
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5593
                MOVE_BELCH,
                MOVE_ACROBATICS,
                MOVE_DRAGON_BREATH,
                MOVE_TAILWIND,
            },
            },
            {
#line 5598
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5598
            .heldItem = ITEM_SALAC_BERRY,
#line 5601
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 48, 0, 0),
#line 5602
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5599
            .ability = ABILITY_STURDY,
#line 5600
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5603
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5604
                MOVE_FLAIL,
                MOVE_ROCK_TOMB,
                MOVE_WATERFALL,
                MOVE_SCALE_SHOT,
            },
            },
            {
#line 5609
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5609
            .heldItem = ITEM_IAPAPA_BERRY,
#line 5612
            .ev = TRAINER_PARTY_EVS(52, 248, 0, 0, 0, 0),
#line 5614
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5610
            .ability = ABILITY_GLUTTONY,
#line 5611
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5613
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5615
                MOVE_BELLY_DRUM,
                MOVE_EXTREME_SPEED,
                MOVE_THROAT_CHOP,
                MOVE_THUNDER_WAVE,
            },
            },
        },
    },
#line 5620
    [DIFFICULTY_NORMAL][TRAINER_10751EAA] =
    {
#line 5621
        .trainerName = _("10751EAA"),
#line 5622
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5626
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5623
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5625
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5624
        .mapSec = MAPSEC_FORT_YOBU,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 5628
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5628
            .heldItem = ITEM_PAYAPA_BERRY,
#line 5631
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 48),
#line 5633
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5629
            .ability = ABILITY_LEVITATE,
#line 5630
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5632
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5634
                MOVE_TOXIC_SPIKES,
                MOVE_SLUDGE_BOMB,
                MOVE_HEAT_WAVE,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 5639
            .species = SPECIES_PANGORO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5639
            .heldItem = ITEM_SITRUS_BERRY,
#line 5642
            .ev = TRAINER_PARTY_EVS(48, 252, 0, 0, 0, 0),
#line 5644
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5640
            .ability = ABILITY_SCRAPPY,
#line 5641
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5643
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5645
                MOVE_SUBSTITUTE,
                MOVE_CIRCLE_THROW,
                MOVE_DARKEST_LARIAT,
                MOVE_GUNK_SHOT,
            },
            },
            {
#line 5650
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5650
            .heldItem = ITEM_ASSAULT_VEST,
#line 5653
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 48, 252, 0),
#line 5654
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5651
            .ability = ABILITY_FLAME_BODY,
#line 5652
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5655
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5656
                MOVE_LAVA_PLUME,
                MOVE_SCORCHING_SANDS,
                MOVE_THUNDERBOLT,
                MOVE_FIRE_SPIN,
            },
            },
            {
#line 5661
            .species = SPECIES_CRAMORANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5661
            .heldItem = ITEM_FOCUS_SASH,
#line 5664
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 0, 252, 0),
#line 5666
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5662
            .ability = ABILITY_GULP_MISSILE,
#line 5663
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5665
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5667
                MOVE_AGILITY,
                MOVE_SURF,
                MOVE_ENDEAVOR,
                MOVE_WHIRLPOOL,
            },
            },
            {
#line 5672
            .species = SPECIES_SKUNTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5672
            .heldItem = ITEM_AIR_BALLOON,
#line 5675
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 48, 252, 0),
#line 5677
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5673
            .ability = ABILITY_AFTERMATH,
#line 5674
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5676
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5678
                MOVE_HEX,
                MOVE_VENOSHOCK,
                MOVE_NASTY_PLOT,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 5683
    [DIFFICULTY_NORMAL][TRAINER_10E3552B] =
    {
#line 5684
        .trainerName = _("10E3552B"),
#line 5685
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5687
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5686
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5688
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5689
        .mapSec = MAPSEC_FORT_YOBU,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5691
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5691
            .heldItem = ITEM_FOCUS_SASH,
#line 5694
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5695
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5692
            .ability = ABILITY_REGENERATOR,
#line 5693
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5696
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5697
                MOVE_FAKE_OUT,
                MOVE_DRAIN_PUNCH,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 5702
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5702
            .heldItem = ITEM_LEFTOVERS,
#line 5705
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 48),
#line 5707
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5703
            .ability = ABILITY_REGENERATOR,
#line 5704
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5706
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5708
                MOVE_SCALD,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
                MOVE_SLACK_OFF,
            },
            },
            {
#line 5713
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5713
            .heldItem = ITEM_EVIOLITE,
#line 5716
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5718
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5714
            .ability = ABILITY_SERENE_GRACE,
#line 5715
            .lvl = 48,
            .ball = POKEBALL_COUNT,
#line 5717
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5719
                MOVE_DRAINING_KISS,
                MOVE_ANCIENT_POWER,
                MOVE_WISH,
                MOVE_BATON_PASS,
            },
            },
            {
#line 5724
            .species = SPECIES_LIEPARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5724
            .heldItem = ITEM_NORMAL_GEM,
#line 5727
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5729
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5725
            .ability = ABILITY_UNBURDEN,
#line 5726
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5728
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5730
                MOVE_U_TURN,
                MOVE_FAKE_OUT,
                MOVE_DARK_PULSE,
                MOVE_PLAY_ROUGH,
            },
            },
        },
    },
#line 5735
    [DIFFICULTY_NORMAL][TRAINER_1114BC23] =
    {
#line 5736
        .trainerName = _("1114BC23"),
#line 5737
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5739
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5738
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5740
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5741
        .mapSec = MAPSEC_FORT_YOBU,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5743
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5743
            .heldItem = ITEM_TOXIC_ORB,
#line 5746
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 48, 0, 0),
#line 5748
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5744
            .ability = ABILITY_POISON_HEAL,
#line 5745
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5747
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5749
                MOVE_SUBSTITUTE,
                MOVE_DRAIN_PUNCH,
                MOVE_GIGA_DRAIN,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 5754
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5754
            .heldItem = ITEM_BIG_ROOT,
#line 5757
            .ev = TRAINER_PARTY_EVS(252, 0, 24, 0, 0, 24),
#line 5759
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5755
            .ability = ABILITY_DRY_SKIN,
#line 5756
            .lvl = 47,
            .ball = POKEBALL_COUNT,
#line 5758
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5760
                MOVE_LEECH_SEED,
                MOVE_LEECH_LIFE,
                MOVE_GIGA_DRAIN,
                MOVE_SPORE,
            },
            },
            {
#line 5765
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5765
            .heldItem = ITEM_LEFTOVERS,
#line 5768
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5770
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5766
            .ability = ABILITY_FLASH_FIRE,
#line 5767
            .lvl = 48,
            .ball = POKEBALL_COUNT,
#line 5769
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5771
                MOVE_BITTER_BLADE,
                MOVE_PHANTOM_FORCE,
                MOVE_WILL_O_WISP,
                MOVE_BULK_UP,
            },
            },
            {
#line 5776
            .species = SPECIES_FLORGES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5776
            .heldItem = ITEM_BABIRI_BERRY,
#line 5779
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5781
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5777
            .ability = ABILITY_FLOWER_VEIL,
#line 5778
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5780
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5782
                MOVE_MOONBLAST,
                MOVE_STORED_POWER,
                MOVE_CALM_MIND,
                MOVE_SYNTHESIS,
            },
            },
        },
    },
#line 5787
    [DIFFICULTY_NORMAL][TRAINER_114EB3AD] =
    {
#line 5788
        .trainerName = _("114EB3AD"),
#line 5789
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5791
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5790
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5792
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5793
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5795
            .species = SPECIES_PURUGLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5795
            .heldItem = ITEM_FOCUS_SASH,
#line 5798
            .ev = TRAINER_PARTY_EVS(0, 244, 124, 0, 0, 28),
#line 5800
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5796
            .ability = ABILITY_DEFIANT,
#line 5797
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5799
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5800
                MOVE_FAKE_OUT,
                MOVE_DOUBLE_TEAM,
                MOVE_BODY_SLAM,
                MOVE_SUPER_FANG,
            },
            },
            {
#line 5805
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5805
            .heldItem = ITEM_MUSCLE_BAND,
#line 5808
            .ev = TRAINER_PARTY_EVS(0, 248, 0, 0, 0, 148),
#line 5810
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5806
            .ability = ABILITY_TECHNICIAN,
#line 5807
            .lvl = 48,
            .ball = POKEBALL_COUNT,
#line 5809
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5810
                MOVE_MACH_PUNCH,
                MOVE_BULLET_SEED,
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 5815
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5815
            .heldItem = ITEM_RED_CARD,
#line 5818
            .ev = TRAINER_PARTY_EVS(0, 124, 0, 148, 124, 0),
#line 5820
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5816
            .ability = ABILITY_ILLUSION,
#line 5817
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5819
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5820
                MOVE_NIGHT_DAZE,
                MOVE_FLAMETHROWER,
                MOVE_EXTRASENSORY,
                MOVE_SLUDGE_BOMB,
            },
            },
            {
#line 5825
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5825
            .heldItem = ITEM_TOXIC_ORB,
#line 5828
            .ev = TRAINER_PARTY_EVS(0, 248, 52, 0, 0, 100),
#line 5830
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5826
            .ability = ABILITY_QUICK_FEET,
#line 5827
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 5829
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5830
                MOVE_ROAR,
                MOVE_ICE_PUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_PLAY_ROUGH,
            },
            },
        },
    },
#line 5835
    [DIFFICULTY_NORMAL][TRAINER_11EDE0DC] =
    {
#line 5836
        .trainerName = _("11EDE0DC"),
#line 5837
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5839
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5838
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5840
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5841
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5843
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5843
            .heldItem = ITEM_PAYAPA_BERRY,
#line 5846
            .ev = TRAINER_PARTY_EVS(0, 0, 88, 0, 216, 96),
#line 5848
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5844
            .ability = ABILITY_STICKY_HOLD,
#line 5845
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 5847
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5848
                MOVE_TOXIC_SPIKES,
                MOVE_SLUDGE_WAVE,
                MOVE_GIGA_DRAIN,
                MOVE_MUD_SHOT,
            },
            },
            {
#line 5853
            .species = SPECIES_SCRAFTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5853
            .heldItem = ITEM_ROSELI_BERRY,
#line 5856
            .ev = TRAINER_PARTY_EVS(0, 116, 132, 0, 0, 148),
#line 5858
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5854
            .ability = ABILITY_INTIMIDATE,
#line 5855
            .lvl = 48,
            .ball = POKEBALL_COUNT,
#line 5857
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5858
                MOVE_DRAGON_TAIL,
                MOVE_ZEN_HEADBUTT,
                MOVE_DRAGON_DANCE,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 5863
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5863
            .heldItem = ITEM_RED_CARD,
#line 5866
            .ev = TRAINER_PARTY_EVS(136, 0, 44, 0, 136, 76),
#line 5868
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5864
            .ability = ABILITY_SHEER_FORCE,
#line 5865
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 5867
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5868
                MOVE_ICE_BEAM,
                MOVE_VENOSHOCK,
                MOVE_EARTH_POWER,
                MOVE_TOXIC_SPIKES,
            },
            },
            {
#line 5873
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5873
            .heldItem = ITEM_SCOPE_LENS,
#line 5876
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 148, 0),
#line 5878
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5874
            .ability = ABILITY_SUPER_LUCK,
#line 5875
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5877
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5878
                MOVE_HEX,
                MOVE_HEAT_WAVE,
                MOVE_AIR_CUTTER,
                MOVE_PSYCHIC_NOISE,
            },
            },
        },
    },
#line 5883
    [DIFFICULTY_NORMAL][TRAINER_120A20F6] =
    {
#line 5884
        .trainerName = _("120A20F6"),
#line 5885
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5887
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5886
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5888
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5889
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5891
            .species = SPECIES_KLEFKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5891
            .heldItem = ITEM_RED_CARD,
#line 5894
            .ev = TRAINER_PARTY_EVS(48, 0, 84, 0, 116, 148),
#line 5896
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5892
            .ability = ABILITY_PRANKSTER,
#line 5893
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 5895
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5896
                MOVE_SPIKES,
                MOVE_STEEL_BEAM,
                MOVE_MISTY_TERRAIN,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 5901
            .species = SPECIES_SLURPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5901
            .heldItem = ITEM_MISTY_SEED,
#line 5904
            .ev = TRAINER_PARTY_EVS(116, 0, 28, 252, 0, 0),
#line 5906
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5902
            .ability = ABILITY_UNBURDEN,
#line 5903
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5905
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5906
                MOVE_STICKY_WEB,
                MOVE_SURF,
                MOVE_FLAMETHROWER,
                MOVE_ENERGY_BALL,
            },
            },
            {
#line 5911
            .species = SPECIES_MINIOR_INDIGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5911
            .heldItem = ITEM_SITRUS_BERRY,
#line 5914
            .ev = TRAINER_PARTY_EVS(0, 148, 0, 248, 0, 0),
#line 5916
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5912
            .ability = ABILITY_SHIELDS_DOWN,
#line 5913
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 5915
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5916
                MOVE_STEALTH_ROCK,
                MOVE_ANCIENT_POWER,
                MOVE_SCORCHING_SANDS,
                MOVE_ACROBATICS,
            },
            },
            {
#line 5921
            .species = SPECIES_PANGORO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5921
            .heldItem = ITEM_LIECHI_BERRY,
#line 5924
            .ev = TRAINER_PARTY_EVS(148, 116, 36, 0, 0, 100),
#line 5926
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5922
            .ability = ABILITY_SCRAPPY,
#line 5923
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5925
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5926
                MOVE_CIRCLE_THROW,
                MOVE_LOW_KICK,
                MOVE_EARTHQUAKE,
                MOVE_DARKEST_LARIAT,
            },
            },
        },
    },
#line 5931
    [DIFFICULTY_NORMAL][TRAINER_13113EC0] =
    {
#line 5932
        .trainerName = _("13113EC0"),
#line 5933
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5935
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5934
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5936
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5937
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5939
            .species = SPECIES_VIKAVOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5939
            .heldItem = ITEM_QUICK_CLAW,
#line 5942
            .ev = TRAINER_PARTY_EVS(184, 0, 0, 0, 208, 8),
#line 5944
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5940
            .ability = ABILITY_LEVITATE,
#line 5941
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5943
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5945
                MOVE_STICKY_WEB,
                MOVE_VOLT_SWITCH,
                MOVE_ENERGY_BALL,
                MOVE_BUG_BUZZ,
            },
            },
            {
#line 5950
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5950
            .heldItem = ITEM_RED_CARD,
#line 5953
            .ev = TRAINER_PARTY_EVS(248, 0, 140, 0, 0, 8),
#line 5955
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5951
            .ability = ABILITY_HEATPROOF,
#line 5952
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 5954
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5956
                MOVE_STEALTH_ROCK,
                MOVE_ZEN_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 5961
            .species = SPECIES_URSALUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5961
            .heldItem = ITEM_BERSERK_GENE,
#line 5964
            .ev = TRAINER_PARTY_EVS(156, 124, 116, 0, 0, 0),
#line 5966
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5962
            .ability = ABILITY_UNNERVE,
#line 5963
            .lvl = 48,
            .ball = POKEBALL_COUNT,
#line 5965
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5967
                MOVE_PLAY_ROUGH,
                MOVE_BRICK_BREAK,
                MOVE_BODY_SLAM,
                MOVE_BULLDOZE,
            },
            },
        },
    },
#line 5972
    [DIFFICULTY_NORMAL][TRAINER_1387ABBC] =
    {
#line 5973
        .trainerName = _("1387ABBC"),
#line 5974
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5976
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5975
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5977
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5978
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5980
            .species = SPECIES_ORBEETLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5980
            .heldItem = ITEM_RED_CARD,
#line 5983
            .ev = TRAINER_PARTY_EVS(136, 0, 40, 224, 0, 0),
#line 5985
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5981
            .ability = ABILITY_SWARM,
#line 5982
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5984
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5986
                MOVE_STICKY_WEB,
                MOVE_HYPNOSIS,
                MOVE_PSYCHIC_NOISE,
                MOVE_BUG_BUZZ,
            },
            },
            {
#line 5991
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5991
            .heldItem = ITEM_EVIOLITE,
#line 5994
            .ev = TRAINER_PARTY_EVS(184, 0, 108, 0, 0, 104),
#line 5996
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5992
            .ability = ABILITY_DEFIANT,
#line 5993
            .lvl = 48,
            .ball = POKEBALL_COUNT,
#line 5995
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5997
                MOVE_STEALTH_ROCK,
                MOVE_STONE_EDGE,
                MOVE_DRAIN_PUNCH,
                MOVE_POISON_JAB,
            },
            },
        },
    },
#line 6002
    [DIFFICULTY_NORMAL][TRAINER_148A3C6B] =
    {
#line 6003
        .trainerName = _("148A3C6B"),
#line 6004
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6006
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6005
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6007
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6008
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6010
            .species = SPECIES_TOEDSCRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6010
            .heldItem = ITEM_YACHE_BERRY,
#line 6013
            .ev = TRAINER_PARTY_EVS(140, 0, 72, 0, 104, 80),
#line 6015
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6011
            .ability = ABILITY_MYCELIUM_MIGHT,
#line 6012
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 6014
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6016
                MOVE_SPORE,
                MOVE_TOXIC_SPIKES,
                MOVE_EARTH_POWER,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6021
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6021
            .heldItem = ITEM_BLUNDER_POLICY,
#line 6024
            .ev = TRAINER_PARTY_EVS(80, 0, 112, 52, 152, 0),
#line 6026
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6022
            .ability = ABILITY_INSOMNIA,
#line 6023
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 6025
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6027
                MOVE_HYPNOSIS,
                MOVE_HURRICANE,
                MOVE_WHIRLWIND,
                MOVE_EXTRASENSORY,
            },
            },
        },
    },
#line 6032
    [DIFFICULTY_NORMAL][TRAINER_14C5EE6C] =
    {
#line 6033
        .trainerName = _("14C5EE6C"),
#line 6034
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6036
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6035
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6037
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6038
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6040
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6040
            .heldItem = ITEM_WACAN_BERRY,
#line 6043
            .ev = TRAINER_PARTY_EVS(0, 144, 0, 252, 0, 4),
#line 6045
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6041
            .ability = ABILITY_MOXIE,
#line 6042
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 6044
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6046
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
                MOVE_AQUA_TAIL,
                MOVE_ICE_FANG,
            },
            },
            {
#line 6051
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6051
            .heldItem = ITEM_SITRUS_BERRY,
#line 6054
            .ev = TRAINER_PARTY_EVS(252, 0, 88, 0, 0, 60),
#line 6055
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6052
            .ability = ABILITY_CUTE_CHARM,
#line 6053
            .lvl = 48,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6056
                MOVE_FOLLOW_ME,
                MOVE_HELPING_HAND,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
            },
            },
        },
    },
#line 6061
    [DIFFICULTY_NORMAL][TRAINER_1508BB71] =
    {
#line 6062
        .trainerName = _("1508BB71"),
#line 6063
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6065
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6064
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6066
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6067
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6069
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6069
            .heldItem = ITEM_LEFTOVERS,
#line 6072
            .ev = TRAINER_PARTY_EVS(208, 0, 184, 0, 8, 0),
#line 6074
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6070
            .ability = ABILITY_SNOW_CLOAK,
#line 6071
            .lvl = 47,
            .ball = POKEBALL_COUNT,
#line 6073
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6075
                MOVE_SNOWSCAPE,
                MOVE_BLIZZARD,
                MOVE_REST,
                MOVE_REFLECT,
            },
            },
            {
#line 6080
            .species = SPECIES_BEARTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6080
            .heldItem = ITEM_STARF_BERRY,
#line 6083
            .ev = TRAINER_PARTY_EVS(0, 252, 72, 0, 0, 72),
#line 6085
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6081
            .ability = ABILITY_SNOW_CLOAK,
#line 6082
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 6084
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6086
                MOVE_SNOWSCAPE,
                MOVE_AVALANCHE,
                MOVE_SHEER_COLD,
            },
            },
        },
    },
#line 6090
    [DIFFICULTY_NORMAL][TRAINER_1510C80A] =
    {
#line 6091
        .trainerName = _("1510C80A"),
#line 6092
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6094
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6093
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6095
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6096
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6098
            .species = SPECIES_MUDSDALE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6098
            .heldItem = ITEM_SMOOTH_ROCK,
#line 6101
            .ev = TRAINER_PARTY_EVS(156, 0, 244, 0, 0, 0),
#line 6103
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6099
            .ability = ABILITY_STAMINA,
#line 6100
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 6102
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6104
                MOVE_SANDSTORM,
                MOVE_BODY_PRESS,
                MOVE_COUNTER,
                MOVE_CURSE,
            },
            },
            {
#line 6109
            .species = SPECIES_SANDACONDA,
#line 6109
            .gender = TRAINER_MON_MALE,
#line 6109
            .heldItem = ITEM_RED_CARD,
#line 6112
            .ev = TRAINER_PARTY_EVS(152, 88, 156, 0, 0, 0),
#line 6113
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6110
            .ability = ABILITY_SAND_SPIT,
#line 6111
            .lvl = 44,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6114
                MOVE_HURRICANE,
                MOVE_DRILL_RUN,
                MOVE_FIRE_FANG,
                MOVE_SKITTER_SMACK,
            },
            },
            {
#line 6119
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6119
            .heldItem = ITEM_LIFE_ORB,
#line 6122
            .ev = TRAINER_PARTY_EVS(0, 0, 148, 0, 252, 0),
#line 6123
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6120
            .ability = ABILITY_MAGIC_GUARD,
#line 6121
            .lvl = 47,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6124
                MOVE_PSYCHIC,
                MOVE_THUNDER_PUNCH,
                MOVE_SHADOW_BALL,
                MOVE_ENERGY_BALL,
            },
            },
        },
    },
#line 6129
    [DIFFICULTY_NORMAL][TRAINER_15598A38] =
    {
#line 6130
        .trainerName = _("15598A38"),
#line 6131
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6133
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6132
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6134
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6135
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6137
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6137
            .heldItem = ITEM_EXPERT_BELT,
#line 6140
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 144, 0, 0),
#line 6142
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6138
            .ability = ABILITY_PURE_POWER,
#line 6139
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 6141
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6143
                MOVE_HIGH_JUMP_KICK,
                MOVE_POISON_JAB,
                MOVE_ZEN_HEADBUTT,
                MOVE_FIRE_PUNCH,
            },
            },
            {
#line 6148
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6148
            .heldItem = ITEM_EXPERT_BELT,
#line 6151
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 148, 0, 0),
#line 6153
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6149
            .ability = ABILITY_PURE_POWER,
#line 6150
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 6152
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6154
                MOVE_ICE_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_ZEN_HEADBUTT,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 6159
            .species = SPECIES_LOKIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6159
            .heldItem = ITEM_EXPERT_BELT,
#line 6162
            .ev = TRAINER_PARTY_EVS(0, 204, 0, 196, 0, 0),
#line 6164
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6160
            .ability = ABILITY_TINTED_LENS,
#line 6161
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 6163
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6165
                MOVE_BUG_BITE,
                MOVE_AERIAL_ACE,
                MOVE_LASH_OUT,
                MOVE_DOUBLE_KICK,
            },
            },
        },
    },
#line 6170
    [DIFFICULTY_NORMAL][TRAINER_15A66566] =
    {
#line 6171
        .trainerName = _("15A66566"),
#line 6172
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6174
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6175
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6176
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6178
            .species = SPECIES_HAWLUCHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6178
            .heldItem = ITEM_ORAN_BERRY,
#line 6181
            .ev = TRAINER_PARTY_EVS(252, 0, 72, 0, 0, 72),
#line 6183
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6179
            .ability = ABILITY_UNBURDEN,
#line 6180
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 6182
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6184
                MOVE_TAUNT,
                MOVE_ENCORE,
                MOVE_HELPING_HAND,
                MOVE_BRICK_BREAK,
            },
            },
            {
#line 6189
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6189
            .heldItem = ITEM_KINGS_ROCK,
#line 6192
            .ev = TRAINER_PARTY_EVS(76, 252, 72, 0, 0, 0),
#line 6194
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6190
            .ability = ABILITY_ARENA_TRAP,
#line 6191
            .lvl = 40,
            .ball = POKEBALL_COUNT,
#line 6193
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6195
                MOVE_QUICK_ATTACK,
                MOVE_BITE,
                MOVE_STONE_EDGE,
                MOVE_BULLDOZE,
            },
            },
            {
#line 6200
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6200
            .heldItem = ITEM_CHOICE_BAND,
#line 6203
            .ev = TRAINER_PARTY_EVS(76, 252, 72, 0, 0, 0),
#line 6205
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6201
            .ability = ABILITY_ARENA_TRAP,
#line 6202
            .lvl = 40,
            .ball = POKEBALL_COUNT,
#line 6204
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6206
                MOVE_QUICK_ATTACK,
                MOVE_BUG_BITE,
                MOVE_STONE_EDGE,
                MOVE_BULLDOZE,
            },
            },
        },
    },
#line 6211
    [DIFFICULTY_NORMAL][TRAINER_15C87858] =
    {
#line 6212
        .trainerName = _("15C87858"),
#line 6213
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6215
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6214
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6216
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6217
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6219
            .species = SPECIES_SWADLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6222
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6220
            .ability = ABILITY_OVERCOAT,
#line 6221
            .lvl = 45,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6223
                MOVE_LIGHT_SCREEN,
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6228
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6231
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6229
            .ability = ABILITY_HYPER_CUTTER,
#line 6230
            .lvl = 41,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6232
                MOVE_TOXIC,
                MOVE_PROTECT,
                MOVE_SUBSTITUTE,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 6237
            .species = SPECIES_TOEDSCRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6240
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6238
            .ability = ABILITY_MYCELIUM_MIGHT,
#line 6239
            .lvl = 44,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6241
                MOVE_SUBSTITUTE,
                MOVE_LEECH_SEED,
                MOVE_PROTECT,
                MOVE_HEX,
            },
            },
        },
    },
#line 6246
    [DIFFICULTY_NORMAL][TRAINER_1648CE6E] =
    {
#line 6247
        .trainerName = _("1648CE6E"),
#line 6248
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6250
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6249
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6251
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6252
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6254
            .species = SPECIES_VANILLUXE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6254
            .heldItem = ITEM_ICY_ROCK,
#line 6257
            .ev = TRAINER_PARTY_EVS(132, 0, 76, 0, 172, 16),
#line 6259
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6255
            .ability = ABILITY_SNOW_WARNING,
#line 6256
            .lvl = 42,
            .ball = POKEBALL_COUNT,
#line 6258
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6260
                MOVE_MIST,
                MOVE_BLIZZARD,
                MOVE_EXPLOSION,
            },
            },
            {
#line 6264
            .species = SPECIES_CHANSEY,
#line 6264
            .gender = TRAINER_MON_FEMALE,
#line 6264
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 6267
            .ev = TRAINER_PARTY_EVS(0, 0, 144, 0, 252, 0),
#line 6269
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6265
            .ability = ABILITY_SERENE_GRACE,
#line 6266
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 6268
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6270
                MOVE_SNOWSCAPE,
                MOVE_BLIZZARD,
                MOVE_HEALING_WISH,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 6275
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6275
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 6278
            .ev = TRAINER_PARTY_EVS(64, 0, 44, 0, 252, 40),
#line 6280
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6276
            .ability = ABILITY_WATER_ABSORB,
#line 6277
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 6279
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6281
                MOVE_SNOWSCAPE,
                MOVE_BLIZZARD,
                MOVE_PSYCHIC_NOISE,
                MOVE_FREEZE_DRY,
            },
            },
            {
#line 6286
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6286
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 6289
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 148, 252, 0),
#line 6291
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6287
            .ability = ABILITY_SWIFT_SWIM,
#line 6288
            .lvl = 41,
            .ball = POKEBALL_COUNT,
#line 6290
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6292
                MOVE_SNOWSCAPE,
                MOVE_BLIZZARD,
                MOVE_BOUNCE,
                MOVE_SHELL_SMASH,
            },
            },
        },
    },
#line 6297
    [DIFFICULTY_NORMAL][TRAINER_1710375D] =
    {
#line 6298
        .trainerName = _("1710375D"),
#line 6299
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6301
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6300
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6302
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6303
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6305
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6305
            .heldItem = ITEM_AIR_BALLOON,
#line 6308
            .ev = TRAINER_PARTY_EVS(104, 252, 44, 0, 0, 0),
#line 6309
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6306
            .ability = ABILITY_MOLD_BREAKER,
#line 6307
            .lvl = 45,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6310
                MOVE_EARTHQUAKE,
                MOVE_SWORDS_DANCE,
                MOVE_RAPID_SPIN,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 6315
            .species = SPECIES_FRAXURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6315
            .heldItem = ITEM_SITRUS_BERRY,
#line 6318
            .ev = TRAINER_PARTY_EVS(92, 108, 172, 0, 0, 28),
#line 6319
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6316
            .ability = ABILITY_MOLD_BREAKER,
#line 6317
            .lvl = 40,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6320
                MOVE_STOMPING_TANTRUM,
                MOVE_SWORDS_DANCE,
                MOVE_SCALE_SHOT,
                MOVE_BREAKING_SWIPE,
            },
            },
            {
#line 6325
            .species = SPECIES_PANGORO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6325
            .heldItem = ITEM_EXPERT_BELT,
#line 6328
            .ev = TRAINER_PARTY_EVS(108, 248, 44, 0, 0, 0),
#line 6329
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6326
            .ability = ABILITY_MOLD_BREAKER,
#line 6327
            .lvl = 46,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6330
                MOVE_DRAIN_PUNCH,
                MOVE_THIEF,
                MOVE_ICE_PUNCH,
                MOVE_BULLET_PUNCH,
            },
            },
            {
#line 6335
            .species = SPECIES_HAWLUCHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6335
            .heldItem = ITEM_PAYAPA_BERRY,
#line 6338
            .ev = TRAINER_PARTY_EVS(68, 248, 0, 0, 0, 80),
#line 6339
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6336
            .ability = ABILITY_MOLD_BREAKER,
#line 6337
            .lvl = 45,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6340
                MOVE_SWORDS_DANCE,
                MOVE_DUAL_WINGBEAT,
                MOVE_FLYING_PRESS,
                MOVE_GRASS_KNOT,
            },
            },
        },
    },
#line 6345
    [DIFFICULTY_NORMAL][TRAINER_17DCC938] =
    {
#line 6346
        .trainerName = _("17DCC938"),
#line 6347
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6349
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6348
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6350
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6351
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6353
            .species = SPECIES_HONEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6353
            .heldItem = ITEM_ORAN_BERRY,
#line 6356
            .ev = TRAINER_PARTY_EVS(80, 160, 80, 0, 0, 80),
#line 6357
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6354
            .ability = ABILITY_NO_GUARD,
#line 6355
            .lvl = 35,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6358
                MOVE_ROCK_SLIDE,
                MOVE_FURY_CUTTER,
                MOVE_STEEL_BEAM,
            },
            },
            {
#line 6362
            .species = SPECIES_DOUBLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6362
            .heldItem = ITEM_SITRUS_BERRY,
#line 6365
            .ev = TRAINER_PARTY_EVS(172, 92, 132, 0, 0, 0),
#line 6366
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6363
            .ability = ABILITY_NO_GUARD,
#line 6364
            .lvl = 40,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6367
                MOVE_BRICK_BREAK,
                MOVE_GYRO_BALL,
                MOVE_NIGHT_SLASH,
                MOVE_BRUTAL_SWING,
            },
            },
            {
#line 6372
            .species = SPECIES_AEGISLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6372
            .heldItem = ITEM_AIR_BALLOON,
#line 6375
            .ev = TRAINER_PARTY_EVS(108, 252, 36, 0, 0, 0),
#line 6377
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6373
            .ability = ABILITY_STANCE_CHANGE,
#line 6374
            .lvl = 42,
            .ball = POKEBALL_COUNT,
#line 6376
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6378
                MOVE_KINGS_SHIELD,
                MOVE_SWORDS_DANCE,
                MOVE_SHADOW_SNEAK,
                MOVE_CLOSE_COMBAT,
            },
            },
            {
#line 6383
            .species = SPECIES_AEGISLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6383
            .heldItem = ITEM_LEFTOVERS,
#line 6386
            .ev = TRAINER_PARTY_EVS(108, 0, 36, 0, 252, 0),
#line 6388
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6384
            .ability = ABILITY_STANCE_CHANGE,
#line 6385
            .lvl = 42,
            .ball = POKEBALL_COUNT,
#line 6387
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6389
                MOVE_KINGS_SHIELD,
                MOVE_SHADOW_BALL,
                MOVE_SUBSTITUTE,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 6394
    [DIFFICULTY_NORMAL][TRAINER_188A6F20] =
    {
#line 6395
        .trainerName = _("188A6F20"),
#line 6396
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6397
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6399
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6401
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6400
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6402
    [DIFFICULTY_NORMAL][TRAINER_1932C509] =
    {
#line 6403
        .trainerName = _("1932C509"),
#line 6404
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6405
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6407
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6409
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6408
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6410
    [DIFFICULTY_NORMAL][TRAINER_19477C78] =
    {
#line 6411
        .trainerName = _("19477C78"),
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
    [DIFFICULTY_NORMAL][TRAINER_19C5BAD7] =
    {
#line 6419
        .trainerName = _("19C5BAD7"),
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
    [DIFFICULTY_NORMAL][TRAINER_19CD0726] =
    {
#line 6427
        .trainerName = _("19CD0726"),
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
    [DIFFICULTY_NORMAL][TRAINER_19D7682B] =
    {
#line 6435
        .trainerName = _("19D7682B"),
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
    [DIFFICULTY_NORMAL][TRAINER_1A2CA162] =
    {
#line 6443
        .trainerName = _("1A2CA162"),
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
    [DIFFICULTY_NORMAL][TRAINER_1A763631] =
    {
#line 6451
        .trainerName = _("1A763631"),
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
    [DIFFICULTY_NORMAL][TRAINER_1AE5CAF7] =
    {
#line 6459
        .trainerName = _("1AE5CAF7"),
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
    [DIFFICULTY_NORMAL][TRAINER_1AE89BEB] =
    {
#line 6467
        .trainerName = _("1AE89BEB"),
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
    [DIFFICULTY_NORMAL][TRAINER_1AEA3CEA] =
    {
#line 6475
        .trainerName = _("1AEA3CEA"),
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
    [DIFFICULTY_NORMAL][TRAINER_1B517ABD] =
    {
#line 6483
        .trainerName = _("1B517ABD"),
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
    [DIFFICULTY_NORMAL][TRAINER_1B616469] =
    {
#line 6491
        .trainerName = _("1B616469"),
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
    [DIFFICULTY_NORMAL][TRAINER_1BA35D11] =
    {
#line 6499
        .trainerName = _("1BA35D11"),
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
    [DIFFICULTY_NORMAL][TRAINER_1BB1218F] =
    {
#line 6507
        .trainerName = _("1BB1218F"),
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
    [DIFFICULTY_NORMAL][TRAINER_1BC45966] =
    {
#line 6515
        .trainerName = _("1BC45966"),
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
    [DIFFICULTY_NORMAL][TRAINER_1C2B088C] =
    {
#line 6523
        .trainerName = _("1C2B088C"),
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
    [DIFFICULTY_NORMAL][TRAINER_1C6CA7F6] =
    {
#line 6531
        .trainerName = _("1C6CA7F6"),
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
    [DIFFICULTY_NORMAL][TRAINER_1CBE4FB1] =
    {
#line 6539
        .trainerName = _("1CBE4FB1"),
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
    [DIFFICULTY_NORMAL][TRAINER_1CBFAF10] =
    {
#line 6547
        .trainerName = _("1CBFAF10"),
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
    [DIFFICULTY_NORMAL][TRAINER_1CC4D5D6] =
    {
#line 6555
        .trainerName = _("1CC4D5D6"),
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
    [DIFFICULTY_NORMAL][TRAINER_1D63E5A1] =
    {
#line 6563
        .trainerName = _("1D63E5A1"),
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
    [DIFFICULTY_NORMAL][TRAINER_1D7A6DED] =
    {
#line 6571
        .trainerName = _("1D7A6DED"),
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
    [DIFFICULTY_NORMAL][TRAINER_1D93B10D] =
    {
#line 6579
        .trainerName = _("1D93B10D"),
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
    [DIFFICULTY_NORMAL][TRAINER_1DD07C78] =
    {
#line 6587
        .trainerName = _("1DD07C78"),
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
    [DIFFICULTY_NORMAL][TRAINER_1E5E6E80] =
    {
#line 6595
        .trainerName = _("1E5E6E80"),
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
    [DIFFICULTY_NORMAL][TRAINER_1EE34E30] =
    {
#line 6603
        .trainerName = _("1EE34E30"),
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
    [DIFFICULTY_NORMAL][TRAINER_1F24A6B1] =
    {
#line 6611
        .trainerName = _("1F24A6B1"),
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
    [DIFFICULTY_NORMAL][TRAINER_1F2A70D3] =
    {
#line 6619
        .trainerName = _("1F2A70D3"),
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
    [DIFFICULTY_NORMAL][TRAINER_1FD08020] =
    {
#line 6627
        .trainerName = _("1FD08020"),
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
    [DIFFICULTY_NORMAL][TRAINER_200650CA] =
    {
#line 6635
        .trainerName = _("200650CA"),
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
    [DIFFICULTY_NORMAL][TRAINER_20170FA5] =
    {
#line 6643
        .trainerName = _("20170FA5"),
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
    [DIFFICULTY_NORMAL][TRAINER_20993B87] =
    {
#line 6651
        .trainerName = _("20993B87"),
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
    [DIFFICULTY_NORMAL][TRAINER_20A10A97] =
    {
#line 6659
        .trainerName = _("20A10A97"),
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
    [DIFFICULTY_NORMAL][TRAINER_20A6F3A6] =
    {
#line 6667
        .trainerName = _("20A6F3A6"),
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
    [DIFFICULTY_NORMAL][TRAINER_20DC389D] =
    {
#line 6675
        .trainerName = _("20DC389D"),
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
    [DIFFICULTY_NORMAL][TRAINER_2177173C] =
    {
#line 6683
        .trainerName = _("2177173C"),
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
    [DIFFICULTY_NORMAL][TRAINER_2180E5CD] =
    {
#line 6691
        .trainerName = _("2180E5CD"),
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
    [DIFFICULTY_NORMAL][TRAINER_21EB8B2C] =
    {
#line 6699
        .trainerName = _("21EB8B2C"),
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
    [DIFFICULTY_NORMAL][TRAINER_22BA389B] =
    {
#line 6707
        .trainerName = _("22BA389B"),
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
    [DIFFICULTY_NORMAL][TRAINER_22DD5E2B] =
    {
#line 6715
        .trainerName = _("22DD5E2B"),
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
    [DIFFICULTY_NORMAL][TRAINER_22E7DE36] =
    {
#line 6723
        .trainerName = _("22E7DE36"),
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
    [DIFFICULTY_NORMAL][TRAINER_23C3170F] =
    {
#line 6731
        .trainerName = _("23C3170F"),
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
    [DIFFICULTY_NORMAL][TRAINER_23F50BC3] =
    {
#line 6739
        .trainerName = _("23F50BC3"),
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
    [DIFFICULTY_NORMAL][TRAINER_2434A25C] =
    {
#line 6747
        .trainerName = _("2434A25C"),
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
    [DIFFICULTY_NORMAL][TRAINER_245235C9] =
    {
#line 6755
        .trainerName = _("245235C9"),
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
    [DIFFICULTY_NORMAL][TRAINER_246CBBD5] =
    {
#line 6763
        .trainerName = _("246CBBD5"),
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
    [DIFFICULTY_NORMAL][TRAINER_247FE019] =
    {
#line 6771
        .trainerName = _("247FE019"),
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
    [DIFFICULTY_NORMAL][TRAINER_24AAFD0D] =
    {
#line 6779
        .trainerName = _("24AAFD0D"),
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
    [DIFFICULTY_NORMAL][TRAINER_24AC96DF] =
    {
#line 6787
        .trainerName = _("24AC96DF"),
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
    [DIFFICULTY_NORMAL][TRAINER_2561CB61] =
    {
#line 6795
        .trainerName = _("2561CB61"),
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
    [DIFFICULTY_NORMAL][TRAINER_26268FB4] =
    {
#line 6803
        .trainerName = _("26268FB4"),
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
    [DIFFICULTY_NORMAL][TRAINER_265174A6] =
    {
#line 6811
        .trainerName = _("265174A6"),
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
    [DIFFICULTY_NORMAL][TRAINER_272FA5B8] =
    {
#line 6819
        .trainerName = _("272FA5B8"),
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
    [DIFFICULTY_NORMAL][TRAINER_27B23C10] =
    {
#line 6827
        .trainerName = _("27B23C10"),
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
    [DIFFICULTY_NORMAL][TRAINER_27CEF8F2] =
    {
#line 6835
        .trainerName = _("27CEF8F2"),
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
    [DIFFICULTY_NORMAL][TRAINER_27E6F69F] =
    {
#line 6843
        .trainerName = _("27E6F69F"),
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
    [DIFFICULTY_NORMAL][TRAINER_28B294D2] =
    {
#line 6851
        .trainerName = _("28B294D2"),
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
    [DIFFICULTY_NORMAL][TRAINER_28E0625E] =
    {
#line 6859
        .trainerName = _("28E0625E"),
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
    [DIFFICULTY_NORMAL][TRAINER_292E386F] =
    {
#line 6867
        .trainerName = _("292E386F"),
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
    [DIFFICULTY_NORMAL][TRAINER_29AE727B] =
    {
#line 6875
        .trainerName = _("29AE727B"),
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
    [DIFFICULTY_NORMAL][TRAINER_2A305E88] =
    {
#line 6883
        .trainerName = _("2A305E88"),
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
    [DIFFICULTY_NORMAL][TRAINER_2A3F43CA] =
    {
#line 6891
        .trainerName = _("2A3F43CA"),
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
    [DIFFICULTY_NORMAL][TRAINER_2A7BF9FF] =
    {
#line 6899
        .trainerName = _("2A7BF9FF"),
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
    [DIFFICULTY_NORMAL][TRAINER_2A83B15E] =
    {
#line 6907
        .trainerName = _("2A83B15E"),
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
    [DIFFICULTY_NORMAL][TRAINER_2AD73BF3] =
    {
#line 6915
        .trainerName = _("2AD73BF3"),
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
    [DIFFICULTY_NORMAL][TRAINER_2B163825] =
    {
#line 6923
        .trainerName = _("2B163825"),
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
    [DIFFICULTY_NORMAL][TRAINER_2B249E40] =
    {
#line 6931
        .trainerName = _("2B249E40"),
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
    [DIFFICULTY_NORMAL][TRAINER_2BCA066C] =
    {
#line 6939
        .trainerName = _("2BCA066C"),
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
    [DIFFICULTY_NORMAL][TRAINER_2C040422] =
    {
#line 6947
        .trainerName = _("2C040422"),
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
    [DIFFICULTY_NORMAL][TRAINER_2C22CE48] =
    {
#line 6955
        .trainerName = _("2C22CE48"),
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
    [DIFFICULTY_NORMAL][TRAINER_2C398893] =
    {
#line 6963
        .trainerName = _("2C398893"),
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
    [DIFFICULTY_NORMAL][TRAINER_2C5FFA9F] =
    {
#line 6971
        .trainerName = _("2C5FFA9F"),
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
    [DIFFICULTY_NORMAL][TRAINER_2D1A100A] =
    {
#line 6979
        .trainerName = _("2D1A100A"),
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
    [DIFFICULTY_NORMAL][TRAINER_2D203158] =
    {
#line 6987
        .trainerName = _("2D203158"),
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
    [DIFFICULTY_NORMAL][TRAINER_2D29DC23] =
    {
#line 6995
        .trainerName = _("2D29DC23"),
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
    [DIFFICULTY_NORMAL][TRAINER_2D6DE246] =
    {
#line 7003
        .trainerName = _("2D6DE246"),
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
    [DIFFICULTY_NORMAL][TRAINER_2D92F001] =
    {
#line 7011
        .trainerName = _("2D92F001"),
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
    [DIFFICULTY_NORMAL][TRAINER_2DC29B9E] =
    {
#line 7019
        .trainerName = _("2DC29B9E"),
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
    [DIFFICULTY_NORMAL][TRAINER_2E218A8E] =
    {
#line 7027
        .trainerName = _("2E218A8E"),
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
    [DIFFICULTY_NORMAL][TRAINER_2E593FA9] =
    {
#line 7035
        .trainerName = _("2E593FA9"),
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
    [DIFFICULTY_NORMAL][TRAINER_2EC49459] =
    {
#line 7043
        .trainerName = _("2EC49459"),
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
    [DIFFICULTY_NORMAL][TRAINER_2F0770D3] =
    {
#line 7051
        .trainerName = _("2F0770D3"),
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
    [DIFFICULTY_NORMAL][TRAINER_2F09421D] =
    {
#line 7059
        .trainerName = _("2F09421D"),
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
    [DIFFICULTY_NORMAL][TRAINER_2FF79A0B] =
    {
#line 7067
        .trainerName = _("2FF79A0B"),
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
    [DIFFICULTY_NORMAL][TRAINER_3009CC76] =
    {
#line 7075
        .trainerName = _("3009CC76"),
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
    [DIFFICULTY_NORMAL][TRAINER_30522A9A] =
    {
#line 7083
        .trainerName = _("30522A9A"),
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
    [DIFFICULTY_NORMAL][TRAINER_30ACE135] =
    {
#line 7091
        .trainerName = _("30ACE135"),
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
    [DIFFICULTY_NORMAL][TRAINER_311B3EFC] =
    {
#line 7099
        .trainerName = _("311B3EFC"),
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
    [DIFFICULTY_NORMAL][TRAINER_317B8932] =
    {
#line 7107
        .trainerName = _("317B8932"),
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
    [DIFFICULTY_NORMAL][TRAINER_31D36FE6] =
    {
#line 7115
        .trainerName = _("31D36FE6"),
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
    [DIFFICULTY_NORMAL][TRAINER_32C1F13D] =
    {
#line 7123
        .trainerName = _("32C1F13D"),
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
    [DIFFICULTY_NORMAL][TRAINER_33AB4856] =
    {
#line 7131
        .trainerName = _("33AB4856"),
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
    [DIFFICULTY_NORMAL][TRAINER_3566F099] =
    {
#line 7139
        .trainerName = _("3566F099"),
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
    [DIFFICULTY_NORMAL][TRAINER_35E0E027] =
    {
#line 7147
        .trainerName = _("35E0E027"),
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
    [DIFFICULTY_NORMAL][TRAINER_36662EEF] =
    {
#line 7155
        .trainerName = _("36662EEF"),
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
    [DIFFICULTY_NORMAL][TRAINER_3681E8DE] =
    {
#line 7163
        .trainerName = _("3681E8DE"),
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
    [DIFFICULTY_NORMAL][TRAINER_3789DC6E] =
    {
#line 7171
        .trainerName = _("3789DC6E"),
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
    [DIFFICULTY_NORMAL][TRAINER_37B9EFB7] =
    {
#line 7179
        .trainerName = _("37B9EFB7"),
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
    [DIFFICULTY_NORMAL][TRAINER_37EDB78E] =
    {
#line 7187
        .trainerName = _("37EDB78E"),
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
    [DIFFICULTY_NORMAL][TRAINER_382E2AB3] =
    {
#line 7195
        .trainerName = _("382E2AB3"),
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
    [DIFFICULTY_NORMAL][TRAINER_3842496B] =
    {
#line 7203
        .trainerName = _("3842496B"),
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
    [DIFFICULTY_NORMAL][TRAINER_387351C1] =
    {
#line 7211
        .trainerName = _("387351C1"),
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
    [DIFFICULTY_NORMAL][TRAINER_38A47BDB] =
    {
#line 7219
        .trainerName = _("38A47BDB"),
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
    [DIFFICULTY_NORMAL][TRAINER_3924756E] =
    {
#line 7227
        .trainerName = _("3924756E"),
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
    [DIFFICULTY_NORMAL][TRAINER_3947ACC3] =
    {
#line 7235
        .trainerName = _("3947ACC3"),
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
    [DIFFICULTY_NORMAL][TRAINER_39AD4606] =
    {
#line 7243
        .trainerName = _("39AD4606"),
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
    [DIFFICULTY_NORMAL][TRAINER_39E0AE4F] =
    {
#line 7251
        .trainerName = _("39E0AE4F"),
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
    [DIFFICULTY_NORMAL][TRAINER_39E78D45] =
    {
#line 7259
        .trainerName = _("39E78D45"),
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
    [DIFFICULTY_NORMAL][TRAINER_3A11452B] =
    {
#line 7267
        .trainerName = _("3A11452B"),
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
    [DIFFICULTY_NORMAL][TRAINER_3A840205] =
    {
#line 7275
        .trainerName = _("3A840205"),
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
    [DIFFICULTY_NORMAL][TRAINER_3AD97475] =
    {
#line 7283
        .trainerName = _("3AD97475"),
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
    [DIFFICULTY_NORMAL][TRAINER_3AEE4974] =
    {
#line 7291
        .trainerName = _("3AEE4974"),
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
    [DIFFICULTY_NORMAL][TRAINER_3BAF0C60] =
    {
#line 7299
        .trainerName = _("3BAF0C60"),
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
    [DIFFICULTY_NORMAL][TRAINER_3BDED445] =
    {
#line 7307
        .trainerName = _("3BDED445"),
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
    [DIFFICULTY_NORMAL][TRAINER_3C621048] =
    {
#line 7315
        .trainerName = _("3C621048"),
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
    [DIFFICULTY_NORMAL][TRAINER_3C74DAE2] =
    {
#line 7323
        .trainerName = _("3C74DAE2"),
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
    [DIFFICULTY_NORMAL][TRAINER_3C7AC359] =
    {
#line 7331
        .trainerName = _("3C7AC359"),
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
    [DIFFICULTY_NORMAL][TRAINER_3CDE5F9E] =
    {
#line 7339
        .trainerName = _("3CDE5F9E"),
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
    [DIFFICULTY_NORMAL][TRAINER_3CECE368] =
    {
#line 7347
        .trainerName = _("3CECE368"),
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
    [DIFFICULTY_NORMAL][TRAINER_3CFF3841] =
    {
#line 7355
        .trainerName = _("3CFF3841"),
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
    [DIFFICULTY_NORMAL][TRAINER_3D502E2F] =
    {
#line 7363
        .trainerName = _("3D502E2F"),
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
    [DIFFICULTY_NORMAL][TRAINER_3D7FDE57] =
    {
#line 7371
        .trainerName = _("3D7FDE57"),
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
    [DIFFICULTY_NORMAL][TRAINER_3DCD0BBC] =
    {
#line 7379
        .trainerName = _("3DCD0BBC"),
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
    [DIFFICULTY_NORMAL][TRAINER_3E17924C] =
    {
#line 7387
        .trainerName = _("3E17924C"),
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
    [DIFFICULTY_NORMAL][TRAINER_3EB6FA04] =
    {
#line 7395
        .trainerName = _("3EB6FA04"),
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
    [DIFFICULTY_NORMAL][TRAINER_3EFCF1C8] =
    {
#line 7403
        .trainerName = _("3EFCF1C8"),
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
    [DIFFICULTY_NORMAL][TRAINER_3F0BF52E] =
    {
#line 7411
        .trainerName = _("3F0BF52E"),
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
    [DIFFICULTY_NORMAL][TRAINER_4000C8A0] =
    {
#line 7419
        .trainerName = _("4000C8A0"),
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
    [DIFFICULTY_NORMAL][TRAINER_403D932D] =
    {
#line 7427
        .trainerName = _("403D932D"),
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
    [DIFFICULTY_NORMAL][TRAINER_408862C4] =
    {
#line 7435
        .trainerName = _("408862C4"),
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
    [DIFFICULTY_NORMAL][TRAINER_419282AD] =
    {
#line 7443
        .trainerName = _("419282AD"),
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
    [DIFFICULTY_NORMAL][TRAINER_419FCBAE] =
    {
#line 7451
        .trainerName = _("419FCBAE"),
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
    [DIFFICULTY_NORMAL][TRAINER_41B8591B] =
    {
#line 7459
        .trainerName = _("41B8591B"),
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
    [DIFFICULTY_NORMAL][TRAINER_41DCF7BA] =
    {
#line 7467
        .trainerName = _("41DCF7BA"),
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
    [DIFFICULTY_NORMAL][TRAINER_4227B911] =
    {
#line 7475
        .trainerName = _("4227B911"),
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
    [DIFFICULTY_NORMAL][TRAINER_4239B726] =
    {
#line 7483
        .trainerName = _("4239B726"),
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
    [DIFFICULTY_NORMAL][TRAINER_42BC1D70] =
    {
#line 7491
        .trainerName = _("42BC1D70"),
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
    [DIFFICULTY_NORMAL][TRAINER_42BE3E94] =
    {
#line 7499
        .trainerName = _("42BE3E94"),
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
    [DIFFICULTY_NORMAL][TRAINER_42C68371] =
    {
#line 7507
        .trainerName = _("42C68371"),
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
    [DIFFICULTY_NORMAL][TRAINER_432F34FA] =
    {
#line 7515
        .trainerName = _("432F34FA"),
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
    [DIFFICULTY_NORMAL][TRAINER_437E553A] =
    {
#line 7523
        .trainerName = _("437E553A"),
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
    [DIFFICULTY_NORMAL][TRAINER_4394141C] =
    {
#line 7531
        .trainerName = _("4394141C"),
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
    [DIFFICULTY_NORMAL][TRAINER_43B111AD] =
    {
#line 7539
        .trainerName = _("43B111AD"),
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
    [DIFFICULTY_NORMAL][TRAINER_43B30B5D] =
    {
#line 7547
        .trainerName = _("43B30B5D"),
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
    [DIFFICULTY_NORMAL][TRAINER_43D6557C] =
    {
#line 7555
        .trainerName = _("43D6557C"),
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
    [DIFFICULTY_NORMAL][TRAINER_44251BF9] =
    {
#line 7563
        .trainerName = _("44251BF9"),
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
    [DIFFICULTY_NORMAL][TRAINER_44D28B98] =
    {
#line 7571
        .trainerName = _("44D28B98"),
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
    [DIFFICULTY_NORMAL][TRAINER_44E68738] =
    {
#line 7579
        .trainerName = _("44E68738"),
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
    [DIFFICULTY_NORMAL][TRAINER_44F86666] =
    {
#line 7587
        .trainerName = _("44F86666"),
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
    [DIFFICULTY_NORMAL][TRAINER_458C3B90] =
    {
#line 7595
        .trainerName = _("458C3B90"),
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
    [DIFFICULTY_NORMAL][TRAINER_45CBA787] =
    {
#line 7603
        .trainerName = _("45CBA787"),
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
    [DIFFICULTY_NORMAL][TRAINER_45E5EB22] =
    {
#line 7611
        .trainerName = _("45E5EB22"),
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
    [DIFFICULTY_NORMAL][TRAINER_45ECBA80] =
    {
#line 7619
        .trainerName = _("45ECBA80"),
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
    [DIFFICULTY_NORMAL][TRAINER_460AB144] =
    {
#line 7627
        .trainerName = _("460AB144"),
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
    [DIFFICULTY_NORMAL][TRAINER_46169EA5] =
    {
#line 7635
        .trainerName = _("46169EA5"),
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
    [DIFFICULTY_NORMAL][TRAINER_464C4C44] =
    {
#line 7643
        .trainerName = _("464C4C44"),
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
    [DIFFICULTY_NORMAL][TRAINER_473EE9DE] =
    {
#line 7651
        .trainerName = _("473EE9DE"),
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
    [DIFFICULTY_NORMAL][TRAINER_4787A98D] =
    {
#line 7659
        .trainerName = _("4787A98D"),
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
    [DIFFICULTY_NORMAL][TRAINER_479BBFEB] =
    {
#line 7667
        .trainerName = _("479BBFEB"),
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
    [DIFFICULTY_NORMAL][TRAINER_47EACF7E] =
    {
#line 7675
        .trainerName = _("47EACF7E"),
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
    [DIFFICULTY_NORMAL][TRAINER_4848801D] =
    {
#line 7683
        .trainerName = _("4848801D"),
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
    [DIFFICULTY_NORMAL][TRAINER_487BEC6D] =
    {
#line 7691
        .trainerName = _("487BEC6D"),
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
    [DIFFICULTY_NORMAL][TRAINER_492E0A66] =
    {
#line 7699
        .trainerName = _("492E0A66"),
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
    [DIFFICULTY_NORMAL][TRAINER_494ECB35] =
    {
#line 7707
        .trainerName = _("494ECB35"),
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
    [DIFFICULTY_NORMAL][TRAINER_494F5379] =
    {
#line 7715
        .trainerName = _("494F5379"),
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
    [DIFFICULTY_NORMAL][TRAINER_49805D55] =
    {
#line 7723
        .trainerName = _("49805D55"),
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
    [DIFFICULTY_NORMAL][TRAINER_49EA8A40] =
    {
#line 7731
        .trainerName = _("49EA8A40"),
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
    [DIFFICULTY_NORMAL][TRAINER_4A323E4A] =
    {
#line 7739
        .trainerName = _("4A323E4A"),
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
    [DIFFICULTY_NORMAL][TRAINER_4A3EB696] =
    {
#line 7747
        .trainerName = _("4A3EB696"),
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
    [DIFFICULTY_NORMAL][TRAINER_4ABDB43A] =
    {
#line 7755
        .trainerName = _("4ABDB43A"),
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
    [DIFFICULTY_NORMAL][TRAINER_4AD6DB47] =
    {
#line 7763
        .trainerName = _("4AD6DB47"),
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
    [DIFFICULTY_NORMAL][TRAINER_4AF51B8A] =
    {
#line 7771
        .trainerName = _("4AF51B8A"),
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
    [DIFFICULTY_NORMAL][TRAINER_4B2BC403] =
    {
#line 7779
        .trainerName = _("4B2BC403"),
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
    [DIFFICULTY_NORMAL][TRAINER_4B3B0356] =
    {
#line 7787
        .trainerName = _("4B3B0356"),
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
    [DIFFICULTY_NORMAL][TRAINER_4B431569] =
    {
#line 7795
        .trainerName = _("4B431569"),
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
    [DIFFICULTY_NORMAL][TRAINER_4B5B4954] =
    {
#line 7803
        .trainerName = _("4B5B4954"),
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
    [DIFFICULTY_NORMAL][TRAINER_4C2D23EC] =
    {
#line 7811
        .trainerName = _("4C2D23EC"),
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
    [DIFFICULTY_NORMAL][TRAINER_4CE97031] =
    {
#line 7819
        .trainerName = _("4CE97031"),
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
    [DIFFICULTY_NORMAL][TRAINER_4CF43F23] =
    {
#line 7827
        .trainerName = _("4CF43F23"),
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
    [DIFFICULTY_NORMAL][TRAINER_4D8F9D46] =
    {
#line 7835
        .trainerName = _("4D8F9D46"),
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
    [DIFFICULTY_NORMAL][TRAINER_4D98F6C4] =
    {
#line 7843
        .trainerName = _("4D98F6C4"),
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
    [DIFFICULTY_NORMAL][TRAINER_4E072263] =
    {
#line 7851
        .trainerName = _("4E072263"),
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
    [DIFFICULTY_NORMAL][TRAINER_4E0C1EFE] =
    {
#line 7859
        .trainerName = _("4E0C1EFE"),
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
    [DIFFICULTY_NORMAL][TRAINER_4E226A6E] =
    {
#line 7867
        .trainerName = _("4E226A6E"),
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
    [DIFFICULTY_NORMAL][TRAINER_4E5AAFAE] =
    {
#line 7875
        .trainerName = _("4E5AAFAE"),
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
    [DIFFICULTY_NORMAL][TRAINER_4F10DCA9] =
    {
#line 7883
        .trainerName = _("4F10DCA9"),
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
    [DIFFICULTY_NORMAL][TRAINER_50AE78E5] =
    {
#line 7891
        .trainerName = _("50AE78E5"),
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
    [DIFFICULTY_NORMAL][TRAINER_513A43EE] =
    {
#line 7899
        .trainerName = _("513A43EE"),
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
    [DIFFICULTY_NORMAL][TRAINER_51A32DCA] =
    {
#line 7907
        .trainerName = _("51A32DCA"),
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
    [DIFFICULTY_NORMAL][TRAINER_51F6B834] =
    {
#line 7915
        .trainerName = _("51F6B834"),
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
    [DIFFICULTY_NORMAL][TRAINER_5209EDF0] =
    {
#line 7923
        .trainerName = _("5209EDF0"),
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
    [DIFFICULTY_NORMAL][TRAINER_52CFC159] =
    {
#line 7931
        .trainerName = _("52CFC159"),
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
    [DIFFICULTY_NORMAL][TRAINER_538D052D] =
    {
#line 7939
        .trainerName = _("538D052D"),
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
    [DIFFICULTY_NORMAL][TRAINER_53A1A61A] =
    {
#line 7947
        .trainerName = _("53A1A61A"),
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
    [DIFFICULTY_NORMAL][TRAINER_53B06C7B] =
    {
#line 7955
        .trainerName = _("53B06C7B"),
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
    [DIFFICULTY_NORMAL][TRAINER_54110A38] =
    {
#line 7963
        .trainerName = _("54110A38"),
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
    [DIFFICULTY_NORMAL][TRAINER_549792BA] =
    {
#line 7971
        .trainerName = _("549792BA"),
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
    [DIFFICULTY_NORMAL][TRAINER_54BAC2DA] =
    {
#line 7979
        .trainerName = _("54BAC2DA"),
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
    [DIFFICULTY_NORMAL][TRAINER_54F170BE] =
    {
#line 7987
        .trainerName = _("54F170BE"),
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
    [DIFFICULTY_NORMAL][TRAINER_558F80F9] =
    {
#line 7995
        .trainerName = _("558F80F9"),
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
    [DIFFICULTY_NORMAL][TRAINER_55CA00A1] =
    {
#line 8003
        .trainerName = _("55CA00A1"),
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
    [DIFFICULTY_NORMAL][TRAINER_55D0BEAA] =
    {
#line 8011
        .trainerName = _("55D0BEAA"),
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
    [DIFFICULTY_NORMAL][TRAINER_55D90FA8] =
    {
#line 8019
        .trainerName = _("55D90FA8"),
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
    [DIFFICULTY_NORMAL][TRAINER_55EBF949] =
    {
#line 8027
        .trainerName = _("55EBF949"),
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
    [DIFFICULTY_NORMAL][TRAINER_565DE3C4] =
    {
#line 8035
        .trainerName = _("565DE3C4"),
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
    [DIFFICULTY_NORMAL][TRAINER_56775C71] =
    {
#line 8043
        .trainerName = _("56775C71"),
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
    [DIFFICULTY_NORMAL][TRAINER_56C1FE08] =
    {
#line 8051
        .trainerName = _("56C1FE08"),
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
    [DIFFICULTY_NORMAL][TRAINER_56E6EFAA] =
    {
#line 8059
        .trainerName = _("56E6EFAA"),
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
    [DIFFICULTY_NORMAL][TRAINER_57E254F5] =
    {
#line 8067
        .trainerName = _("57E254F5"),
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
    [DIFFICULTY_NORMAL][TRAINER_57E7E83A] =
    {
#line 8075
        .trainerName = _("57E7E83A"),
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
    [DIFFICULTY_NORMAL][TRAINER_5819E497] =
    {
#line 8083
        .trainerName = _("5819E497"),
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
    [DIFFICULTY_NORMAL][TRAINER_58A6A51E] =
    {
#line 8091
        .trainerName = _("58A6A51E"),
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
    [DIFFICULTY_NORMAL][TRAINER_58BEBECC] =
    {
#line 8099
        .trainerName = _("58BEBECC"),
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
    [DIFFICULTY_NORMAL][TRAINER_58F43966] =
    {
#line 8107
        .trainerName = _("58F43966"),
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
    [DIFFICULTY_NORMAL][TRAINER_59592DE4] =
    {
#line 8115
        .trainerName = _("59592DE4"),
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
    [DIFFICULTY_NORMAL][TRAINER_598585C1] =
    {
#line 8123
        .trainerName = _("598585C1"),
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
    [DIFFICULTY_NORMAL][TRAINER_59981F0D] =
    {
#line 8131
        .trainerName = _("59981F0D"),
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
    [DIFFICULTY_NORMAL][TRAINER_59E335AB] =
    {
#line 8139
        .trainerName = _("59E335AB"),
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
    [DIFFICULTY_NORMAL][TRAINER_59FFFCED] =
    {
#line 8147
        .trainerName = _("59FFFCED"),
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
    [DIFFICULTY_NORMAL][TRAINER_5ABF4FA4] =
    {
#line 8155
        .trainerName = _("5ABF4FA4"),
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
    [DIFFICULTY_NORMAL][TRAINER_5AC61FE5] =
    {
#line 8163
        .trainerName = _("5AC61FE5"),
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
    [DIFFICULTY_NORMAL][TRAINER_5AD29FF8] =
    {
#line 8171
        .trainerName = _("5AD29FF8"),
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
    [DIFFICULTY_NORMAL][TRAINER_5AD4C218] =
    {
#line 8179
        .trainerName = _("5AD4C218"),
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
    [DIFFICULTY_NORMAL][TRAINER_5B5F6AE8] =
    {
#line 8187
        .trainerName = _("5B5F6AE8"),
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
    [DIFFICULTY_NORMAL][TRAINER_5B6304FF] =
    {
#line 8195
        .trainerName = _("5B6304FF"),
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
    [DIFFICULTY_NORMAL][TRAINER_5B75B30F] =
    {
#line 8203
        .trainerName = _("5B75B30F"),
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
    [DIFFICULTY_NORMAL][TRAINER_5B983361] =
    {
#line 8211
        .trainerName = _("5B983361"),
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
    [DIFFICULTY_NORMAL][TRAINER_5BD8EA81] =
    {
#line 8219
        .trainerName = _("5BD8EA81"),
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
    [DIFFICULTY_NORMAL][TRAINER_5C315841] =
    {
#line 8227
        .trainerName = _("5C315841"),
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
    [DIFFICULTY_NORMAL][TRAINER_5C573C11] =
    {
#line 8235
        .trainerName = _("5C573C11"),
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
    [DIFFICULTY_NORMAL][TRAINER_5CAB03DD] =
    {
#line 8243
        .trainerName = _("5CAB03DD"),
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
    [DIFFICULTY_NORMAL][TRAINER_5CBDB116] =
    {
#line 8251
        .trainerName = _("5CBDB116"),
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
    [DIFFICULTY_NORMAL][TRAINER_5D0C4B8F] =
    {
#line 8259
        .trainerName = _("5D0C4B8F"),
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
    [DIFFICULTY_NORMAL][TRAINER_5D2CCD41] =
    {
#line 8267
        .trainerName = _("5D2CCD41"),
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
    [DIFFICULTY_NORMAL][TRAINER_5D5F491E] =
    {
#line 8275
        .trainerName = _("5D5F491E"),
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
    [DIFFICULTY_NORMAL][TRAINER_5D81D8F9] =
    {
#line 8283
        .trainerName = _("5D81D8F9"),
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
    [DIFFICULTY_NORMAL][TRAINER_5D86E702] =
    {
#line 8291
        .trainerName = _("5D86E702"),
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
    [DIFFICULTY_NORMAL][TRAINER_5D9ABC58] =
    {
#line 8299
        .trainerName = _("5D9ABC58"),
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
    [DIFFICULTY_NORMAL][TRAINER_5DA9F2AE] =
    {
#line 8307
        .trainerName = _("5DA9F2AE"),
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
    [DIFFICULTY_NORMAL][TRAINER_5E13316C] =
    {
#line 8315
        .trainerName = _("5E13316C"),
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
    [DIFFICULTY_NORMAL][TRAINER_5EA7A638] =
    {
#line 8323
        .trainerName = _("5EA7A638"),
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
    [DIFFICULTY_NORMAL][TRAINER_5EB4C98F] =
    {
#line 8331
        .trainerName = _("5EB4C98F"),
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
    [DIFFICULTY_NORMAL][TRAINER_5EF71DA1] =
    {
#line 8339
        .trainerName = _("5EF71DA1"),
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
    [DIFFICULTY_NORMAL][TRAINER_5F858802] =
    {
#line 8347
        .trainerName = _("5F858802"),
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
    [DIFFICULTY_NORMAL][TRAINER_5FA4C80F] =
    {
#line 8355
        .trainerName = _("5FA4C80F"),
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
    [DIFFICULTY_NORMAL][TRAINER_5FD48FB2] =
    {
#line 8363
        .trainerName = _("5FD48FB2"),
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
    [DIFFICULTY_NORMAL][TRAINER_5FF1DEC5] =
    {
#line 8371
        .trainerName = _("5FF1DEC5"),
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
    [DIFFICULTY_NORMAL][TRAINER_6016A968] =
    {
#line 8379
        .trainerName = _("6016A968"),
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
    [DIFFICULTY_NORMAL][TRAINER_6058C03B] =
    {
#line 8387
        .trainerName = _("6058C03B"),
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
    [DIFFICULTY_NORMAL][TRAINER_60C3BD24] =
    {
#line 8395
        .trainerName = _("60C3BD24"),
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
    [DIFFICULTY_NORMAL][TRAINER_60C56554] =
    {
#line 8403
        .trainerName = _("60C56554"),
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
    [DIFFICULTY_NORMAL][TRAINER_60D66B86] =
    {
#line 8411
        .trainerName = _("60D66B86"),
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
    [DIFFICULTY_NORMAL][TRAINER_6102A0FC] =
    {
#line 8419
        .trainerName = _("6102A0FC"),
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
    [DIFFICULTY_NORMAL][TRAINER_61E76999] =
    {
#line 8427
        .trainerName = _("61E76999"),
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
    [DIFFICULTY_NORMAL][TRAINER_626AECE8] =
    {
#line 8435
        .trainerName = _("626AECE8"),
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
    [DIFFICULTY_NORMAL][TRAINER_62851FFB] =
    {
#line 8443
        .trainerName = _("62851FFB"),
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
    [DIFFICULTY_NORMAL][TRAINER_62C33409] =
    {
#line 8451
        .trainerName = _("62C33409"),
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
    [DIFFICULTY_NORMAL][TRAINER_62D0F875] =
    {
#line 8459
        .trainerName = _("62D0F875"),
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
    [DIFFICULTY_NORMAL][TRAINER_63409A54] =
    {
#line 8467
        .trainerName = _("63409A54"),
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
    [DIFFICULTY_NORMAL][TRAINER_6397B964] =
    {
#line 8475
        .trainerName = _("6397B964"),
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
    [DIFFICULTY_NORMAL][TRAINER_63DB05B6] =
    {
#line 8483
        .trainerName = _("63DB05B6"),
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
    [DIFFICULTY_NORMAL][TRAINER_63DC02C9] =
    {
#line 8491
        .trainerName = _("63DC02C9"),
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
    [DIFFICULTY_NORMAL][TRAINER_6439D44C] =
    {
#line 8499
        .trainerName = _("6439D44C"),
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
    [DIFFICULTY_NORMAL][TRAINER_64E30596] =
    {
#line 8507
        .trainerName = _("64E30596"),
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
    [DIFFICULTY_NORMAL][TRAINER_6566F645] =
    {
#line 8515
        .trainerName = _("6566F645"),
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
    [DIFFICULTY_NORMAL][TRAINER_656A39C8] =
    {
#line 8523
        .trainerName = _("656A39C8"),
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
    [DIFFICULTY_NORMAL][TRAINER_656EC067] =
    {
#line 8531
        .trainerName = _("656EC067"),
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
    [DIFFICULTY_NORMAL][TRAINER_65CE4F87] =
    {
#line 8539
        .trainerName = _("65CE4F87"),
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
    [DIFFICULTY_NORMAL][TRAINER_662EBAAA] =
    {
#line 8547
        .trainerName = _("662EBAAA"),
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
    [DIFFICULTY_NORMAL][TRAINER_66531C74] =
    {
#line 8555
        .trainerName = _("66531C74"),
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
    [DIFFICULTY_NORMAL][TRAINER_66B16F22] =
    {
#line 8563
        .trainerName = _("66B16F22"),
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
    [DIFFICULTY_NORMAL][TRAINER_66D26AEC] =
    {
#line 8571
        .trainerName = _("66D26AEC"),
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
    [DIFFICULTY_NORMAL][TRAINER_675DA518] =
    {
#line 8579
        .trainerName = _("675DA518"),
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
    [DIFFICULTY_NORMAL][TRAINER_677A22D7] =
    {
#line 8587
        .trainerName = _("677A22D7"),
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
    [DIFFICULTY_NORMAL][TRAINER_6792B394] =
    {
#line 8595
        .trainerName = _("6792B394"),
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
    [DIFFICULTY_NORMAL][TRAINER_683A2305] =
    {
#line 8603
        .trainerName = _("683A2305"),
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
    [DIFFICULTY_NORMAL][TRAINER_692DD7CF] =
    {
#line 8611
        .trainerName = _("692DD7CF"),
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
    [DIFFICULTY_NORMAL][TRAINER_698BB117] =
    {
#line 8619
        .trainerName = _("698BB117"),
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
    [DIFFICULTY_NORMAL][TRAINER_69EE8132] =
    {
#line 8627
        .trainerName = _("69EE8132"),
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
    [DIFFICULTY_NORMAL][TRAINER_6A35EE35] =
    {
#line 8635
        .trainerName = _("6A35EE35"),
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
    [DIFFICULTY_NORMAL][TRAINER_6A3930E6] =
    {
#line 8643
        .trainerName = _("6A3930E6"),
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
    [DIFFICULTY_NORMAL][TRAINER_6A48F28F] =
    {
#line 8651
        .trainerName = _("6A48F28F"),
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
    [DIFFICULTY_NORMAL][TRAINER_6A8EEC78] =
    {
#line 8659
        .trainerName = _("6A8EEC78"),
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
    [DIFFICULTY_NORMAL][TRAINER_6AABC7EA] =
    {
#line 8667
        .trainerName = _("6AABC7EA"),
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
    [DIFFICULTY_NORMAL][TRAINER_6ABE3EC1] =
    {
#line 8675
        .trainerName = _("6ABE3EC1"),
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
    [DIFFICULTY_NORMAL][TRAINER_6B14C259] =
    {
#line 8683
        .trainerName = _("6B14C259"),
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
    [DIFFICULTY_NORMAL][TRAINER_6BEEE6BE] =
    {
#line 8691
        .trainerName = _("6BEEE6BE"),
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
    [DIFFICULTY_NORMAL][TRAINER_6C7736F9] =
    {
#line 8699
        .trainerName = _("6C7736F9"),
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
    [DIFFICULTY_NORMAL][TRAINER_6CC913A2] =
    {
#line 8707
        .trainerName = _("6CC913A2"),
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
    [DIFFICULTY_NORMAL][TRAINER_6D45549A] =
    {
#line 8715
        .trainerName = _("6D45549A"),
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
    [DIFFICULTY_NORMAL][TRAINER_6E1E82B2] =
    {
#line 8723
        .trainerName = _("6E1E82B2"),
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
    [DIFFICULTY_NORMAL][TRAINER_6E663040] =
    {
#line 8731
        .trainerName = _("6E663040"),
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
    [DIFFICULTY_NORMAL][TRAINER_6ED2C120] =
    {
#line 8739
        .trainerName = _("6ED2C120"),
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
    [DIFFICULTY_NORMAL][TRAINER_6F5C8078] =
    {
#line 8747
        .trainerName = _("6F5C8078"),
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
    [DIFFICULTY_NORMAL][TRAINER_6F5E9CF9] =
    {
#line 8755
        .trainerName = _("6F5E9CF9"),
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
    [DIFFICULTY_NORMAL][TRAINER_6FC24896] =
    {
#line 8763
        .trainerName = _("6FC24896"),
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
    [DIFFICULTY_NORMAL][TRAINER_6FF3213D] =
    {
#line 8771
        .trainerName = _("6FF3213D"),
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
    [DIFFICULTY_NORMAL][TRAINER_701AC24E] =
    {
#line 8779
        .trainerName = _("701AC24E"),
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
    [DIFFICULTY_NORMAL][TRAINER_703B73C4] =
    {
#line 8787
        .trainerName = _("703B73C4"),
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
    [DIFFICULTY_NORMAL][TRAINER_70C712D3] =
    {
#line 8795
        .trainerName = _("70C712D3"),
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
    [DIFFICULTY_NORMAL][TRAINER_70EAAAF5] =
    {
#line 8803
        .trainerName = _("70EAAAF5"),
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
    [DIFFICULTY_NORMAL][TRAINER_70F1A62B] =
    {
#line 8811
        .trainerName = _("70F1A62B"),
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
    [DIFFICULTY_NORMAL][TRAINER_7169C897] =
    {
#line 8819
        .trainerName = _("7169C897"),
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
    [DIFFICULTY_NORMAL][TRAINER_7178DF27] =
    {
#line 8827
        .trainerName = _("7178DF27"),
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
    [DIFFICULTY_NORMAL][TRAINER_7190E405] =
    {
#line 8835
        .trainerName = _("7190E405"),
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
    [DIFFICULTY_NORMAL][TRAINER_71CE545E] =
    {
#line 8843
        .trainerName = _("71CE545E"),
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
    [DIFFICULTY_NORMAL][TRAINER_7249425F] =
    {
#line 8851
        .trainerName = _("7249425F"),
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
    [DIFFICULTY_NORMAL][TRAINER_72641C9D] =
    {
#line 8859
        .trainerName = _("72641C9D"),
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
    [DIFFICULTY_NORMAL][TRAINER_729F2BBB] =
    {
#line 8867
        .trainerName = _("729F2BBB"),
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
    [DIFFICULTY_NORMAL][TRAINER_72F25B41] =
    {
#line 8875
        .trainerName = _("72F25B41"),
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
    [DIFFICULTY_NORMAL][TRAINER_732D4997] =
    {
#line 8883
        .trainerName = _("732D4997"),
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
    [DIFFICULTY_NORMAL][TRAINER_73A561CC] =
    {
#line 8891
        .trainerName = _("73A561CC"),
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
    [DIFFICULTY_NORMAL][TRAINER_7420DB0C] =
    {
#line 8899
        .trainerName = _("7420DB0C"),
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
    [DIFFICULTY_NORMAL][TRAINER_7435DE7C] =
    {
#line 8907
        .trainerName = _("7435DE7C"),
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
    [DIFFICULTY_NORMAL][TRAINER_75A2A667] =
    {
#line 8915
        .trainerName = _("75A2A667"),
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
    [DIFFICULTY_NORMAL][TRAINER_75D602F2] =
    {
#line 8923
        .trainerName = _("75D602F2"),
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
    [DIFFICULTY_NORMAL][TRAINER_77DDBBAF] =
    {
#line 8931
        .trainerName = _("77DDBBAF"),
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
    [DIFFICULTY_NORMAL][TRAINER_783AB388] =
    {
#line 8939
        .trainerName = _("783AB388"),
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
    [DIFFICULTY_NORMAL][TRAINER_78564BE5] =
    {
#line 8947
        .trainerName = _("78564BE5"),
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
    [DIFFICULTY_NORMAL][TRAINER_7885ECAF] =
    {
#line 8955
        .trainerName = _("7885ECAF"),
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
    [DIFFICULTY_NORMAL][TRAINER_78B73516] =
    {
#line 8963
        .trainerName = _("78B73516"),
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
    [DIFFICULTY_NORMAL][TRAINER_78BD858D] =
    {
#line 8971
        .trainerName = _("78BD858D"),
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
    [DIFFICULTY_NORMAL][TRAINER_7933DA6C] =
    {
#line 8979
        .trainerName = _("7933DA6C"),
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
    [DIFFICULTY_NORMAL][TRAINER_793992D8] =
    {
#line 8987
        .trainerName = _("793992D8"),
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
    [DIFFICULTY_NORMAL][TRAINER_797E296B] =
    {
#line 8995
        .trainerName = _("797E296B"),
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
    [DIFFICULTY_NORMAL][TRAINER_79EF1DEB] =
    {
#line 9003
        .trainerName = _("79EF1DEB"),
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
    [DIFFICULTY_NORMAL][TRAINER_7A03677D] =
    {
#line 9011
        .trainerName = _("7A03677D"),
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
    [DIFFICULTY_NORMAL][TRAINER_7A0C086F] =
    {
#line 9019
        .trainerName = _("7A0C086F"),
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
    [DIFFICULTY_NORMAL][TRAINER_7A89C403] =
    {
#line 9027
        .trainerName = _("7A89C403"),
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
    [DIFFICULTY_NORMAL][TRAINER_7A8D30C6] =
    {
#line 9035
        .trainerName = _("7A8D30C6"),
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
    [DIFFICULTY_NORMAL][TRAINER_7ABC77C1] =
    {
#line 9043
        .trainerName = _("7ABC77C1"),
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
    [DIFFICULTY_NORMAL][TRAINER_7B5DF36F] =
    {
#line 9051
        .trainerName = _("7B5DF36F"),
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
    [DIFFICULTY_NORMAL][TRAINER_7C3BD57C] =
    {
#line 9059
        .trainerName = _("7C3BD57C"),
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
    [DIFFICULTY_NORMAL][TRAINER_7C4240E1] =
    {
#line 9067
        .trainerName = _("7C4240E1"),
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
    [DIFFICULTY_NORMAL][TRAINER_7C5056CA] =
    {
#line 9075
        .trainerName = _("7C5056CA"),
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
    [DIFFICULTY_NORMAL][TRAINER_7C8BD62F] =
    {
#line 9083
        .trainerName = _("7C8BD62F"),
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
    [DIFFICULTY_NORMAL][TRAINER_7C9308EF] =
    {
#line 9091
        .trainerName = _("7C9308EF"),
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
    [DIFFICULTY_NORMAL][TRAINER_7CAF6877] =
    {
#line 9099
        .trainerName = _("7CAF6877"),
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
    [DIFFICULTY_NORMAL][TRAINER_7CBB25EB] =
    {
#line 9107
        .trainerName = _("7CBB25EB"),
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
    [DIFFICULTY_NORMAL][TRAINER_7CD1AAE1] =
    {
#line 9115
        .trainerName = _("7CD1AAE1"),
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
    [DIFFICULTY_NORMAL][TRAINER_7D0F1751] =
    {
#line 9123
        .trainerName = _("7D0F1751"),
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
    [DIFFICULTY_NORMAL][TRAINER_7D28CB20] =
    {
#line 9131
        .trainerName = _("7D28CB20"),
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
    [DIFFICULTY_NORMAL][TRAINER_7D536E72] =
    {
#line 9139
        .trainerName = _("7D536E72"),
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
    [DIFFICULTY_NORMAL][TRAINER_7DC358C0] =
    {
#line 9147
        .trainerName = _("7DC358C0"),
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
    [DIFFICULTY_NORMAL][TRAINER_7DEC9A40] =
    {
#line 9155
        .trainerName = _("7DEC9A40"),
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
    [DIFFICULTY_NORMAL][TRAINER_7E2F7EB8] =
    {
#line 9163
        .trainerName = _("7E2F7EB8"),
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
    [DIFFICULTY_NORMAL][TRAINER_7E7CD9D3] =
    {
#line 9171
        .trainerName = _("7E7CD9D3"),
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
    [DIFFICULTY_NORMAL][TRAINER_7E8CCD84] =
    {
#line 9179
        .trainerName = _("7E8CCD84"),
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
    [DIFFICULTY_NORMAL][TRAINER_8010F97E] =
    {
#line 9187
        .trainerName = _("8010F97E"),
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
    [DIFFICULTY_NORMAL][TRAINER_805C25F0] =
    {
#line 9195
        .trainerName = _("805C25F0"),
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
    [DIFFICULTY_NORMAL][TRAINER_80941A21] =
    {
#line 9203
        .trainerName = _("80941A21"),
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
    [DIFFICULTY_NORMAL][TRAINER_80AAA333] =
    {
#line 9211
        .trainerName = _("80AAA333"),
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
    [DIFFICULTY_NORMAL][TRAINER_810A3F32] =
    {
#line 9219
        .trainerName = _("810A3F32"),
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
    [DIFFICULTY_NORMAL][TRAINER_811C7730] =
    {
#line 9227
        .trainerName = _("811C7730"),
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
    [DIFFICULTY_NORMAL][TRAINER_814D0113] =
    {
#line 9235
        .trainerName = _("814D0113"),
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
    [DIFFICULTY_NORMAL][TRAINER_822DC7A8] =
    {
#line 9243
        .trainerName = _("822DC7A8"),
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
    [DIFFICULTY_NORMAL][TRAINER_827A5D21] =
    {
#line 9251
        .trainerName = _("827A5D21"),
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
    [DIFFICULTY_NORMAL][TRAINER_82A19B69] =
    {
#line 9259
        .trainerName = _("82A19B69"),
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
    [DIFFICULTY_NORMAL][TRAINER_83008F9D] =
    {
#line 9267
        .trainerName = _("83008F9D"),
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
    [DIFFICULTY_NORMAL][TRAINER_831DE561] =
    {
#line 9275
        .trainerName = _("831DE561"),
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
    [DIFFICULTY_NORMAL][TRAINER_8327758B] =
    {
#line 9283
        .trainerName = _("8327758B"),
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
    [DIFFICULTY_NORMAL][TRAINER_834B75E7] =
    {
#line 9291
        .trainerName = _("834B75E7"),
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
    [DIFFICULTY_NORMAL][TRAINER_8365EA32] =
    {
#line 9299
        .trainerName = _("8365EA32"),
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
    [DIFFICULTY_NORMAL][TRAINER_83A26233] =
    {
#line 9307
        .trainerName = _("83A26233"),
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
    [DIFFICULTY_NORMAL][TRAINER_83B9A038] =
    {
#line 9315
        .trainerName = _("83B9A038"),
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
    [DIFFICULTY_NORMAL][TRAINER_840416CD] =
    {
#line 9323
        .trainerName = _("840416CD"),
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
    [DIFFICULTY_NORMAL][TRAINER_843DFC91] =
    {
#line 9331
        .trainerName = _("843DFC91"),
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
    [DIFFICULTY_NORMAL][TRAINER_857ACD94] =
    {
#line 9339
        .trainerName = _("857ACD94"),
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
    [DIFFICULTY_NORMAL][TRAINER_8580525E] =
    {
#line 9347
        .trainerName = _("8580525E"),
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
    [DIFFICULTY_NORMAL][TRAINER_866AE208] =
    {
#line 9355
        .trainerName = _("866AE208"),
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
    [DIFFICULTY_NORMAL][TRAINER_8677EFB3] =
    {
#line 9363
        .trainerName = _("8677EFB3"),
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
    [DIFFICULTY_NORMAL][TRAINER_86D37FF1] =
    {
#line 9371
        .trainerName = _("86D37FF1"),
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
    [DIFFICULTY_NORMAL][TRAINER_86F7AA4A] =
    {
#line 9379
        .trainerName = _("86F7AA4A"),
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
    [DIFFICULTY_NORMAL][TRAINER_872183CD] =
    {
#line 9387
        .trainerName = _("872183CD"),
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
    [DIFFICULTY_NORMAL][TRAINER_87B5E929] =
    {
#line 9395
        .trainerName = _("87B5E929"),
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
    [DIFFICULTY_NORMAL][TRAINER_885C781B] =
    {
#line 9403
        .trainerName = _("885C781B"),
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
    [DIFFICULTY_NORMAL][TRAINER_8878003B] =
    {
#line 9411
        .trainerName = _("8878003B"),
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
    [DIFFICULTY_NORMAL][TRAINER_88864D1E] =
    {
#line 9419
        .trainerName = _("88864D1E"),
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
    [DIFFICULTY_NORMAL][TRAINER_8972F540] =
    {
#line 9427
        .trainerName = _("8972F540"),
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
    [DIFFICULTY_NORMAL][TRAINER_898AF31D] =
    {
#line 9435
        .trainerName = _("898AF31D"),
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
    [DIFFICULTY_NORMAL][TRAINER_8A0B40C0] =
    {
#line 9443
        .trainerName = _("8A0B40C0"),
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
    [DIFFICULTY_NORMAL][TRAINER_8A2C65A3] =
    {
#line 9451
        .trainerName = _("8A2C65A3"),
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
    [DIFFICULTY_NORMAL][TRAINER_8A829476] =
    {
#line 9459
        .trainerName = _("8A829476"),
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
    [DIFFICULTY_NORMAL][TRAINER_8AC1B5C1] =
    {
#line 9467
        .trainerName = _("8AC1B5C1"),
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
    [DIFFICULTY_NORMAL][TRAINER_8AF40B23] =
    {
#line 9475
        .trainerName = _("8AF40B23"),
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
    [DIFFICULTY_NORMAL][TRAINER_8B31AC38] =
    {
#line 9483
        .trainerName = _("8B31AC38"),
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
    [DIFFICULTY_NORMAL][TRAINER_8B32317E] =
    {
#line 9491
        .trainerName = _("8B32317E"),
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
    [DIFFICULTY_NORMAL][TRAINER_8B3657A9] =
    {
#line 9499
        .trainerName = _("8B3657A9"),
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
    [DIFFICULTY_NORMAL][TRAINER_8B3C49E3] =
    {
#line 9507
        .trainerName = _("8B3C49E3"),
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
    [DIFFICULTY_NORMAL][TRAINER_8B6D195D] =
    {
#line 9515
        .trainerName = _("8B6D195D"),
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
    [DIFFICULTY_NORMAL][TRAINER_8BB65E5E] =
    {
#line 9523
        .trainerName = _("8BB65E5E"),
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
    [DIFFICULTY_NORMAL][TRAINER_8C186D17] =
    {
#line 9531
        .trainerName = _("8C186D17"),
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
    [DIFFICULTY_NORMAL][TRAINER_8C853607] =
    {
#line 9539
        .trainerName = _("8C853607"),
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
    [DIFFICULTY_NORMAL][TRAINER_8D6D5B2C] =
    {
#line 9547
        .trainerName = _("8D6D5B2C"),
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
    [DIFFICULTY_NORMAL][TRAINER_8D93124A] =
    {
#line 9555
        .trainerName = _("8D93124A"),
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
    [DIFFICULTY_NORMAL][TRAINER_8DAF08C5] =
    {
#line 9563
        .trainerName = _("8DAF08C5"),
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
    [DIFFICULTY_NORMAL][TRAINER_8DE17D94] =
    {
#line 9571
        .trainerName = _("8DE17D94"),
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
    [DIFFICULTY_NORMAL][TRAINER_8E60CF6E] =
    {
#line 9579
        .trainerName = _("8E60CF6E"),
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
    [DIFFICULTY_NORMAL][TRAINER_8EA873A0] =
    {
#line 9587
        .trainerName = _("8EA873A0"),
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
    [DIFFICULTY_NORMAL][TRAINER_8EB76821] =
    {
#line 9595
        .trainerName = _("8EB76821"),
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
    [DIFFICULTY_NORMAL][TRAINER_8ED15D51] =
    {
#line 9603
        .trainerName = _("8ED15D51"),
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
    [DIFFICULTY_NORMAL][TRAINER_8F28F86A] =
    {
#line 9611
        .trainerName = _("8F28F86A"),
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
    [DIFFICULTY_NORMAL][TRAINER_8F2EA270] =
    {
#line 9619
        .trainerName = _("8F2EA270"),
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
    [DIFFICULTY_NORMAL][TRAINER_8F9579E4] =
    {
#line 9627
        .trainerName = _("8F9579E4"),
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
    [DIFFICULTY_NORMAL][TRAINER_8F988020] =
    {
#line 9635
        .trainerName = _("8F988020"),
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
    [DIFFICULTY_NORMAL][TRAINER_8FE817BA] =
    {
#line 9643
        .trainerName = _("8FE817BA"),
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
    [DIFFICULTY_NORMAL][TRAINER_90353D81] =
    {
#line 9651
        .trainerName = _("90353D81"),
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
    [DIFFICULTY_NORMAL][TRAINER_9054973F] =
    {
#line 9659
        .trainerName = _("9054973F"),
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
    [DIFFICULTY_NORMAL][TRAINER_90A72ACF] =
    {
#line 9667
        .trainerName = _("90A72ACF"),
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
    [DIFFICULTY_NORMAL][TRAINER_90E1658C] =
    {
#line 9675
        .trainerName = _("90E1658C"),
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
    [DIFFICULTY_NORMAL][TRAINER_918A1734] =
    {
#line 9683
        .trainerName = _("918A1734"),
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
    [DIFFICULTY_NORMAL][TRAINER_91D249C3] =
    {
#line 9691
        .trainerName = _("91D249C3"),
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
    [DIFFICULTY_NORMAL][TRAINER_91D48E4E] =
    {
#line 9699
        .trainerName = _("91D48E4E"),
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
    [DIFFICULTY_NORMAL][TRAINER_922542C3] =
    {
#line 9707
        .trainerName = _("922542C3"),
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
    [DIFFICULTY_NORMAL][TRAINER_93009D3B] =
    {
#line 9715
        .trainerName = _("93009D3B"),
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
    [DIFFICULTY_NORMAL][TRAINER_93D9B506] =
    {
#line 9723
        .trainerName = _("93D9B506"),
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
    [DIFFICULTY_NORMAL][TRAINER_9427896B] =
    {
#line 9731
        .trainerName = _("9427896B"),
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
    [DIFFICULTY_NORMAL][TRAINER_9501C16B] =
    {
#line 9739
        .trainerName = _("9501C16B"),
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
    [DIFFICULTY_NORMAL][TRAINER_9566DD87] =
    {
#line 9747
        .trainerName = _("9566DD87"),
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
    [DIFFICULTY_NORMAL][TRAINER_95A74E78] =
    {
#line 9755
        .trainerName = _("95A74E78"),
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
    [DIFFICULTY_NORMAL][TRAINER_963F893A] =
    {
#line 9763
        .trainerName = _("963F893A"),
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
    [DIFFICULTY_NORMAL][TRAINER_966F37E6] =
    {
#line 9771
        .trainerName = _("966F37E6"),
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
    [DIFFICULTY_NORMAL][TRAINER_96859C9B] =
    {
#line 9779
        .trainerName = _("96859C9B"),
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
    [DIFFICULTY_NORMAL][TRAINER_9695D7CC] =
    {
#line 9787
        .trainerName = _("9695D7CC"),
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
    [DIFFICULTY_NORMAL][TRAINER_96A60AED] =
    {
#line 9795
        .trainerName = _("96A60AED"),
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
    [DIFFICULTY_NORMAL][TRAINER_973C00CE] =
    {
#line 9803
        .trainerName = _("973C00CE"),
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
    [DIFFICULTY_NORMAL][TRAINER_9784BB4E] =
    {
#line 9811
        .trainerName = _("9784BB4E"),
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
    [DIFFICULTY_NORMAL][TRAINER_9834CDCC] =
    {
#line 9819
        .trainerName = _("9834CDCC"),
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
    [DIFFICULTY_NORMAL][TRAINER_98547A36] =
    {
#line 9827
        .trainerName = _("98547A36"),
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
    [DIFFICULTY_NORMAL][TRAINER_98C7143B] =
    {
#line 9835
        .trainerName = _("98C7143B"),
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
    [DIFFICULTY_NORMAL][TRAINER_992FCC96] =
    {
#line 9843
        .trainerName = _("992FCC96"),
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
    [DIFFICULTY_NORMAL][TRAINER_99D74322] =
    {
#line 9851
        .trainerName = _("99D74322"),
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
    [DIFFICULTY_NORMAL][TRAINER_9A45ED29] =
    {
#line 9859
        .trainerName = _("9A45ED29"),
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
    [DIFFICULTY_NORMAL][TRAINER_9AAFB9A8] =
    {
#line 9867
        .trainerName = _("9AAFB9A8"),
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
    [DIFFICULTY_NORMAL][TRAINER_9B4CAAEF] =
    {
#line 9875
        .trainerName = _("9B4CAAEF"),
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
    [DIFFICULTY_NORMAL][TRAINER_9B92F975] =
    {
#line 9883
        .trainerName = _("9B92F975"),
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
    [DIFFICULTY_NORMAL][TRAINER_9BA8D6B8] =
    {
#line 9891
        .trainerName = _("9BA8D6B8"),
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
    [DIFFICULTY_NORMAL][TRAINER_9BBA4D3E] =
    {
#line 9899
        .trainerName = _("9BBA4D3E"),
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
    [DIFFICULTY_NORMAL][TRAINER_9BD745C1] =
    {
#line 9907
        .trainerName = _("9BD745C1"),
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
    [DIFFICULTY_NORMAL][TRAINER_9C9A9B43] =
    {
#line 9915
        .trainerName = _("9C9A9B43"),
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
    [DIFFICULTY_NORMAL][TRAINER_9CC51698] =
    {
#line 9923
        .trainerName = _("9CC51698"),
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
    [DIFFICULTY_NORMAL][TRAINER_9D0B799C] =
    {
#line 9931
        .trainerName = _("9D0B799C"),
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
    [DIFFICULTY_NORMAL][TRAINER_9D2974CA] =
    {
#line 9939
        .trainerName = _("9D2974CA"),
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
    [DIFFICULTY_NORMAL][TRAINER_9DE6AF69] =
    {
#line 9947
        .trainerName = _("9DE6AF69"),
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
    [DIFFICULTY_NORMAL][TRAINER_9E9E96C3] =
    {
#line 9955
        .trainerName = _("9E9E96C3"),
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
    [DIFFICULTY_NORMAL][TRAINER_9EBDE860] =
    {
#line 9963
        .trainerName = _("9EBDE860"),
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
    [DIFFICULTY_NORMAL][TRAINER_9F335F56] =
    {
#line 9971
        .trainerName = _("9F335F56"),
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
    [DIFFICULTY_NORMAL][TRAINER_9FB07CC0] =
    {
#line 9979
        .trainerName = _("9FB07CC0"),
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
    [DIFFICULTY_NORMAL][TRAINER_9FFBEDD1] =
    {
#line 9987
        .trainerName = _("9FFBEDD1"),
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
    [DIFFICULTY_NORMAL][TRAINER_A03F3B0B] =
    {
#line 9995
        .trainerName = _("A03F3B0B"),
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
    [DIFFICULTY_NORMAL][TRAINER_A0852317] =
    {
#line 10003
        .trainerName = _("A0852317"),
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
    [DIFFICULTY_NORMAL][TRAINER_A0CE2BCF] =
    {
#line 10011
        .trainerName = _("A0CE2BCF"),
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
    [DIFFICULTY_NORMAL][TRAINER_A122FEC6] =
    {
#line 10019
        .trainerName = _("A122FEC6"),
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
    [DIFFICULTY_NORMAL][TRAINER_A1502FA5] =
    {
#line 10027
        .trainerName = _("A1502FA5"),
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
    [DIFFICULTY_NORMAL][TRAINER_A173BD9E] =
    {
#line 10035
        .trainerName = _("A173BD9E"),
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
    [DIFFICULTY_NORMAL][TRAINER_A1B34299] =
    {
#line 10043
        .trainerName = _("A1B34299"),
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
    [DIFFICULTY_NORMAL][TRAINER_A226BBD6] =
    {
#line 10051
        .trainerName = _("A226BBD6"),
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
    [DIFFICULTY_NORMAL][TRAINER_A26B64E5] =
    {
#line 10059
        .trainerName = _("A26B64E5"),
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
    [DIFFICULTY_NORMAL][TRAINER_A2F2E8FF] =
    {
#line 10067
        .trainerName = _("A2F2E8FF"),
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
    [DIFFICULTY_NORMAL][TRAINER_A30D6A65] =
    {
#line 10075
        .trainerName = _("A30D6A65"),
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
    [DIFFICULTY_NORMAL][TRAINER_A33F468D] =
    {
#line 10083
        .trainerName = _("A33F468D"),
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
    [DIFFICULTY_NORMAL][TRAINER_A377CCDF] =
    {
#line 10091
        .trainerName = _("A377CCDF"),
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
    [DIFFICULTY_NORMAL][TRAINER_A393F9F0] =
    {
#line 10099
        .trainerName = _("A393F9F0"),
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
    [DIFFICULTY_NORMAL][TRAINER_A39AB67C] =
    {
#line 10107
        .trainerName = _("A39AB67C"),
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
    [DIFFICULTY_NORMAL][TRAINER_A3EBD43B] =
    {
#line 10115
        .trainerName = _("A3EBD43B"),
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
    [DIFFICULTY_NORMAL][TRAINER_A489434F] =
    {
#line 10123
        .trainerName = _("A489434F"),
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
    [DIFFICULTY_NORMAL][TRAINER_A49FED84] =
    {
#line 10131
        .trainerName = _("A49FED84"),
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
    [DIFFICULTY_NORMAL][TRAINER_A4BDD551] =
    {
#line 10139
        .trainerName = _("A4BDD551"),
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
    [DIFFICULTY_NORMAL][TRAINER_A4D47D9E] =
    {
#line 10147
        .trainerName = _("A4D47D9E"),
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
    [DIFFICULTY_NORMAL][TRAINER_A4DC84A0] =
    {
#line 10155
        .trainerName = _("A4DC84A0"),
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
    [DIFFICULTY_NORMAL][TRAINER_A4EC97B5] =
    {
#line 10163
        .trainerName = _("A4EC97B5"),
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
    [DIFFICULTY_NORMAL][TRAINER_A50CF67B] =
    {
#line 10171
        .trainerName = _("A50CF67B"),
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
    [DIFFICULTY_NORMAL][TRAINER_A62D49C6] =
    {
#line 10179
        .trainerName = _("A62D49C6"),
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
    [DIFFICULTY_NORMAL][TRAINER_A6328173] =
    {
#line 10187
        .trainerName = _("A6328173"),
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
    [DIFFICULTY_NORMAL][TRAINER_A646F21E] =
    {
#line 10195
        .trainerName = _("A646F21E"),
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
    [DIFFICULTY_NORMAL][TRAINER_A685428F] =
    {
#line 10203
        .trainerName = _("A685428F"),
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
    [DIFFICULTY_NORMAL][TRAINER_B438F348] =
    {
#line 10619
        .trainerName = _("B438F348"),
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
    [DIFFICULTY_NORMAL][TRAINER_B489F821] =
    {
#line 10627
        .trainerName = _("B489F821"),
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
    [DIFFICULTY_NORMAL][TRAINER_B490300F] =
    {
#line 10635
        .trainerName = _("B490300F"),
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
    [DIFFICULTY_NORMAL][TRAINER_B53E1C28] =
    {
#line 10643
        .trainerName = _("B53E1C28"),
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
    [DIFFICULTY_NORMAL][TRAINER_B5E055E7] =
    {
#line 10651
        .trainerName = _("B5E055E7"),
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
    [DIFFICULTY_NORMAL][TRAINER_B6330B06] =
    {
#line 10659
        .trainerName = _("B6330B06"),
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
    [DIFFICULTY_NORMAL][TRAINER_B66CAB9E] =
    {
#line 10667
        .trainerName = _("B66CAB9E"),
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
    [DIFFICULTY_NORMAL][TRAINER_B6E3D521] =
    {
#line 10675
        .trainerName = _("B6E3D521"),
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
    [DIFFICULTY_NORMAL][TRAINER_B6F23A27] =
    {
#line 10683
        .trainerName = _("B6F23A27"),
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
    [DIFFICULTY_NORMAL][TRAINER_B71419A1] =
    {
#line 10691
        .trainerName = _("B71419A1"),
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
#line 10698
    [DIFFICULTY_NORMAL][TRAINER_B77C014B] =
    {
#line 10699
        .trainerName = _("B77C014B"),
#line 10700
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10701
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10703
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10705
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10704
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10706
    [DIFFICULTY_NORMAL][TRAINER_B791766D] =
    {
#line 10707
        .trainerName = _("B791766D"),
#line 10708
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10709
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10711
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10713
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10712
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10714
    [DIFFICULTY_NORMAL][TRAINER_B7998A66] =
    {
#line 10715
        .trainerName = _("B7998A66"),
#line 10716
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10717
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10719
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10721
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10720
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10722
    [DIFFICULTY_NORMAL][TRAINER_B7C2EB7F] =
    {
#line 10723
        .trainerName = _("B7C2EB7F"),
#line 10724
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10725
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10727
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10729
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10728
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10730
    [DIFFICULTY_NORMAL][TRAINER_B7EFEE71] =
    {
#line 10731
        .trainerName = _("B7EFEE71"),
#line 10732
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10733
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10735
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10737
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10736
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10738
    [DIFFICULTY_NORMAL][TRAINER_B84B3D2A] =
    {
#line 10739
        .trainerName = _("B84B3D2A"),
#line 10740
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10741
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10743
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10745
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10744
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10746
    [DIFFICULTY_NORMAL][TRAINER_B8C5628C] =
    {
#line 10747
        .trainerName = _("B8C5628C"),
#line 10748
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10749
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10751
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10753
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10752
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10754
    [DIFFICULTY_NORMAL][TRAINER_B94D66E3] =
    {
#line 10755
        .trainerName = _("B94D66E3"),
#line 10756
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10757
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10759
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10761
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10760
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10762
    [DIFFICULTY_NORMAL][TRAINER_B9C56D15] =
    {
#line 10763
        .trainerName = _("B9C56D15"),
#line 10764
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10765
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10767
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10769
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10768
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10770
    [DIFFICULTY_NORMAL][TRAINER_BA12D98F] =
    {
#line 10771
        .trainerName = _("BA12D98F"),
#line 10772
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10773
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10775
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10777
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10776
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10778
    [DIFFICULTY_NORMAL][TRAINER_BA4155D3] =
    {
#line 10779
        .trainerName = _("BA4155D3"),
#line 10780
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10781
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10783
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10785
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10784
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10786
    [DIFFICULTY_NORMAL][TRAINER_BA4DFC3A] =
    {
#line 10787
        .trainerName = _("BA4DFC3A"),
#line 10788
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10789
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10791
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10793
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10792
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10794
    [DIFFICULTY_NORMAL][TRAINER_BA60011F] =
    {
#line 10795
        .trainerName = _("BA60011F"),
#line 10796
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10797
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10799
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10801
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10800
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10802
    [DIFFICULTY_NORMAL][TRAINER_BA924FF7] =
    {
#line 10803
        .trainerName = _("BA924FF7"),
#line 10804
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10805
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10807
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10809
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10808
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10810
    [DIFFICULTY_NORMAL][TRAINER_BB07DD1B] =
    {
#line 10811
        .trainerName = _("BB07DD1B"),
#line 10812
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10813
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10815
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10817
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10816
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10818
    [DIFFICULTY_NORMAL][TRAINER_BB531FBA] =
    {
#line 10819
        .trainerName = _("BB531FBA"),
#line 10820
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10821
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10823
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10825
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10824
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10826
    [DIFFICULTY_NORMAL][TRAINER_BB6FD0A4] =
    {
#line 10827
        .trainerName = _("BB6FD0A4"),
#line 10828
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10829
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10831
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10833
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10832
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10834
    [DIFFICULTY_NORMAL][TRAINER_BBBC4B4C] =
    {
#line 10835
        .trainerName = _("BBBC4B4C"),
#line 10836
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10837
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10839
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10841
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10840
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10842
    [DIFFICULTY_NORMAL][TRAINER_BBD56E26] =
    {
#line 10843
        .trainerName = _("BBD56E26"),
#line 10844
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10845
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10847
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10849
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10848
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10850
    [DIFFICULTY_NORMAL][TRAINER_BC01A85B] =
    {
#line 10851
        .trainerName = _("BC01A85B"),
#line 10852
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10855
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10857
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10856
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10858
    [DIFFICULTY_NORMAL][TRAINER_BC74FA1D] =
    {
#line 10859
        .trainerName = _("BC74FA1D"),
#line 10860
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10861
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10863
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10865
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10864
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10866
    [DIFFICULTY_NORMAL][TRAINER_BC7E8D55] =
    {
#line 10867
        .trainerName = _("BC7E8D55"),
#line 10868
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10869
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10871
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10873
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10872
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10874
    [DIFFICULTY_NORMAL][TRAINER_BCDFD312] =
    {
#line 10875
        .trainerName = _("BCDFD312"),
#line 10876
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10877
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10879
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10881
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10880
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10882
    [DIFFICULTY_NORMAL][TRAINER_BCEFD799] =
    {
#line 10883
        .trainerName = _("BCEFD799"),
#line 10884
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10885
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10887
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10889
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10888
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10890
    [DIFFICULTY_NORMAL][TRAINER_BD01F8F4] =
    {
#line 10891
        .trainerName = _("BD01F8F4"),
#line 10892
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10893
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10895
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10897
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10896
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10898
    [DIFFICULTY_NORMAL][TRAINER_BDC38E1E] =
    {
#line 10899
        .trainerName = _("BDC38E1E"),
#line 10900
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10901
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10903
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10905
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10904
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10906
    [DIFFICULTY_NORMAL][TRAINER_BE2AF14F] =
    {
#line 10907
        .trainerName = _("BE2AF14F"),
#line 10908
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10909
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10911
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10913
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10912
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10914
    [DIFFICULTY_NORMAL][TRAINER_BEB2BD3E] =
    {
#line 10915
        .trainerName = _("BEB2BD3E"),
#line 10916
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10917
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10919
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10921
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10920
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10922
    [DIFFICULTY_NORMAL][TRAINER_BF07B94F] =
    {
#line 10923
        .trainerName = _("BF07B94F"),
#line 10924
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10925
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10927
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10929
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10928
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10930
    [DIFFICULTY_NORMAL][TRAINER_BF2827C0] =
    {
#line 10931
        .trainerName = _("BF2827C0"),
#line 10932
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10933
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10935
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10937
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10936
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10938
    [DIFFICULTY_NORMAL][TRAINER_BF74896F] =
    {
#line 10939
        .trainerName = _("BF74896F"),
#line 10940
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10941
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10943
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10945
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10944
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10946
    [DIFFICULTY_NORMAL][TRAINER_BF8ADEF1] =
    {
#line 10947
        .trainerName = _("BF8ADEF1"),
#line 10948
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10949
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10951
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10953
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10952
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10954
    [DIFFICULTY_NORMAL][TRAINER_C0800804] =
    {
#line 10955
        .trainerName = _("C0800804"),
#line 10956
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10957
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10959
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10961
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10960
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10962
    [DIFFICULTY_NORMAL][TRAINER_C091F2C5] =
    {
#line 10963
        .trainerName = _("C091F2C5"),
#line 10964
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10965
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10967
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10969
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10968
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10970
    [DIFFICULTY_NORMAL][TRAINER_C10351D2] =
    {
#line 10971
        .trainerName = _("C10351D2"),
#line 10972
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10973
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10975
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10977
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10976
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10978
    [DIFFICULTY_NORMAL][TRAINER_C1C428F7] =
    {
#line 10979
        .trainerName = _("C1C428F7"),
#line 10980
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10981
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10983
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10985
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10984
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10986
    [DIFFICULTY_NORMAL][TRAINER_C1C621AC] =
    {
#line 10987
        .trainerName = _("C1C621AC"),
#line 10988
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10989
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10991
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10993
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10992
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10994
    [DIFFICULTY_NORMAL][TRAINER_C203C024] =
    {
#line 10995
        .trainerName = _("C203C024"),
#line 10996
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10999
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11001
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11000
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11002
    [DIFFICULTY_NORMAL][TRAINER_C2174D90] =
    {
#line 11003
        .trainerName = _("C2174D90"),
#line 11004
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11005
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11007
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11009
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11008
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11010
    [DIFFICULTY_NORMAL][TRAINER_C24EFC92] =
    {
#line 11011
        .trainerName = _("C24EFC92"),
#line 11012
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11013
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11015
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11017
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11016
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11018
    [DIFFICULTY_NORMAL][TRAINER_C290C9F5] =
    {
#line 11019
        .trainerName = _("C290C9F5"),
#line 11020
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11021
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11023
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11025
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11024
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11026
    [DIFFICULTY_NORMAL][TRAINER_C29CDC34] =
    {
#line 11027
        .trainerName = _("C29CDC34"),
#line 11028
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11029
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11031
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11033
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11032
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11034
    [DIFFICULTY_NORMAL][TRAINER_C3B3B17B] =
    {
#line 11035
        .trainerName = _("C3B3B17B"),
#line 11036
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11037
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11039
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11041
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11040
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11042
    [DIFFICULTY_NORMAL][TRAINER_C414BED0] =
    {
#line 11043
        .trainerName = _("C414BED0"),
#line 11044
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11045
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11047
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11049
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11048
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11050
    [DIFFICULTY_NORMAL][TRAINER_C42A775B] =
    {
#line 11051
        .trainerName = _("C42A775B"),
#line 11052
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11053
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11055
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11057
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11056
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11058
    [DIFFICULTY_NORMAL][TRAINER_C4A167E0] =
    {
#line 11059
        .trainerName = _("C4A167E0"),
#line 11060
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11061
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11063
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11065
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11064
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11066
    [DIFFICULTY_NORMAL][TRAINER_C4C98FC4] =
    {
#line 11067
        .trainerName = _("C4C98FC4"),
#line 11068
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11069
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11071
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11073
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11072
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11074
    [DIFFICULTY_NORMAL][TRAINER_C533F091] =
    {
#line 11075
        .trainerName = _("C533F091"),
#line 11076
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11077
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11079
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11081
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11080
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11082
    [DIFFICULTY_NORMAL][TRAINER_C6600959] =
    {
#line 11083
        .trainerName = _("C6600959"),
#line 11084
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11085
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11087
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11089
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11088
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11090
    [DIFFICULTY_NORMAL][TRAINER_C6666859] =
    {
#line 11091
        .trainerName = _("C6666859"),
#line 11092
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11093
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11095
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11097
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11096
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11098
    [DIFFICULTY_NORMAL][TRAINER_C690158D] =
    {
#line 11099
        .trainerName = _("C690158D"),
#line 11100
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11101
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11103
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11105
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11104
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11106
    [DIFFICULTY_NORMAL][TRAINER_C6E61EDA] =
    {
#line 11107
        .trainerName = _("C6E61EDA"),
#line 11108
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11109
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11111
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11113
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11112
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11114
    [DIFFICULTY_NORMAL][TRAINER_C7630112] =
    {
#line 11115
        .trainerName = _("C7630112"),
#line 11116
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11117
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11119
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11121
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11120
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11122
    [DIFFICULTY_NORMAL][TRAINER_C789FBF5] =
    {
#line 11123
        .trainerName = _("C789FBF5"),
#line 11124
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11125
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11127
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11129
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11128
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11130
    [DIFFICULTY_NORMAL][TRAINER_C7E06CB4] =
    {
#line 11131
        .trainerName = _("C7E06CB4"),
#line 11132
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11133
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11135
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11137
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11136
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11138
    [DIFFICULTY_NORMAL][TRAINER_C7F16F5B] =
    {
#line 11139
        .trainerName = _("C7F16F5B"),
#line 11140
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11141
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11143
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11145
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11144
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11146
    [DIFFICULTY_NORMAL][TRAINER_C82E0F99] =
    {
#line 11147
        .trainerName = _("C82E0F99"),
#line 11148
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11149
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11151
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11153
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11152
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11154
    [DIFFICULTY_NORMAL][TRAINER_C84D5BA6] =
    {
#line 11155
        .trainerName = _("C84D5BA6"),
#line 11156
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11157
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11159
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11161
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11160
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11162
    [DIFFICULTY_NORMAL][TRAINER_C8563FAA] =
    {
#line 11163
        .trainerName = _("C8563FAA"),
#line 11164
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11165
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11167
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11169
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11168
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11170
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 11171
        .trainerName = _("LEAF"),
#line 11172
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11175
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11177
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11176
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11178
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 11179
        .trainerName = _("RED"),
#line 11180
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11181
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11183
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11185
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11184
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
