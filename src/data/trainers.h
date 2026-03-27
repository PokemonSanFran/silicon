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
    [DIFFICULTY_NORMAL][TRAINER_KAI_ASSHOLEHOME] =
    {
#line 398
        .trainerName = _("Kai"),
#line 400
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 399
        .trainerPic = TRAINER_PIC_FRONT_KAI,
#line 402
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 401
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_KAI,
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
    [DIFFICULTY_NORMAL][TRAINER_KAUNA] =
    {
#line 457
        .trainerName = _("Kauna"),
#line 461
        .trainerClass = TRAINER_CLASS_LEADER,
#line 458
        .trainerPic = TRAINER_PIC_FRONT_KAUNA,
#line 459
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 460
        .characterRevealId = REVEAL_KAUNA,
#line 462
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 463
        .objectEventGraphicsId = OBJ_EVENT_GFX_KAUNA,
#line 464
        .mapSec = MAPSEC_CHASILLA,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_KAUNA,
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
    [DIFFICULTY_NORMAL][TRAINER_KAI_BATTLE8] =
    {
#line 961
        .trainerName = _("Kai"),
#line 963
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 962
        .trainerPic = TRAINER_PIC_FRONT_KAI,
#line 965
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 964
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_KAI,
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
    [DIFFICULTY_NORMAL][TRAINER_ALCMENE] =
    {
#line 1122
        .trainerName = _("Alcmene"),
#line 1127
        .trainerClass = TRAINER_CLASS_THE_TIDE_LEADER,
#line 1123
        .trainerPic = TRAINER_PIC_FRONT_ALCMENE,
#line 1125
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1124
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 1126
        .characterRevealId = REVEAL_ALCMENE,
#line 1128
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 1129
        .objectEventGraphicsId = OBJ_EVENT_GFX_ALCMENE,
#line 1130
        .mapSec = MAPSEC_NAVAL_BASE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ALCMENE,
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
    [DIFFICULTY_NORMAL][TRAINER_KAI_WHYAREYOUHELPINGTHEM] =
    {
#line 1211
        .trainerName = _("Kai"),
#line 1213
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 1212
        .trainerPic = TRAINER_PIC_FRONT_KAI,
#line 1215
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1214
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_KAI,
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
    [DIFFICULTY_NORMAL][TRAINER_KAI_FINALS] =
    {
#line 1472
        .trainerName = _("Kai"),
#line 1474
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 1473
        .trainerPic = TRAINER_PIC_FRONT_KAI,
#line 1475
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_KAI,
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
    [DIFFICULTY_NORMAL][TRAINER_KAI_LETSGRABLUNCH] =
    {
#line 1557
        .trainerName = _("Kai"),
#line 1559
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 1558
        .trainerPic = TRAINER_PIC_FRONT_KAI,
#line 1561
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1560
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_KAI,
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
    [DIFFICULTY_NORMAL][TRAINER_KAI_LETSBURNTHISMOTHERDOWN] =
    {
#line 1896
        .trainerName = _("Kai"),
#line 1898
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 1897
        .trainerPic = TRAINER_PIC_FRONT_KAI,
#line 1900
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1899
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_KAI,
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
    [DIFFICULTY_NORMAL][TRAINER_ADELAIDE_A] =
    {
#line 2682
        .trainerName = _("Adelaide"),
#line 2686
        .trainerClass = TRAINER_CLASS_SHARPRISE_CEO,
#line 2683
        .trainerPic = TRAINER_PIC_FRONT_ADELAIDE,
#line 2684
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2685
        .characterRevealId = REVEAL_ADELAIDE,
#line 2687
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2688
        .objectEventGraphicsId = OBJ_EVENT_GFX_ADELAIDE,
#line 2689
        .mapSec = MAPSEC_SHARPRISESPIRE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ADELAIDE,
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
    [DIFFICULTY_NORMAL][TRAINER_ADELAIDE_B] =
    {
#line 2775
        .trainerName = _("Adelaide"),
#line 2779
        .trainerClass = TRAINER_CLASS_SHARPRISE_CEO,
#line 2776
        .trainerPic = TRAINER_PIC_FRONT_ADELAIDE,
#line 2777
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2778
        .characterRevealId = REVEAL_ADELAIDE,
#line 2780
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2781
        .objectEventGraphicsId = OBJ_EVENT_GFX_ADELAIDE,
#line 2782
        .mapSec = MAPSEC_SHARPRISESPIRE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ADELAIDE,
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
    [DIFFICULTY_NORMAL][TRAINER_ELLEN] =
    {
#line 2955
        .trainerName = _("Ellen"),
#line 2956
        .trainerPic = TRAINER_PIC_FRONT_ELLEN,
#line 2958
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2957
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2959
        .characterRevealId = REVEAL_ELLEN,
#line 2960
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2961
        .objectEventGraphicsId = OBJ_EVENT_GFX_ELLEN,
#line 2962
        .mapSec = MAPSEC_NAVAL_BASE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ELLEN,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2964
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2964
            .heldItem = ITEM_SITRUS_BERRY,
#line 2970
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
#line 2972
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2965
            .ability = ABILITY_SERENE_GRACE,
#line 2966
            .lvl = 89,
#line 2967
            .ball = BALL_MASTER,
#line 2969
            .friendship = 1,
#line 2971
            .nature = NATURE_MODEST,
#line 2968
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2973
                MOVE_AIR_SLASH,
                MOVE_ANCIENT_POWER,
                MOVE_DAZZLING_GLEAM,
                MOVE_HEAT_WAVE,
            },
            },
            {
#line 2978
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2978
            .heldItem = ITEM_SWAMPERTITE,
#line 2984
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 2986
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2979
            .ability = ABILITY_TORRENT,
#line 2980
            .lvl = 91,
#line 2981
            .ball = BALL_MASTER,
#line 2983
            .friendship = 1,
#line 2985
            .nature = NATURE_ADAMANT,
#line 2982
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2986
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ICE_PUNCH,
                MOVE_WATERFALL,
            },
            },
            {
#line 2991
            .species = SPECIES_DHELMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2991
            .heldItem = ITEM_GRASSIUM_Z,
#line 2997
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2999
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2992
            .ability = ABILITY_STEELWORKER,
#line 2993
            .lvl = 89,
#line 2994
            .ball = BALL_MASTER,
#line 2996
            .friendship = 1,
#line 2998
            .nature = NATURE_JOLLY,
#line 2995
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2999
                MOVE_POWER_WHIP,
                MOVE_PHANTOM_FORCE,
                MOVE_ANCHOR_SHOT,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 3004
            .species = SPECIES_WYRDEER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3004
            .heldItem = ITEM_NORMAL_GEM,
#line 3010
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3012
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3005
            .ability = ABILITY_INTIMIDATE,
#line 3006
            .lvl = 90,
#line 3007
            .ball = BALL_MASTER,
#line 3009
            .friendship = 1,
#line 3011
            .nature = NATURE_ADAMANT,
#line 3008
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3012
                MOVE_BODY_SLAM,
                MOVE_BITE,
                MOVE_ZEN_HEADBUTT,
                MOVE_HIGH_HORSEPOWER,
            },
            },
            {
#line 3017
            .species = SPECIES_TOXAPEX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3017
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3023
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 3025
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3018
            .ability = ABILITY_MERCILESS,
#line 3019
            .lvl = 89,
#line 3020
            .ball = BALL_MASTER,
#line 3022
            .friendship = 1,
#line 3024
            .nature = NATURE_ADAMANT,
#line 3021
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3025
                MOVE_POISON_JAB,
                MOVE_LIQUIDATION,
                MOVE_TOXIC,
                MOVE_BANEFUL_BUNKER,
            },
            },
            {
#line 3030
            .species = SPECIES_ARCHALUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3030
            .heldItem = ITEM_ASSAULT_VEST,
#line 3036
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
#line 3038
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3031
            .ability = ABILITY_STAMINA,
#line 3032
            .lvl = 90,
#line 3033
            .ball = BALL_MASTER,
#line 3035
            .friendship = 1,
#line 3037
            .nature = NATURE_MODEST,
#line 3034
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3039
                MOVE_DRAGON_PULSE,
                MOVE_FLASH_CANNON,
                MOVE_BODY_PRESS,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 3044
    [DIFFICULTY_NORMAL][TRAINER_ARMANDO] =
    {
#line 3045
        .trainerName = _("Armando"),
#line 3046
        .trainerPic = TRAINER_PIC_FRONT_ARMANDO,
#line 3048
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3047
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3049
        .characterRevealId = REVEAL_ARMANDO,
#line 3050
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 3051
        .objectEventGraphicsId = OBJ_EVENT_GFX_ARMANDO,
#line 3052
        .mapSec = MAPSEC_LEAVERRA_FOREST,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ARMANDO,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3054
            .species = SPECIES_SCOVILLAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3054
            .heldItem = ITEM_LIFE_ORB,
#line 3060
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 176, 232, 0),
#line 3062
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3055
            .ability = ABILITY_CHLOROPHYLL,
#line 3056
            .lvl = 87,
#line 3057
            .ball = BALL_MASTER,
#line 3059
            .friendship = 1,
#line 3061
            .nature = NATURE_MODEST,
#line 3058
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3063
                MOVE_FLAMETHROWER,
                MOVE_ENERGY_BALL,
                MOVE_WILL_O_WISP,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 3068
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3068
            .heldItem = ITEM_DRAGON_GEM,
#line 3074
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 3076
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3069
            .ability = ABILITY_LEVITATE,
#line 3070
            .lvl = 88,
#line 3071
            .ball = BALL_MASTER,
#line 3073
            .friendship = 1,
#line 3075
            .nature = NATURE_TIMID,
#line 3072
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3077
                MOVE_HEAT_WAVE,
                MOVE_DARK_PULSE,
                MOVE_DRACO_METEOR,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 3082
            .species = SPECIES_MUSHARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3082
            .heldItem = ITEM_LEFTOVERS,
#line 3088
            .ev = TRAINER_PARTY_EVS(252, 0, 220, 0, 0, 36),
#line 3090
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3083
            .ability = ABILITY_TELEPATHY,
#line 3084
            .lvl = 88,
#line 3085
            .ball = BALL_MASTER,
#line 3087
            .friendship = 1,
#line 3089
            .nature = NATURE_BOLD,
#line 3086
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3091
                MOVE_PSYCHIC,
                MOVE_DAZZLING_GLEAM,
                MOVE_CALM_MIND,
                MOVE_MOONLIGHT,
            },
            },
            {
#line 3096
            .species = SPECIES_URSALUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3096
            .heldItem = ITEM_FLAME_ORB,
#line 3102
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3104
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3097
            .ability = ABILITY_GUTS,
#line 3098
            .lvl = 87,
#line 3099
            .ball = BALL_MASTER,
#line 3101
            .friendship = 1,
#line 3103
            .nature = NATURE_ADAMANT,
#line 3100
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3104
                MOVE_FACADE,
                MOVE_EARTHQUAKE,
                MOVE_HEADLONG_RUSH,
                MOVE_PROTECT,
            },
            },
            {
#line 3109
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3109
            .heldItem = ITEM_FIRIUM_Z,
#line 3115
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 36, 220, 0),
#line 3117
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3110
            .ability = ABILITY_FLAME_BODY,
#line 3111
            .lvl = 88,
#line 3112
            .ball = BALL_MASTER,
#line 3114
            .friendship = 1,
#line 3116
            .nature = NATURE_MODEST,
#line 3113
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3118
                MOVE_OVERHEAT,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_SCORCHING_SANDS,
            },
            },
            {
#line 3124
            .species = SPECIES_CENTISKORCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3130
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3132
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3125
            .ability = ABILITY_WHITE_SMOKE,
#line 3126
            .lvl = 89,
#line 3127
            .ball = BALL_MASTER,
#line 3129
            .friendship = 1,
#line 3131
            .nature = NATURE_JOLLY,
#line 3128
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3132
                MOVE_FLARE_BLITZ,
                MOVE_FIRE_LASH,
                MOVE_LEECH_LIFE,
                MOVE_DRAGON_TAIL,
            },
            },
        },
    },
#line 3137
    [DIFFICULTY_NORMAL][TRAINER_KEI_YING] =
    {
#line 3138
        .trainerName = _("Kei-ying"),
#line 3142
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 3139
        .trainerPic = TRAINER_PIC_FRONT_KEI_YING,
#line 3141
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3140
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_KEI_YING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3144
            .species = SPECIES_URSHIFU_RAPID_STRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3144
            .heldItem = ITEM_URSHIFUNITE_RAPID,
#line 3150
            .ev = TRAINER_PARTY_EVS(140, 88, 4, 24, 0, 252),
#line 3152
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3145
            .ability = ABILITY_UNSEEN_FIST,
#line 3146
            .lvl = 88,
#line 3147
            .ball = BALL_MASTER,
#line 3149
            .friendship = 1,
#line 3151
            .nature = NATURE_ADAMANT,
#line 3148
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3152
                MOVE_SURGING_STRIKES,
                MOVE_CLOSE_COMBAT,
                MOVE_AQUA_JET,
                MOVE_BULK_UP,
            },
            },
            {
#line 3157
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3157
            .heldItem = ITEM_FLYING_GEM,
#line 3163
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 3165
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3158
            .ability = ABILITY_DRIZZLE,
#line 3159
            .lvl = 86,
#line 3160
            .ball = BALL_MASTER,
#line 3162
            .friendship = 1,
#line 3164
            .nature = NATURE_TIMID,
#line 3161
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3166
                MOVE_HURRICANE,
                MOVE_WEATHER_BALL,
                MOVE_TAILWIND,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3171
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3171
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3177
            .ev = TRAINER_PARTY_EVS(252, 112, 60, 24, 0, 60),
#line 3179
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3172
            .ability = ABILITY_DRY_SKIN,
#line 3173
            .lvl = 87,
#line 3174
            .ball = BALL_MASTER,
#line 3176
            .friendship = 1,
#line 3178
            .nature = NATURE_ADAMANT,
#line 3175
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3179
                MOVE_CLOSE_COMBAT,
                MOVE_POISON_JAB,
                MOVE_BULK_UP,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 3184
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3184
            .heldItem = ITEM_FIGHTINIUM_Z,
#line 3190
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 3192
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3185
            .ability = ABILITY_TECHNICIAN,
#line 3186
            .lvl = 86,
#line 3187
            .ball = BALL_MASTER,
#line 3189
            .friendship = 1,
#line 3191
            .nature = NATURE_ADAMANT,
#line 3188
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3192
                MOVE_BULLET_PUNCH,
                MOVE_BUG_BITE,
                MOVE_AERIAL_ACE,
                MOVE_CLOSE_COMBAT,
            },
            },
            {
#line 3197
            .species = SPECIES_PAWMOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3197
            .heldItem = ITEM_LIFE_ORB,
#line 3203
            .ev = TRAINER_PARTY_EVS(16, 240, 0, 252, 0, 0),
#line 3205
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3198
            .ability = ABILITY_IRON_FIST,
#line 3199
            .lvl = 87,
#line 3200
            .ball = BALL_MASTER,
#line 3202
            .friendship = 1,
#line 3204
            .nature = NATURE_JOLLY,
#line 3201
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3205
                MOVE_THUNDER_PUNCH,
                MOVE_CLOSE_COMBAT,
                MOVE_MACH_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3210
            .species = SPECIES_URSHIFU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3210
            .heldItem = ITEM_FOCUS_SASH,
#line 3216
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3218
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3211
            .ability = ABILITY_UNSEEN_FIST,
#line 3212
            .lvl = 88,
#line 3213
            .ball = BALL_MASTER,
#line 3215
            .friendship = 1,
#line 3217
            .nature = NATURE_JOLLY,
#line 3214
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3218
                MOVE_WICKED_BLOW,
                MOVE_CLOSE_COMBAT,
                MOVE_SUCKER_PUNCH,
                MOVE_POISON_JAB,
            },
            },
        },
    },
#line 3223
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_QIU] =
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
        .partySize = 3,
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
        },
    },
#line 3238
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_CRESALTA] =
    {
#line 3239
        .trainerName = _("Melissa"),
#line 3240
        .trainerPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
#line 3242
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3241
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3244
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3246
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3245
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3247
            .species = SPECIES_GIRAFARIG,
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
            .species = SPECIES_EISCUE,
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
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3255
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3254
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3256
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_HALAI] =
    {
#line 3257
        .trainerName = _("Melissa"),
#line 3258
        .trainerPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
#line 3260
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3259
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3262
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3264
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3263
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3265
            .species = SPECIES_FARIGIRAF,
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
            .species = SPECIES_DUSKULL,
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
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3273
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3272
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3274
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_REMATCH] =
    {
#line 3275
        .trainerName = _("Melissa"),
#line 3276
        .trainerPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
#line 3278
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3277
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3280
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3282
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3281
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3283
            .species = SPECIES_FARIGIRAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3285
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3284
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3286
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3288
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3287
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3289
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3291
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3290
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3292
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3294
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3293
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3295
            .species = SPECIES_SCRAFTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3297
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3296
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3298
    [DIFFICULTY_NORMAL][TRAINER_MONTY] =
    {
#line 3299
        .trainerName = _("Monty"),
#line 3300
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3301
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3303
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3303
            .heldItem = ITEM_PUNCHING_GLOVE,
#line 3304
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3305
            .lvl = 20,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3306
                MOVE_UPPER_HAND,
                MOVE_FOCUS_PUNCH,
                MOVE_MACH_PUNCH,
            },
            },
        },
    },
#line 3310
    [DIFFICULTY_NORMAL][TRAINER_OLIVER] =
    {
#line 3311
        .trainerName = _("Oliver"),
#line 3312
        .trainerPic = TRAINER_PIC_FRONT_EXPERT_M,
#line 3314
        .isNative = TRUE,
#line 3313
        .characterRevealId = REVEAL_OLIVER,
#line 3315
        .objectEventGraphicsId = OBJ_EVENT_GFX_PROF_BIRCH,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_EXPERT_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3317
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3319
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3318
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3320
    [DIFFICULTY_NORMAL][TRAINER_00317DFA] =
    {
#line 3321
        .trainerName = _("00317DFA"),
#line 3322
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3325
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3323
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3326
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3324
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3328
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3331
            .ev = TRAINER_PARTY_EVS(0, 0, 156, 0, 0, 0),
#line 3333
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3329
            .ability = ABILITY_FRIEND_GUARD,
#line 3330
            .lvl = 19,
            .ball = POKEBALL_COUNT,
#line 3332
            .nature = NATURE_LAX,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3334
                MOVE_HELPING_HAND,
                MOVE_LIGHT_SCREEN,
                MOVE_ICY_WIND,
            },
            },
            {
#line 3338
            .species = SPECIES_SMOLIV,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3338
            .heldItem = ITEM_ORAN_BERRY,
#line 3341
            .ev = TRAINER_PARTY_EVS(144, 12, 0, 0, 0, 0),
#line 3343
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3339
            .ability = ABILITY_HARVEST,
#line 3340
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3342
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3344
                MOVE_LEECH_SEED,
                MOVE_CHARM,
                MOVE_RAZOR_LEAF,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 3349
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3352
            .ev = TRAINER_PARTY_EVS(0, 84, 0, 64, 0, 0),
#line 3354
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3350
            .ability = ABILITY_HUSTLE,
#line 3351
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3353
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3355
                MOVE_QUICK_ATTACK,
                MOVE_AIR_CUTTER,
                MOVE_POUNCE,
                MOVE_REVERSAL,
            },
            },
        },
    },
#line 3360
    [DIFFICULTY_NORMAL][TRAINER_0049EFE8] =
    {
#line 3361
        .trainerName = _("0049EFE8"),
#line 3362
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3363
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3365
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3364
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3367
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3367
            .heldItem = ITEM_CHARCOAL,
#line 3369
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 44, 56, 0),
#line 3371
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3368
            .ability = ABILITY_DROUGHT,
#line 3372
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3370
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3373
                MOVE_FIRE_SPIN,
                MOVE_FLAME_CHARGE,
                MOVE_WEATHER_BALL,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3378
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3378
            .heldItem = ITEM_PASSHO_BERRY,
#line 3380
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 100, 0, 0),
#line 3382
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3379
            .ability = ABILITY_FLAME_BODY,
#line 3383
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3381
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3384
                MOVE_BUG_BITE,
                MOVE_FLAME_WHEEL,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 3388
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3391
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3389
            .ability = ABILITY_FLAME_BODY,
#line 3392
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3390
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3393
                MOVE_WILL_O_WISP,
                MOVE_HEX,
                MOVE_FIRE_SPIN,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 3398
    [DIFFICULTY_NORMAL][TRAINER_023957DE] =
    {
#line 3399
        .trainerName = _("023957DE"),
#line 3400
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3401
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3403
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3402
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3405
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3405
            .heldItem = ITEM_ORAN_BERRY,
#line 3408
            .ev = TRAINER_PARTY_EVS(72, 0, 40, 0, 0, 40),
#line 3410
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3406
            .ability = ABILITY_SHED_SKIN,
#line 3407
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3409
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3411
                MOVE_THUNDER_WAVE,
                MOVE_DRAGON_TAIL,
                MOVE_SUPERSONIC,
                MOVE_SLAM,
            },
            },
            {
#line 3416
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3419
            .ev = TRAINER_PARTY_EVS(0, 148, 4, 0, 0, 0),
#line 3421
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3417
            .ability = ABILITY_HUSTLE,
#line 3418
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3420
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3422
                MOVE_BITE,
                MOVE_HEADBUTT,
                MOVE_DRAGON_TAIL,
            },
            },
            {
#line 3426
            .species = SPECIES_ZWEILOUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3429
            .ev = TRAINER_PARTY_EVS(0, 148, 0, 0, 0, 4),
#line 3431
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3427
            .ability = ABILITY_HUSTLE,
#line 3428
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3430
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3432
                MOVE_BITE,
                MOVE_FIRE_FANG,
                MOVE_THUNDER_FANG,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 3437
    [DIFFICULTY_NORMAL][TRAINER_006E7EFD] =
    {
#line 3438
        .trainerName = _("006E7EFD"),
#line 3439
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3440
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3442
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3441
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3444
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3447
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 100, 0, 0),
#line 3449
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3445
            .ability = ABILITY_INNER_FOCUS,
#line 3446
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3448
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3450
                MOVE_BATON_PASS,
                MOVE_SWORDS_DANCE,
                MOVE_VACUUM_WAVE,
                MOVE_METRONOME,
            },
            },
            {
#line 3455
            .species = SPECIES_PAWMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3458
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 100, 0, 0),
#line 3460
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3456
            .ability = ABILITY_IRON_FIST,
#line 3457
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3459
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3461
                MOVE_BATON_PASS,
                MOVE_MACH_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_AGILITY,
            },
            },
            {
#line 3466
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3466
            .heldItem = ITEM_FOCUS_SASH,
#line 3469
            .ev = TRAINER_PARTY_EVS(72, 0, 36, 0, 0, 36),
#line 3471
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3467
            .ability = ABILITY_RECKLESS,
#line 3468
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3470
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3472
                MOVE_HIGH_JUMP_KICK,
                MOVE_DETECT,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
        },
    },
#line 3477
    [DIFFICULTY_NORMAL][TRAINER_007F06A5] =
    {
#line 3478
        .trainerName = _("007F06A5"),
#line 3479
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3482
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3481
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3484
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3484
            .heldItem = ITEM_SITRUS_BERRY,
#line 3487
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3485
            .ability = ABILITY_TORRENT,
#line 3486
            .lvl = 20,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3488
                MOVE_MIRROR_COAT,
                MOVE_MUDDY_WATER,
                MOVE_COUNTER,
            },
            },
            {
#line 3492
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3495
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3493
            .ability = ABILITY_OWN_TEMPO,
#line 3494
            .lvl = 24,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3496
                MOVE_LIGHT_SCREEN,
                MOVE_RAIN_DANCE,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 3500
            .species = SPECIES_ARROKUDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3500
            .heldItem = ITEM_METRONOME,
#line 3503
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3501
            .ability = ABILITY_PROPELLER_TAIL,
#line 3502
            .lvl = 24,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3503
                MOVE_AQUA_JET,
            },
            },
        },
    },
#line 3505
    [DIFFICULTY_NORMAL][TRAINER_01103D48] =
    {
#line 3506
        .trainerName = _("01103D48"),
#line 3507
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3511
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3508
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3510
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3509
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3513
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3516
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 144, 0),
#line 3518
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3514
            .ability = ABILITY_PICKUP,
#line 3515
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 3517
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3519
                MOVE_FOLLOW_ME,
                MOVE_CHARGE_BEAM,
                MOVE_THIEF,
                MOVE_MUD_SHOT,
            },
            },
            {
#line 3524
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3524
            .heldItem = ITEM_ORAN_BERRY,
#line 3527
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 64, 80, 0),
#line 3529
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3525
            .ability = ABILITY_WIND_POWER,
#line 3526
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3528
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3530
                MOVE_TAILWIND,
                MOVE_ROOST,
                MOVE_PLUCK,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 3535
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3535
            .heldItem = ITEM_MAGNET,
#line 3538
            .ev = TRAINER_PARTY_EVS(44, 56, 0, 44, 0, 0),
#line 3539
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3536
            .ability = ABILITY_INTIMIDATE,
#line 3537
            .lvl = 21,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3540
                MOVE_BITE,
                MOVE_CHARGE,
                MOVE_SPARK,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 3545
    [DIFFICULTY_NORMAL][TRAINER_0272920D] =
    {
#line 3546
        .trainerName = _("0272920D"),
#line 3547
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3548
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3550
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3549
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3552
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3552
            .heldItem = ITEM_ROCKY_HELMET,
#line 3555
            .ev = TRAINER_PARTY_EVS(0, 116, 0, 28, 0, 0),
#line 3557
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3553
            .ability = ABILITY_ROUGH_SKIN,
#line 3554
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3556
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3558
                MOVE_AQUA_JET,
                MOVE_BITE,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 3562
            .species = SPECIES_THIEVUL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3565
            .ev = TRAINER_PARTY_EVS(36, 0, 32, 24, 32, 24),
#line 3567
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3563
            .ability = ABILITY_UNBURDEN,
#line 3564
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 3566
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3568
                MOVE_NASTY_PLOT,
                MOVE_SNARL,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3572
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3572
            .heldItem = ITEM_MENTAL_HERB,
#line 3575
            .ev = TRAINER_PARTY_EVS(56, 0, 56, 0, 0, 40),
#line 3577
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3573
            .ability = ABILITY_PRANKSTER,
#line 3574
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3576
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3578
                MOVE_HAZE,
                MOVE_WING_ATTACK,
                MOVE_TAUNT,
                MOVE_THIEF,
            },
            },
        },
    },
#line 3583
    [DIFFICULTY_NORMAL][TRAINER_022A53A0] =
    {
#line 3584
        .trainerName = _("022A53A0"),
#line 3585
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3589
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3586
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3588
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3587
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3591
            .species = SPECIES_KRICKETUNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3591
            .heldItem = ITEM_FOCUS_BAND,
#line 3594
            .ev = TRAINER_PARTY_EVS(28, 24, 36, 44, 0, 24),
#line 3596
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3592
            .ability = ABILITY_SWARM,
#line 3593
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3595
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3597
                MOVE_SING,
                MOVE_STICKY_WEB,
                MOVE_LEECH_LIFE,
            },
            },
            {
#line 3601
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3601
            .heldItem = ITEM_FOCUS_BAND,
#line 3604
            .ev = TRAINER_PARTY_EVS(68, 20, 68, 0, 0, 0),
#line 3606
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3602
            .ability = ABILITY_SWARM,
#line 3603
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 3605
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3607
                MOVE_RAZOR_LEAF,
                MOVE_STRUGGLE_BUG,
                MOVE_ELECTROWEB,
            },
            },
            {
#line 3611
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3611
            .heldItem = ITEM_SILVER_POWDER,
#line 3614
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 152, 0, 0),
#line 3616
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3612
            .ability = ABILITY_SWARM,
#line 3613
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3615
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3617
                MOVE_NIGHT_SHADE,
                MOVE_FELL_STINGER,
                MOVE_BUG_BITE,
            },
            },
        },
    },
#line 3623
    [DIFFICULTY_NORMAL][TRAINER_012ED80D] =
    {
#line 3624
        .trainerName = _("012ED80D"),
#line 3625
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3626
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3628
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3627
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3630
            .species = SPECIES_MUDBRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3633
            .ev = TRAINER_PARTY_EVS(0, 24, 128, 0, 0, 0),
#line 3635
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3631
            .ability = ABILITY_STAMINA,
#line 3632
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3634
            .nature = NATURE_LAX,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3636
                MOVE_STRENGTH,
                MOVE_COUNTER,
                MOVE_BULLDOZE,
                MOVE_DOUBLE_KICK,
            },
            },
            {
#line 3641
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3644
            .ev = TRAINER_PARTY_EVS(0, 136, 0, 0, 0, 0),
#line 3646
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3642
            .ability = ABILITY_SAND_FORCE,
#line 3643
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3645
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3647
                MOVE_SANDSTORM,
                MOVE_METAL_CLAW,
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3652
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3655
            .ev = TRAINER_PARTY_EVS(0, 76, 0, 0, 72, 0),
#line 3657
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3653
            .ability = ABILITY_SIMPLE,
#line 3654
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3656
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3658
                MOVE_INCINERATE,
                MOVE_BULLDOZE,
                MOVE_FOCUS_ENERGY,
            },
            },
        },
    },
#line 3662
    [DIFFICULTY_NORMAL][TRAINER_01E6E96E] =
    {
#line 3663
        .trainerName = _("01E6E96E"),
#line 3664
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3668
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3665
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3667
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3666
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3670
            .species = SPECIES_MINIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3670
            .heldItem = ITEM_POWER_HERB,
#line 3673
            .ev = TRAINER_PARTY_EVS(0, 92, 0, 0, 56, 0),
#line 3675
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3671
            .ability = ABILITY_SHIELDS_DOWN,
#line 3672
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3674
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3676
                MOVE_METEOR_BEAM,
                MOVE_ROLLOUT,
                MOVE_ACROBATICS,
                MOVE_U_TURN,
            },
            },
            {
#line 3681
            .species = SPECIES_VIVILLON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3681
            .heldItem = ITEM_MENTAL_HERB,
#line 3684
            .ev = TRAINER_PARTY_EVS(80, 0, 0, 68, 0, 0),
#line 3686
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3682
            .ability = ABILITY_FRIEND_GUARD,
#line 3683
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3685
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3687
                MOVE_SWIFT,
                MOVE_U_TURN,
                MOVE_STUN_SPORE,
                MOVE_TAILWIND,
            },
            },
            {
#line 3692
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3692
            .heldItem = ITEM_SILK_SCARF,
#line 3695
            .ev = TRAINER_PARTY_EVS(0, 148, 0, 0, 0, 0),
#line 3697
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3693
            .ability = ABILITY_SCRAPPY,
#line 3694
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3696
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3698
                MOVE_RAGE,
                MOVE_RETURN,
                MOVE_AERIAL_ACE,
                MOVE_U_TURN,
            },
            },
        },
    },
#line 3703
    [DIFFICULTY_NORMAL][TRAINER_0092D526] =
    {
#line 3704
        .trainerName = _("0092D526"),
#line 3705
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3709
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3706
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3708
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3707
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3711
            .species = SPECIES_BOUNSWEET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3714
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 60, 96, 0),
#line 3716
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3712
            .ability = ABILITY_LEAF_GUARD,
#line 3713
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3715
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3717
                MOVE_MAGICAL_LEAF,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 3720
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3720
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3723
            .ev = TRAINER_PARTY_EVS(0, 0, 84, 0, 0, 64),
#line 3724
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3721
            .ability = ABILITY_EFFECT_SPORE,
#line 3722
            .lvl = 20,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3725
                MOVE_RAGE_POWDER,
                MOVE_POISON_POWDER,
                MOVE_VENOSHOCK,
                MOVE_STUN_SPORE,
            },
            },
            {
#line 3730
            .species = SPECIES_CAPSAKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3733
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 156, 0),
#line 3735
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3731
            .ability = ABILITY_CHLOROPHYLL,
#line 3732
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3734
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3736
                MOVE_MAGICAL_LEAF,
                MOVE_GROWTH,
                MOVE_INGRAIN,
            },
            },
        },
    },
