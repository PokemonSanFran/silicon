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
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
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
#line 2776
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
#line 2777
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2778
        .mapSec = MAPSEC_SHARPRISESPIRE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_F,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2780
            .species = SPECIES_NIHILEGO_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2780
            .heldItem = ITEM_POWER_HERB,
#line 2786
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2788
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2781
            .ability = ABILITY_SWIFT_ASCENT,
#line 2782
            .lvl = 90,
#line 2783
            .ball = BALL_MASTER,
#line 2785
            .friendship = 1,
#line 2787
            .nature = NATURE_TIMID,
#line 2784
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2789
                MOVE_POWER_GEM,
                MOVE_SLUDGE_WAVE,
                MOVE_DAZZLING_GLEAM,
                MOVE_METEOR_BEAM,
            },
            },
            {
#line 2794
            .species = SPECIES_CELESTEELA_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2794
            .heldItem = ITEM_LEFTOVERS,
#line 2800
            .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 0, 128),
#line 2801
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2795
            .ability = ABILITY_SWIFT_ASCENT,
#line 2796
            .lvl = 90,
#line 2797
            .ball = BALL_MASTER,
#line 2799
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 2798
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2801
                MOVE_HEAVY_SLAM,
                MOVE_LEECH_SEED,
                MOVE_PROTECT,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 2806
            .species = SPECIES_KARTANA_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2806
            .heldItem = ITEM_ASSAULT_VEST,
#line 2812
            .ev = TRAINER_PARTY_EVS(0, 8, 0, 252, 0, 248),
#line 2814
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2807
            .ability = ABILITY_SWIFT_ASCENT,
#line 2808
            .lvl = 90,
#line 2809
            .ball = BALL_MASTER,
#line 2811
            .friendship = 1,
#line 2813
            .nature = NATURE_ADAMANT,
#line 2810
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2814
                MOVE_LEAF_BLADE,
                MOVE_SMART_STRIKE,
                MOVE_SACRED_SWORD,
                MOVE_GUILLOTINE,
            },
            },
            {
#line 2819
            .species = SPECIES_GUZZLORD_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2819
            .heldItem = ITEM_ROSELI_BERRY,
#line 2825
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 4),
#line 2826
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 2820
            .ability = ABILITY_SWIFT_ASCENT,
#line 2821
            .lvl = 90,
#line 2822
            .ball = BALL_MASTER,
#line 2824
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 2823
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2827
                MOVE_DRAGON_PULSE,
                MOVE_DARK_PULSE,
                MOVE_FLAMETHROWER,
                MOVE_GYRO_BALL,
            },
            },
            {
#line 2832
            .species = SPECIES_NAGANADEL_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2832
            .heldItem = ITEM_POISONIUM_Z,
#line 2838
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2840
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2833
            .ability = ABILITY_SWIFT_ASCENT,
#line 2834
            .lvl = 90,
#line 2835
            .ball = BALL_MASTER,
#line 2837
            .friendship = 1,
#line 2839
            .nature = NATURE_TIMID,
#line 2836
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2841
                MOVE_SLUDGE_WAVE,
                MOVE_DRACO_METEOR,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 2846
            .species = SPECIES_STAKATAKA_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2846
            .heldItem = ITEM_SHUCA_BERRY,
#line 2852
            .ev = TRAINER_PARTY_EVS(252, 0, 96, 0, 0, 160),
#line 2854
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 2847
            .ability = ABILITY_SWIFT_ASCENT,
#line 2848
            .lvl = 90,
#line 2849
            .ball = BALL_MASTER,
#line 2851
            .friendship = 1,
#line 2853
            .nature = NATURE_CAREFUL,
#line 2850
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2855
                MOVE_GYRO_BALL,
                MOVE_STONE_EDGE,
                MOVE_BODY_PRESS,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 2860
    [DIFFICULTY_NORMAL][TRAINER_MAGNUS_PROLOGUE] =
    {
#line 2861
        .trainerName = _("Magnus"),
#line 2866
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 2862
        .trainerPic = TRAINER_PIC_FRONT_MAGNUS,
#line 2864
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2863
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2865
        .characterRevealId = REVEAL_MAGNUS,
#line 2867
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2868
        .objectEventGraphicsId = OBJ_EVENT_GFX_MAGNUS,
#line 2869
        .mapSec = MAPSEC_OROLAND_COLISEUM,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_MAGNUS,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2871
            .species = SPECIES_DRACOVISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2871
            .heldItem = ITEM_MYSTIC_WATER,
#line 2877
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2879
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2872
            .ability = ABILITY_SAND_RUSH,
#line 2873
            .lvl = 87,
#line 2874
            .ball = BALL_MASTER,
#line 2876
            .friendship = 1,
#line 2878
            .nature = NATURE_ADAMANT,
#line 2875
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2879
                MOVE_FISHIOUS_REND,
                MOVE_EARTHQUAKE,
                MOVE_DRAGON_RUSH,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 2884
            .species = SPECIES_SANDACONDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2884
            .heldItem = ITEM_SITRUS_BERRY,
#line 2890
            .ev = TRAINER_PARTY_EVS(252, 80, 0, 0, 0, 176),
#line 2892
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2885
            .ability = ABILITY_SAND_SPIT,
#line 2886
            .lvl = 88,
#line 2887
            .ball = BALL_MASTER,
#line 2889
            .friendship = 1,
#line 2891
            .nature = NATURE_CAREFUL,
#line 2888
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2892
                MOVE_HIGH_HORSEPOWER,
                MOVE_STONE_EDGE,
                MOVE_GLARE,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 2897
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2897
            .heldItem = ITEM_SCOPE_LENS,
#line 2903
            .ev = TRAINER_PARTY_EVS(156, 0, 0, 252, 100, 0),
#line 2905
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2898
            .ability = ABILITY_SUPER_LUCK,
#line 2899
            .lvl = 87,
#line 2900
            .ball = BALL_MASTER,
#line 2902
            .friendship = 1,
#line 2904
            .nature = NATURE_TIMID,
#line 2901
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2906
                MOVE_DAZZLING_GLEAM,
                MOVE_AIR_CUTTER,
                MOVE_TAILWIND,
                MOVE_FOLLOW_ME,
            },
            },
            {
#line 2911
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2911
            .heldItem = ITEM_FLYING_GEM,
#line 2917
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2919
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2912
            .ability = ABILITY_SAND_VEIL,
#line 2913
            .lvl = 87,
#line 2914
            .ball = BALL_MASTER,
#line 2916
            .friendship = 1,
#line 2918
            .nature = NATURE_JOLLY,
#line 2915
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2919
                MOVE_ACROBATICS,
                MOVE_HIGH_HORSEPOWER,
                MOVE_SWORDS_DANCE,
                MOVE_BRICK_BREAK,
            },
            },
            {
#line 2924
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2924
            .heldItem = ITEM_GROUNDIUM_Z,
#line 2930
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2932
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2925
            .ability = ABILITY_SAND_RUSH,
#line 2926
            .lvl = 88,
#line 2927
            .ball = BALL_MASTER,
#line 2929
            .friendship = 1,
#line 2931
            .nature = NATURE_ADAMANT,
#line 2928
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2932
                MOVE_DRILL_RUN,
                MOVE_IRON_HEAD,
                MOVE_ROCK_SLIDE,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 2937
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2937
            .heldItem = ITEM_TYRANITARITE,
#line 2943
            .ev = TRAINER_PARTY_EVS(252, 104, 0, 76, 0, 76),
#line 2945
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2938
            .ability = ABILITY_SAND_STREAM,
#line 2939
            .lvl = 89,
#line 2940
            .ball = BALL_MASTER,
#line 2942
            .friendship = 1,
#line 2944
            .nature = NATURE_ADAMANT,
#line 2941
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2945
                MOVE_ROCK_SLIDE,
                MOVE_ASSURANCE,
                MOVE_STONE_EDGE,
                MOVE_AERIAL_ACE,
            },
            },
        },
    },
#line 2950
    [DIFFICULTY_NORMAL][TRAINER_ELLEN] =
    {
#line 2951
        .trainerName = _("Ellen"),
#line 2952
        .trainerPic = TRAINER_PIC_FRONT_ELLEN,
#line 2954
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2953
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2955
        .characterRevealId = REVEAL_ELLEN,
#line 2956
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2957
        .objectEventGraphicsId = OBJ_EVENT_GFX_ELLEN,
#line 2958
        .mapSec = MAPSEC_NAVAL_BASE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ELLEN,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2960
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2960
            .heldItem = ITEM_SITRUS_BERRY,
#line 2966
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
#line 2968
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2961
            .ability = ABILITY_SERENE_GRACE,
#line 2962
            .lvl = 89,
#line 2963
            .ball = BALL_MASTER,
#line 2965
            .friendship = 1,
#line 2967
            .nature = NATURE_MODEST,
#line 2964
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2969
                MOVE_AIR_SLASH,
                MOVE_ANCIENT_POWER,
                MOVE_DAZZLING_GLEAM,
                MOVE_HEAT_WAVE,
            },
            },
            {
#line 2974
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2974
            .heldItem = ITEM_SWAMPERTITE,
#line 2980
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 2982
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2975
            .ability = ABILITY_TORRENT,
#line 2976
            .lvl = 91,
#line 2977
            .ball = BALL_MASTER,
#line 2979
            .friendship = 1,
#line 2981
            .nature = NATURE_ADAMANT,
#line 2978
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2982
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ICE_PUNCH,
                MOVE_WATERFALL,
            },
            },
            {
#line 2987
            .species = SPECIES_DHELMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2987
            .heldItem = ITEM_GRASSIUM_Z,
#line 2993
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2995
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2988
            .ability = ABILITY_STEELWORKER,
#line 2989
            .lvl = 89,
#line 2990
            .ball = BALL_MASTER,
#line 2992
            .friendship = 1,
#line 2994
            .nature = NATURE_JOLLY,
#line 2991
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2995
                MOVE_POWER_WHIP,
                MOVE_PHANTOM_FORCE,
                MOVE_ANCHOR_SHOT,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 3000
            .species = SPECIES_WYRDEER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3000
            .heldItem = ITEM_NORMAL_GEM,
#line 3006
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3008
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3001
            .ability = ABILITY_INTIMIDATE,
#line 3002
            .lvl = 90,
#line 3003
            .ball = BALL_MASTER,
#line 3005
            .friendship = 1,
#line 3007
            .nature = NATURE_ADAMANT,
#line 3004
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3008
                MOVE_BODY_SLAM,
                MOVE_BITE,
                MOVE_ZEN_HEADBUTT,
                MOVE_HIGH_HORSEPOWER,
            },
            },
            {
#line 3013
            .species = SPECIES_TOXAPEX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3013
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3019
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 3021
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3014
            .ability = ABILITY_MERCILESS,
#line 3015
            .lvl = 89,
#line 3016
            .ball = BALL_MASTER,
#line 3018
            .friendship = 1,
#line 3020
            .nature = NATURE_ADAMANT,
#line 3017
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3021
                MOVE_POISON_JAB,
                MOVE_LIQUIDATION,
                MOVE_TOXIC,
                MOVE_BANEFUL_BUNKER,
            },
            },
            {
#line 3026
            .species = SPECIES_ARCHALUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3026
            .heldItem = ITEM_ASSAULT_VEST,
#line 3032
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
#line 3034
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3027
            .ability = ABILITY_STAMINA,
#line 3028
            .lvl = 90,
#line 3029
            .ball = BALL_MASTER,
#line 3031
            .friendship = 1,
#line 3033
            .nature = NATURE_MODEST,
#line 3030
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3035
                MOVE_DRAGON_PULSE,
                MOVE_FLASH_CANNON,
                MOVE_BODY_PRESS,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 3040
    [DIFFICULTY_NORMAL][TRAINER_ARMANDO] =
    {
#line 3041
        .trainerName = _("Armando"),
#line 3042
        .trainerPic = TRAINER_PIC_FRONT_ARMANDO,
#line 3044
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3043
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3045
        .characterRevealId = REVEAL_ARMANDO,
#line 3046
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 3047
        .objectEventGraphicsId = OBJ_EVENT_GFX_ARMANDO,
#line 3048
        .mapSec = MAPSEC_LEAVERRA_FOREST,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_ARMANDO,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3050
            .species = SPECIES_SCOVILLAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3050
            .heldItem = ITEM_LIFE_ORB,
#line 3056
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 176, 232, 0),
#line 3058
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3051
            .ability = ABILITY_CHLOROPHYLL,
#line 3052
            .lvl = 87,
#line 3053
            .ball = BALL_MASTER,
#line 3055
            .friendship = 1,
#line 3057
            .nature = NATURE_MODEST,
#line 3054
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3059
                MOVE_FLAMETHROWER,
                MOVE_ENERGY_BALL,
                MOVE_WILL_O_WISP,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 3064
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3064
            .heldItem = ITEM_DRAGON_GEM,
#line 3070
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 3072
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3065
            .ability = ABILITY_LEVITATE,
#line 3066
            .lvl = 88,
#line 3067
            .ball = BALL_MASTER,
#line 3069
            .friendship = 1,
#line 3071
            .nature = NATURE_TIMID,
#line 3068
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3073
                MOVE_HEAT_WAVE,
                MOVE_DARK_PULSE,
                MOVE_DRACO_METEOR,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 3078
            .species = SPECIES_MUSHARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3078
            .heldItem = ITEM_LEFTOVERS,
#line 3084
            .ev = TRAINER_PARTY_EVS(252, 0, 220, 0, 0, 36),
#line 3086
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3079
            .ability = ABILITY_TELEPATHY,
#line 3080
            .lvl = 88,
#line 3081
            .ball = BALL_MASTER,
#line 3083
            .friendship = 1,
#line 3085
            .nature = NATURE_BOLD,
#line 3082
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3087
                MOVE_PSYCHIC,
                MOVE_DAZZLING_GLEAM,
                MOVE_CALM_MIND,
                MOVE_MOONLIGHT,
            },
            },
            {
#line 3092
            .species = SPECIES_URSALUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3092
            .heldItem = ITEM_FLAME_ORB,
#line 3098
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3100
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3093
            .ability = ABILITY_GUTS,
#line 3094
            .lvl = 87,
#line 3095
            .ball = BALL_MASTER,
#line 3097
            .friendship = 1,
#line 3099
            .nature = NATURE_ADAMANT,
#line 3096
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3100
                MOVE_FACADE,
                MOVE_EARTHQUAKE,
                MOVE_HEADLONG_RUSH,
                MOVE_PROTECT,
            },
            },
            {
#line 3105
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3105
            .heldItem = ITEM_FIRIUM_Z,
#line 3111
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 36, 220, 0),
#line 3113
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3106
            .ability = ABILITY_FLAME_BODY,
#line 3107
            .lvl = 88,
#line 3108
            .ball = BALL_MASTER,
#line 3110
            .friendship = 1,
#line 3112
            .nature = NATURE_MODEST,
#line 3109
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3114
                MOVE_OVERHEAT,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_SCORCHING_SANDS,
            },
            },
            {
#line 3120
            .species = SPECIES_CENTISKORCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3126
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3128
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3121
            .ability = ABILITY_WHITE_SMOKE,
#line 3122
            .lvl = 89,
#line 3123
            .ball = BALL_MASTER,
#line 3125
            .friendship = 1,
#line 3127
            .nature = NATURE_JOLLY,
#line 3124
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3128
                MOVE_FLARE_BLITZ,
                MOVE_FIRE_LASH,
                MOVE_LEECH_LIFE,
                MOVE_DRAGON_TAIL,
            },
            },
        },
    },
#line 3133
    [DIFFICULTY_NORMAL][TRAINER_KEI_YING] =
    {
#line 3134
        .trainerName = _("Kei-ying"),
#line 3138
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 3135
        .trainerPic = TRAINER_PIC_FRONT_KEI_YING,
#line 3137
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3136
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_KEI_YING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3140
            .species = SPECIES_URSHIFU_RAPID_STRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3140
            .heldItem = ITEM_URSHIFUNITE_RAPID,
#line 3146
            .ev = TRAINER_PARTY_EVS(140, 88, 4, 24, 0, 252),
#line 3148
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3141
            .ability = ABILITY_UNSEEN_FIST,
#line 3142
            .lvl = 88,
#line 3143
            .ball = BALL_MASTER,
#line 3145
            .friendship = 1,
#line 3147
            .nature = NATURE_ADAMANT,
#line 3144
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3148
                MOVE_SURGING_STRIKES,
                MOVE_CLOSE_COMBAT,
                MOVE_AQUA_JET,
                MOVE_BULK_UP,
            },
            },
            {
#line 3153
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3153
            .heldItem = ITEM_FLYING_GEM,
#line 3159
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 3161
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3154
            .ability = ABILITY_DRIZZLE,
#line 3155
            .lvl = 86,
#line 3156
            .ball = BALL_MASTER,
#line 3158
            .friendship = 1,
#line 3160
            .nature = NATURE_TIMID,
#line 3157
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3162
                MOVE_HURRICANE,
                MOVE_WEATHER_BALL,
                MOVE_TAILWIND,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3167
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3167
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3173
            .ev = TRAINER_PARTY_EVS(252, 112, 60, 24, 0, 60),
#line 3175
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3168
            .ability = ABILITY_DRY_SKIN,
#line 3169
            .lvl = 87,
#line 3170
            .ball = BALL_MASTER,
#line 3172
            .friendship = 1,
#line 3174
            .nature = NATURE_ADAMANT,
#line 3171
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3175
                MOVE_CLOSE_COMBAT,
                MOVE_POISON_JAB,
                MOVE_BULK_UP,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 3180
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3180
            .heldItem = ITEM_FIGHTINIUM_Z,
#line 3186
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 3188
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3181
            .ability = ABILITY_TECHNICIAN,
#line 3182
            .lvl = 86,
#line 3183
            .ball = BALL_MASTER,
#line 3185
            .friendship = 1,
#line 3187
            .nature = NATURE_ADAMANT,
#line 3184
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3188
                MOVE_BULLET_PUNCH,
                MOVE_BUG_BITE,
                MOVE_AERIAL_ACE,
                MOVE_CLOSE_COMBAT,
            },
            },
            {
#line 3193
            .species = SPECIES_PAWMOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3193
            .heldItem = ITEM_LIFE_ORB,
#line 3199
            .ev = TRAINER_PARTY_EVS(16, 240, 0, 252, 0, 0),
#line 3201
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3194
            .ability = ABILITY_IRON_FIST,
#line 3195
            .lvl = 87,
#line 3196
            .ball = BALL_MASTER,
#line 3198
            .friendship = 1,
#line 3200
            .nature = NATURE_JOLLY,
#line 3197
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3201
                MOVE_THUNDER_PUNCH,
                MOVE_CLOSE_COMBAT,
                MOVE_MACH_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3206
            .species = SPECIES_URSHIFU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3206
            .heldItem = ITEM_FOCUS_SASH,
#line 3212
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3214
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3207
            .ability = ABILITY_UNSEEN_FIST,
#line 3208
            .lvl = 88,
#line 3209
            .ball = BALL_MASTER,
#line 3211
            .friendship = 1,
#line 3213
            .nature = NATURE_JOLLY,
#line 3210
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3214
                MOVE_WICKED_BLOW,
                MOVE_CLOSE_COMBAT,
                MOVE_SUCKER_PUNCH,
                MOVE_POISON_JAB,
            },
            },
        },
    },
#line 3219
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_QIU] =
    {
#line 3220
        .trainerName = _("Melissa"),
#line 3221
        .trainerPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
#line 3223
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3222
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3225
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3227
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3226
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3228
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3230
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3229
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3231
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3233
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3232
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3234
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_CRESALTA] =
    {
#line 3235
        .trainerName = _("Melissa"),
#line 3236
        .trainerPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
#line 3238
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3237
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3240
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3242
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3241
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3243
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3245
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3244
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3246
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3248
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3247
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3249
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3251
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3250
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3252
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_HALAI] =
    {
#line 3253
        .trainerName = _("Melissa"),
#line 3254
        .trainerPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
#line 3256
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3255
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3258
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3260
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3259
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3261
            .species = SPECIES_FARIGIRAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3263
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3262
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3264
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3266
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3265
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3267
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3269
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3268
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3270
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_REMATCH] =
    {
#line 3271
        .trainerName = _("Melissa"),
#line 3272
        .trainerPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
#line 3274
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3273
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_PIKE_QUEEN_LUCY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3276
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3278
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3277
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3279
            .species = SPECIES_FARIGIRAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3281
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3280
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3282
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3284
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3283
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3285
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3287
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3286
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3288
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3290
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3289
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3291
            .species = SPECIES_SCRAFTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3293
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3292
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3294
    [DIFFICULTY_NORMAL][TRAINER_MONTY] =
    {
#line 3295
        .trainerName = _("Monty"),
#line 3296
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3297
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3299
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3299
            .heldItem = ITEM_PUNCHING_GLOVE,
#line 3300
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3301
            .lvl = 20,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3302
                MOVE_UPPER_HAND,
                MOVE_FOCUS_PUNCH,
                MOVE_MACH_PUNCH,
            },
            },
        },
    },
#line 3306
    [DIFFICULTY_NORMAL][TRAINER_OLIVER] =
    {
#line 3307
        .trainerName = _("Oliver"),
#line 3308
        .trainerPic = TRAINER_PIC_FRONT_EXPERT_M,
#line 3310
        .isNative = TRUE,
#line 3309
        .characterRevealId = REVEAL_OLIVER,
#line 3311
        .objectEventGraphicsId = OBJ_EVENT_GFX_PROF_BIRCH,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_EXPERT_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3313
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3315
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3314
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3316
    [DIFFICULTY_NORMAL][TRAINER_00317DFA] =
    {
#line 3317
        .trainerName = _("00317DFA"),
#line 3318
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3321
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3319
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3322
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3320
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3324
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3327
            .ev = TRAINER_PARTY_EVS(0, 0, 156, 0, 0, 0),
#line 3329
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3325
            .ability = ABILITY_FRIEND_GUARD,
#line 3326
            .lvl = 19,
            .ball = POKEBALL_COUNT,
#line 3328
            .nature = NATURE_LAX,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3330
                MOVE_HELPING_HAND,
                MOVE_LIGHT_SCREEN,
                MOVE_ICY_WIND,
            },
            },
            {
#line 3334
            .species = SPECIES_SMOLIV,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3334
            .heldItem = ITEM_ORAN_BERRY,
#line 3337
            .ev = TRAINER_PARTY_EVS(144, 12, 0, 0, 0, 0),
#line 3339
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3335
            .ability = ABILITY_HARVEST,
#line 3336
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3338
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3340
                MOVE_LEECH_SEED,
                MOVE_CHARM,
                MOVE_RAZOR_LEAF,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 3345
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3348
            .ev = TRAINER_PARTY_EVS(0, 84, 0, 64, 0, 0),
#line 3350
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3346
            .ability = ABILITY_HUSTLE,
#line 3347
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3349
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3351
                MOVE_QUICK_ATTACK,
                MOVE_AIR_CUTTER,
                MOVE_POUNCE,
                MOVE_REVERSAL,
            },
            },
        },
    },
#line 3356
    [DIFFICULTY_NORMAL][TRAINER_0049EFE8] =
    {
#line 3357
        .trainerName = _("0049EFE8"),
#line 3358
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3359
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3361
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3360
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3363
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3363
            .heldItem = ITEM_CHARCOAL,
#line 3365
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 44, 56, 0),
#line 3367
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3364
            .ability = ABILITY_DROUGHT,
#line 3368
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3366
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3369
                MOVE_FIRE_SPIN,
                MOVE_FLAME_CHARGE,
                MOVE_WEATHER_BALL,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3374
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3374
            .heldItem = ITEM_PASSHO_BERRY,
#line 3376
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 100, 0, 0),
#line 3378
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3375
            .ability = ABILITY_FLAME_BODY,
#line 3379
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3377
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3380
                MOVE_BUG_BITE,
                MOVE_FLAME_WHEEL,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 3384
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3387
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3385
            .ability = ABILITY_FLAME_BODY,
#line 3388
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3386
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3389
                MOVE_WILL_O_WISP,
                MOVE_HEX,
                MOVE_FIRE_SPIN,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 3394
    [DIFFICULTY_NORMAL][TRAINER_023957DE] =
    {
#line 3395
        .trainerName = _("023957DE"),
#line 3396
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3397
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3399
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3398
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3401
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3401
            .heldItem = ITEM_ORAN_BERRY,
#line 3404
            .ev = TRAINER_PARTY_EVS(72, 0, 40, 0, 0, 40),
#line 3406
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3402
            .ability = ABILITY_SHED_SKIN,
#line 3403
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3405
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3407
                MOVE_THUNDER_WAVE,
                MOVE_DRAGON_TAIL,
                MOVE_SUPERSONIC,
                MOVE_SLAM,
            },
            },
            {
#line 3412
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3415
            .ev = TRAINER_PARTY_EVS(0, 148, 4, 0, 0, 0),
#line 3417
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3413
            .ability = ABILITY_HUSTLE,
#line 3414
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3416
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3418
                MOVE_BITE,
                MOVE_HEADBUTT,
                MOVE_DRAGON_TAIL,
            },
            },
            {
#line 3422
            .species = SPECIES_ZWEILOUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3425
            .ev = TRAINER_PARTY_EVS(0, 148, 0, 0, 0, 4),
#line 3427
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3423
            .ability = ABILITY_HUSTLE,
#line 3424
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3426
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3428
                MOVE_BITE,
                MOVE_FIRE_FANG,
                MOVE_THUNDER_FANG,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 3433
    [DIFFICULTY_NORMAL][TRAINER_006E7EFD] =
    {
#line 3434
        .trainerName = _("006E7EFD"),
#line 3435
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3436
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3438
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3437
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3440
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3443
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 100, 0, 0),
#line 3445
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3441
            .ability = ABILITY_INNER_FOCUS,
#line 3442
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3444
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3446
                MOVE_BATON_PASS,
                MOVE_SWORDS_DANCE,
                MOVE_VACUUM_WAVE,
                MOVE_METRONOME,
            },
            },
            {
#line 3451
            .species = SPECIES_PAWMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3454
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 100, 0, 0),
#line 3456
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3452
            .ability = ABILITY_IRON_FIST,
#line 3453
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3455
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3457
                MOVE_BATON_PASS,
                MOVE_MACH_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_AGILITY,
            },
            },
            {
#line 3462
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3462
            .heldItem = ITEM_FOCUS_SASH,
#line 3465
            .ev = TRAINER_PARTY_EVS(72, 0, 36, 0, 0, 36),
#line 3467
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3463
            .ability = ABILITY_RECKLESS,
#line 3464
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3466
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3468
                MOVE_HIGH_JUMP_KICK,
                MOVE_DETECT,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
        },
    },
#line 3473
    [DIFFICULTY_NORMAL][TRAINER_007F06A5] =
    {
#line 3474
        .trainerName = _("007F06A5"),
#line 3475
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3476
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3478
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3477
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3480
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3480
            .heldItem = ITEM_SITRUS_BERRY,
#line 3483
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3481
            .ability = ABILITY_TORRENT,
#line 3482
            .lvl = 20,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3484
                MOVE_MIRROR_COAT,
                MOVE_MUDDY_WATER,
                MOVE_COUNTER,
            },
            },
            {
#line 3488
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3491
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3489
            .ability = ABILITY_OWN_TEMPO,
#line 3490
            .lvl = 24,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3492
                MOVE_LIGHT_SCREEN,
                MOVE_RAIN_DANCE,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 3496
            .species = SPECIES_ARROKUDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3496
            .heldItem = ITEM_METRONOME,
#line 3499
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3497
            .ability = ABILITY_PROPELLER_TAIL,
#line 3498
            .lvl = 24,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3499
                MOVE_AQUA_JET,
            },
            },
        },
    },
#line 3501
    [DIFFICULTY_NORMAL][TRAINER_01103D48] =
    {
#line 3502
        .trainerName = _("01103D48"),
#line 3503
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3507
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3504
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3506
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3505
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3509
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3512
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 144, 0),
#line 3514
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3510
            .ability = ABILITY_PICKUP,
#line 3511
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 3513
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3515
                MOVE_FOLLOW_ME,
                MOVE_CHARGE_BEAM,
                MOVE_THIEF,
                MOVE_MUD_SHOT,
            },
            },
            {
#line 3520
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3520
            .heldItem = ITEM_ORAN_BERRY,
#line 3523
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 64, 80, 0),
#line 3525
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3521
            .ability = ABILITY_WIND_POWER,
#line 3522
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3524
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3526
                MOVE_TAILWIND,
                MOVE_ROOST,
                MOVE_PLUCK,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 3531
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3531
            .heldItem = ITEM_MAGNET,
#line 3534
            .ev = TRAINER_PARTY_EVS(44, 56, 0, 44, 0, 0),
#line 3535
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3532
            .ability = ABILITY_INTIMIDATE,
#line 3533
            .lvl = 21,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3536
                MOVE_BITE,
                MOVE_CHARGE,
                MOVE_SPARK,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 3541
    [DIFFICULTY_NORMAL][TRAINER_0272920D] =
    {
#line 3542
        .trainerName = _("0272920D"),
#line 3543
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3544
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3546
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3545
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3548
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3548
            .heldItem = ITEM_ROCKY_HELMET,
#line 3551
            .ev = TRAINER_PARTY_EVS(0, 116, 0, 28, 0, 0),
#line 3553
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3549
            .ability = ABILITY_ROUGH_SKIN,
#line 3550
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3552
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3554
                MOVE_AQUA_JET,
                MOVE_BITE,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 3558
            .species = SPECIES_THIEVUL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3561
            .ev = TRAINER_PARTY_EVS(36, 0, 32, 24, 32, 24),
#line 3563
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3559
            .ability = ABILITY_UNBURDEN,
#line 3560
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 3562
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3564
                MOVE_NASTY_PLOT,
                MOVE_SNARL,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3568
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3568
            .heldItem = ITEM_MENTAL_HERB,
#line 3571
            .ev = TRAINER_PARTY_EVS(56, 0, 56, 0, 0, 40),
#line 3573
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3569
            .ability = ABILITY_PRANKSTER,
#line 3570
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3572
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3574
                MOVE_HAZE,
                MOVE_WING_ATTACK,
                MOVE_TAUNT,
                MOVE_THIEF,
            },
            },
        },
    },
#line 3579
    [DIFFICULTY_NORMAL][TRAINER_022A53A0] =
    {
#line 3580
        .trainerName = _("022A53A0"),
#line 3581
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3585
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3582
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3584
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3583
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3587
            .species = SPECIES_KRICKETUNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3587
            .heldItem = ITEM_FOCUS_BAND,
#line 3590
            .ev = TRAINER_PARTY_EVS(28, 24, 36, 44, 0, 24),
#line 3592
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3588
            .ability = ABILITY_SWARM,
#line 3589
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3591
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3593
                MOVE_SING,
                MOVE_STICKY_WEB,
                MOVE_LEECH_LIFE,
            },
            },
            {
#line 3597
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3597
            .heldItem = ITEM_FOCUS_BAND,
#line 3600
            .ev = TRAINER_PARTY_EVS(68, 20, 68, 0, 0, 0),
#line 3602
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3598
            .ability = ABILITY_SWARM,
#line 3599
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 3601
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3603
                MOVE_RAZOR_LEAF,
                MOVE_STRUGGLE_BUG,
                MOVE_ELECTROWEB,
            },
            },
            {
#line 3607
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3607
            .heldItem = ITEM_SILVER_POWDER,
#line 3610
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 152, 0, 0),
#line 3612
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3608
            .ability = ABILITY_SWARM,
#line 3609
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3611
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3613
                MOVE_NIGHT_SHADE,
                MOVE_FELL_STINGER,
                MOVE_BUG_BITE,
            },
            },
        },
    },
#line 3619
    [DIFFICULTY_NORMAL][TRAINER_012ED80D] =
    {
#line 3620
        .trainerName = _("012ED80D"),
#line 3621
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3622
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3624
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3623
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3626
            .species = SPECIES_MUDBRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3629
            .ev = TRAINER_PARTY_EVS(0, 24, 128, 0, 0, 0),
#line 3631
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3627
            .ability = ABILITY_STAMINA,
#line 3628
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3630
            .nature = NATURE_LAX,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3632
                MOVE_STRENGTH,
                MOVE_COUNTER,
                MOVE_BULLDOZE,
                MOVE_DOUBLE_KICK,
            },
            },
            {
#line 3637
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3640
            .ev = TRAINER_PARTY_EVS(0, 136, 0, 0, 0, 0),
#line 3642
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3638
            .ability = ABILITY_SAND_FORCE,
#line 3639
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3641
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3643
                MOVE_SANDSTORM,
                MOVE_METAL_CLAW,
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3648
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3651
            .ev = TRAINER_PARTY_EVS(0, 76, 0, 0, 72, 0),
#line 3653
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3649
            .ability = ABILITY_SIMPLE,
#line 3650
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3652
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3654
                MOVE_INCINERATE,
                MOVE_BULLDOZE,
                MOVE_FOCUS_ENERGY,
            },
            },
        },
    },