#line 3740
    [DIFFICULTY_NORMAL][TRAINER_00C593A8] =
    {
#line 3741
        .trainerName = _("00C593A8"),
#line 3742
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3746
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3743
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3745
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3744
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3748
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3748
            .heldItem = ITEM_WACAN_BERRY,
#line 3751
            .ev = TRAINER_PARTY_EVS(64, 84, 0, 0, 0, 0),
#line 3753
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3749
            .ability = ABILITY_ICE_BODY,
#line 3750
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3752
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3754
                MOVE_ROLLOUT,
                MOVE_SNOWSCAPE,
                MOVE_ICE_BALL,
            },
            },
            {
#line 3758
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3758
            .heldItem = ITEM_METRONOME,
#line 3761
            .ev = TRAINER_PARTY_EVS(44, 100, 0, 0, 0, 0),
#line 3763
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3759
            .ability = ABILITY_ICE_BODY,
#line 3760
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 3762
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3764
                MOVE_SNOWSCAPE,
                MOVE_ROLLOUT,
                MOVE_ICE_BALL,
            },
            },
            {
#line 3768
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3771
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 0, 104, 0),
#line 3773
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3769
            .ability = ABILITY_OBLIVIOUS,
#line 3770
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 3772
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3774
                MOVE_PSYCHIC_NOISE,
                MOVE_CONFUSION,
                MOVE_ICY_WIND,
            },
            },
        },
    },
#line 3778
    [DIFFICULTY_NORMAL][TRAINER_01E7C79B] =
    {
#line 3779
        .trainerName = _("01E7C79B"),
#line 3780
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3781
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3783
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3782
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3785
            .species = SPECIES_DOTTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3788
            .ev = TRAINER_PARTY_EVS(0, 0, 88, 0, 0, 64),
#line 3790
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3786
            .ability = ABILITY_SWARM,
#line 3787
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3789
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3791
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_CONFUSION,
                MOVE_STRUGGLE_BUG,
            },
            },
            {
#line 3796
            .species = SPECIES_HATENNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3796
            .heldItem = ITEM_TWISTED_SPOON,
#line 3799
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 88, 56, 0),
#line 3801
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3797
            .ability = ABILITY_ANTICIPATION,
#line 3798
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 3800
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3802
                MOVE_PSYBEAM,
                MOVE_DISARMING_VOICE,
                MOVE_NUZZLE,
            },
            },
            {
#line 3806
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3809
            .ev = TRAINER_PARTY_EVS(0, 92, 40, 0, 0, 24),
#line 3811
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3807
            .ability = ABILITY_PURE_POWER,
#line 3808
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 3810
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3812
                MOVE_ZEN_HEADBUTT,
                MOVE_FORCE_PALM,
                MOVE_WORK_UP,
            },
            },
        },
    },
#line 3816
    [DIFFICULTY_NORMAL][TRAINER_01C7AF3F] =
    {
#line 3817
        .trainerName = _("01C7AF3F"),
#line 3818
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3822
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3819
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3821
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3820
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3824
            .nickname = COMPOUND_STRING("Flabebe"),
#line 3824
            .species = SPECIES_FLABEBE_YELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3824
            .heldItem = ITEM_ORAN_BERRY,
#line 3827
            .ev = TRAINER_PARTY_EVS(0, 0, 52, 0, 0, 96),
#line 3829
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 3825
            .ability = ABILITY_SYMBIOSIS,
#line 3826
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 3828
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3830
                MOVE_TEARFUL_LOOK,
                MOVE_DISARMING_VOICE,
                MOVE_MAGICAL_LEAF,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 3835
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3838
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 36, 116, 0),
#line 3840
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3836
            .ability = ABILITY_TRACE,
#line 3837
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3839
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3841
                MOVE_DISARMING_VOICE,
                MOVE_PSYBEAM,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 3845
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3845
            .heldItem = ITEM_SITRUS_BERRY,
#line 3848
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 88, 64, 0),
#line 3850
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3846
            .ability = ABILITY_TRACE,
#line 3847
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3849
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3851
                MOVE_DISARMING_VOICE,
                MOVE_PSYBEAM,
                MOVE_LIFE_DEW,
            },
            },
        },
    },
#line 3857
    [DIFFICULTY_NORMAL][TRAINER_02EEB783] =
    {
#line 3858
        .trainerName = _("02EEB783"),
#line 3859
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3863
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3860
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3862
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3861
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3865
            .species = SPECIES_YAMASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3868
            .ev = TRAINER_PARTY_EVS(80, 0, 0, 0, 76, 0),
#line 3870
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3866
            .ability = ABILITY_MUMMY,
#line 3867
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3869
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3871
                MOVE_WILL_O_WISP,
                MOVE_PROTECT,
                MOVE_HEX,
            },
            },
            {
#line 3875
            .species = SPECIES_HONEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3875
            .heldItem = ITEM_OCCA_BERRY,
#line 3878
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 144),
#line 3880
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3876
            .ability = ABILITY_NO_GUARD,
#line 3877
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3879
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3881
                MOVE_AERIAL_ACE,
                MOVE_SHADOW_SNEAK,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 3885
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3888
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 96, 48),
#line 3890
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3886
            .ability = ABILITY_LEVITATE,
#line 3887
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3889
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3891
                MOVE_CHARGE,
                MOVE_THUNDER_SHOCK,
                MOVE_ASTONISH,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 3896
    [DIFFICULTY_NORMAL][TRAINER_026E91A6] =
    {
#line 3897
        .trainerName = _("026E91A6"),
#line 3898
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3902
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3899
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3901
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3900
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3904
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3904
            .heldItem = ITEM_SITRUS_BERRY,
#line 3907
            .ev = TRAINER_PARTY_EVS(0, 0, 144, 0, 0, 0),
#line 3909
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3905
            .ability = ABILITY_ROCK_HEAD,
#line 3906
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3908
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3910
                MOVE_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_ROCK_TOMB,
                MOVE_ROAR,
            },
            },
            {
#line 3915
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3915
            .heldItem = ITEM_GANLON_BERRY,
#line 3918
            .ev = TRAINER_PARTY_EVS(0, 0, 4, 0, 104, 48),
#line 3920
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 3916
            .ability = ABILITY_CLEAR_BODY,
#line 3917
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 3919
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3921
                MOVE_METAL_SOUND,
                MOVE_CHARGE_BEAM,
                MOVE_SANDSTORM,
            },
            },
            {
#line 3925
            .species = SPECIES_VAROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3928
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 152, 0),
#line 3930
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3926
            .ability = ABILITY_OVERCOAT,
#line 3927
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3929
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3931
                MOVE_SLUDGE,
                MOVE_GYRO_BALL,
                MOVE_HEADBUTT,
                MOVE_LICK,
            },
            },
        },
    },
#line 3936
    [DIFFICULTY_NORMAL][TRAINER_029E0EF0] =
    {
#line 3937
        .trainerName = _("029E0EF0"),
#line 3938
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3939
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3941
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3940
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3943
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3946
            .ev = TRAINER_PARTY_EVS(0, 96, 16, 0, 0, 32),
#line 3948
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3944
            .ability = ABILITY_POISON_POINT,
#line 3945
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3947
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3949
                MOVE_TOXIC_SPIKES,
                MOVE_DIG,
                MOVE_POISON_STING,
                MOVE_TRAILBLAZE,
            },
            },
            {
#line 3954
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3957
            .ev = TRAINER_PARTY_EVS(24, 0, 0, 0, 120, 0),
#line 3959
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3955
            .ability = ABILITY_CLEAR_BODY,
#line 3956
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3958
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3960
                MOVE_BUBBLE_BEAM,
                MOVE_ACID_SPRAY,
                MOVE_TOXIC,
            },
            },
            {
#line 3964
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3964
            .heldItem = ITEM_SITRUS_BERRY,
#line 3967
            .ev = TRAINER_PARTY_EVS(80, 72, 0, 0, 0, 0),
#line 3969
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3965
            .ability = ABILITY_GLUTTONY,
#line 3966
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 3968
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3970
                MOVE_AMNESIA,
                MOVE_ACID_ARMOR,
                MOVE_ENCORE,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
#line 3975
    [DIFFICULTY_NORMAL][TRAINER_00E46F7D] =
    {
#line 3976
        .trainerName = _("00E46F7D"),
#line 3977
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3981
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3978
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3980
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3979
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3983
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3986
            .ev = TRAINER_PARTY_EVS(12, 92, 32, 0, 0, 12),
#line 3988
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3984
            .ability = ABILITY_SHED_SKIN,
#line 3985
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 3987
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3989
                MOVE_STOMPING_TANTRUM,
                MOVE_ROCK_SLIDE,
                MOVE_PAYBACK,
            },
            },
            {
#line 3993
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3996
            .ev = TRAINER_PARTY_EVS(0, 36, 0, 112, 0, 0),
#line 3998
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3994
            .ability = ABILITY_WEAK_ARMOR,
#line 3995
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3997
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3999
                MOVE_AQUA_JET,
                MOVE_ABSORB,
                MOVE_ROCK_TOMB,
                MOVE_PROTECT,
            },
            },
            {
#line 4004
            .species = SPECIES_TYRUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4004
            .heldItem = ITEM_HARD_STONE,
#line 4007
            .ev = TRAINER_PARTY_EVS(0, 72, 80, 0, 0, 0),
#line 4009
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4005
            .ability = ABILITY_STURDY,
#line 4006
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4008
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4010
                MOVE_DRAGON_TAIL,
                MOVE_BITE,
                MOVE_ANCIENT_POWER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 4015
    [DIFFICULTY_NORMAL][TRAINER_032E8AC9] =
    {
#line 4016
        .trainerName = _("032E8AC9"),
#line 4017
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4018
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4020
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4019
        .mapSec = MAPSEC_MERMEREZA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4022
            .species = SPECIES_SHROODLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4022
            .heldItem = ITEM_BIG_NUGGET,
#line 4025
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 128, 0, 0),
#line 4027
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4023
            .ability = ABILITY_UNBURDEN,
#line 4024
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 4026
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4028
                MOVE_FLING,
                MOVE_ACROBATICS,
                MOVE_BATON_PASS,
            },
            },
            {
#line 4032
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4032
            .heldItem = ITEM_ASPEAR_BERRY,
#line 4035
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 136, 0, 0),
#line 4037
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4033
            .ability = ABILITY_FLASH_FIRE,
#line 4034
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4036
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4038
                MOVE_TRICK,
                MOVE_POLTERGEIST,
                MOVE_BITTER_BLADE,
                MOVE_DESTINY_BOND,
            },
            },
        },
    },
#line 4043
    [DIFFICULTY_NORMAL][TRAINER_0389363C] =
    {
#line 4044
        .trainerName = _("0389363C"),
#line 4045
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4047
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4046
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_WEIGH_ABILITY_PREDICTION | AI_FLAG_PREDICT_SWITCH | AI_FLAG_PREDICT_INCOMING_MON | AI_FLAG_PP_STALL_PREVENTION | AI_FLAG_PREDICT_MOVE,
#line 4049
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4048
        .mapSec = MAPSEC_MERMEREZA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4051
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4051
            .heldItem = ITEM_FIGY_BERRY,
#line 4054
            .ev = TRAINER_PARTY_EVS(0, 132, 0, 0, 0, 0),
#line 4056
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4052
            .ability = ABILITY_GLUTTONY,
#line 4053
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 4055
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4057
                MOVE_BELLY_DRUM,
                MOVE_SNORE,
                MOVE_REST,
                MOVE_SLASH,
            },
            },
        },
    },
#line 4062
    [DIFFICULTY_NORMAL][TRAINER_040CEA33] =
    {
#line 4063
        .trainerName = _("040CEA33"),
#line 4064
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4066
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_WEIGH_ABILITY_PREDICTION | AI_FLAG_PREDICT_SWITCH | AI_FLAG_PREDICT_INCOMING_MON | AI_FLAG_PP_STALL_PREVENTION | AI_FLAG_PREDICT_MOVE,
#line 4065
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4067
        .mapSec = MAPSEC_MERMEREZA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4069
            .species = SPECIES_PALPITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4069
            .heldItem = ITEM_RINDO_BERRY,
#line 4072
            .ev = TRAINER_PARTY_EVS(0, 0, 96, 0, 0, 28),
#line 4074
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4070
            .ability = ABILITY_SWIFT_SWIM,
#line 4071
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4073
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4075
                MOVE_RAIN_DANCE,
                MOVE_MUD_SHOT,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 4079
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4079
            .heldItem = ITEM_CHOPLE_BERRY,
#line 4082
            .ev = TRAINER_PARTY_EVS(0, 0, 68, 0, 0, 56),
#line 4084
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4080
            .ability = ABILITY_STENCH,
#line 4081
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 4083
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4085
                MOVE_TOXIC_SPIKES,
                MOVE_VENOSHOCK,
                MOVE_BODY_SLAM,
            },
            },
        },
    },
#line 4089
    [DIFFICULTY_NORMAL][TRAINER_031A849F] =
    {
#line 4090
        .trainerName = _("031A849F"),
#line 4091
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4095
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4092
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4094
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4093
        .mapSec = MAPSEC_TORA_TOWN,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4097
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4097
            .heldItem = ITEM_TWISTED_SPOON,
#line 4100
            .ev = TRAINER_PARTY_EVS(0, 64, 0, 0, 64, 0),
#line 4102
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4098
            .ability = ABILITY_PRANKSTER,
#line 4099
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4101
            .nature = NATURE_DOCILE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4103
                MOVE_TAILWIND,
                MOVE_DUAL_WINGBEAT,
                MOVE_HEAT_WAVE,
            },
            },
            {
#line 4107
            .species = SPECIES_INKAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4107
            .heldItem = ITEM_ROSELI_BERRY,
#line 4110
            .ev = TRAINER_PARTY_EVS(0, 64, 0, 0, 64, 0),
#line 4112
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4108
            .ability = ABILITY_CONTRARY,
#line 4109
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4111
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4113
                MOVE_PSYBEAM,
                MOVE_ROCK_SLIDE,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 4117
            .species = SPECIES_LOKIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4117
            .heldItem = ITEM_CHOPLE_BERRY,
#line 4120
            .ev = TRAINER_PARTY_EVS(0, 128, 0, 0, 0, 0),
#line 4122
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4118
            .ability = ABILITY_TINTED_LENS,
#line 4119
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4121
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4123
                MOVE_AERIAL_ACE,
                MOVE_TRAILBLAZE,
            },
            },
        },
    },
#line 4126
    [DIFFICULTY_NORMAL][TRAINER_045FDD44] =
    {
#line 4127
        .trainerName = _("045FDD44"),
#line 4128
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4131
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4129
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4130
        .mapSec = MAPSEC_TORA_TOWN,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4133
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4133
            .heldItem = ITEM_SHUCA_BERRY,
#line 4136
            .ev = TRAINER_PARTY_EVS(0, 0, 84, 0, 0, 40),
#line 4138
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4134
            .ability = ABILITY_EFFECT_SPORE,
#line 4135
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4137
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4139
                MOVE_POISON_POWDER,
                MOVE_STUN_SPORE,
                MOVE_POLLEN_PUFF,
            },
            },
            {
#line 4143
            .species = SPECIES_VAROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4143
            .heldItem = ITEM_PAYAPA_BERRY,
#line 4146
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 4148
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4144
            .ability = ABILITY_OVERCOAT,
#line 4145
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4147
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4149
                MOVE_TOXIC_SPIKES,
                MOVE_TOXIC,
                MOVE_VENOSHOCK,
            },
            },
            {
#line 4153
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4153
            .heldItem = ITEM_SPELL_TAG,
#line 4156
            .ev = TRAINER_PARTY_EVS(0, 60, 52, 0, 0, 20),
#line 4158
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4154
            .ability = ABILITY_SWARM,
#line 4155
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4157
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4159
                MOVE_HEX,
                MOVE_LEECH_LIFE,
            },
            },
        },
    },
#line 4162
    [DIFFICULTY_NORMAL][TRAINER_041FD20E] =
    {
#line 4163
        .trainerName = _("041FD20E"),
#line 4164
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4167
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4165
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4166
        .mapSec = MAPSEC_TORA_TOWN,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4169
            .species = SPECIES_MAREANIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4169
            .heldItem = ITEM_MYSTIC_WATER,
#line 4172
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 136),
#line 4174
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4170
            .ability = ABILITY_LIMBER,
#line 4171
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4173
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4175
                MOVE_LIQUIDATION,
                MOVE_ICE_SPINNER,
            },
            },
            {
#line 4178
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4178
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 4181
            .ev = TRAINER_PARTY_EVS(0, 64, 0, 0, 64, 0),
#line 4183
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4179
            .ability = ABILITY_HUSTLE,
#line 4180
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4182
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4184
                MOVE_ICE_FANG,
                MOVE_DRAGON_BREATH,
            },
            },
        },
    },
#line 4187
    [DIFFICULTY_NORMAL][TRAINER_0465BF77] =
    {
#line 4188
        .trainerName = _("0465BF77"),
#line 4189
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4192
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4190
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4191
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4194
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4194
            .heldItem = ITEM_QUICK_CLAW,
#line 4197
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 132, 0, 0),
#line 4199
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4195
            .ability = ABILITY_LEVITATE,
#line 4196
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4198
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4200
                MOVE_TAUNT,
                MOVE_DESTINY_BOND,
                MOVE_SHADOW_SNEAK,
            },
            },
            {
#line 4204
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4207
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 132, 0, 0),
#line 4209
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4205
            .ability = ABILITY_SPEED_BOOST,
#line 4206
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4208
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4210
                MOVE_DESTINY_BOND,
                MOVE_TAUNT,
                MOVE_ASSURANCE,
                MOVE_PSYCHIC_FANGS,
            },
            },
        },
    },
#line 4215
    [DIFFICULTY_NORMAL][TRAINER_0467DF00] =
    {
#line 4216
        .trainerName = _("0467DF00"),
#line 4217
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4220
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4218
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4219
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4222
            .species = SPECIES_MILTANK,
#line 4222
            .gender = TRAINER_MON_FEMALE,
#line 4222
            .heldItem = ITEM_COVERT_CLOAK,
#line 4225
            .ev = TRAINER_PARTY_EVS(44, 0, 48, 0, 0, 40),
#line 4227
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4223
            .ability = ABILITY_THICK_FAT,
#line 4224
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4226
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4228
                MOVE_SANDSTORM,
                MOVE_ROLLOUT,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4232
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4232
            .heldItem = ITEM_BRIGHT_POWDER,
#line 4235
            .ev = TRAINER_PARTY_EVS(132, 0, 0, 0, 0, 0),
#line 4237
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4233
            .ability = ABILITY_SAND_VEIL,
#line 4234
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4236
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4238
                MOVE_FURY_CUTTER,
                MOVE_TOXIC,
                MOVE_KNOCK_OFF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 4243
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4243
            .heldItem = ITEM_SMOOTH_ROCK,
#line 4246
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 136),
#line 4248
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4244
            .ability = ABILITY_HEALER,
#line 4245
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4247
            .nature = NATURE_GENTLE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4249
                MOVE_SANDSTORM,
                MOVE_HEAL_PULSE,
                MOVE_HYPER_VOICE,
            },
            },
        },
    },
#line 4253
    [DIFFICULTY_NORMAL][TRAINER_04687C53] =
    {
#line 4254
        .trainerName = _("04687C53"),
#line 4255
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4258
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4256
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4259
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4257
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4261
            .species = SPECIES_SLIGGOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4261
            .heldItem = ITEM_ORAN_BERRY,
#line 4264
            .ev = TRAINER_PARTY_EVS(0, 0, 136, 0, 0, 0),
#line 4266
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4262
            .ability = ABILITY_GOOEY,
#line 4263
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4265
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4267
                MOVE_ACID_SPRAY,
                MOVE_CHILLING_WATER,
                MOVE_SKITTER_SMACK,
            },
            },
        },
    },
#line 4271
    [DIFFICULTY_NORMAL][TRAINER_048D5D99] =
    {
#line 4272
        .trainerName = _("048D5D99"),
#line 4273
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4276
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4274
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4277
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4275
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4279
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4279
            .heldItem = ITEM_SITRUS_BERRY,
#line 4282
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 132),
#line 4284
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4280
            .ability = ABILITY_STURDY,
#line 4281
            .lvl = 27,
            .ball = POKEBALL_COUNT,
#line 4283
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4285
                MOVE_METAL_BURST,
                MOVE_CURSE,
                MOVE_HARDEN,
            },
            },
            {
#line 4289
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4289
            .heldItem = ITEM_FOCUS_BAND,
#line 4292
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 132),
#line 4294
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4290
            .ability = ABILITY_STURDY,
#line 4291
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4293
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4295
                MOVE_METAL_BURST,
                MOVE_CURSE,
                MOVE_ENDEAVOR,
                MOVE_SANDSTORM,
            },
            },
        },
    },
#line 4300
    [DIFFICULTY_NORMAL][TRAINER_04A59E40] =
    {
#line 4301
        .trainerName = _("04A59E40"),
#line 4302
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4305
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4303
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4306
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4304
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4308
            .species = SPECIES_FLOETTE,
#line 4308
            .gender = TRAINER_MON_FEMALE,
#line 4308
            .heldItem = ITEM_LUM_BERRY,
#line 4311
            .ev = TRAINER_PARTY_EVS(32, 0, 104, 0, 0, 0),
#line 4313
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4309
            .ability = ABILITY_FLOWER_VEIL,
#line 4310
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4312
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4314
                MOVE_WISH,
                MOVE_BATON_PASS,
                MOVE_LIGHT_SCREEN,
                MOVE_MAGICAL_LEAF,
            },
            },
            {
#line 4319
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4319
            .heldItem = ITEM_MYSTIC_WATER,
#line 4322
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 88, 0, 0),
#line 4324
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4320
            .ability = ABILITY_SHELL_ARMOR,
#line 4321
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4323
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4325
                MOVE_BRICK_BREAK,
                MOVE_RAZOR_SHELL,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 4329
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4329
            .heldItem = ITEM_MYSTIC_WATER,
#line 4332
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 136, 0),
#line 4334
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4330
            .ability = ABILITY_REGENERATOR,
#line 4331
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4333
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4335
                MOVE_AVALANCHE,
                MOVE_PSYCHIC_NOISE,
                MOVE_MUDDY_WATER,
            },
            },
        },
    },
#line 4340
    [DIFFICULTY_NORMAL][TRAINER_04E334E9] =
    {
#line 4341
        .trainerName = _("04E334E9"),
#line 4342
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4345
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4343
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4346
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4344
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4348
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4348
            .heldItem = ITEM_ORAN_BERRY,
#line 4351
            .ev = TRAINER_PARTY_EVS(0, 136, 0, 0, 0, 0),
#line 4353
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4349
            .ability = ABILITY_MOODY,
#line 4350
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4352
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4354
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
                MOVE_ICY_WIND,
                MOVE_ROCK_BLAST,
            },
            },
            {
#line 4359
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4359
            .heldItem = ITEM_ORAN_BERRY,
#line 4362
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 136, 0),
#line 4364
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4360
            .ability = ABILITY_MOODY,
#line 4361
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4363
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4365
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
                MOVE_BULLET_SEED,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 4370
            .species = SPECIES_SCOVILLAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4370
            .heldItem = ITEM_ORAN_BERRY,
#line 4373
            .ev = TRAINER_PARTY_EVS(16, 32, 16, 24, 32, 16),
#line 4375
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4371
            .ability = ABILITY_MOODY,
#line 4372
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4374
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4376
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
                MOVE_MAGICAL_LEAF,
                MOVE_TEMPER_FLARE,
            },
            },
        },
    },
#line 4381
    [DIFFICULTY_NORMAL][TRAINER_05BDEABF] =
    {
#line 4382
        .trainerName = _("05BDEABF"),
#line 4383
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4386
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4384
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4387
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4385
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4389
            .species = SPECIES_CAPSAKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4389
            .heldItem = ITEM_SMOOTH_ROCK,
#line 4392
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4390
            .ability = ABILITY_INSOMNIA,
#line 4391
            .lvl = 23,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4393
                MOVE_SANDSTORM,
                MOVE_LEECH_SEED,
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
            },
            },
            {
#line 4398
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4398
            .heldItem = ITEM_SITRUS_BERRY,
#line 4401
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4399
            .ability = ABILITY_EFFECT_SPORE,
#line 4400
            .lvl = 21,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4402
                MOVE_POISON_POWDER,
                MOVE_POLLEN_PUFF,
                MOVE_PROTECT,
                MOVE_ABSORB,
            },
            },
            {
#line 4407
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4407
            .heldItem = ITEM_LEFTOVERS,
#line 4410
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4408
            .ability = ABILITY_IRON_FIST,
#line 4409
            .lvl = 25,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4411
                MOVE_SANDSTORM,
                MOVE_CURSE,
                MOVE_KNOCK_OFF,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 4416
    [DIFFICULTY_NORMAL][TRAINER_06400A0C] =
    {
#line 4417
        .trainerName = _("06400A0C"),
#line 4418
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4421
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4419
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4422
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4420
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4424
            .species = SPECIES_CHARJABUG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4424
            .heldItem = ITEM_EJECT_BUTTON,
#line 4427
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4425
            .ability = ABILITY_BATTERY,
#line 4426
            .lvl = 24,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4428
                MOVE_STICKY_WEB,
                MOVE_LIGHT_SCREEN,
                MOVE_ELECTROWEB,
                MOVE_BUG_BITE,
            },
            },
            {
#line 4433
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4433
            .heldItem = ITEM_CHERI_BERRY,
#line 4436
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4434
            .ability = ABILITY_FLAME_BODY,
#line 4435
            .lvl = 25,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4437
                MOVE_NIGHT_SHADE,
                MOVE_EMBER,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 4441
            .species = SPECIES_DOUBLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4444
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4442
            .ability = ABILITY_NO_GUARD,
#line 4443
            .lvl = 26,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4445
                MOVE_SHADOW_SNEAK,
                MOVE_SHADOW_CLAW,
                MOVE_BRUTAL_SWING,
            },
            },
        },
    },
#line 4449
    [DIFFICULTY_NORMAL][TRAINER_068B06CE] =
    {
#line 4450
        .trainerName = _("068B06CE"),
#line 4451
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4454
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4452
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4455
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4453
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4457
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4460
            .ev = TRAINER_PARTY_EVS(0, 56, 72, 0, 0, 0),
#line 4462
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4458
            .ability = ABILITY_NEUTRALIZING_GAS,
#line 4459
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4461
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4463
                MOVE_WILL_O_WISP,
                MOVE_SLUDGE,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 4467
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4467
            .heldItem = ITEM_WIDE_LENS,
#line 4470
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 136, 0, 0),
#line 4472
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4468
            .ability = ABILITY_FLASH_FIRE,
#line 4469
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4471
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4473
                MOVE_INFERNO,
                MOVE_BABY_DOLL_EYES,
                MOVE_DIG,
                MOVE_HEX,
            },
            },
            {
#line 4478
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4478
            .heldItem = ITEM_FLAME_ORB,
#line 4481
            .ev = TRAINER_PARTY_EVS(0, 28, 0, 0, 0, 108),
#line 4483
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4479
            .ability = ABILITY_QUICK_FEET,
#line 4480
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4482
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4484
                MOVE_FLING,
                MOVE_FACADE,
                MOVE_PROTECT,
            },
            },
            {
#line 4488
            .species = SPECIES_MAGBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4488
            .heldItem = ITEM_CHARCOAL,
#line 4491
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 48, 0, 0),
#line 4493
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4489
            .ability = ABILITY_FLAME_BODY,
#line 4490
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4492
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4494
                MOVE_WILL_O_WISP,
                MOVE_FLAME_WHEEL,
                MOVE_LOW_KICK,
            },
            },
        },
    },
#line 4499
    [DIFFICULTY_NORMAL][TRAINER_06BE2D1B] =
    {
#line 4500
        .trainerName = _("06BE2D1B"),
#line 4501
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4503
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4502
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4505
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4504
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4507
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4507
            .heldItem = ITEM_SCOPE_LENS,
#line 4510
            .ev = TRAINER_PARTY_EVS(0, 0, 72, 0, 0, 64),
#line 4512
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4508
            .ability = ABILITY_SUPER_LUCK,
#line 4509
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4511
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4513
                MOVE_ANCIENT_POWER,
                MOVE_PLAY_ROUGH,
                MOVE_POUNCE,
                MOVE_FOLLOW_ME,
            },
            },
            {
#line 4518
            .species = SPECIES_CUBCHOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4521
            .ev = TRAINER_PARTY_EVS(0, 92, 44, 0, 0, 0),
#line 4522
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4519
            .ability = ABILITY_RATTLED,
#line 4520
            .lvl = 22,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4523
                MOVE_FROST_BREATH,
                MOVE_DIG,
            },
            },
            {
#line 4526
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4526
            .heldItem = ITEM_SCOPE_LENS,
#line 4529
            .ev = TRAINER_PARTY_EVS(0, 92, 0, 36, 0, 0),
#line 4531
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4527
            .ability = ABILITY_SUPER_LUCK,
#line 4528
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4530
            .nature = NATURE_DOCILE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4532
                MOVE_TAILWIND,
                MOVE_AIR_CUTTER,
                MOVE_SNARL,
            },
            },
            {
#line 4536
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4536
            .heldItem = ITEM_SCOPE_LENS,
#line 4540
            .ev = TRAINER_PARTY_EVS(0, 136, 0, 0, 0, 0),
#line 4542
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4537
            .ability = ABILITY_SNIPER,
#line 4538
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4541
            .nature = NATURE_ADAMANT,
#line 4539
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4543
                MOVE_CROSS_POISON,
                MOVE_NIGHT_SLASH,
            },
            },
        },
    },
#line 4546
    [DIFFICULTY_NORMAL][TRAINER_06C68007] =
    {
#line 4547
        .trainerName = _("06C68007"),
#line 4548
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4550
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4549
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4552
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4551
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4554
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4554
            .heldItem = ITEM_FAIRY_FEATHER,
#line 4557
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 20, 104, 0),
#line 4559
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4555
            .ability = ABILITY_STATIC,
#line 4556
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4558
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4560
                MOVE_DISCHARGE,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 4563
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4563
            .heldItem = ITEM_EXPERT_BELT,
#line 4566
            .ev = TRAINER_PARTY_EVS(0, 96, 0, 0, 0, 32),
#line 4568
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4564
            .ability = ABILITY_OBLIVIOUS,
#line 4565
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4567
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4569
                MOVE_BULLDOZE,
                MOVE_ICY_WIND,
            },
            },
        },
    },
#line 4572
    [DIFFICULTY_NORMAL][TRAINER_06D2BD08] =
    {
#line 4573
        .trainerName = _("06D2BD08"),
#line 4574
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4577
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4575
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4578
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4576
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4580
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4580
            .heldItem = ITEM_MAGO_BERRY,
#line 4583
            .ev = TRAINER_PARTY_EVS(36, 0, 0, 0, 96, 0),
#line 4585
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4581
            .ability = ABILITY_TANGLED_FEET,
#line 4582
            .lvl = 27,
            .ball = POKEBALL_COUNT,
#line 4584
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4586
                MOVE_ICY_WIND,
                MOVE_PSYBEAM,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 4590
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4590
            .heldItem = ITEM_BLUNDER_POLICY,
#line 4593
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4591
            .ability = ABILITY_QUICK_FEET,
#line 4592
            .lvl = 25,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4594
                MOVE_ICY_WIND,
                MOVE_BODY_SLAM,
                MOVE_FURY_SWIPES,
            },
            },
            {
#line 4598
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4601
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4599
            .ability = ABILITY_DOWNLOAD,
#line 4600
            .lvl = 27,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4602
                MOVE_ICY_WIND,
                MOVE_TRI_ATTACK,
            },
            },
        },
    },
#line 4605
    [DIFFICULTY_NORMAL][TRAINER_070F6125] =
    {
#line 4606
        .trainerName = _("070F6125"),
#line 4607
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4610
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4608
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4611
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4609
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4613
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4613
            .heldItem = ITEM_SALAC_BERRY,
#line 4616
            .ev = TRAINER_PARTY_EVS(20, 116, 0, 0, 0, 0),
#line 4618
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4614
            .ability = ABILITY_INNER_FOCUS,
#line 4615
            .lvl = 27,
            .ball = POKEBALL_COUNT,
#line 4617
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4618
                MOVE_ENDURE,
                MOVE_REVERSAL,
                MOVE_ACROBATICS,
            },
            },
            {
#line 4622
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4622
            .heldItem = ITEM_BLACK_BELT,
#line 4625
            .ev = TRAINER_PARTY_EVS(0, 116, 0, 0, 0, 12),
#line 4627
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4623
            .ability = ABILITY_UNBURDEN,
#line 4624
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4626
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4627
                MOVE_ENDURE,
                MOVE_REVERSAL,
                MOVE_VACUUM_WAVE,
            },
            },
        },
    },
#line 4631
    [DIFFICULTY_NORMAL][TRAINER_07D063A5] =
    {
#line 4632
        .trainerName = _("07D063A5"),
#line 4633
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4636
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4634
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4637
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4635
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4639
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4642
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4644
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4640
            .ability = ABILITY_INTIMIDATE,
#line 4641
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4643
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4645
                MOVE_HELPING_HAND,
                MOVE_U_TURN,
            },
            },
            {
#line 4648
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4648
            .heldItem = ITEM_SHED_SHELL,
#line 4651
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4653
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4649
            .ability = ABILITY_INTIMIDATE,
#line 4650
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4652
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4654
                MOVE_HELPING_HAND,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 4657
            .species = SPECIES_SQUAWKABILLY_WHITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4657
            .heldItem = ITEM_RED_CARD,
#line 4660
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4662
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4658
            .ability = ABILITY_INTIMIDATE,
#line 4659
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4661
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4663
                MOVE_HELPING_HAND,
                MOVE_HEAT_WAVE,
            },
            },
            {
#line 4666
            .species = SPECIES_SQUAWKABILLY_YELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4666
            .heldItem = ITEM_EJECT_BUTTON,
#line 4669
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4671
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4667
            .ability = ABILITY_INTIMIDATE,
#line 4668
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4670
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4672
                MOVE_HELPING_HAND,
                MOVE_AERIAL_ACE,
            },
            },
        },
    },
#line 4675
    [DIFFICULTY_NORMAL][TRAINER_09AEC824] =
    {
#line 4676
        .trainerName = _("09AEC824"),
#line 4677
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4680
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4678
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4679
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4682
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4685
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 124, 0),
#line 4686
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4683
            .ability = ABILITY_INNER_FOCUS,
#line 4684
            .lvl = 26,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4687
                MOVE_THUNDER_WAVE,
                MOVE_NIGHT_SHADE,
                MOVE_CONFUSION,
            },
            },
            {
#line 4691
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4694
            .ev = TRAINER_PARTY_EVS(64, 0, 40, 0, 0, 24),
#line 4696
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4692
            .ability = ABILITY_VOLT_ABSORB,
#line 4693
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 4695
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4697
                MOVE_BITE,
                MOVE_NUZZLE,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 4701
            .species = SPECIES_SNIVY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4704
            .ev = TRAINER_PARTY_EVS(0, 120, 0, 0, 0, 16),
#line 4706
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4702
            .ability = ABILITY_OVERGROW,
#line 4703
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4705
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4707
                MOVE_PETAL_BLIZZARD,
                MOVE_GLARE,
                MOVE_BULLET_SEED,
            },
            },
            {
#line 4711
            .species = SPECIES_SHIINOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4714
            .ev = TRAINER_PARTY_EVS(84, 0, 0, 0, 0, 44),
#line 4716
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4712
            .ability = ABILITY_EFFECT_SPORE,
#line 4713
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4715
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4717
                MOVE_STUN_SPORE,
                MOVE_REVIVAL_BLESSING,
                MOVE_DRAINING_KISS,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 4722
    [DIFFICULTY_NORMAL][TRAINER_09B7B6C8] =
    {
#line 4723
        .trainerName = _("09B7B6C8"),
#line 4724
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4727
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4725
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4728
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4726
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4730
            .species = SPECIES_MALAMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4730
            .heldItem = ITEM_SITRUS_BERRY,
#line 4733
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 128, 0, 0),
#line 4735
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4731
            .ability = ABILITY_CONTRARY,
#line 4732
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4734
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4736
                MOVE_SWAGGER,
                MOVE_LIGHT_SCREEN,
                MOVE_ACUPRESSURE,
            },
            },
            {
#line 4740
            .species = SPECIES_DITTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4740
            .heldItem = ITEM_CHOICE_SCARF,
#line 4743
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 0, 72, 0),
#line 4745
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4741
            .ability = ABILITY_IMPOSTER,
#line 4742
            .lvl = 29,
            .ball = POKEBALL_COUNT,
#line 4744
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4747
    [DIFFICULTY_NORMAL][TRAINER_0A542D33] =
    {
#line 4748
        .trainerName = _("0A542D33"),
#line 4749
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4752
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4750
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4751
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4754
            .species = SPECIES_CLEFFA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4754
            .heldItem = ITEM_MENTAL_HERB,
#line 4757
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 128, 0),
#line 4759
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4755
            .ability = ABILITY_CUTE_CHARM,
#line 4756
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4758
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4760
                MOVE_HELPING_HAND,
                MOVE_DAZZLING_GLEAM,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 4764
            .species = SPECIES_CLEFAIRY,
#line 4764
            .gender = TRAINER_MON_MALE,
#line 4764
            .heldItem = ITEM_MENTAL_HERB,
#line 4767
            .ev = TRAINER_PARTY_EVS(0, 0, 64, 0, 0, 64),
#line 4769
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4765
            .ability = ABILITY_CUTE_CHARM,
#line 4766
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4768
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4770
                MOVE_HELPING_HAND,
                MOVE_DAZZLING_GLEAM,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 4774
            .species = SPECIES_CLEFABLE,
#line 4774
            .gender = TRAINER_MON_FEMALE,
#line 4774
            .heldItem = ITEM_MENTAL_HERB,
#line 4777
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 128, 0),
#line 4779
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4775
            .ability = ABILITY_CUTE_CHARM,
#line 4776
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4778
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4780
                MOVE_HELPING_HAND,
                MOVE_DAZZLING_GLEAM,
                MOVE_LIGHT_SCREEN,
            },
            },
        },
    },
#line 4784
    [DIFFICULTY_NORMAL][TRAINER_0A8B9F88] =
    {
#line 4785
        .trainerName = _("0A8B9F88"),
#line 4786
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4788
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4787
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4790
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4789
        .mapSec = MAPSEC_ROUTE2,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4792
            .species = SPECIES_MINIOR_METEOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4792
            .heldItem = ITEM_METRONOME,
#line 4795
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 84, 0, 0),
#line 4797
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4793
            .ability = ABILITY_SHIELDS_DOWN,
#line 4794
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4796
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4798
                MOVE_ROLLOUT,
            },
            },
            {
#line 4800
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4800
            .heldItem = ITEM_EVIOLITE,
#line 4803
            .ev = TRAINER_PARTY_EVS(52, 80, 0, 0, 0, 0),
#line 4805
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4801
            .ability = ABILITY_THICK_FAT,
#line 4802
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 4804
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4806
                MOVE_ICE_BALL,
            },
            },
            {
#line 4808
            .species = SPECIES_ANORITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4808
            .heldItem = ITEM_PASSHO_BERRY,
#line 4811
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 80, 0, 0),
#line 4813
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4809
            .ability = ABILITY_BATTLE_ARMOR,
#line 4810
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 4812
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4814
                MOVE_FURY_CUTTER,
            },
            },
        },
    },
#line 4816
    [DIFFICULTY_NORMAL][TRAINER_0A8FC005] =
    {
#line 4817
        .trainerName = _("0A8FC005"),
#line 4818
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4820
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4819
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4822
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4821
        .mapSec = MAPSEC_ROUTE4,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4824
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4824
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 4827
            .ev = TRAINER_PARTY_EVS(72, 0, 0, 0, 56, 0),
#line 4829
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4825
            .ability = ABILITY_DRIZZLE,
#line 4826
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4828
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4830
                MOVE_AIR_CUTTER,
                MOVE_ICY_WIND,
                MOVE_CHILLING_WATER,
                MOVE_STOCKPILE,
            },
            },
            {
#line 4835
            .species = SPECIES_TYRUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4835
            .heldItem = ITEM_UTILITY_UMBRELLA,
#line 4838
            .ev = TRAINER_PARTY_EVS(40, 0, 0, 0, 0, 88),
#line 4840
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4836
            .ability = ABILITY_STURDY,
#line 4837
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4839
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4841
                MOVE_ICE_FANG,
                MOVE_THUNDER_FANG,
                MOVE_BITE,
                MOVE_BULLDOZE,
            },
            },
            {
#line 4846
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4846
            .heldItem = ITEM_LEFTOVERS,
#line 4849
            .ev = TRAINER_PARTY_EVS(84, 0, 56, 0, 0, 0),
#line 4851
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4847
            .ability = ABILITY_RAIN_DISH,
#line 4848
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4850
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4852
                MOVE_WHIRLPOOL,
                MOVE_TOXIC,
                MOVE_ACID_ARMOR,
                MOVE_PROTECT,
            },
            },
            {
#line 4857
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4857
            .heldItem = ITEM_SNOWBALL,
#line 4860
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 0, 0, 76),
#line 4862
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4858
            .ability = ABILITY_HYPER_CUTTER,
#line 4859
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4861
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4863
                MOVE_VENOSHOCK,
                MOVE_AERIAL_ACE,
                MOVE_BREAKING_SWIPE,
                MOVE_SAND_TOMB,
            },
            },
        },
    },
#line 4868
    [DIFFICULTY_NORMAL][TRAINER_0AAB38A6] =
    {
#line 4869
        .trainerName = _("0AAB38A6"),
#line 4870
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4872
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4871
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4874
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4873
        .mapSec = MAPSEC_ROUTE4,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4876
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4876
            .heldItem = ITEM_EVIOLITE,
#line 4879
            .ev = TRAINER_PARTY_EVS(60, 0, 0, 0, 72, 0),
#line 4881
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4877
            .ability = ABILITY_LEVITATE,
#line 4878
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4880
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4882
                MOVE_EXTRASENSORY,
                MOVE_SCORCHING_SANDS,
                MOVE_HEX,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 4887
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4887
            .heldItem = ITEM_AIR_BALLOON,
#line 4890
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 0, 0, 88),
#line 4892
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4888
            .ability = ABILITY_ANGER_SHELL,
#line 4889
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4891
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4893
                MOVE_BULLDOZE,
                MOVE_VISE_GRIP,
                MOVE_METAL_CLAW,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 4898
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4898
            .heldItem = ITEM_ASSAULT_VEST,
#line 4901
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 44, 84),
#line 4903
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4899
            .ability = ABILITY_LEVITATE,
#line 4900
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 4902
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4904
                MOVE_SLUDGE_BOMB,
                MOVE_BODY_SLAM,
                MOVE_VENOSHOCK,
                MOVE_GYRO_BALL,
            },
            },
        },
    },
#line 4909
    [DIFFICULTY_NORMAL][TRAINER_0AF40D0B] =
    {
#line 4910
        .trainerName = _("0AF40D0B"),
#line 4911
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4913
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4912
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4915
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4914
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4917
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4917
            .heldItem = ITEM_CHOICE_SCARF,
#line 4920
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4922
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4918
            .ability = ABILITY_SWIFT_SWIM,
#line 4919
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 4921
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4923
                MOVE_SURF,
            },
            },
            {
#line 4925
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4925
            .heldItem = ITEM_CHOPLE_BERRY,
#line 4928
            .ev = TRAINER_PARTY_EVS(52, 0, 76, 0, 0, 0),
#line 4930
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4926
            .ability = ABILITY_STORM_DRAIN,
#line 4927
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 4929
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4931
                MOVE_EARTH_POWER,
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_RECOVER,
            },
            },
        },
    },
#line 4936
    [DIFFICULTY_NORMAL][TRAINER_0B48C7D0] =
    {
#line 4937
        .trainerName = _("0B48C7D0"),
#line 4938
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4940
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4939
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4941
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4942
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4944
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4944
            .heldItem = ITEM_DRAGON_FANG,
#line 4947
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 132, 0, 0),
#line 4949
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4945
            .ability = ABILITY_PRESSURE,
#line 4946
            .lvl = 33,
            .ball = POKEBALL_COUNT,
#line 4948
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4950
                MOVE_ICE_FANG,
                MOVE_BITE,
                MOVE_DRAGON_BREATH,
                MOVE_ROCK_BLAST,
            },
            },
            {
#line 4955
            .species = SPECIES_SILICOBRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4955
            .heldItem = ITEM_SMOOTH_ROCK,
#line 4958
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 4960
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4956
            .ability = ABILITY_SAND_SPIT,
#line 4957
            .lvl = 34,
            .ball = POKEBALL_COUNT,
#line 4959
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4961
                MOVE_SAND_TOMB,
                MOVE_WRAP,
                MOVE_GLARE,
            },
            },
            {
#line 4965
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4965
            .heldItem = ITEM_WIDE_LENS,
#line 4968
            .ev = TRAINER_PARTY_EVS(36, 0, 88, 0, 0, 0),
#line 4970
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4966
            .ability = ABILITY_PRESSURE,
#line 4967
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4969
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4971
                MOVE_DREAM_EATER,
                MOVE_NIGHT_SHADE,
                MOVE_HYPNOSIS,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 4976
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4976
            .heldItem = ITEM_HARD_STONE,
#line 4979
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 4981
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4977
            .ability = ABILITY_SAND_VEIL,
#line 4978
            .lvl = 34,
            .ball = POKEBALL_COUNT,
#line 4980
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4982
                MOVE_FIRE_FANG,
                MOVE_ICE_FANG,
                MOVE_THUNDER_FANG,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 4987
    [DIFFICULTY_NORMAL][TRAINER_0C0A9B2F] =
    {
#line 4988
        .trainerName = _("0C0A9B2F"),
#line 4989
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4991
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4990
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4993
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4992
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4995
            .species = SPECIES_TIRTOUGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4995
            .heldItem = ITEM_RINDO_BERRY,
#line 4998
            .ev = TRAINER_PARTY_EVS(0, 32, 0, 0, 0, 96),
#line 5000
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4996
            .ability = ABILITY_SOLID_ROCK,
#line 4997
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 4999
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5001
                MOVE_ZEN_HEADBUTT,
                MOVE_ANCIENT_POWER,
                MOVE_AQUA_JET,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 5006
            .species = SPECIES_SHIELDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5006
            .heldItem = ITEM_RED_CARD,
#line 5009
            .ev = TRAINER_PARTY_EVS(48, 80, 0, 0, 0, 0),
#line 5011
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5007
            .ability = ABILITY_STURDY,
#line 5008
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 5010
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5012
                MOVE_IRON_HEAD,
                MOVE_POWER_GEM,
                MOVE_METAL_BURST,
                MOVE_ROAR,
            },
            },
            {
#line 5017
            .species = SPECIES_KLEAVOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5017
            .heldItem = ITEM_KINGS_ROCK,
#line 5020
            .ev = TRAINER_PARTY_EVS(20, 0, 0, 0, 0, 108),
#line 5022
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5018
            .ability = ABILITY_SWARM,
#line 5019
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 5021
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5023
                MOVE_WING_ATTACK,
                MOVE_POUNCE,
                MOVE_SMACK_DOWN,
                MOVE_DOUBLE_HIT,
            },
            },
        },
    },
#line 5028
    [DIFFICULTY_NORMAL][TRAINER_0C543C80] =
    {
#line 5029
        .trainerName = _("0C543C80"),
#line 5030
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5032
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5031
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5034
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5033
        .mapSec = MAPSEC_ROUTE2,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5036
            .species = SPECIES_SIGILYPH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5036
            .heldItem = ITEM_FLAME_ORB,
#line 5039
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 80, 0, 0),
#line 5041
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5037
            .ability = ABILITY_MAGIC_GUARD,
#line 5038
            .lvl = 34,
            .ball = POKEBALL_COUNT,
#line 5040
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5042
                MOVE_AIR_CUTTER,
                MOVE_CONFUSION,
                MOVE_PSYCHO_SHIFT,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 5047
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5047
            .heldItem = ITEM_EJECT_BUTTON,
#line 5050
            .ev = TRAINER_PARTY_EVS(44, 0, 80, 0, 0, 0),
#line 5052
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5048
            .ability = ABILITY_FRIEND_GUARD,
#line 5049
            .lvl = 37,
            .ball = POKEBALL_COUNT,
#line 5051
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5053
                MOVE_FOLLOW_ME,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 5056
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5056
            .heldItem = ITEM_FOCUS_SASH,
#line 5059
            .ev = TRAINER_PARTY_EVS(0, 128, 0, 0, 0, 0),
#line 5061
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5057
            .ability = ABILITY_ARENA_TRAP,
#line 5058
            .lvl = 33,
            .ball = POKEBALL_COUNT,
#line 5060
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5062
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
                MOVE_BITE,
                MOVE_BUG_BITE,
            },
            },
            {
#line 5067
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5067
            .heldItem = ITEM_SITRUS_BERRY,
#line 5070
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 5072
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5068
            .ability = ABILITY_MUMMY,
#line 5069
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 5071
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5073
                MOVE_HEX,
                MOVE_WILL_O_WISP,
                MOVE_MEAN_LOOK,
                MOVE_CURSE,
            },
            },
        },
    },
#line 5078
    [DIFFICULTY_NORMAL][TRAINER_0C95C833] =
    {
#line 5079
        .trainerName = _("0C95C833"),
#line 5080
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5082
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5081
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5083
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5084
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5086
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5086
            .heldItem = ITEM_CHOICE_SCARF,
#line 5089
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 124, 0, 0),
#line 5091
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5087
            .ability = ABILITY_ROUGH_SKIN,
#line 5088
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 5090
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5092
                MOVE_FLIP_TURN,
            },
            },
            {
#line 5094
            .species = SPECIES_ARCTOZOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5094
            .heldItem = ITEM_SALAC_BERRY,
#line 5097
            .ev = TRAINER_PARTY_EVS(24, 0, 0, 100, 0, 0),
#line 5099
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5095
            .ability = ABILITY_VOLT_ABSORB,
#line 5096
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 5098
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5100
                MOVE_ROCK_TOMB,
                MOVE_ICY_WIND,
                MOVE_ELECTRO_BALL,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 5105
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5105
            .heldItem = ITEM_SOFT_SAND,
#line 5108
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 5110
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5106
            .ability = ABILITY_SHELL_ARMOR,
#line 5107
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 5109
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5111
                MOVE_BODY_SLAM,
                MOVE_FLAME_WHEEL,
                MOVE_BULLDOZE,
                MOVE_YAWN,
            },
            },
        },
    },
#line 5116
    [DIFFICULTY_NORMAL][TRAINER_0D416B2C] =
    {
#line 5117
        .trainerName = _("0D416B2C"),
#line 5118
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5120
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5119
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5121
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5122
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5124
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5124
            .heldItem = ITEM_EVIOLITE,
#line 5127
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 80, 60, 0),
#line 5129
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5125
            .ability = ABILITY_WIND_POWER,
#line 5126
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5128
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5129
                MOVE_DISCHARGE,
                MOVE_U_TURN,
                MOVE_TAILWIND,
            },
            },
            {
#line 5133
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5133
            .heldItem = ITEM_CELL_BATTERY,
#line 5136
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 60, 0, 0),
#line 5138
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5134
            .ability = ABILITY_LIMBER,
#line 5135
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5137
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5138
                MOVE_BLAZE_KICK,
                MOVE_SUCKER_PUNCH,
                MOVE_LOW_SWEEP,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 5143
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5143
            .heldItem = ITEM_TOXIC_ORB,
#line 5146
            .ev = TRAINER_PARTY_EVS(60, 0, 0, 0, 0, 80),
#line 5148
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5144
            .ability = ABILITY_MARVEL_SCALE,
#line 5145
            .lvl = 42,
            .ball = POKEBALL_COUNT,
#line 5147
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5148
                MOVE_BODY_SLAM,
                MOVE_WATER_PULSE,
                MOVE_BREAKING_SWIPE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 5153
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5153
            .heldItem = ITEM_IAPAPA_BERRY,
#line 5156
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 0, 0, 60),
#line 5158
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5154
            .ability = ABILITY_STURDY,
#line 5155
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5157
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5158
                MOVE_STOMPING_TANTRUM,
                MOVE_KNOCK_OFF,
                MOVE_FIRE_FANG,
                MOVE_COUNTER,
            },
            },
        },
    },
#line 5163
    [DIFFICULTY_NORMAL][TRAINER_0D4BA0F1] =
    {
#line 5164
        .trainerName = _("0D4BA0F1"),
#line 5165
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5167
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5166
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5168
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5169
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5171
            .species = SPECIES_BARRASKEWDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5171
            .heldItem = ITEM_ROCKY_HELMET,
#line 5174
            .ev = TRAINER_PARTY_EVS(0, 0, 40, 0, 0, 100),
#line 5176
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5172
            .ability = ABILITY_PROPELLER_TAIL,
#line 5173
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5175
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5176
                MOVE_DIVE,
                MOVE_DRILL_RUN,
                MOVE_BITE,
                MOVE_AQUA_JET,
            },
            },
            {
#line 5181
            .species = SPECIES_CRAMORANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5181
            .heldItem = ITEM_MYSTIC_WATER,
#line 5184
            .ev = TRAINER_PARTY_EVS(0, 0, 40, 100, 0, 0),
#line 5186
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5182
            .ability = ABILITY_GULP_MISSILE,
#line 5183
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5185
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5186
                MOVE_SURF,
                MOVE_DIVE,
                MOVE_DRILL_PECK,
                MOVE_STOCKPILE,
            },
            },
            {
#line 5191
            .species = SPECIES_PAWMOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5191
            .heldItem = ITEM_PUNCHING_GLOVE,
#line 5194
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 100, 0, 40),
#line 5196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5192
            .ability = ABILITY_VOLT_ABSORB,
#line 5193
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5195
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5196
                MOVE_THUNDER_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_BRICK_BREAK,
                MOVE_UPPER_HAND,
            },
            },
        },
    },
#line 5201
    [DIFFICULTY_NORMAL][TRAINER_0DA021EF] =
    {
#line 5202
        .trainerName = _("Billy"),
#line 5203
        .trainerPic = TRAINER_PIC_FRONT_BIRD_KEEPER,
#line 5205
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5204
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5206
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5207
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_BIRD_KEEPER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5209
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5209
            .heldItem = ITEM_WACAN_BERRY,
#line 5212
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5214
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5210
            .ability = ABILITY_INTIMIDATE,
#line 5211
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5213
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5214
                MOVE_TAKE_DOWN,
                MOVE_FLY,
                MOVE_U_TURN,
                MOVE_PARTING_SHOT,
            },
            },
            {
#line 5219
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5219
            .heldItem = ITEM_FLAME_ORB,
#line 5222
            .ev = TRAINER_PARTY_EVS(60, 0, 0, 80, 0, 0),
#line 5224
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5220
            .ability = ABILITY_GUTS,
#line 5221
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5223
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5224
                MOVE_FACADE,
                MOVE_LASH_OUT,
                MOVE_DUAL_WINGBEAT,
                MOVE_TORMENT,
            },
            },
            {
#line 5229
            .species = SPECIES_SQUAWKABILLY_YELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5229
            .heldItem = ITEM_WIDE_LENS,
#line 5232
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 80, 0, 0),
#line 5234
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5230
            .ability = ABILITY_HUSTLE,
#line 5231
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5233
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5234
                MOVE_FOUL_PLAY,
                MOVE_AERIAL_ACE,
                MOVE_QUICK_ATTACK,
                MOVE_ROOST,
            },
            },
            {
#line 5239
            .species = SPECIES_SQUAWKABILLY_WHITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5239
            .heldItem = ITEM_LIFE_ORB,
#line 5242
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 80, 60, 0),
#line 5244
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5240
            .ability = ABILITY_SHEER_FORCE,
#line 5241
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5243
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5244
                MOVE_HURRICANE,
                MOVE_HEAT_WAVE,
                MOVE_POUNCE,
                MOVE_MIMIC,
            },
            },
        },
    },
#line 5249
    [DIFFICULTY_NORMAL][TRAINER_0E19F1A8] =
    {
#line 5250
        .trainerName = _("0E19F1A8"),
#line 5251
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5253
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5252
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5254
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5255
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5257
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5257
            .heldItem = ITEM_ADRENALINE_ORB,
#line 5260
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 60, 0, 0),
#line 5262
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5258
            .ability = ABILITY_KEEN_EYE,
#line 5259
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5261
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5262
                MOVE_DRAIN_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_BULLET_PUNCH,
            },
            },
            {
#line 5267
            .species = SPECIES_FLETCHINDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5267
            .heldItem = ITEM_FOCUS_SASH,
#line 5270
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 80, 0, 0),
#line 5272
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5268
            .ability = ABILITY_GALE_WINGS,
#line 5269
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5271
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5272
                MOVE_FLY,
                MOVE_STEEL_WING,
                MOVE_FIRE_SPIN,
                MOVE_TAILWIND,
            },
            },
            {
#line 5277
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5277
            .heldItem = ITEM_POWER_HERB,
#line 5280
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5282
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5278
            .ability = ABILITY_WIND_RIDER,
#line 5279
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5281
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5282
                MOVE_SOLAR_BLADE,
                MOVE_THIEF,
                MOVE_AERIAL_ACE,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 5287
            .species = SPECIES_NOIVERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5287
            .heldItem = ITEM_YACHE_BERRY,
#line 5290
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5292
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5288
            .ability = ABILITY_INFILTRATOR,
#line 5289
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5291
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5292
                MOVE_DRAGON_PULSE,
                MOVE_PSYCHIC_NOISE,
                MOVE_AIR_CUTTER,
                MOVE_TAILWIND,
            },
            },
        },
    },
#line 5297
    [DIFFICULTY_NORMAL][TRAINER_0E42221A] =
    {
#line 5298
        .trainerName = _("0E42221A"),
#line 5299
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5301
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5300
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5302
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5303
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5305
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5305
            .heldItem = ITEM_WEAKNESS_POLICY,
#line 5308
            .ev = TRAINER_PARTY_EVS(0, 0, 140, 0, 0, 0),
#line 5310
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5306
            .ability = ABILITY_TECHNICIAN,
#line 5307
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5309
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5310
                MOVE_BUG_BITE,
                MOVE_TRAILBLAZE,
                MOVE_DUAL_WINGBEAT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 5315
            .species = SPECIES_SWOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5315
            .heldItem = ITEM_MARANGA_BERRY,
#line 5318
            .ev = TRAINER_PARTY_EVS(0, 0, 60, 0, 0, 80),
#line 5320
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5316
            .ability = ABILITY_SIMPLE,
#line 5317
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5319
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5320
                MOVE_STORED_POWER,
                MOVE_CALM_MIND,
            },
            },
            {
#line 5323
            .species = SPECIES_GREEDENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5323
            .heldItem = ITEM_GANLON_BERRY,
#line 5326
            .ev = TRAINER_PARTY_EVS(0, 80, 60, 0, 0, 0),
#line 5327
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5324
            .ability = ABILITY_CHEEK_POUCH,
#line 5325
            .lvl = 45,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5327
                MOVE_BODY_PRESS,
                MOVE_BODY_SLAM,
                MOVE_SEED_BOMB,
                MOVE_STUFF_CHEEKS,
            },
            },
        },
    },
#line 5332
    [DIFFICULTY_NORMAL][TRAINER_0ED24EF1] =
    {
#line 5333
        .trainerName = _("0ED24EF1"),
#line 5334
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5336
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5335
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5337
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5338
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5340
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5340
            .heldItem = ITEM_YACHE_BERRY,
#line 5343
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 80, 0, 0),
#line 5345
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5341
            .ability = ABILITY_HYPER_CUTTER,
#line 5342
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5344
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5345
                MOVE_ROCK_SLIDE,
                MOVE_BULLDOZE,
                MOVE_FIRE_FANG,
                MOVE_TOXIC_SPIKES,
            },
            },
            {
#line 5350
            .species = SPECIES_SHUCKLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5350
            .heldItem = ITEM_LEFTOVERS,
#line 5353
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5355
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5351
            .ability = ABILITY_STURDY,
#line 5352
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5354
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5355
                MOVE_KNOCK_OFF,
                MOVE_INFESTATION,
                MOVE_WRAP,
                MOVE_PROTECT,
            },
            },
            {
#line 5360
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5360
            .heldItem = ITEM_ASSAULT_VEST,
#line 5363
            .ev = TRAINER_PARTY_EVS(0, 0, 60, 0, 0, 80),
#line 5365
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5361
            .ability = ABILITY_SHEER_FORCE,
#line 5362
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5364
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5365
                MOVE_LIQUIDATION,
                MOVE_NIGHT_SLASH,
                MOVE_METAL_CLAW,
                MOVE_HAMMER_ARM,
            },
            },
        },
    },
#line 5370
    [DIFFICULTY_NORMAL][TRAINER_0F03CF8D] =
    {
#line 5371
        .trainerName = _("0F03CF8D"),
#line 5372
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5374
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5373
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5376
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5375
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5378
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5378
            .heldItem = ITEM_SCOPE_LENS,
#line 5381
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 0, 60, 0),
#line 5383
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5379
            .ability = ABILITY_KEEN_EYE,
#line 5380
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5382
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5384
                MOVE_DUAL_WINGBEAT,
                MOVE_STEEL_WING,
                MOVE_TAILWIND,
                MOVE_UPROAR,
            },
            },
            {
#line 5389
            .species = SPECIES_BOMBIRDIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5389
            .heldItem = ITEM_CHARTI_BERRY,
#line 5392
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 0, 0, 60),
#line 5394
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5390
            .ability = ABILITY_ROCKY_PAYLOAD,
#line 5391
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5393
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5394
                MOVE_FOUL_PLAY,
                MOVE_ROCK_SLIDE,
                MOVE_ACROBATICS,
                MOVE_FEATHER_DANCE,
            },
            },
            {
#line 5399
            .species = SPECIES_ORICORIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5399
            .heldItem = ITEM_ABSORB_BULB,
#line 5402
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 60, 80),
#line 5404
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5400
            .ability = ABILITY_DANCER,
#line 5401
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5403
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5404
                MOVE_REVELATION_DANCE,
                MOVE_ACROBATICS,
                MOVE_SWORDS_DANCE,
                MOVE_TAILWIND,
            },
            },
            {
#line 5409
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5409
            .heldItem = ITEM_WIDE_LENS,
#line 5412
            .ev = TRAINER_PARTY_EVS(0, 0, 100, 40, 0, 0),
#line 5414
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5410
            .ability = ABILITY_KEEN_EYE,
#line 5411
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5413
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5414
                MOVE_DREAM_EATER,
                MOVE_AIR_SLASH,
                MOVE_PSYBEAM,
                MOVE_HYPNOSIS,
            },
            },
        },
    },
#line 5419
    [DIFFICULTY_NORMAL][TRAINER_0F3D8011] =
    {
#line 5420
        .trainerName = _("0F3D8011"),
#line 5421
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5423
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5422
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5424
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5425
        .mapSec = MAPSEC_ROUTE11,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 5427
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5427
            .heldItem = ITEM_EVIOLITE,
#line 5430
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5431
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5428
            .ability = ABILITY_FRIEND_GUARD,
#line 5429
            .lvl = 54,
            .ball = POKEBALL_COUNT,
#line 5432
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5433
                MOVE_FOLLOW_ME,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_NIGHT_SHADE,
            },
            },
            {
#line 5438
            .species = SPECIES_GREEDENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5438
            .heldItem = ITEM_SITRUS_BERRY,
#line 5441
            .ev = TRAINER_PARTY_EVS(252, 48, 0, 0, 0, 0),
#line 5442
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5439
            .ability = ABILITY_CHEEK_POUCH,
#line 5440
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 5443
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5444
                MOVE_BODY_PRESS,
                MOVE_BODY_SLAM,
                MOVE_COUNTER,
                MOVE_CRUNCH,
            },
            },
            {
#line 5449
            .species = SPECIES_ARBOLIVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5449
            .heldItem = ITEM_SITRUS_BERRY,
#line 5452
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 0, 252, 0),
#line 5453
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5450
            .ability = ABILITY_HARVEST,