#line 3658
    [DIFFICULTY_NORMAL][TRAINER_01E6E96E] =
    {
#line 3659
        .trainerName = _("01E6E96E"),
#line 3660
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3664
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3661
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3663
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3662
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3666
            .species = SPECIES_MINIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3666
            .heldItem = ITEM_POWER_HERB,
#line 3669
            .ev = TRAINER_PARTY_EVS(0, 92, 0, 0, 56, 0),
#line 3671
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3667
            .ability = ABILITY_SHIELDS_DOWN,
#line 3668
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3670
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3672
                MOVE_METEOR_BEAM,
                MOVE_ROLLOUT,
                MOVE_ACROBATICS,
                MOVE_U_TURN,
            },
            },
            {
#line 3677
            .species = SPECIES_VIVILLON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3677
            .heldItem = ITEM_MENTAL_HERB,
#line 3680
            .ev = TRAINER_PARTY_EVS(80, 0, 0, 68, 0, 0),
#line 3682
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3678
            .ability = ABILITY_FRIEND_GUARD,
#line 3679
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3681
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3683
                MOVE_SWIFT,
                MOVE_U_TURN,
                MOVE_STUN_SPORE,
                MOVE_TAILWIND,
            },
            },
            {
#line 3688
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3688
            .heldItem = ITEM_SILK_SCARF,
#line 3691
            .ev = TRAINER_PARTY_EVS(0, 148, 0, 0, 0, 0),
#line 3693
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3689
            .ability = ABILITY_SCRAPPY,
#line 3690
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3692
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3694
                MOVE_RAGE,
                MOVE_RETURN,
                MOVE_AERIAL_ACE,
                MOVE_U_TURN,
            },
            },
        },
    },
#line 3699
    [DIFFICULTY_NORMAL][TRAINER_0092D526] =
    {
#line 3700
        .trainerName = _("0092D526"),
#line 3701
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3705
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3702
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3704
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3703
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3707
            .species = SPECIES_BOUNSWEET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3710
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 60, 96, 0),
#line 3712
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3708
            .ability = ABILITY_LEAF_GUARD,
#line 3709
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3711
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3713
                MOVE_MAGICAL_LEAF,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 3716
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3716
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3719
            .ev = TRAINER_PARTY_EVS(0, 0, 84, 0, 0, 64),
#line 3720
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3717
            .ability = ABILITY_EFFECT_SPORE,
#line 3718
            .lvl = 20,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3721
                MOVE_RAGE_POWDER,
                MOVE_POISON_POWDER,
                MOVE_VENOSHOCK,
                MOVE_STUN_SPORE,
            },
            },
            {
#line 3726
            .species = SPECIES_CAPSAKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3729
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 156, 0),
#line 3731
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3727
            .ability = ABILITY_CHLOROPHYLL,
#line 3728
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3730
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3732
                MOVE_MAGICAL_LEAF,
                MOVE_GROWTH,
                MOVE_INGRAIN,
            },
            },
        },
    },
#line 3736
    [DIFFICULTY_NORMAL][TRAINER_00C593A8] =
    {
#line 3737
        .trainerName = _("00C593A8"),
#line 3738
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3742
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3739
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3741
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3740
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3744
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3744
            .heldItem = ITEM_WACAN_BERRY,
#line 3747
            .ev = TRAINER_PARTY_EVS(64, 84, 0, 0, 0, 0),
#line 3749
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3745
            .ability = ABILITY_ICE_BODY,
#line 3746
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3748
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3750
                MOVE_ROLLOUT,
                MOVE_SNOWSCAPE,
                MOVE_ICE_BALL,
            },
            },
            {
#line 3754
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3754
            .heldItem = ITEM_METRONOME,
#line 3757
            .ev = TRAINER_PARTY_EVS(44, 100, 0, 0, 0, 0),
#line 3759
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3755
            .ability = ABILITY_ICE_BODY,
#line 3756
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 3758
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3760
                MOVE_SNOWSCAPE,
                MOVE_ROLLOUT,
                MOVE_ICE_BALL,
            },
            },
            {
#line 3764
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3767
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 0, 104, 0),
#line 3769
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3765
            .ability = ABILITY_OBLIVIOUS,
#line 3766
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 3768
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3770
                MOVE_PSYCHIC_NOISE,
                MOVE_CONFUSION,
                MOVE_ICY_WIND,
            },
            },
        },
    },
#line 3774
    [DIFFICULTY_NORMAL][TRAINER_01E7C79B] =
    {
#line 3775
        .trainerName = _("01E7C79B"),
#line 3776
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3777
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3779
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3778
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3781
            .species = SPECIES_DOTTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3784
            .ev = TRAINER_PARTY_EVS(0, 0, 88, 0, 0, 64),
#line 3786
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3782
            .ability = ABILITY_SWARM,
#line 3783
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3785
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3787
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_CONFUSION,
                MOVE_STRUGGLE_BUG,
            },
            },
            {
#line 3792
            .species = SPECIES_HATENNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3792
            .heldItem = ITEM_TWISTED_SPOON,
#line 3795
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 88, 56, 0),
#line 3797
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3793
            .ability = ABILITY_ANTICIPATION,
#line 3794
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 3796
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3798
                MOVE_PSYBEAM,
                MOVE_DISARMING_VOICE,
                MOVE_NUZZLE,
            },
            },
            {
#line 3802
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3805
            .ev = TRAINER_PARTY_EVS(0, 92, 40, 0, 0, 24),
#line 3807
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3803
            .ability = ABILITY_PURE_POWER,
#line 3804
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 3806
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3808
                MOVE_ZEN_HEADBUTT,
                MOVE_FORCE_PALM,
                MOVE_WORK_UP,
            },
            },
        },
    },
#line 3812
    [DIFFICULTY_NORMAL][TRAINER_01C7AF3F] =
    {
#line 3813
        .trainerName = _("01C7AF3F"),
#line 3814
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3818
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3815
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3817
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3816
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3820
            .nickname = COMPOUND_STRING("Flabebe"),
#line 3820
            .species = SPECIES_FLABEBE_YELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3820
            .heldItem = ITEM_ORAN_BERRY,
#line 3823
            .ev = TRAINER_PARTY_EVS(0, 0, 52, 0, 0, 96),
#line 3825
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 3821
            .ability = ABILITY_SYMBIOSIS,
#line 3822
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 3824
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3826
                MOVE_TEARFUL_LOOK,
                MOVE_DISARMING_VOICE,
                MOVE_MAGICAL_LEAF,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 3831
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3834
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 36, 116, 0),
#line 3836
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3832
            .ability = ABILITY_TRACE,
#line 3833
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3835
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3837
                MOVE_DISARMING_VOICE,
                MOVE_PSYBEAM,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 3841
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3841
            .heldItem = ITEM_SITRUS_BERRY,
#line 3844
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 88, 64, 0),
#line 3846
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3842
            .ability = ABILITY_TRACE,
#line 3843
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3845
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3847
                MOVE_DISARMING_VOICE,
                MOVE_PSYBEAM,
                MOVE_LIFE_DEW,
            },
            },
        },
    },
#line 3853
    [DIFFICULTY_NORMAL][TRAINER_02EEB783] =
    {
#line 3854
        .trainerName = _("02EEB783"),
#line 3855
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3859
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3856
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3858
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3857
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3861
            .species = SPECIES_YAMASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3864
            .ev = TRAINER_PARTY_EVS(80, 0, 0, 0, 76, 0),
#line 3866
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3862
            .ability = ABILITY_MUMMY,
#line 3863
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 3865
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3867
                MOVE_WILL_O_WISP,
                MOVE_PROTECT,
                MOVE_HEX,
            },
            },
            {
#line 3871
            .species = SPECIES_HONEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3871
            .heldItem = ITEM_OCCA_BERRY,
#line 3874
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 144),
#line 3876
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3872
            .ability = ABILITY_NO_GUARD,
#line 3873
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3875
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3877
                MOVE_AERIAL_ACE,
                MOVE_SHADOW_SNEAK,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 3881
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3884
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 96, 48),
#line 3886
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3882
            .ability = ABILITY_LEVITATE,
#line 3883
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3885
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3887
                MOVE_CHARGE,
                MOVE_THUNDER_SHOCK,
                MOVE_ASTONISH,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 3892
    [DIFFICULTY_NORMAL][TRAINER_026E91A6] =
    {
#line 3893
        .trainerName = _("026E91A6"),
#line 3894
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3898
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3895
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3897
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3896
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3900
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3900
            .heldItem = ITEM_SITRUS_BERRY,
#line 3903
            .ev = TRAINER_PARTY_EVS(0, 0, 144, 0, 0, 0),
#line 3905
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3901
            .ability = ABILITY_ROCK_HEAD,
#line 3902
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 3904
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3906
                MOVE_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_ROCK_TOMB,
                MOVE_ROAR,
            },
            },
            {
#line 3911
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3911
            .heldItem = ITEM_GANLON_BERRY,
#line 3914
            .ev = TRAINER_PARTY_EVS(0, 0, 4, 0, 104, 48),
#line 3916
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 3912
            .ability = ABILITY_CLEAR_BODY,
#line 3913
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 3915
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3917
                MOVE_METAL_SOUND,
                MOVE_CHARGE_BEAM,
                MOVE_SANDSTORM,
            },
            },
            {
#line 3921
            .species = SPECIES_VAROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3924
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 152, 0),
#line 3926
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3922
            .ability = ABILITY_OVERCOAT,
#line 3923
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3925
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3927
                MOVE_SLUDGE,
                MOVE_GYRO_BALL,
                MOVE_HEADBUTT,
                MOVE_LICK,
            },
            },
        },
    },
#line 3932
    [DIFFICULTY_NORMAL][TRAINER_029E0EF0] =
    {
#line 3933
        .trainerName = _("029E0EF0"),
#line 3934
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3935
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3937
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3936
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3939
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3942
            .ev = TRAINER_PARTY_EVS(0, 96, 16, 0, 0, 32),
#line 3944
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3940
            .ability = ABILITY_POISON_POINT,
#line 3941
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3943
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3945
                MOVE_TOXIC_SPIKES,
                MOVE_DIG,
                MOVE_POISON_STING,
                MOVE_TRAILBLAZE,
            },
            },
            {
#line 3950
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3953
            .ev = TRAINER_PARTY_EVS(24, 0, 0, 0, 120, 0),
#line 3955
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3951
            .ability = ABILITY_CLEAR_BODY,
#line 3952
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 3954
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3956
                MOVE_BUBBLE_BEAM,
                MOVE_ACID_SPRAY,
                MOVE_TOXIC,
            },
            },
            {
#line 3960
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3960
            .heldItem = ITEM_SITRUS_BERRY,
#line 3963
            .ev = TRAINER_PARTY_EVS(80, 72, 0, 0, 0, 0),
#line 3965
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3961
            .ability = ABILITY_GLUTTONY,
#line 3962
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 3964
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3966
                MOVE_AMNESIA,
                MOVE_ACID_ARMOR,
                MOVE_ENCORE,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
#line 3971
    [DIFFICULTY_NORMAL][TRAINER_00E46F7D] =
    {
#line 3972
        .trainerName = _("00E46F7D"),
#line 3973
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 3977
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3974
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3976
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3975
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3979
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3982
            .ev = TRAINER_PARTY_EVS(12, 92, 32, 0, 0, 12),
#line 3984
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3980
            .ability = ABILITY_SHED_SKIN,
#line 3981
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 3983
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3985
                MOVE_STOMPING_TANTRUM,
                MOVE_ROCK_SLIDE,
                MOVE_PAYBACK,
            },
            },
            {
#line 3989
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3992
            .ev = TRAINER_PARTY_EVS(0, 36, 0, 112, 0, 0),
#line 3994
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3990
            .ability = ABILITY_WEAK_ARMOR,
#line 3991
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 3993
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3995
                MOVE_AQUA_JET,
                MOVE_ABSORB,
                MOVE_ROCK_TOMB,
                MOVE_PROTECT,
            },
            },
            {
#line 4000
            .species = SPECIES_TYRUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4000
            .heldItem = ITEM_HARD_STONE,
#line 4003
            .ev = TRAINER_PARTY_EVS(0, 72, 80, 0, 0, 0),
#line 4005
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4001
            .ability = ABILITY_STURDY,
#line 4002
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4004
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4006
                MOVE_DRAGON_TAIL,
                MOVE_BITE,
                MOVE_ANCIENT_POWER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 4011
    [DIFFICULTY_NORMAL][TRAINER_032E8AC9] =
    {
#line 4012
        .trainerName = _("032E8AC9"),
#line 4013
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4014
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4016
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4015
        .mapSec = MAPSEC_MERMEREZA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4018
            .species = SPECIES_SHROODLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4018
            .heldItem = ITEM_BIG_NUGGET,
#line 4021
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 128, 0, 0),
#line 4023
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4019
            .ability = ABILITY_UNBURDEN,
#line 4020
            .lvl = 21,
            .ball = POKEBALL_COUNT,
#line 4022
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4024
                MOVE_FLING,
                MOVE_ACROBATICS,
                MOVE_BATON_PASS,
            },
            },
            {
#line 4028
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4028
            .heldItem = ITEM_ASPEAR_BERRY,
#line 4031
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 136, 0, 0),
#line 4033
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4029
            .ability = ABILITY_FLASH_FIRE,
#line 4030
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4032
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4034
                MOVE_TRICK,
                MOVE_POLTERGEIST,
                MOVE_BITTER_BLADE,
                MOVE_DESTINY_BOND,
            },
            },
        },
    },
#line 4039
    [DIFFICULTY_NORMAL][TRAINER_0389363C] =
    {
#line 4040
        .trainerName = _("0389363C"),
#line 4041
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4043
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4042
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_WEIGH_ABILITY_PREDICTION | AI_FLAG_PREDICT_SWITCH | AI_FLAG_PREDICT_INCOMING_MON | AI_FLAG_PP_STALL_PREVENTION | AI_FLAG_PREDICT_MOVE,
#line 4045
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4044
        .mapSec = MAPSEC_MERMEREZA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4047
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4047
            .heldItem = ITEM_FIGY_BERRY,
#line 4050
            .ev = TRAINER_PARTY_EVS(0, 132, 0, 0, 0, 0),
#line 4052
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4048
            .ability = ABILITY_GLUTTONY,
#line 4049
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 4051
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4053
                MOVE_BELLY_DRUM,
                MOVE_SNORE,
                MOVE_REST,
                MOVE_SLASH,
            },
            },
        },
    },
#line 4058
    [DIFFICULTY_NORMAL][TRAINER_040CEA33] =
    {
#line 4059
        .trainerName = _("040CEA33"),
#line 4060
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4062
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_WEIGH_ABILITY_PREDICTION | AI_FLAG_PREDICT_SWITCH | AI_FLAG_PREDICT_INCOMING_MON | AI_FLAG_PP_STALL_PREVENTION | AI_FLAG_PREDICT_MOVE,
#line 4061
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4063
        .mapSec = MAPSEC_MERMEREZA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4065
            .species = SPECIES_PALPITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4065
            .heldItem = ITEM_RINDO_BERRY,
#line 4068
            .ev = TRAINER_PARTY_EVS(0, 0, 96, 0, 0, 28),
#line 4070
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4066
            .ability = ABILITY_SWIFT_SWIM,
#line 4067
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4069
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4071
                MOVE_RAIN_DANCE,
                MOVE_MUD_SHOT,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 4075
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4075
            .heldItem = ITEM_CHOPLE_BERRY,
#line 4078
            .ev = TRAINER_PARTY_EVS(0, 0, 68, 0, 0, 56),
#line 4080
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4076
            .ability = ABILITY_STENCH,
#line 4077
            .lvl = 20,
            .ball = POKEBALL_COUNT,
#line 4079
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4081
                MOVE_TOXIC_SPIKES,
                MOVE_VENOSHOCK,
                MOVE_BODY_SLAM,
            },
            },
        },
    },
#line 4085
    [DIFFICULTY_NORMAL][TRAINER_031A849F] =
    {
#line 4086
        .trainerName = _("031A849F"),
#line 4087
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4091
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4088
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4090
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4089
        .mapSec = MAPSEC_TORA_TOWN,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4093
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4093
            .heldItem = ITEM_TWISTED_SPOON,
#line 4096
            .ev = TRAINER_PARTY_EVS(0, 64, 0, 0, 64, 0),
#line 4098
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4094
            .ability = ABILITY_PRANKSTER,
#line 4095
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4097
            .nature = NATURE_DOCILE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4099
                MOVE_TAILWIND,
                MOVE_DUAL_WINGBEAT,
                MOVE_HEAT_WAVE,
            },
            },
            {
#line 4103
            .species = SPECIES_INKAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4103
            .heldItem = ITEM_ROSELI_BERRY,
#line 4106
            .ev = TRAINER_PARTY_EVS(0, 64, 0, 0, 64, 0),
#line 4108
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4104
            .ability = ABILITY_CONTRARY,
#line 4105
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4107
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4109
                MOVE_PSYBEAM,
                MOVE_ROCK_SLIDE,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 4113
            .species = SPECIES_LOKIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4113
            .heldItem = ITEM_CHOPLE_BERRY,
#line 4116
            .ev = TRAINER_PARTY_EVS(0, 128, 0, 0, 0, 0),
#line 4118
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4114
            .ability = ABILITY_TINTED_LENS,
#line 4115
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4117
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4119
                MOVE_AERIAL_ACE,
                MOVE_TRAILBLAZE,
            },
            },
        },
    },
#line 4122
    [DIFFICULTY_NORMAL][TRAINER_045FDD44] =
    {
#line 4123
        .trainerName = _("045FDD44"),
#line 4124
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4127
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4125
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4126
        .mapSec = MAPSEC_TORA_TOWN,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4129
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4129
            .heldItem = ITEM_SHUCA_BERRY,
#line 4132
            .ev = TRAINER_PARTY_EVS(0, 0, 84, 0, 0, 40),
#line 4134
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4130
            .ability = ABILITY_EFFECT_SPORE,
#line 4131
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4133
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4135
                MOVE_POISON_POWDER,
                MOVE_STUN_SPORE,
                MOVE_POLLEN_PUFF,
            },
            },
            {
#line 4139
            .species = SPECIES_VAROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4139
            .heldItem = ITEM_PAYAPA_BERRY,
#line 4142
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 4144
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4140
            .ability = ABILITY_OVERCOAT,
#line 4141
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4143
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4145
                MOVE_TOXIC_SPIKES,
                MOVE_TOXIC,
                MOVE_VENOSHOCK,
            },
            },
            {
#line 4149
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4149
            .heldItem = ITEM_SPELL_TAG,
#line 4152
            .ev = TRAINER_PARTY_EVS(0, 60, 52, 0, 0, 20),
#line 4154
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4150
            .ability = ABILITY_SWARM,
#line 4151
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4153
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4155
                MOVE_HEX,
                MOVE_LEECH_LIFE,
            },
            },
        },
    },
#line 4158
    [DIFFICULTY_NORMAL][TRAINER_041FD20E] =
    {
#line 4159
        .trainerName = _("041FD20E"),
#line 4160
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4163
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4161
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4162
        .mapSec = MAPSEC_TORA_TOWN,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4165
            .species = SPECIES_MAREANIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4165
            .heldItem = ITEM_MYSTIC_WATER,
#line 4168
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 136),
#line 4170
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4166
            .ability = ABILITY_LIMBER,
#line 4167
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4169
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4171
                MOVE_LIQUIDATION,
                MOVE_ICE_SPINNER,
            },
            },
            {
#line 4174
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4174
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 4177
            .ev = TRAINER_PARTY_EVS(0, 64, 0, 0, 64, 0),
#line 4179
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4175
            .ability = ABILITY_HUSTLE,
#line 4176
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4178
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4180
                MOVE_ICE_FANG,
                MOVE_DRAGON_BREATH,
            },
            },
        },
    },
#line 4183
    [DIFFICULTY_NORMAL][TRAINER_0465BF77] =
    {
#line 4184
        .trainerName = _("0465BF77"),
#line 4185
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4188
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4186
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4187
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4190
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4190
            .heldItem = ITEM_QUICK_CLAW,
#line 4193
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 132, 0, 0),
#line 4195
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4191
            .ability = ABILITY_LEVITATE,
#line 4192
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4194
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4196
                MOVE_TAUNT,
                MOVE_DESTINY_BOND,
                MOVE_SHADOW_SNEAK,
            },
            },
            {
#line 4200
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4203
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 132, 0, 0),
#line 4205
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4201
            .ability = ABILITY_SPEED_BOOST,
#line 4202
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4204
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4206
                MOVE_DESTINY_BOND,
                MOVE_TAUNT,
                MOVE_ASSURANCE,
                MOVE_PSYCHIC_FANGS,
            },
            },
        },
    },
#line 4211
    [DIFFICULTY_NORMAL][TRAINER_0467DF00] =
    {
#line 4212
        .trainerName = _("0467DF00"),
#line 4213
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4216
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4214
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4215
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4218
            .species = SPECIES_MILTANK,
#line 4218
            .gender = TRAINER_MON_FEMALE,
#line 4218
            .heldItem = ITEM_COVERT_CLOAK,
#line 4221
            .ev = TRAINER_PARTY_EVS(44, 0, 48, 0, 0, 40),
#line 4223
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4219
            .ability = ABILITY_THICK_FAT,
#line 4220
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4222
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4224
                MOVE_SANDSTORM,
                MOVE_ROLLOUT,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4228
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4228
            .heldItem = ITEM_BRIGHT_POWDER,
#line 4231
            .ev = TRAINER_PARTY_EVS(132, 0, 0, 0, 0, 0),
#line 4233
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4229
            .ability = ABILITY_SAND_VEIL,
#line 4230
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4232
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4234
                MOVE_FURY_CUTTER,
                MOVE_TOXIC,
                MOVE_KNOCK_OFF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 4239
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4239
            .heldItem = ITEM_SMOOTH_ROCK,
#line 4242
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 136),
#line 4244
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4240
            .ability = ABILITY_HEALER,
#line 4241
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4243
            .nature = NATURE_GENTLE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4245
                MOVE_SANDSTORM,
                MOVE_HEAL_PULSE,
                MOVE_HYPER_VOICE,
            },
            },
        },
    },
#line 4249
    [DIFFICULTY_NORMAL][TRAINER_04687C53] =
    {
#line 4250
        .trainerName = _("04687C53"),
#line 4251
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4254
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4252
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4255
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4253
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4257
            .species = SPECIES_SLIGGOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4257
            .heldItem = ITEM_ORAN_BERRY,
#line 4260
            .ev = TRAINER_PARTY_EVS(0, 0, 136, 0, 0, 0),
#line 4262
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4258
            .ability = ABILITY_GOOEY,
#line 4259
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4261
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4263
                MOVE_ACID_SPRAY,
                MOVE_CHILLING_WATER,
                MOVE_SKITTER_SMACK,
            },
            },
        },
    },
#line 4267
    [DIFFICULTY_NORMAL][TRAINER_048D5D99] =
    {
#line 4268
        .trainerName = _("048D5D99"),
#line 4269
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4272
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4270
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4273
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4271
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4275
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4275
            .heldItem = ITEM_SITRUS_BERRY,
#line 4278
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 132),
#line 4280
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4276
            .ability = ABILITY_STURDY,
#line 4277
            .lvl = 27,
            .ball = POKEBALL_COUNT,
#line 4279
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4281
                MOVE_METAL_BURST,
                MOVE_CURSE,
                MOVE_HARDEN,
            },
            },
            {
#line 4285
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4285
            .heldItem = ITEM_FOCUS_BAND,
#line 4288
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 132),
#line 4290
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4286
            .ability = ABILITY_STURDY,
#line 4287
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4289
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4291
                MOVE_METAL_BURST,
                MOVE_CURSE,
                MOVE_ENDEAVOR,
                MOVE_SANDSTORM,
            },
            },
        },
    },
#line 4296
    [DIFFICULTY_NORMAL][TRAINER_04A59E40] =
    {
#line 4297
        .trainerName = _("04A59E40"),
#line 4298
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4301
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4299
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4302
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4300
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4304
            .species = SPECIES_FLOETTE,
#line 4304
            .gender = TRAINER_MON_FEMALE,
#line 4304
            .heldItem = ITEM_LUM_BERRY,
#line 4307
            .ev = TRAINER_PARTY_EVS(32, 0, 104, 0, 0, 0),
#line 4309
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4305
            .ability = ABILITY_FLOWER_VEIL,
#line 4306
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4308
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4310
                MOVE_WISH,
                MOVE_BATON_PASS,
                MOVE_LIGHT_SCREEN,
                MOVE_MAGICAL_LEAF,
            },
            },
            {
#line 4315
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4315
            .heldItem = ITEM_MYSTIC_WATER,
#line 4318
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 88, 0, 0),
#line 4320
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4316
            .ability = ABILITY_SHELL_ARMOR,
#line 4317
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4319
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4321
                MOVE_BRICK_BREAK,
                MOVE_RAZOR_SHELL,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 4325
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4325
            .heldItem = ITEM_MYSTIC_WATER,
#line 4328
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 136, 0),
#line 4330
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4326
            .ability = ABILITY_REGENERATOR,
#line 4327
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4329
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4331
                MOVE_AVALANCHE,
                MOVE_PSYCHIC_NOISE,
                MOVE_MUDDY_WATER,
            },
            },
        },
    },
#line 4336
    [DIFFICULTY_NORMAL][TRAINER_04E334E9] =
    {
#line 4337
        .trainerName = _("04E334E9"),
#line 4338
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4341
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4339
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4342
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4340
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4344
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4344
            .heldItem = ITEM_ORAN_BERRY,
#line 4347
            .ev = TRAINER_PARTY_EVS(0, 136, 0, 0, 0, 0),
#line 4349
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4345
            .ability = ABILITY_MOODY,
#line 4346
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4348
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4350
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
                MOVE_ICY_WIND,
                MOVE_ROCK_BLAST,
            },
            },
            {
#line 4355
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4355
            .heldItem = ITEM_ORAN_BERRY,
#line 4358
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 136, 0),
#line 4360
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4356
            .ability = ABILITY_MOODY,
#line 4357
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4359
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4361
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
                MOVE_BULLET_SEED,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 4366
            .species = SPECIES_SCOVILLAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4366
            .heldItem = ITEM_ORAN_BERRY,
#line 4369
            .ev = TRAINER_PARTY_EVS(16, 32, 16, 24, 32, 16),
#line 4371
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4367
            .ability = ABILITY_MOODY,
#line 4368
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4370
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4372
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
                MOVE_MAGICAL_LEAF,
                MOVE_TEMPER_FLARE,
            },
            },
        },
    },
#line 4377
    [DIFFICULTY_NORMAL][TRAINER_05BDEABF] =
    {
#line 4378
        .trainerName = _("05BDEABF"),
#line 4379
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4382
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4380
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4383
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4381
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4385
            .species = SPECIES_CAPSAKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4385
            .heldItem = ITEM_SMOOTH_ROCK,
#line 4388
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4386
            .ability = ABILITY_INSOMNIA,
#line 4387
            .lvl = 23,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4389
                MOVE_SANDSTORM,
                MOVE_LEECH_SEED,
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
            },
            },
            {
#line 4394
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4394
            .heldItem = ITEM_SITRUS_BERRY,
#line 4397
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4395
            .ability = ABILITY_EFFECT_SPORE,
#line 4396
            .lvl = 21,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4398
                MOVE_POISON_POWDER,
                MOVE_POLLEN_PUFF,
                MOVE_PROTECT,
                MOVE_ABSORB,
            },
            },
            {
#line 4403
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4403
            .heldItem = ITEM_LEFTOVERS,
#line 4406
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4404
            .ability = ABILITY_IRON_FIST,
#line 4405
            .lvl = 25,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4407
                MOVE_SANDSTORM,
                MOVE_CURSE,
                MOVE_KNOCK_OFF,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 4412
    [DIFFICULTY_NORMAL][TRAINER_06400A0C] =
    {
#line 4413
        .trainerName = _("06400A0C"),
#line 4414
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4417
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4418
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4416
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4420
            .species = SPECIES_CHARJABUG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4420
            .heldItem = ITEM_EJECT_BUTTON,
#line 4423
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4421
            .ability = ABILITY_BATTERY,
#line 4422
            .lvl = 24,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4424
                MOVE_STICKY_WEB,
                MOVE_LIGHT_SCREEN,
                MOVE_ELECTROWEB,
                MOVE_BUG_BITE,
            },
            },
            {
#line 4429
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4429
            .heldItem = ITEM_CHERI_BERRY,
#line 4432
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4430
            .ability = ABILITY_FLAME_BODY,
#line 4431
            .lvl = 25,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4433
                MOVE_NIGHT_SHADE,
                MOVE_EMBER,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 4437
            .species = SPECIES_DOUBLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4440
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4438
            .ability = ABILITY_NO_GUARD,
#line 4439
            .lvl = 26,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4441
                MOVE_SHADOW_SNEAK,
                MOVE_SHADOW_CLAW,
                MOVE_BRUTAL_SWING,
            },
            },
        },
    },
#line 4445
    [DIFFICULTY_NORMAL][TRAINER_068B06CE] =
    {
#line 4446
        .trainerName = _("068B06CE"),
#line 4447
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4450
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4448
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4451
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4449
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4453
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4456
            .ev = TRAINER_PARTY_EVS(0, 56, 72, 0, 0, 0),
#line 4458
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4454
            .ability = ABILITY_NEUTRALIZING_GAS,
#line 4455
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4457
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4459
                MOVE_WILL_O_WISP,
                MOVE_SLUDGE,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 4463
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4463
            .heldItem = ITEM_WIDE_LENS,
#line 4466
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 136, 0, 0),
#line 4468
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4464
            .ability = ABILITY_FLASH_FIRE,
#line 4465
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4467
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4469
                MOVE_INFERNO,
                MOVE_BABY_DOLL_EYES,
                MOVE_DIG,
                MOVE_HEX,
            },
            },
            {
#line 4474
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4474
            .heldItem = ITEM_FLAME_ORB,
#line 4477
            .ev = TRAINER_PARTY_EVS(0, 28, 0, 0, 0, 108),
#line 4479
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4475
            .ability = ABILITY_QUICK_FEET,
#line 4476
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4478
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4480
                MOVE_FLING,
                MOVE_FACADE,
                MOVE_PROTECT,
            },
            },
            {
#line 4484
            .species = SPECIES_MAGBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4484
            .heldItem = ITEM_CHARCOAL,
#line 4487
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 48, 0, 0),
#line 4489
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4485
            .ability = ABILITY_FLAME_BODY,
#line 4486
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4488
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4490
                MOVE_WILL_O_WISP,
                MOVE_FLAME_WHEEL,
                MOVE_LOW_KICK,
            },
            },
        },
    },
#line 4495
    [DIFFICULTY_NORMAL][TRAINER_06BE2D1B] =
    {
#line 4496
        .trainerName = _("06BE2D1B"),
#line 4497
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4499
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4498
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4501
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4500
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4503
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4503
            .heldItem = ITEM_SCOPE_LENS,
#line 4506
            .ev = TRAINER_PARTY_EVS(0, 0, 72, 0, 0, 64),
#line 4508
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4504
            .ability = ABILITY_SUPER_LUCK,
#line 4505
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4507
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4509
                MOVE_ANCIENT_POWER,
                MOVE_PLAY_ROUGH,
                MOVE_POUNCE,
                MOVE_FOLLOW_ME,
            },
            },
            {
#line 4514
            .species = SPECIES_CUBCHOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4517
            .ev = TRAINER_PARTY_EVS(0, 92, 44, 0, 0, 0),
#line 4518
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4515
            .ability = ABILITY_RATTLED,
#line 4516
            .lvl = 22,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4519
                MOVE_FROST_BREATH,
                MOVE_DIG,
            },
            },
            {
#line 4522
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4522
            .heldItem = ITEM_SCOPE_LENS,
#line 4525
            .ev = TRAINER_PARTY_EVS(0, 92, 0, 36, 0, 0),
#line 4527
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4523
            .ability = ABILITY_SUPER_LUCK,
#line 4524
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4526
            .nature = NATURE_DOCILE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4528
                MOVE_TAILWIND,
                MOVE_AIR_CUTTER,
                MOVE_SNARL,
            },
            },
            {
#line 4532
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4532
            .heldItem = ITEM_SCOPE_LENS,
#line 4536
            .ev = TRAINER_PARTY_EVS(0, 136, 0, 0, 0, 0),
#line 4538
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4533
            .ability = ABILITY_SNIPER,
#line 4534
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4537
            .nature = NATURE_ADAMANT,
#line 4535
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4539
                MOVE_CROSS_POISON,
                MOVE_NIGHT_SLASH,
            },
            },
        },
    },