#line 5451
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 5454
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5455
                MOVE_GIGA_DRAIN,
                MOVE_EARTH_POWER,
                MOVE_LEECH_SEED,
                MOVE_SYNTHESIS,
            },
            },
            {
#line 5460
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5460
            .heldItem = ITEM_SITRUS_BERRY,
#line 5463
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 48, 0, 0),
#line 5464
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5461
            .ability = ABILITY_PICKUP,
#line 5462
            .lvl = 52,
            .ball = POKEBALL_COUNT,
#line 5465
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5466
                MOVE_WILD_CHARGE,
                MOVE_PLAY_ROUGH,
                MOVE_SEED_BOMB,
                MOVE_FOLLOW_ME,
            },
            },
            {
#line 5471
            .species = SPECIES_POLTEAGEIST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5471
            .heldItem = ITEM_STARF_BERRY,
#line 5474
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 148, 152, 0),
#line 5476
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5472
            .ability = ABILITY_WEAK_ARMOR,
#line 5473
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 5475
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5477
                MOVE_TEATIME,
                MOVE_GIGA_DRAIN,
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
            },
            },
        },
    },
#line 5482
    [DIFFICULTY_NORMAL][TRAINER_0F3DB5D8] =
    {
#line 5483
        .trainerName = _("0F3DB5D8"),
#line 5484
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5486
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5485
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5488
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5487
        .mapSec = MAPSEC_ROUTE11,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5490
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5490
            .heldItem = ITEM_BLACK_SLUDGE,
#line 5493
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 252, 0, 0),
#line 5495
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5491
            .ability = ABILITY_CLEAR_BODY,
#line 5492
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5494
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5496
                MOVE_TOXIC_SPIKES,
                MOVE_VENOSHOCK,
                MOVE_HEX,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 5501
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5501
            .heldItem = ITEM_SPELL_TAG,
#line 5504
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 48, 0),
#line 5505
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5502
            .ability = ABILITY_LEVITATE,
#line 5503
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 5506
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5507
                MOVE_HEX,
                MOVE_DAZZLING_GLEAM,
                MOVE_MEAN_LOOK,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 5512
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5512
            .heldItem = ITEM_FOCUS_SASH,
#line 5515
            .ev = TRAINER_PARTY_EVS(48, 252, 0, 0, 0, 0),
#line 5516
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5513
            .ability = ABILITY_SNIPER,
#line 5514
            .lvl = 52,
            .ball = POKEBALL_COUNT,
#line 5517
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5518
                MOVE_VENOSHOCK,
                MOVE_TOXIC_THREAD,
                MOVE_FELL_STINGER,
                MOVE_SUCKER_PUNCH,
            },
            },
        },
    },
#line 5523
    [DIFFICULTY_NORMAL][TRAINER_0F5F82C3] =
    {
#line 5524
        .trainerName = _("0F5F82C3"),
#line 5525
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5527
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5526
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5529
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5528
        .mapSec = MAPSEC_ROUTE11,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5531
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5531
            .heldItem = ITEM_PAYAPA_BERRY,
#line 5534
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 48, 0, 0),
#line 5535
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5532
            .ability = ABILITY_POISON_TOUCH,
#line 5533
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 5536
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5537
                MOVE_FAKE_OUT,
                MOVE_SUCKER_PUNCH,
                MOVE_POISON_JAB,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 5542
    [DIFFICULTY_NORMAL][TRAINER_0FFBCCB9] =
    {
#line 5543
        .trainerName = _("0FFBCCB9"),
#line 5544
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5546
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5545
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5548
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5547
        .mapSec = MAPSEC_ROUTE11,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5550
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5550
            .heldItem = ITEM_WEAKNESS_POLICY,
#line 5553
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5554
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5551
            .ability = ABILITY_PRESSURE,
#line 5552
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5555
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5556
                MOVE_FUTURE_SIGHT,
                MOVE_SHADOW_SNEAK,
                MOVE_LEECH_LIFE,
                MOVE_PAIN_SPLIT,
            },
            },
            {
#line 5561
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5561
            .heldItem = ITEM_EXPERT_BELT,
#line 5564
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5565
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5562
            .ability = ABILITY_JUSTIFIED,
#line 5563
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5566
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5567
                MOVE_FUTURE_SIGHT,
                MOVE_DRAIN_PUNCH,
                MOVE_PSYCHO_CUT,
                MOVE_X_SCISSOR,
            },
            },
            {
#line 5572
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5572
            .heldItem = ITEM_FAIRY_FEATHER,
#line 5575
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 48, 0),
#line 5577
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5573
            .ability = ABILITY_TRACE,
#line 5574
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5576
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5578
                MOVE_FUTURE_SIGHT,
                MOVE_DRAINING_KISS,
                MOVE_PSYCHIC,
                MOVE_MYSTICAL_FIRE,
            },
            },
            {
#line 5583
            .species = SPECIES_ORBEETLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5583
            .heldItem = ITEM_LEFTOVERS,
#line 5586
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 48, 252, 0),
#line 5588
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5584
            .ability = ABILITY_SWARM,
#line 5585
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 5587
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5589
                MOVE_FUTURE_SIGHT,
                MOVE_BUG_BUZZ,
                MOVE_INFESTATION,
                MOVE_SUBSTITUTE,
            },
            },
        },
    },
#line 5594
    [DIFFICULTY_NORMAL][TRAINER_1075163A] =
    {
#line 5595
        .trainerName = _("1075163A"),
#line 5596
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5600
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5597
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5599
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5598
        .mapSec = MAPSEC_FORT_YOBU,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5602
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5602
            .heldItem = ITEM_ROSELI_BERRY,
#line 5605
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 48, 0),
#line 5606
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5603
            .ability = ABILITY_LEVITATE,
#line 5604
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5607
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5608
                MOVE_BELCH,
                MOVE_ACROBATICS,
                MOVE_DRAGON_BREATH,
                MOVE_TAILWIND,
            },
            },
            {
#line 5613
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5613
            .heldItem = ITEM_SALAC_BERRY,
#line 5616
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 48, 0, 0),
#line 5617
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5614
            .ability = ABILITY_STURDY,
#line 5615
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5618
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5619
                MOVE_FLAIL,
                MOVE_ROCK_TOMB,
                MOVE_WATERFALL,
                MOVE_SCALE_SHOT,
            },
            },
            {
#line 5624
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5624
            .heldItem = ITEM_IAPAPA_BERRY,
#line 5627
            .ev = TRAINER_PARTY_EVS(52, 248, 0, 0, 0, 0),
#line 5629
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5625
            .ability = ABILITY_GLUTTONY,
#line 5626
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5628
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5630
                MOVE_BELLY_DRUM,
                MOVE_EXTREME_SPEED,
                MOVE_THROAT_CHOP,
                MOVE_THUNDER_WAVE,
            },
            },
        },
    },
#line 5635
    [DIFFICULTY_NORMAL][TRAINER_10751EAA] =
    {
#line 5636
        .trainerName = _("10751EAA"),
#line 5637
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5641
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5638
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5640
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5639
        .mapSec = MAPSEC_FORT_YOBU,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 5643
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5643
            .heldItem = ITEM_PAYAPA_BERRY,
#line 5646
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 48),
#line 5648
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5644
            .ability = ABILITY_LEVITATE,
#line 5645
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5647
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5649
                MOVE_TOXIC_SPIKES,
                MOVE_SLUDGE_BOMB,
                MOVE_HEAT_WAVE,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 5654
            .species = SPECIES_PANGORO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5654
            .heldItem = ITEM_SITRUS_BERRY,
#line 5657
            .ev = TRAINER_PARTY_EVS(48, 252, 0, 0, 0, 0),
#line 5659
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5655
            .ability = ABILITY_SCRAPPY,
#line 5656
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5658
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5660
                MOVE_SUBSTITUTE,
                MOVE_CIRCLE_THROW,
                MOVE_DARKEST_LARIAT,
                MOVE_GUNK_SHOT,
            },
            },
            {
#line 5665
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5665
            .heldItem = ITEM_ASSAULT_VEST,
#line 5668
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 48, 252, 0),
#line 5669
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5666
            .ability = ABILITY_FLAME_BODY,
#line 5667
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5670
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5671
                MOVE_LAVA_PLUME,
                MOVE_SCORCHING_SANDS,
                MOVE_THUNDERBOLT,
                MOVE_FIRE_SPIN,
            },
            },
            {
#line 5676
            .species = SPECIES_CRAMORANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5676
            .heldItem = ITEM_FOCUS_SASH,
#line 5679
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 0, 252, 0),
#line 5681
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5677
            .ability = ABILITY_GULP_MISSILE,
#line 5678
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5680
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5682
                MOVE_AGILITY,
                MOVE_SURF,
                MOVE_ENDEAVOR,
                MOVE_WHIRLPOOL,
            },
            },
            {
#line 5687
            .species = SPECIES_SKUNTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5687
            .heldItem = ITEM_AIR_BALLOON,
#line 5690
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 48, 252, 0),
#line 5692
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5688
            .ability = ABILITY_AFTERMATH,
#line 5689
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5691
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5693
                MOVE_HEX,
                MOVE_VENOSHOCK,
                MOVE_NASTY_PLOT,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 5698
    [DIFFICULTY_NORMAL][TRAINER_10E3552B] =
    {
#line 5699
        .trainerName = _("10E3552B"),
#line 5700
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5702
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5701
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5703
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5704
        .mapSec = MAPSEC_FORT_YOBU,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5706
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5706
            .heldItem = ITEM_FOCUS_SASH,
#line 5709
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5710
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5707
            .ability = ABILITY_REGENERATOR,
#line 5708
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5711
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5712
                MOVE_FAKE_OUT,
                MOVE_DRAIN_PUNCH,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 5717
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5717
            .heldItem = ITEM_LEFTOVERS,
#line 5720
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 48),
#line 5722
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5718
            .ability = ABILITY_REGENERATOR,
#line 5719
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5721
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5723
                MOVE_SCALD,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
                MOVE_SLACK_OFF,
            },
            },
            {
#line 5728
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5728
            .heldItem = ITEM_EVIOLITE,
#line 5731
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5733
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5729
            .ability = ABILITY_SERENE_GRACE,
#line 5730
            .lvl = 48,
            .ball = POKEBALL_COUNT,
#line 5732
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5734
                MOVE_DRAINING_KISS,
                MOVE_ANCIENT_POWER,
                MOVE_WISH,
                MOVE_BATON_PASS,
            },
            },
            {
#line 5739
            .species = SPECIES_LIEPARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5739
            .heldItem = ITEM_NORMAL_GEM,
#line 5742
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5744
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5740
            .ability = ABILITY_UNBURDEN,
#line 5741
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5743
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5745
                MOVE_U_TURN,
                MOVE_FAKE_OUT,
                MOVE_DARK_PULSE,
                MOVE_PLAY_ROUGH,
            },
            },
        },
    },
#line 5750
    [DIFFICULTY_NORMAL][TRAINER_1114BC23] =
    {
#line 5751
        .trainerName = _("1114BC23"),
#line 5752
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5754
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5753
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5755
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5756
        .mapSec = MAPSEC_FORT_YOBU,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5758
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5758
            .heldItem = ITEM_TOXIC_ORB,
#line 5761
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 48, 0, 0),
#line 5763
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5759
            .ability = ABILITY_POISON_HEAL,
#line 5760
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5762
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5764
                MOVE_SUBSTITUTE,
                MOVE_DRAIN_PUNCH,
                MOVE_GIGA_DRAIN,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 5769
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5769
            .heldItem = ITEM_BIG_ROOT,
#line 5772
            .ev = TRAINER_PARTY_EVS(252, 0, 24, 0, 0, 24),
#line 5774
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5770
            .ability = ABILITY_DRY_SKIN,
#line 5771
            .lvl = 47,
            .ball = POKEBALL_COUNT,
#line 5773
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5775
                MOVE_LEECH_SEED,
                MOVE_LEECH_LIFE,
                MOVE_GIGA_DRAIN,
                MOVE_SPORE,
            },
            },
            {
#line 5780
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5780
            .heldItem = ITEM_LEFTOVERS,
#line 5783
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5785
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5781
            .ability = ABILITY_FLASH_FIRE,
#line 5782
            .lvl = 48,
            .ball = POKEBALL_COUNT,
#line 5784
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5786
                MOVE_BITTER_BLADE,
                MOVE_PHANTOM_FORCE,
                MOVE_WILL_O_WISP,
                MOVE_BULK_UP,
            },
            },
            {
#line 5791
            .species = SPECIES_FLORGES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5791
            .heldItem = ITEM_BABIRI_BERRY,
#line 5794
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5796
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5792
            .ability = ABILITY_FLOWER_VEIL,
#line 5793
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5795
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5797
                MOVE_MOONBLAST,
                MOVE_STORED_POWER,
                MOVE_CALM_MIND,
                MOVE_SYNTHESIS,
            },
            },
        },
    },
#line 5802
    [DIFFICULTY_NORMAL][TRAINER_114EB3AD] =
    {
#line 5803
        .trainerName = _("114EB3AD"),
#line 5804
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5806
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5805
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5807
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5808
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5810
            .species = SPECIES_PURUGLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5810
            .heldItem = ITEM_FOCUS_SASH,
#line 5813
            .ev = TRAINER_PARTY_EVS(0, 244, 124, 0, 0, 28),
#line 5815
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5811
            .ability = ABILITY_DEFIANT,
#line 5812
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5814
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5815
                MOVE_FAKE_OUT,
                MOVE_DOUBLE_TEAM,
                MOVE_BODY_SLAM,
                MOVE_SUPER_FANG,
            },
            },
            {
#line 5820
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5820
            .heldItem = ITEM_MUSCLE_BAND,
#line 5823
            .ev = TRAINER_PARTY_EVS(0, 248, 0, 0, 0, 148),
#line 5825
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5821
            .ability = ABILITY_TECHNICIAN,
#line 5822
            .lvl = 48,
            .ball = POKEBALL_COUNT,
#line 5824
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5825
                MOVE_MACH_PUNCH,
                MOVE_BULLET_SEED,
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 5830
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5830
            .heldItem = ITEM_RED_CARD,
#line 5833
            .ev = TRAINER_PARTY_EVS(0, 124, 0, 148, 124, 0),
#line 5835
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5831
            .ability = ABILITY_ILLUSION,
#line 5832
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5834
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5835
                MOVE_NIGHT_DAZE,
                MOVE_FLAMETHROWER,
                MOVE_EXTRASENSORY,
                MOVE_SLUDGE_BOMB,
            },
            },
            {
#line 5840
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5840
            .heldItem = ITEM_TOXIC_ORB,
#line 5843
            .ev = TRAINER_PARTY_EVS(0, 248, 52, 0, 0, 100),
#line 5845
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5841
            .ability = ABILITY_QUICK_FEET,
#line 5842
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 5844
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5845
                MOVE_ROAR,
                MOVE_ICE_PUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_PLAY_ROUGH,
            },
            },
        },
    },
#line 5850
    [DIFFICULTY_NORMAL][TRAINER_11EDE0DC] =
    {
#line 5851
        .trainerName = _("11EDE0DC"),
#line 5852
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5854
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5855
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5856
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5858
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5858
            .heldItem = ITEM_PAYAPA_BERRY,
#line 5861
            .ev = TRAINER_PARTY_EVS(0, 0, 88, 0, 216, 96),
#line 5863
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5859
            .ability = ABILITY_STICKY_HOLD,
#line 5860
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 5862
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5863
                MOVE_TOXIC_SPIKES,
                MOVE_SLUDGE_WAVE,
                MOVE_GIGA_DRAIN,
                MOVE_MUD_SHOT,
            },
            },
            {
#line 5868
            .species = SPECIES_SCRAFTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5868
            .heldItem = ITEM_ROSELI_BERRY,
#line 5871
            .ev = TRAINER_PARTY_EVS(0, 116, 132, 0, 0, 148),
#line 5873
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5869
            .ability = ABILITY_INTIMIDATE,
#line 5870
            .lvl = 48,
            .ball = POKEBALL_COUNT,
#line 5872
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5873
                MOVE_DRAGON_TAIL,
                MOVE_ZEN_HEADBUTT,
                MOVE_DRAGON_DANCE,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 5878
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5878
            .heldItem = ITEM_RED_CARD,
#line 5881
            .ev = TRAINER_PARTY_EVS(136, 0, 44, 0, 136, 76),
#line 5883
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5879
            .ability = ABILITY_SHEER_FORCE,
#line 5880
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 5882
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5883
                MOVE_ICE_BEAM,
                MOVE_VENOSHOCK,
                MOVE_EARTH_POWER,
                MOVE_TOXIC_SPIKES,
            },
            },
            {
#line 5888
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5888
            .heldItem = ITEM_SCOPE_LENS,
#line 5891
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 148, 0),
#line 5893
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5889
            .ability = ABILITY_SUPER_LUCK,
#line 5890
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5892
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5893
                MOVE_HEX,
                MOVE_HEAT_WAVE,
                MOVE_AIR_CUTTER,
                MOVE_PSYCHIC_NOISE,
            },
            },
        },
    },
#line 5898
    [DIFFICULTY_NORMAL][TRAINER_120A20F6] =
    {
#line 5899
        .trainerName = _("120A20F6"),
#line 5900
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5902
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5901
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5903
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5904
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5906
            .species = SPECIES_KLEFKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5906
            .heldItem = ITEM_RED_CARD,
#line 5909
            .ev = TRAINER_PARTY_EVS(48, 0, 84, 0, 116, 148),
#line 5911
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5907
            .ability = ABILITY_PRANKSTER,
#line 5908
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 5910
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5911
                MOVE_SPIKES,
                MOVE_STEEL_BEAM,
                MOVE_MISTY_TERRAIN,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 5916
            .species = SPECIES_SLURPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5916
            .heldItem = ITEM_MISTY_SEED,
#line 5919
            .ev = TRAINER_PARTY_EVS(116, 0, 28, 252, 0, 0),
#line 5921
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5917
            .ability = ABILITY_UNBURDEN,
#line 5918
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5920
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5921
                MOVE_STICKY_WEB,
                MOVE_SURF,
                MOVE_FLAMETHROWER,
                MOVE_ENERGY_BALL,
            },
            },
            {
#line 5926
            .species = SPECIES_MINIOR_INDIGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5926
            .heldItem = ITEM_SITRUS_BERRY,
#line 5929
            .ev = TRAINER_PARTY_EVS(0, 148, 0, 248, 0, 0),
#line 5931
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5927
            .ability = ABILITY_SHIELDS_DOWN,
#line 5928
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 5930
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5931
                MOVE_STEALTH_ROCK,
                MOVE_ANCIENT_POWER,
                MOVE_SCORCHING_SANDS,
                MOVE_ACROBATICS,
            },
            },
            {
#line 5936
            .species = SPECIES_PANGORO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5936
            .heldItem = ITEM_LIECHI_BERRY,
#line 5939
            .ev = TRAINER_PARTY_EVS(148, 116, 36, 0, 0, 100),
#line 5941
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5937
            .ability = ABILITY_SCRAPPY,
#line 5938
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5940
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5941
                MOVE_CIRCLE_THROW,
                MOVE_LOW_KICK,
                MOVE_EARTHQUAKE,
                MOVE_DARKEST_LARIAT,
            },
            },
        },
    },
#line 5946
    [DIFFICULTY_NORMAL][TRAINER_13113EC0] =
    {
#line 5947
        .trainerName = _("13113EC0"),
#line 5948
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5950
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5949
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5951
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5952
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5954
            .species = SPECIES_VIKAVOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5954
            .heldItem = ITEM_QUICK_CLAW,
#line 5957
            .ev = TRAINER_PARTY_EVS(184, 0, 0, 0, 208, 8),
#line 5959
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5955
            .ability = ABILITY_LEVITATE,
#line 5956
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5958
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5960
                MOVE_STICKY_WEB,
                MOVE_VOLT_SWITCH,
                MOVE_ENERGY_BALL,
                MOVE_BUG_BUZZ,
            },
            },
            {
#line 5965
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5965
            .heldItem = ITEM_RED_CARD,
#line 5968
            .ev = TRAINER_PARTY_EVS(248, 0, 140, 0, 0, 8),
#line 5970
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5966
            .ability = ABILITY_HEATPROOF,
#line 5967
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 5969
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5971
                MOVE_STEALTH_ROCK,
                MOVE_ZEN_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 5976
            .species = SPECIES_URSALUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5976
            .heldItem = ITEM_BERSERK_GENE,
#line 5979
            .ev = TRAINER_PARTY_EVS(156, 124, 116, 0, 0, 0),
#line 5981
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5977
            .ability = ABILITY_UNNERVE,
#line 5978
            .lvl = 48,
            .ball = POKEBALL_COUNT,
#line 5980
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5982
                MOVE_PLAY_ROUGH,
                MOVE_BRICK_BREAK,
                MOVE_BODY_SLAM,
                MOVE_BULLDOZE,
            },
            },
        },
    },
#line 5987
    [DIFFICULTY_NORMAL][TRAINER_1387ABBC] =
    {
#line 5988
        .trainerName = _("1387ABBC"),
#line 5989
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5991
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5990
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5992
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5993
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5995
            .species = SPECIES_ORBEETLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5995
            .heldItem = ITEM_RED_CARD,
#line 5998
            .ev = TRAINER_PARTY_EVS(136, 0, 40, 224, 0, 0),
#line 6000
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5996
            .ability = ABILITY_SWARM,
#line 5997
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5999
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6001
                MOVE_STICKY_WEB,
                MOVE_HYPNOSIS,
                MOVE_PSYCHIC_NOISE,
                MOVE_BUG_BUZZ,
            },
            },
            {
#line 6006
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6006
            .heldItem = ITEM_EVIOLITE,
#line 6009
            .ev = TRAINER_PARTY_EVS(184, 0, 108, 0, 0, 104),
#line 6011
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6007
            .ability = ABILITY_DEFIANT,
#line 6008
            .lvl = 48,
            .ball = POKEBALL_COUNT,
#line 6010
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6012
                MOVE_STEALTH_ROCK,
                MOVE_STONE_EDGE,
                MOVE_DRAIN_PUNCH,
                MOVE_POISON_JAB,
            },
            },
        },
    },
#line 6017
    [DIFFICULTY_NORMAL][TRAINER_148A3C6B] =
    {
#line 6018
        .trainerName = _("148A3C6B"),
#line 6019
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6021
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6020
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6022
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6023
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6025
            .species = SPECIES_TOEDSCRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6025
            .heldItem = ITEM_YACHE_BERRY,
#line 6028
            .ev = TRAINER_PARTY_EVS(140, 0, 72, 0, 104, 80),
#line 6030
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6026
            .ability = ABILITY_MYCELIUM_MIGHT,
#line 6027
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 6029
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6031
                MOVE_SPORE,
                MOVE_TOXIC_SPIKES,
                MOVE_EARTH_POWER,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6036
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6036
            .heldItem = ITEM_BLUNDER_POLICY,
#line 6039
            .ev = TRAINER_PARTY_EVS(80, 0, 112, 52, 152, 0),
#line 6041
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6037
            .ability = ABILITY_INSOMNIA,
#line 6038
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 6040
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6042
                MOVE_HYPNOSIS,
                MOVE_HURRICANE,
                MOVE_WHIRLWIND,
                MOVE_EXTRASENSORY,
            },
            },
        },
    },
#line 6047
    [DIFFICULTY_NORMAL][TRAINER_14C5EE6C] =
    {
#line 6048
        .trainerName = _("14C5EE6C"),
#line 6049
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6051
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6050
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6052
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6053
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6055
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6055
            .heldItem = ITEM_WACAN_BERRY,
#line 6058
            .ev = TRAINER_PARTY_EVS(0, 144, 0, 252, 0, 4),
#line 6060
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6056
            .ability = ABILITY_MOXIE,
#line 6057
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 6059
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6061
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
                MOVE_AQUA_TAIL,
                MOVE_ICE_FANG,
            },
            },
            {
#line 6066
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6066
            .heldItem = ITEM_SITRUS_BERRY,
#line 6069
            .ev = TRAINER_PARTY_EVS(252, 0, 88, 0, 0, 60),
#line 6070
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6067
            .ability = ABILITY_CUTE_CHARM,
#line 6068
            .lvl = 48,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6071
                MOVE_FOLLOW_ME,
                MOVE_HELPING_HAND,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
            },
            },
        },
    },
#line 6076
    [DIFFICULTY_NORMAL][TRAINER_1508BB71] =
    {
#line 6077
        .trainerName = _("1508BB71"),
#line 6078
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6080
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6079
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6081
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6082
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6084
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6084
            .heldItem = ITEM_LEFTOVERS,
#line 6087
            .ev = TRAINER_PARTY_EVS(208, 0, 184, 0, 8, 0),
#line 6089
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6085
            .ability = ABILITY_SNOW_CLOAK,
#line 6086
            .lvl = 47,
            .ball = POKEBALL_COUNT,
#line 6088
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6090
                MOVE_SNOWSCAPE,
                MOVE_BLIZZARD,
                MOVE_REST,
                MOVE_REFLECT,
            },
            },
            {
#line 6095
            .species = SPECIES_BEARTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6095
            .heldItem = ITEM_STARF_BERRY,
#line 6098
            .ev = TRAINER_PARTY_EVS(0, 252, 72, 0, 0, 72),
#line 6100
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6096
            .ability = ABILITY_SNOW_CLOAK,
#line 6097
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 6099
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6101
                MOVE_SNOWSCAPE,
                MOVE_AVALANCHE,
                MOVE_SHEER_COLD,
            },
            },
        },
    },
#line 6105
    [DIFFICULTY_NORMAL][TRAINER_1510C80A] =
    {
#line 6106
        .trainerName = _("1510C80A"),
#line 6107
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6109
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6108
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6110
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6111
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6113
            .species = SPECIES_MUDSDALE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6113
            .heldItem = ITEM_SMOOTH_ROCK,
#line 6116
            .ev = TRAINER_PARTY_EVS(156, 0, 244, 0, 0, 0),
#line 6118
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6114
            .ability = ABILITY_STAMINA,
#line 6115
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 6117
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6119
                MOVE_SANDSTORM,
                MOVE_BODY_PRESS,
                MOVE_COUNTER,
                MOVE_CURSE,
            },
            },
            {
#line 6124
            .species = SPECIES_SANDACONDA,
#line 6124
            .gender = TRAINER_MON_MALE,
#line 6124
            .heldItem = ITEM_RED_CARD,
#line 6127
            .ev = TRAINER_PARTY_EVS(152, 88, 156, 0, 0, 0),
#line 6128
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6125
            .ability = ABILITY_SAND_SPIT,
#line 6126
            .lvl = 44,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6129
                MOVE_HURRICANE,
                MOVE_DRILL_RUN,
                MOVE_FIRE_FANG,
                MOVE_SKITTER_SMACK,
            },
            },
            {
#line 6134
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6134
            .heldItem = ITEM_LIFE_ORB,
#line 6137
            .ev = TRAINER_PARTY_EVS(0, 0, 148, 0, 252, 0),
#line 6138
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6135
            .ability = ABILITY_MAGIC_GUARD,
#line 6136
            .lvl = 47,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6139
                MOVE_PSYCHIC,
                MOVE_THUNDER_PUNCH,
                MOVE_SHADOW_BALL,
                MOVE_ENERGY_BALL,
            },
            },
        },
    },
#line 6144
    [DIFFICULTY_NORMAL][TRAINER_15598A38] =
    {
#line 6145
        .trainerName = _("15598A38"),
#line 6146
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6148
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6147
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6149
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6150
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6152
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6152
            .heldItem = ITEM_EXPERT_BELT,
#line 6155
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 144, 0, 0),
#line 6157
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6153
            .ability = ABILITY_PURE_POWER,
#line 6154
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 6156
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6158
                MOVE_HIGH_JUMP_KICK,
                MOVE_POISON_JAB,
                MOVE_ZEN_HEADBUTT,
                MOVE_FIRE_PUNCH,
            },
            },
            {
#line 6163
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6163
            .heldItem = ITEM_EXPERT_BELT,
#line 6166
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 148, 0, 0),
#line 6168
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6164
            .ability = ABILITY_PURE_POWER,
#line 6165
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 6167
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6169
                MOVE_ICE_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_ZEN_HEADBUTT,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 6174
            .species = SPECIES_LOKIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6174
            .heldItem = ITEM_EXPERT_BELT,
#line 6177
            .ev = TRAINER_PARTY_EVS(0, 204, 0, 196, 0, 0),
#line 6179
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6175
            .ability = ABILITY_TINTED_LENS,
#line 6176
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 6178
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6180
                MOVE_BUG_BITE,
                MOVE_AERIAL_ACE,
                MOVE_LASH_OUT,
                MOVE_DOUBLE_KICK,
            },
            },
        },
    },
#line 6185
    [DIFFICULTY_NORMAL][TRAINER_15A66566] =
    {
#line 6186
        .trainerName = _("15A66566"),
#line 6187
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6189
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6188
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6190
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6191
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6193
            .species = SPECIES_HAWLUCHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6193
            .heldItem = ITEM_ORAN_BERRY,
#line 6196
            .ev = TRAINER_PARTY_EVS(252, 0, 72, 0, 0, 72),
#line 6198
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6194
            .ability = ABILITY_UNBURDEN,
#line 6195
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 6197
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6199
                MOVE_TAUNT,
                MOVE_ENCORE,
                MOVE_HELPING_HAND,
                MOVE_BRICK_BREAK,
            },
            },
            {
#line 6204
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6204
            .heldItem = ITEM_KINGS_ROCK,
#line 6207
            .ev = TRAINER_PARTY_EVS(76, 252, 72, 0, 0, 0),
#line 6209
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6205
            .ability = ABILITY_ARENA_TRAP,
#line 6206
            .lvl = 40,
            .ball = POKEBALL_COUNT,
#line 6208
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6210
                MOVE_QUICK_ATTACK,
                MOVE_BITE,
                MOVE_STONE_EDGE,
                MOVE_BULLDOZE,
            },
            },
            {
#line 6215
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6215
            .heldItem = ITEM_CHOICE_BAND,
#line 6218
            .ev = TRAINER_PARTY_EVS(76, 252, 72, 0, 0, 0),
#line 6220
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6216
            .ability = ABILITY_ARENA_TRAP,
#line 6217
            .lvl = 40,
            .ball = POKEBALL_COUNT,
#line 6219
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6221
                MOVE_QUICK_ATTACK,
                MOVE_BUG_BITE,
                MOVE_STONE_EDGE,
                MOVE_BULLDOZE,
            },
            },
        },
    },
#line 6226
    [DIFFICULTY_NORMAL][TRAINER_15C87858] =
    {
#line 6227
        .trainerName = _("15C87858"),
#line 6228
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6230
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6229
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6231
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6232
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6234
            .species = SPECIES_SWADLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6237
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6235
            .ability = ABILITY_OVERCOAT,
#line 6236
            .lvl = 45,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6238
                MOVE_LIGHT_SCREEN,
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6243
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6246
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6244
            .ability = ABILITY_HYPER_CUTTER,
#line 6245
            .lvl = 41,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6247
                MOVE_TOXIC,
                MOVE_PROTECT,
                MOVE_SUBSTITUTE,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 6252
            .species = SPECIES_TOEDSCRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6255
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6253
            .ability = ABILITY_MYCELIUM_MIGHT,
#line 6254
            .lvl = 44,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6256
                MOVE_SUBSTITUTE,
                MOVE_LEECH_SEED,
                MOVE_PROTECT,
                MOVE_HEX,
            },
            },
        },
    },