#line 4542
    [DIFFICULTY_NORMAL][TRAINER_06C68007] =
    {
#line 4543
        .trainerName = _("06C68007"),
#line 4544
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4546
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4545
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4548
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4547
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4550
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4550
            .heldItem = ITEM_FAIRY_FEATHER,
#line 4553
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 20, 104, 0),
#line 4555
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4551
            .ability = ABILITY_STATIC,
#line 4552
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4554
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4556
                MOVE_DISCHARGE,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 4559
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4559
            .heldItem = ITEM_EXPERT_BELT,
#line 4562
            .ev = TRAINER_PARTY_EVS(0, 96, 0, 0, 0, 32),
#line 4564
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4560
            .ability = ABILITY_OBLIVIOUS,
#line 4561
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4563
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4565
                MOVE_BULLDOZE,
                MOVE_ICY_WIND,
            },
            },
        },
    },
#line 4568
    [DIFFICULTY_NORMAL][TRAINER_06D2BD08] =
    {
#line 4569
        .trainerName = _("06D2BD08"),
#line 4570
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4573
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4571
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4574
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4572
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4576
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4576
            .heldItem = ITEM_MAGO_BERRY,
#line 4579
            .ev = TRAINER_PARTY_EVS(36, 0, 0, 0, 96, 0),
#line 4581
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4577
            .ability = ABILITY_TANGLED_FEET,
#line 4578
            .lvl = 27,
            .ball = POKEBALL_COUNT,
#line 4580
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4582
                MOVE_ICY_WIND,
                MOVE_PSYBEAM,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 4586
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4586
            .heldItem = ITEM_BLUNDER_POLICY,
#line 4589
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4587
            .ability = ABILITY_QUICK_FEET,
#line 4588
            .lvl = 25,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4590
                MOVE_ICY_WIND,
                MOVE_BODY_SLAM,
                MOVE_FURY_SWIPES,
            },
            },
            {
#line 4594
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4597
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4595
            .ability = ABILITY_DOWNLOAD,
#line 4596
            .lvl = 27,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4598
                MOVE_ICY_WIND,
                MOVE_TRI_ATTACK,
            },
            },
        },
    },
#line 4601
    [DIFFICULTY_NORMAL][TRAINER_070F6125] =
    {
#line 4602
        .trainerName = _("070F6125"),
#line 4603
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4606
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4604
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4607
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4605
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4609
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4609
            .heldItem = ITEM_SALAC_BERRY,
#line 4612
            .ev = TRAINER_PARTY_EVS(20, 116, 0, 0, 0, 0),
#line 4614
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4610
            .ability = ABILITY_INNER_FOCUS,
#line 4611
            .lvl = 27,
            .ball = POKEBALL_COUNT,
#line 4613
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4614
                MOVE_ENDURE,
                MOVE_REVERSAL,
                MOVE_ACROBATICS,
            },
            },
            {
#line 4618
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4618
            .heldItem = ITEM_BLACK_BELT,
#line 4621
            .ev = TRAINER_PARTY_EVS(0, 116, 0, 0, 0, 12),
#line 4623
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4619
            .ability = ABILITY_UNBURDEN,
#line 4620
            .lvl = 26,
            .ball = POKEBALL_COUNT,
#line 4622
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4623
                MOVE_ENDURE,
                MOVE_REVERSAL,
                MOVE_VACUUM_WAVE,
            },
            },
        },
    },
#line 4627
    [DIFFICULTY_NORMAL][TRAINER_07D063A5] =
    {
#line 4628
        .trainerName = _("07D063A5"),
#line 4629
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4632
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4630
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4633
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4631
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4635
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4638
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4640
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4636
            .ability = ABILITY_INTIMIDATE,
#line 4637
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4639
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4641
                MOVE_HELPING_HAND,
                MOVE_U_TURN,
            },
            },
            {
#line 4644
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4644
            .heldItem = ITEM_SHED_SHELL,
#line 4647
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4649
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4645
            .ability = ABILITY_INTIMIDATE,
#line 4646
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4648
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4650
                MOVE_HELPING_HAND,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 4653
            .species = SPECIES_SQUAWKABILLY_WHITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4653
            .heldItem = ITEM_RED_CARD,
#line 4656
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4658
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4654
            .ability = ABILITY_INTIMIDATE,
#line 4655
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4657
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4659
                MOVE_HELPING_HAND,
                MOVE_HEAT_WAVE,
            },
            },
            {
#line 4662
            .species = SPECIES_SQUAWKABILLY_YELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4662
            .heldItem = ITEM_EJECT_BUTTON,
#line 4665
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4667
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4663
            .ability = ABILITY_INTIMIDATE,
#line 4664
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4666
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4668
                MOVE_HELPING_HAND,
                MOVE_AERIAL_ACE,
            },
            },
        },
    },
#line 4671
    [DIFFICULTY_NORMAL][TRAINER_09AEC824] =
    {
#line 4672
        .trainerName = _("09AEC824"),
#line 4673
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4676
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4674
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4675
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4678
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4681
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 124, 0),
#line 4682
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4679
            .ability = ABILITY_INNER_FOCUS,
#line 4680
            .lvl = 26,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4683
                MOVE_THUNDER_WAVE,
                MOVE_NIGHT_SHADE,
                MOVE_CONFUSION,
            },
            },
            {
#line 4687
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4690
            .ev = TRAINER_PARTY_EVS(64, 0, 40, 0, 0, 24),
#line 4692
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4688
            .ability = ABILITY_VOLT_ABSORB,
#line 4689
            .lvl = 22,
            .ball = POKEBALL_COUNT,
#line 4691
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4693
                MOVE_BITE,
                MOVE_NUZZLE,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 4697
            .species = SPECIES_SNIVY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4700
            .ev = TRAINER_PARTY_EVS(0, 120, 0, 0, 0, 16),
#line 4702
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4698
            .ability = ABILITY_OVERGROW,
#line 4699
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4701
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4703
                MOVE_PETAL_BLIZZARD,
                MOVE_GLARE,
                MOVE_BULLET_SEED,
            },
            },
            {
#line 4707
            .species = SPECIES_SHIINOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4710
            .ev = TRAINER_PARTY_EVS(84, 0, 0, 0, 0, 44),
#line 4712
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4708
            .ability = ABILITY_EFFECT_SPORE,
#line 4709
            .lvl = 24,
            .ball = POKEBALL_COUNT,
#line 4711
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4713
                MOVE_STUN_SPORE,
                MOVE_REVIVAL_BLESSING,
                MOVE_DRAINING_KISS,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 4718
    [DIFFICULTY_NORMAL][TRAINER_09B7B6C8] =
    {
#line 4719
        .trainerName = _("09B7B6C8"),
#line 4720
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4723
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4721
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4724
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4722
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4726
            .species = SPECIES_MALAMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4726
            .heldItem = ITEM_SITRUS_BERRY,
#line 4729
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 128, 0, 0),
#line 4731
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4727
            .ability = ABILITY_CONTRARY,
#line 4728
            .lvl = 23,
            .ball = POKEBALL_COUNT,
#line 4730
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4732
                MOVE_SWAGGER,
                MOVE_LIGHT_SCREEN,
                MOVE_ACUPRESSURE,
            },
            },
            {
#line 4736
            .species = SPECIES_DITTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4736
            .heldItem = ITEM_CHOICE_SCARF,
#line 4739
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 0, 72, 0),
#line 4741
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4737
            .ability = ABILITY_IMPOSTER,
#line 4738
            .lvl = 29,
            .ball = POKEBALL_COUNT,
#line 4740
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4743
    [DIFFICULTY_NORMAL][TRAINER_0A542D33] =
    {
#line 4744
        .trainerName = _("0A542D33"),
#line 4745
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4748
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4746
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4747
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4750
            .species = SPECIES_CLEFFA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4750
            .heldItem = ITEM_MENTAL_HERB,
#line 4753
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 128, 0),
#line 4755
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4751
            .ability = ABILITY_CUTE_CHARM,
#line 4752
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4754
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4756
                MOVE_HELPING_HAND,
                MOVE_DAZZLING_GLEAM,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 4760
            .species = SPECIES_CLEFAIRY,
#line 4760
            .gender = TRAINER_MON_MALE,
#line 4760
            .heldItem = ITEM_MENTAL_HERB,
#line 4763
            .ev = TRAINER_PARTY_EVS(0, 0, 64, 0, 0, 64),
#line 4765
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4761
            .ability = ABILITY_CUTE_CHARM,
#line 4762
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4764
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4766
                MOVE_HELPING_HAND,
                MOVE_DAZZLING_GLEAM,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 4770
            .species = SPECIES_CLEFABLE,
#line 4770
            .gender = TRAINER_MON_FEMALE,
#line 4770
            .heldItem = ITEM_MENTAL_HERB,
#line 4773
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 128, 0),
#line 4775
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4771
            .ability = ABILITY_CUTE_CHARM,
#line 4772
            .lvl = 25,
            .ball = POKEBALL_COUNT,
#line 4774
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4776
                MOVE_HELPING_HAND,
                MOVE_DAZZLING_GLEAM,
                MOVE_LIGHT_SCREEN,
            },
            },
        },
    },
#line 4780
    [DIFFICULTY_NORMAL][TRAINER_0A8B9F88] =
    {
#line 4781
        .trainerName = _("0A8B9F88"),
#line 4782
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4784
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4783
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4786
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4785
        .mapSec = MAPSEC_ROUTE2,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4788
            .species = SPECIES_MINIOR_METEOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4788
            .heldItem = ITEM_METRONOME,
#line 4791
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 84, 0, 0),
#line 4793
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4789
            .ability = ABILITY_SHIELDS_DOWN,
#line 4790
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4792
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4794
                MOVE_ROLLOUT,
            },
            },
            {
#line 4796
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4796
            .heldItem = ITEM_EVIOLITE,
#line 4799
            .ev = TRAINER_PARTY_EVS(52, 80, 0, 0, 0, 0),
#line 4801
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4797
            .ability = ABILITY_THICK_FAT,
#line 4798
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 4800
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4802
                MOVE_ICE_BALL,
            },
            },
            {
#line 4804
            .species = SPECIES_ANORITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4804
            .heldItem = ITEM_PASSHO_BERRY,
#line 4807
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 80, 0, 0),
#line 4809
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4805
            .ability = ABILITY_BATTLE_ARMOR,
#line 4806
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 4808
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4810
                MOVE_FURY_CUTTER,
            },
            },
        },
    },
#line 4812
    [DIFFICULTY_NORMAL][TRAINER_0A8FC005] =
    {
#line 4813
        .trainerName = _("0A8FC005"),
#line 4814
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4816
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4815
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4818
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4817
        .mapSec = MAPSEC_ROUTE4,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4820
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4820
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 4823
            .ev = TRAINER_PARTY_EVS(72, 0, 0, 0, 56, 0),
#line 4825
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4821
            .ability = ABILITY_DRIZZLE,
#line 4822
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4824
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4826
                MOVE_AIR_CUTTER,
                MOVE_ICY_WIND,
                MOVE_CHILLING_WATER,
                MOVE_STOCKPILE,
            },
            },
            {
#line 4831
            .species = SPECIES_TYRUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4831
            .heldItem = ITEM_UTILITY_UMBRELLA,
#line 4834
            .ev = TRAINER_PARTY_EVS(40, 0, 0, 0, 0, 88),
#line 4836
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4832
            .ability = ABILITY_STURDY,
#line 4833
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4835
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4837
                MOVE_ICE_FANG,
                MOVE_THUNDER_FANG,
                MOVE_BITE,
                MOVE_BULLDOZE,
            },
            },
            {
#line 4842
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4842
            .heldItem = ITEM_LEFTOVERS,
#line 4845
            .ev = TRAINER_PARTY_EVS(84, 0, 56, 0, 0, 0),
#line 4847
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4843
            .ability = ABILITY_RAIN_DISH,
#line 4844
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4846
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4848
                MOVE_WHIRLPOOL,
                MOVE_TOXIC,
                MOVE_ACID_ARMOR,
                MOVE_PROTECT,
            },
            },
            {
#line 4853
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4853
            .heldItem = ITEM_SNOWBALL,
#line 4856
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 0, 0, 76),
#line 4858
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4854
            .ability = ABILITY_HYPER_CUTTER,
#line 4855
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4857
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4859
                MOVE_VENOSHOCK,
                MOVE_AERIAL_ACE,
                MOVE_BREAKING_SWIPE,
                MOVE_SAND_TOMB,
            },
            },
        },
    },
#line 4864
    [DIFFICULTY_NORMAL][TRAINER_0AAB38A6] =
    {
#line 4865
        .trainerName = _("0AAB38A6"),
#line 4866
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4868
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4867
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4870
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4869
        .mapSec = MAPSEC_ROUTE4,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4872
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4872
            .heldItem = ITEM_EVIOLITE,
#line 4875
            .ev = TRAINER_PARTY_EVS(60, 0, 0, 0, 72, 0),
#line 4877
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4873
            .ability = ABILITY_LEVITATE,
#line 4874
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4876
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4878
                MOVE_EXTRASENSORY,
                MOVE_SCORCHING_SANDS,
                MOVE_HEX,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 4883
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4883
            .heldItem = ITEM_AIR_BALLOON,
#line 4886
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 0, 0, 88),
#line 4888
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4884
            .ability = ABILITY_ANGER_SHELL,
#line 4885
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4887
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4889
                MOVE_BULLDOZE,
                MOVE_VISE_GRIP,
                MOVE_METAL_CLAW,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 4894
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4894
            .heldItem = ITEM_ASSAULT_VEST,
#line 4897
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 44, 84),
#line 4899
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4895
            .ability = ABILITY_LEVITATE,
#line 4896
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 4898
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4900
                MOVE_SLUDGE_BOMB,
                MOVE_BODY_SLAM,
                MOVE_VENOSHOCK,
                MOVE_GYRO_BALL,
            },
            },
        },
    },
#line 4905
    [DIFFICULTY_NORMAL][TRAINER_0AF40D0B] =
    {
#line 4906
        .trainerName = _("0AF40D0B"),
#line 4907
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4909
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4908
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4911
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4910
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4913
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4913
            .heldItem = ITEM_CHOICE_SCARF,
#line 4916
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4918
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4914
            .ability = ABILITY_SWIFT_SWIM,
#line 4915
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 4917
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4919
                MOVE_SURF,
            },
            },
            {
#line 4921
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4921
            .heldItem = ITEM_CHOPLE_BERRY,
#line 4924
            .ev = TRAINER_PARTY_EVS(52, 0, 76, 0, 0, 0),
#line 4926
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4922
            .ability = ABILITY_STORM_DRAIN,
#line 4923
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 4925
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4927
                MOVE_EARTH_POWER,
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_RECOVER,
            },
            },
        },
    },
#line 4932
    [DIFFICULTY_NORMAL][TRAINER_0B48C7D0] =
    {
#line 4933
        .trainerName = _("0B48C7D0"),
#line 4934
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4936
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4935
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4937
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4938
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4940
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4940
            .heldItem = ITEM_DRAGON_FANG,
#line 4943
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 132, 0, 0),
#line 4945
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4941
            .ability = ABILITY_PRESSURE,
#line 4942
            .lvl = 33,
            .ball = POKEBALL_COUNT,
#line 4944
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4946
                MOVE_ICE_FANG,
                MOVE_BITE,
                MOVE_DRAGON_BREATH,
                MOVE_ROCK_BLAST,
            },
            },
            {
#line 4951
            .species = SPECIES_SILICOBRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4951
            .heldItem = ITEM_SMOOTH_ROCK,
#line 4954
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 4956
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4952
            .ability = ABILITY_SAND_SPIT,
#line 4953
            .lvl = 34,
            .ball = POKEBALL_COUNT,
#line 4955
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4957
                MOVE_SAND_TOMB,
                MOVE_WRAP,
                MOVE_GLARE,
            },
            },
            {
#line 4961
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4961
            .heldItem = ITEM_WIDE_LENS,
#line 4964
            .ev = TRAINER_PARTY_EVS(36, 0, 88, 0, 0, 0),
#line 4966
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4962
            .ability = ABILITY_PRESSURE,
#line 4963
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 4965
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4967
                MOVE_DREAM_EATER,
                MOVE_NIGHT_SHADE,
                MOVE_HYPNOSIS,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 4972
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4972
            .heldItem = ITEM_HARD_STONE,
#line 4975
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 4977
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4973
            .ability = ABILITY_SAND_VEIL,
#line 4974
            .lvl = 34,
            .ball = POKEBALL_COUNT,
#line 4976
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4978
                MOVE_FIRE_FANG,
                MOVE_ICE_FANG,
                MOVE_THUNDER_FANG,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 4983
    [DIFFICULTY_NORMAL][TRAINER_0C0A9B2F] =
    {
#line 4984
        .trainerName = _("0C0A9B2F"),
#line 4985
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 4987
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4986
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4989
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4988
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4991
            .species = SPECIES_TIRTOUGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4991
            .heldItem = ITEM_RINDO_BERRY,
#line 4994
            .ev = TRAINER_PARTY_EVS(0, 32, 0, 0, 0, 96),
#line 4996
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4992
            .ability = ABILITY_SOLID_ROCK,
#line 4993
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 4995
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4997
                MOVE_ZEN_HEADBUTT,
                MOVE_ANCIENT_POWER,
                MOVE_AQUA_JET,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 5002
            .species = SPECIES_SHIELDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5002
            .heldItem = ITEM_RED_CARD,
#line 5005
            .ev = TRAINER_PARTY_EVS(48, 80, 0, 0, 0, 0),
#line 5007
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5003
            .ability = ABILITY_STURDY,
#line 5004
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 5006
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5008
                MOVE_IRON_HEAD,
                MOVE_POWER_GEM,
                MOVE_METAL_BURST,
                MOVE_ROAR,
            },
            },
            {
#line 5013
            .species = SPECIES_KLEAVOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5013
            .heldItem = ITEM_KINGS_ROCK,
#line 5016
            .ev = TRAINER_PARTY_EVS(20, 0, 0, 0, 0, 108),
#line 5018
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5014
            .ability = ABILITY_SWARM,
#line 5015
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 5017
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5019
                MOVE_WING_ATTACK,
                MOVE_POUNCE,
                MOVE_SMACK_DOWN,
                MOVE_DOUBLE_HIT,
            },
            },
        },
    },
#line 5024
    [DIFFICULTY_NORMAL][TRAINER_0C543C80] =
    {
#line 5025
        .trainerName = _("0C543C80"),
#line 5026
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5028
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5027
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5030
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5029
        .mapSec = MAPSEC_ROUTE2,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5032
            .species = SPECIES_SIGILYPH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5032
            .heldItem = ITEM_FLAME_ORB,
#line 5035
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 80, 0, 0),
#line 5037
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5033
            .ability = ABILITY_MAGIC_GUARD,
#line 5034
            .lvl = 34,
            .ball = POKEBALL_COUNT,
#line 5036
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5038
                MOVE_AIR_CUTTER,
                MOVE_CONFUSION,
                MOVE_PSYCHO_SHIFT,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 5043
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5043
            .heldItem = ITEM_EJECT_BUTTON,
#line 5046
            .ev = TRAINER_PARTY_EVS(44, 0, 80, 0, 0, 0),
#line 5048
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5044
            .ability = ABILITY_FRIEND_GUARD,
#line 5045
            .lvl = 37,
            .ball = POKEBALL_COUNT,
#line 5047
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5049
                MOVE_FOLLOW_ME,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 5052
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5052
            .heldItem = ITEM_FOCUS_SASH,
#line 5055
            .ev = TRAINER_PARTY_EVS(0, 128, 0, 0, 0, 0),
#line 5057
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5053
            .ability = ABILITY_ARENA_TRAP,
#line 5054
            .lvl = 33,
            .ball = POKEBALL_COUNT,
#line 5056
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5058
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
                MOVE_BITE,
                MOVE_BUG_BITE,
            },
            },
            {
#line 5063
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5063
            .heldItem = ITEM_SITRUS_BERRY,
#line 5066
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 5068
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5064
            .ability = ABILITY_MUMMY,
#line 5065
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 5067
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5069
                MOVE_HEX,
                MOVE_WILL_O_WISP,
                MOVE_MEAN_LOOK,
                MOVE_CURSE,
            },
            },
        },
    },
#line 5074
    [DIFFICULTY_NORMAL][TRAINER_0C95C833] =
    {
#line 5075
        .trainerName = _("0C95C833"),
#line 5076
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5078
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5077
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5079
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5080
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5082
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5082
            .heldItem = ITEM_CHOICE_SCARF,
#line 5085
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 124, 0, 0),
#line 5087
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5083
            .ability = ABILITY_ROUGH_SKIN,
#line 5084
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 5086
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5088
                MOVE_FLIP_TURN,
            },
            },
            {
#line 5090
            .species = SPECIES_ARCTOZOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5090
            .heldItem = ITEM_SALAC_BERRY,
#line 5093
            .ev = TRAINER_PARTY_EVS(24, 0, 0, 100, 0, 0),
#line 5095
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5091
            .ability = ABILITY_VOLT_ABSORB,
#line 5092
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 5094
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5096
                MOVE_ROCK_TOMB,
                MOVE_ICY_WIND,
                MOVE_ELECTRO_BALL,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 5101
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5101
            .heldItem = ITEM_SOFT_SAND,
#line 5104
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 5106
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5102
            .ability = ABILITY_SHELL_ARMOR,
#line 5103
            .lvl = 35,
            .ball = POKEBALL_COUNT,
#line 5105
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5107
                MOVE_BODY_SLAM,
                MOVE_FLAME_WHEEL,
                MOVE_BULLDOZE,
                MOVE_YAWN,
            },
            },
        },
    },
#line 5112
    [DIFFICULTY_NORMAL][TRAINER_0D416B2C] =
    {
#line 5113
        .trainerName = _("0D416B2C"),
#line 5114
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5116
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5115
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5117
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5118
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5120
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5120
            .heldItem = ITEM_EVIOLITE,
#line 5123
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 80, 60, 0),
#line 5125
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5121
            .ability = ABILITY_WIND_POWER,
#line 5122
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5124
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5125
                MOVE_DISCHARGE,
                MOVE_U_TURN,
                MOVE_TAILWIND,
            },
            },
            {
#line 5129
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5129
            .heldItem = ITEM_CELL_BATTERY,
#line 5132
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 60, 0, 0),
#line 5134
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5130
            .ability = ABILITY_LIMBER,
#line 5131
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5133
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5134
                MOVE_BLAZE_KICK,
                MOVE_SUCKER_PUNCH,
                MOVE_LOW_SWEEP,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 5139
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5139
            .heldItem = ITEM_TOXIC_ORB,
#line 5142
            .ev = TRAINER_PARTY_EVS(60, 0, 0, 0, 0, 80),
#line 5144
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5140
            .ability = ABILITY_MARVEL_SCALE,
#line 5141
            .lvl = 42,
            .ball = POKEBALL_COUNT,
#line 5143
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5144
                MOVE_BODY_SLAM,
                MOVE_WATER_PULSE,
                MOVE_BREAKING_SWIPE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 5149
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5149
            .heldItem = ITEM_IAPAPA_BERRY,
#line 5152
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 0, 0, 60),
#line 5154
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5150
            .ability = ABILITY_STURDY,
#line 5151
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5153
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5154
                MOVE_STOMPING_TANTRUM,
                MOVE_KNOCK_OFF,
                MOVE_FIRE_FANG,
                MOVE_COUNTER,
            },
            },
        },
    },
#line 5159
    [DIFFICULTY_NORMAL][TRAINER_0D4BA0F1] =
    {
#line 5160
        .trainerName = _("0D4BA0F1"),
#line 5161
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5163
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5162
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5164
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5165
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5167
            .species = SPECIES_BARRASKEWDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5167
            .heldItem = ITEM_ROCKY_HELMET,
#line 5170
            .ev = TRAINER_PARTY_EVS(0, 0, 40, 0, 0, 100),
#line 5172
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5168
            .ability = ABILITY_PROPELLER_TAIL,
#line 5169
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5171
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5172
                MOVE_DIVE,
                MOVE_DRILL_RUN,
                MOVE_BITE,
                MOVE_AQUA_JET,
            },
            },
            {
#line 5177
            .species = SPECIES_CRAMORANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5177
            .heldItem = ITEM_MYSTIC_WATER,
#line 5180
            .ev = TRAINER_PARTY_EVS(0, 0, 40, 100, 0, 0),
#line 5182
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5178
            .ability = ABILITY_GULP_MISSILE,
#line 5179
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5181
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5182
                MOVE_SURF,
                MOVE_DIVE,
                MOVE_DRILL_PECK,
                MOVE_STOCKPILE,
            },
            },
            {
#line 5187
            .species = SPECIES_PAWMOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5187
            .heldItem = ITEM_PUNCHING_GLOVE,
#line 5190
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 100, 0, 40),
#line 5192
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5188
            .ability = ABILITY_VOLT_ABSORB,
#line 5189
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5191
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5192
                MOVE_THUNDER_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_BRICK_BREAK,
                MOVE_UPPER_HAND,
            },
            },
        },
    },
#line 5197
    [DIFFICULTY_NORMAL][TRAINER_0DA021EF] =
    {
#line 5198
        .trainerName = _("Billy"),
#line 5199
        .trainerPic = TRAINER_PIC_FRONT_BIRD_KEEPER,
#line 5201
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5200
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5202
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5203
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_BIRD_KEEPER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5205
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5205
            .heldItem = ITEM_WACAN_BERRY,
#line 5208
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5210
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5206
            .ability = ABILITY_INTIMIDATE,
#line 5207
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5209
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5210
                MOVE_TAKE_DOWN,
                MOVE_FLY,
                MOVE_U_TURN,
                MOVE_PARTING_SHOT,
            },
            },
            {
#line 5215
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5215
            .heldItem = ITEM_FLAME_ORB,
#line 5218
            .ev = TRAINER_PARTY_EVS(60, 0, 0, 80, 0, 0),
#line 5220
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5216
            .ability = ABILITY_GUTS,
#line 5217
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5219
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5220
                MOVE_FACADE,
                MOVE_LASH_OUT,
                MOVE_DUAL_WINGBEAT,
                MOVE_TORMENT,
            },
            },
            {
#line 5225
            .species = SPECIES_SQUAWKABILLY_YELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5225
            .heldItem = ITEM_WIDE_LENS,
#line 5228
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 80, 0, 0),
#line 5230
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5226
            .ability = ABILITY_HUSTLE,
#line 5227
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5229
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5230
                MOVE_FOUL_PLAY,
                MOVE_AERIAL_ACE,
                MOVE_QUICK_ATTACK,
                MOVE_ROOST,
            },
            },
            {
#line 5235
            .species = SPECIES_SQUAWKABILLY_WHITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5235
            .heldItem = ITEM_LIFE_ORB,
#line 5238
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 80, 60, 0),
#line 5240
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5236
            .ability = ABILITY_SHEER_FORCE,
#line 5237
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5239
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5240
                MOVE_HURRICANE,
                MOVE_HEAT_WAVE,
                MOVE_POUNCE,
                MOVE_MIMIC,
            },
            },
        },
    },
#line 5245
    [DIFFICULTY_NORMAL][TRAINER_0E19F1A8] =
    {
#line 5246
        .trainerName = _("0E19F1A8"),
#line 5247
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5249
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5248
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5250
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5251
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5253
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5253
            .heldItem = ITEM_ADRENALINE_ORB,
#line 5256
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 60, 0, 0),
#line 5258
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5254
            .ability = ABILITY_KEEN_EYE,
#line 5255
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5257
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5258
                MOVE_DRAIN_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_BULLET_PUNCH,
            },
            },
            {
#line 5263
            .species = SPECIES_FLETCHINDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5263
            .heldItem = ITEM_FOCUS_SASH,
#line 5266
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 80, 0, 0),
#line 5268
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5264
            .ability = ABILITY_GALE_WINGS,
#line 5265
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5267
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5268
                MOVE_FLY,
                MOVE_STEEL_WING,
                MOVE_FIRE_SPIN,
                MOVE_TAILWIND,
            },
            },
            {
#line 5273
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5273
            .heldItem = ITEM_POWER_HERB,
#line 5276
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5278
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5274
            .ability = ABILITY_WIND_RIDER,
#line 5275
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5277
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5278
                MOVE_SOLAR_BLADE,
                MOVE_THIEF,
                MOVE_AERIAL_ACE,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 5283
            .species = SPECIES_NOIVERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5283
            .heldItem = ITEM_YACHE_BERRY,
#line 5286
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5288
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5284
            .ability = ABILITY_INFILTRATOR,
#line 5285
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5287
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5288
                MOVE_DRAGON_PULSE,
                MOVE_PSYCHIC_NOISE,
                MOVE_AIR_CUTTER,
                MOVE_TAILWIND,
            },
            },
        },
    },
#line 5293
    [DIFFICULTY_NORMAL][TRAINER_0E42221A] =
    {
#line 5294
        .trainerName = _("0E42221A"),
#line 5295
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5297
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5296
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5298
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5299
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5301
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5301
            .heldItem = ITEM_WEAKNESS_POLICY,
#line 5304
            .ev = TRAINER_PARTY_EVS(0, 0, 140, 0, 0, 0),
#line 5306
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5302
            .ability = ABILITY_TECHNICIAN,
#line 5303
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5305
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5306
                MOVE_BUG_BITE,
                MOVE_TRAILBLAZE,
                MOVE_DUAL_WINGBEAT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 5311
            .species = SPECIES_SWOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5311
            .heldItem = ITEM_MARANGA_BERRY,
#line 5314
            .ev = TRAINER_PARTY_EVS(0, 0, 60, 0, 0, 80),
#line 5316
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5312
            .ability = ABILITY_SIMPLE,
#line 5313
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5315
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5316
                MOVE_STORED_POWER,
                MOVE_CALM_MIND,
            },
            },
            {
#line 5319
            .species = SPECIES_GREEDENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5319
            .heldItem = ITEM_GANLON_BERRY,
#line 5322
            .ev = TRAINER_PARTY_EVS(0, 80, 60, 0, 0, 0),
#line 5323
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5320
            .ability = ABILITY_CHEEK_POUCH,
#line 5321
            .lvl = 45,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5323
                MOVE_BODY_PRESS,
                MOVE_BODY_SLAM,
                MOVE_SEED_BOMB,
                MOVE_STUFF_CHEEKS,
            },
            },
        },
    },
#line 5328
    [DIFFICULTY_NORMAL][TRAINER_0ED24EF1] =
    {
#line 5329
        .trainerName = _("0ED24EF1"),
#line 5330
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5332
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5331
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5333
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5334
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5336
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5336
            .heldItem = ITEM_YACHE_BERRY,
#line 5339
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 80, 0, 0),
#line 5341
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5337
            .ability = ABILITY_HYPER_CUTTER,
#line 5338
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5340
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5341
                MOVE_ROCK_SLIDE,
                MOVE_BULLDOZE,
                MOVE_FIRE_FANG,
                MOVE_TOXIC_SPIKES,
            },
            },
            {
#line 5346
            .species = SPECIES_SHUCKLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5346
            .heldItem = ITEM_LEFTOVERS,
#line 5349
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5351
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5347
            .ability = ABILITY_STURDY,
#line 5348
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5350
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5351
                MOVE_KNOCK_OFF,
                MOVE_INFESTATION,
                MOVE_WRAP,
                MOVE_PROTECT,
            },
            },
            {
#line 5356
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5356
            .heldItem = ITEM_ASSAULT_VEST,
#line 5359
            .ev = TRAINER_PARTY_EVS(0, 0, 60, 0, 0, 80),
#line 5361
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5357
            .ability = ABILITY_SHEER_FORCE,
#line 5358
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5360
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5361
                MOVE_LIQUIDATION,
                MOVE_NIGHT_SLASH,
                MOVE_METAL_CLAW,
                MOVE_HAMMER_ARM,
            },
            },
        },
    },
#line 5366
    [DIFFICULTY_NORMAL][TRAINER_0F03CF8D] =
    {
#line 5367
        .trainerName = _("0F03CF8D"),
#line 5368
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5370
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5369
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5372
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5371
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5374
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5374
            .heldItem = ITEM_SCOPE_LENS,
#line 5377
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 0, 60, 0),
#line 5379
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5375
            .ability = ABILITY_KEEN_EYE,