#line 6261
    [DIFFICULTY_NORMAL][TRAINER_1648CE6E] =
    {
#line 6262
        .trainerName = _("1648CE6E"),
#line 6263
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6265
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6264
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6266
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6267
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6269
            .species = SPECIES_VANILLUXE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6269
            .heldItem = ITEM_ICY_ROCK,
#line 6272
            .ev = TRAINER_PARTY_EVS(132, 0, 76, 0, 172, 16),
#line 6274
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6270
            .ability = ABILITY_SNOW_WARNING,
#line 6271
            .lvl = 42,
            .ball = POKEBALL_COUNT,
#line 6273
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6275
                MOVE_MIST,
                MOVE_BLIZZARD,
                MOVE_EXPLOSION,
            },
            },
            {
#line 6279
            .species = SPECIES_CHANSEY,
#line 6279
            .gender = TRAINER_MON_FEMALE,
#line 6279
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 6282
            .ev = TRAINER_PARTY_EVS(0, 0, 144, 0, 252, 0),
#line 6284
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6280
            .ability = ABILITY_SERENE_GRACE,
#line 6281
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 6283
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6285
                MOVE_SNOWSCAPE,
                MOVE_BLIZZARD,
                MOVE_HEALING_WISH,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 6290
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6290
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 6293
            .ev = TRAINER_PARTY_EVS(64, 0, 44, 0, 252, 40),
#line 6295
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6291
            .ability = ABILITY_WATER_ABSORB,
#line 6292
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 6294
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6296
                MOVE_SNOWSCAPE,
                MOVE_BLIZZARD,
                MOVE_PSYCHIC_NOISE,
                MOVE_FREEZE_DRY,
            },
            },
            {
#line 6301
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6301
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 6304
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 148, 252, 0),
#line 6306
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6302
            .ability = ABILITY_SWIFT_SWIM,
#line 6303
            .lvl = 41,
            .ball = POKEBALL_COUNT,
#line 6305
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6307
                MOVE_SNOWSCAPE,
                MOVE_BLIZZARD,
                MOVE_BOUNCE,
                MOVE_SHELL_SMASH,
            },
            },
        },
    },
#line 6312
    [DIFFICULTY_NORMAL][TRAINER_1710375D] =
    {
#line 6313
        .trainerName = _("1710375D"),
#line 6314
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6316
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6315
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6317
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6318
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6320
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6320
            .heldItem = ITEM_AIR_BALLOON,
#line 6323
            .ev = TRAINER_PARTY_EVS(104, 252, 44, 0, 0, 0),
#line 6324
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6321
            .ability = ABILITY_MOLD_BREAKER,
#line 6322
            .lvl = 45,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6325
                MOVE_EARTHQUAKE,
                MOVE_SWORDS_DANCE,
                MOVE_RAPID_SPIN,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 6330
            .species = SPECIES_FRAXURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6330
            .heldItem = ITEM_SITRUS_BERRY,
#line 6333
            .ev = TRAINER_PARTY_EVS(92, 108, 172, 0, 0, 28),
#line 6334
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6331
            .ability = ABILITY_MOLD_BREAKER,
#line 6332
            .lvl = 40,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6335
                MOVE_STOMPING_TANTRUM,
                MOVE_SWORDS_DANCE,
                MOVE_SCALE_SHOT,
                MOVE_BREAKING_SWIPE,
            },
            },
            {
#line 6340
            .species = SPECIES_PANGORO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6340
            .heldItem = ITEM_EXPERT_BELT,
#line 6343
            .ev = TRAINER_PARTY_EVS(108, 248, 44, 0, 0, 0),
#line 6344
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6341
            .ability = ABILITY_MOLD_BREAKER,
#line 6342
            .lvl = 46,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6345
                MOVE_DRAIN_PUNCH,
                MOVE_THIEF,
                MOVE_ICE_PUNCH,
                MOVE_BULLET_PUNCH,
            },
            },
            {
#line 6350
            .species = SPECIES_HAWLUCHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6350
            .heldItem = ITEM_PAYAPA_BERRY,
#line 6353
            .ev = TRAINER_PARTY_EVS(68, 248, 0, 0, 0, 80),
#line 6354
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6351
            .ability = ABILITY_MOLD_BREAKER,
#line 6352
            .lvl = 45,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6355
                MOVE_SWORDS_DANCE,
                MOVE_DUAL_WINGBEAT,
                MOVE_FLYING_PRESS,
                MOVE_GRASS_KNOT,
            },
            },
        },
    },
#line 6360
    [DIFFICULTY_NORMAL][TRAINER_17DCC938] =
    {
#line 6361
        .trainerName = _("17DCC938"),
#line 6362
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6364
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6363
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6365
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6366
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6368
            .species = SPECIES_HONEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6368
            .heldItem = ITEM_ORAN_BERRY,
#line 6371
            .ev = TRAINER_PARTY_EVS(80, 160, 80, 0, 0, 80),
#line 6372
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6369
            .ability = ABILITY_NO_GUARD,
#line 6370
            .lvl = 35,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6373
                MOVE_ROCK_SLIDE,
                MOVE_FURY_CUTTER,
                MOVE_STEEL_BEAM,
            },
            },
            {
#line 6377
            .species = SPECIES_DOUBLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6377
            .heldItem = ITEM_SITRUS_BERRY,
#line 6380
            .ev = TRAINER_PARTY_EVS(172, 92, 132, 0, 0, 0),
#line 6381
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6378
            .ability = ABILITY_NO_GUARD,
#line 6379
            .lvl = 40,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6382
                MOVE_BRICK_BREAK,
                MOVE_GYRO_BALL,
                MOVE_NIGHT_SLASH,
                MOVE_BRUTAL_SWING,
            },
            },
            {
#line 6387
            .species = SPECIES_AEGISLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6387
            .heldItem = ITEM_AIR_BALLOON,
#line 6390
            .ev = TRAINER_PARTY_EVS(108, 252, 36, 0, 0, 0),
#line 6392
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6388
            .ability = ABILITY_STANCE_CHANGE,
#line 6389
            .lvl = 42,
            .ball = POKEBALL_COUNT,
#line 6391
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6393
                MOVE_KINGS_SHIELD,
                MOVE_SWORDS_DANCE,
                MOVE_SHADOW_SNEAK,
                MOVE_CLOSE_COMBAT,
            },
            },
            {
#line 6398
            .species = SPECIES_AEGISLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6398
            .heldItem = ITEM_LEFTOVERS,
#line 6401
            .ev = TRAINER_PARTY_EVS(108, 0, 36, 0, 252, 0),
#line 6403
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6399
            .ability = ABILITY_STANCE_CHANGE,
#line 6400
            .lvl = 42,
            .ball = POKEBALL_COUNT,
#line 6402
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6404
                MOVE_KINGS_SHIELD,
                MOVE_SHADOW_BALL,
                MOVE_SUBSTITUTE,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 6409
    [DIFFICULTY_NORMAL][TRAINER_188A6F20] =
    {
#line 6410
        .trainerName = _("188A6F20"),
#line 6411
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6412
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6414
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6416
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6415
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6417
    [DIFFICULTY_NORMAL][TRAINER_1932C509] =
    {
#line 6418
        .trainerName = _("1932C509"),
#line 6419
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6420
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6422
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6424
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6423
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6425
    [DIFFICULTY_NORMAL][TRAINER_19477C78] =
    {
#line 6426
        .trainerName = _("19477C78"),
#line 6427
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6428
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6430
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6432
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6431
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6433
    [DIFFICULTY_NORMAL][TRAINER_19C5BAD7] =
    {
#line 6434
        .trainerName = _("19C5BAD7"),
#line 6435
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6436
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6438
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6440
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6439
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6441
    [DIFFICULTY_NORMAL][TRAINER_19CD0726] =
    {
#line 6442
        .trainerName = _("19CD0726"),
#line 6443
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6444
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6446
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6448
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6447
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6449
    [DIFFICULTY_NORMAL][TRAINER_19D7682B] =
    {
#line 6450
        .trainerName = _("19D7682B"),
#line 6451
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6452
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6454
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6456
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6455
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6457
    [DIFFICULTY_NORMAL][TRAINER_1A2CA162] =
    {
#line 6458
        .trainerName = _("1A2CA162"),
#line 6459
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6460
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6462
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6464
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6463
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6465
    [DIFFICULTY_NORMAL][TRAINER_1A763631] =
    {
#line 6466
        .trainerName = _("1A763631"),
#line 6467
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6468
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6470
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6472
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6471
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6473
    [DIFFICULTY_NORMAL][TRAINER_1AE5CAF7] =
    {
#line 6474
        .trainerName = _("1AE5CAF7"),
#line 6475
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6476
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6478
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6480
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6479
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6481
    [DIFFICULTY_NORMAL][TRAINER_1AE89BEB] =
    {
#line 6482
        .trainerName = _("1AE89BEB"),
#line 6483
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6484
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6486
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6488
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6487
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6489
    [DIFFICULTY_NORMAL][TRAINER_1AEA3CEA] =
    {
#line 6490
        .trainerName = _("1AEA3CEA"),
#line 6491
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6492
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6494
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6496
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6495
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6497
    [DIFFICULTY_NORMAL][TRAINER_1B517ABD] =
    {
#line 6498
        .trainerName = _("1B517ABD"),
#line 6499
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6500
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6502
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6504
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6503
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6505
    [DIFFICULTY_NORMAL][TRAINER_1B616469] =
    {
#line 6506
        .trainerName = _("1B616469"),
#line 6507
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6508
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6510
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6512
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6511
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6513
    [DIFFICULTY_NORMAL][TRAINER_1BA35D11] =
    {
#line 6514
        .trainerName = _("1BA35D11"),
#line 6515
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6516
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6518
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6520
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6519
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6521
    [DIFFICULTY_NORMAL][TRAINER_1BB1218F] =
    {
#line 6522
        .trainerName = _("1BB1218F"),
#line 6523
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6524
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6526
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6528
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6527
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6529
    [DIFFICULTY_NORMAL][TRAINER_1BC45966] =
    {
#line 6530
        .trainerName = _("1BC45966"),
#line 6531
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6532
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6534
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6536
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6535
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6537
    [DIFFICULTY_NORMAL][TRAINER_1C2B088C] =
    {
#line 6538
        .trainerName = _("1C2B088C"),
#line 6539
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6540
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6542
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6544
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6543
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6545
    [DIFFICULTY_NORMAL][TRAINER_1C6CA7F6] =
    {
#line 6546
        .trainerName = _("1C6CA7F6"),
#line 6547
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6548
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6550
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6552
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6551
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6553
    [DIFFICULTY_NORMAL][TRAINER_1CBE4FB1] =
    {
#line 6554
        .trainerName = _("1CBE4FB1"),
#line 6555
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6556
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6558
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6560
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6559
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6561
    [DIFFICULTY_NORMAL][TRAINER_1CBFAF10] =
    {
#line 6562
        .trainerName = _("1CBFAF10"),
#line 6563
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6564
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6566
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6568
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6567
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6569
    [DIFFICULTY_NORMAL][TRAINER_1CC4D5D6] =
    {
#line 6570
        .trainerName = _("1CC4D5D6"),
#line 6571
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6572
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6574
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6576
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6575
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6577
    [DIFFICULTY_NORMAL][TRAINER_1D63E5A1] =
    {
#line 6578
        .trainerName = _("1D63E5A1"),
#line 6579
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6580
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6582
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6584
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6583
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6585
    [DIFFICULTY_NORMAL][TRAINER_1D7A6DED] =
    {
#line 6586
        .trainerName = _("1D7A6DED"),
#line 6587
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6588
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6590
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6592
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6591
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6593
    [DIFFICULTY_NORMAL][TRAINER_1D93B10D] =
    {
#line 6594
        .trainerName = _("1D93B10D"),
#line 6595
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6596
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6598
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6600
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6599
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6601
    [DIFFICULTY_NORMAL][TRAINER_1DD07C78] =
    {
#line 6602
        .trainerName = _("1DD07C78"),
#line 6603
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6604
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6606
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6608
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6607
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6609
    [DIFFICULTY_NORMAL][TRAINER_1E5E6E80] =
    {
#line 6610
        .trainerName = _("1E5E6E80"),
#line 6611
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6612
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6614
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6616
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6615
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6617
    [DIFFICULTY_NORMAL][TRAINER_1EE34E30] =
    {
#line 6618
        .trainerName = _("1EE34E30"),
#line 6619
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6620
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6622
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6624
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6623
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6625
    [DIFFICULTY_NORMAL][TRAINER_1F24A6B1] =
    {
#line 6626
        .trainerName = _("1F24A6B1"),
#line 6627
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6628
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6630
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6632
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6631
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6633
    [DIFFICULTY_NORMAL][TRAINER_1F2A70D3] =
    {
#line 6634
        .trainerName = _("1F2A70D3"),
#line 6635
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6636
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6638
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6640
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6639
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6641
    [DIFFICULTY_NORMAL][TRAINER_1FD08020] =
    {
#line 6642
        .trainerName = _("1FD08020"),
#line 6643
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6644
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6646
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6648
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6647
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6649
    [DIFFICULTY_NORMAL][TRAINER_200650CA] =
    {
#line 6650
        .trainerName = _("200650CA"),
#line 6651
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6652
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6654
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6656
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6655
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6657
    [DIFFICULTY_NORMAL][TRAINER_20170FA5] =
    {
#line 6658
        .trainerName = _("20170FA5"),
#line 6659
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6660
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6662
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6664
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6663
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6665
    [DIFFICULTY_NORMAL][TRAINER_20993B87] =
    {
#line 6666
        .trainerName = _("20993B87"),
#line 6667
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6668
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6670
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6672
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6671
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6673
    [DIFFICULTY_NORMAL][TRAINER_20A10A97] =
    {
#line 6674
        .trainerName = _("20A10A97"),
#line 6675
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6676
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6678
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6680
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6679
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6681
    [DIFFICULTY_NORMAL][TRAINER_20A6F3A6] =
    {
#line 6682
        .trainerName = _("20A6F3A6"),
#line 6683
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6684
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6686
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6688
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6687
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6689
    [DIFFICULTY_NORMAL][TRAINER_20DC389D] =
    {
#line 6690
        .trainerName = _("20DC389D"),
#line 6691
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6692
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6694
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6696
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6695
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6697
    [DIFFICULTY_NORMAL][TRAINER_2177173C] =
    {
#line 6698
        .trainerName = _("2177173C"),
#line 6699
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6700
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6702
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6704
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6703
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6705
    [DIFFICULTY_NORMAL][TRAINER_2180E5CD] =
    {
#line 6706
        .trainerName = _("2180E5CD"),
#line 6707
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6708
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6710
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6712
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6711
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6713
    [DIFFICULTY_NORMAL][TRAINER_21EB8B2C] =
    {
#line 6714
        .trainerName = _("21EB8B2C"),
#line 6715
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6716
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6718
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6720
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6719
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6721
    [DIFFICULTY_NORMAL][TRAINER_22BA389B] =
    {
#line 6722
        .trainerName = _("22BA389B"),
#line 6723
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6724
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6726
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6728
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6727
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6729
    [DIFFICULTY_NORMAL][TRAINER_22DD5E2B] =
    {
#line 6730
        .trainerName = _("22DD5E2B"),
#line 6731
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6732
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6734
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6736
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6735
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6737
    [DIFFICULTY_NORMAL][TRAINER_22E7DE36] =
    {
#line 6738
        .trainerName = _("22E7DE36"),
#line 6739
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6740
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6742
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6744
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6743
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6745
    [DIFFICULTY_NORMAL][TRAINER_23C3170F] =
    {
#line 6746
        .trainerName = _("23C3170F"),
#line 6747
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6748
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6750
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6752
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6751
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6753
    [DIFFICULTY_NORMAL][TRAINER_23F50BC3] =
    {
#line 6754
        .trainerName = _("23F50BC3"),
#line 6755
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6756
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6758
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6760
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6759
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6761
    [DIFFICULTY_NORMAL][TRAINER_2434A25C] =
    {
#line 6762
        .trainerName = _("2434A25C"),
#line 6763
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6764
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6766
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6768
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6767
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6769
    [DIFFICULTY_NORMAL][TRAINER_245235C9] =
    {
#line 6770
        .trainerName = _("245235C9"),
#line 6771
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6772
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6774
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6776
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6775
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6777
    [DIFFICULTY_NORMAL][TRAINER_246CBBD5] =
    {
#line 6778
        .trainerName = _("246CBBD5"),
#line 6779
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6780
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6782
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6784
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6783
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6785
    [DIFFICULTY_NORMAL][TRAINER_247FE019] =
    {
#line 6786
        .trainerName = _("247FE019"),
#line 6787
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6788
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6790
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6792
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6791
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6793
    [DIFFICULTY_NORMAL][TRAINER_24AAFD0D] =
    {
#line 6794
        .trainerName = _("24AAFD0D"),
#line 6795
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6796
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6798
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6800
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6799
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6801
    [DIFFICULTY_NORMAL][TRAINER_24AC96DF] =
    {
#line 6802
        .trainerName = _("24AC96DF"),
#line 6803
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6804
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6806
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6808
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6807
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6809
    [DIFFICULTY_NORMAL][TRAINER_2561CB61] =
    {
#line 6810
        .trainerName = _("2561CB61"),
#line 6811
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6812
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6814
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6816
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6815
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6817
    [DIFFICULTY_NORMAL][TRAINER_26268FB4] =
    {
#line 6818
        .trainerName = _("26268FB4"),
#line 6819
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6820
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6822
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6824
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6823
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6825
    [DIFFICULTY_NORMAL][TRAINER_265174A6] =
    {
#line 6826
        .trainerName = _("265174A6"),
#line 6827
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6828
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6830
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6832
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6831
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6833
    [DIFFICULTY_NORMAL][TRAINER_272FA5B8] =
    {
#line 6834
        .trainerName = _("272FA5B8"),
#line 6835
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6836
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6838
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6840
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6839
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6841
    [DIFFICULTY_NORMAL][TRAINER_27B23C10] =
    {
#line 6842
        .trainerName = _("27B23C10"),
#line 6843
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6844
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6846
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6848
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6847
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6849
    [DIFFICULTY_NORMAL][TRAINER_27CEF8F2] =
    {
#line 6850
        .trainerName = _("27CEF8F2"),
#line 6851
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6852
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6854
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6856
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6855
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6857
    [DIFFICULTY_NORMAL][TRAINER_27E6F69F] =
    {
#line 6858
        .trainerName = _("27E6F69F"),
#line 6859
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6860
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6862
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6864
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6863
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6865
    [DIFFICULTY_NORMAL][TRAINER_28B294D2] =
    {
#line 6866
        .trainerName = _("28B294D2"),
#line 6867
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6868
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6870
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6872
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6871
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6873
    [DIFFICULTY_NORMAL][TRAINER_28E0625E] =
    {
#line 6874
        .trainerName = _("28E0625E"),
#line 6875
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6876
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6878
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6880
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6879
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6881
    [DIFFICULTY_NORMAL][TRAINER_292E386F] =
    {
#line 6882
        .trainerName = _("292E386F"),
#line 6883
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6884
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6886
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6888
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6887
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6889
    [DIFFICULTY_NORMAL][TRAINER_29AE727B] =
    {
#line 6890
        .trainerName = _("29AE727B"),
#line 6891
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6892
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6894
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6896
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6895
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6897
    [DIFFICULTY_NORMAL][TRAINER_2A305E88] =
    {
#line 6898
        .trainerName = _("2A305E88"),
#line 6899
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6900
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6902
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6904
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6903
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6905
    [DIFFICULTY_NORMAL][TRAINER_2A3F43CA] =
    {
#line 6906
        .trainerName = _("2A3F43CA"),
#line 6907
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6908
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6910
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6912
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6911
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6913
    [DIFFICULTY_NORMAL][TRAINER_2A7BF9FF] =
    {
#line 6914
        .trainerName = _("2A7BF9FF"),
#line 6915
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6916
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6918
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6920
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6919
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6921
    [DIFFICULTY_NORMAL][TRAINER_2A83B15E] =
    {
#line 6922
        .trainerName = _("2A83B15E"),
#line 6923
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6924
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6926
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6928
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6927
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6929
    [DIFFICULTY_NORMAL][TRAINER_2AD73BF3] =
    {
#line 6930
        .trainerName = _("2AD73BF3"),
#line 6931
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6932
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6934
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6936
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6935
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6937
    [DIFFICULTY_NORMAL][TRAINER_2B163825] =
    {
#line 6938
        .trainerName = _("2B163825"),
#line 6939
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6940
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6942
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6944
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6943
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6945
    [DIFFICULTY_NORMAL][TRAINER_2B249E40] =
    {
#line 6946
        .trainerName = _("2B249E40"),
#line 6947
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6948
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6950
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6952
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6951
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6953
    [DIFFICULTY_NORMAL][TRAINER_2BCA066C] =
    {
#line 6954
        .trainerName = _("2BCA066C"),
#line 6955
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6956
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6958
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6960
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6959
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6961
    [DIFFICULTY_NORMAL][TRAINER_2C040422] =
    {
#line 6962
        .trainerName = _("2C040422"),
#line 6963
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6964
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6966
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6968
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6967
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6969
    [DIFFICULTY_NORMAL][TRAINER_2C22CE48] =
    {
#line 6970
        .trainerName = _("2C22CE48"),
#line 6971
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6972
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6974
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6976
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6975
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6977
    [DIFFICULTY_NORMAL][TRAINER_2C398893] =
    {
#line 6978
        .trainerName = _("2C398893"),
#line 6979
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6980
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6982
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6984
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6983
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6985
    [DIFFICULTY_NORMAL][TRAINER_2C5FFA9F] =
    {
#line 6986
        .trainerName = _("2C5FFA9F"),
#line 6987
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6988
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6990
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6992
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6991
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6993
    [DIFFICULTY_NORMAL][TRAINER_2D1A100A] =
    {
#line 6994
        .trainerName = _("2D1A100A"),
#line 6995
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6996
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6998
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7000
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6999
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7001
    [DIFFICULTY_NORMAL][TRAINER_2D203158] =
    {
#line 7002
        .trainerName = _("2D203158"),
#line 7003
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7004
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7006
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7008
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7007
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7009
    [DIFFICULTY_NORMAL][TRAINER_2D29DC23] =
    {
#line 7010
        .trainerName = _("2D29DC23"),
#line 7011
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7012
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7014
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7016
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7015
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7017
    [DIFFICULTY_NORMAL][TRAINER_2D6DE246] =
    {
#line 7018
        .trainerName = _("2D6DE246"),
#line 7019
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7020
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7022
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7024
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7023
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7025
    [DIFFICULTY_NORMAL][TRAINER_2D92F001] =
    {
#line 7026
        .trainerName = _("2D92F001"),
#line 7027
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7028
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7030
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7032
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7031
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7033
    [DIFFICULTY_NORMAL][TRAINER_2DC29B9E] =
    {
#line 7034
        .trainerName = _("2DC29B9E"),
#line 7035
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7036
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7038
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7040
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7039
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7041
    [DIFFICULTY_NORMAL][TRAINER_2E218A8E] =
    {
#line 7042
        .trainerName = _("2E218A8E"),
#line 7043
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7044
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7046
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7048
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7047
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7049
    [DIFFICULTY_NORMAL][TRAINER_2E593FA9] =
    {
#line 7050
        .trainerName = _("2E593FA9"),
#line 7051
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7052
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7054
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7056
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7055
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7057
    [DIFFICULTY_NORMAL][TRAINER_2EC49459] =
    {
#line 7058
        .trainerName = _("2EC49459"),
#line 7059
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7060
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7062
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7064
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7063
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7065
    [DIFFICULTY_NORMAL][TRAINER_2F0770D3] =
    {
#line 7066
        .trainerName = _("2F0770D3"),
#line 7067
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7068
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7070
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7072
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7071
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7073
    [DIFFICULTY_NORMAL][TRAINER_2F09421D] =
    {
#line 7074
        .trainerName = _("2F09421D"),
#line 7075
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7076
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7078
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7080
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7079
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7081
    [DIFFICULTY_NORMAL][TRAINER_2FF79A0B] =
    {
#line 7082
        .trainerName = _("2FF79A0B"),
#line 7083
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7084
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7086
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7088
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7087
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7089
    [DIFFICULTY_NORMAL][TRAINER_3009CC76] =
    {
#line 7090
        .trainerName = _("3009CC76"),
#line 7091
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7092
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7094
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7096
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7095
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7097
    [DIFFICULTY_NORMAL][TRAINER_30522A9A] =
    {
#line 7098
        .trainerName = _("30522A9A"),
#line 7099
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7100
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7102
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7104
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7103
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7105
    [DIFFICULTY_NORMAL][TRAINER_30ACE135] =
    {
#line 7106
        .trainerName = _("30ACE135"),
#line 7107
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7108
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7110
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7112
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7111
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7113
    [DIFFICULTY_NORMAL][TRAINER_311B3EFC] =
    {
#line 7114
        .trainerName = _("311B3EFC"),
#line 7115
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7116
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7118
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7120
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7119
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7121
    [DIFFICULTY_NORMAL][TRAINER_317B8932] =
    {
#line 7122
        .trainerName = _("317B8932"),
#line 7123
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7124
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7126
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7128
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7127
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7129
    [DIFFICULTY_NORMAL][TRAINER_31D36FE6] =
    {
#line 7130
        .trainerName = _("31D36FE6"),
#line 7131
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7132
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7134
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7136
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7135
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7137
    [DIFFICULTY_NORMAL][TRAINER_32C1F13D] =
    {
#line 7138
        .trainerName = _("32C1F13D"),
#line 7139
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7140
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7142
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7144
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7143
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7145
    [DIFFICULTY_NORMAL][TRAINER_33AB4856] =
    {
#line 7146
        .trainerName = _("33AB4856"),
#line 7147
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7148
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7150
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7152
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7151
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7153
    [DIFFICULTY_NORMAL][TRAINER_3566F099] =
    {
#line 7154
        .trainerName = _("3566F099"),
#line 7155
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7156
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7158
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7160
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7159
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7161
    [DIFFICULTY_NORMAL][TRAINER_35E0E027] =
    {
#line 7162
        .trainerName = _("35E0E027"),
#line 7163
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7164
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7166
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7168
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7167
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7169
    [DIFFICULTY_NORMAL][TRAINER_36662EEF] =
    {
#line 7170
        .trainerName = _("36662EEF"),
#line 7171
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7172
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7174
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7176
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7175
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7177
    [DIFFICULTY_NORMAL][TRAINER_3681E8DE] =
    {
#line 7178
        .trainerName = _("3681E8DE"),
#line 7179
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7180
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7182
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7184
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7183
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7185
    [DIFFICULTY_NORMAL][TRAINER_3789DC6E] =
    {
#line 7186
        .trainerName = _("3789DC6E"),
#line 7187
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7188
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7190
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7192
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7191
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7193
    [DIFFICULTY_NORMAL][TRAINER_37B9EFB7] =
    {
#line 7194
        .trainerName = _("37B9EFB7"),
#line 7195
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7196
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7198
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7200
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7199
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7201
    [DIFFICULTY_NORMAL][TRAINER_37EDB78E] =
    {
#line 7202
        .trainerName = _("37EDB78E"),
#line 7203
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7204
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7206
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7208
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7207
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7209
    [DIFFICULTY_NORMAL][TRAINER_382E2AB3] =
    {
#line 7210
        .trainerName = _("382E2AB3"),
#line 7211
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7212
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7214
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7216
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7215
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7217
    [DIFFICULTY_NORMAL][TRAINER_3842496B] =
    {
#line 7218
        .trainerName = _("3842496B"),
#line 7219
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7220
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7222
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7224
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7223
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7225
    [DIFFICULTY_NORMAL][TRAINER_387351C1] =
    {
#line 7226
        .trainerName = _("387351C1"),
#line 7227
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7228
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7230
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7232
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7231
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7233
    [DIFFICULTY_NORMAL][TRAINER_38A47BDB] =
    {
#line 7234
        .trainerName = _("38A47BDB"),
#line 7235
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7236
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7238
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7240
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7239
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7241
    [DIFFICULTY_NORMAL][TRAINER_3924756E] =
    {
#line 7242
        .trainerName = _("3924756E"),
#line 7243
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7244
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7246
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7248
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7247
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7249
    [DIFFICULTY_NORMAL][TRAINER_3947ACC3] =
    {
#line 7250
        .trainerName = _("3947ACC3"),
#line 7251
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7252
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7254
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7256
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7255
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7257
    [DIFFICULTY_NORMAL][TRAINER_39AD4606] =
    {
#line 7258
        .trainerName = _("39AD4606"),
#line 7259
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7260
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7262
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7264
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7263
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7265
    [DIFFICULTY_NORMAL][TRAINER_39E0AE4F] =
    {
#line 7266
        .trainerName = _("39E0AE4F"),
#line 7267
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7268
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7270
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7272
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7271
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7273
    [DIFFICULTY_NORMAL][TRAINER_39E78D45] =
    {
#line 7274
        .trainerName = _("39E78D45"),
#line 7275
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7276
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7278
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7280
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7279
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7281
    [DIFFICULTY_NORMAL][TRAINER_3A11452B] =
    {
#line 7282
        .trainerName = _("3A11452B"),
#line 7283
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7284
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7286
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7288
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7287
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7289
    [DIFFICULTY_NORMAL][TRAINER_3A840205] =
    {
#line 7290
        .trainerName = _("3A840205"),
#line 7291
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7292
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7294
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7296
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7295
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7297
    [DIFFICULTY_NORMAL][TRAINER_3AD97475] =
    {
#line 7298
        .trainerName = _("3AD97475"),
#line 7299
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7300
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7302
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7304
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7303
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7305
    [DIFFICULTY_NORMAL][TRAINER_3AEE4974] =
    {
#line 7306
        .trainerName = _("3AEE4974"),
#line 7307
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7308
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7310
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7312
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7311
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7313
    [DIFFICULTY_NORMAL][TRAINER_3BAF0C60] =
    {
#line 7314
        .trainerName = _("3BAF0C60"),
#line 7315
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7316
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7318
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7320
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7319
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7321
    [DIFFICULTY_NORMAL][TRAINER_3BDED445] =
    {
#line 7322
        .trainerName = _("3BDED445"),
#line 7323
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7324
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7326
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7328
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7327
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7329
    [DIFFICULTY_NORMAL][TRAINER_3C621048] =
    {
#line 7330
        .trainerName = _("3C621048"),
#line 7331
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7332
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7334
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7336
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7335
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7337
    [DIFFICULTY_NORMAL][TRAINER_3C74DAE2] =
    {
#line 7338
        .trainerName = _("3C74DAE2"),
#line 7339
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7340
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7342
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7344
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7343
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7345
    [DIFFICULTY_NORMAL][TRAINER_3C7AC359] =
    {
#line 7346
        .trainerName = _("3C7AC359"),
#line 7347
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7348
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7350
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7352
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7351
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7353
    [DIFFICULTY_NORMAL][TRAINER_3CDE5F9E] =
    {
#line 7354
        .trainerName = _("3CDE5F9E"),
#line 7355
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7356
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7358
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7360
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7359
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7361
    [DIFFICULTY_NORMAL][TRAINER_3CECE368] =
    {
#line 7362
        .trainerName = _("3CECE368"),
#line 7363
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7364
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7366
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7368
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7367
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7369
    [DIFFICULTY_NORMAL][TRAINER_3CFF3841] =
    {
#line 7370
        .trainerName = _("3CFF3841"),
#line 7371
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7372
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7374
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7376
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7375
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7377
    [DIFFICULTY_NORMAL][TRAINER_3D502E2F] =
    {
#line 7378
        .trainerName = _("3D502E2F"),
#line 7379
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7380
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7382
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7384
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7383
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7385
    [DIFFICULTY_NORMAL][TRAINER_3D7FDE57] =
    {
#line 7386
        .trainerName = _("3D7FDE57"),
#line 7387
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7388
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7390
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7392
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7391
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7393
    [DIFFICULTY_NORMAL][TRAINER_3DCD0BBC] =
    {
#line 7394
        .trainerName = _("3DCD0BBC"),
#line 7395
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7396
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7398
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7400
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7399
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7401
    [DIFFICULTY_NORMAL][TRAINER_3E17924C] =
    {
#line 7402
        .trainerName = _("3E17924C"),
#line 7403
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7404
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7406
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7408
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7407
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7409
    [DIFFICULTY_NORMAL][TRAINER_3EB6FA04] =
    {
#line 7410
        .trainerName = _("3EB6FA04"),
#line 7411
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7412
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7414
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7416
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7415
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7417
    [DIFFICULTY_NORMAL][TRAINER_3EFCF1C8] =
    {
#line 7418
        .trainerName = _("3EFCF1C8"),
#line 7419
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7420
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7422
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7424
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7423
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7425
    [DIFFICULTY_NORMAL][TRAINER_3F0BF52E] =
    {
#line 7426
        .trainerName = _("3F0BF52E"),
#line 7427
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7428
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7430
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7432
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7431
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7433
    [DIFFICULTY_NORMAL][TRAINER_4000C8A0] =
    {
#line 7434
        .trainerName = _("4000C8A0"),
#line 7435
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7436
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7438
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7440
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7439
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7441
    [DIFFICULTY_NORMAL][TRAINER_403D932D] =
    {
#line 7442
        .trainerName = _("403D932D"),
#line 7443
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7444
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7446
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7448
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7447
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7449
    [DIFFICULTY_NORMAL][TRAINER_408862C4] =
    {
#line 7450
        .trainerName = _("408862C4"),
#line 7451
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7452
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7454
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7456
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7455
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7457
    [DIFFICULTY_NORMAL][TRAINER_419282AD] =
    {
#line 7458
        .trainerName = _("419282AD"),
#line 7459
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7460
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7462
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7464
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7463
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7465
    [DIFFICULTY_NORMAL][TRAINER_419FCBAE] =
    {
#line 7466
        .trainerName = _("419FCBAE"),
#line 7467
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7468
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7470
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7472
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7471
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7473
    [DIFFICULTY_NORMAL][TRAINER_41B8591B] =
    {
#line 7474
        .trainerName = _("41B8591B"),
#line 7475
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7476
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7478
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7480
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7479
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7481
    [DIFFICULTY_NORMAL][TRAINER_41DCF7BA] =
    {
#line 7482
        .trainerName = _("41DCF7BA"),
#line 7483
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7484
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7486
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7488
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7487
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7489
    [DIFFICULTY_NORMAL][TRAINER_4227B911] =
    {
#line 7490
        .trainerName = _("4227B911"),
#line 7491
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7492
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7494
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7496
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7495
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7497
    [DIFFICULTY_NORMAL][TRAINER_4239B726] =
    {
#line 7498
        .trainerName = _("4239B726"),
#line 7499
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7500
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7502
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7504
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7503
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7505
    [DIFFICULTY_NORMAL][TRAINER_42BC1D70] =
    {
#line 7506
        .trainerName = _("42BC1D70"),
#line 7507
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7508
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7510
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7512
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7511
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7513
    [DIFFICULTY_NORMAL][TRAINER_42BE3E94] =
    {
#line 7514
        .trainerName = _("42BE3E94"),
#line 7515
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7516
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7518
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7520
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7519
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7521
    [DIFFICULTY_NORMAL][TRAINER_42C68371] =
    {
#line 7522
        .trainerName = _("42C68371"),
#line 7523
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7524
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7526
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7528
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7527
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7529
    [DIFFICULTY_NORMAL][TRAINER_432F34FA] =
    {
#line 7530
        .trainerName = _("432F34FA"),
#line 7531
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7532
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7534
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7536
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7535
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7537
    [DIFFICULTY_NORMAL][TRAINER_437E553A] =
    {
#line 7538
        .trainerName = _("437E553A"),
#line 7539
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7540
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7542
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7544
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7543
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7545
    [DIFFICULTY_NORMAL][TRAINER_4394141C] =
    {
#line 7546
        .trainerName = _("4394141C"),
#line 7547
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7548
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7550
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7552
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7551
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7553
    [DIFFICULTY_NORMAL][TRAINER_43B111AD] =
    {
#line 7554
        .trainerName = _("43B111AD"),
#line 7555
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7556
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7558
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7560
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7559
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7561
    [DIFFICULTY_NORMAL][TRAINER_43B30B5D] =
    {
#line 7562
        .trainerName = _("43B30B5D"),
#line 7563
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7564
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7566
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7568
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7567
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7569
    [DIFFICULTY_NORMAL][TRAINER_43D6557C] =
    {
#line 7570
        .trainerName = _("43D6557C"),
#line 7571
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7572
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7574
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7576
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7575
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7577
    [DIFFICULTY_NORMAL][TRAINER_44251BF9] =
    {
#line 7578
        .trainerName = _("44251BF9"),
#line 7579
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7580
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7582
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7584
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7583
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7585
    [DIFFICULTY_NORMAL][TRAINER_44D28B98] =
    {
#line 7586
        .trainerName = _("44D28B98"),
#line 7587
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7588
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7590
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7592
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7591
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7593
    [DIFFICULTY_NORMAL][TRAINER_44E68738] =
    {
#line 7594
        .trainerName = _("44E68738"),
#line 7595
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7596
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7598
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7600
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7599
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7601
    [DIFFICULTY_NORMAL][TRAINER_44F86666] =
    {
#line 7602
        .trainerName = _("44F86666"),
#line 7603
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7604
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7606
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7608
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7607
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7609
    [DIFFICULTY_NORMAL][TRAINER_458C3B90] =
    {
#line 7610
        .trainerName = _("458C3B90"),
#line 7611
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7612
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7614
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7616
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7615
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7617
    [DIFFICULTY_NORMAL][TRAINER_45CBA787] =
    {
#line 7618
        .trainerName = _("45CBA787"),
#line 7619
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7620
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7622
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7624
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7623
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7625
    [DIFFICULTY_NORMAL][TRAINER_45E5EB22] =
    {
#line 7626
        .trainerName = _("45E5EB22"),
#line 7627
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7628
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7630
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7632
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7631
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7633
    [DIFFICULTY_NORMAL][TRAINER_45ECBA80] =
    {
#line 7634
        .trainerName = _("45ECBA80"),
#line 7635
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7636
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7638
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7640
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7639
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7641
    [DIFFICULTY_NORMAL][TRAINER_460AB144] =
    {
#line 7642
        .trainerName = _("460AB144"),
#line 7643
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7644
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7646
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7648
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7647
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7649
    [DIFFICULTY_NORMAL][TRAINER_46169EA5] =
    {
#line 7650
        .trainerName = _("46169EA5"),
#line 7651
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7652
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7654
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7656
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7655
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7657
    [DIFFICULTY_NORMAL][TRAINER_464C4C44] =
    {
#line 7658
        .trainerName = _("464C4C44"),
#line 7659
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7660
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7662
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7664
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7663
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7665
    [DIFFICULTY_NORMAL][TRAINER_473EE9DE] =
    {
#line 7666
        .trainerName = _("473EE9DE"),
#line 7667
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7668
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7670
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7672
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7671
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7673
    [DIFFICULTY_NORMAL][TRAINER_4787A98D] =
    {
#line 7674
        .trainerName = _("4787A98D"),
#line 7675
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7676
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7678
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7680
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7679
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7681
    [DIFFICULTY_NORMAL][TRAINER_479BBFEB] =
    {
#line 7682
        .trainerName = _("479BBFEB"),
#line 7683
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7684
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7686
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7688
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7687
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7689
    [DIFFICULTY_NORMAL][TRAINER_47EACF7E] =
    {
#line 7690
        .trainerName = _("47EACF7E"),
#line 7691
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7692
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7694
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7696
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7695
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7697
    [DIFFICULTY_NORMAL][TRAINER_4848801D] =
    {
#line 7698
        .trainerName = _("4848801D"),
#line 7699
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7700
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7702
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7704
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7703
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7705
    [DIFFICULTY_NORMAL][TRAINER_487BEC6D] =
    {
#line 7706
        .trainerName = _("487BEC6D"),
#line 7707
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7708
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7710
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7712
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7711
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7713
    [DIFFICULTY_NORMAL][TRAINER_492E0A66] =
    {
#line 7714
        .trainerName = _("492E0A66"),
#line 7715
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7716
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7718
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7720
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7719
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7721
    [DIFFICULTY_NORMAL][TRAINER_494ECB35] =
    {
#line 7722
        .trainerName = _("494ECB35"),
#line 7723
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7724
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7726
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7728
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7727
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7729
    [DIFFICULTY_NORMAL][TRAINER_494F5379] =
    {
#line 7730
        .trainerName = _("494F5379"),
#line 7731
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7732
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7734
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7736
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7735
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7737
    [DIFFICULTY_NORMAL][TRAINER_49805D55] =
    {
#line 7738
        .trainerName = _("49805D55"),
#line 7739
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7740
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7742
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7744
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7743
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7745
    [DIFFICULTY_NORMAL][TRAINER_49EA8A40] =
    {
#line 7746
        .trainerName = _("49EA8A40"),
#line 7747
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7748
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7750
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7752
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7751
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7753
    [DIFFICULTY_NORMAL][TRAINER_4A323E4A] =
    {
#line 7754
        .trainerName = _("4A323E4A"),
#line 7755
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7756
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7758
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7760
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7759
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7761
    [DIFFICULTY_NORMAL][TRAINER_4A3EB696] =
    {
#line 7762
        .trainerName = _("4A3EB696"),
#line 7763
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7764
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7766
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7768
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7767
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7769
    [DIFFICULTY_NORMAL][TRAINER_4ABDB43A] =
    {
#line 7770
        .trainerName = _("4ABDB43A"),
#line 7771
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7772
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7774
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7776
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7775
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7777
    [DIFFICULTY_NORMAL][TRAINER_4AD6DB47] =
    {
#line 7778
        .trainerName = _("4AD6DB47"),
#line 7779
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7780
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7782
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7784
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7783
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7785
    [DIFFICULTY_NORMAL][TRAINER_4AF51B8A] =
    {
#line 7786
        .trainerName = _("4AF51B8A"),
#line 7787
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7788
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7790
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7792
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7791
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7793
    [DIFFICULTY_NORMAL][TRAINER_4B2BC403] =
    {
#line 7794
        .trainerName = _("4B2BC403"),
#line 7795
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7796
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7798
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7800
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7799
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7801
    [DIFFICULTY_NORMAL][TRAINER_4B3B0356] =
    {
#line 7802
        .trainerName = _("4B3B0356"),
#line 7803
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7804
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7806
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7808
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7807
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7809
    [DIFFICULTY_NORMAL][TRAINER_4B431569] =
    {
#line 7810
        .trainerName = _("4B431569"),
#line 7811
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7812
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7814
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7816
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7815
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7817
    [DIFFICULTY_NORMAL][TRAINER_4B5B4954] =
    {
#line 7818
        .trainerName = _("4B5B4954"),
#line 7819
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7820
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7822
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7824
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7823
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7825
    [DIFFICULTY_NORMAL][TRAINER_4C2D23EC] =
    {
#line 7826
        .trainerName = _("4C2D23EC"),
#line 7827
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7828
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7830
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7832
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7831
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7833
    [DIFFICULTY_NORMAL][TRAINER_4CE97031] =
    {
#line 7834
        .trainerName = _("4CE97031"),
#line 7835
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7836
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7838
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7840
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7839
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7841
    [DIFFICULTY_NORMAL][TRAINER_4CF43F23] =
    {
#line 7842
        .trainerName = _("4CF43F23"),
#line 7843
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7844
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7846
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7848
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7847
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7849
    [DIFFICULTY_NORMAL][TRAINER_4D8F9D46] =
    {
#line 7850
        .trainerName = _("4D8F9D46"),
#line 7851
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7852
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7854
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7856
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7855
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7857
    [DIFFICULTY_NORMAL][TRAINER_4D98F6C4] =
    {
#line 7858
        .trainerName = _("4D98F6C4"),
#line 7859
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7860
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7862
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7864
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7863
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7865
    [DIFFICULTY_NORMAL][TRAINER_4E072263] =
    {
#line 7866
        .trainerName = _("4E072263"),
#line 7867
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7868
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7870
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7872
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7871
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7873
    [DIFFICULTY_NORMAL][TRAINER_4E0C1EFE] =
    {
#line 7874
        .trainerName = _("4E0C1EFE"),
#line 7875
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7876
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7878
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7880
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7879
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7881
    [DIFFICULTY_NORMAL][TRAINER_4E226A6E] =
    {
#line 7882
        .trainerName = _("4E226A6E"),
#line 7883
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7884
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7886
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7888
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7887
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7889
    [DIFFICULTY_NORMAL][TRAINER_4E5AAFAE] =
    {
#line 7890
        .trainerName = _("4E5AAFAE"),
#line 7891
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7892
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7894
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7896
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7895
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7897
    [DIFFICULTY_NORMAL][TRAINER_4F10DCA9] =
    {
#line 7898
        .trainerName = _("4F10DCA9"),
#line 7899
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7900
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7902
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7904
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7903
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7905
    [DIFFICULTY_NORMAL][TRAINER_50AE78E5] =
    {
#line 7906
        .trainerName = _("50AE78E5"),
#line 7907
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7908
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7910
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7912
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7911
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7913
    [DIFFICULTY_NORMAL][TRAINER_513A43EE] =
    {
#line 7914
        .trainerName = _("513A43EE"),
#line 7915
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7916
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7918
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7920
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7919
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7921
    [DIFFICULTY_NORMAL][TRAINER_51A32DCA] =
    {
#line 7922
        .trainerName = _("51A32DCA"),
#line 7923
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7924
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7926
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7928
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7927
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7929
    [DIFFICULTY_NORMAL][TRAINER_51F6B834] =
    {
#line 7930
        .trainerName = _("51F6B834"),
#line 7931
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7932
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7934
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7936
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7935
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7937
    [DIFFICULTY_NORMAL][TRAINER_5209EDF0] =
    {
#line 7938
        .trainerName = _("5209EDF0"),
#line 7939
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7940
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7942
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7944
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7943
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7945
    [DIFFICULTY_NORMAL][TRAINER_52CFC159] =
    {
#line 7946
        .trainerName = _("52CFC159"),
#line 7947
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7948
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7950
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7952
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7951
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7953
    [DIFFICULTY_NORMAL][TRAINER_538D052D] =
    {
#line 7954
        .trainerName = _("538D052D"),
#line 7955
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7956
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7958
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7960
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7959
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7961
    [DIFFICULTY_NORMAL][TRAINER_53A1A61A] =
    {
#line 7962
        .trainerName = _("53A1A61A"),
#line 7963
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7964
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7966
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7968
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7967
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7969
    [DIFFICULTY_NORMAL][TRAINER_53B06C7B] =
    {
#line 7970
        .trainerName = _("53B06C7B"),
#line 7971
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7972
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7974
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7976
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7975
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7977
    [DIFFICULTY_NORMAL][TRAINER_54110A38] =
    {
#line 7978
        .trainerName = _("54110A38"),
#line 7979
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7980
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7982
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7984
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7983
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7985
    [DIFFICULTY_NORMAL][TRAINER_549792BA] =
    {
#line 7986
        .trainerName = _("549792BA"),
#line 7987
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7988
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7990
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7992
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7991
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7993
    [DIFFICULTY_NORMAL][TRAINER_54BAC2DA] =
    {
#line 7994
        .trainerName = _("54BAC2DA"),
#line 7995
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7996
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7998
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8000
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7999
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8001
    [DIFFICULTY_NORMAL][TRAINER_54F170BE] =
    {
#line 8002
        .trainerName = _("54F170BE"),
#line 8003
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8004
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8006
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8008
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8007
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8009
    [DIFFICULTY_NORMAL][TRAINER_558F80F9] =
    {
#line 8010
        .trainerName = _("558F80F9"),
#line 8011
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8012
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8014
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8016
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8015
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8017
    [DIFFICULTY_NORMAL][TRAINER_55CA00A1] =
    {
#line 8018
        .trainerName = _("55CA00A1"),
#line 8019
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8020
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8022
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8024
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8023
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8025
    [DIFFICULTY_NORMAL][TRAINER_55D0BEAA] =
    {
#line 8026
        .trainerName = _("55D0BEAA"),
#line 8027
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8028
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8030
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8032
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8031
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8033
    [DIFFICULTY_NORMAL][TRAINER_55D90FA8] =
    {
#line 8034
        .trainerName = _("55D90FA8"),
#line 8035
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8036
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8038
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8040
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8039
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8041
    [DIFFICULTY_NORMAL][TRAINER_55EBF949] =
    {
#line 8042
        .trainerName = _("55EBF949"),
#line 8043
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8044
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8046
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8048
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8047
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8049
    [DIFFICULTY_NORMAL][TRAINER_565DE3C4] =
    {
#line 8050
        .trainerName = _("565DE3C4"),
#line 8051
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8052
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8054
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8056
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8055
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8057
    [DIFFICULTY_NORMAL][TRAINER_56775C71] =
    {
#line 8058
        .trainerName = _("56775C71"),
#line 8059
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8060
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8062
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8064
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8063
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8065
    [DIFFICULTY_NORMAL][TRAINER_56C1FE08] =
    {
#line 8066
        .trainerName = _("56C1FE08"),
#line 8067
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8068
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8070
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8072
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8071
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8073
    [DIFFICULTY_NORMAL][TRAINER_56E6EFAA] =
    {
#line 8074
        .trainerName = _("56E6EFAA"),
#line 8075
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8076
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8078
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8080
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8079
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8081
    [DIFFICULTY_NORMAL][TRAINER_57E254F5] =
    {
#line 8082
        .trainerName = _("57E254F5"),
#line 8083
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8084
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8086
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8088
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8087
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8089
    [DIFFICULTY_NORMAL][TRAINER_57E7E83A] =
    {
#line 8090
        .trainerName = _("57E7E83A"),
#line 8091
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8092
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8094
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8096
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8095
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8097
    [DIFFICULTY_NORMAL][TRAINER_5819E497] =
    {
#line 8098
        .trainerName = _("5819E497"),
#line 8099
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8100
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8102
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8104
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8103
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8105
    [DIFFICULTY_NORMAL][TRAINER_58A6A51E] =
    {
#line 8106
        .trainerName = _("58A6A51E"),
#line 8107
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8108
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8110
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8112
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8111
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8113
    [DIFFICULTY_NORMAL][TRAINER_58BEBECC] =
    {
#line 8114
        .trainerName = _("58BEBECC"),
#line 8115
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8116
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8118
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8120
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8119
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8121
    [DIFFICULTY_NORMAL][TRAINER_58F43966] =
    {
#line 8122
        .trainerName = _("58F43966"),
#line 8123
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8124
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8126
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8128
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8127
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8129
    [DIFFICULTY_NORMAL][TRAINER_59592DE4] =
    {
#line 8130
        .trainerName = _("59592DE4"),
#line 8131
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8132
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8134
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8136
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8135
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8137
    [DIFFICULTY_NORMAL][TRAINER_598585C1] =
    {
#line 8138
        .trainerName = _("598585C1"),
#line 8139
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8140
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8142
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8144
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8143
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8145
    [DIFFICULTY_NORMAL][TRAINER_59981F0D] =
    {
#line 8146
        .trainerName = _("59981F0D"),
#line 8147
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8148
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8150
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8152
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8151
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8153
    [DIFFICULTY_NORMAL][TRAINER_59E335AB] =
    {
#line 8154
        .trainerName = _("59E335AB"),
#line 8155
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8156
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8158
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8160
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8159
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8161
    [DIFFICULTY_NORMAL][TRAINER_59FFFCED] =
    {
#line 8162
        .trainerName = _("59FFFCED"),
#line 8163
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8164
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8166
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8168
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8167
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8169
    [DIFFICULTY_NORMAL][TRAINER_5ABF4FA4] =
    {
#line 8170
        .trainerName = _("5ABF4FA4"),
#line 8171
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8172
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8174
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8176
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8175
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8177
    [DIFFICULTY_NORMAL][TRAINER_5AC61FE5] =
    {
#line 8178
        .trainerName = _("5AC61FE5"),
#line 8179
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8180
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8182
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8184
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8183
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8185
    [DIFFICULTY_NORMAL][TRAINER_5AD29FF8] =
    {
#line 8186
        .trainerName = _("5AD29FF8"),
#line 8187
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8188
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8190
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8192
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8191
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8193
    [DIFFICULTY_NORMAL][TRAINER_5AD4C218] =
    {
#line 8194
        .trainerName = _("5AD4C218"),
#line 8195
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8196
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8198
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8200
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8199
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8201
    [DIFFICULTY_NORMAL][TRAINER_5B5F6AE8] =
    {
#line 8202
        .trainerName = _("5B5F6AE8"),
#line 8203
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8204
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8206
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8208
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8207
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8209
    [DIFFICULTY_NORMAL][TRAINER_5B6304FF] =
    {
#line 8210
        .trainerName = _("5B6304FF"),
#line 8211
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8212
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8214
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8216
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8215
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8217
    [DIFFICULTY_NORMAL][TRAINER_5B75B30F] =
    {
#line 8218
        .trainerName = _("5B75B30F"),
#line 8219
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8220
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8222
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8224
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8223
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8225
    [DIFFICULTY_NORMAL][TRAINER_5B983361] =
    {
#line 8226
        .trainerName = _("5B983361"),
#line 8227
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8228
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8230
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8232
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8231
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8233
    [DIFFICULTY_NORMAL][TRAINER_5BD8EA81] =
    {
#line 8234
        .trainerName = _("5BD8EA81"),
#line 8235
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8236
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8238
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8240
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8239
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8241
    [DIFFICULTY_NORMAL][TRAINER_5C315841] =
    {
#line 8242
        .trainerName = _("5C315841"),
#line 8243
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8244
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8246
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8248
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8247
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8249
    [DIFFICULTY_NORMAL][TRAINER_5C573C11] =
    {
#line 8250
        .trainerName = _("5C573C11"),
#line 8251
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8252
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8254
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8256
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8255
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8257
    [DIFFICULTY_NORMAL][TRAINER_5CAB03DD] =
    {
#line 8258
        .trainerName = _("5CAB03DD"),
#line 8259
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8260
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8262
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8264
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8263
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8265
    [DIFFICULTY_NORMAL][TRAINER_5CBDB116] =
    {
#line 8266
        .trainerName = _("5CBDB116"),
#line 8267
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8268
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8270
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8272
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8271
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8273
    [DIFFICULTY_NORMAL][TRAINER_5D0C4B8F] =
    {
#line 8274
        .trainerName = _("5D0C4B8F"),
#line 8275
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8276
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8278
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8280
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8279
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8281
    [DIFFICULTY_NORMAL][TRAINER_5D2CCD41] =
    {
#line 8282
        .trainerName = _("5D2CCD41"),
#line 8283
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8284
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8286
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8288
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8287
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8289
    [DIFFICULTY_NORMAL][TRAINER_5D5F491E] =
    {
#line 8290
        .trainerName = _("5D5F491E"),
#line 8291
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8292
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8294
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8296
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8295
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8297
    [DIFFICULTY_NORMAL][TRAINER_5D81D8F9] =
    {
#line 8298
        .trainerName = _("5D81D8F9"),
#line 8299
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8300
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8302
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8304
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8303
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8305
    [DIFFICULTY_NORMAL][TRAINER_5D86E702] =
    {
#line 8306
        .trainerName = _("5D86E702"),
#line 8307
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8308
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8310
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8312
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8311
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8313
    [DIFFICULTY_NORMAL][TRAINER_5D9ABC58] =
    {
#line 8314
        .trainerName = _("5D9ABC58"),
#line 8315
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8316
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8318
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8320
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8319
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8321
    [DIFFICULTY_NORMAL][TRAINER_5DA9F2AE] =
    {
#line 8322
        .trainerName = _("5DA9F2AE"),
#line 8323
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8324
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8326
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8328
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8327
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8329
    [DIFFICULTY_NORMAL][TRAINER_5E13316C] =
    {
#line 8330
        .trainerName = _("5E13316C"),
#line 8331
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8332
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8334
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8336
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8335
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8337
    [DIFFICULTY_NORMAL][TRAINER_5EA7A638] =
    {
#line 8338
        .trainerName = _("5EA7A638"),
#line 8339
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8340
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8342
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8344
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8343
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8345
    [DIFFICULTY_NORMAL][TRAINER_5EB4C98F] =
    {
#line 8346
        .trainerName = _("5EB4C98F"),
#line 8347
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8348
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8350
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8352
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8351
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8353
    [DIFFICULTY_NORMAL][TRAINER_5EF71DA1] =
    {
#line 8354
        .trainerName = _("5EF71DA1"),
#line 8355
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8356
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8358
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8360
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8359
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8361
    [DIFFICULTY_NORMAL][TRAINER_5F858802] =
    {
#line 8362
        .trainerName = _("5F858802"),
#line 8363
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8364
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8366
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8368
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8367
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8369
    [DIFFICULTY_NORMAL][TRAINER_5FA4C80F] =
    {
#line 8370
        .trainerName = _("5FA4C80F"),
#line 8371
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8372
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8374
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8376
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8375
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8377
    [DIFFICULTY_NORMAL][TRAINER_5FD48FB2] =
    {
#line 8378
        .trainerName = _("5FD48FB2"),
#line 8379
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8380
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8382
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8384
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8383
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8385
    [DIFFICULTY_NORMAL][TRAINER_5FF1DEC5] =
    {
#line 8386
        .trainerName = _("5FF1DEC5"),
#line 8387
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8388
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8390
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8392
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8391
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8393
    [DIFFICULTY_NORMAL][TRAINER_6016A968] =
    {
#line 8394
        .trainerName = _("6016A968"),
#line 8395
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8396
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8398
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8400
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8399
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8401
    [DIFFICULTY_NORMAL][TRAINER_6058C03B] =
    {
#line 8402
        .trainerName = _("6058C03B"),
#line 8403
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8404
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8406
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8408
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8407
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8409
    [DIFFICULTY_NORMAL][TRAINER_60C3BD24] =
    {
#line 8410
        .trainerName = _("60C3BD24"),
#line 8411
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8412
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8414
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8416
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8415
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8417
    [DIFFICULTY_NORMAL][TRAINER_60C56554] =
    {
#line 8418
        .trainerName = _("60C56554"),
#line 8419
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8420
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8422
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8424
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8423
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8425
    [DIFFICULTY_NORMAL][TRAINER_60D66B86] =
    {
#line 8426
        .trainerName = _("60D66B86"),
#line 8427
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8428
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8430
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8432
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8431
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8433
    [DIFFICULTY_NORMAL][TRAINER_6102A0FC] =
    {
#line 8434
        .trainerName = _("6102A0FC"),
#line 8435
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8436
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8438
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8440
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8439
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8441
    [DIFFICULTY_NORMAL][TRAINER_61E76999] =
    {
#line 8442
        .trainerName = _("61E76999"),
#line 8443
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8444
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8446
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8448
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8447
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8449
    [DIFFICULTY_NORMAL][TRAINER_626AECE8] =
    {
#line 8450
        .trainerName = _("626AECE8"),
#line 8451
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8452
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8454
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8456
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8455
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8457
    [DIFFICULTY_NORMAL][TRAINER_62851FFB] =
    {
#line 8458
        .trainerName = _("62851FFB"),
#line 8459
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8460
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8462
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8464
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8463
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8465
    [DIFFICULTY_NORMAL][TRAINER_62C33409] =
    {
#line 8466
        .trainerName = _("62C33409"),
#line 8467
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8468
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8470
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8472
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8471
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8473
    [DIFFICULTY_NORMAL][TRAINER_62D0F875] =
    {
#line 8474
        .trainerName = _("62D0F875"),
#line 8475
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8476
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8478
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8480
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8479
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8481
    [DIFFICULTY_NORMAL][TRAINER_63409A54] =
    {
#line 8482
        .trainerName = _("63409A54"),
#line 8483
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8484
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8486
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8488
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8487
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8489
    [DIFFICULTY_NORMAL][TRAINER_6397B964] =
    {
#line 8490
        .trainerName = _("6397B964"),
#line 8491
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8492
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8494
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8496
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8495
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8497
    [DIFFICULTY_NORMAL][TRAINER_63DB05B6] =
    {
#line 8498
        .trainerName = _("63DB05B6"),
#line 8499
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8500
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8502
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8504
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8503
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8505
    [DIFFICULTY_NORMAL][TRAINER_63DC02C9] =
    {
#line 8506
        .trainerName = _("63DC02C9"),
#line 8507
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8508
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8510
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8512
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8511
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8513
    [DIFFICULTY_NORMAL][TRAINER_6439D44C] =
    {
#line 8514
        .trainerName = _("6439D44C"),
#line 8515
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8516
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8518
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8520
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8519
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8521
    [DIFFICULTY_NORMAL][TRAINER_64E30596] =
    {
#line 8522
        .trainerName = _("64E30596"),
#line 8523
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8524
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8526
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8528
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8527
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8529
    [DIFFICULTY_NORMAL][TRAINER_6566F645] =
    {
#line 8530
        .trainerName = _("6566F645"),
#line 8531
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8532
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8534
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8536
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8535
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8537
    [DIFFICULTY_NORMAL][TRAINER_656A39C8] =
    {
#line 8538
        .trainerName = _("656A39C8"),
#line 8539
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8540
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8542
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8544
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8543
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8545
    [DIFFICULTY_NORMAL][TRAINER_656EC067] =
    {
#line 8546
        .trainerName = _("656EC067"),
#line 8547
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8548
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8550
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8552
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8551
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8553
    [DIFFICULTY_NORMAL][TRAINER_65CE4F87] =
    {
#line 8554
        .trainerName = _("65CE4F87"),
#line 8555
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8556
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8558
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8560
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8559
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8561
    [DIFFICULTY_NORMAL][TRAINER_662EBAAA] =
    {
#line 8562
        .trainerName = _("662EBAAA"),
#line 8563
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8564
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8566
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8568
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8567
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8569
    [DIFFICULTY_NORMAL][TRAINER_66531C74] =
    {
#line 8570
        .trainerName = _("66531C74"),
#line 8571
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8572
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8574
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8576
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8575
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8577
    [DIFFICULTY_NORMAL][TRAINER_66B16F22] =
    {
#line 8578
        .trainerName = _("66B16F22"),
#line 8579
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8580
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8582
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8584
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8583
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8585
    [DIFFICULTY_NORMAL][TRAINER_66D26AEC] =
    {
#line 8586
        .trainerName = _("66D26AEC"),
#line 8587
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8588
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8590
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8592
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8591
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8593
    [DIFFICULTY_NORMAL][TRAINER_675DA518] =
    {
#line 8594
        .trainerName = _("675DA518"),
#line 8595
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8596
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8598
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8600
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8599
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8601
    [DIFFICULTY_NORMAL][TRAINER_677A22D7] =
    {
#line 8602
        .trainerName = _("677A22D7"),
#line 8603
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8604
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8606
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8608
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8607
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8609
    [DIFFICULTY_NORMAL][TRAINER_6792B394] =
    {
#line 8610
        .trainerName = _("6792B394"),
#line 8611
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8612
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8614
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8616
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8615
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8617
    [DIFFICULTY_NORMAL][TRAINER_683A2305] =
    {
#line 8618
        .trainerName = _("683A2305"),
#line 8619
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8620
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8622
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8624
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8623
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8625
    [DIFFICULTY_NORMAL][TRAINER_692DD7CF] =
    {
#line 8626
        .trainerName = _("692DD7CF"),
#line 8627
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8628
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8630
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8632
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8631
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8633
    [DIFFICULTY_NORMAL][TRAINER_698BB117] =
    {
#line 8634
        .trainerName = _("698BB117"),
#line 8635
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8636
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8638
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8640
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8639
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8641
    [DIFFICULTY_NORMAL][TRAINER_69EE8132] =
    {
#line 8642
        .trainerName = _("69EE8132"),
#line 8643
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8644
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8646
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8648
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8647
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8649
    [DIFFICULTY_NORMAL][TRAINER_6A35EE35] =
    {
#line 8650
        .trainerName = _("6A35EE35"),
#line 8651
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8652
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8654
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8656
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8655
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8657
    [DIFFICULTY_NORMAL][TRAINER_6A3930E6] =
    {
#line 8658
        .trainerName = _("6A3930E6"),
#line 8659
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8660
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8662
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8664
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8663
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8665
    [DIFFICULTY_NORMAL][TRAINER_6A48F28F] =
    {
#line 8666
        .trainerName = _("6A48F28F"),
#line 8667
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8668
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8670
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8672
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8671
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8673
    [DIFFICULTY_NORMAL][TRAINER_6A8EEC78] =
    {
#line 8674
        .trainerName = _("6A8EEC78"),
#line 8675
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8676
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8678
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8680
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8679
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8681
    [DIFFICULTY_NORMAL][TRAINER_6AABC7EA] =
    {
#line 8682
        .trainerName = _("6AABC7EA"),
#line 8683
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8684
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8686
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8688
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8687
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8689
    [DIFFICULTY_NORMAL][TRAINER_6ABE3EC1] =
    {
#line 8690
        .trainerName = _("6ABE3EC1"),
#line 8691
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8692
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8694
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8696
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8695
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8697
    [DIFFICULTY_NORMAL][TRAINER_6B14C259] =
    {
#line 8698
        .trainerName = _("6B14C259"),
#line 8699
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8700
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8702
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8704
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8703
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8705
    [DIFFICULTY_NORMAL][TRAINER_6BEEE6BE] =
    {
#line 8706
        .trainerName = _("6BEEE6BE"),
#line 8707
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8708
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8710
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8712
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8711
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8713
    [DIFFICULTY_NORMAL][TRAINER_6C7736F9] =
    {
#line 8714
        .trainerName = _("6C7736F9"),
#line 8715
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8716
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8718
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8720
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8719
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8721
    [DIFFICULTY_NORMAL][TRAINER_6CC913A2] =
    {
#line 8722
        .trainerName = _("6CC913A2"),
#line 8723
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8724
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8726
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8728
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8727
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8729
    [DIFFICULTY_NORMAL][TRAINER_6D45549A] =
    {
#line 8730
        .trainerName = _("6D45549A"),
#line 8731
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8732
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8734
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8736
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8735
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8737
    [DIFFICULTY_NORMAL][TRAINER_6E1E82B2] =
    {
#line 8738
        .trainerName = _("6E1E82B2"),
#line 8739
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8740
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8742
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8744
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8743
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8745
    [DIFFICULTY_NORMAL][TRAINER_6E663040] =
    {
#line 8746
        .trainerName = _("6E663040"),
#line 8747
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8748
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8750
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8752
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8751
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8753
    [DIFFICULTY_NORMAL][TRAINER_6ED2C120] =
    {
#line 8754
        .trainerName = _("6ED2C120"),
#line 8755
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8756
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8758
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8760
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8759
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8761
    [DIFFICULTY_NORMAL][TRAINER_6F5C8078] =
    {
#line 8762
        .trainerName = _("6F5C8078"),
#line 8763
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8764
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8766
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8768
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8767
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8769
    [DIFFICULTY_NORMAL][TRAINER_6F5E9CF9] =
    {
#line 8770
        .trainerName = _("6F5E9CF9"),
#line 8771
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8772
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8774
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8776
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8775
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8777
    [DIFFICULTY_NORMAL][TRAINER_6FC24896] =
    {
#line 8778
        .trainerName = _("6FC24896"),
#line 8779
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8780
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8782
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8784
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8783
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8785
    [DIFFICULTY_NORMAL][TRAINER_6FF3213D] =
    {
#line 8786
        .trainerName = _("6FF3213D"),
#line 8787
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8788
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8790
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8792
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8791
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8793
    [DIFFICULTY_NORMAL][TRAINER_701AC24E] =
    {
#line 8794
        .trainerName = _("701AC24E"),
#line 8795
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8796
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8798
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8800
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8799
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8801
    [DIFFICULTY_NORMAL][TRAINER_703B73C4] =
    {
#line 8802
        .trainerName = _("703B73C4"),
#line 8803
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8804
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8806
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8808
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8807
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8809
    [DIFFICULTY_NORMAL][TRAINER_70C712D3] =
    {
#line 8810
        .trainerName = _("70C712D3"),
#line 8811
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8812
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8814
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8816
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8815
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8817
    [DIFFICULTY_NORMAL][TRAINER_70EAAAF5] =
    {
#line 8818
        .trainerName = _("70EAAAF5"),
#line 8819
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8820
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8822
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8824
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8823
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8825
    [DIFFICULTY_NORMAL][TRAINER_70F1A62B] =
    {
#line 8826
        .trainerName = _("70F1A62B"),
#line 8827
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8828
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8830
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8832
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8831
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8833
    [DIFFICULTY_NORMAL][TRAINER_7169C897] =
    {
#line 8834
        .trainerName = _("7169C897"),
#line 8835
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8836
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8838
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8840
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8839
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8841
    [DIFFICULTY_NORMAL][TRAINER_7178DF27] =
    {
#line 8842
        .trainerName = _("7178DF27"),
#line 8843
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8844
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8846
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8848
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8847
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8849
    [DIFFICULTY_NORMAL][TRAINER_7190E405] =
    {
#line 8850
        .trainerName = _("7190E405"),
#line 8851
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8852
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8854
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8856
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8855
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8857
    [DIFFICULTY_NORMAL][TRAINER_71CE545E] =
    {
#line 8858
        .trainerName = _("71CE545E"),
#line 8859
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8860
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8862
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8864
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8863
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8865
    [DIFFICULTY_NORMAL][TRAINER_7249425F] =
    {
#line 8866
        .trainerName = _("7249425F"),
#line 8867
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8868
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8870
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8872
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8871
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8873
    [DIFFICULTY_NORMAL][TRAINER_72641C9D] =
    {
#line 8874
        .trainerName = _("72641C9D"),
#line 8875
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8876
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8878
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8880
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8879
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8881
    [DIFFICULTY_NORMAL][TRAINER_729F2BBB] =
    {
#line 8882
        .trainerName = _("729F2BBB"),
#line 8883
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8884
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8886
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8888
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8887
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8889
    [DIFFICULTY_NORMAL][TRAINER_72F25B41] =
    {
#line 8890
        .trainerName = _("72F25B41"),
#line 8891
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8892
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8894
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8896
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8895
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8897
    [DIFFICULTY_NORMAL][TRAINER_732D4997] =
    {
#line 8898
        .trainerName = _("732D4997"),
#line 8899
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8900
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8902
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8904
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8903
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8905
    [DIFFICULTY_NORMAL][TRAINER_73A561CC] =
    {
#line 8906
        .trainerName = _("73A561CC"),
#line 8907
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8908
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8910
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8912
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8911
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8913
    [DIFFICULTY_NORMAL][TRAINER_7420DB0C] =
    {
#line 8914
        .trainerName = _("7420DB0C"),
#line 8915
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8916
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8918
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8920
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8919
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8921
    [DIFFICULTY_NORMAL][TRAINER_7435DE7C] =
    {
#line 8922
        .trainerName = _("7435DE7C"),
#line 8923
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8924
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8926
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8928
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8927
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8929
    [DIFFICULTY_NORMAL][TRAINER_75A2A667] =
    {
#line 8930
        .trainerName = _("75A2A667"),
#line 8931
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8932
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8934
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8936
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8935
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8937
    [DIFFICULTY_NORMAL][TRAINER_75D602F2] =
    {
#line 8938
        .trainerName = _("75D602F2"),
#line 8939
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8940
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8942
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8944
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8943
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8945
    [DIFFICULTY_NORMAL][TRAINER_77DDBBAF] =
    {
#line 8946
        .trainerName = _("77DDBBAF"),
#line 8947
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8948
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8950
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8952
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8951
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8953
    [DIFFICULTY_NORMAL][TRAINER_783AB388] =
    {
#line 8954
        .trainerName = _("783AB388"),
#line 8955
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8956
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8958
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8960
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8959
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8961
    [DIFFICULTY_NORMAL][TRAINER_78564BE5] =
    {
#line 8962
        .trainerName = _("78564BE5"),
#line 8963
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8964
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8966
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8968
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8967
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8969
    [DIFFICULTY_NORMAL][TRAINER_7885ECAF] =
    {
#line 8970
        .trainerName = _("7885ECAF"),
#line 8971
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8972
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8974
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8976
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8975
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8977
    [DIFFICULTY_NORMAL][TRAINER_78B73516] =
    {
#line 8978
        .trainerName = _("78B73516"),
#line 8979
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8980
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8982
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8984
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8983
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8985
    [DIFFICULTY_NORMAL][TRAINER_78BD858D] =
    {
#line 8986
        .trainerName = _("78BD858D"),
#line 8987
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8988
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8990
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8992
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8991
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8993
    [DIFFICULTY_NORMAL][TRAINER_7933DA6C] =
    {
#line 8994
        .trainerName = _("7933DA6C"),
#line 8995
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8996
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8998
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9000
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8999
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9001
    [DIFFICULTY_NORMAL][TRAINER_793992D8] =
    {
#line 9002
        .trainerName = _("793992D8"),
#line 9003
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9004
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9006
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9008
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9007
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9009
    [DIFFICULTY_NORMAL][TRAINER_797E296B] =
    {
#line 9010
        .trainerName = _("797E296B"),
#line 9011
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9012
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9014
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9016
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9015
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9017
    [DIFFICULTY_NORMAL][TRAINER_79EF1DEB] =
    {
#line 9018
        .trainerName = _("79EF1DEB"),
#line 9019
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9020
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9022
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9024
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9023
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9025
    [DIFFICULTY_NORMAL][TRAINER_7A03677D] =
    {
#line 9026
        .trainerName = _("7A03677D"),
#line 9027
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9028
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9030
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9032
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9031
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9033
    [DIFFICULTY_NORMAL][TRAINER_7A0C086F] =
    {
#line 9034
        .trainerName = _("7A0C086F"),
#line 9035
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9036
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9038
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9040
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9039
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9041
    [DIFFICULTY_NORMAL][TRAINER_7A89C403] =
    {
#line 9042
        .trainerName = _("7A89C403"),
#line 9043
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9044
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9046
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9048
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9047
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9049
    [DIFFICULTY_NORMAL][TRAINER_7A8D30C6] =
    {
#line 9050
        .trainerName = _("7A8D30C6"),
#line 9051
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9052
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9054
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9056
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9055
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9057
    [DIFFICULTY_NORMAL][TRAINER_7ABC77C1] =
    {
#line 9058
        .trainerName = _("7ABC77C1"),
#line 9059
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9060
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9062
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9064
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9063
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9065
    [DIFFICULTY_NORMAL][TRAINER_7B5DF36F] =
    {
#line 9066
        .trainerName = _("7B5DF36F"),
#line 9067
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9068
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9070
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9072
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9071
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9073
    [DIFFICULTY_NORMAL][TRAINER_7C3BD57C] =
    {
#line 9074
        .trainerName = _("7C3BD57C"),
#line 9075
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9076
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9078
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9080
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9079
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9081
    [DIFFICULTY_NORMAL][TRAINER_7C4240E1] =
    {
#line 9082
        .trainerName = _("7C4240E1"),
#line 9083
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9084
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9086
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9088
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9087
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9089
    [DIFFICULTY_NORMAL][TRAINER_7C5056CA] =
    {
#line 9090
        .trainerName = _("7C5056CA"),
#line 9091
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9092
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9094
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9096
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9095
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9097
    [DIFFICULTY_NORMAL][TRAINER_7C8BD62F] =
    {
#line 9098
        .trainerName = _("7C8BD62F"),
#line 9099
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9100
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9102
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9104
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9103
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9105
    [DIFFICULTY_NORMAL][TRAINER_7C9308EF] =
    {
#line 9106
        .trainerName = _("7C9308EF"),
#line 9107
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9108
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9110
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9112
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9111
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9113
    [DIFFICULTY_NORMAL][TRAINER_7CAF6877] =
    {
#line 9114
        .trainerName = _("7CAF6877"),
#line 9115
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9116
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9118
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9120
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9119
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9121
    [DIFFICULTY_NORMAL][TRAINER_7CBB25EB] =
    {
#line 9122
        .trainerName = _("7CBB25EB"),
#line 9123
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9124
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9126
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9128
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9127
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9129
    [DIFFICULTY_NORMAL][TRAINER_7CD1AAE1] =
    {
#line 9130
        .trainerName = _("7CD1AAE1"),
#line 9131
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9132
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9134
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9136
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9135
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9137
    [DIFFICULTY_NORMAL][TRAINER_7D0F1751] =
    {
#line 9138
        .trainerName = _("7D0F1751"),
#line 9139
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9140
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9142
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9144
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9143
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9145
    [DIFFICULTY_NORMAL][TRAINER_7D28CB20] =
    {
#line 9146
        .trainerName = _("7D28CB20"),
#line 9147
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9148
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9150
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9152
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9151
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9153
    [DIFFICULTY_NORMAL][TRAINER_7D536E72] =
    {
#line 9154
        .trainerName = _("7D536E72"),
#line 9155
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9156
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9158
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9160
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9159
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9161
    [DIFFICULTY_NORMAL][TRAINER_7DC358C0] =
    {
#line 9162
        .trainerName = _("7DC358C0"),
#line 9163
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9164
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9166
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9168
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9167
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9169
    [DIFFICULTY_NORMAL][TRAINER_7DEC9A40] =
    {
#line 9170
        .trainerName = _("7DEC9A40"),
#line 9171
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9172
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9174
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9176
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9175
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9177
    [DIFFICULTY_NORMAL][TRAINER_7E2F7EB8] =
    {
#line 9178
        .trainerName = _("7E2F7EB8"),
#line 9179
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9180
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9182
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9184
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9183
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9185
    [DIFFICULTY_NORMAL][TRAINER_7E7CD9D3] =
    {
#line 9186
        .trainerName = _("7E7CD9D3"),
#line 9187
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9188
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9190
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9192
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9191
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9193
    [DIFFICULTY_NORMAL][TRAINER_7E8CCD84] =
    {
#line 9194
        .trainerName = _("7E8CCD84"),
#line 9195
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9196
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9198
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9200
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9199
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9201
    [DIFFICULTY_NORMAL][TRAINER_8010F97E] =
    {
#line 9202
        .trainerName = _("8010F97E"),
#line 9203
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9204
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9206
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9208
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9207
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9209
    [DIFFICULTY_NORMAL][TRAINER_805C25F0] =
    {
#line 9210
        .trainerName = _("805C25F0"),
#line 9211
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9212
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9214
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9216
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9215
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9217
    [DIFFICULTY_NORMAL][TRAINER_80941A21] =
    {
#line 9218
        .trainerName = _("80941A21"),
#line 9219
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9220
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9222
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9224
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9223
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9225
    [DIFFICULTY_NORMAL][TRAINER_80AAA333] =
    {
#line 9226
        .trainerName = _("80AAA333"),
#line 9227
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9228
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9230
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9232
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9231
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9233
    [DIFFICULTY_NORMAL][TRAINER_810A3F32] =
    {
#line 9234
        .trainerName = _("810A3F32"),
#line 9235
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9236
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9238
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9240
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9239
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9241
    [DIFFICULTY_NORMAL][TRAINER_811C7730] =
    {
#line 9242
        .trainerName = _("811C7730"),
#line 9243
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9244
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9246
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9248
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9247
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9249
    [DIFFICULTY_NORMAL][TRAINER_814D0113] =
    {
#line 9250
        .trainerName = _("814D0113"),
#line 9251
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9252
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9254
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9256
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9255
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9257
    [DIFFICULTY_NORMAL][TRAINER_822DC7A8] =
    {
#line 9258
        .trainerName = _("822DC7A8"),
#line 9259
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9260
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9262
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9264
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9263
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9265
    [DIFFICULTY_NORMAL][TRAINER_827A5D21] =
    {
#line 9266
        .trainerName = _("827A5D21"),
#line 9267
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9268
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9270
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9272
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9271
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9273
    [DIFFICULTY_NORMAL][TRAINER_82A19B69] =
    {
#line 9274
        .trainerName = _("82A19B69"),
#line 9275
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9276
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9278
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9280
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9279
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9281
    [DIFFICULTY_NORMAL][TRAINER_83008F9D] =
    {
#line 9282
        .trainerName = _("83008F9D"),
#line 9283
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9284
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9286
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9288
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9287
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9289
    [DIFFICULTY_NORMAL][TRAINER_831DE561] =
    {
#line 9290
        .trainerName = _("831DE561"),
#line 9291
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9292
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9294
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9296
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9295
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9297
    [DIFFICULTY_NORMAL][TRAINER_8327758B] =
    {
#line 9298
        .trainerName = _("8327758B"),
#line 9299
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9300
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9302
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9304
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9303
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9305
    [DIFFICULTY_NORMAL][TRAINER_834B75E7] =
    {
#line 9306
        .trainerName = _("834B75E7"),
#line 9307
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9308
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9310
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9312
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9311
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9313
    [DIFFICULTY_NORMAL][TRAINER_8365EA32] =
    {
#line 9314
        .trainerName = _("8365EA32"),
#line 9315
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9316
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9318
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9320
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9319
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9321
    [DIFFICULTY_NORMAL][TRAINER_83A26233] =
    {
#line 9322
        .trainerName = _("83A26233"),
#line 9323
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9324
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9326
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9328
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9327
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9329
    [DIFFICULTY_NORMAL][TRAINER_83B9A038] =
    {
#line 9330
        .trainerName = _("83B9A038"),
#line 9331
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9332
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9334
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9336
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9335
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9337
    [DIFFICULTY_NORMAL][TRAINER_840416CD] =
    {
#line 9338
        .trainerName = _("840416CD"),
#line 9339
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9340
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9342
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9344
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9343
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9345
    [DIFFICULTY_NORMAL][TRAINER_843DFC91] =
    {
#line 9346
        .trainerName = _("843DFC91"),
#line 9347
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9348
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9350
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9352
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9351
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9353
    [DIFFICULTY_NORMAL][TRAINER_857ACD94] =
    {
#line 9354
        .trainerName = _("857ACD94"),
#line 9355
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9356
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9358
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9360
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9359
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9361
    [DIFFICULTY_NORMAL][TRAINER_8580525E] =
    {
#line 9362
        .trainerName = _("8580525E"),
#line 9363
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9364
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9366
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9368
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9367
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9369
    [DIFFICULTY_NORMAL][TRAINER_866AE208] =
    {
#line 9370
        .trainerName = _("866AE208"),
#line 9371
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9372
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9374
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9376
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9375
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9377
    [DIFFICULTY_NORMAL][TRAINER_8677EFB3] =
    {
#line 9378
        .trainerName = _("8677EFB3"),
#line 9379
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9380
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9382
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9384
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9383
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9385
    [DIFFICULTY_NORMAL][TRAINER_86D37FF1] =
    {
#line 9386
        .trainerName = _("86D37FF1"),
#line 9387
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9388
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9390
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9392
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9391
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9393
    [DIFFICULTY_NORMAL][TRAINER_86F7AA4A] =
    {
#line 9394
        .trainerName = _("86F7AA4A"),
#line 9395
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9396
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9398
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9400
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9399
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9401
    [DIFFICULTY_NORMAL][TRAINER_872183CD] =
    {
#line 9402
        .trainerName = _("872183CD"),
#line 9403
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9404
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9406
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9408
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9407
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9409
    [DIFFICULTY_NORMAL][TRAINER_87B5E929] =
    {
#line 9410
        .trainerName = _("87B5E929"),
#line 9411
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9412
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9414
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9416
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9415
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9417
    [DIFFICULTY_NORMAL][TRAINER_885C781B] =
    {
#line 9418
        .trainerName = _("885C781B"),
#line 9419
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9420
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9422
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9424
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9423
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9425
    [DIFFICULTY_NORMAL][TRAINER_8878003B] =
    {
#line 9426
        .trainerName = _("8878003B"),
#line 9427
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9428
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9430
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9432
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9431
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9433
    [DIFFICULTY_NORMAL][TRAINER_88864D1E] =
    {
#line 9434
        .trainerName = _("88864D1E"),
#line 9435
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9436
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9438
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9440
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9439
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9441
    [DIFFICULTY_NORMAL][TRAINER_8972F540] =
    {
#line 9442
        .trainerName = _("8972F540"),
#line 9443
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9444
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9446
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9448
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9447
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9449
    [DIFFICULTY_NORMAL][TRAINER_898AF31D] =
    {
#line 9450
        .trainerName = _("898AF31D"),
#line 9451
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9452
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9454
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9456
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9455
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9457
    [DIFFICULTY_NORMAL][TRAINER_8A0B40C0] =
    {
#line 9458
        .trainerName = _("8A0B40C0"),
#line 9459
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9460
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9462
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9464
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9463
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9465
    [DIFFICULTY_NORMAL][TRAINER_8A2C65A3] =
    {
#line 9466
        .trainerName = _("8A2C65A3"),
#line 9467
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9468
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9470
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9472
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9471
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9473
    [DIFFICULTY_NORMAL][TRAINER_8A829476] =
    {
#line 9474
        .trainerName = _("8A829476"),
#line 9475
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9476
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9478
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9480
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9479
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9481
    [DIFFICULTY_NORMAL][TRAINER_8AC1B5C1] =
    {
#line 9482
        .trainerName = _("8AC1B5C1"),
#line 9483
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9484
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9486
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9488
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9487
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9489
    [DIFFICULTY_NORMAL][TRAINER_8AF40B23] =
    {
#line 9490
        .trainerName = _("8AF40B23"),
#line 9491
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9492
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9494
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9496
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9495
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9497
    [DIFFICULTY_NORMAL][TRAINER_8B31AC38] =
    {
#line 9498
        .trainerName = _("8B31AC38"),
#line 9499
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9500
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9502
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9504
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9503
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9505
    [DIFFICULTY_NORMAL][TRAINER_8B32317E] =
    {
#line 9506
        .trainerName = _("8B32317E"),
#line 9507
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9508
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9510
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9512
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9511
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9513
    [DIFFICULTY_NORMAL][TRAINER_8B3657A9] =
    {
#line 9514
        .trainerName = _("8B3657A9"),
#line 9515
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9516
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9518
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9520
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9519
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9521
    [DIFFICULTY_NORMAL][TRAINER_8B3C49E3] =
    {
#line 9522
        .trainerName = _("8B3C49E3"),
#line 9523
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9524
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9526
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9528
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9527
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9529
    [DIFFICULTY_NORMAL][TRAINER_8B6D195D] =
    {
#line 9530
        .trainerName = _("8B6D195D"),
#line 9531
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9532
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9534
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9536
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9535
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9537
    [DIFFICULTY_NORMAL][TRAINER_8BB65E5E] =
    {
#line 9538
        .trainerName = _("8BB65E5E"),
#line 9539
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9540
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9542
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9544
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9543
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9545
    [DIFFICULTY_NORMAL][TRAINER_8C186D17] =
    {
#line 9546
        .trainerName = _("8C186D17"),
#line 9547
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9548
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9550
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9552
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9551
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9553
    [DIFFICULTY_NORMAL][TRAINER_8C853607] =
    {
#line 9554
        .trainerName = _("8C853607"),
#line 9555
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9556
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9558
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9560
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9559
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9561
    [DIFFICULTY_NORMAL][TRAINER_8D6D5B2C] =
    {
#line 9562
        .trainerName = _("8D6D5B2C"),
#line 9563
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9564
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9566
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9568
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9567
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9569
    [DIFFICULTY_NORMAL][TRAINER_8D93124A] =
    {
#line 9570
        .trainerName = _("8D93124A"),
#line 9571
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9572
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9574
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9576
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9575
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9577
    [DIFFICULTY_NORMAL][TRAINER_8DAF08C5] =
    {
#line 9578
        .trainerName = _("8DAF08C5"),
#line 9579
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9580
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9582
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9584
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9583
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9585
    [DIFFICULTY_NORMAL][TRAINER_8DE17D94] =
    {
#line 9586
        .trainerName = _("8DE17D94"),
#line 9587
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9588
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9590
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9592
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9591
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9593
    [DIFFICULTY_NORMAL][TRAINER_8E60CF6E] =
    {
#line 9594
        .trainerName = _("8E60CF6E"),
#line 9595
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9596
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9598
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9600
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9599
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9601
    [DIFFICULTY_NORMAL][TRAINER_8EA873A0] =
    {
#line 9602
        .trainerName = _("8EA873A0"),
#line 9603
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9604
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9606
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9608
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9607
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9609
    [DIFFICULTY_NORMAL][TRAINER_8EB76821] =
    {
#line 9610
        .trainerName = _("8EB76821"),
#line 9611
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9612
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9614
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9616
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9615
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9617
    [DIFFICULTY_NORMAL][TRAINER_8ED15D51] =
    {
#line 9618
        .trainerName = _("8ED15D51"),
#line 9619
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9620
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9622
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9624
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9623
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9625
    [DIFFICULTY_NORMAL][TRAINER_8F28F86A] =
    {
#line 9626
        .trainerName = _("8F28F86A"),
#line 9627
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9628
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9630
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9632
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9631
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9633
    [DIFFICULTY_NORMAL][TRAINER_8F2EA270] =
    {
#line 9634
        .trainerName = _("8F2EA270"),
#line 9635
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9636
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9638
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9640
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9639
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9641
    [DIFFICULTY_NORMAL][TRAINER_8F9579E4] =
    {
#line 9642
        .trainerName = _("8F9579E4"),
#line 9643
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9644
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9646
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9648
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9647
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9649
    [DIFFICULTY_NORMAL][TRAINER_8F988020] =
    {
#line 9650
        .trainerName = _("8F988020"),
#line 9651
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9652
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9654
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9656
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9655
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9657
    [DIFFICULTY_NORMAL][TRAINER_8FE817BA] =
    {
#line 9658
        .trainerName = _("8FE817BA"),
#line 9659
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9660
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9662
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9664
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9663
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9665
    [DIFFICULTY_NORMAL][TRAINER_90353D81] =
    {
#line 9666
        .trainerName = _("90353D81"),
#line 9667
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9668
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9670
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9672
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9671
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9673
    [DIFFICULTY_NORMAL][TRAINER_9054973F] =
    {
#line 9674
        .trainerName = _("9054973F"),
#line 9675
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9676
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9678
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9680
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9679
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9681
    [DIFFICULTY_NORMAL][TRAINER_90A72ACF] =
    {
#line 9682
        .trainerName = _("90A72ACF"),
#line 9683
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9684
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9686
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9688
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9687
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9689
    [DIFFICULTY_NORMAL][TRAINER_90E1658C] =
    {
#line 9690
        .trainerName = _("90E1658C"),
#line 9691
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9692
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9694
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9696
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9695
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9697
    [DIFFICULTY_NORMAL][TRAINER_918A1734] =
    {
#line 9698
        .trainerName = _("918A1734"),
#line 9699
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9700
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9702
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9704
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9703
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9705
    [DIFFICULTY_NORMAL][TRAINER_91D249C3] =
    {
#line 9706
        .trainerName = _("91D249C3"),
#line 9707
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9708
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9710
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9712
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9711
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9713
    [DIFFICULTY_NORMAL][TRAINER_91D48E4E] =
    {
#line 9714
        .trainerName = _("91D48E4E"),
#line 9715
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9716
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9718
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9720
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9719
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9721
    [DIFFICULTY_NORMAL][TRAINER_922542C3] =
    {
#line 9722
        .trainerName = _("922542C3"),
#line 9723
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9724
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9726
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9728
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9727
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9729
    [DIFFICULTY_NORMAL][TRAINER_93009D3B] =
    {
#line 9730
        .trainerName = _("93009D3B"),
#line 9731
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9732
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9734
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9736
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9735
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9737
    [DIFFICULTY_NORMAL][TRAINER_93D9B506] =
    {
#line 9738
        .trainerName = _("93D9B506"),
#line 9739
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9740
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9742
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9744
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9743
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9745
    [DIFFICULTY_NORMAL][TRAINER_9427896B] =
    {
#line 9746
        .trainerName = _("9427896B"),
#line 9747
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9748
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9750
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9752
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9751
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9753
    [DIFFICULTY_NORMAL][TRAINER_9501C16B] =
    {
#line 9754
        .trainerName = _("9501C16B"),
#line 9755
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9756
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9758
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9760
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9759
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9761
    [DIFFICULTY_NORMAL][TRAINER_9566DD87] =
    {
#line 9762
        .trainerName = _("9566DD87"),
#line 9763
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9764
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9766
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9768
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9767
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9769
    [DIFFICULTY_NORMAL][TRAINER_95A74E78] =
    {
#line 9770
        .trainerName = _("95A74E78"),
#line 9771
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9772
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9774
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9776
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9775
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9777
    [DIFFICULTY_NORMAL][TRAINER_963F893A] =
    {
#line 9778
        .trainerName = _("963F893A"),
#line 9779
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9780
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9782
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9784
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9783
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9785
    [DIFFICULTY_NORMAL][TRAINER_966F37E6] =
    {
#line 9786
        .trainerName = _("966F37E6"),
#line 9787
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9788
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9790
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9792
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9791
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9793
    [DIFFICULTY_NORMAL][TRAINER_96859C9B] =
    {
#line 9794
        .trainerName = _("96859C9B"),
#line 9795
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9796
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9798
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9800
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9799
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9801
    [DIFFICULTY_NORMAL][TRAINER_9695D7CC] =
    {
#line 9802
        .trainerName = _("9695D7CC"),
#line 9803
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9804
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9806
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9808
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9807
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9809
    [DIFFICULTY_NORMAL][TRAINER_96A60AED] =
    {
#line 9810
        .trainerName = _("96A60AED"),
#line 9811
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9812
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9814
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9816
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9815
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9817
    [DIFFICULTY_NORMAL][TRAINER_973C00CE] =
    {
#line 9818
        .trainerName = _("973C00CE"),
#line 9819
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9820
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9822
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9824
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9823
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9825
    [DIFFICULTY_NORMAL][TRAINER_9784BB4E] =
    {
#line 9826
        .trainerName = _("9784BB4E"),
#line 9827
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9828
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9830
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9832
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9831
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9833
    [DIFFICULTY_NORMAL][TRAINER_9834CDCC] =
    {
#line 9834
        .trainerName = _("9834CDCC"),
#line 9835
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9836
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9838
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9840
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9839
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9841
    [DIFFICULTY_NORMAL][TRAINER_98547A36] =
    {
#line 9842
        .trainerName = _("98547A36"),
#line 9843
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9844
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9846
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9848
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9847
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9849
    [DIFFICULTY_NORMAL][TRAINER_98C7143B] =
    {
#line 9850
        .trainerName = _("98C7143B"),
#line 9851
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9852
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9854
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9856
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9855
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9857
    [DIFFICULTY_NORMAL][TRAINER_992FCC96] =
    {
#line 9858
        .trainerName = _("992FCC96"),
#line 9859
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9860
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9862
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9864
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9863
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9865
    [DIFFICULTY_NORMAL][TRAINER_99D74322] =
    {
#line 9866
        .trainerName = _("99D74322"),
#line 9867
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9868
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9870
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9872
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9871
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9873
    [DIFFICULTY_NORMAL][TRAINER_9A45ED29] =
    {
#line 9874
        .trainerName = _("9A45ED29"),
#line 9875
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9876
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9878
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9880
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9879
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9881
    [DIFFICULTY_NORMAL][TRAINER_9AAFB9A8] =
    {
#line 9882
        .trainerName = _("9AAFB9A8"),
#line 9883
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9884
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9886
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9888
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9887
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9889
    [DIFFICULTY_NORMAL][TRAINER_9B4CAAEF] =
    {
#line 9890
        .trainerName = _("9B4CAAEF"),
#line 9891
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9892
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9894
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9896
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9895
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9897
    [DIFFICULTY_NORMAL][TRAINER_9B92F975] =
    {
#line 9898
        .trainerName = _("9B92F975"),
#line 9899
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9900
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9902
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9904
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9903
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9905
    [DIFFICULTY_NORMAL][TRAINER_9BA8D6B8] =
    {
#line 9906
        .trainerName = _("9BA8D6B8"),
#line 9907
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9908
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9910
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9912
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9911
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9913
    [DIFFICULTY_NORMAL][TRAINER_9BBA4D3E] =
    {
#line 9914
        .trainerName = _("9BBA4D3E"),
#line 9915
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9916
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9918
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9920
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9919
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9921
    [DIFFICULTY_NORMAL][TRAINER_9BD745C1] =
    {
#line 9922
        .trainerName = _("9BD745C1"),
#line 9923
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9924
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9926
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9928
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9927
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9929
    [DIFFICULTY_NORMAL][TRAINER_9C9A9B43] =
    {
#line 9930
        .trainerName = _("9C9A9B43"),
#line 9931
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9932
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9934
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9936
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9935
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9937
    [DIFFICULTY_NORMAL][TRAINER_9CC51698] =
    {
#line 9938
        .trainerName = _("9CC51698"),
#line 9939
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9940
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9942
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9944
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9943
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9945
    [DIFFICULTY_NORMAL][TRAINER_9D0B799C] =
    {
#line 9946
        .trainerName = _("9D0B799C"),
#line 9947
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9948
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9950
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9952
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9951
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9953
    [DIFFICULTY_NORMAL][TRAINER_9D2974CA] =
    {
#line 9954
        .trainerName = _("9D2974CA"),
#line 9955
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9956
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9958
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9960
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9959
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9961
    [DIFFICULTY_NORMAL][TRAINER_9DE6AF69] =
    {
#line 9962
        .trainerName = _("9DE6AF69"),
#line 9963
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9964
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9966
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9968
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9967
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9969
    [DIFFICULTY_NORMAL][TRAINER_9E9E96C3] =
    {
#line 9970
        .trainerName = _("9E9E96C3"),
#line 9971
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9972
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9974
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9976
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9975
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9977
    [DIFFICULTY_NORMAL][TRAINER_9EBDE860] =
    {
#line 9978
        .trainerName = _("9EBDE860"),
#line 9979
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9980
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9982
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9984
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9983
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9985
    [DIFFICULTY_NORMAL][TRAINER_9F335F56] =
    {
#line 9986
        .trainerName = _("9F335F56"),
#line 9987
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9988
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9990
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9992
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9991
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9993
    [DIFFICULTY_NORMAL][TRAINER_9FB07CC0] =
    {
#line 9994
        .trainerName = _("9FB07CC0"),
#line 9995
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9996
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9998
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10000
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9999
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10001
    [DIFFICULTY_NORMAL][TRAINER_9FFBEDD1] =
    {
#line 10002
        .trainerName = _("9FFBEDD1"),
#line 10003
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10004
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10006
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10008
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10007
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10009
    [DIFFICULTY_NORMAL][TRAINER_A03F3B0B] =
    {
#line 10010
        .trainerName = _("A03F3B0B"),
#line 10011
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10012
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10014
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10016
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10015
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10017
    [DIFFICULTY_NORMAL][TRAINER_A0852317] =
    {
#line 10018
        .trainerName = _("A0852317"),
#line 10019
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10020
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10022
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10024
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10023
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10025
    [DIFFICULTY_NORMAL][TRAINER_A0CE2BCF] =
    {
#line 10026
        .trainerName = _("A0CE2BCF"),
#line 10027
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10028
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10030
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10032
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10031
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10033
    [DIFFICULTY_NORMAL][TRAINER_A122FEC6] =
    {
#line 10034
        .trainerName = _("A122FEC6"),
#line 10035
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10036
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10038
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10040
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10039
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10041
    [DIFFICULTY_NORMAL][TRAINER_A1502FA5] =
    {
#line 10042
        .trainerName = _("A1502FA5"),
#line 10043
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10044
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10046
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10048
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10047
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10049
    [DIFFICULTY_NORMAL][TRAINER_A173BD9E] =
    {
#line 10050
        .trainerName = _("A173BD9E"),
#line 10051
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10052
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10054
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10056
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10055
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10057
    [DIFFICULTY_NORMAL][TRAINER_A1B34299] =
    {
#line 10058
        .trainerName = _("A1B34299"),
#line 10059
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10060
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10062
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10064
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10063
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10065
    [DIFFICULTY_NORMAL][TRAINER_A226BBD6] =
    {
#line 10066
        .trainerName = _("A226BBD6"),
#line 10067
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10068
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10070
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10072
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10071
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10073
    [DIFFICULTY_NORMAL][TRAINER_A26B64E5] =
    {
#line 10074
        .trainerName = _("A26B64E5"),
#line 10075
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10076
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10078
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10080
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10079
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10081
    [DIFFICULTY_NORMAL][TRAINER_A2F2E8FF] =
    {
#line 10082
        .trainerName = _("A2F2E8FF"),
#line 10083
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10084
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10086
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10088
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10087
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10089
    [DIFFICULTY_NORMAL][TRAINER_A30D6A65] =
    {
#line 10090
        .trainerName = _("A30D6A65"),
#line 10091
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10092
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10094
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10096
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10095
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10097
    [DIFFICULTY_NORMAL][TRAINER_A33F468D] =
    {
#line 10098
        .trainerName = _("A33F468D"),
#line 10099
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10100
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10102
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10104
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10103
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10105
    [DIFFICULTY_NORMAL][TRAINER_A377CCDF] =
    {
#line 10106
        .trainerName = _("A377CCDF"),
#line 10107
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10108
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10110
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10112
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10111
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10113
    [DIFFICULTY_NORMAL][TRAINER_A393F9F0] =
    {
#line 10114
        .trainerName = _("A393F9F0"),
#line 10115
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10116
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10118
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10120
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10119
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10121
    [DIFFICULTY_NORMAL][TRAINER_A39AB67C] =
    {
#line 10122
        .trainerName = _("A39AB67C"),
#line 10123
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10124
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10126
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10128
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10127
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10129
    [DIFFICULTY_NORMAL][TRAINER_A3EBD43B] =
    {
#line 10130
        .trainerName = _("A3EBD43B"),
#line 10131
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10132
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10134
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10136
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10135
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10137
    [DIFFICULTY_NORMAL][TRAINER_A489434F] =
    {
#line 10138
        .trainerName = _("A489434F"),
#line 10139
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10140
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10142
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10144
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10143
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10145
    [DIFFICULTY_NORMAL][TRAINER_A49FED84] =
    {
#line 10146
        .trainerName = _("A49FED84"),
#line 10147
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10148
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10150
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10152
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10151
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10153
    [DIFFICULTY_NORMAL][TRAINER_A4BDD551] =
    {
#line 10154
        .trainerName = _("A4BDD551"),
#line 10155
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10156
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10158
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10160
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10159
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10161
    [DIFFICULTY_NORMAL][TRAINER_A4D47D9E] =
    {
#line 10162
        .trainerName = _("A4D47D9E"),
#line 10163
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10164
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10166
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10168
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10167
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10169
    [DIFFICULTY_NORMAL][TRAINER_A4DC84A0] =
    {
#line 10170
        .trainerName = _("A4DC84A0"),
#line 10171
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10172
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10174
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10176
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10175
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10177
    [DIFFICULTY_NORMAL][TRAINER_A4EC97B5] =
    {
#line 10178
        .trainerName = _("A4EC97B5"),
#line 10179
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10180
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10182
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10184
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10183
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10185
    [DIFFICULTY_NORMAL][TRAINER_A50CF67B] =
    {
#line 10186
        .trainerName = _("A50CF67B"),
#line 10187
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10188
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10190
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10192
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10191
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10193
    [DIFFICULTY_NORMAL][TRAINER_A62D49C6] =
    {
#line 10194
        .trainerName = _("A62D49C6"),
#line 10195
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10196
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10198
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10200
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10199
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10201
    [DIFFICULTY_NORMAL][TRAINER_A6328173] =
    {
#line 10202
        .trainerName = _("A6328173"),
#line 10203
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10204
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10206
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10208
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10207
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10209
    [DIFFICULTY_NORMAL][TRAINER_A646F21E] =
    {
#line 10210
        .trainerName = _("A646F21E"),
#line 10211
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10212
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10214
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10216
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10215
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10217
    [DIFFICULTY_NORMAL][TRAINER_A685428F] =
    {
#line 10218
        .trainerName = _("A685428F"),
#line 10219
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10220
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10222
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10224
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10223
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10225
    [DIFFICULTY_NORMAL][TRAINER_A686809A] =
    {
#line 10226
        .trainerName = _("A686809A"),
#line 10227
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10228
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10230
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10232
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10231
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10233
    [DIFFICULTY_NORMAL][TRAINER_A7154C64] =
    {
#line 10234
        .trainerName = _("A7154C64"),
#line 10235
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10236
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10238
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10240
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10239
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10241
    [DIFFICULTY_NORMAL][TRAINER_A725F3F3] =
    {
#line 10242
        .trainerName = _("A725F3F3"),
#line 10243
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10244
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10246
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10248
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10247
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10249
    [DIFFICULTY_NORMAL][TRAINER_A7376C87] =
    {
#line 10250
        .trainerName = _("A7376C87"),
#line 10251
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10252
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10254
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10256
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10255
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10257
    [DIFFICULTY_NORMAL][TRAINER_A76F8352] =
    {
#line 10258
        .trainerName = _("A76F8352"),
#line 10259
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10260
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10262
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10264
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10263
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10265
    [DIFFICULTY_NORMAL][TRAINER_A783BCA8] =
    {
#line 10266
        .trainerName = _("A783BCA8"),
#line 10267
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10268
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10270
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10272
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10271
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10273
    [DIFFICULTY_NORMAL][TRAINER_A7D689F5] =
    {
#line 10274
        .trainerName = _("A7D689F5"),
#line 10275
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10276
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10278
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10280
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10279
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10281
    [DIFFICULTY_NORMAL][TRAINER_A7DCD657] =
    {
#line 10282
        .trainerName = _("A7DCD657"),
#line 10283
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10284
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10286
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10288
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10287
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10289
    [DIFFICULTY_NORMAL][TRAINER_A80F3799] =
    {
#line 10290
        .trainerName = _("A80F3799"),
#line 10291
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10292
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10294
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10296
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10295
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10297
    [DIFFICULTY_NORMAL][TRAINER_A82FABFC] =
    {
#line 10298
        .trainerName = _("A82FABFC"),
#line 10299
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10300
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10302
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10304
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10303
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10305
    [DIFFICULTY_NORMAL][TRAINER_A8413608] =
    {
#line 10306
        .trainerName = _("A8413608"),
#line 10307
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10308
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10310
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10312
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10311
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10313
    [DIFFICULTY_NORMAL][TRAINER_A8BA94B6] =
    {
#line 10314
        .trainerName = _("A8BA94B6"),
#line 10315
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10316
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10318
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10320
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10319
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10321
    [DIFFICULTY_NORMAL][TRAINER_A90E2D03] =
    {
#line 10322
        .trainerName = _("A90E2D03"),
#line 10323
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10324
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10326
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10328
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10327
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10329
    [DIFFICULTY_NORMAL][TRAINER_A968DBA5] =
    {
#line 10330
        .trainerName = _("A968DBA5"),
#line 10331
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10332
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10334
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10336
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10335
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10337
    [DIFFICULTY_NORMAL][TRAINER_A990AE14] =
    {
#line 10338
        .trainerName = _("A990AE14"),
#line 10339
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10340
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10342
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10344
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10343
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10345
    [DIFFICULTY_NORMAL][TRAINER_A9F2709A] =
    {
#line 10346
        .trainerName = _("A9F2709A"),
#line 10347
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10348
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10350
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10352
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10351
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10353
    [DIFFICULTY_NORMAL][TRAINER_AA81DD0B] =
    {
#line 10354
        .trainerName = _("AA81DD0B"),
#line 10355
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10356
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10358
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10360
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10359
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10361
    [DIFFICULTY_NORMAL][TRAINER_AB576C3B] =
    {
#line 10362
        .trainerName = _("AB576C3B"),
#line 10363
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10364
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10366
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10368
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10367
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10369
    [DIFFICULTY_NORMAL][TRAINER_ABD18218] =
    {
#line 10370
        .trainerName = _("ABD18218"),
#line 10371
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10372
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10374
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10376
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10375
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10377
    [DIFFICULTY_NORMAL][TRAINER_ABF9DAAF] =
    {
#line 10378
        .trainerName = _("ABF9DAAF"),
#line 10379
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10380
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10382
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10384
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10383
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10385
    [DIFFICULTY_NORMAL][TRAINER_ABFE6286] =
    {
#line 10386
        .trainerName = _("ABFE6286"),
#line 10387
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10388
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10390
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10392
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10391
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10393
    [DIFFICULTY_NORMAL][TRAINER_AC004835] =
    {
#line 10394
        .trainerName = _("AC004835"),
#line 10395
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10396
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10398
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10400
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10399
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10401
    [DIFFICULTY_NORMAL][TRAINER_ACB85CBA] =
    {
#line 10402
        .trainerName = _("ACB85CBA"),
#line 10403
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10404
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10406
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10408
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10407
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10409
    [DIFFICULTY_NORMAL][TRAINER_ACE2090A] =
    {
#line 10410
        .trainerName = _("ACE2090A"),
#line 10411
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10412
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10414
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10416
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10415
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10417
    [DIFFICULTY_NORMAL][TRAINER_AD1AA26D] =
    {
#line 10418
        .trainerName = _("AD1AA26D"),
#line 10419
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10420
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10422
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10424
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10423
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10425
    [DIFFICULTY_NORMAL][TRAINER_AD70C4BA] =
    {
#line 10426
        .trainerName = _("AD70C4BA"),
#line 10427
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10428
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10430
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10432
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10431
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10433
    [DIFFICULTY_NORMAL][TRAINER_AD8C8210] =
    {
#line 10434
        .trainerName = _("AD8C8210"),
#line 10435
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10436
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10438
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10440
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10439
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10441
    [DIFFICULTY_NORMAL][TRAINER_ADC94E2C] =
    {
#line 10442
        .trainerName = _("ADC94E2C"),
#line 10443
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10444
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10446
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10448
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10447
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10449
    [DIFFICULTY_NORMAL][TRAINER_AE0ED10D] =
    {
#line 10450
        .trainerName = _("AE0ED10D"),
#line 10451
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10452
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10454
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10456
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10455
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10457
    [DIFFICULTY_NORMAL][TRAINER_AE99A6E1] =
    {
#line 10458
        .trainerName = _("AE99A6E1"),
#line 10459
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10460
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10462
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10464
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10463
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10465
    [DIFFICULTY_NORMAL][TRAINER_AE9CFA41] =
    {
#line 10466
        .trainerName = _("AE9CFA41"),
#line 10467
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10468
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10470
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10472
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10471
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10473
    [DIFFICULTY_NORMAL][TRAINER_AEDC9768] =
    {
#line 10474
        .trainerName = _("AEDC9768"),
#line 10475
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10476
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10478
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10480
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10479
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10481
    [DIFFICULTY_NORMAL][TRAINER_AF0898E7] =
    {
#line 10482
        .trainerName = _("AF0898E7"),
#line 10483
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10484
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10486
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10488
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10487
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10489
    [DIFFICULTY_NORMAL][TRAINER_AF765F9F] =
    {
#line 10490
        .trainerName = _("AF765F9F"),
#line 10491
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10492
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10494
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10496
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10495
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10497
    [DIFFICULTY_NORMAL][TRAINER_AFA4A980] =
    {
#line 10498
        .trainerName = _("AFA4A980"),
#line 10499
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10500
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10502
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10504
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10503
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10505
    [DIFFICULTY_NORMAL][TRAINER_AFA5BAC9] =
    {
#line 10506
        .trainerName = _("AFA5BAC9"),
#line 10507
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10508
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10510
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10512
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10511
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10513
    [DIFFICULTY_NORMAL][TRAINER_AFD8F2EF] =
    {
#line 10514
        .trainerName = _("AFD8F2EF"),
#line 10515
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10516
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10518
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10520
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10519
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10521
    [DIFFICULTY_NORMAL][TRAINER_AFE855B1] =
    {
#line 10522
        .trainerName = _("AFE855B1"),
#line 10523
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10524
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10526
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10528
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10527
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10529
    [DIFFICULTY_NORMAL][TRAINER_AFFCC47E] =
    {
#line 10530
        .trainerName = _("AFFCC47E"),
#line 10531
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10532
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10534
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10536
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10535
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10537
    [DIFFICULTY_NORMAL][TRAINER_B0FC622D] =
    {
#line 10538
        .trainerName = _("B0FC622D"),
#line 10539
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10540
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10542
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10544
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10543
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10545
    [DIFFICULTY_NORMAL][TRAINER_B1DA7383] =
    {
#line 10546
        .trainerName = _("B1DA7383"),
#line 10547
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10548
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10550
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10552
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10551
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10553
    [DIFFICULTY_NORMAL][TRAINER_B253DEF2] =
    {
#line 10554
        .trainerName = _("B253DEF2"),
#line 10555
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10556
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10558
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10560
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10559
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10561
    [DIFFICULTY_NORMAL][TRAINER_B2925134] =
    {
#line 10562
        .trainerName = _("B2925134"),
#line 10563
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10564
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10566
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10568
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10567
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10569
    [DIFFICULTY_NORMAL][TRAINER_B2A5CB2B] =
    {
#line 10570
        .trainerName = _("B2A5CB2B"),
#line 10571
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10572
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10574
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10576
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10575
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10577
    [DIFFICULTY_NORMAL][TRAINER_B32A1E98] =
    {
#line 10578
        .trainerName = _("B32A1E98"),
#line 10579
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10580
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10582
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10584
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10583
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10585
    [DIFFICULTY_NORMAL][TRAINER_B3B1644E] =
    {
#line 10586
        .trainerName = _("B3B1644E"),
#line 10587
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10588
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10590
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10592
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10591
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10593
    [DIFFICULTY_NORMAL][TRAINER_B3CE95A4] =
    {
#line 10594
        .trainerName = _("B3CE95A4"),
#line 10595
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10596
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10598
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10600
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10599
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10601
    [DIFFICULTY_NORMAL][TRAINER_B3FB2F4B] =
    {
#line 10602
        .trainerName = _("B3FB2F4B"),
#line 10603
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10604
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10606
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10608
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10607
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10609
    [DIFFICULTY_NORMAL][TRAINER_B42E7E27] =
    {
#line 10610
        .trainerName = _("B42E7E27"),
#line 10611
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10612
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10614
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10616
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10615
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10617
    [DIFFICULTY_NORMAL][TRAINER_B42F5023] =
    {
#line 10618
        .trainerName = _("B42F5023"),
#line 10619
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10620
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10622
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10624
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10623
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10625
    [DIFFICULTY_NORMAL][TRAINER_B435B7EF] =
    {
#line 10626
        .trainerName = _("B435B7EF"),
#line 10627
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10628
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10630
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10632
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10631
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10633
    [DIFFICULTY_NORMAL][TRAINER_B438F348] =
    {
#line 10634
        .trainerName = _("B438F348"),
#line 10635
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10636
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10638
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10640
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10639
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10641
    [DIFFICULTY_NORMAL][TRAINER_B489F821] =
    {
#line 10642
        .trainerName = _("B489F821"),
#line 10643
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10644
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10646
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10648
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10647
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10649
    [DIFFICULTY_NORMAL][TRAINER_B490300F] =
    {
#line 10650
        .trainerName = _("B490300F"),
#line 10651
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10652
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10654
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10656
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10655
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10657
    [DIFFICULTY_NORMAL][TRAINER_B53E1C28] =
    {
#line 10658
        .trainerName = _("B53E1C28"),
#line 10659
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10660
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10662
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10664
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10663
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10665
    [DIFFICULTY_NORMAL][TRAINER_B5E055E7] =
    {
#line 10666
        .trainerName = _("B5E055E7"),
#line 10667
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10668
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10670
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10672
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10671
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10673
    [DIFFICULTY_NORMAL][TRAINER_B6330B06] =
    {
#line 10674
        .trainerName = _("B6330B06"),
#line 10675
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10676
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10678
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10680
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10679
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10681
    [DIFFICULTY_NORMAL][TRAINER_B66CAB9E] =
    {
#line 10682
        .trainerName = _("B66CAB9E"),
#line 10683
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10684
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10686
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10688
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10687
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10689
    [DIFFICULTY_NORMAL][TRAINER_B6E3D521] =
    {
#line 10690
        .trainerName = _("B6E3D521"),
#line 10691
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10692
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10694
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10696
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10695
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10697
    [DIFFICULTY_NORMAL][TRAINER_B6F23A27] =
    {
#line 10698
        .trainerName = _("B6F23A27"),
#line 10699
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10700
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10702
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10704
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10703
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10705
    [DIFFICULTY_NORMAL][TRAINER_B71419A1] =
    {
#line 10706
        .trainerName = _("B71419A1"),
#line 10707
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10708
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10710
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10712
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10711
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10713
    [DIFFICULTY_NORMAL][TRAINER_B77C014B] =
    {
#line 10714
        .trainerName = _("B77C014B"),
#line 10715
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10716
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10718
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10720
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10719
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10721
    [DIFFICULTY_NORMAL][TRAINER_B791766D] =
    {
#line 10722
        .trainerName = _("B791766D"),
#line 10723
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10724
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10726
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10728
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10727
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10729
    [DIFFICULTY_NORMAL][TRAINER_B7998A66] =
    {
#line 10730
        .trainerName = _("B7998A66"),
#line 10731
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10732
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10734
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10736
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10735
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10737
    [DIFFICULTY_NORMAL][TRAINER_B7C2EB7F] =
    {
#line 10738
        .trainerName = _("B7C2EB7F"),
#line 10739
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10740
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10742
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10744
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10743
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10745
    [DIFFICULTY_NORMAL][TRAINER_B7EFEE71] =
    {
#line 10746
        .trainerName = _("B7EFEE71"),
#line 10747
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10748
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10750
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10752
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10751
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10753
    [DIFFICULTY_NORMAL][TRAINER_B84B3D2A] =
    {
#line 10754
        .trainerName = _("B84B3D2A"),
#line 10755
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10756
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10758
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10760
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10759
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10761
    [DIFFICULTY_NORMAL][TRAINER_B8C5628C] =
    {
#line 10762
        .trainerName = _("B8C5628C"),
#line 10763
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10764
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10766
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10768
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10767
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10769
    [DIFFICULTY_NORMAL][TRAINER_B94D66E3] =
    {
#line 10770
        .trainerName = _("B94D66E3"),
#line 10771
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10772
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10774
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10776
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10775
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10777
    [DIFFICULTY_NORMAL][TRAINER_B9C56D15] =
    {
#line 10778
        .trainerName = _("B9C56D15"),
#line 10779
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10780
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10782
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10784
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10783
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10785
    [DIFFICULTY_NORMAL][TRAINER_BA12D98F] =
    {
#line 10786
        .trainerName = _("BA12D98F"),
#line 10787
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10788
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10790
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10792
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10791
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10793
    [DIFFICULTY_NORMAL][TRAINER_BA4155D3] =
    {
#line 10794
        .trainerName = _("BA4155D3"),
#line 10795
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10796
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10798
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10800
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10799
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10801
    [DIFFICULTY_NORMAL][TRAINER_BA4DFC3A] =
    {
#line 10802
        .trainerName = _("BA4DFC3A"),
#line 10803
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10804
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10806
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10808
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10807
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10809
    [DIFFICULTY_NORMAL][TRAINER_BA60011F] =
    {
#line 10810
        .trainerName = _("BA60011F"),
#line 10811
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10812
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10814
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10816
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10815
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10817
    [DIFFICULTY_NORMAL][TRAINER_BA924FF7] =
    {
#line 10818
        .trainerName = _("BA924FF7"),
#line 10819
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10820
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10822
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10824
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10823
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10825
    [DIFFICULTY_NORMAL][TRAINER_BB07DD1B] =
    {
#line 10826
        .trainerName = _("BB07DD1B"),
#line 10827
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10828
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10830
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10832
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10831
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10833
    [DIFFICULTY_NORMAL][TRAINER_BB531FBA] =
    {
#line 10834
        .trainerName = _("BB531FBA"),
#line 10835
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10836
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10838
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10840
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10839
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10841
    [DIFFICULTY_NORMAL][TRAINER_BB6FD0A4] =
    {
#line 10842
        .trainerName = _("BB6FD0A4"),
#line 10843
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10844
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10846
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10848
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10847
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10849
    [DIFFICULTY_NORMAL][TRAINER_BBBC4B4C] =
    {
#line 10850
        .trainerName = _("BBBC4B4C"),
#line 10851
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10852
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10854
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10856
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10855
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10857
    [DIFFICULTY_NORMAL][TRAINER_BBD56E26] =
    {
#line 10858
        .trainerName = _("BBD56E26"),
#line 10859
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10860
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10862
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10864
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10863
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10865
    [DIFFICULTY_NORMAL][TRAINER_BC01A85B] =
    {
#line 10866
        .trainerName = _("BC01A85B"),
#line 10867
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10868
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10870
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10872
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10871
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10873
    [DIFFICULTY_NORMAL][TRAINER_BC74FA1D] =
    {
#line 10874
        .trainerName = _("BC74FA1D"),
#line 10875
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10876
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10878
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10880
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10879
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10881
    [DIFFICULTY_NORMAL][TRAINER_BC7E8D55] =
    {
#line 10882
        .trainerName = _("BC7E8D55"),
#line 10883
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10884
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10886
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10888
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10887
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10889
    [DIFFICULTY_NORMAL][TRAINER_BCDFD312] =
    {
#line 10890
        .trainerName = _("BCDFD312"),
#line 10891
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10892
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10894
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10896
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10895
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10897
    [DIFFICULTY_NORMAL][TRAINER_BCEFD799] =
    {
#line 10898
        .trainerName = _("BCEFD799"),
#line 10899
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10900
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10902
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10904
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10903
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10905
    [DIFFICULTY_NORMAL][TRAINER_BD01F8F4] =
    {
#line 10906
        .trainerName = _("BD01F8F4"),
#line 10907
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10908
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10910
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10912
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10911
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10913
    [DIFFICULTY_NORMAL][TRAINER_BDC38E1E] =
    {
#line 10914
        .trainerName = _("BDC38E1E"),
#line 10915
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10916
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10918
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10920
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10919
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10921
    [DIFFICULTY_NORMAL][TRAINER_BE2AF14F] =
    {
#line 10922
        .trainerName = _("BE2AF14F"),
#line 10923
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10924
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10926
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10928
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10927
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10929
    [DIFFICULTY_NORMAL][TRAINER_BEB2BD3E] =
    {
#line 10930
        .trainerName = _("BEB2BD3E"),
#line 10931
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10932
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10934
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10936
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10935
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10937
    [DIFFICULTY_NORMAL][TRAINER_BF07B94F] =
    {
#line 10938
        .trainerName = _("BF07B94F"),
#line 10939
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10940
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10942
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10944
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10943
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10945
    [DIFFICULTY_NORMAL][TRAINER_BF2827C0] =
    {
#line 10946
        .trainerName = _("BF2827C0"),
#line 10947
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10948
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10950
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10952
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10951
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10953
    [DIFFICULTY_NORMAL][TRAINER_BF74896F] =
    {
#line 10954
        .trainerName = _("BF74896F"),
#line 10955
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10956
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10958
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10960
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10959
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10961
    [DIFFICULTY_NORMAL][TRAINER_BF8ADEF1] =
    {
#line 10962
        .trainerName = _("BF8ADEF1"),
#line 10963
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10964
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10966
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10968
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10967
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10969
    [DIFFICULTY_NORMAL][TRAINER_C0800804] =
    {
#line 10970
        .trainerName = _("C0800804"),
#line 10971
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10972
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10974
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10976
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10975
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10977
    [DIFFICULTY_NORMAL][TRAINER_C091F2C5] =
    {
#line 10978
        .trainerName = _("C091F2C5"),
#line 10979
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10980
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10982
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10984
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10983
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10985
    [DIFFICULTY_NORMAL][TRAINER_C10351D2] =
    {
#line 10986
        .trainerName = _("C10351D2"),
#line 10987
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10988
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10990
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10992
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10991
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10993
    [DIFFICULTY_NORMAL][TRAINER_C1C428F7] =
    {
#line 10994
        .trainerName = _("C1C428F7"),
#line 10995
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10996
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10998
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11000
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10999
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11001
    [DIFFICULTY_NORMAL][TRAINER_C1C621AC] =
    {
#line 11002
        .trainerName = _("C1C621AC"),
#line 11003
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11004
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11006
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11008
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11007
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11009
    [DIFFICULTY_NORMAL][TRAINER_C203C024] =
    {
#line 11010
        .trainerName = _("C203C024"),
#line 11011
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11012
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11014
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11016
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11015
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11017
    [DIFFICULTY_NORMAL][TRAINER_C2174D90] =
    {
#line 11018
        .trainerName = _("C2174D90"),
#line 11019
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11020
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11022
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11024
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11023
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11025
    [DIFFICULTY_NORMAL][TRAINER_C24EFC92] =
    {
#line 11026
        .trainerName = _("C24EFC92"),
#line 11027
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11028
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11030
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11032
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11031
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11033
    [DIFFICULTY_NORMAL][TRAINER_C290C9F5] =
    {
#line 11034
        .trainerName = _("C290C9F5"),
#line 11035
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11036
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11038
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11040
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11039
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11041
    [DIFFICULTY_NORMAL][TRAINER_C29CDC34] =
    {
#line 11042
        .trainerName = _("C29CDC34"),
#line 11043
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11044
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11046
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11048
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11047
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11049
    [DIFFICULTY_NORMAL][TRAINER_C3B3B17B] =
    {
#line 11050
        .trainerName = _("C3B3B17B"),
#line 11051
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11052
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11054
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11056
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11055
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11057
    [DIFFICULTY_NORMAL][TRAINER_C414BED0] =
    {
#line 11058
        .trainerName = _("C414BED0"),
#line 11059
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11060
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11062
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11064
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11063
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11065
    [DIFFICULTY_NORMAL][TRAINER_C42A775B] =
    {
#line 11066
        .trainerName = _("C42A775B"),
#line 11067
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11068
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11070
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11072
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11071
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11073
    [DIFFICULTY_NORMAL][TRAINER_C4A167E0] =
    {
#line 11074
        .trainerName = _("C4A167E0"),
#line 11075
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11076
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11078
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11080
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11079
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11081
    [DIFFICULTY_NORMAL][TRAINER_C4C98FC4] =
    {
#line 11082
        .trainerName = _("C4C98FC4"),
#line 11083
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11084
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11086
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11088
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11087
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11089
    [DIFFICULTY_NORMAL][TRAINER_C533F091] =
    {
#line 11090
        .trainerName = _("C533F091"),
#line 11091
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11092
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11094
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11096
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11095
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11097
    [DIFFICULTY_NORMAL][TRAINER_C6600959] =
    {
#line 11098
        .trainerName = _("C6600959"),
#line 11099
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11100
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11102
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11104
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11103
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11105
    [DIFFICULTY_NORMAL][TRAINER_C6666859] =
    {
#line 11106
        .trainerName = _("C6666859"),
#line 11107
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11108
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11110
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11112
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11111
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11113
    [DIFFICULTY_NORMAL][TRAINER_C690158D] =
    {
#line 11114
        .trainerName = _("C690158D"),
#line 11115
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11116
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11118
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11120
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11119
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11121
    [DIFFICULTY_NORMAL][TRAINER_C6E61EDA] =
    {
#line 11122
        .trainerName = _("C6E61EDA"),
#line 11123
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11124
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11126
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11128
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11127
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11129
    [DIFFICULTY_NORMAL][TRAINER_C7630112] =
    {
#line 11130
        .trainerName = _("C7630112"),
#line 11131
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11132
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11134
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11136
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11135
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11137
    [DIFFICULTY_NORMAL][TRAINER_C789FBF5] =
    {
#line 11138
        .trainerName = _("C789FBF5"),
#line 11139
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11140
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11142
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11144
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11143
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11145
    [DIFFICULTY_NORMAL][TRAINER_C7E06CB4] =
    {
#line 11146
        .trainerName = _("C7E06CB4"),
#line 11147
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11148
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11150
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11152
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11151
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11153
    [DIFFICULTY_NORMAL][TRAINER_C7F16F5B] =
    {
#line 11154
        .trainerName = _("C7F16F5B"),
#line 11155
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11156
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11158
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11160
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11159
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11161
    [DIFFICULTY_NORMAL][TRAINER_C82E0F99] =
    {
#line 11162
        .trainerName = _("C82E0F99"),
#line 11163
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11164
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11166
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11168
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11167
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11169
    [DIFFICULTY_NORMAL][TRAINER_C84D5BA6] =
    {
#line 11170
        .trainerName = _("C84D5BA6"),
#line 11171
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11172
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11174
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11176
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11175
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11177
    [DIFFICULTY_NORMAL][TRAINER_C8563FAA] =
    {
#line 11178
        .trainerName = _("C8563FAA"),
#line 11179
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11180
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11182
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11184
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11183
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11185
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 11186
        .trainerName = _("LEAF"),
#line 11187
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11188
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11190
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11192
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11191
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11193
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 11194
        .trainerName = _("RED"),
#line 11195
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11196
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11198
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11200
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11199
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