#line 5376
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5378
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5380
                MOVE_DUAL_WINGBEAT,
                MOVE_STEEL_WING,
                MOVE_TAILWIND,
                MOVE_UPROAR,
            },
            },
            {
#line 5385
            .species = SPECIES_BOMBIRDIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5385
            .heldItem = ITEM_CHARTI_BERRY,
#line 5388
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 0, 0, 60),
#line 5390
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5386
            .ability = ABILITY_ROCKY_PAYLOAD,
#line 5387
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5389
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5390
                MOVE_FOUL_PLAY,
                MOVE_ROCK_SLIDE,
                MOVE_ACROBATICS,
                MOVE_FEATHER_DANCE,
            },
            },
            {
#line 5395
            .species = SPECIES_ORICORIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5395
            .heldItem = ITEM_ABSORB_BULB,
#line 5398
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 60, 80),
#line 5400
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5396
            .ability = ABILITY_DANCER,
#line 5397
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5399
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5400
                MOVE_REVELATION_DANCE,
                MOVE_ACROBATICS,
                MOVE_SWORDS_DANCE,
                MOVE_TAILWIND,
            },
            },
            {
#line 5405
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5405
            .heldItem = ITEM_WIDE_LENS,
#line 5408
            .ev = TRAINER_PARTY_EVS(0, 0, 100, 40, 0, 0),
#line 5410
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5406
            .ability = ABILITY_KEEN_EYE,
#line 5407
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5409
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5410
                MOVE_DREAM_EATER,
                MOVE_AIR_SLASH,
                MOVE_PSYBEAM,
                MOVE_HYPNOSIS,
            },
            },
        },
    },
#line 5415
    [DIFFICULTY_NORMAL][TRAINER_0F3D8011] =
    {
#line 5416
        .trainerName = _("0F3D8011"),
#line 5417
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5419
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5418
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5420
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5421
        .mapSec = MAPSEC_ROUTE11,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 5423
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5423
            .heldItem = ITEM_EVIOLITE,
#line 5426
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5427
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5424
            .ability = ABILITY_FRIEND_GUARD,
#line 5425
            .lvl = 54,
            .ball = POKEBALL_COUNT,
#line 5428
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5429
                MOVE_FOLLOW_ME,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_NIGHT_SHADE,
            },
            },
            {
#line 5434
            .species = SPECIES_GREEDENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5434
            .heldItem = ITEM_SITRUS_BERRY,
#line 5437
            .ev = TRAINER_PARTY_EVS(252, 48, 0, 0, 0, 0),
#line 5438
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5435
            .ability = ABILITY_CHEEK_POUCH,
#line 5436
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 5439
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5440
                MOVE_BODY_PRESS,
                MOVE_BODY_SLAM,
                MOVE_COUNTER,
                MOVE_CRUNCH,
            },
            },
            {
#line 5445
            .species = SPECIES_ARBOLIVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5445
            .heldItem = ITEM_SITRUS_BERRY,
#line 5448
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 0, 252, 0),
#line 5449
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5446
            .ability = ABILITY_HARVEST,
#line 5447
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 5450
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5451
                MOVE_GIGA_DRAIN,
                MOVE_EARTH_POWER,
                MOVE_LEECH_SEED,
                MOVE_SYNTHESIS,
            },
            },
            {
#line 5456
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5456
            .heldItem = ITEM_SITRUS_BERRY,
#line 5459
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 48, 0, 0),
#line 5460
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5457
            .ability = ABILITY_PICKUP,
#line 5458
            .lvl = 52,
            .ball = POKEBALL_COUNT,
#line 5461
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5462
                MOVE_WILD_CHARGE,
                MOVE_PLAY_ROUGH,
                MOVE_SEED_BOMB,
                MOVE_FOLLOW_ME,
            },
            },
            {
#line 5467
            .species = SPECIES_POLTEAGEIST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5467
            .heldItem = ITEM_STARF_BERRY,
#line 5470
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 148, 152, 0),
#line 5472
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5468
            .ability = ABILITY_WEAK_ARMOR,
#line 5469
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 5471
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5473
                MOVE_TEATIME,
                MOVE_GIGA_DRAIN,
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
            },
            },
        },
    },
#line 5478
    [DIFFICULTY_NORMAL][TRAINER_0F3DB5D8] =
    {
#line 5479
        .trainerName = _("0F3DB5D8"),
#line 5480
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5482
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5481
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5484
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5483
        .mapSec = MAPSEC_ROUTE11,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5486
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5486
            .heldItem = ITEM_BLACK_SLUDGE,
#line 5489
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 252, 0, 0),
#line 5491
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5487
            .ability = ABILITY_CLEAR_BODY,
#line 5488
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5490
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5492
                MOVE_TOXIC_SPIKES,
                MOVE_VENOSHOCK,
                MOVE_HEX,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 5497
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5497
            .heldItem = ITEM_SPELL_TAG,
#line 5500
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 48, 0),
#line 5501
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5498
            .ability = ABILITY_LEVITATE,
#line 5499
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 5502
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5503
                MOVE_HEX,
                MOVE_DAZZLING_GLEAM,
                MOVE_MEAN_LOOK,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 5508
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5508
            .heldItem = ITEM_FOCUS_SASH,
#line 5511
            .ev = TRAINER_PARTY_EVS(48, 252, 0, 0, 0, 0),
#line 5512
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5509
            .ability = ABILITY_SNIPER,
#line 5510
            .lvl = 52,
            .ball = POKEBALL_COUNT,
#line 5513
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5514
                MOVE_VENOSHOCK,
                MOVE_TOXIC_THREAD,
                MOVE_FELL_STINGER,
                MOVE_SUCKER_PUNCH,
            },
            },
        },
    },
#line 5519
    [DIFFICULTY_NORMAL][TRAINER_0F5F82C3] =
    {
#line 5520
        .trainerName = _("0F5F82C3"),
#line 5521
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5523
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5522
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5525
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5524
        .mapSec = MAPSEC_ROUTE11,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5527
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5527
            .heldItem = ITEM_PAYAPA_BERRY,
#line 5530
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 48, 0, 0),
#line 5531
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5528
            .ability = ABILITY_POISON_TOUCH,
#line 5529
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 5532
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5533
                MOVE_FAKE_OUT,
                MOVE_SUCKER_PUNCH,
                MOVE_POISON_JAB,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 5538
    [DIFFICULTY_NORMAL][TRAINER_0FFBCCB9] =
    {
#line 5539
        .trainerName = _("0FFBCCB9"),
#line 5540
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5542
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5541
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5544
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5543
        .mapSec = MAPSEC_ROUTE11,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5546
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5546
            .heldItem = ITEM_WEAKNESS_POLICY,
#line 5549
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5550
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5547
            .ability = ABILITY_PRESSURE,
#line 5548
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5551
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5552
                MOVE_FUTURE_SIGHT,
                MOVE_SHADOW_SNEAK,
                MOVE_LEECH_LIFE,
                MOVE_PAIN_SPLIT,
            },
            },
            {
#line 5557
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5557
            .heldItem = ITEM_EXPERT_BELT,
#line 5560
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5561
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5558
            .ability = ABILITY_JUSTIFIED,
#line 5559
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5562
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5563
                MOVE_FUTURE_SIGHT,
                MOVE_DRAIN_PUNCH,
                MOVE_PSYCHO_CUT,
                MOVE_X_SCISSOR,
            },
            },
            {
#line 5568
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5568
            .heldItem = ITEM_FAIRY_FEATHER,
#line 5571
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 48, 0),
#line 5573
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5569
            .ability = ABILITY_TRACE,
#line 5570
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5572
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5574
                MOVE_FUTURE_SIGHT,
                MOVE_DRAINING_KISS,
                MOVE_PSYCHIC,
                MOVE_MYSTICAL_FIRE,
            },
            },
            {
#line 5579
            .species = SPECIES_ORBEETLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5579
            .heldItem = ITEM_LEFTOVERS,
#line 5582
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 48, 252, 0),
#line 5584
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5580
            .ability = ABILITY_SWARM,
#line 5581
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 5583
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5585
                MOVE_FUTURE_SIGHT,
                MOVE_BUG_BUZZ,
                MOVE_INFESTATION,
                MOVE_SUBSTITUTE,
            },
            },
        },
    },
#line 5590
    [DIFFICULTY_NORMAL][TRAINER_1075163A] =
    {
#line 5591
        .trainerName = _("1075163A"),
#line 5592
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5596
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5593
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5595
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5594
        .mapSec = MAPSEC_FORT_YOBU,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5598
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5598
            .heldItem = ITEM_ROSELI_BERRY,
#line 5601
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 48, 0),
#line 5602
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5599
            .ability = ABILITY_LEVITATE,
#line 5600
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5603
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5604
                MOVE_BELCH,
                MOVE_ACROBATICS,
                MOVE_DRAGON_BREATH,
                MOVE_TAILWIND,
            },
            },
            {
#line 5609
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5609
            .heldItem = ITEM_SALAC_BERRY,
#line 5612
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 48, 0, 0),
#line 5613
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5610
            .ability = ABILITY_STURDY,
#line 5611
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5614
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5615
                MOVE_FLAIL,
                MOVE_ROCK_TOMB,
                MOVE_WATERFALL,
                MOVE_SCALE_SHOT,
            },
            },
            {
#line 5620
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5620
            .heldItem = ITEM_IAPAPA_BERRY,
#line 5623
            .ev = TRAINER_PARTY_EVS(52, 248, 0, 0, 0, 0),
#line 5625
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5621
            .ability = ABILITY_GLUTTONY,
#line 5622
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5624
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5626
                MOVE_BELLY_DRUM,
                MOVE_EXTREME_SPEED,
                MOVE_THROAT_CHOP,
                MOVE_THUNDER_WAVE,
            },
            },
        },
    },
#line 5631
    [DIFFICULTY_NORMAL][TRAINER_10751EAA] =
    {
#line 5632
        .trainerName = _("10751EAA"),
#line 5633
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5637
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5634
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5636
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5635
        .mapSec = MAPSEC_FORT_YOBU,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 5639
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5639
            .heldItem = ITEM_PAYAPA_BERRY,
#line 5642
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 48),
#line 5644
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5640
            .ability = ABILITY_LEVITATE,
#line 5641
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5643
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5645
                MOVE_TOXIC_SPIKES,
                MOVE_SLUDGE_BOMB,
                MOVE_HEAT_WAVE,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 5650
            .species = SPECIES_PANGORO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5650
            .heldItem = ITEM_SITRUS_BERRY,
#line 5653
            .ev = TRAINER_PARTY_EVS(48, 252, 0, 0, 0, 0),
#line 5655
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5651
            .ability = ABILITY_SCRAPPY,
#line 5652
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 5654
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5656
                MOVE_SUBSTITUTE,
                MOVE_CIRCLE_THROW,
                MOVE_DARKEST_LARIAT,
                MOVE_GUNK_SHOT,
            },
            },
            {
#line 5661
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5661
            .heldItem = ITEM_ASSAULT_VEST,
#line 5664
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 48, 252, 0),
#line 5665
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5662
            .ability = ABILITY_FLAME_BODY,
#line 5663
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5666
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5667
                MOVE_LAVA_PLUME,
                MOVE_SCORCHING_SANDS,
                MOVE_THUNDERBOLT,
                MOVE_FIRE_SPIN,
            },
            },
            {
#line 5672
            .species = SPECIES_CRAMORANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5672
            .heldItem = ITEM_FOCUS_SASH,
#line 5675
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 0, 252, 0),
#line 5677
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5673
            .ability = ABILITY_GULP_MISSILE,
#line 5674
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5676
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5678
                MOVE_AGILITY,
                MOVE_SURF,
                MOVE_ENDEAVOR,
                MOVE_WHIRLPOOL,
            },
            },
            {
#line 5683
            .species = SPECIES_SKUNTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5683
            .heldItem = ITEM_AIR_BALLOON,
#line 5686
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 48, 252, 0),
#line 5688
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5684
            .ability = ABILITY_AFTERMATH,
#line 5685
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 5687
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5689
                MOVE_HEX,
                MOVE_VENOSHOCK,
                MOVE_NASTY_PLOT,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 5694
    [DIFFICULTY_NORMAL][TRAINER_10E3552B] =
    {
#line 5695
        .trainerName = _("10E3552B"),
#line 5696
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5698
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5697
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5699
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5700
        .mapSec = MAPSEC_FORT_YOBU,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5702
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5702
            .heldItem = ITEM_FOCUS_SASH,
#line 5705
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5706
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5703
            .ability = ABILITY_REGENERATOR,
#line 5704
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5707
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5708
                MOVE_FAKE_OUT,
                MOVE_DRAIN_PUNCH,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 5713
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5713
            .heldItem = ITEM_LEFTOVERS,
#line 5716
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 48),
#line 5718
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5714
            .ability = ABILITY_REGENERATOR,
#line 5715
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5717
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5719
                MOVE_SCALD,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
                MOVE_SLACK_OFF,
            },
            },
            {
#line 5724
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5724
            .heldItem = ITEM_EVIOLITE,
#line 5727
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5729
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5725
            .ability = ABILITY_SERENE_GRACE,
#line 5726
            .lvl = 48,
            .ball = POKEBALL_COUNT,
#line 5728
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5730
                MOVE_DRAINING_KISS,
                MOVE_ANCIENT_POWER,
                MOVE_WISH,
                MOVE_BATON_PASS,
            },
            },
            {
#line 5735
            .species = SPECIES_LIEPARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5735
            .heldItem = ITEM_NORMAL_GEM,
#line 5738
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5740
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5736
            .ability = ABILITY_UNBURDEN,
#line 5737
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5739
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5741
                MOVE_U_TURN,
                MOVE_FAKE_OUT,
                MOVE_DARK_PULSE,
                MOVE_PLAY_ROUGH,
            },
            },
        },
    },
#line 5746
    [DIFFICULTY_NORMAL][TRAINER_1114BC23] =
    {
#line 5747
        .trainerName = _("1114BC23"),
#line 5748
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5750
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5749
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5751
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5752
        .mapSec = MAPSEC_FORT_YOBU,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5754
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5754
            .heldItem = ITEM_TOXIC_ORB,
#line 5757
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 48, 0, 0),
#line 5759
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5755
            .ability = ABILITY_POISON_HEAL,
#line 5756
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 5758
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5760
                MOVE_SUBSTITUTE,
                MOVE_DRAIN_PUNCH,
                MOVE_GIGA_DRAIN,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 5765
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5765
            .heldItem = ITEM_BIG_ROOT,
#line 5768
            .ev = TRAINER_PARTY_EVS(252, 0, 24, 0, 0, 24),
#line 5770
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5766
            .ability = ABILITY_DRY_SKIN,
#line 5767
            .lvl = 47,
            .ball = POKEBALL_COUNT,
#line 5769
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5771
                MOVE_LEECH_SEED,
                MOVE_LEECH_LIFE,
                MOVE_GIGA_DRAIN,
                MOVE_SPORE,
            },
            },
            {
#line 5776
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5776
            .heldItem = ITEM_LEFTOVERS,
#line 5779
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5781
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5777
            .ability = ABILITY_FLASH_FIRE,
#line 5778
            .lvl = 48,
            .ball = POKEBALL_COUNT,
#line 5780
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5782
                MOVE_BITTER_BLADE,
                MOVE_PHANTOM_FORCE,
                MOVE_WILL_O_WISP,
                MOVE_BULK_UP,
            },
            },
            {
#line 5787
            .species = SPECIES_FLORGES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5787
            .heldItem = ITEM_BABIRI_BERRY,
#line 5790
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5792
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5788
            .ability = ABILITY_FLOWER_VEIL,
#line 5789
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 5791
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5793
                MOVE_MOONBLAST,
                MOVE_STORED_POWER,
                MOVE_CALM_MIND,
                MOVE_SYNTHESIS,
            },
            },
        },
    },
#line 5798
    [DIFFICULTY_NORMAL][TRAINER_114EB3AD] =
    {
#line 5799
        .trainerName = _("114EB3AD"),
#line 5800
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5802
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5801
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5803
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5804
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5806
            .species = SPECIES_PURUGLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5806
            .heldItem = ITEM_FOCUS_SASH,
#line 5809
            .ev = TRAINER_PARTY_EVS(0, 244, 124, 0, 0, 28),
#line 5811
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5807
            .ability = ABILITY_DEFIANT,
#line 5808
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5810
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5811
                MOVE_FAKE_OUT,
                MOVE_DOUBLE_TEAM,
                MOVE_BODY_SLAM,
                MOVE_SUPER_FANG,
            },
            },
            {
#line 5816
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5816
            .heldItem = ITEM_MUSCLE_BAND,
#line 5819
            .ev = TRAINER_PARTY_EVS(0, 248, 0, 0, 0, 148),
#line 5821
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5817
            .ability = ABILITY_TECHNICIAN,
#line 5818
            .lvl = 48,
            .ball = POKEBALL_COUNT,
#line 5820
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5821
                MOVE_MACH_PUNCH,
                MOVE_BULLET_SEED,
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 5826
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5826
            .heldItem = ITEM_RED_CARD,
#line 5829
            .ev = TRAINER_PARTY_EVS(0, 124, 0, 148, 124, 0),
#line 5831
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5827
            .ability = ABILITY_ILLUSION,
#line 5828
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5830
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5831
                MOVE_NIGHT_DAZE,
                MOVE_FLAMETHROWER,
                MOVE_EXTRASENSORY,
                MOVE_SLUDGE_BOMB,
            },
            },
            {
#line 5836
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5836
            .heldItem = ITEM_TOXIC_ORB,
#line 5839
            .ev = TRAINER_PARTY_EVS(0, 248, 52, 0, 0, 100),
#line 5841
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5837
            .ability = ABILITY_QUICK_FEET,
#line 5838
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 5840
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5841
                MOVE_ROAR,
                MOVE_ICE_PUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_PLAY_ROUGH,
            },
            },
        },
    },
#line 5846
    [DIFFICULTY_NORMAL][TRAINER_11EDE0DC] =
    {
#line 5847
        .trainerName = _("11EDE0DC"),
#line 5848
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5850
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5849
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5851
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5852
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5854
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5854
            .heldItem = ITEM_PAYAPA_BERRY,
#line 5857
            .ev = TRAINER_PARTY_EVS(0, 0, 88, 0, 216, 96),
#line 5859
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5855
            .ability = ABILITY_STICKY_HOLD,
#line 5856
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 5858
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5859
                MOVE_TOXIC_SPIKES,
                MOVE_SLUDGE_WAVE,
                MOVE_GIGA_DRAIN,
                MOVE_MUD_SHOT,
            },
            },
            {
#line 5864
            .species = SPECIES_SCRAFTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5864
            .heldItem = ITEM_ROSELI_BERRY,
#line 5867
            .ev = TRAINER_PARTY_EVS(0, 116, 132, 0, 0, 148),
#line 5869
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5865
            .ability = ABILITY_INTIMIDATE,
#line 5866
            .lvl = 48,
            .ball = POKEBALL_COUNT,
#line 5868
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5869
                MOVE_DRAGON_TAIL,
                MOVE_ZEN_HEADBUTT,
                MOVE_DRAGON_DANCE,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 5874
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5874
            .heldItem = ITEM_RED_CARD,
#line 5877
            .ev = TRAINER_PARTY_EVS(136, 0, 44, 0, 136, 76),
#line 5879
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5875
            .ability = ABILITY_SHEER_FORCE,
#line 5876
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 5878
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5879
                MOVE_ICE_BEAM,
                MOVE_VENOSHOCK,
                MOVE_EARTH_POWER,
                MOVE_TOXIC_SPIKES,
            },
            },
            {
#line 5884
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5884
            .heldItem = ITEM_SCOPE_LENS,
#line 5887
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 148, 0),
#line 5889
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5885
            .ability = ABILITY_SUPER_LUCK,
#line 5886
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5888
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5889
                MOVE_HEX,
                MOVE_HEAT_WAVE,
                MOVE_AIR_CUTTER,
                MOVE_PSYCHIC_NOISE,
            },
            },
        },
    },
#line 5894
    [DIFFICULTY_NORMAL][TRAINER_120A20F6] =
    {
#line 5895
        .trainerName = _("120A20F6"),
#line 5896
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5898
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5897
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5899
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5900
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5902
            .species = SPECIES_KLEFKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5902
            .heldItem = ITEM_RED_CARD,
#line 5905
            .ev = TRAINER_PARTY_EVS(48, 0, 84, 0, 116, 148),
#line 5907
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5903
            .ability = ABILITY_PRANKSTER,
#line 5904
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 5906
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5907
                MOVE_SPIKES,
                MOVE_STEEL_BEAM,
                MOVE_MISTY_TERRAIN,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 5912
            .species = SPECIES_SLURPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5912
            .heldItem = ITEM_MISTY_SEED,
#line 5915
            .ev = TRAINER_PARTY_EVS(116, 0, 28, 252, 0, 0),
#line 5917
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5913
            .ability = ABILITY_UNBURDEN,
#line 5914
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5916
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5917
                MOVE_STICKY_WEB,
                MOVE_SURF,
                MOVE_FLAMETHROWER,
                MOVE_ENERGY_BALL,
            },
            },
            {
#line 5922
            .species = SPECIES_MINIOR_INDIGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5922
            .heldItem = ITEM_SITRUS_BERRY,
#line 5925
            .ev = TRAINER_PARTY_EVS(0, 148, 0, 248, 0, 0),
#line 5927
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5923
            .ability = ABILITY_SHIELDS_DOWN,
#line 5924
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 5926
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5927
                MOVE_STEALTH_ROCK,
                MOVE_ANCIENT_POWER,
                MOVE_SCORCHING_SANDS,
                MOVE_ACROBATICS,
            },
            },
            {
#line 5932
            .species = SPECIES_PANGORO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5932
            .heldItem = ITEM_LIECHI_BERRY,
#line 5935
            .ev = TRAINER_PARTY_EVS(148, 116, 36, 0, 0, 100),
#line 5937
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5933
            .ability = ABILITY_SCRAPPY,
#line 5934
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5936
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5937
                MOVE_CIRCLE_THROW,
                MOVE_LOW_KICK,
                MOVE_EARTHQUAKE,
                MOVE_DARKEST_LARIAT,
            },
            },
        },
    },
#line 5942
    [DIFFICULTY_NORMAL][TRAINER_13113EC0] =
    {
#line 5943
        .trainerName = _("13113EC0"),
#line 5944
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5946
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5945
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5947
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5948
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5950
            .species = SPECIES_VIKAVOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5950
            .heldItem = ITEM_QUICK_CLAW,
#line 5953
            .ev = TRAINER_PARTY_EVS(184, 0, 0, 0, 208, 8),
#line 5955
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5951
            .ability = ABILITY_LEVITATE,
#line 5952
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5954
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5956
                MOVE_STICKY_WEB,
                MOVE_VOLT_SWITCH,
                MOVE_ENERGY_BALL,
                MOVE_BUG_BUZZ,
            },
            },
            {
#line 5961
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5961
            .heldItem = ITEM_RED_CARD,
#line 5964
            .ev = TRAINER_PARTY_EVS(248, 0, 140, 0, 0, 8),
#line 5966
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5962
            .ability = ABILITY_HEATPROOF,
#line 5963
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 5965
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5967
                MOVE_STEALTH_ROCK,
                MOVE_ZEN_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 5972
            .species = SPECIES_URSALUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5972
            .heldItem = ITEM_BERSERK_GENE,
#line 5975
            .ev = TRAINER_PARTY_EVS(156, 124, 116, 0, 0, 0),
#line 5977
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5973
            .ability = ABILITY_UNNERVE,
#line 5974
            .lvl = 48,
            .ball = POKEBALL_COUNT,
#line 5976
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5978
                MOVE_PLAY_ROUGH,
                MOVE_BRICK_BREAK,
                MOVE_BODY_SLAM,
                MOVE_BULLDOZE,
            },
            },
        },
    },
#line 5983
    [DIFFICULTY_NORMAL][TRAINER_1387ABBC] =
    {
#line 5984
        .trainerName = _("1387ABBC"),
#line 5985
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 5987
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5986
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5988
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5989
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5991
            .species = SPECIES_ORBEETLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5991
            .heldItem = ITEM_RED_CARD,
#line 5994
            .ev = TRAINER_PARTY_EVS(136, 0, 40, 224, 0, 0),
#line 5996
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5992
            .ability = ABILITY_SWARM,
#line 5993
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 5995
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5997
                MOVE_STICKY_WEB,
                MOVE_HYPNOSIS,
                MOVE_PSYCHIC_NOISE,
                MOVE_BUG_BUZZ,
            },
            },
            {
#line 6002
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6002
            .heldItem = ITEM_EVIOLITE,
#line 6005
            .ev = TRAINER_PARTY_EVS(184, 0, 108, 0, 0, 104),
#line 6007
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6003
            .ability = ABILITY_DEFIANT,
#line 6004
            .lvl = 48,
            .ball = POKEBALL_COUNT,
#line 6006
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6008
                MOVE_STEALTH_ROCK,
                MOVE_STONE_EDGE,
                MOVE_DRAIN_PUNCH,
                MOVE_POISON_JAB,
            },
            },
        },
    },
#line 6013
    [DIFFICULTY_NORMAL][TRAINER_148A3C6B] =
    {
#line 6014
        .trainerName = _("148A3C6B"),
#line 6015
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6017
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6018
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6019
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6021
            .species = SPECIES_TOEDSCRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6021
            .heldItem = ITEM_YACHE_BERRY,
#line 6024
            .ev = TRAINER_PARTY_EVS(140, 0, 72, 0, 104, 80),
#line 6026
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6022
            .ability = ABILITY_MYCELIUM_MIGHT,
#line 6023
            .lvl = 49,
            .ball = POKEBALL_COUNT,
#line 6025
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6027
                MOVE_SPORE,
                MOVE_TOXIC_SPIKES,
                MOVE_EARTH_POWER,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6032
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6032
            .heldItem = ITEM_BLUNDER_POLICY,
#line 6035
            .ev = TRAINER_PARTY_EVS(80, 0, 112, 52, 152, 0),
#line 6037
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6033
            .ability = ABILITY_INSOMNIA,
#line 6034
            .lvl = 51,
            .ball = POKEBALL_COUNT,
#line 6036
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6038
                MOVE_HYPNOSIS,
                MOVE_HURRICANE,
                MOVE_WHIRLWIND,
                MOVE_EXTRASENSORY,
            },
            },
        },
    },
#line 6043
    [DIFFICULTY_NORMAL][TRAINER_14C5EE6C] =
    {
#line 6044
        .trainerName = _("14C5EE6C"),
#line 6045
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6047
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6046
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6048
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6049
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6051
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6051
            .heldItem = ITEM_WACAN_BERRY,
#line 6054
            .ev = TRAINER_PARTY_EVS(0, 144, 0, 252, 0, 4),
#line 6056
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6052
            .ability = ABILITY_MOXIE,
#line 6053
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 6055
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6057
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
                MOVE_AQUA_TAIL,
                MOVE_ICE_FANG,
            },
            },
            {
#line 6062
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6062
            .heldItem = ITEM_SITRUS_BERRY,
#line 6065
            .ev = TRAINER_PARTY_EVS(252, 0, 88, 0, 0, 60),
#line 6066
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6063
            .ability = ABILITY_CUTE_CHARM,
#line 6064
            .lvl = 48,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6067
                MOVE_FOLLOW_ME,
                MOVE_HELPING_HAND,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
            },
            },
        },
    },
#line 6072
    [DIFFICULTY_NORMAL][TRAINER_1508BB71] =
    {
#line 6073
        .trainerName = _("1508BB71"),
#line 6074
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6076
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6075
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6077
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6078
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6080
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6080
            .heldItem = ITEM_LEFTOVERS,
#line 6083
            .ev = TRAINER_PARTY_EVS(208, 0, 184, 0, 8, 0),
#line 6085
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6081
            .ability = ABILITY_SNOW_CLOAK,
#line 6082
            .lvl = 47,
            .ball = POKEBALL_COUNT,
#line 6084
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6086
                MOVE_SNOWSCAPE,
                MOVE_BLIZZARD,
                MOVE_REST,
                MOVE_REFLECT,
            },
            },
            {
#line 6091
            .species = SPECIES_BEARTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6091
            .heldItem = ITEM_STARF_BERRY,
#line 6094
            .ev = TRAINER_PARTY_EVS(0, 252, 72, 0, 0, 72),
#line 6096
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6092
            .ability = ABILITY_SNOW_CLOAK,
#line 6093
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 6095
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6097
                MOVE_SNOWSCAPE,
                MOVE_AVALANCHE,
                MOVE_SHEER_COLD,
            },
            },
        },
    },
#line 6101
    [DIFFICULTY_NORMAL][TRAINER_1510C80A] =
    {
#line 6102
        .trainerName = _("1510C80A"),
#line 6103
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6105
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6106
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6107
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6109
            .species = SPECIES_MUDSDALE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6109
            .heldItem = ITEM_SMOOTH_ROCK,
#line 6112
            .ev = TRAINER_PARTY_EVS(156, 0, 244, 0, 0, 0),
#line 6114
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6110
            .ability = ABILITY_STAMINA,
#line 6111
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 6113
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6115
                MOVE_SANDSTORM,
                MOVE_BODY_PRESS,
                MOVE_COUNTER,
                MOVE_CURSE,
            },
            },
            {
#line 6120
            .species = SPECIES_SANDACONDA,
#line 6120
            .gender = TRAINER_MON_MALE,
#line 6120
            .heldItem = ITEM_RED_CARD,
#line 6123
            .ev = TRAINER_PARTY_EVS(152, 88, 156, 0, 0, 0),
#line 6124
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6121
            .ability = ABILITY_SAND_SPIT,
#line 6122
            .lvl = 44,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6125
                MOVE_HURRICANE,
                MOVE_DRILL_RUN,
                MOVE_FIRE_FANG,
                MOVE_SKITTER_SMACK,
            },
            },
            {
#line 6130
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6130
            .heldItem = ITEM_LIFE_ORB,
#line 6133
            .ev = TRAINER_PARTY_EVS(0, 0, 148, 0, 252, 0),
#line 6134
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6131
            .ability = ABILITY_MAGIC_GUARD,
#line 6132
            .lvl = 47,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6135
                MOVE_PSYCHIC,
                MOVE_THUNDER_PUNCH,
                MOVE_SHADOW_BALL,
                MOVE_ENERGY_BALL,
            },
            },
        },
    },
#line 6140
    [DIFFICULTY_NORMAL][TRAINER_15598A38] =
    {
#line 6141
        .trainerName = _("15598A38"),
#line 6142
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6144
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6143
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6145
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6146
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6148
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6148
            .heldItem = ITEM_EXPERT_BELT,
#line 6151
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 144, 0, 0),
#line 6153
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6149
            .ability = ABILITY_PURE_POWER,
#line 6150
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 6152
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6154
                MOVE_HIGH_JUMP_KICK,
                MOVE_POISON_JAB,
                MOVE_ZEN_HEADBUTT,
                MOVE_FIRE_PUNCH,
            },
            },
            {
#line 6159
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6159
            .heldItem = ITEM_EXPERT_BELT,
#line 6162
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 148, 0, 0),
#line 6164
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6160
            .ability = ABILITY_PURE_POWER,
#line 6161
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 6163
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6165
                MOVE_ICE_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_ZEN_HEADBUTT,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 6170
            .species = SPECIES_LOKIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6170
            .heldItem = ITEM_EXPERT_BELT,
#line 6173
            .ev = TRAINER_PARTY_EVS(0, 204, 0, 196, 0, 0),
#line 6175
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6171
            .ability = ABILITY_TINTED_LENS,
#line 6172
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 6174
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6176
                MOVE_BUG_BITE,
                MOVE_AERIAL_ACE,
                MOVE_LASH_OUT,
                MOVE_DOUBLE_KICK,
            },
            },
        },
    },
#line 6181
    [DIFFICULTY_NORMAL][TRAINER_15A66566] =
    {
#line 6182
        .trainerName = _("15A66566"),
#line 6183
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6185
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6186
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6187
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6189
            .species = SPECIES_HAWLUCHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6189
            .heldItem = ITEM_ORAN_BERRY,
#line 6192
            .ev = TRAINER_PARTY_EVS(252, 0, 72, 0, 0, 72),
#line 6194
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6190
            .ability = ABILITY_UNBURDEN,
#line 6191
            .lvl = 45,
            .ball = POKEBALL_COUNT,
#line 6193
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6195
                MOVE_TAUNT,
                MOVE_ENCORE,
                MOVE_HELPING_HAND,
                MOVE_BRICK_BREAK,
            },
            },
            {
#line 6200
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6200
            .heldItem = ITEM_KINGS_ROCK,
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
                MOVE_BITE,
                MOVE_STONE_EDGE,
                MOVE_BULLDOZE,
            },
            },
            {
#line 6211
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6211
            .heldItem = ITEM_CHOICE_BAND,
#line 6214
            .ev = TRAINER_PARTY_EVS(76, 252, 72, 0, 0, 0),
#line 6216
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6212
            .ability = ABILITY_ARENA_TRAP,
#line 6213
            .lvl = 40,
            .ball = POKEBALL_COUNT,
#line 6215
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6217
                MOVE_QUICK_ATTACK,
                MOVE_BUG_BITE,
                MOVE_STONE_EDGE,
                MOVE_BULLDOZE,
            },
            },
        },
    },
#line 6222
    [DIFFICULTY_NORMAL][TRAINER_15C87858] =
    {
#line 6223
        .trainerName = _("15C87858"),
#line 6224
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6226
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6225
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6227
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6228
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6230
            .species = SPECIES_SWADLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6233
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6231
            .ability = ABILITY_OVERCOAT,
#line 6232
            .lvl = 45,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6234
                MOVE_LIGHT_SCREEN,
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6239
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6242
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6240
            .ability = ABILITY_HYPER_CUTTER,
#line 6241
            .lvl = 41,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6243
                MOVE_TOXIC,
                MOVE_PROTECT,
                MOVE_SUBSTITUTE,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 6248
            .species = SPECIES_TOEDSCRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6251
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6249
            .ability = ABILITY_MYCELIUM_MIGHT,
#line 6250
            .lvl = 44,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6252
                MOVE_SUBSTITUTE,
                MOVE_LEECH_SEED,
                MOVE_PROTECT,
                MOVE_HEX,
            },
            },
        },
    },
#line 6257
    [DIFFICULTY_NORMAL][TRAINER_1648CE6E] =
    {
#line 6258
        .trainerName = _("1648CE6E"),
#line 6259
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6261
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6260
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6262
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6263
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6265
            .species = SPECIES_VANILLUXE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6265
            .heldItem = ITEM_ICY_ROCK,
#line 6268
            .ev = TRAINER_PARTY_EVS(132, 0, 76, 0, 172, 16),
#line 6270
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6266
            .ability = ABILITY_SNOW_WARNING,
#line 6267
            .lvl = 42,
            .ball = POKEBALL_COUNT,
#line 6269
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6271
                MOVE_MIST,
                MOVE_BLIZZARD,
                MOVE_EXPLOSION,
            },
            },
            {
#line 6275
            .species = SPECIES_CHANSEY,
#line 6275
            .gender = TRAINER_MON_FEMALE,
#line 6275
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 6278
            .ev = TRAINER_PARTY_EVS(0, 0, 144, 0, 252, 0),
#line 6280
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6276
            .ability = ABILITY_SERENE_GRACE,
#line 6277
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 6279
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6281
                MOVE_SNOWSCAPE,
                MOVE_BLIZZARD,
                MOVE_HEALING_WISH,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 6286
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6286
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 6289
            .ev = TRAINER_PARTY_EVS(64, 0, 44, 0, 252, 40),
#line 6291
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6287
            .ability = ABILITY_WATER_ABSORB,
#line 6288
            .lvl = 46,
            .ball = POKEBALL_COUNT,
#line 6290
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6292
                MOVE_SNOWSCAPE,
                MOVE_BLIZZARD,
                MOVE_PSYCHIC_NOISE,
                MOVE_FREEZE_DRY,
            },
            },
            {
#line 6297
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6297
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 6300
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 148, 252, 0),
#line 6302
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6298
            .ability = ABILITY_SWIFT_SWIM,
#line 6299
            .lvl = 41,
            .ball = POKEBALL_COUNT,
#line 6301
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6303
                MOVE_SNOWSCAPE,
                MOVE_BLIZZARD,
                MOVE_BOUNCE,
                MOVE_SHELL_SMASH,
            },
            },
        },
    },
#line 6308
    [DIFFICULTY_NORMAL][TRAINER_1710375D] =
    {
#line 6309
        .trainerName = _("1710375D"),
#line 6310
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6312
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6311
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6313
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6314
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6316
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6316
            .heldItem = ITEM_AIR_BALLOON,
#line 6319
            .ev = TRAINER_PARTY_EVS(104, 252, 44, 0, 0, 0),
#line 6320
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6317
            .ability = ABILITY_MOLD_BREAKER,
#line 6318
            .lvl = 45,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6321
                MOVE_EARTHQUAKE,
                MOVE_SWORDS_DANCE,
                MOVE_RAPID_SPIN,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 6326
            .species = SPECIES_FRAXURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6326
            .heldItem = ITEM_SITRUS_BERRY,
#line 6329
            .ev = TRAINER_PARTY_EVS(92, 108, 172, 0, 0, 28),
#line 6330
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6327
            .ability = ABILITY_MOLD_BREAKER,
#line 6328
            .lvl = 40,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6331
                MOVE_STOMPING_TANTRUM,
                MOVE_SWORDS_DANCE,
                MOVE_SCALE_SHOT,
                MOVE_BREAKING_SWIPE,
            },
            },
            {
#line 6336
            .species = SPECIES_PANGORO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6336
            .heldItem = ITEM_EXPERT_BELT,
#line 6339
            .ev = TRAINER_PARTY_EVS(108, 248, 44, 0, 0, 0),
#line 6340
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6337
            .ability = ABILITY_MOLD_BREAKER,
#line 6338
            .lvl = 46,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6341
                MOVE_DRAIN_PUNCH,
                MOVE_THIEF,
                MOVE_ICE_PUNCH,
                MOVE_BULLET_PUNCH,
            },
            },
            {
#line 6346
            .species = SPECIES_HAWLUCHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6346
            .heldItem = ITEM_PAYAPA_BERRY,
#line 6349
            .ev = TRAINER_PARTY_EVS(68, 248, 0, 0, 0, 80),
#line 6350
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6347
            .ability = ABILITY_MOLD_BREAKER,
#line 6348
            .lvl = 45,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6351
                MOVE_SWORDS_DANCE,
                MOVE_DUAL_WINGBEAT,
                MOVE_FLYING_PRESS,
                MOVE_GRASS_KNOT,
            },
            },
        },
    },
#line 6356
    [DIFFICULTY_NORMAL][TRAINER_17DCC938] =
    {
#line 6357
        .trainerName = _("17DCC938"),
#line 6358
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6360
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6359
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6361
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6362
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6364
            .species = SPECIES_HONEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6364
            .heldItem = ITEM_ORAN_BERRY,
#line 6367
            .ev = TRAINER_PARTY_EVS(80, 160, 80, 0, 0, 80),
#line 6368
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6365
            .ability = ABILITY_NO_GUARD,
#line 6366
            .lvl = 35,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6369
                MOVE_ROCK_SLIDE,
                MOVE_FURY_CUTTER,
                MOVE_STEEL_BEAM,
            },
            },
            {
#line 6373
            .species = SPECIES_DOUBLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6373
            .heldItem = ITEM_SITRUS_BERRY,
#line 6376
            .ev = TRAINER_PARTY_EVS(172, 92, 132, 0, 0, 0),
#line 6377
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6374
            .ability = ABILITY_NO_GUARD,
#line 6375
            .lvl = 40,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6378
                MOVE_BRICK_BREAK,
                MOVE_GYRO_BALL,
                MOVE_NIGHT_SLASH,
                MOVE_BRUTAL_SWING,
            },
            },
            {
#line 6383
            .species = SPECIES_AEGISLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6383
            .heldItem = ITEM_AIR_BALLOON,
#line 6386
            .ev = TRAINER_PARTY_EVS(108, 252, 36, 0, 0, 0),
#line 6388
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6384
            .ability = ABILITY_STANCE_CHANGE,
#line 6385
            .lvl = 42,
            .ball = POKEBALL_COUNT,
#line 6387
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6389
                MOVE_KINGS_SHIELD,
                MOVE_SWORDS_DANCE,
                MOVE_SHADOW_SNEAK,
                MOVE_CLOSE_COMBAT,
            },
            },
            {
#line 6394
            .species = SPECIES_AEGISLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6394
            .heldItem = ITEM_LEFTOVERS,
#line 6397
            .ev = TRAINER_PARTY_EVS(108, 0, 36, 0, 252, 0),
#line 6399
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6395
            .ability = ABILITY_STANCE_CHANGE,
#line 6396
            .lvl = 42,
            .ball = POKEBALL_COUNT,
#line 6398
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6400
                MOVE_KINGS_SHIELD,
                MOVE_SHADOW_BALL,
                MOVE_SUBSTITUTE,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 6405
    [DIFFICULTY_NORMAL][TRAINER_188A6F20] =
    {
#line 6406
        .trainerName = _("188A6F20"),
#line 6407
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6408
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6410
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6412
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6411
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6413
    [DIFFICULTY_NORMAL][TRAINER_1932C509] =
    {
#line 6414
        .trainerName = _("1932C509"),
#line 6415
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6416
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6418
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6420
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6419
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6421
    [DIFFICULTY_NORMAL][TRAINER_19477C78] =
    {
#line 6422
        .trainerName = _("19477C78"),
#line 6423
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6424
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6426
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6428
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6427
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6429
    [DIFFICULTY_NORMAL][TRAINER_19C5BAD7] =
    {
#line 6430
        .trainerName = _("19C5BAD7"),
#line 6431
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6432
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6434
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6436
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6435
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6437
    [DIFFICULTY_NORMAL][TRAINER_19CD0726] =
    {
#line 6438
        .trainerName = _("19CD0726"),
#line 6439
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6440
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6442
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6444
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6443
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6445
    [DIFFICULTY_NORMAL][TRAINER_19D7682B] =
    {
#line 6446
        .trainerName = _("19D7682B"),
#line 6447
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6448
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6450
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6452
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6451
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6453
    [DIFFICULTY_NORMAL][TRAINER_1A2CA162] =
    {
#line 6454
        .trainerName = _("1A2CA162"),
#line 6455
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6456
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6458
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6460
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6459
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6461
    [DIFFICULTY_NORMAL][TRAINER_1A763631] =
    {
#line 6462
        .trainerName = _("1A763631"),
#line 6463
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6464
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6466
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6468
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6467
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6469
    [DIFFICULTY_NORMAL][TRAINER_1AE5CAF7] =
    {
#line 6470
        .trainerName = _("1AE5CAF7"),
#line 6471
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6472
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6474
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6476
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6475
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6477
    [DIFFICULTY_NORMAL][TRAINER_1AE89BEB] =
    {
#line 6478
        .trainerName = _("1AE89BEB"),
#line 6479
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6482
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6484
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6483
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6485
    [DIFFICULTY_NORMAL][TRAINER_1AEA3CEA] =
    {
#line 6486
        .trainerName = _("1AEA3CEA"),
#line 6487
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6488
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6490
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6492
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6491
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6493
    [DIFFICULTY_NORMAL][TRAINER_1B517ABD] =
    {
#line 6494
        .trainerName = _("1B517ABD"),
#line 6495
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6496
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6498
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6500
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6499
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6501
    [DIFFICULTY_NORMAL][TRAINER_1B616469] =
    {
#line 6502
        .trainerName = _("1B616469"),
#line 6503
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6504
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6506
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6508
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6507
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6509
    [DIFFICULTY_NORMAL][TRAINER_1BA35D11] =
    {
#line 6510
        .trainerName = _("1BA35D11"),
#line 6511
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6512
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6514
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6516
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6515
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6517
    [DIFFICULTY_NORMAL][TRAINER_1BB1218F] =
    {
#line 6518
        .trainerName = _("1BB1218F"),
#line 6519
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6520
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6522
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6524
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6523
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6525
    [DIFFICULTY_NORMAL][TRAINER_1BC45966] =
    {
#line 6526
        .trainerName = _("1BC45966"),
#line 6527
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6528
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6530
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6532
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6531
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6533
    [DIFFICULTY_NORMAL][TRAINER_1C2B088C] =
    {
#line 6534
        .trainerName = _("1C2B088C"),
#line 6535
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6536
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6538
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6540
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6539
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6541
    [DIFFICULTY_NORMAL][TRAINER_1C6CA7F6] =
    {
#line 6542
        .trainerName = _("1C6CA7F6"),
#line 6543
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6544
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6546
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6548
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6547
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6549
    [DIFFICULTY_NORMAL][TRAINER_1CBE4FB1] =
    {
#line 6550
        .trainerName = _("1CBE4FB1"),
#line 6551
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6552
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6554
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6556
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6555
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6557
    [DIFFICULTY_NORMAL][TRAINER_1CBFAF10] =
    {
#line 6558
        .trainerName = _("1CBFAF10"),
#line 6559
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6560
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6562
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6564
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6563
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6565
    [DIFFICULTY_NORMAL][TRAINER_1CC4D5D6] =
    {
#line 6566
        .trainerName = _("1CC4D5D6"),
#line 6567
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6568
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6570
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6572
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6571
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6573
    [DIFFICULTY_NORMAL][TRAINER_1D63E5A1] =
    {
#line 6574
        .trainerName = _("1D63E5A1"),
#line 6575
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6578
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6580
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6579
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6581
    [DIFFICULTY_NORMAL][TRAINER_1D7A6DED] =
    {
#line 6582
        .trainerName = _("1D7A6DED"),
#line 6583
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6584
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6586
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6588
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6587
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6589
    [DIFFICULTY_NORMAL][TRAINER_1D93B10D] =
    {
#line 6590
        .trainerName = _("1D93B10D"),
#line 6591
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6592
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6594
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6596
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6595
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6597
    [DIFFICULTY_NORMAL][TRAINER_1DD07C78] =
    {
#line 6598
        .trainerName = _("1DD07C78"),
#line 6599
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6600
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6602
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6604
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6603
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6605
    [DIFFICULTY_NORMAL][TRAINER_1E5E6E80] =
    {
#line 6606
        .trainerName = _("1E5E6E80"),
#line 6607
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6608
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6610
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6612
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6611
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6613
    [DIFFICULTY_NORMAL][TRAINER_1EE34E30] =
    {
#line 6614
        .trainerName = _("1EE34E30"),
#line 6615
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6616
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6618
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6620
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6619
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6621
    [DIFFICULTY_NORMAL][TRAINER_1F24A6B1] =
    {
#line 6622
        .trainerName = _("1F24A6B1"),
#line 6623
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6624
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6626
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6628
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6627
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6629
    [DIFFICULTY_NORMAL][TRAINER_1F2A70D3] =
    {
#line 6630
        .trainerName = _("1F2A70D3"),
#line 6631
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6632
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6634
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6636
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6635
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6637
    [DIFFICULTY_NORMAL][TRAINER_1FD08020] =
    {
#line 6638
        .trainerName = _("1FD08020"),
#line 6639
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6640
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6642
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6644
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6643
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6645
    [DIFFICULTY_NORMAL][TRAINER_200650CA] =
    {
#line 6646
        .trainerName = _("200650CA"),
#line 6647
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6648
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6650
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6652
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6651
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6653
    [DIFFICULTY_NORMAL][TRAINER_20170FA5] =
    {
#line 6654
        .trainerName = _("20170FA5"),
#line 6655
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6656
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6658
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6660
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6659
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6661
    [DIFFICULTY_NORMAL][TRAINER_20993B87] =
    {
#line 6662
        .trainerName = _("20993B87"),
#line 6663
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6664
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6666
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6668
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6667
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6669
    [DIFFICULTY_NORMAL][TRAINER_20A10A97] =
    {
#line 6670
        .trainerName = _("20A10A97"),
#line 6671
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6674
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6676
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6675
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6677
    [DIFFICULTY_NORMAL][TRAINER_20A6F3A6] =
    {
#line 6678
        .trainerName = _("20A6F3A6"),
#line 6679
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6682
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6684
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6683
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6685
    [DIFFICULTY_NORMAL][TRAINER_20DC389D] =
    {
#line 6686
        .trainerName = _("20DC389D"),
#line 6687
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6688
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6690
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6692
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6691
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6693
    [DIFFICULTY_NORMAL][TRAINER_2177173C] =
    {
#line 6694
        .trainerName = _("2177173C"),
#line 6695
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6696
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6698
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6700
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6699
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6701
    [DIFFICULTY_NORMAL][TRAINER_2180E5CD] =
    {
#line 6702
        .trainerName = _("2180E5CD"),
#line 6703
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6704
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6706
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6708
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6707
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6709
    [DIFFICULTY_NORMAL][TRAINER_21EB8B2C] =
    {
#line 6710
        .trainerName = _("21EB8B2C"),
#line 6711
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6712
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6714
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6716
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6715
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6717
    [DIFFICULTY_NORMAL][TRAINER_22BA389B] =
    {
#line 6718
        .trainerName = _("22BA389B"),
#line 6719
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6720
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6722
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6724
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6723
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6725
    [DIFFICULTY_NORMAL][TRAINER_22DD5E2B] =
    {
#line 6726
        .trainerName = _("22DD5E2B"),
#line 6727
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6728
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6730
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6732
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6731
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6733
    [DIFFICULTY_NORMAL][TRAINER_22E7DE36] =
    {
#line 6734
        .trainerName = _("22E7DE36"),
#line 6735
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6736
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6738
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6740
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6739
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6741
    [DIFFICULTY_NORMAL][TRAINER_23C3170F] =
    {
#line 6742
        .trainerName = _("23C3170F"),
#line 6743
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6744
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6746
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6748
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6747
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6749
    [DIFFICULTY_NORMAL][TRAINER_23F50BC3] =
    {
#line 6750
        .trainerName = _("23F50BC3"),
#line 6751
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6752
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6754
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6756
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6755
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6757
    [DIFFICULTY_NORMAL][TRAINER_2434A25C] =
    {
#line 6758
        .trainerName = _("2434A25C"),
#line 6759
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6760
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6762
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6764
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6763
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6765
    [DIFFICULTY_NORMAL][TRAINER_245235C9] =
    {
#line 6766
        .trainerName = _("245235C9"),
#line 6767
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6768
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6770
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6772
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6771
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6773
    [DIFFICULTY_NORMAL][TRAINER_246CBBD5] =
    {
#line 6774
        .trainerName = _("246CBBD5"),
#line 6775
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6776
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6778
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6780
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6779
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6781
    [DIFFICULTY_NORMAL][TRAINER_247FE019] =
    {
#line 6782
        .trainerName = _("247FE019"),
#line 6783
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6784
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6786
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6788
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6787
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6789
    [DIFFICULTY_NORMAL][TRAINER_24AAFD0D] =
    {
#line 6790
        .trainerName = _("24AAFD0D"),
#line 6791
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6792
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6794
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6796
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6795
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6797
    [DIFFICULTY_NORMAL][TRAINER_24AC96DF] =
    {
#line 6798
        .trainerName = _("24AC96DF"),
#line 6799
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6800
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6802
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6804
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6803
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6805
    [DIFFICULTY_NORMAL][TRAINER_2561CB61] =
    {
#line 6806
        .trainerName = _("2561CB61"),
#line 6807
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6808
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6810
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6812
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6811
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6813
    [DIFFICULTY_NORMAL][TRAINER_26268FB4] =
    {
#line 6814
        .trainerName = _("26268FB4"),
#line 6815
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6816
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6818
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6820
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6819
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6821
    [DIFFICULTY_NORMAL][TRAINER_265174A6] =
    {
#line 6822
        .trainerName = _("265174A6"),
#line 6823
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6824
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6826
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6828
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6827
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6829
    [DIFFICULTY_NORMAL][TRAINER_272FA5B8] =
    {
#line 6830
        .trainerName = _("272FA5B8"),
#line 6831
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6832
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6834
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6836
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6835
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6837
    [DIFFICULTY_NORMAL][TRAINER_27B23C10] =
    {
#line 6838
        .trainerName = _("27B23C10"),
#line 6839
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6840
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6842
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6844
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6843
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6845
    [DIFFICULTY_NORMAL][TRAINER_27CEF8F2] =
    {
#line 6846
        .trainerName = _("27CEF8F2"),
#line 6847
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6848
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6850
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6852
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6851
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6853
    [DIFFICULTY_NORMAL][TRAINER_27E6F69F] =
    {
#line 6854
        .trainerName = _("27E6F69F"),
#line 6855
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6856
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6858
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6860
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6859
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6861
    [DIFFICULTY_NORMAL][TRAINER_28B294D2] =
    {
#line 6862
        .trainerName = _("28B294D2"),
#line 6863
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6864
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6866
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6868
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6867
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6869
    [DIFFICULTY_NORMAL][TRAINER_28E0625E] =
    {
#line 6870
        .trainerName = _("28E0625E"),
#line 6871
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6872
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6874
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6876
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6875
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6877
    [DIFFICULTY_NORMAL][TRAINER_292E386F] =
    {
#line 6878
        .trainerName = _("292E386F"),
#line 6879
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6880
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6882
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6884
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6883
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6885
    [DIFFICULTY_NORMAL][TRAINER_29AE727B] =
    {
#line 6886
        .trainerName = _("29AE727B"),
#line 6887
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6888
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6890
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6892
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6891
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6893
    [DIFFICULTY_NORMAL][TRAINER_2A305E88] =
    {
#line 6894
        .trainerName = _("2A305E88"),
#line 6895
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6896
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6898
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6900
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6899
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6901
    [DIFFICULTY_NORMAL][TRAINER_2A3F43CA] =
    {
#line 6902
        .trainerName = _("2A3F43CA"),
#line 6903
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6904
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6906
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6908
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6907
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6909
    [DIFFICULTY_NORMAL][TRAINER_2A7BF9FF] =
    {
#line 6910
        .trainerName = _("2A7BF9FF"),
#line 6911
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6912
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6914
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6916
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6915
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6917
    [DIFFICULTY_NORMAL][TRAINER_2A83B15E] =
    {
#line 6918
        .trainerName = _("2A83B15E"),
#line 6919
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6920
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6922
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6924
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6923
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6925
    [DIFFICULTY_NORMAL][TRAINER_2AD73BF3] =
    {
#line 6926
        .trainerName = _("2AD73BF3"),
#line 6927
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6928
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6930
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6932
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6931
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6933
    [DIFFICULTY_NORMAL][TRAINER_2B163825] =
    {
#line 6934
        .trainerName = _("2B163825"),
#line 6935
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6938
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6940
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6939
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6941
    [DIFFICULTY_NORMAL][TRAINER_2B249E40] =
    {
#line 6942
        .trainerName = _("2B249E40"),
#line 6943
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6944
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6946
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6948
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6947
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6949
    [DIFFICULTY_NORMAL][TRAINER_2BCA066C] =
    {
#line 6950
        .trainerName = _("2BCA066C"),
#line 6951
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6952
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6954
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6956
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6955
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6957
    [DIFFICULTY_NORMAL][TRAINER_2C040422] =
    {
#line 6958
        .trainerName = _("2C040422"),
#line 6959
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6960
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6962
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6964
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6963
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6965
    [DIFFICULTY_NORMAL][TRAINER_2C22CE48] =
    {
#line 6966
        .trainerName = _("2C22CE48"),
#line 6967
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6968
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6970
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6972
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6971
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6973
    [DIFFICULTY_NORMAL][TRAINER_2C398893] =
    {
#line 6974
        .trainerName = _("2C398893"),
#line 6975
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6976
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6978
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6980
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6979
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6981
    [DIFFICULTY_NORMAL][TRAINER_2C5FFA9F] =
    {
#line 6982
        .trainerName = _("2C5FFA9F"),
#line 6983
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6984
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6986
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6988
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6987
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6989
    [DIFFICULTY_NORMAL][TRAINER_2D1A100A] =
    {
#line 6990
        .trainerName = _("2D1A100A"),
#line 6991
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 6992
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6994
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6996
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6995
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6997
    [DIFFICULTY_NORMAL][TRAINER_2D203158] =
    {
#line 6998
        .trainerName = _("2D203158"),
#line 6999
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7000
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7002
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7004
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7003
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7005
    [DIFFICULTY_NORMAL][TRAINER_2D29DC23] =
    {
#line 7006
        .trainerName = _("2D29DC23"),
#line 7007
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7008
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7010
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7012
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7011
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7013
    [DIFFICULTY_NORMAL][TRAINER_2D6DE246] =
    {
#line 7014
        .trainerName = _("2D6DE246"),
#line 7015
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7018
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7020
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7019
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7021
    [DIFFICULTY_NORMAL][TRAINER_2D92F001] =
    {
#line 7022
        .trainerName = _("2D92F001"),
#line 7023
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7024
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7026
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7028
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7027
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7029
    [DIFFICULTY_NORMAL][TRAINER_2DC29B9E] =
    {
#line 7030
        .trainerName = _("2DC29B9E"),
#line 7031
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7032
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7034
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7036
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7035
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7037
    [DIFFICULTY_NORMAL][TRAINER_2E218A8E] =
    {
#line 7038
        .trainerName = _("2E218A8E"),
#line 7039
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7040
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7042
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7044
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7043
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7045
    [DIFFICULTY_NORMAL][TRAINER_2E593FA9] =
    {
#line 7046
        .trainerName = _("2E593FA9"),
#line 7047
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7048
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7050
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7052
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7051
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7053
    [DIFFICULTY_NORMAL][TRAINER_2EC49459] =
    {
#line 7054
        .trainerName = _("2EC49459"),
#line 7055
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7056
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7058
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7060
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7059
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7061
    [DIFFICULTY_NORMAL][TRAINER_2F0770D3] =
    {
#line 7062
        .trainerName = _("2F0770D3"),
#line 7063
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7064
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7066
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7068
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7067
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7069
    [DIFFICULTY_NORMAL][TRAINER_2F09421D] =
    {
#line 7070
        .trainerName = _("2F09421D"),
#line 7071
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7074
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7076
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7075
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7077
    [DIFFICULTY_NORMAL][TRAINER_2FF79A0B] =
    {
#line 7078
        .trainerName = _("2FF79A0B"),
#line 7079
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7080
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7082
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7084
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7083
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7085
    [DIFFICULTY_NORMAL][TRAINER_3009CC76] =
    {
#line 7086
        .trainerName = _("3009CC76"),
#line 7087
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7088
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7090
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7092
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7091
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7093
    [DIFFICULTY_NORMAL][TRAINER_30522A9A] =
    {
#line 7094
        .trainerName = _("30522A9A"),
#line 7095
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7098
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7100
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7099
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7101
    [DIFFICULTY_NORMAL][TRAINER_30ACE135] =
    {
#line 7102
        .trainerName = _("30ACE135"),
#line 7103
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7106
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7108
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7107
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7109
    [DIFFICULTY_NORMAL][TRAINER_311B3EFC] =
    {
#line 7110
        .trainerName = _("311B3EFC"),
#line 7111
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7112
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7114
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7116
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7115
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7117
    [DIFFICULTY_NORMAL][TRAINER_317B8932] =
    {
#line 7118
        .trainerName = _("317B8932"),
#line 7119
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7120
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7122
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7124
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7123
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7125
    [DIFFICULTY_NORMAL][TRAINER_31D36FE6] =
    {
#line 7126
        .trainerName = _("31D36FE6"),
#line 7127
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7128
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7130
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7132
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7131
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7133
    [DIFFICULTY_NORMAL][TRAINER_32C1F13D] =
    {
#line 7134
        .trainerName = _("32C1F13D"),
#line 7135
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7136
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7138
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7140
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7139
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7141
    [DIFFICULTY_NORMAL][TRAINER_33AB4856] =
    {
#line 7142
        .trainerName = _("33AB4856"),
#line 7143
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7144
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7146
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7148
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7147
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7149
    [DIFFICULTY_NORMAL][TRAINER_3566F099] =
    {
#line 7150
        .trainerName = _("3566F099"),
#line 7151
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7152
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7154
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7156
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7155
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7157
    [DIFFICULTY_NORMAL][TRAINER_35E0E027] =
    {
#line 7158
        .trainerName = _("35E0E027"),
#line 7159
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7160
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7162
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7164
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7163
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7165
    [DIFFICULTY_NORMAL][TRAINER_36662EEF] =
    {
#line 7166
        .trainerName = _("36662EEF"),
#line 7167
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7168
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7170
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7172
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7171
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7173
    [DIFFICULTY_NORMAL][TRAINER_3681E8DE] =
    {
#line 7174
        .trainerName = _("3681E8DE"),
#line 7175
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7176
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7178
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7180
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7179
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7181
    [DIFFICULTY_NORMAL][TRAINER_3789DC6E] =
    {
#line 7182
        .trainerName = _("3789DC6E"),
#line 7183
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7186
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7188
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7187
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7189
    [DIFFICULTY_NORMAL][TRAINER_37B9EFB7] =
    {
#line 7190
        .trainerName = _("37B9EFB7"),
#line 7191
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7192
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7194
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7195
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7197
    [DIFFICULTY_NORMAL][TRAINER_37EDB78E] =
    {
#line 7198
        .trainerName = _("37EDB78E"),
#line 7199
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7200
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7202
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7204
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7203
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7205
    [DIFFICULTY_NORMAL][TRAINER_382E2AB3] =
    {
#line 7206
        .trainerName = _("382E2AB3"),
#line 7207
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7208
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7210
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7212
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7211
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7213
    [DIFFICULTY_NORMAL][TRAINER_3842496B] =
    {
#line 7214
        .trainerName = _("3842496B"),
#line 7215
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7216
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7218
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7220
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7219
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7221
    [DIFFICULTY_NORMAL][TRAINER_387351C1] =
    {
#line 7222
        .trainerName = _("387351C1"),
#line 7223
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7224
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7226
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7228
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7227
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7229
    [DIFFICULTY_NORMAL][TRAINER_38A47BDB] =
    {
#line 7230
        .trainerName = _("38A47BDB"),
#line 7231
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7232
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7234
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7236
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7235
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7237
    [DIFFICULTY_NORMAL][TRAINER_3924756E] =
    {
#line 7238
        .trainerName = _("3924756E"),
#line 7239
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7240
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7242
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7244
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7243
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7245
    [DIFFICULTY_NORMAL][TRAINER_3947ACC3] =
    {
#line 7246
        .trainerName = _("3947ACC3"),
#line 7247
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7248
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7250
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7252
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7251
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7253
    [DIFFICULTY_NORMAL][TRAINER_39AD4606] =
    {
#line 7254
        .trainerName = _("39AD4606"),
#line 7255
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7256
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7258
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7260
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7259
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7261
    [DIFFICULTY_NORMAL][TRAINER_39E0AE4F] =
    {
#line 7262
        .trainerName = _("39E0AE4F"),
#line 7263
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7264
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7266
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7268
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7267
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7269
    [DIFFICULTY_NORMAL][TRAINER_39E78D45] =
    {
#line 7270
        .trainerName = _("39E78D45"),
#line 7271
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7272
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7274
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7276
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7275
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7277
    [DIFFICULTY_NORMAL][TRAINER_3A11452B] =
    {
#line 7278
        .trainerName = _("3A11452B"),
#line 7279
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7280
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7282
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7284
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7283
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7285
    [DIFFICULTY_NORMAL][TRAINER_3A840205] =
    {
#line 7286
        .trainerName = _("3A840205"),
#line 7287
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7288
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7290
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7292
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7291
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7293
    [DIFFICULTY_NORMAL][TRAINER_3AD97475] =
    {
#line 7294
        .trainerName = _("3AD97475"),
#line 7295
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7296
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7298
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7300
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7299
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7301
    [DIFFICULTY_NORMAL][TRAINER_3AEE4974] =
    {
#line 7302
        .trainerName = _("3AEE4974"),
#line 7303
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7304
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7306
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7308
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7307
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7309
    [DIFFICULTY_NORMAL][TRAINER_3BAF0C60] =
    {
#line 7310
        .trainerName = _("3BAF0C60"),
#line 7311
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7312
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7314
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7316
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7315
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7317
    [DIFFICULTY_NORMAL][TRAINER_3BDED445] =
    {
#line 7318
        .trainerName = _("3BDED445"),
#line 7319
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7320
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7322
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7324
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7323
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7325
    [DIFFICULTY_NORMAL][TRAINER_3C621048] =
    {
#line 7326
        .trainerName = _("3C621048"),
#line 7327
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7328
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7330
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7332
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7331
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7333
    [DIFFICULTY_NORMAL][TRAINER_3C74DAE2] =
    {
#line 7334
        .trainerName = _("3C74DAE2"),
#line 7335
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7336
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7338
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7340
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7339
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7341
    [DIFFICULTY_NORMAL][TRAINER_3C7AC359] =
    {
#line 7342
        .trainerName = _("3C7AC359"),
#line 7343
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7344
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7346
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7348
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7347
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7349
    [DIFFICULTY_NORMAL][TRAINER_3CDE5F9E] =
    {
#line 7350
        .trainerName = _("3CDE5F9E"),
#line 7351
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7352
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7354
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7356
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7355
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7357
    [DIFFICULTY_NORMAL][TRAINER_3CECE368] =
    {
#line 7358
        .trainerName = _("3CECE368"),
#line 7359
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7360
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7362
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7364
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7363
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7365
    [DIFFICULTY_NORMAL][TRAINER_3CFF3841] =
    {
#line 7366
        .trainerName = _("3CFF3841"),
#line 7367
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7368
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7370
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7372
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7371
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7373
    [DIFFICULTY_NORMAL][TRAINER_3D502E2F] =
    {
#line 7374
        .trainerName = _("3D502E2F"),
#line 7375
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7376
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7378
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7380
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7379
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7381
    [DIFFICULTY_NORMAL][TRAINER_3D7FDE57] =
    {
#line 7382
        .trainerName = _("3D7FDE57"),
#line 7383
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7384
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7386
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7388
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7387
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7389
    [DIFFICULTY_NORMAL][TRAINER_3DCD0BBC] =
    {
#line 7390
        .trainerName = _("3DCD0BBC"),
#line 7391
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7392
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7394
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7396
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7395
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7397
    [DIFFICULTY_NORMAL][TRAINER_3E17924C] =
    {
#line 7398
        .trainerName = _("3E17924C"),
#line 7399
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7400
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7402
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7404
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7403
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7405
    [DIFFICULTY_NORMAL][TRAINER_3EB6FA04] =
    {
#line 7406
        .trainerName = _("3EB6FA04"),
#line 7407
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7408
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7410
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7412
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7411
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7413
    [DIFFICULTY_NORMAL][TRAINER_3EFCF1C8] =
    {
#line 7414
        .trainerName = _("3EFCF1C8"),
#line 7415
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7416
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7418
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7420
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7419
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7421
    [DIFFICULTY_NORMAL][TRAINER_3F0BF52E] =
    {
#line 7422
        .trainerName = _("3F0BF52E"),
#line 7423
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7424
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7426
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7428
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7427
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7429
    [DIFFICULTY_NORMAL][TRAINER_4000C8A0] =
    {
#line 7430
        .trainerName = _("4000C8A0"),
#line 7431
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7432
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7434
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7436
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7435
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7437
    [DIFFICULTY_NORMAL][TRAINER_403D932D] =
    {
#line 7438
        .trainerName = _("403D932D"),
#line 7439
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7440
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7442
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7444
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7443
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7445
    [DIFFICULTY_NORMAL][TRAINER_408862C4] =
    {
#line 7446
        .trainerName = _("408862C4"),
#line 7447
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7448
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7450
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7452
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7451
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7453
    [DIFFICULTY_NORMAL][TRAINER_419282AD] =
    {
#line 7454
        .trainerName = _("419282AD"),
#line 7455
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7456
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7458
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7460
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7459
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7461
    [DIFFICULTY_NORMAL][TRAINER_419FCBAE] =
    {
#line 7462
        .trainerName = _("419FCBAE"),
#line 7463
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7464
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7466
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7468
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7467
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7469
    [DIFFICULTY_NORMAL][TRAINER_41B8591B] =
    {
#line 7470
        .trainerName = _("41B8591B"),
#line 7471
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7472
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7474
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7476
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7475
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7477
    [DIFFICULTY_NORMAL][TRAINER_41DCF7BA] =
    {
#line 7478
        .trainerName = _("41DCF7BA"),
#line 7479
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7482
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7484
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7483
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7485
    [DIFFICULTY_NORMAL][TRAINER_4227B911] =
    {
#line 7486
        .trainerName = _("4227B911"),
#line 7487
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7488
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7490
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7492
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7491
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7493
    [DIFFICULTY_NORMAL][TRAINER_4239B726] =
    {
#line 7494
        .trainerName = _("4239B726"),
#line 7495
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7496
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7498
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7500
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7499
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7501
    [DIFFICULTY_NORMAL][TRAINER_42BC1D70] =
    {
#line 7502
        .trainerName = _("42BC1D70"),
#line 7503
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7504
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7506
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7508
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7507
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7509
    [DIFFICULTY_NORMAL][TRAINER_42BE3E94] =
    {
#line 7510
        .trainerName = _("42BE3E94"),
#line 7511
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7512
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7514
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7516
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7515
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7517
    [DIFFICULTY_NORMAL][TRAINER_42C68371] =
    {
#line 7518
        .trainerName = _("42C68371"),
#line 7519
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7520
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7522
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7524
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7523
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7525
    [DIFFICULTY_NORMAL][TRAINER_432F34FA] =
    {
#line 7526
        .trainerName = _("432F34FA"),
#line 7527
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7528
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7530
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7532
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7531
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7533
    [DIFFICULTY_NORMAL][TRAINER_437E553A] =
    {
#line 7534
        .trainerName = _("437E553A"),
#line 7535
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7536
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7538
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7540
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7539
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7541
    [DIFFICULTY_NORMAL][TRAINER_4394141C] =
    {
#line 7542
        .trainerName = _("4394141C"),
#line 7543
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7544
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7546
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7548
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7547
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7549
    [DIFFICULTY_NORMAL][TRAINER_43B111AD] =
    {
#line 7550
        .trainerName = _("43B111AD"),
#line 7551
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7552
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7554
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7556
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7555
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7557
    [DIFFICULTY_NORMAL][TRAINER_43B30B5D] =
    {
#line 7558
        .trainerName = _("43B30B5D"),
#line 7559
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7560
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7562
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7564
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7563
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7565
    [DIFFICULTY_NORMAL][TRAINER_43D6557C] =
    {
#line 7566
        .trainerName = _("43D6557C"),
#line 7567
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7568
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7570
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7572
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7571
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7573
    [DIFFICULTY_NORMAL][TRAINER_44251BF9] =
    {
#line 7574
        .trainerName = _("44251BF9"),
#line 7575
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7578
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7580
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7579
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7581
    [DIFFICULTY_NORMAL][TRAINER_44D28B98] =
    {
#line 7582
        .trainerName = _("44D28B98"),
#line 7583
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7584
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7586
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7588
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7587
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7589
    [DIFFICULTY_NORMAL][TRAINER_44E68738] =
    {
#line 7590
        .trainerName = _("44E68738"),
#line 7591
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7592
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7594
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7596
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7595
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7597
    [DIFFICULTY_NORMAL][TRAINER_44F86666] =
    {
#line 7598
        .trainerName = _("44F86666"),
#line 7599
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7600
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7602
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7604
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7603
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7605
    [DIFFICULTY_NORMAL][TRAINER_458C3B90] =
    {
#line 7606
        .trainerName = _("458C3B90"),
#line 7607
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7608
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7610
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7612
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7611
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7613
    [DIFFICULTY_NORMAL][TRAINER_45CBA787] =
    {
#line 7614
        .trainerName = _("45CBA787"),
#line 7615
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7616
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7618
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7620
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7619
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7621
    [DIFFICULTY_NORMAL][TRAINER_45E5EB22] =
    {
#line 7622
        .trainerName = _("45E5EB22"),
#line 7623
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7624
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7626
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7628
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7627
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7629
    [DIFFICULTY_NORMAL][TRAINER_45ECBA80] =
    {
#line 7630
        .trainerName = _("45ECBA80"),
#line 7631
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7632
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7634
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7636
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7635
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7637
    [DIFFICULTY_NORMAL][TRAINER_460AB144] =
    {
#line 7638
        .trainerName = _("460AB144"),
#line 7639
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7640
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7642
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7644
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7643
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7645
    [DIFFICULTY_NORMAL][TRAINER_46169EA5] =
    {
#line 7646
        .trainerName = _("46169EA5"),
#line 7647
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7648
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7650
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7652
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7651
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7653
    [DIFFICULTY_NORMAL][TRAINER_464C4C44] =
    {
#line 7654
        .trainerName = _("464C4C44"),
#line 7655
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7656
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7658
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7660
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7659
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7661
    [DIFFICULTY_NORMAL][TRAINER_473EE9DE] =
    {
#line 7662
        .trainerName = _("473EE9DE"),
#line 7663
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7664
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7666
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7668
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7667
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7669
    [DIFFICULTY_NORMAL][TRAINER_4787A98D] =
    {
#line 7670
        .trainerName = _("4787A98D"),
#line 7671
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7674
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7676
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7675
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7677
    [DIFFICULTY_NORMAL][TRAINER_479BBFEB] =
    {
#line 7678
        .trainerName = _("479BBFEB"),
#line 7679
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7682
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7684
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7683
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7685
    [DIFFICULTY_NORMAL][TRAINER_47EACF7E] =
    {
#line 7686
        .trainerName = _("47EACF7E"),
#line 7687
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7688
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7690
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7692
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7691
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7693
    [DIFFICULTY_NORMAL][TRAINER_4848801D] =
    {
#line 7694
        .trainerName = _("4848801D"),
#line 7695
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7696
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7698
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7700
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7699
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7701
    [DIFFICULTY_NORMAL][TRAINER_487BEC6D] =
    {
#line 7702
        .trainerName = _("487BEC6D"),
#line 7703
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7704
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7706
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7708
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7707
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7709
    [DIFFICULTY_NORMAL][TRAINER_492E0A66] =
    {
#line 7710
        .trainerName = _("492E0A66"),
#line 7711
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7712
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7714
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7716
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7715
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7717
    [DIFFICULTY_NORMAL][TRAINER_494ECB35] =
    {
#line 7718
        .trainerName = _("494ECB35"),
#line 7719
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7720
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7722
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7724
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7723
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7725
    [DIFFICULTY_NORMAL][TRAINER_494F5379] =
    {
#line 7726
        .trainerName = _("494F5379"),
#line 7727
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7728
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7730
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7732
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7731
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7733
    [DIFFICULTY_NORMAL][TRAINER_49805D55] =
    {
#line 7734
        .trainerName = _("49805D55"),
#line 7735
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7736
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7738
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7740
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7739
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7741
    [DIFFICULTY_NORMAL][TRAINER_49EA8A40] =
    {
#line 7742
        .trainerName = _("49EA8A40"),
#line 7743
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7744
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7746
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7748
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7747
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7749
    [DIFFICULTY_NORMAL][TRAINER_4A323E4A] =
    {
#line 7750
        .trainerName = _("4A323E4A"),
#line 7751
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7752
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7754
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7756
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7755
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7757
    [DIFFICULTY_NORMAL][TRAINER_4A3EB696] =
    {
#line 7758
        .trainerName = _("4A3EB696"),
#line 7759
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7760
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7762
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7764
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7763
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7765
    [DIFFICULTY_NORMAL][TRAINER_4ABDB43A] =
    {
#line 7766
        .trainerName = _("4ABDB43A"),
#line 7767
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7768
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7770
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7772
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7771
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7773
    [DIFFICULTY_NORMAL][TRAINER_4AD6DB47] =
    {
#line 7774
        .trainerName = _("4AD6DB47"),
#line 7775
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7776
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7778
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7780
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7779
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7781
    [DIFFICULTY_NORMAL][TRAINER_4AF51B8A] =
    {
#line 7782
        .trainerName = _("4AF51B8A"),
#line 7783
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7784
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7786
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7788
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7787
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7789
    [DIFFICULTY_NORMAL][TRAINER_4B2BC403] =
    {
#line 7790
        .trainerName = _("4B2BC403"),
#line 7791
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7792
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7794
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7796
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7795
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7797
    [DIFFICULTY_NORMAL][TRAINER_4B3B0356] =
    {
#line 7798
        .trainerName = _("4B3B0356"),
#line 7799
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7800
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7802
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7804
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7803
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7805
    [DIFFICULTY_NORMAL][TRAINER_4B431569] =
    {
#line 7806
        .trainerName = _("4B431569"),
#line 7807
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7808
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7810
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7812
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7811
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7813
    [DIFFICULTY_NORMAL][TRAINER_4B5B4954] =
    {
#line 7814
        .trainerName = _("4B5B4954"),
#line 7815
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7816
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7818
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7820
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7819
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7821
    [DIFFICULTY_NORMAL][TRAINER_4C2D23EC] =
    {
#line 7822
        .trainerName = _("4C2D23EC"),
#line 7823
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7824
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7826
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7828
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7827
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7829
    [DIFFICULTY_NORMAL][TRAINER_4CE97031] =
    {
#line 7830
        .trainerName = _("4CE97031"),
#line 7831
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7832
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7834
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7836
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7835
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7837
    [DIFFICULTY_NORMAL][TRAINER_4CF43F23] =
    {
#line 7838
        .trainerName = _("4CF43F23"),
#line 7839
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7840
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7842
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7844
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7843
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7845
    [DIFFICULTY_NORMAL][TRAINER_4D8F9D46] =
    {
#line 7846
        .trainerName = _("4D8F9D46"),
#line 7847
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7848
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7850
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7852
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7851
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7853
    [DIFFICULTY_NORMAL][TRAINER_4D98F6C4] =
    {
#line 7854
        .trainerName = _("4D98F6C4"),
#line 7855
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7856
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7858
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7860
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7859
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7861
    [DIFFICULTY_NORMAL][TRAINER_4E072263] =
    {
#line 7862
        .trainerName = _("4E072263"),
#line 7863
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7864
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7866
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7868
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7867
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7869
    [DIFFICULTY_NORMAL][TRAINER_4E0C1EFE] =
    {
#line 7870
        .trainerName = _("4E0C1EFE"),
#line 7871
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7872
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7874
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7876
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7875
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7877
    [DIFFICULTY_NORMAL][TRAINER_4E226A6E] =
    {
#line 7878
        .trainerName = _("4E226A6E"),
#line 7879
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7880
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7882
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7884
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7883
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7885
    [DIFFICULTY_NORMAL][TRAINER_4E5AAFAE] =
    {
#line 7886
        .trainerName = _("4E5AAFAE"),
#line 7887
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7888
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7890
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7892
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7891
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7893
    [DIFFICULTY_NORMAL][TRAINER_4F10DCA9] =
    {
#line 7894
        .trainerName = _("4F10DCA9"),
#line 7895
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7896
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7898
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7900
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7899
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7901
    [DIFFICULTY_NORMAL][TRAINER_50AE78E5] =
    {
#line 7902
        .trainerName = _("50AE78E5"),
#line 7903
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7904
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7906
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7908
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7907
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7909
    [DIFFICULTY_NORMAL][TRAINER_513A43EE] =
    {
#line 7910
        .trainerName = _("513A43EE"),
#line 7911
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7912
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7914
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7916
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7915
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7917
    [DIFFICULTY_NORMAL][TRAINER_51A32DCA] =
    {
#line 7918
        .trainerName = _("51A32DCA"),
#line 7919
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7920
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7922
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7924
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7923
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7925
    [DIFFICULTY_NORMAL][TRAINER_51F6B834] =
    {
#line 7926
        .trainerName = _("51F6B834"),
#line 7927
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7928
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7930
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7932
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7931
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7933
    [DIFFICULTY_NORMAL][TRAINER_5209EDF0] =
    {
#line 7934
        .trainerName = _("5209EDF0"),
#line 7935
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7938
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7940
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7939
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7941
    [DIFFICULTY_NORMAL][TRAINER_52CFC159] =
    {
#line 7942
        .trainerName = _("52CFC159"),
#line 7943
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7944
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7946
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7948
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7947
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7949
    [DIFFICULTY_NORMAL][TRAINER_538D052D] =
    {
#line 7950
        .trainerName = _("538D052D"),
#line 7951
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7952
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7954
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7956
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7955
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7957
    [DIFFICULTY_NORMAL][TRAINER_53A1A61A] =
    {
#line 7958
        .trainerName = _("53A1A61A"),
#line 7959
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7960
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7962
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7964
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7963
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7965
    [DIFFICULTY_NORMAL][TRAINER_53B06C7B] =
    {
#line 7966
        .trainerName = _("53B06C7B"),
#line 7967
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7968
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7970
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7972
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7971
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7973
    [DIFFICULTY_NORMAL][TRAINER_54110A38] =
    {
#line 7974
        .trainerName = _("54110A38"),
#line 7975
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7976
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7978
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7980
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7979
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7981
    [DIFFICULTY_NORMAL][TRAINER_549792BA] =
    {
#line 7982
        .trainerName = _("549792BA"),
#line 7983
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7984
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7986
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7988
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7987
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7989
    [DIFFICULTY_NORMAL][TRAINER_54BAC2DA] =
    {
#line 7990
        .trainerName = _("54BAC2DA"),
#line 7991
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 7992
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7994
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7996
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7995
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7997
    [DIFFICULTY_NORMAL][TRAINER_54F170BE] =
    {
#line 7998
        .trainerName = _("54F170BE"),
#line 7999
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8000
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8002
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8004
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8003
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8005
    [DIFFICULTY_NORMAL][TRAINER_558F80F9] =
    {
#line 8006
        .trainerName = _("558F80F9"),
#line 8007
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8008
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8010
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8012
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8011
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8013
    [DIFFICULTY_NORMAL][TRAINER_55CA00A1] =
    {
#line 8014
        .trainerName = _("55CA00A1"),
#line 8015
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8018
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8020
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8019
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8021
    [DIFFICULTY_NORMAL][TRAINER_55D0BEAA] =
    {
#line 8022
        .trainerName = _("55D0BEAA"),
#line 8023
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8024
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8026
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8028
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8027
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8029
    [DIFFICULTY_NORMAL][TRAINER_55D90FA8] =
    {
#line 8030
        .trainerName = _("55D90FA8"),
#line 8031
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8032
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8034
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8036
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8035
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8037
    [DIFFICULTY_NORMAL][TRAINER_55EBF949] =
    {
#line 8038
        .trainerName = _("55EBF949"),
#line 8039
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8040
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8042
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8044
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8043
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8045
    [DIFFICULTY_NORMAL][TRAINER_565DE3C4] =
    {
#line 8046
        .trainerName = _("565DE3C4"),
#line 8047
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8048
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8050
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8052
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8051
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8053
    [DIFFICULTY_NORMAL][TRAINER_56775C71] =
    {
#line 8054
        .trainerName = _("56775C71"),
#line 8055
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8056
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8058
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8060
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8059
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8061
    [DIFFICULTY_NORMAL][TRAINER_56C1FE08] =
    {
#line 8062
        .trainerName = _("56C1FE08"),
#line 8063
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8064
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8066
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8068
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8067
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8069
    [DIFFICULTY_NORMAL][TRAINER_56E6EFAA] =
    {
#line 8070
        .trainerName = _("56E6EFAA"),
#line 8071
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8074
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8076
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8075
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8077
    [DIFFICULTY_NORMAL][TRAINER_57E254F5] =
    {
#line 8078
        .trainerName = _("57E254F5"),
#line 8079
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8080
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8082
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8084
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8083
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8085
    [DIFFICULTY_NORMAL][TRAINER_57E7E83A] =
    {
#line 8086
        .trainerName = _("57E7E83A"),
#line 8087
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8088
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8090
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8092
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8091
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8093
    [DIFFICULTY_NORMAL][TRAINER_5819E497] =
    {
#line 8094
        .trainerName = _("5819E497"),
#line 8095
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8098
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8100
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8099
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8101
    [DIFFICULTY_NORMAL][TRAINER_58A6A51E] =
    {
#line 8102
        .trainerName = _("58A6A51E"),
#line 8103
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8106
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8108
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8107
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8109
    [DIFFICULTY_NORMAL][TRAINER_58BEBECC] =
    {
#line 8110
        .trainerName = _("58BEBECC"),
#line 8111
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8112
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8114
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8116
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8115
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8117
    [DIFFICULTY_NORMAL][TRAINER_58F43966] =
    {
#line 8118
        .trainerName = _("58F43966"),
#line 8119
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8120
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8122
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8124
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8123
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8125
    [DIFFICULTY_NORMAL][TRAINER_59592DE4] =
    {
#line 8126
        .trainerName = _("59592DE4"),
#line 8127
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8128
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8130
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8132
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8131
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8133
    [DIFFICULTY_NORMAL][TRAINER_598585C1] =
    {
#line 8134
        .trainerName = _("598585C1"),
#line 8135
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8136
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8138
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8140
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8139
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8141
    [DIFFICULTY_NORMAL][TRAINER_59981F0D] =
    {
#line 8142
        .trainerName = _("59981F0D"),
#line 8143
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8144
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8146
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8148
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8147
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8149
    [DIFFICULTY_NORMAL][TRAINER_59E335AB] =
    {
#line 8150
        .trainerName = _("59E335AB"),
#line 8151
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8152
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8154
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8156
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8155
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8157
    [DIFFICULTY_NORMAL][TRAINER_59FFFCED] =
    {
#line 8158
        .trainerName = _("59FFFCED"),
#line 8159
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8160
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8162
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8164
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8163
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8165
    [DIFFICULTY_NORMAL][TRAINER_5ABF4FA4] =
    {
#line 8166
        .trainerName = _("5ABF4FA4"),
#line 8167
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8168
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8170
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8172
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8171
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8173
    [DIFFICULTY_NORMAL][TRAINER_5AC61FE5] =
    {
#line 8174
        .trainerName = _("5AC61FE5"),
#line 8175
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8176
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8178
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8180
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8179
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8181
    [DIFFICULTY_NORMAL][TRAINER_5AD29FF8] =
    {
#line 8182
        .trainerName = _("5AD29FF8"),
#line 8183
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8186
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8188
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8187
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8189
    [DIFFICULTY_NORMAL][TRAINER_5AD4C218] =
    {
#line 8190
        .trainerName = _("5AD4C218"),
#line 8191
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8192
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8194
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8195
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8197
    [DIFFICULTY_NORMAL][TRAINER_5B5F6AE8] =
    {
#line 8198
        .trainerName = _("5B5F6AE8"),
#line 8199
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8200
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8202
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8204
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8203
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8205
    [DIFFICULTY_NORMAL][TRAINER_5B6304FF] =
    {
#line 8206
        .trainerName = _("5B6304FF"),
#line 8207
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8208
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8210
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8212
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8211
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8213
    [DIFFICULTY_NORMAL][TRAINER_5B75B30F] =
    {
#line 8214
        .trainerName = _("5B75B30F"),
#line 8215
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8216
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8218
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8220
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8219
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8221
    [DIFFICULTY_NORMAL][TRAINER_5B983361] =
    {
#line 8222
        .trainerName = _("5B983361"),
#line 8223
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8224
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8226
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8228
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8227
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8229
    [DIFFICULTY_NORMAL][TRAINER_5BD8EA81] =
    {
#line 8230
        .trainerName = _("5BD8EA81"),
#line 8231
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8232
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8234
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8236
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8235
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8237
    [DIFFICULTY_NORMAL][TRAINER_5C315841] =
    {
#line 8238
        .trainerName = _("5C315841"),
#line 8239
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8240
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8242
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8244
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8243
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8245
    [DIFFICULTY_NORMAL][TRAINER_5C573C11] =
    {
#line 8246
        .trainerName = _("5C573C11"),
#line 8247
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8248
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8250
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8252
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8251
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8253
    [DIFFICULTY_NORMAL][TRAINER_5CAB03DD] =
    {
#line 8254
        .trainerName = _("5CAB03DD"),
#line 8255
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8256
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8258
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8260
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8259
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8261
    [DIFFICULTY_NORMAL][TRAINER_5CBDB116] =
    {
#line 8262
        .trainerName = _("5CBDB116"),
#line 8263
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8264
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8266
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8268
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8267
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8269
    [DIFFICULTY_NORMAL][TRAINER_5D0C4B8F] =
    {
#line 8270
        .trainerName = _("5D0C4B8F"),
#line 8271
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8272
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8274
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8276
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8275
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8277
    [DIFFICULTY_NORMAL][TRAINER_5D2CCD41] =
    {
#line 8278
        .trainerName = _("5D2CCD41"),
#line 8279
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8280
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8282
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8284
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8283
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8285
    [DIFFICULTY_NORMAL][TRAINER_5D5F491E] =
    {
#line 8286
        .trainerName = _("5D5F491E"),
#line 8287
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8288
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8290
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8292
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8291
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8293
    [DIFFICULTY_NORMAL][TRAINER_5D81D8F9] =
    {
#line 8294
        .trainerName = _("5D81D8F9"),
#line 8295
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8296
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8298
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8300
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8299
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8301
    [DIFFICULTY_NORMAL][TRAINER_5D86E702] =
    {
#line 8302
        .trainerName = _("5D86E702"),
#line 8303
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8304
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8306
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8308
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8307
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8309
    [DIFFICULTY_NORMAL][TRAINER_5D9ABC58] =
    {
#line 8310
        .trainerName = _("5D9ABC58"),
#line 8311
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8312
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8314
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8316
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8315
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8317
    [DIFFICULTY_NORMAL][TRAINER_5DA9F2AE] =
    {
#line 8318
        .trainerName = _("5DA9F2AE"),
#line 8319
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8320
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8322
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8324
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8323
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8325
    [DIFFICULTY_NORMAL][TRAINER_5E13316C] =
    {
#line 8326
        .trainerName = _("5E13316C"),
#line 8327
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8328
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8330
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8332
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8331
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8333
    [DIFFICULTY_NORMAL][TRAINER_5EA7A638] =
    {
#line 8334
        .trainerName = _("5EA7A638"),
#line 8335
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8336
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8338
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8340
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8339
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8341
    [DIFFICULTY_NORMAL][TRAINER_5EB4C98F] =
    {
#line 8342
        .trainerName = _("5EB4C98F"),
#line 8343
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8344
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8346
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8348
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8347
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8349
    [DIFFICULTY_NORMAL][TRAINER_5EF71DA1] =
    {
#line 8350
        .trainerName = _("5EF71DA1"),
#line 8351
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8352
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8354
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8356
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8355
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8357
    [DIFFICULTY_NORMAL][TRAINER_5F858802] =
    {
#line 8358
        .trainerName = _("5F858802"),
#line 8359
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8360
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8362
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8364
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8363
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8365
    [DIFFICULTY_NORMAL][TRAINER_5FA4C80F] =
    {
#line 8366
        .trainerName = _("5FA4C80F"),
#line 8367
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8368
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8370
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8372
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8371
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8373
    [DIFFICULTY_NORMAL][TRAINER_5FD48FB2] =
    {
#line 8374
        .trainerName = _("5FD48FB2"),
#line 8375
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8376
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8378
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8380
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8379
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8381
    [DIFFICULTY_NORMAL][TRAINER_5FF1DEC5] =
    {
#line 8382
        .trainerName = _("5FF1DEC5"),
#line 8383
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8384
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8386
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8388
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8387
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8389
    [DIFFICULTY_NORMAL][TRAINER_6016A968] =
    {
#line 8390
        .trainerName = _("6016A968"),
#line 8391
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8392
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8394
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8396
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8395
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8397
    [DIFFICULTY_NORMAL][TRAINER_6058C03B] =
    {
#line 8398
        .trainerName = _("6058C03B"),
#line 8399
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8400
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8402
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8404
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8403
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8405
    [DIFFICULTY_NORMAL][TRAINER_60C3BD24] =
    {
#line 8406
        .trainerName = _("60C3BD24"),
#line 8407
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8408
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8410
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8412
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8411
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8413
    [DIFFICULTY_NORMAL][TRAINER_60C56554] =
    {
#line 8414
        .trainerName = _("60C56554"),
#line 8415
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8416
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8418
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8420
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8419
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8421
    [DIFFICULTY_NORMAL][TRAINER_60D66B86] =
    {
#line 8422
        .trainerName = _("60D66B86"),
#line 8423
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8424
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8426
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8428
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8427
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8429
    [DIFFICULTY_NORMAL][TRAINER_6102A0FC] =
    {
#line 8430
        .trainerName = _("6102A0FC"),
#line 8431
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8432
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8434
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8436
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8435
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8437
    [DIFFICULTY_NORMAL][TRAINER_61E76999] =
    {
#line 8438
        .trainerName = _("61E76999"),
#line 8439
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8440
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8442
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8444
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8443
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8445
    [DIFFICULTY_NORMAL][TRAINER_626AECE8] =
    {
#line 8446
        .trainerName = _("626AECE8"),
#line 8447
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8448
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8450
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8452
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8451
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8453
    [DIFFICULTY_NORMAL][TRAINER_62851FFB] =
    {
#line 8454
        .trainerName = _("62851FFB"),
#line 8455
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8456
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8458
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8460
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8459
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8461
    [DIFFICULTY_NORMAL][TRAINER_62C33409] =
    {
#line 8462
        .trainerName = _("62C33409"),
#line 8463
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8464
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8466
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8468
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8467
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8469
    [DIFFICULTY_NORMAL][TRAINER_62D0F875] =
    {
#line 8470
        .trainerName = _("62D0F875"),
#line 8471
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8472
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8474
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8476
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8475
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8477
    [DIFFICULTY_NORMAL][TRAINER_63409A54] =
    {
#line 8478
        .trainerName = _("63409A54"),
#line 8479
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8482
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8484
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8483
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8485
    [DIFFICULTY_NORMAL][TRAINER_6397B964] =
    {
#line 8486
        .trainerName = _("6397B964"),
#line 8487
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8488
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8490
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8492
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8491
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8493
    [DIFFICULTY_NORMAL][TRAINER_63DB05B6] =
    {
#line 8494
        .trainerName = _("63DB05B6"),
#line 8495
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8496
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8498
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8500
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8499
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8501
    [DIFFICULTY_NORMAL][TRAINER_63DC02C9] =
    {
#line 8502
        .trainerName = _("63DC02C9"),
#line 8503
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8504
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8506
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8508
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8507
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8509
    [DIFFICULTY_NORMAL][TRAINER_6439D44C] =
    {
#line 8510
        .trainerName = _("6439D44C"),
#line 8511
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8512
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8514
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8516
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8515
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8517
    [DIFFICULTY_NORMAL][TRAINER_64E30596] =
    {
#line 8518
        .trainerName = _("64E30596"),
#line 8519
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8520
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8522
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8524
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8523
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8525
    [DIFFICULTY_NORMAL][TRAINER_6566F645] =
    {
#line 8526
        .trainerName = _("6566F645"),
#line 8527
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8528
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8530
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8532
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8531
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8533
    [DIFFICULTY_NORMAL][TRAINER_656A39C8] =
    {
#line 8534
        .trainerName = _("656A39C8"),
#line 8535
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8536
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8538
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8540
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8539
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8541
    [DIFFICULTY_NORMAL][TRAINER_656EC067] =
    {
#line 8542
        .trainerName = _("656EC067"),
#line 8543
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8544
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8546
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8548
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8547
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8549
    [DIFFICULTY_NORMAL][TRAINER_65CE4F87] =
    {
#line 8550
        .trainerName = _("65CE4F87"),
#line 8551
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8552
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8554
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8556
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8555
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8557
    [DIFFICULTY_NORMAL][TRAINER_662EBAAA] =
    {
#line 8558
        .trainerName = _("662EBAAA"),
#line 8559
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8560
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8562
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8564
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8563
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8565
    [DIFFICULTY_NORMAL][TRAINER_66531C74] =
    {
#line 8566
        .trainerName = _("66531C74"),
#line 8567
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8568
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8570
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8572
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8571
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8573
    [DIFFICULTY_NORMAL][TRAINER_66B16F22] =
    {
#line 8574
        .trainerName = _("66B16F22"),
#line 8575
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8578
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8580
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8579
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8581
    [DIFFICULTY_NORMAL][TRAINER_66D26AEC] =
    {
#line 8582
        .trainerName = _("66D26AEC"),
#line 8583
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8584
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8586
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8588
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8587
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8589
    [DIFFICULTY_NORMAL][TRAINER_675DA518] =
    {
#line 8590
        .trainerName = _("675DA518"),
#line 8591
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8592
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8594
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8596
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8595
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8597
    [DIFFICULTY_NORMAL][TRAINER_677A22D7] =
    {
#line 8598
        .trainerName = _("677A22D7"),
#line 8599
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8600
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8602
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8604
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8603
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8605
    [DIFFICULTY_NORMAL][TRAINER_6792B394] =
    {
#line 8606
        .trainerName = _("6792B394"),
#line 8607
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8608
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8610
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8612
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8611
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8613
    [DIFFICULTY_NORMAL][TRAINER_683A2305] =
    {
#line 8614
        .trainerName = _("683A2305"),
#line 8615
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8616
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8618
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8620
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8619
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8621
    [DIFFICULTY_NORMAL][TRAINER_692DD7CF] =
    {
#line 8622
        .trainerName = _("692DD7CF"),
#line 8623
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8624
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8626
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8628
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8627
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8629
    [DIFFICULTY_NORMAL][TRAINER_698BB117] =
    {
#line 8630
        .trainerName = _("698BB117"),
#line 8631
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8632
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8634
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8636
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8635
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8637
    [DIFFICULTY_NORMAL][TRAINER_69EE8132] =
    {
#line 8638
        .trainerName = _("69EE8132"),
#line 8639
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8640
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8642
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8644
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8643
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8645
    [DIFFICULTY_NORMAL][TRAINER_6A35EE35] =
    {
#line 8646
        .trainerName = _("6A35EE35"),
#line 8647
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8648
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8650
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8652
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8651
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8653
    [DIFFICULTY_NORMAL][TRAINER_6A3930E6] =
    {
#line 8654
        .trainerName = _("6A3930E6"),
#line 8655
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8656
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8658
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8660
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8659
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8661
    [DIFFICULTY_NORMAL][TRAINER_6A48F28F] =
    {
#line 8662
        .trainerName = _("6A48F28F"),
#line 8663
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8664
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8666
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8668
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8667
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8669
    [DIFFICULTY_NORMAL][TRAINER_6A8EEC78] =
    {
#line 8670
        .trainerName = _("6A8EEC78"),
#line 8671
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8674
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8676
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8675
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8677
    [DIFFICULTY_NORMAL][TRAINER_6AABC7EA] =
    {
#line 8678
        .trainerName = _("6AABC7EA"),
#line 8679
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8682
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8684
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8683
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8685
    [DIFFICULTY_NORMAL][TRAINER_6ABE3EC1] =
    {
#line 8686
        .trainerName = _("6ABE3EC1"),
#line 8687
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8688
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8690
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8692
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8691
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8693
    [DIFFICULTY_NORMAL][TRAINER_6B14C259] =
    {
#line 8694
        .trainerName = _("6B14C259"),
#line 8695
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8696
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8698
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8700
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8699
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8701
    [DIFFICULTY_NORMAL][TRAINER_6BEEE6BE] =
    {
#line 8702
        .trainerName = _("6BEEE6BE"),
#line 8703
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8704
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8706
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8708
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8707
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8709
    [DIFFICULTY_NORMAL][TRAINER_6C7736F9] =
    {
#line 8710
        .trainerName = _("6C7736F9"),
#line 8711
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8712
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8714
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8716
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8715
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8717
    [DIFFICULTY_NORMAL][TRAINER_6CC913A2] =
    {
#line 8718
        .trainerName = _("6CC913A2"),
#line 8719
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8720
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8722
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8724
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8723
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8725
    [DIFFICULTY_NORMAL][TRAINER_6D45549A] =
    {
#line 8726
        .trainerName = _("6D45549A"),
#line 8727
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8728
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8730
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8732
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8731
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8733
    [DIFFICULTY_NORMAL][TRAINER_6E1E82B2] =
    {
#line 8734
        .trainerName = _("6E1E82B2"),
#line 8735
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8736
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8738
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8740
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8739
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8741
    [DIFFICULTY_NORMAL][TRAINER_6E663040] =
    {
#line 8742
        .trainerName = _("6E663040"),
#line 8743
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8744
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8746
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8748
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8747
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8749
    [DIFFICULTY_NORMAL][TRAINER_6ED2C120] =
    {
#line 8750
        .trainerName = _("6ED2C120"),
#line 8751
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8752
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8754
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8756
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8755
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8757
    [DIFFICULTY_NORMAL][TRAINER_6F5C8078] =
    {
#line 8758
        .trainerName = _("6F5C8078"),
#line 8759
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8760
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8762
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8764
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8763
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8765
    [DIFFICULTY_NORMAL][TRAINER_6F5E9CF9] =
    {
#line 8766
        .trainerName = _("6F5E9CF9"),
#line 8767
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8768
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8770
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8772
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8771
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8773
    [DIFFICULTY_NORMAL][TRAINER_6FC24896] =
    {
#line 8774
        .trainerName = _("6FC24896"),
#line 8775
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8776
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8778
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8780
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8779
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8781
    [DIFFICULTY_NORMAL][TRAINER_6FF3213D] =
    {
#line 8782
        .trainerName = _("6FF3213D"),
#line 8783
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8784
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8786
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8788
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8787
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8789
    [DIFFICULTY_NORMAL][TRAINER_701AC24E] =
    {
#line 8790
        .trainerName = _("701AC24E"),
#line 8791
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8792
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8794
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8796
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8795
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8797
    [DIFFICULTY_NORMAL][TRAINER_703B73C4] =
    {
#line 8798
        .trainerName = _("703B73C4"),
#line 8799
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8800
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8802
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8804
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8803
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8805
    [DIFFICULTY_NORMAL][TRAINER_70C712D3] =
    {
#line 8806
        .trainerName = _("70C712D3"),
#line 8807
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8808
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8810
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8812
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8811
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8813
    [DIFFICULTY_NORMAL][TRAINER_70EAAAF5] =
    {
#line 8814
        .trainerName = _("70EAAAF5"),
#line 8815
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8816
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8818
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8820
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8819
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8821
    [DIFFICULTY_NORMAL][TRAINER_70F1A62B] =
    {
#line 8822
        .trainerName = _("70F1A62B"),
#line 8823
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8824
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8826
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8828
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8827
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8829
    [DIFFICULTY_NORMAL][TRAINER_7169C897] =
    {
#line 8830
        .trainerName = _("7169C897"),
#line 8831
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8832
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8834
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8836
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8835
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8837
    [DIFFICULTY_NORMAL][TRAINER_7178DF27] =
    {
#line 8838
        .trainerName = _("7178DF27"),
#line 8839
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8840
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8842
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8844
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8843
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8845
    [DIFFICULTY_NORMAL][TRAINER_7190E405] =
    {
#line 8846
        .trainerName = _("7190E405"),
#line 8847
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8848
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8850
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8852
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8851
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8853
    [DIFFICULTY_NORMAL][TRAINER_71CE545E] =
    {
#line 8854
        .trainerName = _("71CE545E"),
#line 8855
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8856
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8858
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8860
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8859
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8861
    [DIFFICULTY_NORMAL][TRAINER_7249425F] =
    {
#line 8862
        .trainerName = _("7249425F"),
#line 8863
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8864
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8866
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8868
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8867
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8869
    [DIFFICULTY_NORMAL][TRAINER_72641C9D] =
    {
#line 8870
        .trainerName = _("72641C9D"),
#line 8871
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8872
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8874
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8876
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8875
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8877
    [DIFFICULTY_NORMAL][TRAINER_729F2BBB] =
    {
#line 8878
        .trainerName = _("729F2BBB"),
#line 8879
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8880
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8882
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8884
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8883
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8885
    [DIFFICULTY_NORMAL][TRAINER_72F25B41] =
    {
#line 8886
        .trainerName = _("72F25B41"),
#line 8887
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8888
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8890
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8892
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8891
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8893
    [DIFFICULTY_NORMAL][TRAINER_732D4997] =
    {
#line 8894
        .trainerName = _("732D4997"),
#line 8895
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8896
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8898
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8900
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8899
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8901
    [DIFFICULTY_NORMAL][TRAINER_73A561CC] =
    {
#line 8902
        .trainerName = _("73A561CC"),
#line 8903
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8904
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8906
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8908
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8907
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8909
    [DIFFICULTY_NORMAL][TRAINER_7420DB0C] =
    {
#line 8910
        .trainerName = _("7420DB0C"),
#line 8911
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8912
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8914
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8916
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8915
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8917
    [DIFFICULTY_NORMAL][TRAINER_7435DE7C] =
    {
#line 8918
        .trainerName = _("7435DE7C"),
#line 8919
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8920
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8922
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8924
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8923
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8925
    [DIFFICULTY_NORMAL][TRAINER_75A2A667] =
    {
#line 8926
        .trainerName = _("75A2A667"),
#line 8927
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8928
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8930
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8932
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8931
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8933
    [DIFFICULTY_NORMAL][TRAINER_75D602F2] =
    {
#line 8934
        .trainerName = _("75D602F2"),
#line 8935
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8938
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8940
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8939
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8941
    [DIFFICULTY_NORMAL][TRAINER_77DDBBAF] =
    {
#line 8942
        .trainerName = _("77DDBBAF"),
#line 8943
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8944
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8946
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8948
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8947
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8949
    [DIFFICULTY_NORMAL][TRAINER_783AB388] =
    {
#line 8950
        .trainerName = _("783AB388"),
#line 8951
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8952
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8954
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8956
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8955
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8957
    [DIFFICULTY_NORMAL][TRAINER_78564BE5] =
    {
#line 8958
        .trainerName = _("78564BE5"),
#line 8959
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8960
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8962
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8964
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8963
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8965
    [DIFFICULTY_NORMAL][TRAINER_7885ECAF] =
    {
#line 8966
        .trainerName = _("7885ECAF"),
#line 8967
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8968
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8970
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8972
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8971
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8973
    [DIFFICULTY_NORMAL][TRAINER_78B73516] =
    {
#line 8974
        .trainerName = _("78B73516"),
#line 8975
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8976
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8978
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8980
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8979
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8981
    [DIFFICULTY_NORMAL][TRAINER_78BD858D] =
    {
#line 8982
        .trainerName = _("78BD858D"),
#line 8983
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8984
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8986
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8988
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8987
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8989
    [DIFFICULTY_NORMAL][TRAINER_7933DA6C] =
    {
#line 8990
        .trainerName = _("7933DA6C"),
#line 8991
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 8992
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8994
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8996
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8995
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8997
    [DIFFICULTY_NORMAL][TRAINER_793992D8] =
    {
#line 8998
        .trainerName = _("793992D8"),
#line 8999
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9000
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9002
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9004
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9003
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9005
    [DIFFICULTY_NORMAL][TRAINER_797E296B] =
    {
#line 9006
        .trainerName = _("797E296B"),
#line 9007
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9008
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9010
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9012
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9011
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9013
    [DIFFICULTY_NORMAL][TRAINER_79EF1DEB] =
    {
#line 9014
        .trainerName = _("79EF1DEB"),
#line 9015
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9018
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9020
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9019
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9021
    [DIFFICULTY_NORMAL][TRAINER_7A03677D] =
    {
#line 9022
        .trainerName = _("7A03677D"),
#line 9023
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9024
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9026
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9028
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9027
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9029
    [DIFFICULTY_NORMAL][TRAINER_7A0C086F] =
    {
#line 9030
        .trainerName = _("7A0C086F"),
#line 9031
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9032
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9034
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9036
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9035
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9037
    [DIFFICULTY_NORMAL][TRAINER_7A89C403] =
    {
#line 9038
        .trainerName = _("7A89C403"),
#line 9039
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9040
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9042
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9044
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9043
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9045
    [DIFFICULTY_NORMAL][TRAINER_7A8D30C6] =
    {
#line 9046
        .trainerName = _("7A8D30C6"),
#line 9047
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9048
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9050
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9052
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9051
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9053
    [DIFFICULTY_NORMAL][TRAINER_7ABC77C1] =
    {
#line 9054
        .trainerName = _("7ABC77C1"),
#line 9055
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9056
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9058
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9060
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9059
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9061
    [DIFFICULTY_NORMAL][TRAINER_7B5DF36F] =
    {
#line 9062
        .trainerName = _("7B5DF36F"),
#line 9063
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9064
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9066
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9068
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9067
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9069
    [DIFFICULTY_NORMAL][TRAINER_7C3BD57C] =
    {
#line 9070
        .trainerName = _("7C3BD57C"),
#line 9071
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9074
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9076
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9075
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9077
    [DIFFICULTY_NORMAL][TRAINER_7C4240E1] =
    {
#line 9078
        .trainerName = _("7C4240E1"),
#line 9079
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9080
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9082
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9084
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9083
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9085
    [DIFFICULTY_NORMAL][TRAINER_7C5056CA] =
    {
#line 9086
        .trainerName = _("7C5056CA"),
#line 9087
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9088
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9090
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9092
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9091
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9093
    [DIFFICULTY_NORMAL][TRAINER_7C8BD62F] =
    {
#line 9094
        .trainerName = _("7C8BD62F"),
#line 9095
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9098
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9100
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9099
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9101
    [DIFFICULTY_NORMAL][TRAINER_7C9308EF] =
    {
#line 9102
        .trainerName = _("7C9308EF"),
#line 9103
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9106
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9108
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9107
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9109
    [DIFFICULTY_NORMAL][TRAINER_7CAF6877] =
    {
#line 9110
        .trainerName = _("7CAF6877"),
#line 9111
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9112
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9114
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9116
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9115
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9117
    [DIFFICULTY_NORMAL][TRAINER_7CBB25EB] =
    {
#line 9118
        .trainerName = _("7CBB25EB"),
#line 9119
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9120
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9122
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9124
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9123
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9125
    [DIFFICULTY_NORMAL][TRAINER_7CD1AAE1] =
    {
#line 9126
        .trainerName = _("7CD1AAE1"),
#line 9127
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9128
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9130
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9132
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9131
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9133
    [DIFFICULTY_NORMAL][TRAINER_7D0F1751] =
    {
#line 9134
        .trainerName = _("7D0F1751"),
#line 9135
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9136
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9138
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9140
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9139
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9141
    [DIFFICULTY_NORMAL][TRAINER_7D28CB20] =
    {
#line 9142
        .trainerName = _("7D28CB20"),
#line 9143
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9144
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9146
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9148
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9147
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9149
    [DIFFICULTY_NORMAL][TRAINER_7D536E72] =
    {
#line 9150
        .trainerName = _("7D536E72"),
#line 9151
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9152
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9154
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9156
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9155
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9157
    [DIFFICULTY_NORMAL][TRAINER_7DC358C0] =
    {
#line 9158
        .trainerName = _("7DC358C0"),
#line 9159
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9160
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9162
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9164
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9163
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9165
    [DIFFICULTY_NORMAL][TRAINER_7DEC9A40] =
    {
#line 9166
        .trainerName = _("7DEC9A40"),
#line 9167
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9168
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9170
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9172
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9171
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9173
    [DIFFICULTY_NORMAL][TRAINER_7E2F7EB8] =
    {
#line 9174
        .trainerName = _("7E2F7EB8"),
#line 9175
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9176
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9178
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9180
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9179
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9181
    [DIFFICULTY_NORMAL][TRAINER_7E7CD9D3] =
    {
#line 9182
        .trainerName = _("7E7CD9D3"),
#line 9183
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9186
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9188
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9187
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9189
    [DIFFICULTY_NORMAL][TRAINER_7E8CCD84] =
    {
#line 9190
        .trainerName = _("7E8CCD84"),
#line 9191
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9192
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9194
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9195
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9197
    [DIFFICULTY_NORMAL][TRAINER_8010F97E] =
    {
#line 9198
        .trainerName = _("8010F97E"),
#line 9199
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9200
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9202
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9204
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9203
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9205
    [DIFFICULTY_NORMAL][TRAINER_805C25F0] =
    {
#line 9206
        .trainerName = _("805C25F0"),
#line 9207
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9208
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9210
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9212
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9211
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9213
    [DIFFICULTY_NORMAL][TRAINER_80941A21] =
    {
#line 9214
        .trainerName = _("80941A21"),
#line 9215
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9216
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9218
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9220
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9219
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9221
    [DIFFICULTY_NORMAL][TRAINER_80AAA333] =
    {
#line 9222
        .trainerName = _("80AAA333"),
#line 9223
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9224
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9226
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9228
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9227
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9229
    [DIFFICULTY_NORMAL][TRAINER_810A3F32] =
    {
#line 9230
        .trainerName = _("810A3F32"),
#line 9231
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9232
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9234
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9236
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9235
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9237
    [DIFFICULTY_NORMAL][TRAINER_811C7730] =
    {
#line 9238
        .trainerName = _("811C7730"),
#line 9239
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9240
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9242
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9244
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9243
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9245
    [DIFFICULTY_NORMAL][TRAINER_814D0113] =
    {
#line 9246
        .trainerName = _("814D0113"),
#line 9247
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9248
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9250
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9252
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9251
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9253
    [DIFFICULTY_NORMAL][TRAINER_822DC7A8] =
    {
#line 9254
        .trainerName = _("822DC7A8"),
#line 9255
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9256
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9258
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9260
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9259
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9261
    [DIFFICULTY_NORMAL][TRAINER_827A5D21] =
    {
#line 9262
        .trainerName = _("827A5D21"),
#line 9263
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9264
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9266
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9268
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9267
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9269
    [DIFFICULTY_NORMAL][TRAINER_82A19B69] =
    {
#line 9270
        .trainerName = _("82A19B69"),
#line 9271
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9272
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9274
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9276
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9275
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9277
    [DIFFICULTY_NORMAL][TRAINER_83008F9D] =
    {
#line 9278
        .trainerName = _("83008F9D"),
#line 9279
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9280
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9282
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9284
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9283
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9285
    [DIFFICULTY_NORMAL][TRAINER_831DE561] =
    {
#line 9286
        .trainerName = _("831DE561"),
#line 9287
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9288
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9290
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9292
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9291
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9293
    [DIFFICULTY_NORMAL][TRAINER_8327758B] =
    {
#line 9294
        .trainerName = _("8327758B"),
#line 9295
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9296
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9298
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9300
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9299
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9301
    [DIFFICULTY_NORMAL][TRAINER_834B75E7] =
    {
#line 9302
        .trainerName = _("834B75E7"),
#line 9303
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9304
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9306
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9308
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9307
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9309
    [DIFFICULTY_NORMAL][TRAINER_8365EA32] =
    {
#line 9310
        .trainerName = _("8365EA32"),
#line 9311
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9312
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9314
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9316
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9315
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9317
    [DIFFICULTY_NORMAL][TRAINER_83A26233] =
    {
#line 9318
        .trainerName = _("83A26233"),
#line 9319
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9320
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9322
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9324
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9323
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9325
    [DIFFICULTY_NORMAL][TRAINER_83B9A038] =
    {
#line 9326
        .trainerName = _("83B9A038"),
#line 9327
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9328
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9330
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9332
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9331
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9333
    [DIFFICULTY_NORMAL][TRAINER_840416CD] =
    {
#line 9334
        .trainerName = _("840416CD"),
#line 9335
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9336
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9338
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9340
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9339
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9341
    [DIFFICULTY_NORMAL][TRAINER_843DFC91] =
    {
#line 9342
        .trainerName = _("843DFC91"),
#line 9343
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9344
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9346
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9348
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9347
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9349
    [DIFFICULTY_NORMAL][TRAINER_857ACD94] =
    {
#line 9350
        .trainerName = _("857ACD94"),
#line 9351
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9352
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9354
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9356
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9355
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9357
    [DIFFICULTY_NORMAL][TRAINER_8580525E] =
    {
#line 9358
        .trainerName = _("8580525E"),
#line 9359
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9360
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9362
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9364
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9363
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9365
    [DIFFICULTY_NORMAL][TRAINER_866AE208] =
    {
#line 9366
        .trainerName = _("866AE208"),
#line 9367
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9368
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9370
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9372
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9371
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9373
    [DIFFICULTY_NORMAL][TRAINER_8677EFB3] =
    {
#line 9374
        .trainerName = _("8677EFB3"),
#line 9375
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9376
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9378
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9380
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9379
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9381
    [DIFFICULTY_NORMAL][TRAINER_86D37FF1] =
    {
#line 9382
        .trainerName = _("86D37FF1"),
#line 9383
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9384
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9386
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9388
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9387
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9389
    [DIFFICULTY_NORMAL][TRAINER_86F7AA4A] =
    {
#line 9390
        .trainerName = _("86F7AA4A"),
#line 9391
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9392
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9394
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9396
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9395
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9397
    [DIFFICULTY_NORMAL][TRAINER_872183CD] =
    {
#line 9398
        .trainerName = _("872183CD"),
#line 9399
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9400
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9402
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9404
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9403
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9405
    [DIFFICULTY_NORMAL][TRAINER_87B5E929] =
    {
#line 9406
        .trainerName = _("87B5E929"),
#line 9407
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9408
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9410
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9412
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9411
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9413
    [DIFFICULTY_NORMAL][TRAINER_885C781B] =
    {
#line 9414
        .trainerName = _("885C781B"),
#line 9415
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9416
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9418
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9420
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9419
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9421
    [DIFFICULTY_NORMAL][TRAINER_8878003B] =
    {
#line 9422
        .trainerName = _("8878003B"),
#line 9423
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9424
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9426
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9428
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9427
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9429
    [DIFFICULTY_NORMAL][TRAINER_88864D1E] =
    {
#line 9430
        .trainerName = _("88864D1E"),
#line 9431
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9432
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9434
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9436
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9435
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9437
    [DIFFICULTY_NORMAL][TRAINER_8972F540] =
    {
#line 9438
        .trainerName = _("8972F540"),
#line 9439
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9440
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9442
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9444
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9443
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9445
    [DIFFICULTY_NORMAL][TRAINER_898AF31D] =
    {
#line 9446
        .trainerName = _("898AF31D"),
#line 9447
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9448
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9450
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9452
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9451
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9453
    [DIFFICULTY_NORMAL][TRAINER_8A0B40C0] =
    {
#line 9454
        .trainerName = _("8A0B40C0"),
#line 9455
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9456
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9458
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9460
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9459
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9461
    [DIFFICULTY_NORMAL][TRAINER_8A2C65A3] =
    {
#line 9462
        .trainerName = _("8A2C65A3"),
#line 9463
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9464
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9466
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9468
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9467
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9469
    [DIFFICULTY_NORMAL][TRAINER_8A829476] =
    {
#line 9470
        .trainerName = _("8A829476"),
#line 9471
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9472
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9474
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9476
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9475
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9477
    [DIFFICULTY_NORMAL][TRAINER_8AC1B5C1] =
    {
#line 9478
        .trainerName = _("8AC1B5C1"),
#line 9479
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9482
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9484
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9483
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9485
    [DIFFICULTY_NORMAL][TRAINER_8AF40B23] =
    {
#line 9486
        .trainerName = _("8AF40B23"),
#line 9487
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9488
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9490
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9492
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9491
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9493
    [DIFFICULTY_NORMAL][TRAINER_8B31AC38] =
    {
#line 9494
        .trainerName = _("8B31AC38"),
#line 9495
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9496
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9498
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9500
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9499
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9501
    [DIFFICULTY_NORMAL][TRAINER_8B32317E] =
    {
#line 9502
        .trainerName = _("8B32317E"),
#line 9503
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9504
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9506
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9508
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9507
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9509
    [DIFFICULTY_NORMAL][TRAINER_8B3657A9] =
    {
#line 9510
        .trainerName = _("8B3657A9"),
#line 9511
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9512
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9514
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9516
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9515
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9517
    [DIFFICULTY_NORMAL][TRAINER_8B3C49E3] =
    {
#line 9518
        .trainerName = _("8B3C49E3"),
#line 9519
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9520
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9522
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9524
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9523
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9525
    [DIFFICULTY_NORMAL][TRAINER_8B6D195D] =
    {
#line 9526
        .trainerName = _("8B6D195D"),
#line 9527
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9528
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9530
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9532
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9531
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9533
    [DIFFICULTY_NORMAL][TRAINER_8BB65E5E] =
    {
#line 9534
        .trainerName = _("8BB65E5E"),
#line 9535
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9536
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9538
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9540
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9539
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9541
    [DIFFICULTY_NORMAL][TRAINER_8C186D17] =
    {
#line 9542
        .trainerName = _("8C186D17"),
#line 9543
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9544
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9546
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9548
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9547
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9549
    [DIFFICULTY_NORMAL][TRAINER_8C853607] =
    {
#line 9550
        .trainerName = _("8C853607"),
#line 9551
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9552
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9554
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9556
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9555
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9557
    [DIFFICULTY_NORMAL][TRAINER_8D6D5B2C] =
    {
#line 9558
        .trainerName = _("8D6D5B2C"),
#line 9559
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9560
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9562
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9564
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9563
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9565
    [DIFFICULTY_NORMAL][TRAINER_8D93124A] =
    {
#line 9566
        .trainerName = _("8D93124A"),
#line 9567
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9568
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9570
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9572
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9571
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9573
    [DIFFICULTY_NORMAL][TRAINER_8DAF08C5] =
    {
#line 9574
        .trainerName = _("8DAF08C5"),
#line 9575
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9578
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9580
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9579
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9581
    [DIFFICULTY_NORMAL][TRAINER_8DE17D94] =
    {
#line 9582
        .trainerName = _("8DE17D94"),
#line 9583
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9584
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9586
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9588
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9587
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9589
    [DIFFICULTY_NORMAL][TRAINER_8E60CF6E] =
    {
#line 9590
        .trainerName = _("8E60CF6E"),
#line 9591
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9592
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9594
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9596
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9595
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9597
    [DIFFICULTY_NORMAL][TRAINER_8EA873A0] =
    {
#line 9598
        .trainerName = _("8EA873A0"),
#line 9599
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9600
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9602
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9604
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9603
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9605
    [DIFFICULTY_NORMAL][TRAINER_8EB76821] =
    {
#line 9606
        .trainerName = _("8EB76821"),
#line 9607
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9608
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9610
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9612
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9611
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9613
    [DIFFICULTY_NORMAL][TRAINER_8ED15D51] =
    {
#line 9614
        .trainerName = _("8ED15D51"),
#line 9615
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9616
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9618
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9620
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9619
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9621
    [DIFFICULTY_NORMAL][TRAINER_8F28F86A] =
    {
#line 9622
        .trainerName = _("8F28F86A"),
#line 9623
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9624
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9626
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9628
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9627
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9629
    [DIFFICULTY_NORMAL][TRAINER_8F2EA270] =
    {
#line 9630
        .trainerName = _("8F2EA270"),
#line 9631
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9632
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9634
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9636
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9635
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9637
    [DIFFICULTY_NORMAL][TRAINER_8F9579E4] =
    {
#line 9638
        .trainerName = _("8F9579E4"),
#line 9639
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9640
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9642
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9644
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9643
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9645
    [DIFFICULTY_NORMAL][TRAINER_8F988020] =
    {
#line 9646
        .trainerName = _("8F988020"),
#line 9647
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9648
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9650
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9652
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9651
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9653
    [DIFFICULTY_NORMAL][TRAINER_8FE817BA] =
    {
#line 9654
        .trainerName = _("8FE817BA"),
#line 9655
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9656
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9658
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9660
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9659
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9661
    [DIFFICULTY_NORMAL][TRAINER_90353D81] =
    {
#line 9662
        .trainerName = _("90353D81"),
#line 9663
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9664
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9666
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9668
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9667
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9669
    [DIFFICULTY_NORMAL][TRAINER_9054973F] =
    {
#line 9670
        .trainerName = _("9054973F"),
#line 9671
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9674
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9676
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9675
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9677
    [DIFFICULTY_NORMAL][TRAINER_90A72ACF] =
    {
#line 9678
        .trainerName = _("90A72ACF"),
#line 9679
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9682
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9684
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9683
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9685
    [DIFFICULTY_NORMAL][TRAINER_90E1658C] =
    {
#line 9686
        .trainerName = _("90E1658C"),
#line 9687
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9688
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9690
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9692
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9691
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9693
    [DIFFICULTY_NORMAL][TRAINER_918A1734] =
    {
#line 9694
        .trainerName = _("918A1734"),
#line 9695
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9696
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9698
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9700
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9699
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9701
    [DIFFICULTY_NORMAL][TRAINER_91D249C3] =
    {
#line 9702
        .trainerName = _("91D249C3"),
#line 9703
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9704
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9706
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9708
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9707
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9709
    [DIFFICULTY_NORMAL][TRAINER_91D48E4E] =
    {
#line 9710
        .trainerName = _("91D48E4E"),
#line 9711
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9712
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9714
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9716
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9715
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9717
    [DIFFICULTY_NORMAL][TRAINER_922542C3] =
    {
#line 9718
        .trainerName = _("922542C3"),
#line 9719
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9720
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9722
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9724
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9723
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9725
    [DIFFICULTY_NORMAL][TRAINER_93009D3B] =
    {
#line 9726
        .trainerName = _("93009D3B"),
#line 9727
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9728
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9730
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9732
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9731
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9733
    [DIFFICULTY_NORMAL][TRAINER_93D9B506] =
    {
#line 9734
        .trainerName = _("93D9B506"),
#line 9735
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9736
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9738
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9740
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9739
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9741
    [DIFFICULTY_NORMAL][TRAINER_9427896B] =
    {
#line 9742
        .trainerName = _("9427896B"),
#line 9743
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9744
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9746
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9748
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9747
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9749
    [DIFFICULTY_NORMAL][TRAINER_9501C16B] =
    {
#line 9750
        .trainerName = _("9501C16B"),
#line 9751
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9752
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9754
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9756
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9755
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9757
    [DIFFICULTY_NORMAL][TRAINER_9566DD87] =
    {
#line 9758
        .trainerName = _("9566DD87"),
#line 9759
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9760
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9762
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9764
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9763
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9765
    [DIFFICULTY_NORMAL][TRAINER_95A74E78] =
    {
#line 9766
        .trainerName = _("95A74E78"),
#line 9767
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9768
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9770
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9772
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9771
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9773
    [DIFFICULTY_NORMAL][TRAINER_963F893A] =
    {
#line 9774
        .trainerName = _("963F893A"),
#line 9775
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9776
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9778
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9780
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9779
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9781
    [DIFFICULTY_NORMAL][TRAINER_966F37E6] =
    {
#line 9782
        .trainerName = _("966F37E6"),
#line 9783
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9784
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9786
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9788
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9787
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9789
    [DIFFICULTY_NORMAL][TRAINER_96859C9B] =
    {
#line 9790
        .trainerName = _("96859C9B"),
#line 9791
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9792
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9794
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9796
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9795
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9797
    [DIFFICULTY_NORMAL][TRAINER_9695D7CC] =
    {
#line 9798
        .trainerName = _("9695D7CC"),
#line 9799
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9800
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9802
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9804
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9803
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9805
    [DIFFICULTY_NORMAL][TRAINER_96A60AED] =
    {
#line 9806
        .trainerName = _("96A60AED"),
#line 9807
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9808
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9810
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9812
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9811
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9813
    [DIFFICULTY_NORMAL][TRAINER_973C00CE] =
    {
#line 9814
        .trainerName = _("973C00CE"),
#line 9815
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9816
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9818
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9820
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9819
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9821
    [DIFFICULTY_NORMAL][TRAINER_9784BB4E] =
    {
#line 9822
        .trainerName = _("9784BB4E"),
#line 9823
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9824
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9826
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9828
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9827
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9829
    [DIFFICULTY_NORMAL][TRAINER_9834CDCC] =
    {
#line 9830
        .trainerName = _("9834CDCC"),
#line 9831
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9832
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9834
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9836
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9835
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9837
    [DIFFICULTY_NORMAL][TRAINER_98547A36] =
    {
#line 9838
        .trainerName = _("98547A36"),
#line 9839
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9840
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9842
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9844
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9843
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9845
    [DIFFICULTY_NORMAL][TRAINER_98C7143B] =
    {
#line 9846
        .trainerName = _("98C7143B"),
#line 9847
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9848
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9850
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9852
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9851
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9853
    [DIFFICULTY_NORMAL][TRAINER_992FCC96] =
    {
#line 9854
        .trainerName = _("992FCC96"),
#line 9855
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9856
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9858
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9860
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9859
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9861
    [DIFFICULTY_NORMAL][TRAINER_99D74322] =
    {
#line 9862
        .trainerName = _("99D74322"),
#line 9863
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9864
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9866
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9868
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9867
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9869
    [DIFFICULTY_NORMAL][TRAINER_9A45ED29] =
    {
#line 9870
        .trainerName = _("9A45ED29"),
#line 9871
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9872
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9874
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9876
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9875
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9877
    [DIFFICULTY_NORMAL][TRAINER_9AAFB9A8] =
    {
#line 9878
        .trainerName = _("9AAFB9A8"),
#line 9879
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9880
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9882
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9884
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9883
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9885
    [DIFFICULTY_NORMAL][TRAINER_9B4CAAEF] =
    {
#line 9886
        .trainerName = _("9B4CAAEF"),
#line 9887
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9888
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9890
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9892
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9891
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9893
    [DIFFICULTY_NORMAL][TRAINER_9B92F975] =
    {
#line 9894
        .trainerName = _("9B92F975"),
#line 9895
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9896
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9898
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9900
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9899
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9901
    [DIFFICULTY_NORMAL][TRAINER_9BA8D6B8] =
    {
#line 9902
        .trainerName = _("9BA8D6B8"),
#line 9903
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9904
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9906
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9908
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9907
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9909
    [DIFFICULTY_NORMAL][TRAINER_9BBA4D3E] =
    {
#line 9910
        .trainerName = _("9BBA4D3E"),
#line 9911
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9912
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9914
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9916
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9915
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9917
    [DIFFICULTY_NORMAL][TRAINER_9BD745C1] =
    {
#line 9918
        .trainerName = _("9BD745C1"),
#line 9919
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9920
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9922
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9924
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9923
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9925
    [DIFFICULTY_NORMAL][TRAINER_9C9A9B43] =
    {
#line 9926
        .trainerName = _("9C9A9B43"),
#line 9927
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9928
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9930
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9932
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9931
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9933
    [DIFFICULTY_NORMAL][TRAINER_9CC51698] =
    {
#line 9934
        .trainerName = _("9CC51698"),
#line 9935
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9938
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9940
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9939
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9941
    [DIFFICULTY_NORMAL][TRAINER_9D0B799C] =
    {
#line 9942
        .trainerName = _("9D0B799C"),
#line 9943
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9944
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9946
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9948
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9947
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9949
    [DIFFICULTY_NORMAL][TRAINER_9D2974CA] =
    {
#line 9950
        .trainerName = _("9D2974CA"),
#line 9951
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9952
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9954
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9956
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9955
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9957
    [DIFFICULTY_NORMAL][TRAINER_9DE6AF69] =
    {
#line 9958
        .trainerName = _("9DE6AF69"),
#line 9959
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9960
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9962
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9964
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9963
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9965
    [DIFFICULTY_NORMAL][TRAINER_9E9E96C3] =
    {
#line 9966
        .trainerName = _("9E9E96C3"),
#line 9967
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9968
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9970
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9972
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9971
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9973
    [DIFFICULTY_NORMAL][TRAINER_9EBDE860] =
    {
#line 9974
        .trainerName = _("9EBDE860"),
#line 9975
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9976
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9978
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9980
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9979
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9981
    [DIFFICULTY_NORMAL][TRAINER_9F335F56] =
    {
#line 9982
        .trainerName = _("9F335F56"),
#line 9983
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9984
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9986
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9988
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9987
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9989
    [DIFFICULTY_NORMAL][TRAINER_9FB07CC0] =
    {
#line 9990
        .trainerName = _("9FB07CC0"),
#line 9991
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 9992
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9994
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9996
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9995
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9997
    [DIFFICULTY_NORMAL][TRAINER_9FFBEDD1] =
    {
#line 9998
        .trainerName = _("9FFBEDD1"),
#line 9999
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10000
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10002
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10004
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10003
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10005
    [DIFFICULTY_NORMAL][TRAINER_A03F3B0B] =
    {
#line 10006
        .trainerName = _("A03F3B0B"),
#line 10007
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10008
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10010
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10012
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10011
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10013
    [DIFFICULTY_NORMAL][TRAINER_A0852317] =
    {
#line 10014
        .trainerName = _("A0852317"),
#line 10015
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10018
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10020
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10019
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10021
    [DIFFICULTY_NORMAL][TRAINER_A0CE2BCF] =
    {
#line 10022
        .trainerName = _("A0CE2BCF"),
#line 10023
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10024
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10026
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10028
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10027
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10029
    [DIFFICULTY_NORMAL][TRAINER_A122FEC6] =
    {
#line 10030
        .trainerName = _("A122FEC6"),
#line 10031
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10032
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10034
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10036
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10035
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10037
    [DIFFICULTY_NORMAL][TRAINER_A1502FA5] =
    {
#line 10038
        .trainerName = _("A1502FA5"),
#line 10039
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10040
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10042
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10044
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10043
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10045
    [DIFFICULTY_NORMAL][TRAINER_A173BD9E] =
    {
#line 10046
        .trainerName = _("A173BD9E"),
#line 10047
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10048
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10050
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10052
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10051
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10053
    [DIFFICULTY_NORMAL][TRAINER_A1B34299] =
    {
#line 10054
        .trainerName = _("A1B34299"),
#line 10055
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10056
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10058
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10060
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10059
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10061
    [DIFFICULTY_NORMAL][TRAINER_A226BBD6] =
    {
#line 10062
        .trainerName = _("A226BBD6"),
#line 10063
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10064
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10066
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10068
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10067
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10069
    [DIFFICULTY_NORMAL][TRAINER_A26B64E5] =
    {
#line 10070
        .trainerName = _("A26B64E5"),
#line 10071
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10074
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10076
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10075
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10077
    [DIFFICULTY_NORMAL][TRAINER_A2F2E8FF] =
    {
#line 10078
        .trainerName = _("A2F2E8FF"),
#line 10079
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10080
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10082
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10084
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10083
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10085
    [DIFFICULTY_NORMAL][TRAINER_A30D6A65] =
    {
#line 10086
        .trainerName = _("A30D6A65"),
#line 10087
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10088
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10090
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10092
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10091
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10093
    [DIFFICULTY_NORMAL][TRAINER_A33F468D] =
    {
#line 10094
        .trainerName = _("A33F468D"),
#line 10095
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10098
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10100
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10099
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10101
    [DIFFICULTY_NORMAL][TRAINER_A377CCDF] =
    {
#line 10102
        .trainerName = _("A377CCDF"),
#line 10103
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10106
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10108
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10107
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10109
    [DIFFICULTY_NORMAL][TRAINER_A393F9F0] =
    {
#line 10110
        .trainerName = _("A393F9F0"),
#line 10111
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10112
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10114
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10116
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10115
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10117
    [DIFFICULTY_NORMAL][TRAINER_A39AB67C] =
    {
#line 10118
        .trainerName = _("A39AB67C"),
#line 10119
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10120
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10122
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10124
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10123
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10125
    [DIFFICULTY_NORMAL][TRAINER_A3EBD43B] =
    {
#line 10126
        .trainerName = _("A3EBD43B"),
#line 10127
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10128
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10130
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10132
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10131
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10133
    [DIFFICULTY_NORMAL][TRAINER_A489434F] =
    {
#line 10134
        .trainerName = _("A489434F"),
#line 10135
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10136
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10138
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10140
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10139
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10141
    [DIFFICULTY_NORMAL][TRAINER_A49FED84] =
    {
#line 10142
        .trainerName = _("A49FED84"),
#line 10143
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10144
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10146
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10148
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10147
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10149
    [DIFFICULTY_NORMAL][TRAINER_A4BDD551] =
    {
#line 10150
        .trainerName = _("A4BDD551"),
#line 10151
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10152
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10154
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10156
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10155
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10157
    [DIFFICULTY_NORMAL][TRAINER_A4D47D9E] =
    {
#line 10158
        .trainerName = _("A4D47D9E"),
#line 10159
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10160
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10162
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10164
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10163
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10165
    [DIFFICULTY_NORMAL][TRAINER_A4DC84A0] =
    {
#line 10166
        .trainerName = _("A4DC84A0"),
#line 10167
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10168
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10170
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10172
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10171
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10173
    [DIFFICULTY_NORMAL][TRAINER_A4EC97B5] =
    {
#line 10174
        .trainerName = _("A4EC97B5"),
#line 10175
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10176
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10178
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10180
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10179
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10181
    [DIFFICULTY_NORMAL][TRAINER_A50CF67B] =
    {
#line 10182
        .trainerName = _("A50CF67B"),
#line 10183
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10186
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10188
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10187
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10189
    [DIFFICULTY_NORMAL][TRAINER_A62D49C6] =
    {
#line 10190
        .trainerName = _("A62D49C6"),
#line 10191
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10192
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10194
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10195
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10197
    [DIFFICULTY_NORMAL][TRAINER_A6328173] =
    {
#line 10198
        .trainerName = _("A6328173"),
#line 10199
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10200
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10202
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10204
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10203
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10205
    [DIFFICULTY_NORMAL][TRAINER_A646F21E] =
    {
#line 10206
        .trainerName = _("A646F21E"),
#line 10207
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10208
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10210
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10212
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10211
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10213
    [DIFFICULTY_NORMAL][TRAINER_A685428F] =
    {
#line 10214
        .trainerName = _("A685428F"),
#line 10215
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10216
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10218
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10220
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10219
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10221
    [DIFFICULTY_NORMAL][TRAINER_A686809A] =
    {
#line 10222
        .trainerName = _("A686809A"),
#line 10223
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10224
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10226
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10228
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10227
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10229
    [DIFFICULTY_NORMAL][TRAINER_A7154C64] =
    {
#line 10230
        .trainerName = _("A7154C64"),
#line 10231
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10232
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10234
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10236
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10235
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10237
    [DIFFICULTY_NORMAL][TRAINER_A725F3F3] =
    {
#line 10238
        .trainerName = _("A725F3F3"),
#line 10239
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10240
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10242
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10244
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10243
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10245
    [DIFFICULTY_NORMAL][TRAINER_A7376C87] =
    {
#line 10246
        .trainerName = _("A7376C87"),
#line 10247
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10248
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10250
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10252
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10251
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10253
    [DIFFICULTY_NORMAL][TRAINER_A76F8352] =
    {
#line 10254
        .trainerName = _("A76F8352"),
#line 10255
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10256
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10258
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10260
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10259
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10261
    [DIFFICULTY_NORMAL][TRAINER_A783BCA8] =
    {
#line 10262
        .trainerName = _("A783BCA8"),
#line 10263
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10264
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10266
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10268
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10267
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10269
    [DIFFICULTY_NORMAL][TRAINER_A7D689F5] =
    {
#line 10270
        .trainerName = _("A7D689F5"),
#line 10271
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10272
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10274
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10276
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10275
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10277
    [DIFFICULTY_NORMAL][TRAINER_A7DCD657] =
    {
#line 10278
        .trainerName = _("A7DCD657"),
#line 10279
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10280
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10282
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10284
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10283
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10285
    [DIFFICULTY_NORMAL][TRAINER_A80F3799] =
    {
#line 10286
        .trainerName = _("A80F3799"),
#line 10287
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10288
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10290
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10292
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10291
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10293
    [DIFFICULTY_NORMAL][TRAINER_A82FABFC] =
    {
#line 10294
        .trainerName = _("A82FABFC"),
#line 10295
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10296
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10298
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10300
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10299
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10301
    [DIFFICULTY_NORMAL][TRAINER_A8413608] =
    {
#line 10302
        .trainerName = _("A8413608"),
#line 10303
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10304
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10306
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10308
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10307
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10309
    [DIFFICULTY_NORMAL][TRAINER_A8BA94B6] =
    {
#line 10310
        .trainerName = _("A8BA94B6"),
#line 10311
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10312
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10314
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10316
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10315
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10317
    [DIFFICULTY_NORMAL][TRAINER_A90E2D03] =
    {
#line 10318
        .trainerName = _("A90E2D03"),
#line 10319
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10320
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10322
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10324
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10323
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10325
    [DIFFICULTY_NORMAL][TRAINER_A968DBA5] =
    {
#line 10326
        .trainerName = _("A968DBA5"),
#line 10327
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10328
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10330
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10332
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10331
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10333
    [DIFFICULTY_NORMAL][TRAINER_A990AE14] =
    {
#line 10334
        .trainerName = _("A990AE14"),
#line 10335
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10336
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10338
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10340
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10339
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10341
    [DIFFICULTY_NORMAL][TRAINER_A9F2709A] =
    {
#line 10342
        .trainerName = _("A9F2709A"),
#line 10343
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10344
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10346
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10348
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10347
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10349
    [DIFFICULTY_NORMAL][TRAINER_AA81DD0B] =
    {
#line 10350
        .trainerName = _("AA81DD0B"),
#line 10351
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10352
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10354
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10356
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10355
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10357
    [DIFFICULTY_NORMAL][TRAINER_AB576C3B] =
    {
#line 10358
        .trainerName = _("AB576C3B"),
#line 10359
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10360
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10362
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10364
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10363
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10365
    [DIFFICULTY_NORMAL][TRAINER_ABD18218] =
    {
#line 10366
        .trainerName = _("ABD18218"),
#line 10367
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10368
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10370
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10372
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10371
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10373
    [DIFFICULTY_NORMAL][TRAINER_ABF9DAAF] =
    {
#line 10374
        .trainerName = _("ABF9DAAF"),
#line 10375
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10376
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10378
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10380
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10379
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10381
    [DIFFICULTY_NORMAL][TRAINER_ABFE6286] =
    {
#line 10382
        .trainerName = _("ABFE6286"),
#line 10383
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10384
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10386
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10388
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10387
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10389
    [DIFFICULTY_NORMAL][TRAINER_AC004835] =
    {
#line 10390
        .trainerName = _("AC004835"),
#line 10391
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10392
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10394
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10396
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10395
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10397
    [DIFFICULTY_NORMAL][TRAINER_ACB85CBA] =
    {
#line 10398
        .trainerName = _("ACB85CBA"),
#line 10399
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10400
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10402
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10404
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10403
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10405
    [DIFFICULTY_NORMAL][TRAINER_ACE2090A] =
    {
#line 10406
        .trainerName = _("ACE2090A"),
#line 10407
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10408
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10410
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10412
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10411
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10413
    [DIFFICULTY_NORMAL][TRAINER_AD1AA26D] =
    {
#line 10414
        .trainerName = _("AD1AA26D"),
#line 10415
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10416
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10418
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10420
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10419
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10421
    [DIFFICULTY_NORMAL][TRAINER_AD70C4BA] =
    {
#line 10422
        .trainerName = _("AD70C4BA"),
#line 10423
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10424
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10426
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10428
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10427
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10429
    [DIFFICULTY_NORMAL][TRAINER_AD8C8210] =
    {
#line 10430
        .trainerName = _("AD8C8210"),
#line 10431
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10432
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10434
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10436
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10435
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10437
    [DIFFICULTY_NORMAL][TRAINER_ADC94E2C] =
    {
#line 10438
        .trainerName = _("ADC94E2C"),
#line 10439
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10440
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10442
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10444
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10443
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10445
    [DIFFICULTY_NORMAL][TRAINER_AE0ED10D] =
    {
#line 10446
        .trainerName = _("AE0ED10D"),
#line 10447
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10448
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10450
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10452
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10451
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10453
    [DIFFICULTY_NORMAL][TRAINER_AE99A6E1] =
    {
#line 10454
        .trainerName = _("AE99A6E1"),
#line 10455
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10456
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10458
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10460
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10459
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10461
    [DIFFICULTY_NORMAL][TRAINER_AE9CFA41] =
    {
#line 10462
        .trainerName = _("AE9CFA41"),
#line 10463
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10464
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10466
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10468
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10467
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10469
    [DIFFICULTY_NORMAL][TRAINER_AEDC9768] =
    {
#line 10470
        .trainerName = _("AEDC9768"),
#line 10471
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10472
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10474
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10476
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10475
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10477
    [DIFFICULTY_NORMAL][TRAINER_AF0898E7] =
    {
#line 10478
        .trainerName = _("AF0898E7"),
#line 10479
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10482
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10484
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10483
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10485
    [DIFFICULTY_NORMAL][TRAINER_AF765F9F] =
    {
#line 10486
        .trainerName = _("AF765F9F"),
#line 10487
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10488
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10490
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10492
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10491
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10493
    [DIFFICULTY_NORMAL][TRAINER_AFA4A980] =
    {
#line 10494
        .trainerName = _("AFA4A980"),
#line 10495
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10496
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10498
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10500
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10499
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10501
    [DIFFICULTY_NORMAL][TRAINER_AFA5BAC9] =
    {
#line 10502
        .trainerName = _("AFA5BAC9"),
#line 10503
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10504
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10506
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10508
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10507
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10509
    [DIFFICULTY_NORMAL][TRAINER_AFD8F2EF] =
    {
#line 10510
        .trainerName = _("AFD8F2EF"),
#line 10511
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10512
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10514
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10516
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10515
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10517
    [DIFFICULTY_NORMAL][TRAINER_AFE855B1] =
    {
#line 10518
        .trainerName = _("AFE855B1"),
#line 10519
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10520
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10522
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10524
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10523
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10525
    [DIFFICULTY_NORMAL][TRAINER_AFFCC47E] =
    {
#line 10526
        .trainerName = _("AFFCC47E"),
#line 10527
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10528
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10530
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10532
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10531
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10533
    [DIFFICULTY_NORMAL][TRAINER_B0FC622D] =
    {
#line 10534
        .trainerName = _("B0FC622D"),
#line 10535
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10536
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10538
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10540
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10539
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10541
    [DIFFICULTY_NORMAL][TRAINER_B1DA7383] =
    {
#line 10542
        .trainerName = _("B1DA7383"),
#line 10543
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10544
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10546
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10548
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10547
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10549
    [DIFFICULTY_NORMAL][TRAINER_B253DEF2] =
    {
#line 10550
        .trainerName = _("B253DEF2"),
#line 10551
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10552
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10554
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10556
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10555
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10557
    [DIFFICULTY_NORMAL][TRAINER_B2925134] =
    {
#line 10558
        .trainerName = _("B2925134"),
#line 10559
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10560
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10562
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10564
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10563
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10565
    [DIFFICULTY_NORMAL][TRAINER_B2A5CB2B] =
    {
#line 10566
        .trainerName = _("B2A5CB2B"),
#line 10567
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10568
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10570
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10572
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10571
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10573
    [DIFFICULTY_NORMAL][TRAINER_B32A1E98] =
    {
#line 10574
        .trainerName = _("B32A1E98"),
#line 10575
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10578
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10580
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10579
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10581
    [DIFFICULTY_NORMAL][TRAINER_B3B1644E] =
    {
#line 10582
        .trainerName = _("B3B1644E"),
#line 10583
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10584
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10586
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10588
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10587
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10589
    [DIFFICULTY_NORMAL][TRAINER_B3CE95A4] =
    {
#line 10590
        .trainerName = _("B3CE95A4"),
#line 10591
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10592
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10594
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10596
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10595
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10597
    [DIFFICULTY_NORMAL][TRAINER_B3FB2F4B] =
    {
#line 10598
        .trainerName = _("B3FB2F4B"),
#line 10599
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10600
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10602
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10604
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10603
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10605
    [DIFFICULTY_NORMAL][TRAINER_B42E7E27] =
    {
#line 10606
        .trainerName = _("B42E7E27"),
#line 10607
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10608
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10610
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10612
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10611
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10613
    [DIFFICULTY_NORMAL][TRAINER_B42F5023] =
    {
#line 10614
        .trainerName = _("B42F5023"),
#line 10615
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10616
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10618
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10620
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10619
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10621
    [DIFFICULTY_NORMAL][TRAINER_B435B7EF] =
    {
#line 10622
        .trainerName = _("B435B7EF"),
#line 10623
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10624
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10626
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10628
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10627
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10629
    [DIFFICULTY_NORMAL][TRAINER_B438F348] =
    {
#line 10630
        .trainerName = _("B438F348"),
#line 10631
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10632
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10634
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10636
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10635
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10637
    [DIFFICULTY_NORMAL][TRAINER_B489F821] =
    {
#line 10638
        .trainerName = _("B489F821"),
#line 10639
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10640
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10642
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10644
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10643
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10645
    [DIFFICULTY_NORMAL][TRAINER_B490300F] =
    {
#line 10646
        .trainerName = _("B490300F"),
#line 10647
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10648
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10650
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10652
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10651
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10653
    [DIFFICULTY_NORMAL][TRAINER_B53E1C28] =
    {
#line 10654
        .trainerName = _("B53E1C28"),
#line 10655
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10656
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10658
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10660
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10659
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10661
    [DIFFICULTY_NORMAL][TRAINER_B5E055E7] =
    {
#line 10662
        .trainerName = _("B5E055E7"),
#line 10663
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10664
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10666
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10668
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10667
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10669
    [DIFFICULTY_NORMAL][TRAINER_B6330B06] =
    {
#line 10670
        .trainerName = _("B6330B06"),
#line 10671
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10674
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10676
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10675
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10677
    [DIFFICULTY_NORMAL][TRAINER_B66CAB9E] =
    {
#line 10678
        .trainerName = _("B66CAB9E"),
#line 10679
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10682
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10684
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10683
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10685
    [DIFFICULTY_NORMAL][TRAINER_B6E3D521] =
    {
#line 10686
        .trainerName = _("B6E3D521"),
#line 10687
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10688
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10690
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10692
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10691
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10693
    [DIFFICULTY_NORMAL][TRAINER_B6F23A27] =
    {
#line 10694
        .trainerName = _("B6F23A27"),
#line 10695
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10696
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10698
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10700
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10699
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10701
    [DIFFICULTY_NORMAL][TRAINER_B71419A1] =
    {
#line 10702
        .trainerName = _("B71419A1"),
#line 10703
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10704
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10706
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10708
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10707
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10709
    [DIFFICULTY_NORMAL][TRAINER_B77C014B] =
    {
#line 10710
        .trainerName = _("B77C014B"),
#line 10711
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10712
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10714
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10716
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10715
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10717
    [DIFFICULTY_NORMAL][TRAINER_B791766D] =
    {
#line 10718
        .trainerName = _("B791766D"),
#line 10719
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10720
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10722
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10724
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10723
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10725
    [DIFFICULTY_NORMAL][TRAINER_B7998A66] =
    {
#line 10726
        .trainerName = _("B7998A66"),
#line 10727
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10728
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10730
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10732
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10731
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10733
    [DIFFICULTY_NORMAL][TRAINER_B7C2EB7F] =
    {
#line 10734
        .trainerName = _("B7C2EB7F"),
#line 10735
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10736
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10738
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10740
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10739
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10741
    [DIFFICULTY_NORMAL][TRAINER_B7EFEE71] =
    {
#line 10742
        .trainerName = _("B7EFEE71"),
#line 10743
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10744
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10746
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10748
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10747
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10749
    [DIFFICULTY_NORMAL][TRAINER_B84B3D2A] =
    {
#line 10750
        .trainerName = _("B84B3D2A"),
#line 10751
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10752
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10754
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10756
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10755
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10757
    [DIFFICULTY_NORMAL][TRAINER_B8C5628C] =
    {
#line 10758
        .trainerName = _("B8C5628C"),
#line 10759
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10760
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10762
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10764
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10763
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10765
    [DIFFICULTY_NORMAL][TRAINER_B94D66E3] =
    {
#line 10766
        .trainerName = _("B94D66E3"),
#line 10767
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10768
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10770
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10772
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10771
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10773
    [DIFFICULTY_NORMAL][TRAINER_B9C56D15] =
    {
#line 10774
        .trainerName = _("B9C56D15"),
#line 10775
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10776
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10778
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10780
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10779
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10781
    [DIFFICULTY_NORMAL][TRAINER_BA12D98F] =
    {
#line 10782
        .trainerName = _("BA12D98F"),
#line 10783
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10784
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10786
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10788
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10787
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10789
    [DIFFICULTY_NORMAL][TRAINER_BA4155D3] =
    {
#line 10790
        .trainerName = _("BA4155D3"),
#line 10791
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10792
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10794
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10796
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10795
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10797
    [DIFFICULTY_NORMAL][TRAINER_BA4DFC3A] =
    {
#line 10798
        .trainerName = _("BA4DFC3A"),
#line 10799
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10800
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10802
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10804
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10803
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10805
    [DIFFICULTY_NORMAL][TRAINER_BA60011F] =
    {
#line 10806
        .trainerName = _("BA60011F"),
#line 10807
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10808
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10810
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10812
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10811
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10813
    [DIFFICULTY_NORMAL][TRAINER_BA924FF7] =
    {
#line 10814
        .trainerName = _("BA924FF7"),
#line 10815
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10816
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10818
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10820
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10819
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10821
    [DIFFICULTY_NORMAL][TRAINER_BB07DD1B] =
    {
#line 10822
        .trainerName = _("BB07DD1B"),
#line 10823
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10824
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10826
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10828
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10827
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10829
    [DIFFICULTY_NORMAL][TRAINER_BB531FBA] =
    {
#line 10830
        .trainerName = _("BB531FBA"),
#line 10831
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10832
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10834
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10836
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10835
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10837
    [DIFFICULTY_NORMAL][TRAINER_BB6FD0A4] =
    {
#line 10838
        .trainerName = _("BB6FD0A4"),
#line 10839
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10840
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10842
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10844
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10843
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10845
    [DIFFICULTY_NORMAL][TRAINER_BBBC4B4C] =
    {
#line 10846
        .trainerName = _("BBBC4B4C"),
#line 10847
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10848
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10850
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10852
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10851
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10853
    [DIFFICULTY_NORMAL][TRAINER_BBD56E26] =
    {
#line 10854
        .trainerName = _("BBD56E26"),
#line 10855
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10856
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10858
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10860
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10859
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10861
    [DIFFICULTY_NORMAL][TRAINER_BC01A85B] =
    {
#line 10862
        .trainerName = _("BC01A85B"),
#line 10863
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10864
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10866
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10868
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10867
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10869
    [DIFFICULTY_NORMAL][TRAINER_BC74FA1D] =
    {
#line 10870
        .trainerName = _("BC74FA1D"),
#line 10871
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10872
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10874
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10876
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10875
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10877
    [DIFFICULTY_NORMAL][TRAINER_BC7E8D55] =
    {
#line 10878
        .trainerName = _("BC7E8D55"),
#line 10879
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10880
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10882
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10884
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10883
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10885
    [DIFFICULTY_NORMAL][TRAINER_BCDFD312] =
    {
#line 10886
        .trainerName = _("BCDFD312"),
#line 10887
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10888
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10890
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10892
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10891
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10893
    [DIFFICULTY_NORMAL][TRAINER_BCEFD799] =
    {
#line 10894
        .trainerName = _("BCEFD799"),
#line 10895
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10896
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10898
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10900
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10899
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10901
    [DIFFICULTY_NORMAL][TRAINER_BD01F8F4] =
    {
#line 10902
        .trainerName = _("BD01F8F4"),
#line 10903
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10904
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10906
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10908
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10907
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10909
    [DIFFICULTY_NORMAL][TRAINER_BDC38E1E] =
    {
#line 10910
        .trainerName = _("BDC38E1E"),
#line 10911
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10912
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10914
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10916
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10915
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10917
    [DIFFICULTY_NORMAL][TRAINER_BE2AF14F] =
    {
#line 10918
        .trainerName = _("BE2AF14F"),
#line 10919
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10920
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10922
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10924
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10923
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10925
    [DIFFICULTY_NORMAL][TRAINER_BEB2BD3E] =
    {
#line 10926
        .trainerName = _("BEB2BD3E"),
#line 10927
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10928
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10930
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10932
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10931
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10933
    [DIFFICULTY_NORMAL][TRAINER_BF07B94F] =
    {
#line 10934
        .trainerName = _("BF07B94F"),
#line 10935
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10938
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10940
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10939
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10941
    [DIFFICULTY_NORMAL][TRAINER_BF2827C0] =
    {
#line 10942
        .trainerName = _("BF2827C0"),
#line 10943
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10944
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10946
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10948
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10947
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10949
    [DIFFICULTY_NORMAL][TRAINER_BF74896F] =
    {
#line 10950
        .trainerName = _("BF74896F"),
#line 10951
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10952
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10954
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10956
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10955
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10957
    [DIFFICULTY_NORMAL][TRAINER_BF8ADEF1] =
    {
#line 10958
        .trainerName = _("BF8ADEF1"),
#line 10959
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10960
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10962
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10964
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10963
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10965
    [DIFFICULTY_NORMAL][TRAINER_C0800804] =
    {
#line 10966
        .trainerName = _("C0800804"),
#line 10967
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10968
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10970
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10972
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10971
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10973
    [DIFFICULTY_NORMAL][TRAINER_C091F2C5] =
    {
#line 10974
        .trainerName = _("C091F2C5"),
#line 10975
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10976
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10978
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10980
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10979
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10981
    [DIFFICULTY_NORMAL][TRAINER_C10351D2] =
    {
#line 10982
        .trainerName = _("C10351D2"),
#line 10983
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10984
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10986
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10988
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10987
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10989
    [DIFFICULTY_NORMAL][TRAINER_C1C428F7] =
    {
#line 10990
        .trainerName = _("C1C428F7"),
#line 10991
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 10992
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10994
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10996
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10995
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10997
    [DIFFICULTY_NORMAL][TRAINER_C1C621AC] =
    {
#line 10998
        .trainerName = _("C1C621AC"),
#line 10999
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11000
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11002
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11004
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11003
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11005
    [DIFFICULTY_NORMAL][TRAINER_C203C024] =
    {
#line 11006
        .trainerName = _("C203C024"),
#line 11007
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11008
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11010
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11012
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11011
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11013
    [DIFFICULTY_NORMAL][TRAINER_C2174D90] =
    {
#line 11014
        .trainerName = _("C2174D90"),
#line 11015
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11018
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11020
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11019
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11021
    [DIFFICULTY_NORMAL][TRAINER_C24EFC92] =
    {
#line 11022
        .trainerName = _("C24EFC92"),
#line 11023
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11024
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11026
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11028
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11027
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11029
    [DIFFICULTY_NORMAL][TRAINER_C290C9F5] =
    {
#line 11030
        .trainerName = _("C290C9F5"),
#line 11031
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11032
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11034
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11036
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11035
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11037
    [DIFFICULTY_NORMAL][TRAINER_C29CDC34] =
    {
#line 11038
        .trainerName = _("C29CDC34"),
#line 11039
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11040
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11042
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11044
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11043
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11045
    [DIFFICULTY_NORMAL][TRAINER_C3B3B17B] =
    {
#line 11046
        .trainerName = _("C3B3B17B"),
#line 11047
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11048
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11050
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11052
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11051
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11053
    [DIFFICULTY_NORMAL][TRAINER_C414BED0] =
    {
#line 11054
        .trainerName = _("C414BED0"),
#line 11055
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11056
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11058
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11060
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11059
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11061
    [DIFFICULTY_NORMAL][TRAINER_C42A775B] =
    {
#line 11062
        .trainerName = _("C42A775B"),
#line 11063
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11064
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11066
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11068
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11067
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11069
    [DIFFICULTY_NORMAL][TRAINER_C4A167E0] =
    {
#line 11070
        .trainerName = _("C4A167E0"),
#line 11071
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11074
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11076
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11075
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11077
    [DIFFICULTY_NORMAL][TRAINER_C4C98FC4] =
    {
#line 11078
        .trainerName = _("C4C98FC4"),
#line 11079
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11080
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11082
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11084
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11083
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11085
    [DIFFICULTY_NORMAL][TRAINER_C533F091] =
    {
#line 11086
        .trainerName = _("C533F091"),
#line 11087
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11088
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11090
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11092
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11091
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11093
    [DIFFICULTY_NORMAL][TRAINER_C6600959] =
    {
#line 11094
        .trainerName = _("C6600959"),
#line 11095
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11098
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11100
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11099
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11101
    [DIFFICULTY_NORMAL][TRAINER_C6666859] =
    {
#line 11102
        .trainerName = _("C6666859"),
#line 11103
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11106
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11108
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11107
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11109
    [DIFFICULTY_NORMAL][TRAINER_C690158D] =
    {
#line 11110
        .trainerName = _("C690158D"),
#line 11111
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11112
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11114
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11116
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11115
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11117
    [DIFFICULTY_NORMAL][TRAINER_C6E61EDA] =
    {
#line 11118
        .trainerName = _("C6E61EDA"),
#line 11119
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11120
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11122
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11124
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11123
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11125
    [DIFFICULTY_NORMAL][TRAINER_C7630112] =
    {
#line 11126
        .trainerName = _("C7630112"),
#line 11127
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11128
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11130
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11132
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11131
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11133
    [DIFFICULTY_NORMAL][TRAINER_C789FBF5] =
    {
#line 11134
        .trainerName = _("C789FBF5"),
#line 11135
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11136
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11138
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11140
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11139
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11141
    [DIFFICULTY_NORMAL][TRAINER_C7E06CB4] =
    {
#line 11142
        .trainerName = _("C7E06CB4"),
#line 11143
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11144
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11146
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11148
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11147
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11149
    [DIFFICULTY_NORMAL][TRAINER_C7F16F5B] =
    {
#line 11150
        .trainerName = _("C7F16F5B"),
#line 11151
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11152
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11154
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11156
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11155
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11157
    [DIFFICULTY_NORMAL][TRAINER_C82E0F99] =
    {
#line 11158
        .trainerName = _("C82E0F99"),
#line 11159
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11160
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11162
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11164
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11163
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11165
    [DIFFICULTY_NORMAL][TRAINER_C84D5BA6] =
    {
#line 11166
        .trainerName = _("C84D5BA6"),
#line 11167
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11168
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11170
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11172
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11171
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11173
    [DIFFICULTY_NORMAL][TRAINER_C8563FAA] =
    {
#line 11174
        .trainerName = _("C8563FAA"),
#line 11175
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11176
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11178
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11180
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11179
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11181
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 11182
        .trainerName = _("LEAF"),
#line 11183
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11186
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11188
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11187
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11189
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 11190
        .trainerName = _("RED"),
#line 11191
        .trainerPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
#line 11192
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11194
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11195
            .lvl = 1,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
