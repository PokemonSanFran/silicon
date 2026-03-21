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
    [DIFFICULTY_NORMAL][TRAINER_KAI_NEWASSHOLEAPPEARS] =
    {
#line 271
        .trainerName = _("Kai"),
#line 273
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 272
        .trainerPic = TRAINER_PIC_KAI,
        .encounterMusic_gender =
0,
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
        .trainerBackPic = TRAINER_PIC_KAI,
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
    [DIFFICULTY_NORMAL][TRAINER_KAI_ASSHOLEHOME] =
    {
#line 397
        .trainerName = _("Kai"),
#line 399
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 398
        .trainerPic = TRAINER_PIC_KAI,
        .encounterMusic_gender =
0,
#line 401
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 400
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_KAI,
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
    [DIFFICULTY_NORMAL][TRAINER_KAUNA] =
    {
#line 456
        .trainerName = _("Kauna"),
#line 460
        .trainerClass = TRAINER_CLASS_LEADER,
#line 457
        .trainerPic = TRAINER_PIC_KAUNA,
        .encounterMusic_gender =
0,
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
        .trainerBackPic = TRAINER_PIC_KAUNA,
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
#line 637
            .ev = TRAINER_PARTY_EVS(0, 100, 100, 100, 0, 1),
#line 639
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 634
            .ability = ABILITY_POISON_HEAL,
#line 635
            .lvl = 49,
#line 638
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 636
            .teraType = TYPE_GROUND,
            .moves = {
#line 640
                MOVE_TOXIC_SPIKES,
                MOVE_PROTECT,
                MOVE_EARTHQUAKE,
                MOVE_DUAL_WINGBEAT,
            },
            },
            {
#line 645
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 645
            .heldItem = ITEM_CHOPLE_BERRY,
#line 649
            .ev = TRAINER_PARTY_EVS(252, 0, 45, 1, 0, 0),
#line 651
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 646
            .ability = ABILITY_SERENE_GRACE,
#line 647
            .lvl = 51,
#line 650
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 648
            .teraType = TYPE_NORMAL,
            .moves = {
#line 652
                MOVE_SOFT_BOILED,
                MOVE_PROTECT,
                MOVE_SEISMIC_TOSS,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 657
            .species = SPECIES_FARIGIRAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 657
            .heldItem = ITEM_SITRUS_BERRY,
#line 661
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 1, 252, 0),
#line 663
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 658
            .ability = ABILITY_CUD_CHEW,
#line 659
            .lvl = 50,
#line 662
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 660
            .teraType = TYPE_NORMAL,
            .moves = {
#line 664
                MOVE_PSYCHIC,
                MOVE_HYPER_VOICE,
                MOVE_DAZZLING_GLEAM,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 669
            .species = SPECIES_TOXAPEX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 669
            .heldItem = ITEM_BLACK_SLUDGE,
#line 673
            .ev = TRAINER_PARTY_EVS(252, 0, 1, 0, 0, 48),
#line 675
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 670
            .ability = ABILITY_MERCILESS,
#line 671
            .lvl = 50,
#line 674
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 672
            .teraType = TYPE_POISON,
            .moves = {
#line 676
                MOVE_POISON_JAB,
                MOVE_LIQUIDATION,
                MOVE_BANEFUL_BUNKER,
                MOVE_RECOVER,
            },
            },
            {
#line 681
            .species = SPECIES_AEGISLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 681
            .heldItem = ITEM_STEELIUM_Z,
#line 685
            .ev = TRAINER_PARTY_EVS(48, 252, 0, 1, 0, 0),
#line 687
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 682
            .ability = ABILITY_STANCE_CHANGE,
#line 683
            .lvl = 52,
#line 686
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 684
            .teraType = TYPE_STEEL,
            .moves = {
#line 688
                MOVE_IRON_HEAD,
                MOVE_SHADOW_SNEAK,
                MOVE_SWORDS_DANCE,
                MOVE_KINGS_SHIELD,
            },
            },
        },
    },
#line 693
    [DIFFICULTY_NORMAL][TRAINER_DIMU] =
    {
#line 694
        .trainerName = _("Dimu"),
#line 698
        .trainerClass = TRAINER_CLASS_LEADER,
#line 695
        .trainerPic = TRAINER_PIC_DIMU,
        .encounterMusic_gender =
0,
#line 696
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 697
        .characterRevealId = REVEAL_DIMU,
#line 699
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 700
        .objectEventGraphicsId = OBJ_EVENT_GFX_DIMU,
#line 701
        .mapSec = MAPSEC_HALERBA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_DIMU,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 703
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 703
            .heldItem = ITEM_FOCUS_SASH,
#line 709
            .ev = TRAINER_PARTY_EVS(0, 200, 0, 200, 0, 0),
#line 711
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 704
            .ability = ABILITY_WIND_RIDER,
#line 705
            .lvl = 49,
#line 706
            .ball = ITEM_MASTER_BALL,
#line 708
            .friendship = 1,
#line 710
            .nature = NATURE_JOLLY,
#line 707
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 711
                MOVE_GRASSY_GLIDE,
                MOVE_NIGHT_SLASH,
                MOVE_SWORDS_DANCE,
                MOVE_TAILWIND,
            },
            },
            {
#line 716
            .species = SPECIES_FLORGES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 716
            .heldItem = ITEM_SITRUS_BERRY,
#line 722
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 0, 200, 0),
#line 724
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 717
            .ability = ABILITY_FLOWER_VEIL,
#line 718
            .lvl = 50,
#line 719
            .ball = ITEM_MASTER_BALL,
#line 721
            .friendship = 1,
#line 723
            .nature = NATURE_MODEST,
#line 720
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 725
                MOVE_MOONBLAST,
                MOVE_ENERGY_BALL,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
            },
            },
            {
#line 730
            .species = SPECIES_SCOVILLAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 730
            .heldItem = ITEM_LEFTOVERS,
#line 736
            .ev = TRAINER_PARTY_EVS(200, 200, 0, 0, 0, 0),
#line 737
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 731
            .ability = ABILITY_MOODY,
#line 732
            .lvl = 50,
#line 733
            .ball = ITEM_MASTER_BALL,
#line 735
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 734
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 737
                MOVE_OVERHEAT,
                MOVE_SEED_BOMB,
                MOVE_GRASSY_GLIDE,
                MOVE_PROTECT,
            },
            },
            {
#line 742
            .species = SPECIES_WYRDEER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 742
            .heldItem = ITEM_GRASSY_SEED,
#line 748
            .ev = TRAINER_PARTY_EVS(100, 200, 0, 100, 0, 0),
#line 750
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 743
            .ability = ABILITY_INTIMIDATE,
#line 744
            .lvl = 51,
#line 745
            .ball = ITEM_MASTER_BALL,
#line 747
            .friendship = 1,
#line 749
            .nature = NATURE_JOLLY,
#line 746
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 750
                MOVE_PSYSHIELD_BASH,
                MOVE_BODY_SLAM,
                MOVE_HIGH_HORSEPOWER,
                MOVE_REST,
            },
            },
            {
#line 755
            .species = SPECIES_ARBOLIVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 755
            .heldItem = ITEM_GRASSIUM_Z,
#line 761
            .ev = TRAINER_PARTY_EVS(200, 0, 100, 0, 100, 0),
#line 763
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 756
            .ability = ABILITY_SEED_SOWER,
#line 757
            .lvl = 52,
#line 758
            .ball = ITEM_MASTER_BALL,
#line 760
            .friendship = 1,
#line 762
            .nature = NATURE_MODEST,
#line 759
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 764
                MOVE_ENERGY_BALL,
                MOVE_HYPER_VOICE,
                MOVE_EARTH_POWER,
                MOVE_DAZZLING_GLEAM,
            },
            },
        },
    },
#line 769
    [DIFFICULTY_NORMAL][TRAINER_BD] =
    {
#line 770
        .trainerName = _("BD"),
#line 774
        .trainerClass = TRAINER_CLASS_LEADER,
#line 771
        .trainerPic = TRAINER_PIC_BD,
        .encounterMusic_gender =
0,
#line 772
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 773
        .characterRevealId = REVEAL_BD,
#line 775
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 776
        .objectEventGraphicsId = OBJ_EVENT_GFX_BD,
#line 777
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_BD,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 779
            .species = SPECIES_SHIINOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 779
            .heldItem = ITEM_RED_CARD,
#line 785
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 0, 200, 0),
#line 787
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 780
            .ability = ABILITY_EFFECT_SPORE,
#line 781
            .lvl = 49,
#line 782
            .ball = ITEM_MASTER_BALL,
#line 784
            .friendship = 1,
#line 786
            .nature = NATURE_MODEST,
#line 783
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 788
                MOVE_MOONBLAST,
                MOVE_ENERGY_BALL,
                MOVE_SPORE,
                MOVE_MOONLIGHT,
            },
            },
            {
#line 793
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 793
            .heldItem = ITEM_RED_CARD,
#line 799
            .ev = TRAINER_PARTY_EVS(0, 200, 0, 200, 0, 0),
#line 801
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 794
            .ability = ABILITY_CONTRARY,
#line 795
            .lvl = 50,
#line 796
            .ball = ITEM_MASTER_BALL,
#line 798
            .friendship = 1,
#line 800
            .nature = NATURE_JOLLY,
#line 797
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 801
                MOVE_SUPERPOWER,
                MOVE_DOUBLE_EDGE,
                MOVE_DIZZY_PUNCH,
                MOVE_SUCKER_PUNCH,
            },
            },
            {
#line 806
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 806
            .heldItem = ITEM_RED_CARD,
#line 812
            .ev = TRAINER_PARTY_EVS(200, 100, 0, 0, 100, 0),
#line 814
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 807
            .ability = ABILITY_LEVITATE,
#line 808
            .lvl = 50,
#line 809
            .ball = ITEM_MASTER_BALL,
#line 811
            .friendship = 1,
#line 813
            .nature = NATURE_BRAVE,
#line 810
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 814
                MOVE_GUNK_SHOT,
                MOVE_DESTINY_BOND,
                MOVE_FLAMETHROWER,
                MOVE_DARK_PULSE,
            },
            },
            {
#line 819
            .species = SPECIES_GRAFAIAI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 819
            .heldItem = ITEM_POISONIUM_Z,
#line 825
            .ev = TRAINER_PARTY_EVS(100, 250, 0, 50, 0, 0),
#line 827
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 820
            .ability = ABILITY_UNBURDEN,
#line 821
            .lvl = 51,
#line 822
            .ball = ITEM_MASTER_BALL,
#line 824
            .friendship = 1,
#line 826
            .nature = NATURE_ADAMANT,
#line 823
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 827
                MOVE_GUNK_SHOT,
                MOVE_LOW_SWEEP,
                MOVE_KNOCK_OFF,
                MOVE_TAUNT,
            },
            },
            {
#line 832
            .species = SPECIES_ANNIHILAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 832
            .heldItem = ITEM_SITRUS_BERRY,
#line 838
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 200, 0, 0),
#line 840
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 833
            .ability = ABILITY_DEFIANT,
#line 834
            .lvl = 52,
#line 835
            .ball = ITEM_MASTER_BALL,
#line 837
            .friendship = 1,
#line 839
            .nature = NATURE_ADAMANT,
#line 836
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 840
                MOVE_CLOSE_COMBAT,
                MOVE_DRAIN_PUNCH,
                MOVE_SHADOW_CLAW,
                MOVE_TAUNT,
            },
            },
        },
    },
#line 845
    [DIFFICULTY_NORMAL][TRAINER_AMIARGENTO] =
    {
#line 846
        .trainerName = _("AmiArgento"),
#line 850
        .trainerClass = TRAINER_CLASS_LEADER,
#line 847
        .trainerPic = TRAINER_PIC_AMI,
        .encounterMusic_gender =
0,
#line 848
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 849
        .characterRevealId = REVEAL_AMI,
#line 851
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 852
        .objectEventGraphicsId = OBJ_EVENT_GFX_AMIARGENTO,
#line 853
        .mapSec = MAPSEC_IRISINA_TOWN,
#line 0
        .trainerBackPic = TRAINER_PIC_AMI,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 855
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 855
            .heldItem = ITEM_LEFTOVERS,
#line 861
            .ev = TRAINER_PARTY_EVS(200, 0, 100, 0, 100, 0),
#line 863
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
#line 856
            .ability = ABILITY_OBLIVIOUS,
#line 857
            .lvl = 49,
#line 858
            .ball = ITEM_MASTER_BALL,
#line 860
            .friendship = 1,
#line 862
            .nature = NATURE_RELAXED,
#line 859
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 864
                MOVE_IRON_DEFENSE,
                MOVE_BODY_PRESS,
                MOVE_TRICK_ROOM,
                MOVE_PSYCHIC,
            },
            },
            {
#line 869
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 869
            .heldItem = ITEM_EVIOLITE,
#line 875
            .ev = TRAINER_PARTY_EVS(200, 0, 50, 0, 75, 75),
#line 877
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
#line 870
            .ability = ABILITY_DOWNLOAD,
#line 871
            .lvl = 50,
#line 872
            .ball = ITEM_MASTER_BALL,
#line 874
            .friendship = 1,
#line 876
            .nature = NATURE_QUIET,
#line 873
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 878
                MOVE_TRI_ATTACK,
                MOVE_THUNDERBOLT,
                MOVE_ICE_BEAM,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 883
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 883
            .heldItem = ITEM_ROCKY_HELMET,
#line 889
            .ev = TRAINER_PARTY_EVS(200, 0, 75, 0, 50, 75),
#line 891
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
#line 884
            .ability = ABILITY_FLAME_BODY,
#line 885
            .lvl = 50,
#line 886
            .ball = ITEM_MASTER_BALL,
#line 888
            .friendship = 1,
#line 890
            .nature = NATURE_QUIET,
#line 887
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 892
                MOVE_FLAMETHROWER,
                MOVE_SHADOW_BALL,
                MOVE_CALM_MIND,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 897
            .species = SPECIES_COPPERAJAH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 897
            .heldItem = ITEM_IRON_BALL,
#line 903
            .ev = TRAINER_PARTY_EVS(0, 200, 100, 0, 0, 100),
#line 905
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 898
            .ability = ABILITY_SHEER_FORCE,
#line 899
            .lvl = 51,
#line 900
            .ball = ITEM_MASTER_BALL,
#line 902
            .friendship = 1,
#line 904
            .nature = NATURE_BRAVE,
#line 901
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 906
                MOVE_IRON_HEAD,
                MOVE_ROCK_SLIDE,
                MOVE_HIGH_HORSEPOWER,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 911
            .species = SPECIES_HATTERENE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 911
            .heldItem = ITEM_FAIRIUM_Z,
#line 917
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 0, 200, 0),
#line 919
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
#line 912
            .ability = ABILITY_MAGIC_BOUNCE,
#line 913
            .lvl = 52,
#line 914
            .ball = ITEM_MASTER_BALL,
#line 916
            .friendship = 1,
#line 918
            .nature = NATURE_QUIET,
#line 915
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 920
                MOVE_DAZZLING_GLEAM,
                MOVE_PSYCHIC,
                MOVE_DARK_PULSE,
                MOVE_CALM_MIND,
            },
            },
        },
    },
#line 925
    [DIFFICULTY_NORMAL][TRAINER_KAI_BATTLE8] =
    {
#line 926
        .trainerName = _("Kai"),
#line 928
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 927
        .trainerPic = TRAINER_PIC_KAI,
        .encounterMusic_gender =
0,
#line 930
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 929
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_KAI,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 932
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 932
            .heldItem = ITEM_FOCUS_SASH,
#line 938
            .ev = TRAINER_PARTY_EVS(0, 0, 150, 0, 0, 150),
#line 939
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 933
            .ability = ABILITY_EFFECT_SPORE,
#line 934
            .lvl = 47,
#line 935
            .ball = ITEM_MASTER_BALL,
#line 937
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 936
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 939
                MOVE_SEED_BOMB,
                MOVE_LEECH_LIFE,
                MOVE_SPORE,
                MOVE_RAGE_POWDER,
            },
            },
            {
#line 944
            .species = SPECIES_ROTOM_HEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 950
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 150, 150, 0),
#line 952
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 945
            .ability = ABILITY_LEVITATE,
#line 946
            .lvl = 49,
#line 947
            .ball = ITEM_MASTER_BALL,
#line 949
            .friendship = 1,
#line 951
            .nature = NATURE_TIMID,
#line 948
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 953
                MOVE_OVERHEAT,
                MOVE_THUNDERBOLT,
                MOVE_VOLT_SWITCH,
                MOVE_CHARGE,
            },
            },
            {
#line 958
            .species = SPECIES_HUNTAIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 958
            .heldItem = ITEM_MYSTIC_WATER,
#line 964
            .ev = TRAINER_PARTY_EVS(100, 100, 100, 0, 0, 0),
#line 966
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 959
            .ability = ABILITY_WATER_VEIL,
#line 960
            .lvl = 48,
#line 961
            .ball = ITEM_MASTER_BALL,
#line 963
            .friendship = 1,
#line 965
            .nature = NATURE_ADAMANT,
#line 962
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 966
                MOVE_WATERFALL,
                MOVE_ICE_FANG,
                MOVE_AQUA_RING,
                MOVE_CLAMP,
            },
            },
            {
#line 971
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 977
            .ev = TRAINER_PARTY_EVS(100, 50, 0, 150, 0, 0),
#line 979
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 972
            .ability = ABILITY_CUTE_CHARM,
#line 973
            .lvl = 49,
#line 974
            .ball = ITEM_MASTER_BALL,
#line 976
            .friendship = 1,
#line 978
            .nature = NATURE_JOLLY,
#line 975
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 979
                MOVE_FAKE_OUT,
                MOVE_FACADE,
                MOVE_HELPING_HAND,
                MOVE_PAYBACK,
            },
            },
            {
#line 984
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 984
            .heldItem = ITEM_DRAGONIUM_Z,
#line 990
            .ev = TRAINER_PARTY_EVS(0, 175, 0, 100, 15, 0),
#line 991
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 985
            .ability = ABILITY_SHED_SKIN,
#line 986
            .lvl = 51,
#line 987
            .ball = ITEM_MASTER_BALL,
#line 989
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 988
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 991
                MOVE_DRAGON_RUSH,
                MOVE_IRON_HEAD,
                MOVE_EXTREME_SPEED,
                MOVE_WATERFALL,
            },
            },
        },
    },
#line 996
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE_BEACHBATTLE] =
    {
#line 997
        .trainerName = _("Charlotte"),
#line 998
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 999
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1001
            .species = SPECIES_PALAFIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1001
            .heldItem = ITEM_CHOICE_SCARF,
#line 1007
            .ev = TRAINER_PARTY_EVS(0, 250, 0, 150, 0, 0),
#line 1009
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1002
            .ability = ABILITY_ZERO_TO_HERO,
#line 1003
            .lvl = 50,
#line 1004
            .ball = ITEM_MASTER_BALL,
#line 1006
            .friendship = 1,
#line 1008
            .nature = NATURE_ADAMANT,
#line 1005
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1009
                MOVE_WAVE_CRASH,
                MOVE_FLIP_TURN,
                MOVE_CLOSE_COMBAT,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 1014
            .species = SPECIES_TALONFLAME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1014
            .heldItem = ITEM_SHARP_BEAK,
#line 1020
            .ev = TRAINER_PARTY_EVS(0, 200, 0, 200, 0, 0),
#line 1022
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1015
            .ability = ABILITY_GALE_WINGS,
#line 1016
            .lvl = 49,
#line 1017
            .ball = ITEM_MASTER_BALL,
#line 1019
            .friendship = 1,
#line 1021
            .nature = NATURE_ADAMANT,
#line 1018
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1022
                MOVE_BRAVE_BIRD,
                MOVE_FLARE_BLITZ,
                MOVE_TAILWIND,
                MOVE_DUAL_WINGBEAT,
            },
            },
            {
#line 1027
            .species = SPECIES_DOUBLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1027
            .heldItem = ITEM_EVIOLITE,
#line 1033
            .ev = TRAINER_PARTY_EVS(50, 250, 0, 0, 0, 100),
#line 1035
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1028
            .ability = ABILITY_NO_GUARD,
#line 1029
            .lvl = 50,
#line 1030
            .ball = ITEM_MASTER_BALL,
#line 1032
            .friendship = 1,
#line 1034
            .nature = NATURE_ADAMANT,
#line 1031
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1035
                MOVE_IRON_HEAD,
                MOVE_SACRED_SWORD,
                MOVE_SHADOW_CLAW,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 1040
            .species = SPECIES_TOEDSCRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1040
            .heldItem = ITEM_GROUNDIUM_Z,
#line 1046
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 200, 200, 0),
#line 1048
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1041
            .ability = ABILITY_MYCELIUM_MIGHT,
#line 1042
            .lvl = 51,
#line 1043
            .ball = ITEM_MASTER_BALL,
#line 1045
            .friendship = 1,
#line 1047
            .nature = NATURE_MODEST,
#line 1044
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1049
                MOVE_EARTH_POWER,
                MOVE_ENERGY_BALL,
                MOVE_SPORE,
                MOVE_SLUDGE_BOMB,
            },
            },
            {
#line 1054
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1054
            .heldItem = ITEM_FOCUS_SASH,
#line 1060
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 150, 250, 0),
#line 1062
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1055
            .ability = ABILITY_LEVITATE,
#line 1056
            .lvl = 52,
#line 1057
            .ball = ITEM_MASTER_BALL,
#line 1059
            .friendship = 1,
#line 1061
            .nature = NATURE_SERIOUS,
#line 1058
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1063
                MOVE_DARK_PULSE,
                MOVE_DRAGON_PULSE,
                MOVE_FLAMETHROWER,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 1068
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1068
            .heldItem = ITEM_GALLADITE,
#line 1074
            .ev = TRAINER_PARTY_EVS(200, 200, 0, 0, 0, 0),
#line 1076
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1069
            .ability = ABILITY_SHARPNESS,
#line 1070
            .lvl = 53,
#line 1071
            .ball = ITEM_MASTER_BALL,
#line 1073
            .friendship = 1,
#line 1075
            .nature = NATURE_SERIOUS,
#line 1072
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1076
                MOVE_SACRED_SWORD,
                MOVE_PSYCHO_CUT,
                MOVE_NIGHT_SLASH,
                MOVE_TRICK_ROOM,
            },
            },
        },
    },
#line 1081
    [DIFFICULTY_NORMAL][TRAINER_ALCMENE] =
    {
#line 1082
        .trainerName = _("Alcmene"),
#line 1087
        .trainerClass = TRAINER_CLASS_THE_TIDE_LEADER,
#line 1083
        .trainerPic = TRAINER_PIC_ALCMENE,
        .encounterMusic_gender =
0,
#line 1085
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1084
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 1086
        .characterRevealId = REVEAL_ALCMENE,
#line 1088
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 1089
        .objectEventGraphicsId = OBJ_EVENT_GFX_ALCMENE,
#line 1090
        .mapSec = MAPSEC_NAVAL_BASE,
#line 0
        .trainerBackPic = TRAINER_PIC_ALCMENE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1092
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1092
            .heldItem = ITEM_FOCUS_SASH,
#line 1098
            .ev = TRAINER_PARTY_EVS(12, 248, 0, 248, 0, 0),
#line 1100
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1093
            .ability = ABILITY_SWIFT_SWIM,
#line 1094
            .lvl = 76,
#line 1095
            .ball = ITEM_MASTER_BALL,
#line 1097
            .friendship = 1,
#line 1099
            .nature = NATURE_ADAMANT,
#line 1096
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1100
                MOVE_LIQUIDATION,
                MOVE_CLOSE_COMBAT,
                MOVE_ICE_PUNCH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 1105
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1105
            .heldItem = ITEM_WACAN_BERRY,
#line 1111
            .ev = TRAINER_PARTY_EVS(132, 132, 4, 236, 0, 4),
#line 1113
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1106
            .ability = ABILITY_INTIMIDATE,
#line 1107
            .lvl = 75,
#line 1108
            .ball = ITEM_MASTER_BALL,
#line 1110
            .friendship = 1,
#line 1112
            .nature = NATURE_ADAMANT,
#line 1109
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1113
                MOVE_WATERFALL,
                MOVE_POWER_WHIP,
                MOVE_CRUNCH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 1118
            .species = SPECIES_BEARTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1118
            .heldItem = ITEM_WATERIUM_Z,
#line 1124
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1126
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1119
            .ability = ABILITY_SWIFT_SWIM,
#line 1120
            .lvl = 75,
#line 1121
            .ball = ITEM_MASTER_BALL,
#line 1123
            .friendship = 1,
#line 1125
            .nature = NATURE_ADAMANT,
#line 1122
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1126
                MOVE_ICICLE_CRASH,
                MOVE_LIQUIDATION,
                MOVE_AQUA_JET,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 1131
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1131
            .heldItem = ITEM_CHOICE_BAND,
#line 1137
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1139
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1132
            .ability = ABILITY_INNER_FOCUS,
#line 1133
            .lvl = 76,
#line 1134
            .ball = ITEM_MASTER_BALL,
#line 1136
            .friendship = 1,
#line 1138
            .nature = NATURE_JOLLY,
#line 1135
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1139
                MOVE_CLOSE_COMBAT,
                MOVE_U_TURN,
                MOVE_POISON_JAB,
                MOVE_TRIPLE_AXEL,
            },
            },
            {
#line 1144
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1144
            .heldItem = ITEM_FLYING_GEM,
#line 1150
            .ev = TRAINER_PARTY_EVS(64, 196, 0, 248, 0, 0),
#line 1152
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1145
            .ability = ABILITY_HYPER_CUTTER,
#line 1146
            .lvl = 76,
#line 1147
            .ball = ITEM_MASTER_BALL,
#line 1149
            .friendship = 1,
#line 1151
            .nature = NATURE_ADAMANT,
#line 1148
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1152
                MOVE_HIGH_HORSEPOWER,
                MOVE_ACROBATICS,
                MOVE_X_SCISSOR,
                MOVE_CRABHAMMER,
            },
            },
            {
#line 1157
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1157
            .heldItem = ITEM_SWAMPERTITE,
#line 1163
            .ev = TRAINER_PARTY_EVS(136, 116, 4, 248, 0, 4),
#line 1165
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1158
            .ability = ABILITY_TORRENT,
#line 1159
            .lvl = 77,
#line 1160
            .ball = ITEM_MASTER_BALL,
#line 1162
            .friendship = 1,
#line 1164
            .nature = NATURE_ADAMANT,
#line 1161
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1165
                MOVE_LIQUIDATION,
                MOVE_EARTHQUAKE,
                MOVE_HIGH_HORSEPOWER,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
#line 1170
    [DIFFICULTY_NORMAL][TRAINER_KAI_WHYAREYOUHELPINGTHEM] =
    {
#line 1171
        .trainerName = _("Kai"),
#line 1173
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 1172
        .trainerPic = TRAINER_PIC_KAI,
        .encounterMusic_gender =
0,
#line 1175
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1174
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_KAI,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1177
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1177
            .heldItem = ITEM_FOCUS_SASH,
#line 1183
            .ev = TRAINER_PARTY_EVS(0, 0, 200, 0, 0, 200),
#line 1184
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1178
            .ability = ABILITY_EFFECT_SPORE,
#line 1179
            .lvl = 67,
#line 1180
            .ball = ITEM_MASTER_BALL,
#line 1182
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 1181
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1184
                MOVE_SEED_BOMB,
                MOVE_LEECH_LIFE,
                MOVE_SPORE,
                MOVE_RAGE_POWDER,
            },
            },
            {
#line 1189
            .species = SPECIES_ROTOM_FROST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1195
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 200, 200, 0),
#line 1197
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1190
            .ability = ABILITY_LEVITATE,
#line 1191
            .lvl = 69,
#line 1192
            .ball = ITEM_MASTER_BALL,
#line 1194
            .friendship = 1,
#line 1196
            .nature = NATURE_SERIOUS,
#line 1193
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1198
                MOVE_BLIZZARD,
                MOVE_THUNDERBOLT,
                MOVE_VOLT_SWITCH,
                MOVE_CHARGE,
            },
            },
            {
#line 1203
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1203
            .heldItem = ITEM_CHARCOAL,
#line 1209
            .ev = TRAINER_PARTY_EVS(50, 150, 0, 200, 0, 0),
#line 1211
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1204
            .ability = ABILITY_FLASH_FIRE,
#line 1205
            .lvl = 68,
#line 1206
            .ball = ITEM_MASTER_BALL,
#line 1208
            .friendship = 1,
#line 1210
            .nature = NATURE_ADAMANT,
#line 1207
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1211
                MOVE_BITTER_BLADE,
                MOVE_SHADOW_CLAW,
                MOVE_SHADOW_SNEAK,
                MOVE_BULK_UP,
            },
            },
            {
#line 1216
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1216
            .heldItem = ITEM_SITRUS_BERRY,
#line 1222
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 150, 150, 0),
#line 1224
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1217
            .ability = ABILITY_SHEER_FORCE,
#line 1218
            .lvl = 68,
#line 1219
            .ball = ITEM_MASTER_BALL,
#line 1221
            .friendship = 1,
#line 1223
            .nature = NATURE_TIMID,
#line 1220
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1225
                MOVE_EARTH_POWER,
                MOVE_SLUDGE_BOMB,
                MOVE_ICE_BEAM,
                MOVE_ROAR,
            },
            },
            {
#line 1230
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1236
            .ev = TRAINER_PARTY_EVS(100, 50, 25, 200, 0, 25),
#line 1238
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1231
            .ability = ABILITY_CUTE_CHARM,
#line 1232
            .lvl = 69,
#line 1233
            .ball = ITEM_MASTER_BALL,
#line 1235
            .friendship = 1,
#line 1237
            .nature = NATURE_JOLLY,
#line 1234
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1238
                MOVE_FAKE_OUT,
                MOVE_FACADE,
                MOVE_HELPING_HAND,
                MOVE_HIGH_JUMP_KICK,
            },
            },
            {
#line 1243
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1243
            .heldItem = ITEM_DRAGONIUM_Z,
#line 1249
            .ev = TRAINER_PARTY_EVS(0, 235, 0, 150, 15, 0),
#line 1250
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1244
            .ability = ABILITY_INNER_FOCUS,
#line 1245
            .lvl = 70,
#line 1246
            .ball = ITEM_MASTER_BALL,
#line 1248
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 1247
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1250
                MOVE_DRAGON_CLAW,
                MOVE_AERIAL_ACE,
                MOVE_EXTREME_SPEED,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 1255
    [DIFFICULTY_NORMAL][TRAINER_LEAGUEOPPONENT1] =
    {
#line 1256
        .trainerName = _("League1"),
#line 1257
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 1258
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1260
            .species = SPECIES_GRAFAIAI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1260
            .heldItem = ITEM_ROCKY_HELMET,
#line 1266
            .ev = TRAINER_PARTY_EVS(252, 240, 12, 4, 0, 0),
#line 1268
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1261
            .ability = ABILITY_PRANKSTER,
#line 1262
            .lvl = 72,
#line 1263
            .ball = ITEM_MASTER_BALL,
#line 1265
            .friendship = 1,
#line 1267
            .nature = NATURE_ADAMANT,
#line 1264
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1268
                MOVE_SCARY_FACE,
                MOVE_ENCORE,
                MOVE_GUNK_SHOT,
                MOVE_DOUBLE_EDGE,
            },
            },
            {
#line 1273
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1273
            .heldItem = ITEM_DARKINIUM_Z,
#line 1279
            .ev = TRAINER_PARTY_EVS(4, 4, 0, 248, 252, 0),
#line 1281
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1274
            .ability = ABILITY_ILLUSION,
#line 1275
            .lvl = 72,
#line 1276
            .ball = ITEM_MASTER_BALL,
#line 1278
            .friendship = 1,
#line 1280
            .nature = NATURE_HASTY,
#line 1277
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1281
                MOVE_DARK_PULSE,
                MOVE_SUCKER_PUNCH,
                MOVE_FLAMETHROWER,
                MOVE_EXTRASENSORY,
            },
            },
            {
#line 1286
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1286
            .heldItem = ITEM_SCIZORITE,
#line 1292
            .ev = TRAINER_PARTY_EVS(248, 252, 0, 4, 0, 4),
#line 1294
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1287
            .ability = ABILITY_TECHNICIAN,
#line 1288
            .lvl = 73,
#line 1289
            .ball = ITEM_MASTER_BALL,
#line 1291
            .friendship = 1,
#line 1293
            .nature = NATURE_ADAMANT,
#line 1290
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1294
                MOVE_BULLET_PUNCH,
                MOVE_QUICK_ATTACK,
                MOVE_BUG_BITE,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
#line 1299
    [DIFFICULTY_NORMAL][TRAINER_LEAGUEOPPONENT2] =
    {
#line 1300
        .trainerName = _("League2"),
#line 1301
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 1302
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1304
            .species = SPECIES_VANILLUXE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1304
            .heldItem = ITEM_ICY_ROCK,
#line 1310
            .ev = TRAINER_PARTY_EVS(220, 0, 0, 252, 36, 0),
#line 1312
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1305
            .ability = ABILITY_SNOW_WARNING,
#line 1306
            .lvl = 72,
#line 1307
            .ball = ITEM_MASTER_BALL,
#line 1309
            .friendship = 1,
#line 1311
            .nature = NATURE_TIMID,
#line 1308
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1313
                MOVE_BLIZZARD,
                MOVE_AURORA_VEIL,
                MOVE_FLASH_CANNON,
                MOVE_SHEER_COLD,
            },
            },
            {
#line 1318
            .species = SPECIES_CETITAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1318
            .heldItem = ITEM_SITRUS_BERRY,
#line 1324
            .ev = TRAINER_PARTY_EVS(8, 112, 104, 100, 0, 184),
#line 1326
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1319
            .ability = ABILITY_SLUSH_RUSH,
#line 1320
            .lvl = 72,
#line 1321
            .ball = ITEM_MASTER_BALL,
#line 1323
            .friendship = 1,
#line 1325
            .nature = NATURE_ADAMANT,
#line 1322
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1326
                MOVE_ICICLE_CRASH,
                MOVE_LIQUIDATION,
                MOVE_BELLY_DRUM,
                MOVE_HIGH_HORSEPOWER,
            },
            },
            {
#line 1332
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1338
            .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
#line 1340
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1333
            .ability = ABILITY_HYPER_CUTTER,
#line 1334
            .lvl = 73,
#line 1335
            .ball = ITEM_MASTER_BALL,
#line 1337
            .friendship = 1,
#line 1339
            .nature = NATURE_ADAMANT,
#line 1336
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1340
                MOVE_CRABHAMMER,
                MOVE_BODY_SLAM,
                MOVE_HIGH_HORSEPOWER,
                MOVE_X_SCISSOR,
            },
            },
        },
    },
#line 1345
    [DIFFICULTY_NORMAL][TRAINER_LEAGUEOPPONENT3] =
    {
#line 1346
        .trainerName = _("League3"),
#line 1347
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 1348
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1350
            .species = SPECIES_TOXAPEX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1350
            .heldItem = ITEM_BLACK_SLUDGE,
#line 1356
            .ev = TRAINER_PARTY_EVS(252, 12, 84, 0, 0, 160),
#line 1358
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1351
            .ability = ABILITY_MERCILESS,
#line 1352
            .lvl = 72,
#line 1353
            .ball = ITEM_MASTER_BALL,
#line 1355
            .friendship = 1,
#line 1357
            .nature = NATURE_ADAMANT,
#line 1354
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1358
                MOVE_TOXIC,
                MOVE_BANEFUL_BUNKER,
                MOVE_LIQUIDATION,
                MOVE_POISON_JAB,
            },
            },
            {
#line 1363
            .species = SPECIES_URSALUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1363
            .heldItem = ITEM_CHESTO_BERRY,
#line 1369
            .ev = TRAINER_PARTY_EVS(248, 48, 0, 0, 0, 212),
#line 1371
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1364
            .ability = ABILITY_UNNERVE,
#line 1365
            .lvl = 72,
#line 1366
            .ball = ITEM_MASTER_BALL,
#line 1368
            .friendship = 1,
#line 1370
            .nature = NATURE_CAREFUL,
#line 1367
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1371
                MOVE_YAWN,
                MOVE_REST,
                MOVE_EARTHQUAKE,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 1376
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1376
            .heldItem = ITEM_SLOWBRONITE,
#line 1382
            .ev = TRAINER_PARTY_EVS(252, 0, 60, 0, 0, 196),
#line 1384
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1377
            .ability = ABILITY_OBLIVIOUS,
#line 1378
            .lvl = 73,
#line 1379
            .ball = ITEM_MASTER_BALL,
#line 1381
            .friendship = 1,
#line 1383
            .nature = NATURE_CALM,
#line 1380
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1385
                MOVE_TOXIC,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
        },
    },
#line 1390
    [DIFFICULTY_NORMAL][TRAINER_LEAGUEOPPONENT4] =
    {
#line 1391
        .trainerName = _("League4"),
#line 1392
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 1393
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1395
            .species = SPECIES_KILOWATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1395
            .heldItem = ITEM_FLYINIUM_Z,
#line 1401
            .ev = TRAINER_PARTY_EVS(8, 0, 0, 252, 248, 0),
#line 1403
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1396
            .ability = ABILITY_COMPETITIVE,
#line 1397
            .lvl = 73,
#line 1398
            .ball = ITEM_MASTER_BALL,
#line 1400
            .friendship = 1,
#line 1402
            .nature = NATURE_TIMID,
#line 1399
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1404
                MOVE_HURRICANE,
                MOVE_AIR_SLASH,
                MOVE_THUNDERBOLT,
                MOVE_VOLT_SWITCH,
            },
            },
            {
#line 1409
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1409
            .heldItem = ITEM_MENTAL_HERB,
#line 1415
            .ev = TRAINER_PARTY_EVS(156, 0, 100, 252, 0, 0),
#line 1417
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1410
            .ability = ABILITY_INNER_FOCUS,
#line 1411
            .lvl = 73,
#line 1412
            .ball = ITEM_MASTER_BALL,
#line 1414
            .friendship = 1,
#line 1416
            .nature = NATURE_JOLLY,
#line 1413
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1418
                MOVE_BELLY_DRUM,
                MOVE_BATON_PASS,
                MOVE_COUNTER,
            },
            },
            {
#line 1422
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1422
            .heldItem = ITEM_GYARADOSITE,
#line 1424
            .ev = TRAINER_PARTY_EVS(156, 252, 0, 100, 0, 0),
#line 1426
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1423
            .ability = ABILITY_INTIMIDATE,
#line 1426
            .lvl = 100,
#line 1425
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1426
                MOVE_WATERFALL,
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 1431
    [DIFFICULTY_NORMAL][TRAINER_KAI_FINALS] =
    {
#line 1432
        .trainerName = _("Kai"),
#line 1434
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 1433
        .trainerPic = TRAINER_PIC_KAI,
        .encounterMusic_gender =
0,
#line 1435
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_KAI,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1437
            .species = SPECIES_KLEFKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1437
            .heldItem = ITEM_LIGHT_CLAY,
#line 1443
            .ev = TRAINER_PARTY_EVS(248, 0, 32, 0, 196, 32),
#line 1445
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1438
            .ability = ABILITY_PRANKSTER,
#line 1439
            .lvl = 73,
#line 1440
            .ball = ITEM_MASTER_BALL,
#line 1442
            .friendship = 1,
#line 1444
            .nature = NATURE_MODEST,
#line 1441
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1446
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_DAZZLING_GLEAM,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 1451
            .species = SPECIES_HUNTAIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1451
            .heldItem = ITEM_MYSTIC_WATER,
#line 1457
            .ev = TRAINER_PARTY_EVS(100, 228, 100, 80, 0, 0),
#line 1459
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1452
            .ability = ABILITY_WATER_VEIL,
#line 1453
            .lvl = 73,
#line 1454
            .ball = ITEM_MASTER_BALL,
#line 1456
            .friendship = 1,
#line 1458
            .nature = NATURE_ADAMANT,
#line 1455
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1459
                MOVE_WATERFALL,
                MOVE_ICE_FANG,
                MOVE_CRUNCH,
                MOVE_SHELL_SMASH,
            },
            },
            {
#line 1464
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1464
            .heldItem = ITEM_CHARCOAL,
#line 1470
            .ev = TRAINER_PARTY_EVS(88, 164, 4, 252, 0, 0),
#line 1472
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1465
            .ability = ABILITY_FLASH_FIRE,
#line 1466
            .lvl = 73,
#line 1467
            .ball = ITEM_MASTER_BALL,
#line 1469
            .friendship = 1,
#line 1471
            .nature = NATURE_ADAMANT,
#line 1468
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1472
                MOVE_BITTER_BLADE,
                MOVE_SHADOW_CLAW,
                MOVE_SHADOW_SNEAK,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 1477
            .species = SPECIES_ROTOM_MOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1477
            .heldItem = ITEM_MIRACLE_SEED,
#line 1483
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 252, 200, 4),
#line 1485
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1478
            .ability = ABILITY_LEVITATE,
#line 1479
            .lvl = 73,
#line 1480
            .ball = ITEM_MASTER_BALL,
#line 1482
            .friendship = 1,
#line 1484
            .nature = NATURE_TIMID,
#line 1481
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1486
                MOVE_LEAF_STORM,
                MOVE_THUNDERBOLT,
                MOVE_NASTY_PLOT,
                MOVE_DISCHARGE,
            },
            },
            {
#line 1491
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1491
            .heldItem = ITEM_LOPUNNITE,
#line 1497
            .ev = TRAINER_PARTY_EVS(100, 104, 28, 248, 0, 28),
#line 1499
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1492
            .ability = ABILITY_CUTE_CHARM,
#line 1493
            .lvl = 74,
#line 1494
            .ball = ITEM_MASTER_BALL,
#line 1496
            .friendship = 1,
#line 1498
            .nature = NATURE_JOLLY,
#line 1495
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1499
                MOVE_FACADE,
                MOVE_HIGH_JUMP_KICK,
                MOVE_DRAIN_PUNCH,
                MOVE_BOUNCE,
            },
            },
            {
#line 1504
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1504
            .heldItem = ITEM_DRAGONIUM_Z,
#line 1510
            .ev = TRAINER_PARTY_EVS(60, 248, 0, 200, 0, 0),
#line 1511
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1505
            .ability = ABILITY_INNER_FOCUS,
#line 1506
            .lvl = 74,
#line 1507
            .ball = ITEM_MASTER_BALL,
#line 1509
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 1508
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1511
                MOVE_OUTRAGE,
                MOVE_DRAGON_CLAW,
                MOVE_AERIAL_ACE,
                MOVE_IRON_HEAD,
            },
            },
        },
    },
#line 1516
    [DIFFICULTY_NORMAL][TRAINER_KAI_LETSGRABLUNCH] =
    {
#line 1517
        .trainerName = _("Kai"),
#line 1519
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 1518
        .trainerPic = TRAINER_PIC_KAI,
        .encounterMusic_gender =
0,
#line 1521
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1520
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_KAI,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1523
            .species = SPECIES_KLEFKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1523
            .heldItem = ITEM_LIGHT_CLAY,
#line 1529
            .ev = TRAINER_PARTY_EVS(248, 0, 32, 0, 196, 32),
#line 1531
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1524
            .ability = ABILITY_PRANKSTER,
#line 1525
            .lvl = 73,
#line 1526
            .ball = ITEM_MASTER_BALL,
#line 1528
            .friendship = 1,
#line 1530
            .nature = NATURE_MODEST,
#line 1527
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1532
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_DAZZLING_GLEAM,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 1537
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1537
            .heldItem = ITEM_LIFE_ORB,
#line 1543
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 212, 196, 0),
#line 1545
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1538
            .ability = ABILITY_SHEER_FORCE,
#line 1539
            .lvl = 73,
#line 1540
            .ball = ITEM_MASTER_BALL,
#line 1542
            .friendship = 1,
#line 1544
            .nature = NATURE_TIMID,
#line 1541
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1546
                MOVE_EARTH_POWER,
                MOVE_SLUDGE_WAVE,
                MOVE_ICE_BEAM,
                MOVE_FOCUS_BLAST,
            },
            },
            {
#line 1551
            .species = SPECIES_HUNTAIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1551
            .heldItem = ITEM_MYSTIC_WATER,
#line 1557
            .ev = TRAINER_PARTY_EVS(100, 228, 100, 80, 0, 0),
#line 1559
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1552
            .ability = ABILITY_WATER_VEIL,
#line 1553
            .lvl = 73,
#line 1554
            .ball = ITEM_MASTER_BALL,
#line 1556
            .friendship = 1,
#line 1558
            .nature = NATURE_ADAMANT,
#line 1555
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1559
                MOVE_WATERFALL,
                MOVE_ICE_FANG,
                MOVE_CRUNCH,
                MOVE_SHELL_SMASH,
            },
            },
            {
#line 1564
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1564
            .heldItem = ITEM_CHARCOAL,
#line 1570
            .ev = TRAINER_PARTY_EVS(88, 164, 4, 252, 0, 0),
#line 1572
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1565
            .ability = ABILITY_FLASH_FIRE,
#line 1566
            .lvl = 73,
#line 1567
            .ball = ITEM_MASTER_BALL,
#line 1569
            .friendship = 1,
#line 1571
            .nature = NATURE_ADAMANT,
#line 1568
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1572
                MOVE_BITTER_BLADE,
                MOVE_SHADOW_CLAW,
                MOVE_SHADOW_SNEAK,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 1577
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1577
            .heldItem = ITEM_LOPUNNITE,
#line 1583
            .ev = TRAINER_PARTY_EVS(100, 104, 28, 248, 0, 28),
#line 1585
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1578
            .ability = ABILITY_CUTE_CHARM,
#line 1579
            .lvl = 74,
#line 1580
            .ball = ITEM_MASTER_BALL,
#line 1582
            .friendship = 1,
#line 1584
            .nature = NATURE_JOLLY,
#line 1581
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1585
                MOVE_FACADE,
                MOVE_HIGH_JUMP_KICK,
                MOVE_DRAIN_PUNCH,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 1590
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1590
            .heldItem = ITEM_FLYINIUM_Z,
#line 1596
            .ev = TRAINER_PARTY_EVS(60, 248, 0, 200, 0, 0),
#line 1597
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1591
            .ability = ABILITY_INNER_FOCUS,
#line 1592
            .lvl = 75,
#line 1593
            .ball = ITEM_MASTER_BALL,
#line 1595
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 1594
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1597
                MOVE_DRAGON_CLAW,
                MOVE_AERIAL_ACE,
                MOVE_DRAGON_DANCE,
                MOVE_IRON_HEAD,
            },
            },
        },
    },
#line 1602
    [DIFFICULTY_NORMAL][TRAINER_DOYLE_ZENZU_ISLAND] =
    {
#line 1603
        .trainerName = _("Doyle"),
#line 1605
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 1604
        .trainerPic = TRAINER_PIC_DOYLE,
        .encounterMusic_gender =
0,
#line 1607
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1606
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 1608
        .characterRevealId = REVEAL_DOYLE,
#line 1609
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 1610
        .objectEventGraphicsId = OBJ_EVENT_GFX_DOYLE,
#line 1611
        .mapSec = MAPSEC_ZENZU_ISLAND,
#line 0
        .trainerBackPic = TRAINER_PIC_DOYLE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1613
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1613
            .heldItem = ITEM_LIFE_ORB,
#line 1619
            .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
#line 1621
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1614
            .ability = ABILITY_SHEER_FORCE,
#line 1615
            .lvl = 75,
#line 1616
            .ball = ITEM_MASTER_BALL,
#line 1618
            .friendship = 1,
#line 1620
            .nature = NATURE_TIMID,
#line 1617
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1622
                MOVE_EARTH_POWER,
                MOVE_SLUDGE_BOMB,
                MOVE_ICE_BEAM,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 1627
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1627
            .heldItem = ITEM_CHOPLE_BERRY,
#line 1633
            .ev = TRAINER_PARTY_EVS(252, 60, 52, 0, 0, 144),
#line 1635
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1628
            .ability = ABILITY_SAND_STREAM,
#line 1629
            .lvl = 75,
#line 1630
            .ball = ITEM_MASTER_BALL,
#line 1632
            .friendship = 1,
#line 1634
            .nature = NATURE_ADAMANT,
#line 1631
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1635
                MOVE_ROCK_SLIDE,
                MOVE_ASSURANCE,
                MOVE_HELPING_HAND,
                MOVE_DRAGON_TAIL,
            },
            },
            {
#line 1640
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1640
            .heldItem = ITEM_ASSAULT_VEST,
#line 1646
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 252, 148, 8),
#line 1648
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1641
            .ability = ABILITY_LEVITATE,
#line 1642
            .lvl = 74,
#line 1643
            .ball = ITEM_MASTER_BALL,
#line 1645
            .friendship = 1,
#line 1647
            .nature = NATURE_MODEST,
#line 1644
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1649
                MOVE_DARK_PULSE,
                MOVE_DRACO_METEOR,
                MOVE_EARTH_POWER,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 1654
            .species = SPECIES_VOLCARONA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1654
            .heldItem = ITEM_FIRIUM_Z,
#line 1660
            .ev = TRAINER_PARTY_EVS(128, 0, 120, 252, 8, 0),
#line 1662
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1655
            .ability = ABILITY_FLAME_BODY,
#line 1656
            .lvl = 76,
#line 1657
            .ball = ITEM_MASTER_BALL,
#line 1659
            .friendship = 1,
#line 1661
            .nature = NATURE_TIMID,
#line 1658
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1663
                MOVE_FLAMETHROWER,
                MOVE_BUG_BUZZ,
                MOVE_GIGA_DRAIN,
                MOVE_RAGE_POWDER,
            },
            },
            {
#line 1669
            .species = SPECIES_DURALUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1675
            .ev = TRAINER_PARTY_EVS(8, 0, 0, 0, 248, 252),
#line 1677
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1670
            .ability = ABILITY_STALWART,
#line 1671
            .lvl = 76,
#line 1672
            .ball = ITEM_MASTER_BALL,
#line 1674
            .friendship = 1,
#line 1676
            .nature = NATURE_MODEST,
#line 1673
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1678
                MOVE_FLASH_CANNON,
                MOVE_DRAGON_PULSE,
                MOVE_THUNDERBOLT,
                MOVE_DARK_PULSE,
            },
            },
        },
    },
#line 1683
    [DIFFICULTY_NORMAL][TRAINER_IMELDA] =
    {
#line 1684
        .trainerName = _("Imelda"),
#line 1685
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 1686
        .trainerPic = TRAINER_PIC_IMELDA,
        .encounterMusic_gender =
0,
#line 1688
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1687
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 1689
        .characterRevealId = REVEAL_IMELDA,
#line 1690
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 1691
        .objectEventGraphicsId = OBJ_EVENT_GFX_IMELDA,
#line 1692
        .mapSec = MAPSEC_ESPULEE_OUTSKIRTS,
#line 0
        .trainerBackPic = TRAINER_PIC_IMELDA,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1694
            .species = SPECIES_REVAVROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1694
            .heldItem = ITEM_COVERT_CLOAK,
#line 1700
            .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
#line 1702
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1695
            .ability = ABILITY_OVERCOAT,
#line 1696
            .lvl = 75,
#line 1697
            .ball = ITEM_MASTER_BALL,
#line 1699
            .friendship = 1,
#line 1701
            .nature = NATURE_JOLLY,
#line 1698
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1702
                MOVE_SPIN_OUT,
                MOVE_POISON_GAS,
                MOVE_GUNK_SHOT,
                MOVE_TOXIC_SPIKES,
            },
            },
            {
#line 1707
            .species = SPECIES_POLTEAGEIST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1707
            .heldItem = ITEM_WHITE_HERB,
#line 1713
            .ev = TRAINER_PARTY_EVS(140, 0, 100, 252, 16, 0),
#line 1715
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1708
            .ability = ABILITY_WEAK_ARMOR,
#line 1709
            .lvl = 74,
#line 1710
            .ball = ITEM_MASTER_BALL,
#line 1712
            .friendship = 1,
#line 1714
            .nature = NATURE_TIMID,
#line 1711
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1716
                MOVE_SHADOW_BALL,
                MOVE_GIGA_DRAIN,
                MOVE_SHELL_SMASH,
                MOVE_DARK_PULSE,
            },
            },
            {
#line 1721
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1721
            .heldItem = ITEM_PSYCHIUM_Z,
#line 1727
            .ev = TRAINER_PARTY_EVS(128, 0, 132, 0, 248, 0),
#line 1729
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
#line 1722
            .ability = ABILITY_FLASH_FIRE,
#line 1723
            .lvl = 76,
#line 1724
            .ball = ITEM_MASTER_BALL,
#line 1726
            .friendship = 1,
#line 1728
            .nature = NATURE_RELAXED,
#line 1725
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1730
                MOVE_SHADOW_BALL,
                MOVE_HEAT_WAVE,
                MOVE_TRICK_ROOM,
                MOVE_INFERNO,
            },
            },
            {
#line 1735
            .species = SPECIES_DHELMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1735
            .heldItem = ITEM_ASSAULT_VEST,
#line 1741
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
#line 1743
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 1736
            .ability = ABILITY_STEELWORKER,
#line 1737
            .lvl = 75,
#line 1738
            .ball = ITEM_MASTER_BALL,
#line 1740
            .friendship = 1,
#line 1742
            .nature = NATURE_BRAVE,
#line 1739
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1744
                MOVE_POLTERGEIST,
                MOVE_POWER_WHIP,
                MOVE_ANCHOR_SHOT,
                MOVE_LIQUIDATION,
            },
            },
            {
#line 1750
            .species = SPECIES_GARBODOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1756
            .ev = TRAINER_PARTY_EVS(4, 248, 128, 0, 0, 128),
#line 1758
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 1751
            .ability = ABILITY_STENCH,
#line 1752
            .lvl = 76,
#line 1753
            .ball = ITEM_MASTER_BALL,
#line 1755
            .friendship = 1,
#line 1757
            .nature = NATURE_BRAVE,
#line 1754
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1759
                MOVE_GUNK_SHOT,
                MOVE_PAYBACK,
                MOVE_SEED_BOMB,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 1764
    [DIFFICULTY_NORMAL][TRAINER_ADAORA_HOWDISAPPOINTING] =
    {
#line 1765
        .trainerName = _("Adaora"),
#line 1770
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 1766
        .trainerPic = TRAINER_PIC_ADAORA,
        .encounterMusic_gender =
0,
#line 1768
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1767
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 1769
        .characterRevealId = REVEAL_ADAORA,
#line 1771
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 1772
        .objectEventGraphicsId = OBJ_EVENT_GFX_ADAORA,
#line 1773
        .mapSec = MAPSEC_HODOU_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_ADAORA,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1775
            .species = SPECIES_BARRASKEWDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1775
            .heldItem = ITEM_CHOICE_BAND,
#line 1781
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1783
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1776
            .ability = ABILITY_SWIFT_SWIM,
#line 1777
            .lvl = 73,
#line 1778
            .ball = ITEM_MASTER_BALL,
#line 1780
            .friendship = 1,
#line 1782
            .nature = NATURE_ADAMANT,
#line 1779
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1783
                MOVE_LIQUIDATION,
                MOVE_FLIP_TURN,
                MOVE_CLOSE_COMBAT,
                MOVE_CRUNCH,
            },
            },
            {
#line 1788
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1788
            .heldItem = ITEM_ROCKIUM_Z,
#line 1794
            .ev = TRAINER_PARTY_EVS(136, 100, 8, 252, 0, 12),
#line 1796
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1789
            .ability = ABILITY_SWIFT_SWIM,
#line 1790
            .lvl = 74,
#line 1791
            .ball = ITEM_MASTER_BALL,
#line 1793
            .friendship = 1,
#line 1795
            .nature = NATURE_JOLLY,
#line 1792
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1796
                MOVE_ROCK_SLIDE,
                MOVE_X_SCISSOR,
                MOVE_STONE_EDGE,
                MOVE_STOMPING_TANTRUM,
            },
            },
            {
#line 1801
            .species = SPECIES_GRAPPLOCT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1801
            .heldItem = ITEM_ASSAULT_VEST,
#line 1807
            .ev = TRAINER_PARTY_EVS(252, 112, 132, 0, 0, 12),
#line 1809
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1802
            .ability = ABILITY_TECHNICIAN,
#line 1803
            .lvl = 73,
#line 1804
            .ball = ITEM_MASTER_BALL,
#line 1806
            .friendship = 1,
#line 1808
            .nature = NATURE_ADAMANT,
#line 1805
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1809
                MOVE_CLOSE_COMBAT,
                MOVE_CIRCLE_THROW,
                MOVE_LIQUIDATION,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 1814
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1814
            .heldItem = ITEM_FOCUS_SASH,
#line 1820
            .ev = TRAINER_PARTY_EVS(8, 248, 0, 252, 0, 0),
#line 1822
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1815
            .ability = ABILITY_TECHNICIAN,
#line 1816
            .lvl = 74,
#line 1817
            .ball = ITEM_MASTER_BALL,
#line 1819
            .friendship = 1,
#line 1821
            .nature = NATURE_JOLLY,
#line 1818
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1822
                MOVE_MACH_PUNCH,
                MOVE_BULLET_SEED,
                MOVE_SPORE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 1827
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1827
            .heldItem = ITEM_CHOICE_SPECS,
#line 1833
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 12, 248, 0),
#line 1835
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1828
            .ability = ABILITY_RAIN_DISH,
#line 1829
            .lvl = 74,
#line 1830
            .ball = ITEM_MASTER_BALL,
#line 1832
            .friendship = 1,
#line 1834
            .nature = NATURE_MODEST,
#line 1831
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1836
                MOVE_SLUDGE_BOMB,
                MOVE_MUDDY_WATER,
                MOVE_DAZZLING_GLEAM,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 1842
            .species = SPECIES_DREDNAW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1848
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
#line 1850
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1843
            .ability = ABILITY_SWIFT_SWIM,
#line 1844
            .lvl = 75,
#line 1845
            .ball = ITEM_MASTER_BALL,
#line 1847
            .friendship = 1,
#line 1849
            .nature = NATURE_CAREFUL,
#line 1846
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1850
                MOVE_ROCK_SLIDE,
                MOVE_LIQUIDATION,
                MOVE_HIGH_HORSEPOWER,
                MOVE_BODY_PRESS,
            },
            },
        },
    },
#line 1855
    [DIFFICULTY_NORMAL][TRAINER_KAI_LETSBURNTHISMOTHERDOWN] =
    {
#line 1856
        .trainerName = _("Kai"),
#line 1858
        .trainerClass = TRAINER_CLASS_COMRADE,
#line 1857
        .trainerPic = TRAINER_PIC_KAI,
        .encounterMusic_gender =
0,
#line 1860
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1859
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_KAI,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1862
            .species = SPECIES_KLEFKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1862
            .heldItem = ITEM_LIGHT_CLAY,
#line 1868
            .ev = TRAINER_PARTY_EVS(248, 0, 32, 0, 196, 32),
#line 1870
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1863
            .ability = ABILITY_PRANKSTER,
#line 1864
            .lvl = 74,
#line 1865
            .ball = ITEM_MASTER_BALL,
#line 1867
            .friendship = 1,
#line 1869
            .nature = NATURE_MODEST,
#line 1866
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1871
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_DAZZLING_GLEAM,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 1876
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1876
            .heldItem = ITEM_LOPUNNITE,
#line 1882
            .ev = TRAINER_PARTY_EVS(100, 156, 0, 252, 0, 0),
#line 1884
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1877
            .ability = ABILITY_CUTE_CHARM,
#line 1878
            .lvl = 76,
#line 1879
            .ball = ITEM_MASTER_BALL,
#line 1881
            .friendship = 1,
#line 1883
            .nature = NATURE_JOLLY,
#line 1880
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1884
                MOVE_FAKE_OUT,
                MOVE_FACADE,
                MOVE_HIGH_JUMP_KICK,
                MOVE_U_TURN,
            },
            },
            {
#line 1889
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1889
            .heldItem = ITEM_LIFE_ORB,
#line 1895
            .ev = TRAINER_PARTY_EVS(0, 100, 0, 212, 196, 0),
#line 1897
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1890
            .ability = ABILITY_SHEER_FORCE,
#line 1891
            .lvl = 75,
#line 1892
            .ball = ITEM_MASTER_BALL,
#line 1894
            .friendship = 1,
#line 1896
            .nature = NATURE_HASTY,
#line 1893
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1897
                MOVE_EARTH_POWER,
                MOVE_SLUDGE_BOMB,
                MOVE_ROCK_SLIDE,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 1902
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1902
            .heldItem = ITEM_BIG_ROOT,
#line 1908
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1910
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1903
            .ability = ABILITY_FLASH_FIRE,
#line 1904
            .lvl = 75,
#line 1905
            .ball = ITEM_MASTER_BALL,
#line 1907
            .friendship = 1,
#line 1909
            .nature = NATURE_ADAMANT,
#line 1906
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1910
                MOVE_BITTER_BLADE,
                MOVE_SHADOW_CLAW,
                MOVE_SHADOW_SNEAK,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 1915
            .species = SPECIES_ROTOM_WASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1915
            .heldItem = ITEM_SITRUS_BERRY,
#line 1921
            .ev = TRAINER_PARTY_EVS(156, 0, 0, 252, 100, 0),
#line 1923
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1916
            .ability = ABILITY_LEVITATE,
#line 1917
            .lvl = 75,
#line 1918
            .ball = ITEM_MASTER_BALL,
#line 1920
            .friendship = 1,
#line 1922
            .nature = NATURE_TIMID,
#line 1919
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1924
                MOVE_HYDRO_PUMP,
                MOVE_THUNDERBOLT,
                MOVE_WILL_O_WISP,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 1929
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1929
            .heldItem = ITEM_FLYINIUM_Z,
#line 1935
            .ev = TRAINER_PARTY_EVS(52, 252, 0, 200, 0, 4),
#line 1937
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1930
            .ability = ABILITY_INNER_FOCUS,
#line 1931
            .lvl = 77,
#line 1932
            .ball = ITEM_MASTER_BALL,
#line 1934
            .friendship = 1,
#line 1936
            .nature = NATURE_ADAMANT,
#line 1933
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1937
                MOVE_DRAGON_CLAW,
                MOVE_FLY,
                MOVE_IRON_HEAD,
                MOVE_DRAGON_DANCE,
            },
            },
        },
    },
#line 1942
    [DIFFICULTY_NORMAL][TRAINER_DIANTHA] =
    {
#line 1943
        .trainerName = _("Diantha"),
#line 1944
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 1945
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1947
            .species = SPECIES_HAWLUCHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1947
            .heldItem = ITEM_FLYING_GEM,
#line 1953
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1955
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1948
            .ability = ABILITY_UNBURDEN,
#line 1949
            .lvl = 77,
#line 1950
            .ball = ITEM_MASTER_BALL,
#line 1952
            .friendship = 1,
#line 1954
            .nature = NATURE_ADAMANT,
#line 1951
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1955
                MOVE_ACROBATICS,
                MOVE_FLYING_PRESS,
                MOVE_X_SCISSOR,
                MOVE_POISON_JAB,
            },
            },
            {
#line 1960
            .species = SPECIES_TYRANTRUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1960
            .heldItem = ITEM_ASSAULT_VEST,
#line 1966
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 1968
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1961
            .ability = ABILITY_ROCK_HEAD,
#line 1962
            .lvl = 76,
#line 1963
            .ball = ITEM_MASTER_BALL,
#line 1965
            .friendship = 1,
#line 1967
            .nature = NATURE_ADAMANT,
#line 1964
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1968
                MOVE_HEAD_SMASH,
                MOVE_DRAGON_CLAW,
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 1973
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1973
            .heldItem = ITEM_EJECT_BUTTON,
#line 1979
            .ev = TRAINER_PARTY_EVS(244, 0, 80, 0, 172, 12),
#line 1981
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1974
            .ability = ABILITY_REGENERATOR,
#line 1975
            .lvl = 76,
#line 1976
            .ball = ITEM_MASTER_BALL,
#line 1978
            .friendship = 1,
#line 1980
            .nature = NATURE_MODEST,
#line 1977
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1982
                MOVE_SLUDGE_BOMB,
                MOVE_GRASS_KNOT,
                MOVE_SPORE,
                MOVE_FOUL_PLAY,
            },
            },
            {
#line 1987
            .species = SPECIES_AEGISLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1987
            .heldItem = ITEM_LIFE_ORB,
#line 1993
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 8, 252, 0),
#line 1995
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1988
            .ability = ABILITY_STANCE_CHANGE,
#line 1989
            .lvl = 78,
#line 1990
            .ball = ITEM_MASTER_BALL,
#line 1992
            .friendship = 1,
#line 1994
            .nature = NATURE_MODEST,
#line 1991
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1995
                MOVE_FLASH_CANNON,
                MOVE_SHADOW_BALL,
                MOVE_KINGS_SHIELD,
                MOVE_SHADOW_SNEAK,
            },
            },
            {
#line 2000
            .species = SPECIES_BAXCALIBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2000
            .heldItem = ITEM_ICIUM_Z,
#line 2006
            .ev = TRAINER_PARTY_EVS(76, 180, 0, 252, 0, 0),
#line 2008
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2001
            .ability = ABILITY_THERMAL_EXCHANGE,
#line 2002
            .lvl = 78,
#line 2003
            .ball = ITEM_MASTER_BALL,
#line 2005
            .friendship = 1,
#line 2007
            .nature = NATURE_ADAMANT,
#line 2004
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2008
                MOVE_ICICLE_CRASH,
                MOVE_GLAIVE_RUSH,
                MOVE_HIGH_HORSEPOWER,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 2013
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2013
            .heldItem = ITEM_GARDEVOIRITE,
#line 2019
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2021
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2014
            .ability = ABILITY_TRACE,
#line 2015
            .lvl = 79,
#line 2016
            .ball = ITEM_MASTER_BALL,
#line 2018
            .friendship = 1,
#line 2020
            .nature = NATURE_TIMID,
#line 2017
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2022
                MOVE_MOONBLAST,
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 2027
    [DIFFICULTY_NORMAL][TRAINER_KEI_YING_WAREHOUSE_RAVE] =
    {
#line 2028
        .trainerName = _("Kei-ying"),
#line 2032
        .trainerClass = TRAINER_CLASS_SHARPRISE_COO,
#line 2029
        .trainerPic = TRAINER_PIC_KEI_YING,
        .encounterMusic_gender =
0,
#line 2030
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2031
        .characterRevealId = REVEAL_KEI_YING,
#line 2033
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2034
        .objectEventGraphicsId = OBJ_EVENT_GFX_KEIYING,
#line 2035
        .mapSec = MAPSEC_CURENO_PORT,
#line 0
        .trainerBackPic = TRAINER_PIC_KEI_YING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2037
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2037
            .heldItem = ITEM_FAIRY_GEM,
#line 2043
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 204, 252, 0),
#line 2045
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2038
            .ability = ABILITY_TELEPATHY,
#line 2039
            .lvl = 81,
#line 2040
            .ball = ITEM_MASTER_BALL,
#line 2042
            .friendship = 1,
#line 2044
            .nature = NATURE_TIMID,
#line 2041
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2046
                MOVE_MISTY_EXPLOSION,
            },
            },
            {
#line 2048
            .species = SPECIES_FLORGES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2048
            .heldItem = ITEM_FAIRY_GEM,
#line 2054
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2056
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2049
            .ability = ABILITY_FLOWER_VEIL,
#line 2050
            .lvl = 81,
#line 2051
            .ball = ITEM_MASTER_BALL,
#line 2053
            .friendship = 1,
#line 2055
            .nature = NATURE_TIMID,
#line 2052
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2057
                MOVE_MISTY_EXPLOSION,
            },
            },
            {
#line 2059
            .species = SPECIES_HATTERENE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2059
            .heldItem = ITEM_FAIRY_GEM,
#line 2065
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
#line 2067
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2060
            .ability = ABILITY_MAGIC_BOUNCE,
#line 2061
            .lvl = 81,
#line 2062
            .ball = ITEM_MASTER_BALL,
#line 2064
            .friendship = 1,
#line 2066
            .nature = NATURE_MODEST,
#line 2063
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2068
                MOVE_MISTY_EXPLOSION,
            },
            },
            {
#line 2070
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2070
            .heldItem = ITEM_NORMAL_GEM,
#line 2076
            .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
#line 2078
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 2071
            .ability = ABILITY_LEVITATE,
#line 2072
            .lvl = 81,
#line 2073
            .ball = ITEM_MASTER_BALL,
#line 2075
            .friendship = 1,
#line 2077
            .nature = NATURE_BRAVE,
#line 2074
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2079
                MOVE_EXPLOSION,
            },
            },
        },
    },
#line 2081
    [DIFFICULTY_NORMAL][TRAINER_ARRIBA_CEO] =
    {
#line 2082
        .trainerName = _("Arribaceo"),
#line 2083
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 2084
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2086
            .species = SPECIES_REVAVROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2086
            .heldItem = ITEM_SHUCA_BERRY,
#line 2092
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2094
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2087
            .ability = ABILITY_FILTER,
#line 2088
            .lvl = 80,
#line 2089
            .ball = ITEM_MASTER_BALL,
#line 2091
            .friendship = 1,
#line 2093
            .nature = NATURE_JOLLY,
#line 2090
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2094
                MOVE_SPIN_OUT,
                MOVE_GUNK_SHOT,
                MOVE_OVERHEAT,
                MOVE_SHIFT_GEAR,
            },
            },
            {
#line 2099
            .species = SPECIES_ROTOM_FAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2099
            .heldItem = ITEM_ASSAULT_VEST,
#line 2105
            .ev = TRAINER_PARTY_EVS(128, 0, 0, 128, 252, 0),
#line 2107
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2100
            .ability = ABILITY_LEVITATE,
#line 2101
            .lvl = 79,
#line 2102
            .ball = ITEM_MASTER_BALL,
#line 2104
            .friendship = 1,
#line 2106
            .nature = NATURE_TIMID,
#line 2103
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2108
                MOVE_THUNDERBOLT,
                MOVE_AIR_SLASH,
                MOVE_VOLT_SWITCH,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 2113
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2113
            .heldItem = ITEM_FOCUS_SASH,
#line 2119
            .ev = TRAINER_PARTY_EVS(8, 248, 0, 252, 0, 0),
#line 2121
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2114
            .ability = ABILITY_SPEED_BOOST,
#line 2115
            .lvl = 79,
#line 2116
            .ball = ITEM_MASTER_BALL,
#line 2118
            .friendship = 1,
#line 2120
            .nature = NATURE_ADAMANT,
#line 2117
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2121
                MOVE_WATERFALL,
                MOVE_CRUNCH,
                MOVE_PROTECT,
                MOVE_PSYCHIC_FANGS,
            },
            },
            {
#line 2126
            .species = SPECIES_HAWLUCHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2126
            .heldItem = ITEM_FIGHTING_GEM,
#line 2132
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2134
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2127
            .ability = ABILITY_UNBURDEN,
#line 2128
            .lvl = 80,
#line 2129
            .ball = ITEM_MASTER_BALL,
#line 2131
            .friendship = 1,
#line 2133
            .nature = NATURE_ADAMANT,
#line 2130
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2134
                MOVE_FLYING_PRESS,
                MOVE_ACROBATICS,
                MOVE_ROCK_SLIDE,
                MOVE_U_TURN,
            },
            },
        },
    },
#line 2139
    [DIFFICULTY_NORMAL][TRAINER_BUZZR_CEO] =
    {
#line 2140
        .trainerName = _("Arribaceo"),
#line 2141
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 2142
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2144
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2144
            .heldItem = ITEM_FLAME_ORB,
#line 2150
            .ev = TRAINER_PARTY_EVS(8, 248, 0, 252, 0, 0),
#line 2152
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2145
            .ability = ABILITY_GUTS,
#line 2146
            .lvl = 80,
#line 2147
            .ball = ITEM_MASTER_BALL,
#line 2149
            .friendship = 1,
#line 2151
            .nature = NATURE_JOLLY,
#line 2148
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2152
                MOVE_FACADE,
                MOVE_DUAL_WINGBEAT,
                MOVE_PROTECT,
                MOVE_PARTING_SHOT,
            },
            },
            {
#line 2157
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2157
            .heldItem = ITEM_PSYCHIC_SEED,
#line 2163
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 60, 192, 4),
#line 2165
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2158
            .ability = ABILITY_ADAPTABILITY,
#line 2159
            .lvl = 79,
#line 2160
            .ball = ITEM_MASTER_BALL,
#line 2162
            .friendship = 1,
#line 2164
            .nature = NATURE_MODEST,
#line 2161
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2166
                MOVE_TRI_ATTACK,
                MOVE_ICE_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_CONVERSION_2,
            },
            },
            {
#line 2171
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2171
            .heldItem = ITEM_FOCUS_SASH,
#line 2177
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2179
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2172
            .ability = ABILITY_SHARPNESS,
#line 2173
            .lvl = 79,
#line 2174
            .ball = ITEM_MASTER_BALL,
#line 2176
            .friendship = 1,
#line 2178
            .nature = NATURE_JOLLY,
#line 2175
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2179
                MOVE_PSYCHO_CUT,
                MOVE_SACRED_SWORD,
                MOVE_LEAF_BLADE,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 2184
            .species = SPECIES_ARMAROUGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2184
            .heldItem = ITEM_PSYCHIC_GEM,
#line 2190
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 252, 204, 0),
#line 2192
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2185
            .ability = ABILITY_FLASH_FIRE,
#line 2186
            .lvl = 80,
#line 2187
            .ball = ITEM_MASTER_BALL,
#line 2189
            .friendship = 1,
#line 2191
            .nature = NATURE_MODEST,
#line 2188
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2193
                MOVE_EXPANDING_FORCE,
                MOVE_ARMOR_CANNON,
                MOVE_ENERGY_BALL,
                MOVE_CALM_MIND,
            },
            },
        },
    },
#line 2198
    [DIFFICULTY_NORMAL][TRAINER_PRESTO_CEO] =
    {
#line 2199
        .trainerName = _("Buzzrceo"),
#line 2200
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 2201
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2203
            .species = SPECIES_DRACOZOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2203
            .heldItem = ITEM_BLUNDER_POLICY,
#line 2209
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2211
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2204
            .ability = ABILITY_HUSTLE,
#line 2205
            .lvl = 80,
#line 2206
            .ball = ITEM_MASTER_BALL,
#line 2208
            .friendship = 1,
#line 2210
            .nature = NATURE_JOLLY,
#line 2207
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2211
                MOVE_BOLT_BEAK,
                MOVE_DRAGON_CLAW,
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 2216
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2216
            .heldItem = ITEM_ELECTRIC_SEED,
#line 2222
            .ev = TRAINER_PARTY_EVS(252, 248, 4, 0, 0, 4),
#line 2224
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2217
            .ability = ABILITY_UNBURDEN,
#line 2218
            .lvl = 79,
#line 2219
            .ball = ITEM_MASTER_BALL,
#line 2221
            .friendship = 1,
#line 2223
            .nature = NATURE_ADAMANT,
#line 2220
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2224
                MOVE_HIGH_JUMP_KICK,
                MOVE_BLAZE_KICK,
                MOVE_BULLET_PUNCH,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 2229
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2229
            .heldItem = ITEM_ASSAULT_VEST,
#line 2235
            .ev = TRAINER_PARTY_EVS(56, 252, 4, 192, 0, 4),
#line 2237
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2230
            .ability = ABILITY_TECHNICIAN,
#line 2231
            .lvl = 79,
#line 2232
            .ball = ITEM_MASTER_BALL,
#line 2234
            .friendship = 1,
#line 2236
            .nature = NATURE_JOLLY,
#line 2233
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2237
                MOVE_BULLET_PUNCH,
                MOVE_BUG_BITE,
                MOVE_AERIAL_ACE,
                MOVE_U_TURN,
            },
            },
            {
#line 2242
            .species = SPECIES_VIKAVOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2242
            .heldItem = ITEM_ELECTRIC_GEM,
#line 2248
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
#line 2250
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2243
            .ability = ABILITY_LEVITATE,
#line 2244
            .lvl = 80,
#line 2245
            .ball = ITEM_MASTER_BALL,
#line 2247
            .friendship = 1,
#line 2249
            .nature = NATURE_MODEST,
#line 2246
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2251
                MOVE_RISING_VOLTAGE,
                MOVE_BUG_BUZZ,
                MOVE_ROOST,
                MOVE_FLASH_CANNON,
            },
            },
        },
    },
#line 2256
    [DIFFICULTY_NORMAL][TRAINER_ARRIBA_CEO_RAID] =
    {
#line 2257
        .trainerName = _("Buzzrceo"),
#line 2258
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 2259
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2261
            .species = SPECIES_REVAVROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2261
            .heldItem = ITEM_SHUCA_BERRY,
#line 2267
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2269
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2262
            .ability = ABILITY_FILTER,
#line 2263
            .lvl = 80,
#line 2264
            .ball = ITEM_MASTER_BALL,
#line 2266
            .friendship = 1,
#line 2268
            .nature = NATURE_JOLLY,
#line 2265
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2269
                MOVE_SPIN_OUT,
                MOVE_GUNK_SHOT,
                MOVE_OVERHEAT,
                MOVE_SHIFT_GEAR,
            },
            },
            {
#line 2274
            .species = SPECIES_ROTOM_FAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2274
            .heldItem = ITEM_ASSAULT_VEST,
#line 2280
            .ev = TRAINER_PARTY_EVS(128, 0, 0, 128, 252, 0),
#line 2282
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2275
            .ability = ABILITY_LEVITATE,
#line 2276
            .lvl = 79,
#line 2277
            .ball = ITEM_MASTER_BALL,
#line 2279
            .friendship = 1,
#line 2281
            .nature = NATURE_TIMID,
#line 2278
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2283
                MOVE_THUNDERBOLT,
                MOVE_AIR_SLASH,
                MOVE_VOLT_SWITCH,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 2288
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2288
            .heldItem = ITEM_FOCUS_SASH,
#line 2294
            .ev = TRAINER_PARTY_EVS(8, 248, 0, 252, 0, 0),
#line 2296
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2289
            .ability = ABILITY_SPEED_BOOST,
#line 2290
            .lvl = 79,
#line 2291
            .ball = ITEM_MASTER_BALL,
#line 2293
            .friendship = 1,
#line 2295
            .nature = NATURE_ADAMANT,
#line 2292
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2296
                MOVE_WATERFALL,
                MOVE_CRUNCH,
                MOVE_PROTECT,
                MOVE_PSYCHIC_FANGS,
            },
            },
            {
#line 2301
            .species = SPECIES_HAWLUCHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2301
            .heldItem = ITEM_FIGHTING_GEM,
#line 2307
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2309
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2302
            .ability = ABILITY_UNBURDEN,
#line 2303
            .lvl = 80,
#line 2304
            .ball = ITEM_MASTER_BALL,
#line 2306
            .friendship = 1,
#line 2308
            .nature = NATURE_ADAMANT,
#line 2305
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2309
                MOVE_FLYING_PRESS,
                MOVE_ACROBATICS,
                MOVE_ROCK_SLIDE,
                MOVE_U_TURN,
            },
            },
            {
#line 2314
            .species = SPECIES_PHEROMOSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2314
            .heldItem = ITEM_FIGHTINIUM_Z,
#line 2320
            .ev = TRAINER_PARTY_EVS(100, 28, 0, 128, 252, 0),
#line 2321
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2315
            .ability = ABILITY_SWIFT_ASCENT,
#line 2316
            .lvl = 81,
#line 2317
            .ball = ITEM_MASTER_BALL,
#line 2319
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 2318
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2321
                MOVE_FOCUS_BLAST,
                MOVE_BUG_BUZZ,
                MOVE_ICE_BEAM,
                MOVE_CLOSE_COMBAT,
            },
            },
        },
    },
#line 2326
    [DIFFICULTY_NORMAL][TRAINER_BUZZR_CEO_RAID] =
    {
#line 2327
        .trainerName = _("Prestoceo"),
#line 2328
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 2329
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2331
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2331
            .heldItem = ITEM_FLAME_ORB,
#line 2337
            .ev = TRAINER_PARTY_EVS(8, 248, 0, 252, 0, 0),
#line 2339
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2332
            .ability = ABILITY_GUTS,
#line 2333
            .lvl = 80,
#line 2334
            .ball = ITEM_MASTER_BALL,
#line 2336
            .friendship = 1,
#line 2338
            .nature = NATURE_JOLLY,
#line 2335
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2339
                MOVE_FACADE,
                MOVE_DUAL_WINGBEAT,
                MOVE_PROTECT,
                MOVE_PARTING_SHOT,
            },
            },
            {
#line 2344
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2344
            .heldItem = ITEM_PSYCHIC_SEED,
#line 2350
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 60, 192, 4),
#line 2352
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2345
            .ability = ABILITY_ADAPTABILITY,
#line 2346
            .lvl = 79,
#line 2347
            .ball = ITEM_MASTER_BALL,
#line 2349
            .friendship = 1,
#line 2351
            .nature = NATURE_MODEST,
#line 2348
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2353
                MOVE_TRI_ATTACK,
                MOVE_ICE_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_CONVERSION_2,
            },
            },
            {
#line 2358
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2358
            .heldItem = ITEM_FOCUS_SASH,
#line 2364
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2366
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2359
            .ability = ABILITY_SHARPNESS,
#line 2360
            .lvl = 79,
#line 2361
            .ball = ITEM_MASTER_BALL,
#line 2363
            .friendship = 1,
#line 2365
            .nature = NATURE_JOLLY,
#line 2362
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2366
                MOVE_PSYCHO_CUT,
                MOVE_SACRED_SWORD,
                MOVE_LEAF_BLADE,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 2371
            .species = SPECIES_ARMAROUGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2371
            .heldItem = ITEM_PSYCHIC_GEM,
#line 2377
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 252, 204, 0),
#line 2379
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2372
            .ability = ABILITY_FLASH_FIRE,
#line 2373
            .lvl = 80,
#line 2374
            .ball = ITEM_MASTER_BALL,
#line 2376
            .friendship = 1,
#line 2378
            .nature = NATURE_MODEST,
#line 2375
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2380
                MOVE_EXPANDING_FORCE,
                MOVE_ARMOR_CANNON,
                MOVE_ENERGY_BALL,
                MOVE_CALM_MIND,
            },
            },
            {
#line 2385
            .species = SPECIES_BLACEPHALON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2385
            .heldItem = ITEM_PSYCHIUM_Z,
#line 2391
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2393
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2386
            .ability = ABILITY_SWIFT_ASCENT,
#line 2387
            .lvl = 81,
#line 2388
            .ball = ITEM_MASTER_BALL,
#line 2390
            .friendship = 1,
#line 2392
            .nature = NATURE_TIMID,
#line 2389
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2394
                MOVE_EXPANDING_FORCE,
                MOVE_SHADOW_BALL,
                MOVE_FLAMETHROWER,
                MOVE_MIND_BLOWN,
            },
            },
        },
    },
#line 2399
    [DIFFICULTY_NORMAL][TRAINER_PRESTO_CEO_RAID] =
    {
#line 2400
        .trainerName = _("Prestoceo"),
#line 2401
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 2402
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2404
            .species = SPECIES_DRACOZOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2404
            .heldItem = ITEM_BLUNDER_POLICY,
#line 2410
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2412
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2405
            .ability = ABILITY_HUSTLE,
#line 2406
            .lvl = 80,
#line 2407
            .ball = ITEM_MASTER_BALL,
#line 2409
            .friendship = 1,
#line 2411
            .nature = NATURE_JOLLY,
#line 2408
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2412
                MOVE_BOLT_BEAK,
                MOVE_DRAGON_CLAW,
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 2417
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2417
            .heldItem = ITEM_ELECTRIC_SEED,
#line 2423
            .ev = TRAINER_PARTY_EVS(252, 248, 4, 0, 0, 4),
#line 2425
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2418
            .ability = ABILITY_UNBURDEN,
#line 2419
            .lvl = 79,
#line 2420
            .ball = ITEM_MASTER_BALL,
#line 2422
            .friendship = 1,
#line 2424
            .nature = NATURE_ADAMANT,
#line 2421
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2425
                MOVE_HIGH_JUMP_KICK,
                MOVE_BLAZE_KICK,
                MOVE_BULLET_PUNCH,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 2430
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2430
            .heldItem = ITEM_ASSAULT_VEST,
#line 2436
            .ev = TRAINER_PARTY_EVS(56, 252, 4, 192, 0, 4),
#line 2438
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2431
            .ability = ABILITY_TECHNICIAN,
#line 2432
            .lvl = 79,
#line 2433
            .ball = ITEM_MASTER_BALL,
#line 2435
            .friendship = 1,
#line 2437
            .nature = NATURE_JOLLY,
#line 2434
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2438
                MOVE_BULLET_PUNCH,
                MOVE_BUG_BITE,
                MOVE_AERIAL_ACE,
                MOVE_U_TURN,
            },
            },
            {
#line 2443
            .species = SPECIES_VIKAVOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2443
            .heldItem = ITEM_ELECTRIC_GEM,
#line 2449
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
#line 2451
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2444
            .ability = ABILITY_LEVITATE,
#line 2445
            .lvl = 80,
#line 2446
            .ball = ITEM_MASTER_BALL,
#line 2448
            .friendship = 1,
#line 2450
            .nature = NATURE_MODEST,
#line 2447
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2452
                MOVE_RISING_VOLTAGE,
                MOVE_BUG_BUZZ,
                MOVE_ROOST,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 2457
            .species = SPECIES_XURKITREE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2457
            .heldItem = ITEM_ELECTRIUM_Z,
#line 2463
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
#line 2465
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2458
            .ability = ABILITY_SWIFT_ASCENT,
#line 2459
            .lvl = 81,
#line 2460
            .ball = ITEM_MASTER_BALL,
#line 2462
            .friendship = 1,
#line 2464
            .nature = NATURE_TIMID,
#line 2461
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2466
                MOVE_RISING_VOLTAGE,
                MOVE_DAZZLING_GLEAM,
                MOVE_ENERGY_BALL,
                MOVE_TAIL_GLOW,
            },
            },
        },
    },
#line 2471
    [DIFFICULTY_NORMAL][TRAINER_RAMESH_IMIN] =
    {
#line 2472
        .trainerName = _("Ramesh"),
#line 2476
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 2473
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
0,
#line 2474
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2475
        .characterRevealId = REVEAL_RAMESH,
#line 2477
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2478
        .objectEventGraphicsId = OBJ_EVENT_GFX_RAMESH,
#line 2479
        .mapSec = MAPSEC_SHARPRISESPIRE,
#line 0
        .trainerBackPic = TRAINER_PIC_MAGMA_ADMIN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2481
            .species = SPECIES_GHOLDENGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2481
            .heldItem = ITEM_STEEL_GEM,
#line 2487
            .ev = TRAINER_PARTY_EVS(248, 0, 96, 0, 0, 164),
#line 2489
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2482
            .ability = ABILITY_GOOD_AS_GOLD,
#line 2483
            .lvl = 84,
#line 2484
            .ball = ITEM_MASTER_BALL,
#line 2486
            .friendship = 1,
#line 2488
            .nature = NATURE_BOLD,
#line 2485
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2490
                MOVE_MAKE_IT_RAIN,
                MOVE_SHADOW_BALL,
                MOVE_NASTY_PLOT,
                MOVE_RECOVER,
            },
            },
            {
#line 2495
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2495
            .heldItem = ITEM_FOCUS_SASH,
#line 2501
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2503
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2496
            .ability = ABILITY_LEVITATE,
#line 2497
            .lvl = 83,
#line 2498
            .ball = ITEM_MASTER_BALL,
#line 2500
            .friendship = 1,
#line 2502
            .nature = NATURE_TIMID,
#line 2499
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2504
                MOVE_DARK_PULSE,
                MOVE_DRAGON_PULSE,
                MOVE_FLAMETHROWER,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 2509
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2509
            .heldItem = ITEM_ASSAULT_VEST,
#line 2515
            .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
#line 2517
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2510
            .ability = ABILITY_ROCK_HEAD,
#line 2511
            .lvl = 84,
#line 2512
            .ball = ITEM_MASTER_BALL,
#line 2514
            .friendship = 1,
#line 2516
            .nature = NATURE_CAREFUL,
#line 2513
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2517
                MOVE_HEAD_SMASH,
                MOVE_LIQUIDATION,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 2522
            .species = SPECIES_BUZZWOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2522
            .heldItem = ITEM_BUGINIUM_Z,
#line 2528
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
#line 2530
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2523
            .ability = ABILITY_SWIFT_ASCENT,
#line 2524
            .lvl = 85,
#line 2525
            .ball = ITEM_MASTER_BALL,
#line 2527
            .friendship = 1,
#line 2529
            .nature = NATURE_ADAMANT,
#line 2526
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2530
                MOVE_CLOSE_COMBAT,
                MOVE_LEECH_LIFE,
                MOVE_EARTHQUAKE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 2535
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2535
            .heldItem = ITEM_ALAKAZITE,
#line 2541
            .ev = TRAINER_PARTY_EVS(8, 0, 0, 248, 252, 0),
#line 2543
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2536
            .ability = ABILITY_SYNCHRONIZE,
#line 2537
            .lvl = 85,
#line 2538
            .ball = ITEM_MASTER_BALL,
#line 2540
            .friendship = 1,
#line 2542
            .nature = NATURE_TIMID,
#line 2539
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2544
                MOVE_PSYCHIC,
                MOVE_DAZZLING_GLEAM,
                MOVE_SHADOW_BALL,
                MOVE_FOCUS_BLAST,
            },
            },
        },
    },
#line 2549
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE_IMIN] =
    {
#line 2550
        .trainerName = _("Charlotte"),
#line 2551
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 2552
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2554
            .species = SPECIES_ARMAROUGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2554
            .heldItem = ITEM_WEAKNESS_POLICY,
#line 2560
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
#line 2562
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2555
            .ability = ABILITY_WEAK_ARMOR,
#line 2556
            .lvl = 85,
#line 2557
            .ball = ITEM_MASTER_BALL,
#line 2559
            .friendship = 1,
#line 2561
            .nature = NATURE_TIMID,
#line 2558
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2563
                MOVE_ARMOR_CANNON,
                MOVE_PSYCHIC,
                MOVE_AURA_SPHERE,
                MOVE_ENERGY_BALL,
            },
            },
            {
#line 2568
            .species = SPECIES_HAXORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2568
            .heldItem = ITEM_ASSAULT_VEST,
#line 2574
            .ev = TRAINER_PARTY_EVS(152, 252, 4, 100, 0, 0),
#line 2576
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2569
            .ability = ABILITY_MOLD_BREAKER,
#line 2570
            .lvl = 86,
#line 2571
            .ball = ITEM_MASTER_BALL,
#line 2573
            .friendship = 1,
#line 2575
            .nature = NATURE_ADAMANT,
#line 2572
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2576
                MOVE_DRAGON_CLAW,
                MOVE_IRON_HEAD,
                MOVE_FIRST_IMPRESSION,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 2581
            .species = SPECIES_CORVIKNIGHT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2581
            .heldItem = ITEM_WACAN_BERRY,
#line 2587
            .ev = TRAINER_PARTY_EVS(252, 100, 0, 100, 0, 56),
#line 2589
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2582
            .ability = ABILITY_MIRROR_ARMOR,
#line 2583
            .lvl = 85,
#line 2584
            .ball = ITEM_MASTER_BALL,
#line 2586
            .friendship = 1,
#line 2588
            .nature = NATURE_ADAMANT,
#line 2585
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2589
                MOVE_IRON_HEAD,
                MOVE_BRAVE_BIRD,
                MOVE_BULK_UP,
                MOVE_POWER_TRIP,
            },
            },
            {
#line 2594
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2594
            .heldItem = ITEM_FAIRY_GEM,
#line 2600
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2602
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2595
            .ability = ABILITY_SYNCHRONIZE,
#line 2596
            .lvl = 86,
#line 2597
            .ball = ITEM_MASTER_BALL,
#line 2599
            .friendship = 1,
#line 2601
            .nature = NATURE_TIMID,
#line 2598
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2603
                MOVE_MOONBLAST,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 2608
            .species = SPECIES_SERPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2608
            .heldItem = ITEM_GRASSIUM_Z,
#line 2614
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
#line 2616
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2609
            .ability = ABILITY_CONTRARY,
#line 2610
            .lvl = 86,
#line 2611
            .ball = ITEM_MASTER_BALL,
#line 2613
            .friendship = 1,
#line 2615
            .nature = NATURE_QUIRKY,
#line 2612
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2616
                MOVE_LEAF_STORM,
                MOVE_AQUA_TAIL,
                MOVE_DRAGON_PULSE,
                MOVE_FRENZY_PLANT,
            },
            },
            {
#line 2622
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2628
            .ev = TRAINER_PARTY_EVS(176, 0, 0, 80, 252, 0),
#line 2630
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2623
            .ability = ABILITY_WATER_ABSORB,
#line 2624
            .lvl = 87,
#line 2625
            .ball = ITEM_MASTER_BALL,
#line 2627
            .friendship = 1,
#line 2629
            .nature = NATURE_MODEST,
#line 2626
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2631
                MOVE_ICE_BEAM,
                MOVE_SPARKLING_ARIA,
                MOVE_THUNDERBOLT,
                MOVE_REST,
            },
            },
        },
    },
#line 2636
    [DIFFICULTY_NORMAL][TRAINER_ADELAIDE_A] =
    {
#line 2637
        .trainerName = _("Adelaide"),
#line 2641
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 2638
        .trainerPic = TRAINER_PIC_ADELAIDE,
        .encounterMusic_gender =
0,
#line 2639
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2640
        .characterRevealId = REVEAL_ADELAIDE,
#line 2642
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2643
        .objectEventGraphicsId = OBJ_EVENT_GFX_ADELAIDE,
#line 2644
        .mapSec = MAPSEC_SHARPRISESPIRE,
#line 0
        .trainerBackPic = TRAINER_PIC_ADELAIDE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2646
            .species = SPECIES_SALAZZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2646
            .heldItem = ITEM_FOCUS_SASH,
#line 2652
            .ev = TRAINER_PARTY_EVS(8, 0, 0, 252, 248, 0),
#line 2654
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2647
            .ability = ABILITY_OBLIVIOUS,
#line 2648
            .lvl = 87,
#line 2649
            .ball = ITEM_MASTER_BALL,
#line 2651
            .friendship = 1,
#line 2653
            .nature = NATURE_TIMID,
#line 2650
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2655
                MOVE_FLAMETHROWER,
                MOVE_SLUDGE_WAVE,
                MOVE_TOXIC_SPIKES,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 2660
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2660
            .heldItem = ITEM_CHOPLE_BERRY,
#line 2666
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 2668
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2661
            .ability = ABILITY_SAND_STREAM,
#line 2662
            .lvl = 86,
#line 2663
            .ball = ITEM_MASTER_BALL,
#line 2665
            .friendship = 1,
#line 2667
            .nature = NATURE_ADAMANT,
#line 2664
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2668
                MOVE_ROCK_SLIDE,
                MOVE_CRUNCH,
                MOVE_IRON_HEAD,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 2673
            .species = SPECIES_ANNIHILAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2673
            .heldItem = ITEM_FIGHTING_GEM,
#line 2679
            .ev = TRAINER_PARTY_EVS(252, 144, 12, 96, 0, 4),
#line 2681
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2674
            .ability = ABILITY_DEFIANT,
#line 2675
            .lvl = 86,
#line 2676
            .ball = ITEM_MASTER_BALL,
#line 2678
            .friendship = 1,
#line 2680
            .nature = NATURE_ADAMANT,
#line 2677
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2681
                MOVE_RAGE_FIST,
                MOVE_DRAIN_PUNCH,
                MOVE_BULK_UP,
                MOVE_CLOSE_COMBAT,
            },
            },
            {
#line 2686
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2686
            .heldItem = ITEM_SCOPE_LENS,
#line 2692
            .ev = TRAINER_PARTY_EVS(116, 0, 0, 248, 144, 0),
#line 2694
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2687
            .ability = ABILITY_SUPER_LUCK,
#line 2688
            .lvl = 87,
#line 2689
            .ball = ITEM_MASTER_BALL,
#line 2691
            .friendship = 1,
#line 2693
            .nature = NATURE_TIMID,
#line 2690
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2695
                MOVE_AIR_SLASH,
                MOVE_DAZZLING_GLEAM,
                MOVE_HEAT_WAVE,
                MOVE_TAILWIND,
            },
            },
            {
#line 2700
            .species = SPECIES_ARCHALUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2700
            .heldItem = ITEM_DRAGONIUM_Z,
#line 2706
            .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 252, 0),
#line 2708
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2701
            .ability = ABILITY_STAMINA,
#line 2702
            .lvl = 88,
#line 2703
            .ball = ITEM_MASTER_BALL,
#line 2705
            .friendship = 1,
#line 2707
            .nature = NATURE_BOLD,
#line 2704
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2709
                MOVE_DRACO_METEOR,
                MOVE_FLASH_CANNON,
                MOVE_BODY_PRESS,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 2715
            .species = SPECIES_ORBEETLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2721
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 8, 248, 0),
#line 2723
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2716
            .ability = ABILITY_FRISK,
#line 2717
            .lvl = 89,
#line 2718
            .ball = ITEM_MASTER_BALL,
#line 2720
            .friendship = 1,
#line 2722
            .nature = NATURE_MODEST,
#line 2719
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2724
                MOVE_EXPANDING_FORCE,
                MOVE_BUG_BUZZ,
                MOVE_ENERGY_BALL,
                MOVE_AGILITY,
            },
            },
        },
    },
#line 2729
    [DIFFICULTY_NORMAL][TRAINER_ADELAIDE_B] =
    {
#line 2730
        .trainerName = _("Adelaide"),
#line 2731
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
0,
#line 2732
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2733
        .mapSec = MAPSEC_SHARPRISESPIRE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2735
            .species = SPECIES_NIHILEGO_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2735
            .heldItem = ITEM_POWER_HERB,
#line 2741
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2743
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2736
            .ability = ABILITY_SWIFT_ASCENT,
#line 2737
            .lvl = 90,
#line 2738
            .ball = ITEM_MASTER_BALL,
#line 2740
            .friendship = 1,
#line 2742
            .nature = NATURE_TIMID,
#line 2739
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2744
                MOVE_POWER_GEM,
                MOVE_SLUDGE_WAVE,
                MOVE_DAZZLING_GLEAM,
                MOVE_METEOR_BEAM,
            },
            },
            {
#line 2749
            .species = SPECIES_CELESTEELA_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2749
            .heldItem = ITEM_LEFTOVERS,
#line 2755
            .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 0, 128),
#line 2756
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2750
            .ability = ABILITY_SWIFT_ASCENT,
#line 2751
            .lvl = 90,
#line 2752
            .ball = ITEM_MASTER_BALL,
#line 2754
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 2753
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2756
                MOVE_HEAVY_SLAM,
                MOVE_LEECH_SEED,
                MOVE_PROTECT,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 2761
            .species = SPECIES_KARTANA_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2761
            .heldItem = ITEM_ASSAULT_VEST,
#line 2767
            .ev = TRAINER_PARTY_EVS(0, 8, 0, 252, 0, 248),
#line 2769
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2762
            .ability = ABILITY_SWIFT_ASCENT,
#line 2763
            .lvl = 90,
#line 2764
            .ball = ITEM_MASTER_BALL,
#line 2766
            .friendship = 1,
#line 2768
            .nature = NATURE_ADAMANT,
#line 2765
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2769
                MOVE_LEAF_BLADE,
                MOVE_SMART_STRIKE,
                MOVE_SACRED_SWORD,
                MOVE_GUILLOTINE,
            },
            },
            {
#line 2774
            .species = SPECIES_GUZZLORD_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2774
            .heldItem = ITEM_ROSELI_BERRY,
#line 2780
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 4),
#line 2781
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 2775
            .ability = ABILITY_SWIFT_ASCENT,
#line 2776
            .lvl = 90,
#line 2777
            .ball = ITEM_MASTER_BALL,
#line 2779
            .friendship = 1,
            .nature = NATURE_HARDY,
#line 2778
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2782
                MOVE_DRAGON_PULSE,
                MOVE_DARK_PULSE,
                MOVE_FLAMETHROWER,
                MOVE_GYRO_BALL,
            },
            },
            {
#line 2787
            .species = SPECIES_NAGANADEL_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2787
            .heldItem = ITEM_POISONIUM_Z,
#line 2793
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 2795
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2788
            .ability = ABILITY_SWIFT_ASCENT,
#line 2789
            .lvl = 90,
#line 2790
            .ball = ITEM_MASTER_BALL,
#line 2792
            .friendship = 1,
#line 2794
            .nature = NATURE_TIMID,
#line 2791
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2796
                MOVE_SLUDGE_WAVE,
                MOVE_DRACO_METEOR,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 2801
            .species = SPECIES_STAKATAKA_SHARPRISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2801
            .heldItem = ITEM_SHUCA_BERRY,
#line 2807
            .ev = TRAINER_PARTY_EVS(252, 0, 96, 0, 0, 160),
#line 2809
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 2802
            .ability = ABILITY_SWIFT_ASCENT,
#line 2803
            .lvl = 90,
#line 2804
            .ball = ITEM_MASTER_BALL,
#line 2806
            .friendship = 1,
#line 2808
            .nature = NATURE_CAREFUL,
#line 2805
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2810
                MOVE_GYRO_BALL,
                MOVE_STONE_EDGE,
                MOVE_BODY_PRESS,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 2815
    [DIFFICULTY_NORMAL][TRAINER_MAGNUS_PROLOGUE] =
    {
#line 2816
        .trainerName = _("Magnus"),
#line 2821
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 2817
        .trainerPic = TRAINER_PIC_MAGNUS,
        .encounterMusic_gender =
0,
#line 2819
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2818
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2820
        .characterRevealId = REVEAL_MAGNUS,
#line 2822
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2823
        .objectEventGraphicsId = OBJ_EVENT_GFX_MAGNUS,
#line 2824
        .mapSec = MAPSEC_OROLAND_COLISEUM,
#line 0
        .trainerBackPic = TRAINER_PIC_MAGNUS,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2826
            .species = SPECIES_DRACOVISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2826
            .heldItem = ITEM_MYSTIC_WATER,
#line 2832
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2834
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2827
            .ability = ABILITY_SAND_RUSH,
#line 2828
            .lvl = 87,
#line 2829
            .ball = ITEM_MASTER_BALL,
#line 2831
            .friendship = 1,
#line 2833
            .nature = NATURE_ADAMANT,
#line 2830
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2834
                MOVE_FISHIOUS_REND,
                MOVE_EARTHQUAKE,
                MOVE_DRAGON_RUSH,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 2839
            .species = SPECIES_SANDACONDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2839
            .heldItem = ITEM_SITRUS_BERRY,
#line 2845
            .ev = TRAINER_PARTY_EVS(252, 80, 0, 0, 0, 176),
#line 2847
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2840
            .ability = ABILITY_SAND_SPIT,
#line 2841
            .lvl = 88,
#line 2842
            .ball = ITEM_MASTER_BALL,
#line 2844
            .friendship = 1,
#line 2846
            .nature = NATURE_CAREFUL,
#line 2843
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2847
                MOVE_HIGH_HORSEPOWER,
                MOVE_STONE_EDGE,
                MOVE_GLARE,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 2852
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2852
            .heldItem = ITEM_SCOPE_LENS,
#line 2858
            .ev = TRAINER_PARTY_EVS(156, 0, 0, 252, 100, 0),
#line 2860
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2853
            .ability = ABILITY_SUPER_LUCK,
#line 2854
            .lvl = 87,
#line 2855
            .ball = ITEM_MASTER_BALL,
#line 2857
            .friendship = 1,
#line 2859
            .nature = NATURE_TIMID,
#line 2856
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2861
                MOVE_DAZZLING_GLEAM,
                MOVE_AIR_CUTTER,
                MOVE_TAILWIND,
                MOVE_FOLLOW_ME,
            },
            },
            {
#line 2866
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2866
            .heldItem = ITEM_FLYING_GEM,
#line 2872
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2874
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2867
            .ability = ABILITY_SAND_VEIL,
#line 2868
            .lvl = 87,
#line 2869
            .ball = ITEM_MASTER_BALL,
#line 2871
            .friendship = 1,
#line 2873
            .nature = NATURE_JOLLY,
#line 2870
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2874
                MOVE_ACROBATICS,
                MOVE_HIGH_HORSEPOWER,
                MOVE_SWORDS_DANCE,
                MOVE_BRICK_BREAK,
            },
            },
            {
#line 2879
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2879
            .heldItem = ITEM_GROUNDIUM_Z,
#line 2885
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2887
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2880
            .ability = ABILITY_SAND_RUSH,
#line 2881
            .lvl = 88,
#line 2882
            .ball = ITEM_MASTER_BALL,
#line 2884
            .friendship = 1,
#line 2886
            .nature = NATURE_ADAMANT,
#line 2883
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2887
                MOVE_DRILL_RUN,
                MOVE_IRON_HEAD,
                MOVE_ROCK_SLIDE,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 2892
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2892
            .heldItem = ITEM_TYRANITARITE,
#line 2898
            .ev = TRAINER_PARTY_EVS(252, 104, 0, 76, 0, 76),
#line 2900
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2893
            .ability = ABILITY_SAND_STREAM,
#line 2894
            .lvl = 89,
#line 2895
            .ball = ITEM_MASTER_BALL,
#line 2897
            .friendship = 1,
#line 2899
            .nature = NATURE_ADAMANT,
#line 2896
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2900
                MOVE_ROCK_SLIDE,
                MOVE_ASSURANCE,
                MOVE_STONE_EDGE,
                MOVE_AERIAL_ACE,
            },
            },
        },
    },
#line 2905
    [DIFFICULTY_NORMAL][TRAINER_ELLEN] =
    {
#line 2906
        .trainerName = _("Ellen"),
#line 2907
        .trainerPic = TRAINER_PIC_ELLEN,
        .encounterMusic_gender =
0,
#line 2909
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2908
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 2910
        .characterRevealId = REVEAL_ELLEN,
#line 2911
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 2912
        .objectEventGraphicsId = OBJ_EVENT_GFX_ELLEN,
#line 2913
        .mapSec = MAPSEC_NAVAL_BASE,
#line 0
        .trainerBackPic = TRAINER_PIC_ELLEN,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2915
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2915
            .heldItem = ITEM_SITRUS_BERRY,
#line 2921
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
#line 2923
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2916
            .ability = ABILITY_SERENE_GRACE,
#line 2917
            .lvl = 89,
#line 2918
            .ball = ITEM_MASTER_BALL,
#line 2920
            .friendship = 1,
#line 2922
            .nature = NATURE_MODEST,
#line 2919
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2924
                MOVE_AIR_SLASH,
                MOVE_ANCIENT_POWER,
                MOVE_DAZZLING_GLEAM,
                MOVE_HEAT_WAVE,
            },
            },
            {
#line 2929
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2929
            .heldItem = ITEM_SWAMPERTITE,
#line 2935
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 2937
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2930
            .ability = ABILITY_TORRENT,
#line 2931
            .lvl = 91,
#line 2932
            .ball = ITEM_MASTER_BALL,
#line 2934
            .friendship = 1,
#line 2936
            .nature = NATURE_ADAMANT,
#line 2933
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2937
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ICE_PUNCH,
                MOVE_WATERFALL,
            },
            },
            {
#line 2942
            .species = SPECIES_DHELMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2942
            .heldItem = ITEM_GRASSIUM_Z,
#line 2948
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2950
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2943
            .ability = ABILITY_STEELWORKER,
#line 2944
            .lvl = 89,
#line 2945
            .ball = ITEM_MASTER_BALL,
#line 2947
            .friendship = 1,
#line 2949
            .nature = NATURE_JOLLY,
#line 2946
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2950
                MOVE_POWER_WHIP,
                MOVE_PHANTOM_FORCE,
                MOVE_ANCHOR_SHOT,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 2955
            .species = SPECIES_WYRDEER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2955
            .heldItem = ITEM_NORMAL_GEM,
#line 2961
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 2963
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2956
            .ability = ABILITY_INTIMIDATE,
#line 2957
            .lvl = 90,
#line 2958
            .ball = ITEM_MASTER_BALL,
#line 2960
            .friendship = 1,
#line 2962
            .nature = NATURE_ADAMANT,
#line 2959
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2963
                MOVE_BODY_SLAM,
                MOVE_BITE,
                MOVE_ZEN_HEADBUTT,
                MOVE_HIGH_HORSEPOWER,
            },
            },
            {
#line 2968
            .species = SPECIES_TOXAPEX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2968
            .heldItem = ITEM_BLACK_SLUDGE,
#line 2974
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 2976
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2969
            .ability = ABILITY_MERCILESS,
#line 2970
            .lvl = 89,
#line 2971
            .ball = ITEM_MASTER_BALL,
#line 2973
            .friendship = 1,
#line 2975
            .nature = NATURE_ADAMANT,
#line 2972
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2976
                MOVE_POISON_JAB,
                MOVE_LIQUIDATION,
                MOVE_TOXIC,
                MOVE_BANEFUL_BUNKER,
            },
            },
            {
#line 2981
            .species = SPECIES_ARCHALUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2981
            .heldItem = ITEM_ASSAULT_VEST,
#line 2987
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
#line 2989
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 2982
            .ability = ABILITY_STAMINA,
#line 2983
            .lvl = 90,
#line 2984
            .ball = ITEM_MASTER_BALL,
#line 2986
            .friendship = 1,
#line 2988
            .nature = NATURE_MODEST,
#line 2985
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2990
                MOVE_DRAGON_PULSE,
                MOVE_FLASH_CANNON,
                MOVE_BODY_PRESS,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 2995
    [DIFFICULTY_NORMAL][TRAINER_ARMANDO] =
    {
#line 2996
        .trainerName = _("Armando"),
#line 2997
        .trainerPic = TRAINER_PIC_ARMANDO,
        .encounterMusic_gender =
0,
#line 2999
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2998
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3000
        .characterRevealId = REVEAL_ARMANDO,
#line 3001
        .trainerType = GLASS_TRAINER_TYPE_BOSS,
#line 3002
        .objectEventGraphicsId = OBJ_EVENT_GFX_ARMANDO,
#line 3003
        .mapSec = MAPSEC_LEAVERRA_FOREST,
#line 0
        .trainerBackPic = TRAINER_PIC_ARMANDO,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3005
            .species = SPECIES_SCOVILLAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3005
            .heldItem = ITEM_LIFE_ORB,
#line 3011
            .ev = TRAINER_PARTY_EVS(100, 0, 0, 176, 232, 0),
#line 3013
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3006
            .ability = ABILITY_CHLOROPHYLL,
#line 3007
            .lvl = 87,
#line 3008
            .ball = ITEM_MASTER_BALL,
#line 3010
            .friendship = 1,
#line 3012
            .nature = NATURE_MODEST,
#line 3009
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3014
                MOVE_FLAMETHROWER,
                MOVE_ENERGY_BALL,
                MOVE_WILL_O_WISP,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 3019
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3019
            .heldItem = ITEM_DRAGON_GEM,
#line 3025
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 3027
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3020
            .ability = ABILITY_LEVITATE,
#line 3021
            .lvl = 88,
#line 3022
            .ball = ITEM_MASTER_BALL,
#line 3024
            .friendship = 1,
#line 3026
            .nature = NATURE_TIMID,
#line 3023
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3028
                MOVE_HEAT_WAVE,
                MOVE_DARK_PULSE,
                MOVE_DRACO_METEOR,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 3033
            .species = SPECIES_MUSHARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3033
            .heldItem = ITEM_LEFTOVERS,
#line 3039
            .ev = TRAINER_PARTY_EVS(252, 0, 220, 0, 0, 36),
#line 3041
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3034
            .ability = ABILITY_TELEPATHY,
#line 3035
            .lvl = 88,
#line 3036
            .ball = ITEM_MASTER_BALL,
#line 3038
            .friendship = 1,
#line 3040
            .nature = NATURE_BOLD,
#line 3037
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3042
                MOVE_PSYCHIC,
                MOVE_DAZZLING_GLEAM,
                MOVE_CALM_MIND,
                MOVE_MOONLIGHT,
            },
            },
            {
#line 3047
            .species = SPECIES_URSALUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3047
            .heldItem = ITEM_FLAME_ORB,
#line 3053
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3055
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3048
            .ability = ABILITY_GUTS,
#line 3049
            .lvl = 87,
#line 3050
            .ball = ITEM_MASTER_BALL,
#line 3052
            .friendship = 1,
#line 3054
            .nature = NATURE_ADAMANT,
#line 3051
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3055
                MOVE_FACADE,
                MOVE_EARTHQUAKE,
                MOVE_HEADLONG_RUSH,
                MOVE_PROTECT,
            },
            },
            {
#line 3060
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3060
            .heldItem = ITEM_FIRIUM_Z,
#line 3066
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 36, 220, 0),
#line 3068
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3061
            .ability = ABILITY_FLAME_BODY,
#line 3062
            .lvl = 88,
#line 3063
            .ball = ITEM_MASTER_BALL,
#line 3065
            .friendship = 1,
#line 3067
            .nature = NATURE_MODEST,
#line 3064
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3069
                MOVE_OVERHEAT,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_SCORCHING_SANDS,
            },
            },
            {
#line 3075
            .species = SPECIES_CENTISKORCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3081
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3083
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3076
            .ability = ABILITY_WHITE_SMOKE,
#line 3077
            .lvl = 89,
#line 3078
            .ball = ITEM_MASTER_BALL,
#line 3080
            .friendship = 1,
#line 3082
            .nature = NATURE_JOLLY,
#line 3079
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3083
                MOVE_FLARE_BLITZ,
                MOVE_FIRE_LASH,
                MOVE_LEECH_LIFE,
                MOVE_DRAGON_TAIL,
            },
            },
        },
    },
#line 3088
    [DIFFICULTY_NORMAL][TRAINER_KEI_YING] =
    {
#line 3089
        .trainerName = _("Kei-ying"),
#line 3093
        .trainerClass = TRAINER_CLASS_EX_LEADER,
#line 3090
        .trainerPic = TRAINER_PIC_KEI_YING,
        .encounterMusic_gender =
0,
#line 3092
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3091
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_KEI_YING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3095
            .species = SPECIES_URSHIFU_RAPID_STRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3095
            .heldItem = ITEM_URSHIFUNITE_RAPID,
#line 3101
            .ev = TRAINER_PARTY_EVS(140, 88, 4, 24, 0, 252),
#line 3103
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3096
            .ability = ABILITY_UNSEEN_FIST,
#line 3097
            .lvl = 88,
#line 3098
            .ball = ITEM_MASTER_BALL,
#line 3100
            .friendship = 1,
#line 3102
            .nature = NATURE_ADAMANT,
#line 3099
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3103
                MOVE_SURGING_STRIKES,
                MOVE_CLOSE_COMBAT,
                MOVE_AQUA_JET,
                MOVE_BULK_UP,
            },
            },
            {
#line 3108
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3108
            .heldItem = ITEM_FLYING_GEM,
#line 3114
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 3116
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3109
            .ability = ABILITY_DRIZZLE,
#line 3110
            .lvl = 86,
#line 3111
            .ball = ITEM_MASTER_BALL,
#line 3113
            .friendship = 1,
#line 3115
            .nature = NATURE_TIMID,
#line 3112
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3117
                MOVE_HURRICANE,
                MOVE_WEATHER_BALL,
                MOVE_TAILWIND,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3122
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3122
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3128
            .ev = TRAINER_PARTY_EVS(252, 112, 60, 24, 0, 60),
#line 3130
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3123
            .ability = ABILITY_DRY_SKIN,
#line 3124
            .lvl = 87,
#line 3125
            .ball = ITEM_MASTER_BALL,
#line 3127
            .friendship = 1,
#line 3129
            .nature = NATURE_ADAMANT,
#line 3126
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3130
                MOVE_CLOSE_COMBAT,
                MOVE_POISON_JAB,
                MOVE_BULK_UP,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 3135
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3135
            .heldItem = ITEM_FIGHTINIUM_Z,
#line 3141
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 3143
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3136
            .ability = ABILITY_TECHNICIAN,
#line 3137
            .lvl = 86,
#line 3138
            .ball = ITEM_MASTER_BALL,
#line 3140
            .friendship = 1,
#line 3142
            .nature = NATURE_ADAMANT,
#line 3139
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3143
                MOVE_BULLET_PUNCH,
                MOVE_BUG_BITE,
                MOVE_AERIAL_ACE,
                MOVE_CLOSE_COMBAT,
            },
            },
            {
#line 3148
            .species = SPECIES_PAWMOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3148
            .heldItem = ITEM_LIFE_ORB,
#line 3154
            .ev = TRAINER_PARTY_EVS(16, 240, 0, 252, 0, 0),
#line 3156
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3149
            .ability = ABILITY_IRON_FIST,
#line 3150
            .lvl = 87,
#line 3151
            .ball = ITEM_MASTER_BALL,
#line 3153
            .friendship = 1,
#line 3155
            .nature = NATURE_JOLLY,
#line 3152
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3156
                MOVE_THUNDER_PUNCH,
                MOVE_CLOSE_COMBAT,
                MOVE_MACH_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3161
            .species = SPECIES_URSHIFU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3161
            .heldItem = ITEM_FOCUS_SASH,
#line 3167
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 3169
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3162
            .ability = ABILITY_UNSEEN_FIST,
#line 3163
            .lvl = 88,
#line 3164
            .ball = ITEM_MASTER_BALL,
#line 3166
            .friendship = 1,
#line 3168
            .nature = NATURE_JOLLY,
#line 3165
            .isShiny = FALSE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3169
                MOVE_WICKED_BLOW,
                MOVE_CLOSE_COMBAT,
                MOVE_SUCKER_PUNCH,
                MOVE_POISON_JAB,
            },
            },
        },
    },
#line 3174
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_QIU] =
    {
#line 3175
        .trainerName = _("Melissa"),
#line 3176
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
0,
#line 3178
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3177
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3180
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3182
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3181
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3183
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3185
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3184
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3186
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3188
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3187
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3189
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_CRESALTA] =
    {
#line 3190
        .trainerName = _("Melissa"),
#line 3191
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
0,
#line 3193
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3192
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3195
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3197
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3196
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3198
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3200
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3199
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3201
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3203
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3202
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3204
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3206
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3205
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3207
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_HALAI] =
    {
#line 3208
        .trainerName = _("Melissa"),
#line 3209
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
0,
#line 3211
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3210
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3213
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3215
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3214
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3216
            .species = SPECIES_FARIGIRAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3218
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3217
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3219
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3221
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3220
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3222
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3224
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3223
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3225
    [DIFFICULTY_NORMAL][TRAINER_MELISSA_REMATCH] =
    {
#line 3226
        .trainerName = _("Melissa"),
#line 3227
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
0,
#line 3229
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3228
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3231
            .species = SPECIES_DACHSBUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3233
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3232
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3234
            .species = SPECIES_FARIGIRAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3236
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3235
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3237
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3239
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3238
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3240
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3242
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3241
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3243
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3245
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3244
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3246
            .species = SPECIES_SCRAFTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3248
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3247
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3249
    [DIFFICULTY_NORMAL][TRAINER_MONTY] =
    {
#line 3250
        .trainerName = _("Monty"),
#line 3251
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3252
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3254
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3254
            .heldItem = ITEM_PUNCHING_GLOVE,
#line 3255
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3256
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3257
                MOVE_UPPER_HAND,
                MOVE_FOCUS_PUNCH,
                MOVE_MACH_PUNCH,
            },
            },
        },
    },
#line 3261
    [DIFFICULTY_NORMAL][TRAINER_OLIVER] =
    {
#line 3262
        .trainerName = _("Oliver"),
#line 3263
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
0,
#line 3265
        .isNative = TRUE,
#line 3264
        .characterRevealId = REVEAL_OLIVER,
#line 3266
        .objectEventGraphicsId = OBJ_EVENT_GFX_PROF_BIRCH,
#line 0
        .trainerBackPic = TRAINER_PIC_EXPERT_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3268
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3270
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3269
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3271
    [DIFFICULTY_NORMAL][TRAINER_00317DFA] =
    {
#line 3272
        .trainerName = _("00317DFA"),
#line 3273
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3276
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3274
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3275
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3278
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3281
            .ev = TRAINER_PARTY_EVS(0, 0, 156, 0, 0, 0),
#line 3283
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3279
            .ability = ABILITY_FRIEND_GUARD,
#line 3280
            .lvl = 19,
#line 3282
            .nature = NATURE_LAX,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3284
                MOVE_HELPING_HAND,
                MOVE_LIGHT_SCREEN,
                MOVE_ICY_WIND,
            },
            },
            {
#line 3288
            .species = SPECIES_SMOLIV,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3288
            .heldItem = ITEM_ORAN_BERRY,
#line 3291
            .ev = TRAINER_PARTY_EVS(144, 12, 0, 0, 0, 0),
#line 3293
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3289
            .ability = ABILITY_HARVEST,
#line 3290
            .lvl = 20,
#line 3292
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3294
                MOVE_LEECH_SEED,
                MOVE_CHARM,
                MOVE_RAZOR_LEAF,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 3299
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3302
            .ev = TRAINER_PARTY_EVS(0, 84, 0, 64, 0, 0),
#line 3304
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3300
            .ability = ABILITY_HUSTLE,
#line 3301
            .lvl = 22,
#line 3303
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3305
                MOVE_QUICK_ATTACK,
                MOVE_AIR_CUTTER,
                MOVE_POUNCE,
                MOVE_REVERSAL,
            },
            },
        },
    },
#line 3310
    [DIFFICULTY_NORMAL][TRAINER_0049EFE8] =
    {
#line 3311
        .trainerName = _("0049EFE8"),
#line 3312
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3313
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3314
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3316
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3316
            .heldItem = ITEM_CHARCOAL,
#line 3318
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 44, 56, 0),
#line 3320
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3317
            .ability = ABILITY_DROUGHT,
#line 3321
            .lvl = 22,
#line 3319
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3322
                MOVE_FIRE_SPIN,
                MOVE_FLAME_CHARGE,
                MOVE_WEATHER_BALL,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3327
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3327
            .heldItem = ITEM_PASSHO_BERRY,
#line 3329
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 100, 0, 0),
#line 3331
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3328
            .ability = ABILITY_FLAME_BODY,
#line 3332
            .lvl = 22,
#line 3330
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3333
                MOVE_BUG_BITE,
                MOVE_FLAME_WHEEL,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 3337
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3340
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3338
            .ability = ABILITY_FLAME_BODY,
#line 3341
            .lvl = 21,
#line 3339
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3342
                MOVE_WILL_O_WISP,
                MOVE_HEX,
                MOVE_FIRE_SPIN,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 3347
    [DIFFICULTY_NORMAL][TRAINER_023957DE] =
    {
#line 3348
        .trainerName = _("023957DE"),
#line 3349
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3350
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3351
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3353
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3353
            .heldItem = ITEM_ORAN_BERRY,
#line 3356
            .ev = TRAINER_PARTY_EVS(72, 0, 40, 0, 0, 40),
#line 3358
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3354
            .ability = ABILITY_SHED_SKIN,
#line 3355
            .lvl = 25,
#line 3357
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3359
                MOVE_THUNDER_WAVE,
                MOVE_DRAGON_TAIL,
                MOVE_SUPERSONIC,
                MOVE_SLAM,
            },
            },
            {
#line 3364
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3367
            .ev = TRAINER_PARTY_EVS(0, 148, 4, 0, 0, 0),
#line 3369
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3365
            .ability = ABILITY_HUSTLE,
#line 3366
            .lvl = 21,
#line 3368
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3370
                MOVE_BITE,
                MOVE_HEADBUTT,
                MOVE_DRAGON_TAIL,
            },
            },
            {
#line 3374
            .species = SPECIES_ZWEILOUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3377
            .ev = TRAINER_PARTY_EVS(0, 148, 0, 0, 0, 4),
#line 3379
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3375
            .ability = ABILITY_HUSTLE,
#line 3376
            .lvl = 22,
#line 3378
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3380
                MOVE_BITE,
                MOVE_FIRE_FANG,
                MOVE_THUNDER_FANG,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 3385
    [DIFFICULTY_NORMAL][TRAINER_006E7EFD] =
    {
#line 3386
        .trainerName = _("006E7EFD"),
#line 3387
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3388
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3389
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3391
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3394
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 100, 0, 0),
#line 3396
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3392
            .ability = ABILITY_INNER_FOCUS,
#line 3393
            .lvl = 22,
#line 3395
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3397
                MOVE_BATON_PASS,
                MOVE_SWORDS_DANCE,
                MOVE_VACUUM_WAVE,
                MOVE_METRONOME,
            },
            },
            {
#line 3402
            .species = SPECIES_PAWMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3405
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 100, 0, 0),
#line 3407
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3403
            .ability = ABILITY_IRON_FIST,
#line 3404
            .lvl = 21,
#line 3406
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3408
                MOVE_BATON_PASS,
                MOVE_MACH_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_AGILITY,
            },
            },
            {
#line 3413
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3413
            .heldItem = ITEM_FOCUS_SASH,
#line 3416
            .ev = TRAINER_PARTY_EVS(72, 0, 36, 0, 0, 36),
#line 3418
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3414
            .ability = ABILITY_RECKLESS,
#line 3415
            .lvl = 21,
#line 3417
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3419
                MOVE_HIGH_JUMP_KICK,
                MOVE_DETECT,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
        },
    },
#line 3424
    [DIFFICULTY_NORMAL][TRAINER_007F06A5] =
    {
#line 3425
        .trainerName = _("007F06A5"),
#line 3426
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3427
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3428
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3430
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3430
            .heldItem = ITEM_SITRUS_BERRY,
#line 3433
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3431
            .ability = ABILITY_TORRENT,
#line 3432
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3434
                MOVE_MIRROR_COAT,
                MOVE_MUDDY_WATER,
                MOVE_COUNTER,
            },
            },
            {
#line 3438
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3441
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3439
            .ability = ABILITY_OWN_TEMPO,
#line 3440
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3442
                MOVE_LIGHT_SCREEN,
                MOVE_RAIN_DANCE,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 3446
            .species = SPECIES_ARROKUDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3446
            .heldItem = ITEM_METRONOME,
#line 3449
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3447
            .ability = ABILITY_PROPELLER_TAIL,
#line 3448
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3449
                MOVE_AQUA_JET,
            },
            },
        },
    },
#line 3451
    [DIFFICULTY_NORMAL][TRAINER_01103D48] =
    {
#line 3452
        .trainerName = _("01103D48"),
#line 3453
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3456
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3454
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3455
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3458
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3461
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 144, 0),
#line 3463
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3459
            .ability = ABILITY_PICKUP,
#line 3460
            .lvl = 23,
#line 3462
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3464
                MOVE_FOLLOW_ME,
                MOVE_CHARGE_BEAM,
                MOVE_THIEF,
                MOVE_MUD_SHOT,
            },
            },
            {
#line 3469
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3469
            .heldItem = ITEM_ORAN_BERRY,
#line 3472
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 64, 80, 0),
#line 3474
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3470
            .ability = ABILITY_WIND_POWER,
#line 3471
            .lvl = 22,
#line 3473
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3475
                MOVE_TAILWIND,
                MOVE_ROOST,
                MOVE_PLUCK,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 3480
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3480
            .heldItem = ITEM_MAGNET,
#line 3483
            .ev = TRAINER_PARTY_EVS(44, 56, 0, 44, 0, 0),
#line 3484
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3481
            .ability = ABILITY_INTIMIDATE,
#line 3482
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3485
                MOVE_BITE,
                MOVE_CHARGE,
                MOVE_SPARK,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 3490
    [DIFFICULTY_NORMAL][TRAINER_0272920D] =
    {
#line 3491
        .trainerName = _("0272920D"),
#line 3492
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3493
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3494
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3496
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3496
            .heldItem = ITEM_ROCKY_HELMET,
#line 3499
            .ev = TRAINER_PARTY_EVS(0, 116, 0, 28, 0, 0),
#line 3501
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3497
            .ability = ABILITY_ROUGH_SKIN,
#line 3498
            .lvl = 25,
#line 3500
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3502
                MOVE_AQUA_JET,
                MOVE_BITE,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 3506
            .species = SPECIES_THIEVUL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3509
            .ev = TRAINER_PARTY_EVS(36, 0, 32, 24, 32, 24),
#line 3511
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3507
            .ability = ABILITY_UNBURDEN,
#line 3508
            .lvl = 24,
#line 3510
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3512
                MOVE_NASTY_PLOT,
                MOVE_SNARL,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3516
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3516
            .heldItem = ITEM_MENTAL_HERB,
#line 3519
            .ev = TRAINER_PARTY_EVS(56, 0, 56, 0, 0, 40),
#line 3521
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3517
            .ability = ABILITY_PRANKSTER,
#line 3518
            .lvl = 25,
#line 3520
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3522
                MOVE_HAZE,
                MOVE_WING_ATTACK,
                MOVE_TAUNT,
                MOVE_THIEF,
            },
            },
        },
    },
#line 3527
    [DIFFICULTY_NORMAL][TRAINER_022A53A0] =
    {
#line 3528
        .trainerName = _("022A53A0"),
#line 3529
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3532
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3530
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3531
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3534
            .species = SPECIES_KRICKETUNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3534
            .heldItem = ITEM_FOCUS_BAND,
#line 3537
            .ev = TRAINER_PARTY_EVS(28, 24, 36, 44, 0, 24),
#line 3539
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3535
            .ability = ABILITY_SWARM,
#line 3536
            .lvl = 20,
#line 3538
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3540
                MOVE_SING,
                MOVE_STICKY_WEB,
                MOVE_LEECH_LIFE,
            },
            },
            {
#line 3544
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3544
            .heldItem = ITEM_FOCUS_BAND,
#line 3547
            .ev = TRAINER_PARTY_EVS(68, 20, 68, 0, 0, 0),
#line 3549
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3545
            .ability = ABILITY_SWARM,
#line 3546
            .lvl = 24,
#line 3548
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3550
                MOVE_RAZOR_LEAF,
                MOVE_STRUGGLE_BUG,
                MOVE_ELECTROWEB,
            },
            },
            {
#line 3554
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3554
            .heldItem = ITEM_SILVER_POWDER,
#line 3557
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 152, 0, 0),
#line 3559
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3555
            .ability = ABILITY_SWARM,
#line 3556
            .lvl = 25,
#line 3558
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3560
                MOVE_NIGHT_SHADE,
                MOVE_FELL_STINGER,
                MOVE_BUG_BITE,
            },
            },
        },
    },
#line 3566
    [DIFFICULTY_NORMAL][TRAINER_012ED80D] =
    {
#line 3567
        .trainerName = _("012ED80D"),
#line 3568
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3569
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3570
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3572
            .species = SPECIES_MUDBRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3575
            .ev = TRAINER_PARTY_EVS(0, 24, 128, 0, 0, 0),
#line 3577
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3573
            .ability = ABILITY_STAMINA,
#line 3574
            .lvl = 21,
#line 3576
            .nature = NATURE_LAX,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3578
                MOVE_STRENGTH,
                MOVE_COUNTER,
                MOVE_BULLDOZE,
                MOVE_DOUBLE_KICK,
            },
            },
            {
#line 3583
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3586
            .ev = TRAINER_PARTY_EVS(0, 136, 0, 0, 0, 0),
#line 3588
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3584
            .ability = ABILITY_SAND_FORCE,
#line 3585
            .lvl = 20,
#line 3587
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3589
                MOVE_SANDSTORM,
                MOVE_METAL_CLAW,
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3594
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3597
            .ev = TRAINER_PARTY_EVS(0, 76, 0, 0, 72, 0),
#line 3599
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3595
            .ability = ABILITY_SIMPLE,
#line 3596
            .lvl = 21,
#line 3598
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3600
                MOVE_INCINERATE,
                MOVE_BULLDOZE,
                MOVE_FOCUS_ENERGY,
            },
            },
        },
    },
#line 3604
    [DIFFICULTY_NORMAL][TRAINER_01E6E96E] =
    {
#line 3605
        .trainerName = _("01E6E96E"),
#line 3606
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3609
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3607
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3608
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3611
            .species = SPECIES_MINIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3611
            .heldItem = ITEM_POWER_HERB,
#line 3614
            .ev = TRAINER_PARTY_EVS(0, 92, 0, 0, 56, 0),
#line 3616
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3612
            .ability = ABILITY_SHIELDS_DOWN,
#line 3613
            .lvl = 22,
#line 3615
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3617
                MOVE_METEOR_BEAM,
                MOVE_ROLLOUT,
                MOVE_ACROBATICS,
                MOVE_U_TURN,
            },
            },
            {
#line 3622
            .species = SPECIES_VIVILLON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3622
            .heldItem = ITEM_MENTAL_HERB,
#line 3625
            .ev = TRAINER_PARTY_EVS(80, 0, 0, 68, 0, 0),
#line 3627
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3623
            .ability = ABILITY_FRIEND_GUARD,
#line 3624
            .lvl = 20,
#line 3626
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3628
                MOVE_SWIFT,
                MOVE_U_TURN,
                MOVE_STUN_SPORE,
                MOVE_TAILWIND,
            },
            },
            {
#line 3633
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3633
            .heldItem = ITEM_SILK_SCARF,
#line 3636
            .ev = TRAINER_PARTY_EVS(0, 148, 0, 0, 0, 0),
#line 3638
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3634
            .ability = ABILITY_SCRAPPY,
#line 3635
            .lvl = 22,
#line 3637
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3639
                MOVE_RAGE,
                MOVE_RETURN,
                MOVE_AERIAL_ACE,
                MOVE_U_TURN,
            },
            },
        },
    },
#line 3644
    [DIFFICULTY_NORMAL][TRAINER_0092D526] =
    {
#line 3645
        .trainerName = _("0092D526"),
#line 3646
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3649
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3647
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3648
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3651
            .species = SPECIES_BOUNSWEET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3654
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 60, 96, 0),
#line 3656
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3652
            .ability = ABILITY_LEAF_GUARD,
#line 3653
            .lvl = 21,
#line 3655
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3657
                MOVE_MAGICAL_LEAF,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 3660
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3660
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3663
            .ev = TRAINER_PARTY_EVS(0, 0, 84, 0, 0, 64),
#line 3664
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3661
            .ability = ABILITY_EFFECT_SPORE,
#line 3662
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3665
                MOVE_RAGE_POWDER,
                MOVE_POISON_POWDER,
                MOVE_VENOSHOCK,
                MOVE_STUN_SPORE,
            },
            },
            {
#line 3670
            .species = SPECIES_CAPSAKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3673
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 156, 0),
#line 3675
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3671
            .ability = ABILITY_CHLOROPHYLL,
#line 3672
            .lvl = 21,
#line 3674
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3676
                MOVE_MAGICAL_LEAF,
                MOVE_GROWTH,
                MOVE_INGRAIN,
            },
            },
        },
    },
#line 3680
    [DIFFICULTY_NORMAL][TRAINER_00C593A8] =
    {
#line 3681
        .trainerName = _("00C593A8"),
#line 3682
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3685
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3683
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3684
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3687
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3687
            .heldItem = ITEM_WACAN_BERRY,
#line 3690
            .ev = TRAINER_PARTY_EVS(64, 84, 0, 0, 0, 0),
#line 3692
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3688
            .ability = ABILITY_ICE_BODY,
#line 3689
            .lvl = 20,
#line 3691
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3693
                MOVE_ROLLOUT,
                MOVE_SNOWSCAPE,
                MOVE_ICE_BALL,
            },
            },
            {
#line 3697
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3697
            .heldItem = ITEM_METRONOME,
#line 3700
            .ev = TRAINER_PARTY_EVS(44, 100, 0, 0, 0, 0),
#line 3702
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3698
            .ability = ABILITY_ICE_BODY,
#line 3699
            .lvl = 24,
#line 3701
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3703
                MOVE_SNOWSCAPE,
                MOVE_ROLLOUT,
                MOVE_ICE_BALL,
            },
            },
            {
#line 3707
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3710
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 0, 104, 0),
#line 3712
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3708
            .ability = ABILITY_OBLIVIOUS,
#line 3709
            .lvl = 23,
#line 3711
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3713
                MOVE_PSYCHIC_NOISE,
                MOVE_CONFUSION,
                MOVE_ICY_WIND,
            },
            },
        },
    },
#line 3717
    [DIFFICULTY_NORMAL][TRAINER_01E7C79B] =
    {
#line 3718
        .trainerName = _("01E7C79B"),
#line 3719
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3720
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3721
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3723
            .species = SPECIES_DOTTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3726
            .ev = TRAINER_PARTY_EVS(0, 0, 88, 0, 0, 64),
#line 3728
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3724
            .ability = ABILITY_SWARM,
#line 3725
            .lvl = 22,
#line 3727
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3729
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_CONFUSION,
                MOVE_STRUGGLE_BUG,
            },
            },
            {
#line 3734
            .species = SPECIES_HATENNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3734
            .heldItem = ITEM_TWISTED_SPOON,
#line 3737
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 88, 56, 0),
#line 3739
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3735
            .ability = ABILITY_ANTICIPATION,
#line 3736
            .lvl = 23,
#line 3738
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3740
                MOVE_PSYBEAM,
                MOVE_DISARMING_VOICE,
                MOVE_NUZZLE,
            },
            },
            {
#line 3744
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3747
            .ev = TRAINER_PARTY_EVS(0, 92, 40, 0, 0, 24),
#line 3749
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3745
            .ability = ABILITY_PURE_POWER,
#line 3746
            .lvl = 24,
#line 3748
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3750
                MOVE_ZEN_HEADBUTT,
                MOVE_FORCE_PALM,
                MOVE_WORK_UP,
            },
            },
        },
    },
#line 3754
    [DIFFICULTY_NORMAL][TRAINER_01C7AF3F] =
    {
#line 3755
        .trainerName = _("01C7AF3F"),
#line 3756
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3759
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3757
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3758
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3761
            .nickname = COMPOUND_STRING("Flabebe"),
#line 3761
            .species = SPECIES_FLABEBE_YELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3761
            .heldItem = ITEM_ORAN_BERRY,
#line 3764
            .ev = TRAINER_PARTY_EVS(0, 0, 52, 0, 0, 96),
#line 3766
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 3762
            .ability = ABILITY_SYMBIOSIS,
#line 3763
            .lvl = 23,
#line 3765
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3767
                MOVE_TEARFUL_LOOK,
                MOVE_DISARMING_VOICE,
                MOVE_MAGICAL_LEAF,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 3772
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3775
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 36, 116, 0),
#line 3777
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3773
            .ability = ABILITY_TRACE,
#line 3774
            .lvl = 20,
#line 3776
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3778
                MOVE_DISARMING_VOICE,
                MOVE_PSYBEAM,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 3782
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3782
            .heldItem = ITEM_SITRUS_BERRY,
#line 3785
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 88, 64, 0),
#line 3787
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3783
            .ability = ABILITY_TRACE,
#line 3784
            .lvl = 21,
#line 3786
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3788
                MOVE_DISARMING_VOICE,
                MOVE_PSYBEAM,
                MOVE_LIFE_DEW,
            },
            },
        },
    },
#line 3794
    [DIFFICULTY_NORMAL][TRAINER_02EEB783] =
    {
#line 3795
        .trainerName = _("02EEB783"),
#line 3796
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3799
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3797
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3798
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3801
            .species = SPECIES_YAMASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3804
            .ev = TRAINER_PARTY_EVS(80, 0, 0, 0, 76, 0),
#line 3806
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3802
            .ability = ABILITY_MUMMY,
#line 3803
            .lvl = 21,
#line 3805
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3807
                MOVE_WILL_O_WISP,
                MOVE_PROTECT,
                MOVE_HEX,
            },
            },
            {
#line 3811
            .species = SPECIES_HONEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3811
            .heldItem = ITEM_OCCA_BERRY,
#line 3814
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 144),
#line 3816
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3812
            .ability = ABILITY_NO_GUARD,
#line 3813
            .lvl = 25,
#line 3815
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3817
                MOVE_AERIAL_ACE,
                MOVE_SHADOW_SNEAK,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 3821
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3824
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 96, 48),
#line 3826
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3822
            .ability = ABILITY_LEVITATE,
#line 3823
            .lvl = 25,
#line 3825
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3827
                MOVE_CHARGE,
                MOVE_THUNDER_SHOCK,
                MOVE_ASTONISH,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 3832
    [DIFFICULTY_NORMAL][TRAINER_026E91A6] =
    {
#line 3833
        .trainerName = _("026E91A6"),
#line 3834
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3835
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3836
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3838
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3838
            .heldItem = ITEM_SITRUS_BERRY,
#line 3841
            .ev = TRAINER_PARTY_EVS(0, 0, 144, 0, 0, 0),
#line 3843
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3839
            .ability = ABILITY_ROCK_HEAD,
#line 3840
            .lvl = 20,
#line 3842
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3844
                MOVE_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_ROCK_TOMB,
                MOVE_ROAR,
            },
            },
            {
#line 3849
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3849
            .heldItem = ITEM_GANLON_BERRY,
#line 3852
            .ev = TRAINER_PARTY_EVS(0, 0, 4, 0, 104, 48),
#line 3854
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 3850
            .ability = ABILITY_CLEAR_BODY,
#line 3851
            .lvl = 24,
#line 3853
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3855
                MOVE_METAL_SOUND,
                MOVE_CHARGE_BEAM,
                MOVE_SANDSTORM,
            },
            },
            {
#line 3859
            .species = SPECIES_VAROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3862
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 152, 0),
#line 3864
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3860
            .ability = ABILITY_OVERCOAT,
#line 3861
            .lvl = 25,
#line 3863
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3865
                MOVE_SLUDGE,
                MOVE_GYRO_BALL,
                MOVE_HEADBUTT,
                MOVE_LICK,
            },
            },
        },
    },
#line 3870
    [DIFFICULTY_NORMAL][TRAINER_029E0EF0] =
    {
#line 3871
        .trainerName = _("029E0EF0"),
#line 3872
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3873
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3874
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3876
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3879
            .ev = TRAINER_PARTY_EVS(0, 96, 16, 0, 0, 32),
#line 3881
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3877
            .ability = ABILITY_POISON_POINT,
#line 3878
            .lvl = 22,
#line 3880
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3882
                MOVE_TOXIC_SPIKES,
                MOVE_DIG,
                MOVE_POISON_STING,
                MOVE_TRAILBLAZE,
            },
            },
            {
#line 3887
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3890
            .ev = TRAINER_PARTY_EVS(24, 0, 0, 0, 120, 0),
#line 3892
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3888
            .ability = ABILITY_CLEAR_BODY,
#line 3889
            .lvl = 25,
#line 3891
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3893
                MOVE_BUBBLE_BEAM,
                MOVE_ACID_SPRAY,
                MOVE_TOXIC,
            },
            },
            {
#line 3897
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3897
            .heldItem = ITEM_SITRUS_BERRY,
#line 3900
            .ev = TRAINER_PARTY_EVS(80, 72, 0, 0, 0, 0),
#line 3902
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3898
            .ability = ABILITY_GLUTTONY,
#line 3899
            .lvl = 23,
#line 3901
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3903
                MOVE_AMNESIA,
                MOVE_ACID_ARMOR,
                MOVE_ENCORE,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
#line 3908
    [DIFFICULTY_NORMAL][TRAINER_00E46F7D] =
    {
#line 3909
        .trainerName = _("00E46F7D"),
#line 3910
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3913
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3912
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3915
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3918
            .ev = TRAINER_PARTY_EVS(12, 92, 32, 0, 0, 12),
#line 3920
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3916
            .ability = ABILITY_SHED_SKIN,
#line 3917
            .lvl = 23,
#line 3919
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3921
                MOVE_STOMPING_TANTRUM,
                MOVE_ROCK_SLIDE,
                MOVE_PAYBACK,
            },
            },
            {
#line 3925
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3928
            .ev = TRAINER_PARTY_EVS(0, 36, 0, 112, 0, 0),
#line 3930
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3926
            .ability = ABILITY_WEAK_ARMOR,
#line 3927
            .lvl = 22,
#line 3929
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3931
                MOVE_AQUA_JET,
                MOVE_ABSORB,
                MOVE_ROCK_TOMB,
                MOVE_PROTECT,
            },
            },
            {
#line 3936
            .species = SPECIES_TYRUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3936
            .heldItem = ITEM_HARD_STONE,
#line 3939
            .ev = TRAINER_PARTY_EVS(0, 72, 80, 0, 0, 0),
#line 3941
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3937
            .ability = ABILITY_STURDY,
#line 3938
            .lvl = 23,
#line 3940
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3942
                MOVE_DRAGON_TAIL,
                MOVE_BITE,
                MOVE_ANCIENT_POWER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 3947
    [DIFFICULTY_NORMAL][TRAINER_032E8AC9] =
    {
#line 3948
        .trainerName = _("Blank"),
#line 3949
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3950
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3952
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3951
        .mapSec = MAPSEC_MERMEREZA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3954
            .species = SPECIES_SHROODLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3954
            .heldItem = ITEM_BIG_NUGGET,
#line 3957
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 128, 0, 0),
#line 3959
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3955
            .ability = ABILITY_UNBURDEN,
#line 3956
            .lvl = 21,
#line 3958
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3960
                MOVE_FLING,
                MOVE_ACROBATICS,
                MOVE_BATON_PASS,
            },
            },
            {
#line 3964
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3964
            .heldItem = ITEM_ASPEAR_BERRY,
#line 3967
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 136, 0, 0),
#line 3969
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3965
            .ability = ABILITY_FLASH_FIRE,
#line 3966
            .lvl = 25,
#line 3968
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3970
                MOVE_TRICK,
                MOVE_POLTERGEIST,
                MOVE_BITTER_BLADE,
                MOVE_DESTINY_BOND,
            },
            },
        },
    },
#line 3975
    [DIFFICULTY_NORMAL][TRAINER_0389363C] =
    {
#line 3976
        .trainerName = _("Blank"),
#line 3977
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3979
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3978
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_WEIGH_ABILITY_PREDICTION | AI_FLAG_PREDICT_SWITCH | AI_FLAG_PREDICT_INCOMING_MON | AI_FLAG_PP_STALL_PREVENTION | AI_FLAG_PREDICT_MOVE,
#line 3981
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3980
        .mapSec = MAPSEC_MERMEREZA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3983
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3983
            .heldItem = ITEM_FIGY_BERRY,
#line 3986
            .ev = TRAINER_PARTY_EVS(0, 132, 0, 0, 0, 0),
#line 3988
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3984
            .ability = ABILITY_GLUTTONY,
#line 3985
            .lvl = 20,
#line 3987
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3989
                MOVE_BELLY_DRUM,
                MOVE_SNORE,
                MOVE_REST,
                MOVE_SLASH,
            },
            },
        },
    },
#line 3994
    [DIFFICULTY_NORMAL][TRAINER_040CEA33] =
    {
#line 3995
        .trainerName = _("Blank"),
#line 3996
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3998
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_WEIGH_ABILITY_PREDICTION | AI_FLAG_PREDICT_SWITCH | AI_FLAG_PREDICT_INCOMING_MON | AI_FLAG_PP_STALL_PREVENTION | AI_FLAG_PREDICT_MOVE,
#line 3997
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3999
        .mapSec = MAPSEC_MERMEREZA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4001
            .species = SPECIES_PALPITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4001
            .heldItem = ITEM_RINDO_BERRY,
#line 4004
            .ev = TRAINER_PARTY_EVS(0, 0, 96, 0, 0, 28),
#line 4006
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4002
            .ability = ABILITY_SWIFT_SWIM,
#line 4003
            .lvl = 23,
#line 4005
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4007
                MOVE_RAIN_DANCE,
                MOVE_MUD_SHOT,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 4011
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4011
            .heldItem = ITEM_CHOPLE_BERRY,
#line 4014
            .ev = TRAINER_PARTY_EVS(0, 0, 68, 0, 0, 56),
#line 4016
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4012
            .ability = ABILITY_STENCH,
#line 4013
            .lvl = 20,
#line 4015
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4017
                MOVE_TOXIC_SPIKES,
                MOVE_VENOSHOCK,
                MOVE_BODY_SLAM,
            },
            },
        },
    },
#line 4021
    [DIFFICULTY_NORMAL][TRAINER_031A849F] =
    {
#line 4022
        .trainerName = _("Blank"),
#line 4023
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4026
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4024
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4025
        .mapSec = MAPSEC_TORA_TOWN,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4028
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4028
            .heldItem = ITEM_TWISTED_SPOON,
#line 4031
            .ev = TRAINER_PARTY_EVS(0, 64, 0, 0, 64, 0),
#line 4033
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4029
            .ability = ABILITY_PRANKSTER,
#line 4030
            .lvl = 26,
#line 4032
            .nature = NATURE_DOCILE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4034
                MOVE_TAILWIND,
                MOVE_DUAL_WINGBEAT,
                MOVE_HEAT_WAVE,
            },
            },
            {
#line 4038
            .species = SPECIES_INKAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4038
            .heldItem = ITEM_ROSELI_BERRY,
#line 4041
            .ev = TRAINER_PARTY_EVS(0, 64, 0, 0, 64, 0),
#line 4043
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4039
            .ability = ABILITY_CONTRARY,
#line 4040
            .lvl = 26,
#line 4042
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4044
                MOVE_PSYBEAM,
                MOVE_ROCK_SLIDE,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 4048
            .species = SPECIES_LOKIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4048
            .heldItem = ITEM_CHOPLE_BERRY,
#line 4051
            .ev = TRAINER_PARTY_EVS(0, 128, 0, 0, 0, 0),
#line 4053
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4049
            .ability = ABILITY_TINTED_LENS,
#line 4050
            .lvl = 26,
#line 4052
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4054
                MOVE_AERIAL_ACE,
                MOVE_TRAILBLAZE,
            },
            },
        },
    },
#line 4057
    [DIFFICULTY_NORMAL][TRAINER_045FDD44] =
    {
#line 4058
        .trainerName = _("Blank"),
#line 4059
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4062
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4060
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4061
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4064
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4064
            .heldItem = ITEM_SHUCA_BERRY,
#line 4067
            .ev = TRAINER_PARTY_EVS(0, 0, 84, 0, 0, 40),
#line 4069
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4065
            .ability = ABILITY_EFFECT_SPORE,
#line 4066
            .lvl = 25,
#line 4068
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4070
                MOVE_POISON_POWDER,
                MOVE_STUN_SPORE,
                MOVE_POLLEN_PUFF,
            },
            },
            {
#line 4074
            .species = SPECIES_VAROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4074
            .heldItem = ITEM_PAYAPA_BERRY,
#line 4077
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 4079
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4075
            .ability = ABILITY_OVERCOAT,
#line 4076
            .lvl = 26,
#line 4078
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4080
                MOVE_TOXIC_SPIKES,
                MOVE_TOXIC,
                MOVE_VENOSHOCK,
            },
            },
            {
#line 4084
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4084
            .heldItem = ITEM_SPELL_TAG,
#line 4087
            .ev = TRAINER_PARTY_EVS(0, 60, 52, 0, 0, 20),
#line 4089
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4085
            .ability = ABILITY_SWARM,
#line 4086
            .lvl = 24,
#line 4088
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4090
                MOVE_HEX,
                MOVE_LEECH_LIFE,
            },
            },
        },
    },
#line 4093
    [DIFFICULTY_NORMAL][TRAINER_041FD20E] =
    {
#line 4094
        .trainerName = _("Blank"),
#line 4095
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4098
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4097
        .mapSec = MAPSEC_TORA_TOWN,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4100
            .species = SPECIES_MAREANIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4100
            .heldItem = ITEM_MYSTIC_WATER,
#line 4103
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 136),
#line 4105
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4101
            .ability = ABILITY_LIMBER,
#line 4102
            .lvl = 25,
#line 4104
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4106
                MOVE_LIQUIDATION,
                MOVE_ICE_SPINNER,
            },
            },
            {
#line 4109
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4109
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 4112
            .ev = TRAINER_PARTY_EVS(0, 64, 0, 0, 64, 0),
#line 4114
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4110
            .ability = ABILITY_HUSTLE,
#line 4111
            .lvl = 26,
#line 4113
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4115
                MOVE_ICE_FANG,
                MOVE_DRAGON_BREATH,
            },
            },
        },
    },
#line 4118
    [DIFFICULTY_NORMAL][TRAINER_0465BF77] =
    {
#line 4119
        .trainerName = _("Blank"),
#line 4120
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4123
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4121
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4122
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4125
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4125
            .heldItem = ITEM_QUICK_CLAW,
#line 4128
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 132, 0, 0),
#line 4130
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4126
            .ability = ABILITY_LEVITATE,
#line 4127
            .lvl = 26,
#line 4129
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4131
                MOVE_TAUNT,
                MOVE_DESTINY_BOND,
                MOVE_SHADOW_SNEAK,
            },
            },
            {
#line 4135
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4138
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 132, 0, 0),
#line 4140
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4136
            .ability = ABILITY_SPEED_BOOST,
#line 4137
            .lvl = 25,
#line 4139
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4141
                MOVE_DESTINY_BOND,
                MOVE_TAUNT,
                MOVE_ASSURANCE,
                MOVE_PSYCHIC_FANGS,
            },
            },
        },
    },
#line 4146
    [DIFFICULTY_NORMAL][TRAINER_0467DF00] =
    {
#line 4147
        .trainerName = _("Blank"),
#line 4148
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4151
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4149
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4150
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4153
            .species = SPECIES_MILTANK,
#line 4153
            .gender = TRAINER_MON_FEMALE,
#line 4153
            .heldItem = ITEM_COVERT_CLOAK,
#line 4156
            .ev = TRAINER_PARTY_EVS(44, 0, 48, 0, 0, 40),
#line 4158
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4154
            .ability = ABILITY_THICK_FAT,
#line 4155
            .lvl = 26,
#line 4157
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4159
                MOVE_SANDSTORM,
                MOVE_ROLLOUT,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4163
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4163
            .heldItem = ITEM_BRIGHT_POWDER,
#line 4166
            .ev = TRAINER_PARTY_EVS(132, 0, 0, 0, 0, 0),
#line 4168
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4164
            .ability = ABILITY_SAND_VEIL,
#line 4165
            .lvl = 23,
#line 4167
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4169
                MOVE_FURY_CUTTER,
                MOVE_TOXIC,
                MOVE_KNOCK_OFF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 4174
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4174
            .heldItem = ITEM_SMOOTH_ROCK,
#line 4177
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 136),
#line 4179
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4175
            .ability = ABILITY_HEALER,
#line 4176
            .lvl = 23,
#line 4178
            .nature = NATURE_GENTLE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4180
                MOVE_SANDSTORM,
                MOVE_HEAL_PULSE,
                MOVE_HYPER_VOICE,
            },
            },
        },
    },
#line 4184
    [DIFFICULTY_NORMAL][TRAINER_04687C53] =
    {
#line 4185
        .trainerName = _("Blank"),
#line 4186
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4189
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4187
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4188
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4191
            .species = SPECIES_SLIGGOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4191
            .heldItem = ITEM_ORAN_BERRY,
#line 4194
            .ev = TRAINER_PARTY_EVS(0, 0, 136, 0, 0, 0),
#line 4196
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4192
            .ability = ABILITY_GOOEY,
#line 4193
            .lvl = 26,
#line 4195
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4197
                MOVE_ACID_SPRAY,
                MOVE_CHILLING_WATER,
                MOVE_SKITTER_SMACK,
            },
            },
        },
    },
#line 4201
    [DIFFICULTY_NORMAL][TRAINER_048D5D99] =
    {
#line 4202
        .trainerName = _("Blank"),
#line 4203
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4206
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4204
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4205
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4208
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4208
            .heldItem = ITEM_SITRUS_BERRY,
#line 4211
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 132),
#line 4213
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4209
            .ability = ABILITY_STURDY,
#line 4210
            .lvl = 27,
#line 4212
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4214
                MOVE_METAL_BURST,
                MOVE_CURSE,
                MOVE_HARDEN,
            },
            },
            {
#line 4218
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4218
            .heldItem = ITEM_FOCUS_BAND,
#line 4221
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 132),
#line 4223
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4219
            .ability = ABILITY_STURDY,
#line 4220
            .lvl = 24,
#line 4222
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4224
                MOVE_METAL_BURST,
                MOVE_CURSE,
                MOVE_ENDEAVOR,
                MOVE_SANDSTORM,
            },
            },
        },
    },
#line 4229
    [DIFFICULTY_NORMAL][TRAINER_04A59E40] =
    {
#line 4230
        .trainerName = _("Blank"),
#line 4231
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4234
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4232
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4233
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4236
            .species = SPECIES_FLOETTE,
#line 4236
            .gender = TRAINER_MON_FEMALE,
#line 4236
            .heldItem = ITEM_LUM_BERRY,
#line 4239
            .ev = TRAINER_PARTY_EVS(32, 0, 104, 0, 0, 0),
#line 4241
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4237
            .ability = ABILITY_FLOWER_VEIL,
#line 4238
            .lvl = 24,
#line 4240
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4242
                MOVE_WISH,
                MOVE_BATON_PASS,
                MOVE_LIGHT_SCREEN,
                MOVE_MAGICAL_LEAF,
            },
            },
            {
#line 4247
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4247
            .heldItem = ITEM_MYSTIC_WATER,
#line 4250
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 88, 0, 0),
#line 4252
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4248
            .ability = ABILITY_SHELL_ARMOR,
#line 4249
            .lvl = 25,
#line 4251
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4253
                MOVE_BRICK_BREAK,
                MOVE_RAZOR_SHELL,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 4257
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4257
            .heldItem = ITEM_MYSTIC_WATER,
#line 4260
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 136, 0),
#line 4262
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4258
            .ability = ABILITY_REGENERATOR,
#line 4259
            .lvl = 24,
#line 4261
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4263
                MOVE_AVALANCHE,
                MOVE_PSYCHIC_NOISE,
                MOVE_MUDDY_WATER,
            },
            },
        },
    },
#line 4268
    [DIFFICULTY_NORMAL][TRAINER_04E334E9] =
    {
#line 4269
        .trainerName = _("Blank"),
#line 4270
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4273
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4271
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4272
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4275
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4275
            .heldItem = ITEM_ORAN_BERRY,
#line 4278
            .ev = TRAINER_PARTY_EVS(0, 136, 0, 0, 0, 0),
#line 4280
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4276
            .ability = ABILITY_MOODY,
#line 4277
            .lvl = 25,
#line 4279
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4281
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
                MOVE_ICY_WIND,
                MOVE_ROCK_BLAST,
            },
            },
            {
#line 4286
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4286
            .heldItem = ITEM_ORAN_BERRY,
#line 4289
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 136, 0),
#line 4291
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4287
            .ability = ABILITY_MOODY,
#line 4288
            .lvl = 25,
#line 4290
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4292
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
                MOVE_BULLET_SEED,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 4297
            .species = SPECIES_SCOVILLAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4297
            .heldItem = ITEM_ORAN_BERRY,
#line 4300
            .ev = TRAINER_PARTY_EVS(16, 32, 16, 24, 32, 16),
#line 4302
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4298
            .ability = ABILITY_MOODY,
#line 4299
            .lvl = 24,
#line 4301
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4303
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
                MOVE_MAGICAL_LEAF,
                MOVE_TEMPER_FLARE,
            },
            },
        },
    },
#line 4308
    [DIFFICULTY_NORMAL][TRAINER_05BDEABF] =
    {
#line 4309
        .trainerName = _("Blank"),
#line 4310
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4313
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4311
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4312
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4315
            .species = SPECIES_CAPSAKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4315
            .heldItem = ITEM_SMOOTH_ROCK,
#line 4318
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4316
            .ability = ABILITY_INSOMNIA,
#line 4317
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4319
                MOVE_SANDSTORM,
                MOVE_LEECH_SEED,
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
            },
            },
            {
#line 4324
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4324
            .heldItem = ITEM_SITRUS_BERRY,
#line 4327
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4325
            .ability = ABILITY_EFFECT_SPORE,
#line 4326
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4328
                MOVE_POISON_POWDER,
                MOVE_POLLEN_PUFF,
                MOVE_PROTECT,
                MOVE_ABSORB,
            },
            },
            {
#line 4333
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4333
            .heldItem = ITEM_LEFTOVERS,
#line 4336
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4334
            .ability = ABILITY_IRON_FIST,
#line 4335
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4337
                MOVE_SANDSTORM,
                MOVE_CURSE,
                MOVE_KNOCK_OFF,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 4342
    [DIFFICULTY_NORMAL][TRAINER_06400A0C] =
    {
#line 4343
        .trainerName = _("Blank"),
#line 4344
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4347
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4345
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4346
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4349
            .species = SPECIES_CHARJABUG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4349
            .heldItem = ITEM_EJECT_BUTTON,
#line 4352
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4350
            .ability = ABILITY_BATTERY,
#line 4351
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4353
                MOVE_STICKY_WEB,
                MOVE_LIGHT_SCREEN,
                MOVE_ELECTROWEB,
                MOVE_BUG_BITE,
            },
            },
            {
#line 4358
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4358
            .heldItem = ITEM_CHERI_BERRY,
#line 4361
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4359
            .ability = ABILITY_FLAME_BODY,
#line 4360
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4362
                MOVE_NIGHT_SHADE,
                MOVE_EMBER,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 4366
            .species = SPECIES_DOUBLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4369
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4367
            .ability = ABILITY_NO_GUARD,
#line 4368
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4370
                MOVE_SHADOW_SNEAK,
                MOVE_SHADOW_CLAW,
                MOVE_BRUTAL_SWING,
            },
            },
        },
    },
#line 4374
    [DIFFICULTY_NORMAL][TRAINER_068B06CE] =
    {
#line 4375
        .trainerName = _("Blank"),
#line 4376
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4379
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4377
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4378
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4381
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4384
            .ev = TRAINER_PARTY_EVS(0, 56, 72, 0, 0, 0),
#line 4386
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4382
            .ability = ABILITY_NEUTRALIZING_GAS,
#line 4383
            .lvl = 23,
#line 4385
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4387
                MOVE_WILL_O_WISP,
                MOVE_SLUDGE,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 4391
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4391
            .heldItem = ITEM_WIDE_LENS,
#line 4394
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 136, 0, 0),
#line 4396
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4392
            .ability = ABILITY_FLASH_FIRE,
#line 4393
            .lvl = 23,
#line 4395
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4397
                MOVE_INFERNO,
                MOVE_BABY_DOLL_EYES,
                MOVE_DIG,
                MOVE_HEX,
            },
            },
            {
#line 4402
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4402
            .heldItem = ITEM_FLAME_ORB,
#line 4405
            .ev = TRAINER_PARTY_EVS(0, 28, 0, 0, 0, 108),
#line 4407
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4403
            .ability = ABILITY_QUICK_FEET,
#line 4404
            .lvl = 24,
#line 4406
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4408
                MOVE_FLING,
                MOVE_FACADE,
                MOVE_PROTECT,
            },
            },
            {
#line 4412
            .species = SPECIES_MAGBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4412
            .heldItem = ITEM_CHARCOAL,
#line 4415
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 48, 0, 0),
#line 4417
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4413
            .ability = ABILITY_FLAME_BODY,
#line 4414
            .lvl = 25,
#line 4416
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4418
                MOVE_WILL_O_WISP,
                MOVE_FLAME_WHEEL,
                MOVE_LOW_KICK,
            },
            },
        },
    },
#line 4423
    [DIFFICULTY_NORMAL][TRAINER_06BE2D1B] =
    {
#line 4424
        .trainerName = _("Blank"),
#line 4425
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4427
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4426
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4428
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4430
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4430
            .heldItem = ITEM_SCOPE_LENS,
#line 4433
            .ev = TRAINER_PARTY_EVS(0, 0, 72, 0, 0, 64),
#line 4435
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4431
            .ability = ABILITY_SUPER_LUCK,
#line 4432
            .lvl = 24,
#line 4434
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4436
                MOVE_ANCIENT_POWER,
                MOVE_PLAY_ROUGH,
                MOVE_POUNCE,
                MOVE_FOLLOW_ME,
            },
            },
            {
#line 4441
            .species = SPECIES_CUBCHOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4444
            .ev = TRAINER_PARTY_EVS(0, 92, 44, 0, 0, 0),
#line 4445
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4442
            .ability = ABILITY_RATTLED,
#line 4443
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4446
                MOVE_FROST_BREATH,
                MOVE_DIG,
            },
            },
            {
#line 4449
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4449
            .heldItem = ITEM_SCOPE_LENS,
#line 4452
            .ev = TRAINER_PARTY_EVS(0, 92, 0, 36, 0, 0),
#line 4454
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4450
            .ability = ABILITY_SUPER_LUCK,
#line 4451
            .lvl = 25,
#line 4453
            .nature = NATURE_DOCILE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4455
                MOVE_TAILWIND,
                MOVE_AIR_CUTTER,
                MOVE_SNARL,
            },
            },
            {
#line 4459
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4459
            .heldItem = ITEM_SCOPE_LENS,
#line 4463
            .ev = TRAINER_PARTY_EVS(0, 136, 0, 0, 0, 0),
#line 4465
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4460
            .ability = ABILITY_SNIPER,
#line 4461
            .lvl = 23,
#line 4464
            .nature = NATURE_ADAMANT,
#line 4462
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4466
                MOVE_CROSS_POISON,
                MOVE_NIGHT_SLASH,
            },
            },
        },
    },
#line 4469
    [DIFFICULTY_NORMAL][TRAINER_06C68007] =
    {
#line 4470
        .trainerName = _("Blank"),
#line 4471
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4473
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4472
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4474
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4476
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4476
            .heldItem = ITEM_FAIRY_FEATHER,
#line 4479
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 20, 104, 0),
#line 4481
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4477
            .ability = ABILITY_STATIC,
#line 4478
            .lvl = 25,
#line 4480
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4482
                MOVE_DISCHARGE,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 4485
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4485
            .heldItem = ITEM_EXPERT_BELT,
#line 4488
            .ev = TRAINER_PARTY_EVS(0, 96, 0, 0, 0, 32),
#line 4490
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4486
            .ability = ABILITY_OBLIVIOUS,
#line 4487
            .lvl = 25,
#line 4489
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4491
                MOVE_BULLDOZE,
                MOVE_ICY_WIND,
            },
            },
        },
    },
#line 4494
    [DIFFICULTY_NORMAL][TRAINER_06D2BD08] =
    {
#line 4495
        .trainerName = _("Blank"),
#line 4496
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4499
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4497
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4498
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4501
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4501
            .heldItem = ITEM_MAGO_BERRY,
#line 4504
            .ev = TRAINER_PARTY_EVS(36, 0, 0, 0, 96, 0),
#line 4506
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4502
            .ability = ABILITY_TANGLED_FEET,
#line 4503
            .lvl = 27,
#line 4505
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4507
                MOVE_ICY_WIND,
                MOVE_PSYBEAM,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 4511
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4511
            .heldItem = ITEM_BLUNDER_POLICY,
#line 4514
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4512
            .ability = ABILITY_QUICK_FEET,
#line 4513
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4515
                MOVE_ICY_WIND,
                MOVE_BODY_SLAM,
                MOVE_FURY_SWIPES,
            },
            },
            {
#line 4519
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4522
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4520
            .ability = ABILITY_DOWNLOAD,
#line 4521
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4523
                MOVE_ICY_WIND,
                MOVE_TRI_ATTACK,
            },
            },
        },
    },
#line 4526
    [DIFFICULTY_NORMAL][TRAINER_070F6125] =
    {
#line 4527
        .trainerName = _("Blank"),
#line 4528
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4531
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4529
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4530
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4533
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4533
            .heldItem = ITEM_SALAC_BERRY,
#line 4536
            .ev = TRAINER_PARTY_EVS(20, 116, 0, 0, 0, 0),
#line 4538
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4534
            .ability = ABILITY_INNER_FOCUS,
#line 4535
            .lvl = 27,
#line 4537
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4538
                MOVE_ENDURE,
                MOVE_REVERSAL,
                MOVE_ACROBATICS,
            },
            },
            {
#line 4542
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4542
            .heldItem = ITEM_BLACK_BELT,
#line 4545
            .ev = TRAINER_PARTY_EVS(0, 116, 0, 0, 0, 12),
#line 4547
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4543
            .ability = ABILITY_UNBURDEN,
#line 4544
            .lvl = 26,
#line 4546
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4547
                MOVE_ENDURE,
                MOVE_REVERSAL,
                MOVE_VACUUM_WAVE,
            },
            },
        },
    },
#line 4551
    [DIFFICULTY_NORMAL][TRAINER_07D063A5] =
    {
#line 4552
        .trainerName = _("07D063A5"),
#line 4553
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4556
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4554
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4555
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4558
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4561
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4563
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4559
            .ability = ABILITY_INTIMIDATE,
#line 4560
            .lvl = 25,
#line 4562
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4564
                MOVE_HELPING_HAND,
                MOVE_U_TURN,
            },
            },
            {
#line 4567
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4567
            .heldItem = ITEM_SHED_SHELL,
#line 4570
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4572
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4568
            .ability = ABILITY_INTIMIDATE,
#line 4569
            .lvl = 25,
#line 4571
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4573
                MOVE_HELPING_HAND,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 4576
            .species = SPECIES_SQUAWKABILLY_WHITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4576
            .heldItem = ITEM_RED_CARD,
#line 4579
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4581
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4577
            .ability = ABILITY_INTIMIDATE,
#line 4578
            .lvl = 25,
#line 4580
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4582
                MOVE_HELPING_HAND,
                MOVE_HEAT_WAVE,
            },
            },
            {
#line 4585
            .species = SPECIES_SQUAWKABILLY_YELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4585
            .heldItem = ITEM_EJECT_BUTTON,
#line 4588
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4590
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4586
            .ability = ABILITY_INTIMIDATE,
#line 4587
            .lvl = 25,
#line 4589
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4591
                MOVE_HELPING_HAND,
                MOVE_AERIAL_ACE,
            },
            },
        },
    },
#line 4594
    [DIFFICULTY_NORMAL][TRAINER_09AEC824] =
    {
#line 4595
        .trainerName = _("Blank"),
#line 4596
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4599
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4597
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4598
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4601
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4604
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 124, 0),
#line 4605
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4602
            .ability = ABILITY_INNER_FOCUS,
#line 4603
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4606
                MOVE_THUNDER_WAVE,
                MOVE_NIGHT_SHADE,
                MOVE_CONFUSION,
            },
            },
            {
#line 4610
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4613
            .ev = TRAINER_PARTY_EVS(64, 0, 40, 0, 0, 24),
#line 4615
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4611
            .ability = ABILITY_VOLT_ABSORB,
#line 4612
            .lvl = 22,
#line 4614
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4616
                MOVE_BITE,
                MOVE_NUZZLE,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 4620
            .species = SPECIES_SNIVY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4623
            .ev = TRAINER_PARTY_EVS(0, 120, 0, 0, 0, 16),
#line 4625
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4621
            .ability = ABILITY_OVERGROW,
#line 4622
            .lvl = 24,
#line 4624
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4626
                MOVE_PETAL_BLIZZARD,
                MOVE_GLARE,
                MOVE_BULLET_SEED,
            },
            },
            {
#line 4630
            .species = SPECIES_SHIINOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4633
            .ev = TRAINER_PARTY_EVS(84, 0, 0, 0, 0, 44),
#line 4635
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4631
            .ability = ABILITY_EFFECT_SPORE,
#line 4632
            .lvl = 24,
#line 4634
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4636
                MOVE_STUN_SPORE,
                MOVE_REVIVAL_BLESSING,
                MOVE_DRAINING_KISS,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 4641
    [DIFFICULTY_NORMAL][TRAINER_09B7B6C8] =
    {
#line 4642
        .trainerName = _("Blank"),
#line 4643
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4646
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4644
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4645
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4648
            .species = SPECIES_MALAMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4648
            .heldItem = ITEM_SITRUS_BERRY,
#line 4651
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 128, 0, 0),
#line 4653
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4649
            .ability = ABILITY_CONTRARY,
#line 4650
            .lvl = 23,
#line 4652
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4654
                MOVE_SWAGGER,
                MOVE_LIGHT_SCREEN,
                MOVE_ACUPRESSURE,
            },
            },
            {
#line 4658
            .species = SPECIES_DITTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4658
            .heldItem = ITEM_CHOICE_SCARF,
#line 4661
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 0, 72, 0),
#line 4663
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4659
            .ability = ABILITY_IMPOSTER,
#line 4660
            .lvl = 29,
#line 4662
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4665
    [DIFFICULTY_NORMAL][TRAINER_0A542D33] =
    {
#line 4666
        .trainerName = _("Blank"),
#line 4667
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4670
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4668
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4669
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4672
            .species = SPECIES_CLEFFA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4672
            .heldItem = ITEM_MENTAL_HERB,
#line 4675
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 128, 0),
#line 4677
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4673
            .ability = ABILITY_CUTE_CHARM,
#line 4674
            .lvl = 25,
#line 4676
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4678
                MOVE_HELPING_HAND,
                MOVE_DAZZLING_GLEAM,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 4682
            .species = SPECIES_CLEFAIRY,
#line 4682
            .gender = TRAINER_MON_MALE,
#line 4682
            .heldItem = ITEM_MENTAL_HERB,
#line 4685
            .ev = TRAINER_PARTY_EVS(0, 0, 64, 0, 0, 64),
#line 4687
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4683
            .ability = ABILITY_CUTE_CHARM,
#line 4684
            .lvl = 25,
#line 4686
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4688
                MOVE_HELPING_HAND,
                MOVE_DAZZLING_GLEAM,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 4692
            .species = SPECIES_CLEFABLE,
#line 4692
            .gender = TRAINER_MON_FEMALE,
#line 4692
            .heldItem = ITEM_MENTAL_HERB,
#line 4695
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 128, 0),
#line 4697
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4693
            .ability = ABILITY_CUTE_CHARM,
#line 4694
            .lvl = 25,
#line 4696
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4698
                MOVE_HELPING_HAND,
                MOVE_DAZZLING_GLEAM,
                MOVE_LIGHT_SCREEN,
            },
            },
        },
    },
#line 4702
    [DIFFICULTY_NORMAL][TRAINER_0A8B9F88] =
    {
#line 4703
        .trainerName = _("Blank"),
#line 4704
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4706
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4705
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4707
        .mapSec = MAPSEC_ROUTE2,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4709
            .species = SPECIES_MINIOR_METEOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4709
            .heldItem = ITEM_METRONOME,
#line 4712
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 84, 0, 0),
#line 4714
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4710
            .ability = ABILITY_SHIELDS_DOWN,
#line 4711
            .lvl = 35,
#line 4713
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4715
                MOVE_ROLLOUT,
            },
            },
            {
#line 4717
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4717
            .heldItem = ITEM_EVIOLITE,
#line 4720
            .ev = TRAINER_PARTY_EVS(52, 80, 0, 0, 0, 0),
#line 4722
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4718
            .ability = ABILITY_THICK_FAT,
#line 4719
            .lvl = 36,
#line 4721
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4723
                MOVE_ICE_BALL,
            },
            },
            {
#line 4725
            .species = SPECIES_ANORITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4725
            .heldItem = ITEM_PASSHO_BERRY,
#line 4728
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 80, 0, 0),
#line 4730
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4726
            .ability = ABILITY_BATTLE_ARMOR,
#line 4727
            .lvl = 36,
#line 4729
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4731
                MOVE_FURY_CUTTER,
            },
            },
        },
    },
#line 4733
    [DIFFICULTY_NORMAL][TRAINER_0A8FC005] =
    {
#line 4734
        .trainerName = _("Blank"),
#line 4735
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4737
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4736
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4738
        .mapSec = MAPSEC_ROUTE4,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4740
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4740
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 4743
            .ev = TRAINER_PARTY_EVS(72, 0, 0, 0, 56, 0),
#line 4745
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4741
            .ability = ABILITY_DRIZZLE,
#line 4742
            .lvl = 35,
#line 4744
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4746
                MOVE_AIR_CUTTER,
                MOVE_ICY_WIND,
                MOVE_CHILLING_WATER,
                MOVE_STOCKPILE,
            },
            },
            {
#line 4751
            .species = SPECIES_TYRUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4751
            .heldItem = ITEM_UTILITY_UMBRELLA,
#line 4754
            .ev = TRAINER_PARTY_EVS(40, 0, 0, 0, 0, 88),
#line 4756
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4752
            .ability = ABILITY_STURDY,
#line 4753
            .lvl = 35,
#line 4755
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4757
                MOVE_ICE_FANG,
                MOVE_THUNDER_FANG,
                MOVE_BITE,
                MOVE_BULLDOZE,
            },
            },
            {
#line 4762
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4762
            .heldItem = ITEM_LEFTOVERS,
#line 4765
            .ev = TRAINER_PARTY_EVS(84, 0, 56, 0, 0, 0),
#line 4767
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4763
            .ability = ABILITY_RAIN_DISH,
#line 4764
            .lvl = 35,
#line 4766
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4768
                MOVE_WHIRLPOOL,
                MOVE_TOXIC,
                MOVE_ACID_ARMOR,
                MOVE_PROTECT,
            },
            },
            {
#line 4773
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4773
            .heldItem = ITEM_SNOWBALL,
#line 4776
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 0, 0, 76),
#line 4778
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4774
            .ability = ABILITY_HYPER_CUTTER,
#line 4775
            .lvl = 35,
#line 4777
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4779
                MOVE_VENOSHOCK,
                MOVE_AERIAL_ACE,
                MOVE_BREAKING_SWIPE,
                MOVE_SAND_TOMB,
            },
            },
        },
    },
#line 4784
    [DIFFICULTY_NORMAL][TRAINER_0AAB38A6] =
    {
#line 4785
        .trainerName = _("Blank"),
#line 4786
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4788
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4787
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4789
        .mapSec = MAPSEC_ROUTE4,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4791
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4791
            .heldItem = ITEM_EVIOLITE,
#line 4794
            .ev = TRAINER_PARTY_EVS(60, 0, 0, 0, 72, 0),
#line 4796
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4792
            .ability = ABILITY_LEVITATE,
#line 4793
            .lvl = 35,
#line 4795
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4797
                MOVE_EXTRASENSORY,
                MOVE_SCORCHING_SANDS,
                MOVE_HEX,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 4802
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4802
            .heldItem = ITEM_AIR_BALLOON,
#line 4805
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 0, 0, 88),
#line 4807
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4803
            .ability = ABILITY_ANGER_SHELL,
#line 4804
            .lvl = 35,
#line 4806
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4808
                MOVE_BULLDOZE,
                MOVE_VISE_GRIP,
                MOVE_METAL_CLAW,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 4813
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4813
            .heldItem = ITEM_ASSAULT_VEST,
#line 4816
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 44, 84),
#line 4818
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4814
            .ability = ABILITY_LEVITATE,
#line 4815
            .lvl = 36,
#line 4817
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4819
                MOVE_SLUDGE_BOMB,
                MOVE_BODY_SLAM,
                MOVE_VENOSHOCK,
                MOVE_GYRO_BALL,
            },
            },
        },
    },
#line 4824
    [DIFFICULTY_NORMAL][TRAINER_0AF40D0B] =
    {
#line 4825
        .trainerName = _("Blank"),
#line 4826
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4828
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4827
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4829
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4831
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4831
            .heldItem = ITEM_CHOICE_SCARF,
#line 4834
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4836
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4832
            .ability = ABILITY_SWIFT_SWIM,
#line 4833
            .lvl = 36,
#line 4835
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4837
                MOVE_SURF,
            },
            },
            {
#line 4839
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4839
            .heldItem = ITEM_CHOPLE_BERRY,
#line 4842
            .ev = TRAINER_PARTY_EVS(52, 0, 76, 0, 0, 0),
#line 4844
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4840
            .ability = ABILITY_STORM_DRAIN,
#line 4841
            .lvl = 36,
#line 4843
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4845
                MOVE_EARTH_POWER,
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_RECOVER,
            },
            },
        },
    },
#line 4850
    [DIFFICULTY_NORMAL][TRAINER_0B48C7D0] =
    {
#line 4851
        .trainerName = _("Blank"),
#line 4852
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4854
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4855
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4857
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4857
            .heldItem = ITEM_DRAGON_FANG,
#line 4860
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 132, 0, 0),
#line 4862
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4858
            .ability = ABILITY_PRESSURE,
#line 4859
            .lvl = 33,
#line 4861
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4863
                MOVE_ICE_FANG,
                MOVE_BITE,
                MOVE_DRAGON_BREATH,
                MOVE_ROCK_BLAST,
            },
            },
            {
#line 4868
            .species = SPECIES_SILICOBRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4868
            .heldItem = ITEM_SMOOTH_ROCK,
#line 4871
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 4873
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4869
            .ability = ABILITY_SAND_SPIT,
#line 4870
            .lvl = 34,
#line 4872
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4874
                MOVE_SAND_TOMB,
                MOVE_WRAP,
                MOVE_GLARE,
            },
            },
            {
#line 4878
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4878
            .heldItem = ITEM_WIDE_LENS,
#line 4881
            .ev = TRAINER_PARTY_EVS(36, 0, 88, 0, 0, 0),
#line 4883
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4879
            .ability = ABILITY_PRESSURE,
#line 4880
            .lvl = 35,
#line 4882
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4884
                MOVE_DREAM_EATER,
                MOVE_NIGHT_SHADE,
                MOVE_HYPNOSIS,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 4889
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4889
            .heldItem = ITEM_HARD_STONE,
#line 4892
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 4894
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4890
            .ability = ABILITY_SAND_VEIL,
#line 4891
            .lvl = 34,
#line 4893
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4895
                MOVE_FIRE_FANG,
                MOVE_ICE_FANG,
                MOVE_THUNDER_FANG,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 4900
    [DIFFICULTY_NORMAL][TRAINER_0C0A9B2F] =
    {
#line 4901
        .trainerName = _("Blank"),
#line 4902
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4904
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4903
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4905
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4907
            .species = SPECIES_TIRTOUGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4907
            .heldItem = ITEM_RINDO_BERRY,
#line 4910
            .ev = TRAINER_PARTY_EVS(0, 32, 0, 0, 0, 96),
#line 4912
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4908
            .ability = ABILITY_SOLID_ROCK,
#line 4909
            .lvl = 36,
#line 4911
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4913
                MOVE_ZEN_HEADBUTT,
                MOVE_ANCIENT_POWER,
                MOVE_AQUA_JET,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 4918
            .species = SPECIES_SHIELDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4918
            .heldItem = ITEM_RED_CARD,
#line 4921
            .ev = TRAINER_PARTY_EVS(48, 80, 0, 0, 0, 0),
#line 4923
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4919
            .ability = ABILITY_STURDY,
#line 4920
            .lvl = 35,
#line 4922
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4924
                MOVE_IRON_HEAD,
                MOVE_POWER_GEM,
                MOVE_METAL_BURST,
                MOVE_ROAR,
            },
            },
            {
#line 4929
            .species = SPECIES_KLEAVOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4929
            .heldItem = ITEM_KINGS_ROCK,
#line 4932
            .ev = TRAINER_PARTY_EVS(20, 0, 0, 0, 0, 108),
#line 4934
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4930
            .ability = ABILITY_SWARM,
#line 4931
            .lvl = 36,
#line 4933
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4935
                MOVE_WING_ATTACK,
                MOVE_POUNCE,
                MOVE_SMACK_DOWN,
                MOVE_DOUBLE_HIT,
            },
            },
        },
    },
#line 4940
    [DIFFICULTY_NORMAL][TRAINER_0C543C80] =
    {
#line 4941
        .trainerName = _("Blank"),
#line 4942
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4944
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4943
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4945
        .mapSec = MAPSEC_ROUTE2,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4947
            .species = SPECIES_SIGILYPH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4947
            .heldItem = ITEM_FLAME_ORB,
#line 4950
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 80, 0, 0),
#line 4952
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4948
            .ability = ABILITY_MAGIC_GUARD,
#line 4949
            .lvl = 34,
#line 4951
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4953
                MOVE_AIR_CUTTER,
                MOVE_CONFUSION,
                MOVE_PSYCHO_SHIFT,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 4958
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4958
            .heldItem = ITEM_EJECT_BUTTON,
#line 4961
            .ev = TRAINER_PARTY_EVS(44, 0, 80, 0, 0, 0),
#line 4963
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4959
            .ability = ABILITY_FRIEND_GUARD,
#line 4960
            .lvl = 37,
#line 4962
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4964
                MOVE_FOLLOW_ME,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 4967
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4967
            .heldItem = ITEM_FOCUS_SASH,
#line 4970
            .ev = TRAINER_PARTY_EVS(0, 128, 0, 0, 0, 0),
#line 4972
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4968
            .ability = ABILITY_ARENA_TRAP,
#line 4969
            .lvl = 33,
#line 4971
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4973
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
                MOVE_BITE,
                MOVE_BUG_BITE,
            },
            },
            {
#line 4978
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4978
            .heldItem = ITEM_SITRUS_BERRY,
#line 4981
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 4983
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4979
            .ability = ABILITY_MUMMY,
#line 4980
            .lvl = 35,
#line 4982
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4984
                MOVE_HEX,
                MOVE_WILL_O_WISP,
                MOVE_MEAN_LOOK,
                MOVE_CURSE,
            },
            },
        },
    },
#line 4989
    [DIFFICULTY_NORMAL][TRAINER_0C95C833] =
    {
#line 4990
        .trainerName = _("Blank"),
#line 4991
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4993
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4992
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4994
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4996
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4996
            .heldItem = ITEM_CHOICE_SCARF,
#line 4999
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 124, 0, 0),
#line 5001
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4997
            .ability = ABILITY_ROUGH_SKIN,
#line 4998
            .lvl = 36,
#line 5000
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5002
                MOVE_FLIP_TURN,
            },
            },
            {
#line 5004
            .species = SPECIES_ARCTOZOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5004
            .heldItem = ITEM_SALAC_BERRY,
#line 5007
            .ev = TRAINER_PARTY_EVS(24, 0, 0, 100, 0, 0),
#line 5009
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5005
            .ability = ABILITY_VOLT_ABSORB,
#line 5006
            .lvl = 35,
#line 5008
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5010
                MOVE_ROCK_TOMB,
                MOVE_ICY_WIND,
                MOVE_ELECTRO_BALL,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 5015
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5015
            .heldItem = ITEM_SOFT_SAND,
#line 5018
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 5020
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5016
            .ability = ABILITY_SHELL_ARMOR,
#line 5017
            .lvl = 35,
#line 5019
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5021
                MOVE_BODY_SLAM,
                MOVE_FLAME_WHEEL,
                MOVE_BULLDOZE,
                MOVE_YAWN,
            },
            },
        },
    },
#line 5026
    [DIFFICULTY_NORMAL][TRAINER_0D416B2C] =
    {
#line 5027
        .trainerName = _("Blank"),
#line 5028
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5030
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5029
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5032
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5032
            .heldItem = ITEM_EVIOLITE,
#line 5035
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 80, 60, 0),
#line 5037
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5033
            .ability = ABILITY_WIND_POWER,
#line 5034
            .lvl = 43,
#line 5036
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5037
                MOVE_DISCHARGE,
                MOVE_U_TURN,
                MOVE_TAILWIND,
            },
            },
            {
#line 5041
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5041
            .heldItem = ITEM_CELL_BATTERY,
#line 5044
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 60, 0, 0),
#line 5046
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5042
            .ability = ABILITY_LIMBER,
#line 5043
            .lvl = 43,
#line 5045
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5046
                MOVE_BLAZE_KICK,
                MOVE_SUCKER_PUNCH,
                MOVE_LOW_SWEEP,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 5051
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5051
            .heldItem = ITEM_TOXIC_ORB,
#line 5054
            .ev = TRAINER_PARTY_EVS(60, 0, 0, 0, 0, 80),
#line 5056
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5052
            .ability = ABILITY_MARVEL_SCALE,
#line 5053
            .lvl = 42,
#line 5055
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5056
                MOVE_BODY_SLAM,
                MOVE_WATER_PULSE,
                MOVE_BREAKING_SWIPE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 5061
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5061
            .heldItem = ITEM_IAPAPA_BERRY,
#line 5064
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 0, 0, 60),
#line 5066
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5062
            .ability = ABILITY_STURDY,
#line 5063
            .lvl = 43,
#line 5065
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5066
                MOVE_STOMPING_TANTRUM,
                MOVE_KNOCK_OFF,
                MOVE_FIRE_FANG,
                MOVE_COUNTER,
            },
            },
        },
    },
#line 5071
    [DIFFICULTY_NORMAL][TRAINER_0D4BA0F1] =
    {
#line 5072
        .trainerName = _("Blank"),
#line 5073
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5075
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5074
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5077
            .species = SPECIES_BARRASKEWDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5077
            .heldItem = ITEM_ROCKY_HELMET,
#line 5080
            .ev = TRAINER_PARTY_EVS(0, 0, 40, 0, 0, 100),
#line 5082
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5078
            .ability = ABILITY_PROPELLER_TAIL,
#line 5079
            .lvl = 43,
#line 5081
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5082
                MOVE_DIVE,
                MOVE_DRILL_RUN,
                MOVE_BITE,
                MOVE_AQUA_JET,
            },
            },
            {
#line 5087
            .species = SPECIES_CRAMORANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5087
            .heldItem = ITEM_MYSTIC_WATER,
#line 5090
            .ev = TRAINER_PARTY_EVS(0, 0, 40, 100, 0, 0),
#line 5092
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5088
            .ability = ABILITY_GULP_MISSILE,
#line 5089
            .lvl = 44,
#line 5091
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5092
                MOVE_SURF,
                MOVE_DIVE,
                MOVE_DRILL_PECK,
                MOVE_STOCKPILE,
            },
            },
            {
#line 5097
            .species = SPECIES_PAWMOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5097
            .heldItem = ITEM_PUNCHING_GLOVE,
#line 5100
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 100, 0, 40),
#line 5102
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5098
            .ability = ABILITY_VOLT_ABSORB,
#line 5099
            .lvl = 44,
#line 5101
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5102
                MOVE_THUNDER_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_BRICK_BREAK,
                MOVE_UPPER_HAND,
            },
            },
        },
    },
#line 5107
    [DIFFICULTY_NORMAL][TRAINER_0DA021EF] =
    {
#line 5108
        .trainerName = _("Billy"),
#line 5109
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
0,
#line 5111
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5110
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_BIRD_KEEPER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5113
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5113
            .heldItem = ITEM_WACAN_BERRY,
#line 5116
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5118
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5114
            .ability = ABILITY_INTIMIDATE,
#line 5115
            .lvl = 43,
#line 5117
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5118
                MOVE_TAKE_DOWN,
                MOVE_FLY,
                MOVE_U_TURN,
                MOVE_PARTING_SHOT,
            },
            },
            {
#line 5123
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5123
            .heldItem = ITEM_FLAME_ORB,
#line 5126
            .ev = TRAINER_PARTY_EVS(60, 0, 0, 80, 0, 0),
#line 5128
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5124
            .ability = ABILITY_GUTS,
#line 5125
            .lvl = 44,
#line 5127
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5128
                MOVE_FACADE,
                MOVE_LASH_OUT,
                MOVE_DUAL_WINGBEAT,
                MOVE_TORMENT,
            },
            },
            {
#line 5133
            .species = SPECIES_SQUAWKABILLY_YELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5133
            .heldItem = ITEM_WIDE_LENS,
#line 5136
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 80, 0, 0),
#line 5138
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5134
            .ability = ABILITY_HUSTLE,
#line 5135
            .lvl = 43,
#line 5137
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5138
                MOVE_FOUL_PLAY,
                MOVE_AERIAL_ACE,
                MOVE_QUICK_ATTACK,
                MOVE_ROOST,
            },
            },
            {
#line 5143
            .species = SPECIES_SQUAWKABILLY_WHITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5143
            .heldItem = ITEM_LIFE_ORB,
#line 5146
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 80, 60, 0),
#line 5148
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5144
            .ability = ABILITY_SHEER_FORCE,
#line 5145
            .lvl = 44,
#line 5147
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5148
                MOVE_HURRICANE,
                MOVE_HEAT_WAVE,
                MOVE_POUNCE,
                MOVE_MIMIC,
            },
            },
        },
    },
#line 5153
    [DIFFICULTY_NORMAL][TRAINER_0E19F1A8] =
    {
#line 5154
        .trainerName = _("Blank"),
#line 5155
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5157
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5156
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5159
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5159
            .heldItem = ITEM_ADRENALINE_ORB,
#line 5162
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 60, 0, 0),
#line 5164
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5160
            .ability = ABILITY_KEEN_EYE,
#line 5161
            .lvl = 44,
#line 5163
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5164
                MOVE_DRAIN_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_BULLET_PUNCH,
            },
            },
            {
#line 5169
            .species = SPECIES_FLETCHINDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5169
            .heldItem = ITEM_FOCUS_SASH,
#line 5172
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 80, 0, 0),
#line 5174
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5170
            .ability = ABILITY_GALE_WINGS,
#line 5171
            .lvl = 45,
#line 5173
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5174
                MOVE_FLY,
                MOVE_STEEL_WING,
                MOVE_FIRE_SPIN,
                MOVE_TAILWIND,
            },
            },
            {
#line 5179
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5179
            .heldItem = ITEM_POWER_HERB,
#line 5182
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5184
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5180
            .ability = ABILITY_WIND_RIDER,
#line 5181
            .lvl = 44,
#line 5183
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5184
                MOVE_SOLAR_BLADE,
                MOVE_THIEF,
                MOVE_AERIAL_ACE,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 5189
            .species = SPECIES_NOIVERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5189
            .heldItem = ITEM_YACHE_BERRY,
#line 5192
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5194
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5190
            .ability = ABILITY_INFILTRATOR,
#line 5191
            .lvl = 44,
#line 5193
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5194
                MOVE_DRAGON_PULSE,
                MOVE_PSYCHIC_NOISE,
                MOVE_AIR_CUTTER,
                MOVE_TAILWIND,
            },
            },
        },
    },
#line 5199
    [DIFFICULTY_NORMAL][TRAINER_0E42221A] =
    {
#line 5200
        .trainerName = _("Blank"),
#line 5201
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5203
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5202
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5205
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5205
            .heldItem = ITEM_WEAKNESS_POLICY,
#line 5208
            .ev = TRAINER_PARTY_EVS(0, 0, 140, 0, 0, 0),
#line 5210
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5206
            .ability = ABILITY_TECHNICIAN,
#line 5207
            .lvl = 46,
#line 5209
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5210
                MOVE_BUG_BITE,
                MOVE_TRAILBLAZE,
                MOVE_DUAL_WINGBEAT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 5215
            .species = SPECIES_SWOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5215
            .heldItem = ITEM_MARANGA_BERRY,
#line 5218
            .ev = TRAINER_PARTY_EVS(0, 0, 60, 0, 0, 80),
#line 5220
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5216
            .ability = ABILITY_SIMPLE,
#line 5217
            .lvl = 44,
#line 5219
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5220
                MOVE_STORED_POWER,
                MOVE_CALM_MIND,
            },
            },
            {
#line 5223
            .species = SPECIES_GREEDENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5223
            .heldItem = ITEM_GANLON_BERRY,
#line 5226
            .ev = TRAINER_PARTY_EVS(0, 80, 60, 0, 0, 0),
#line 5227
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5224
            .ability = ABILITY_CHEEK_POUCH,
#line 5225
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5227
                MOVE_BODY_PRESS,
                MOVE_BODY_SLAM,
                MOVE_SEED_BOMB,
                MOVE_STUFF_CHEEKS,
            },
            },
        },
    },
#line 5232
    [DIFFICULTY_NORMAL][TRAINER_0ED24EF1] =
    {
#line 5233
        .trainerName = _("Blank"),
#line 5234
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5236
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5235
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5238
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5238
            .heldItem = ITEM_YACHE_BERRY,
#line 5241
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 80, 0, 0),
#line 5243
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5239
            .ability = ABILITY_HYPER_CUTTER,
#line 5240
            .lvl = 45,
#line 5242
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5243
                MOVE_ROCK_SLIDE,
                MOVE_BULLDOZE,
                MOVE_FIRE_FANG,
                MOVE_TOXIC_SPIKES,
            },
            },
            {
#line 5248
            .species = SPECIES_SHUCKLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5248
            .heldItem = ITEM_LEFTOVERS,
#line 5251
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5253
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5249
            .ability = ABILITY_STURDY,
#line 5250
            .lvl = 46,
#line 5252
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5253
                MOVE_KNOCK_OFF,
                MOVE_INFESTATION,
                MOVE_WRAP,
                MOVE_PROTECT,
            },
            },
            {
#line 5258
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5258
            .heldItem = ITEM_ASSAULT_VEST,
#line 5261
            .ev = TRAINER_PARTY_EVS(0, 0, 60, 0, 0, 80),
#line 5263
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5259
            .ability = ABILITY_SHEER_FORCE,
#line 5260
            .lvl = 45,
#line 5262
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5263
                MOVE_LIQUIDATION,
                MOVE_NIGHT_SLASH,
                MOVE_METAL_CLAW,
                MOVE_HAMMER_ARM,
            },
            },
        },
    },
#line 5268
    [DIFFICULTY_NORMAL][TRAINER_0F03CF8D] =
    {
#line 5269
        .trainerName = _("Blank"),
#line 5270
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5272
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5271
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5274
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5274
            .heldItem = ITEM_SCOPE_LENS,
#line 5277
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 0, 60, 0),
#line 5279
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5275
            .ability = ABILITY_KEEN_EYE,
#line 5276
            .lvl = 46,
#line 5278
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5280
                MOVE_DUAL_WINGBEAT,
                MOVE_STEEL_WING,
                MOVE_TAILWIND,
                MOVE_UPROAR,
            },
            },
            {
#line 5285
            .species = SPECIES_BOMBIRDIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5285
            .heldItem = ITEM_CHARTI_BERRY,
#line 5288
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 0, 0, 60),
#line 5290
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5286
            .ability = ABILITY_ROCKY_PAYLOAD,
#line 5287
            .lvl = 45,
#line 5289
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5290
                MOVE_FOUL_PLAY,
                MOVE_ROCK_SLIDE,
                MOVE_ACROBATICS,
                MOVE_FEATHER_DANCE,
            },
            },
            {
#line 5295
            .species = SPECIES_ORICORIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5295
            .heldItem = ITEM_ABSORB_BULB,
#line 5298
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 60, 80),
#line 5300
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5296
            .ability = ABILITY_DANCER,
#line 5297
            .lvl = 45,
#line 5299
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5300
                MOVE_REVELATION_DANCE,
                MOVE_ACROBATICS,
                MOVE_SWORDS_DANCE,
                MOVE_TAILWIND,
            },
            },
            {
#line 5305
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5305
            .heldItem = ITEM_WIDE_LENS,
#line 5308
            .ev = TRAINER_PARTY_EVS(0, 0, 100, 40, 0, 0),
#line 5310
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5306
            .ability = ABILITY_KEEN_EYE,
#line 5307
            .lvl = 45,
#line 5309
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5310
                MOVE_DREAM_EATER,
                MOVE_AIR_SLASH,
                MOVE_PSYBEAM,
                MOVE_HYPNOSIS,
            },
            },
        },
    },
#line 5315
    [DIFFICULTY_NORMAL][TRAINER_0F3D8011] =
    {
#line 5316
        .trainerName = _("Blank"),
#line 5317
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5318
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 5320
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5320
            .heldItem = ITEM_EVIOLITE,
#line 5323
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5324
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5321
            .ability = ABILITY_FRIEND_GUARD,
#line 5322
            .lvl = 54,
#line 5325
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5326
                MOVE_FOLLOW_ME,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_NIGHT_SHADE,
            },
            },
            {
#line 5331
            .species = SPECIES_GREEDENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5331
            .heldItem = ITEM_SITRUS_BERRY,
#line 5334
            .ev = TRAINER_PARTY_EVS(252, 48, 0, 0, 0, 0),
#line 5335
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5332
            .ability = ABILITY_CHEEK_POUCH,
#line 5333
            .lvl = 51,
#line 5336
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5337
                MOVE_BODY_PRESS,
                MOVE_BODY_SLAM,
                MOVE_COUNTER,
                MOVE_CRUNCH,
            },
            },
            {
#line 5342
            .species = SPECIES_ARBOLIVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5342
            .heldItem = ITEM_SITRUS_BERRY,
#line 5345
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 0, 252, 0),
#line 5346
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5343
            .ability = ABILITY_HARVEST,
#line 5344
            .lvl = 49,
#line 5347
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5348
                MOVE_GIGA_DRAIN,
                MOVE_EARTH_POWER,
                MOVE_LEECH_SEED,
                MOVE_SYNTHESIS,
            },
            },
            {
#line 5353
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5353
            .heldItem = ITEM_SITRUS_BERRY,
#line 5356
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 48, 0, 0),
#line 5357
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5354
            .ability = ABILITY_PICKUP,
#line 5355
            .lvl = 52,
#line 5358
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5359
                MOVE_WILD_CHARGE,
                MOVE_PLAY_ROUGH,
                MOVE_SEED_BOMB,
                MOVE_FOLLOW_ME,
            },
            },
            {
#line 5364
            .species = SPECIES_POLTEAGEIST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5364
            .heldItem = ITEM_STARF_BERRY,
#line 5367
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 148, 152, 0),
#line 5369
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5365
            .ability = ABILITY_WEAK_ARMOR,
#line 5366
            .lvl = 49,
#line 5368
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5370
                MOVE_TEATIME,
                MOVE_GIGA_DRAIN,
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
            },
            },
        },
    },
#line 5375
    [DIFFICULTY_NORMAL][TRAINER_0F3DB5D8] =
    {
#line 5376
        .trainerName = _("Blank"),
#line 5377
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5378
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5380
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5380
            .heldItem = ITEM_BLACK_SLUDGE,
#line 5383
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 252, 0, 0),
#line 5385
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5381
            .ability = ABILITY_CLEAR_BODY,
#line 5382
            .lvl = 50,
#line 5384
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5386
                MOVE_TOXIC_SPIKES,
                MOVE_VENOSHOCK,
                MOVE_HEX,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 5391
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5391
            .heldItem = ITEM_SPELL_TAG,
#line 5394
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 48, 0),
#line 5395
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5392
            .ability = ABILITY_LEVITATE,
#line 5393
            .lvl = 51,
#line 5396
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5397
                MOVE_HEX,
                MOVE_DAZZLING_GLEAM,
                MOVE_MEAN_LOOK,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 5402
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5402
            .heldItem = ITEM_FOCUS_SASH,
#line 5405
            .ev = TRAINER_PARTY_EVS(48, 252, 0, 0, 0, 0),
#line 5406
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5403
            .ability = ABILITY_SNIPER,
#line 5404
            .lvl = 52,
#line 5407
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5408
                MOVE_VENOSHOCK,
                MOVE_TOXIC_THREAD,
                MOVE_FELL_STINGER,
                MOVE_SUCKER_PUNCH,
            },
            },
        },
    },
#line 5413
    [DIFFICULTY_NORMAL][TRAINER_0F5F82C3] =
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
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5418
            .heldItem = ITEM_PAYAPA_BERRY,
#line 5421
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 48, 0, 0),
#line 5422
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5419
            .ability = ABILITY_POISON_TOUCH,
#line 5420
            .lvl = 51,
#line 5423
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5424
                MOVE_FAKE_OUT,
                MOVE_SUCKER_PUNCH,
                MOVE_POISON_JAB,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 5429
    [DIFFICULTY_NORMAL][TRAINER_0FFBCCB9] =
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
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5434
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5434
            .heldItem = ITEM_WEAKNESS_POLICY,
#line 5437
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5438
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5435
            .ability = ABILITY_PRESSURE,
#line 5436
            .lvl = 50,
#line 5439
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5440
                MOVE_FUTURE_SIGHT,
                MOVE_SHADOW_SNEAK,
                MOVE_LEECH_LIFE,
                MOVE_PAIN_SPLIT,
            },
            },
            {
#line 5445
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5445
            .heldItem = ITEM_EXPERT_BELT,
#line 5448
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5449
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5446
            .ability = ABILITY_JUSTIFIED,
#line 5447
            .lvl = 50,
#line 5450
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5451
                MOVE_FUTURE_SIGHT,
                MOVE_DRAIN_PUNCH,
                MOVE_PSYCHO_CUT,
                MOVE_X_SCISSOR,
            },
            },
            {
#line 5456
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5456
            .heldItem = ITEM_FAIRY_FEATHER,
#line 5459
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 48, 0),
#line 5461
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5457
            .ability = ABILITY_TRACE,
#line 5458
            .lvl = 50,
#line 5460
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5462
                MOVE_FUTURE_SIGHT,
                MOVE_DRAINING_KISS,
                MOVE_PSYCHIC,
                MOVE_MYSTICAL_FIRE,
            },
            },
            {
#line 5467
            .species = SPECIES_ORBEETLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5467
            .heldItem = ITEM_LEFTOVERS,
#line 5470
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 48, 252, 0),
#line 5472
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5468
            .ability = ABILITY_SWARM,
#line 5469
            .lvl = 51,
#line 5471
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5473
                MOVE_FUTURE_SIGHT,
                MOVE_BUG_BUZZ,
                MOVE_INFESTATION,
                MOVE_SUBSTITUTE,
            },
            },
        },
    },
#line 5478
    [DIFFICULTY_NORMAL][TRAINER_1075163A] =
    {
#line 5479
        .trainerName = _("Blank"),
#line 5480
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5481
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5483
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5483
            .heldItem = ITEM_ROSELI_BERRY,
#line 5486
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 48, 0),
#line 5487
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5484
            .ability = ABILITY_LEVITATE,
#line 5485
            .lvl = 43,
#line 5488
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5489
                MOVE_BELCH,
                MOVE_ACROBATICS,
                MOVE_DRAGON_BREATH,
                MOVE_TAILWIND,
            },
            },
            {
#line 5494
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5494
            .heldItem = ITEM_SALAC_BERRY,
#line 5497
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 48, 0, 0),
#line 5498
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5495
            .ability = ABILITY_STURDY,
#line 5496
            .lvl = 46,
#line 5499
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5500
                MOVE_FLAIL,
                MOVE_ROCK_TOMB,
                MOVE_WATERFALL,
                MOVE_SCALE_SHOT,
            },
            },
            {
#line 5505
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5505
            .heldItem = ITEM_IAPAPA_BERRY,
#line 5508
            .ev = TRAINER_PARTY_EVS(52, 248, 0, 0, 0, 0),
#line 5510
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5506
            .ability = ABILITY_GLUTTONY,
#line 5507
            .lvl = 46,
#line 5509
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5511
                MOVE_BELLY_DRUM,
                MOVE_EXTREME_SPEED,
                MOVE_THROAT_CHOP,
                MOVE_THUNDER_WAVE,
            },
            },
        },
    },
#line 5516
    [DIFFICULTY_NORMAL][TRAINER_10751EAA] =
    {
#line 5517
        .trainerName = _("Blank"),
#line 5518
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5519
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 5521
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5521
            .heldItem = ITEM_PAYAPA_BERRY,
#line 5524
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 48),
#line 5526
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5522
            .ability = ABILITY_LEVITATE,
#line 5523
            .lvl = 46,
#line 5525
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5527
                MOVE_TOXIC_SPIKES,
                MOVE_SLUDGE_BOMB,
                MOVE_HEAT_WAVE,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 5532
            .species = SPECIES_PANGORO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5532
            .heldItem = ITEM_SITRUS_BERRY,
#line 5535
            .ev = TRAINER_PARTY_EVS(48, 252, 0, 0, 0, 0),
#line 5537
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5533
            .ability = ABILITY_SCRAPPY,
#line 5534
            .lvl = 43,
#line 5536
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5538
                MOVE_SUBSTITUTE,
                MOVE_CIRCLE_THROW,
                MOVE_DARKEST_LARIAT,
                MOVE_GUNK_SHOT,
            },
            },
            {
#line 5543
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5543
            .heldItem = ITEM_ASSAULT_VEST,
#line 5546
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 48, 252, 0),
#line 5547
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5544
            .ability = ABILITY_FLAME_BODY,
#line 5545
            .lvl = 45,
#line 5548
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5549
                MOVE_LAVA_PLUME,
                MOVE_SCORCHING_SANDS,
                MOVE_THUNDERBOLT,
                MOVE_FIRE_SPIN,
            },
            },
            {
#line 5554
            .species = SPECIES_CRAMORANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5554
            .heldItem = ITEM_FOCUS_SASH,
#line 5557
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 0, 252, 0),
#line 5559
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5555
            .ability = ABILITY_GULP_MISSILE,
#line 5556
            .lvl = 46,
#line 5558
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5560
                MOVE_AGILITY,
                MOVE_SURF,
                MOVE_ENDEAVOR,
                MOVE_WHIRLPOOL,
            },
            },
            {
#line 5565
            .species = SPECIES_SKUNTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5565
            .heldItem = ITEM_AIR_BALLOON,
#line 5568
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 48, 252, 0),
#line 5570
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5566
            .ability = ABILITY_AFTERMATH,
#line 5567
            .lvl = 44,
#line 5569
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5571
                MOVE_HEX,
                MOVE_VENOSHOCK,
                MOVE_NASTY_PLOT,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 5576
    [DIFFICULTY_NORMAL][TRAINER_10E3552B] =
    {
#line 5577
        .trainerName = _("Blank"),
#line 5578
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5579
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5581
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5581
            .heldItem = ITEM_FOCUS_SASH,
#line 5584
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5585
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5582
            .ability = ABILITY_REGENERATOR,
#line 5583
            .lvl = 45,
#line 5586
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5587
                MOVE_FAKE_OUT,
                MOVE_DRAIN_PUNCH,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 5592
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5592
            .heldItem = ITEM_LEFTOVERS,
#line 5595
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 48),
#line 5597
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5593
            .ability = ABILITY_REGENERATOR,
#line 5594
            .lvl = 45,
#line 5596
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5598
                MOVE_SCALD,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
                MOVE_SLACK_OFF,
            },
            },
            {
#line 5603
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5603
            .heldItem = ITEM_EVIOLITE,
#line 5606
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5608
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5604
            .ability = ABILITY_SERENE_GRACE,
#line 5605
            .lvl = 48,
#line 5607
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5609
                MOVE_DRAINING_KISS,
                MOVE_ANCIENT_POWER,
                MOVE_WISH,
                MOVE_BATON_PASS,
            },
            },
            {
#line 5614
            .species = SPECIES_LIEPARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5614
            .heldItem = ITEM_NORMAL_GEM,
#line 5617
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5619
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5615
            .ability = ABILITY_UNBURDEN,
#line 5616
            .lvl = 46,
#line 5618
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5620
                MOVE_U_TURN,
                MOVE_FAKE_OUT,
                MOVE_DARK_PULSE,
                MOVE_PLAY_ROUGH,
            },
            },
        },
    },
#line 5625
    [DIFFICULTY_NORMAL][TRAINER_1114BC23] =
    {
#line 5626
        .trainerName = _("Blank"),
#line 5627
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5628
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5630
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5630
            .heldItem = ITEM_TOXIC_ORB,
#line 5633
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 48, 0, 0),
#line 5635
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5631
            .ability = ABILITY_POISON_HEAL,
#line 5632
            .lvl = 45,
#line 5634
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5636
                MOVE_SUBSTITUTE,
                MOVE_DRAIN_PUNCH,
                MOVE_GIGA_DRAIN,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 5641
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5641
            .heldItem = ITEM_BIG_ROOT,
#line 5644
            .ev = TRAINER_PARTY_EVS(252, 0, 24, 0, 0, 24),
#line 5646
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5642
            .ability = ABILITY_DRY_SKIN,
#line 5643
            .lvl = 47,
#line 5645
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5647
                MOVE_LEECH_SEED,
                MOVE_LEECH_LIFE,
                MOVE_GIGA_DRAIN,
                MOVE_SPORE,
            },
            },
            {
#line 5652
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5652
            .heldItem = ITEM_LEFTOVERS,
#line 5655
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5657
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5653
            .ability = ABILITY_FLASH_FIRE,
#line 5654
            .lvl = 48,
#line 5656
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5658
                MOVE_BITTER_BLADE,
                MOVE_PHANTOM_FORCE,
                MOVE_WILL_O_WISP,
                MOVE_BULK_UP,
            },
            },
            {
#line 5663
            .species = SPECIES_FLORGES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5663
            .heldItem = ITEM_BABIRI_BERRY,
#line 5666
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5668
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5664
            .ability = ABILITY_FLOWER_VEIL,
#line 5665
            .lvl = 46,
#line 5667
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5669
                MOVE_MOONBLAST,
                MOVE_STORED_POWER,
                MOVE_CALM_MIND,
                MOVE_SYNTHESIS,
            },
            },
        },
    },
#line 5674
    [DIFFICULTY_NORMAL][TRAINER_114EB3AD] =
    {
#line 5675
        .trainerName = _("Blank"),
#line 5676
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5677
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5679
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5681
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5680
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5682
    [DIFFICULTY_NORMAL][TRAINER_11EDE0DC] =
    {
#line 5683
        .trainerName = _("Blank"),
#line 5684
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5685
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5687
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5689
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5688
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5690
    [DIFFICULTY_NORMAL][TRAINER_120A20F6] =
    {
#line 5691
        .trainerName = _("Blank"),
#line 5692
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5693
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5695
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5697
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5696
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5698
    [DIFFICULTY_NORMAL][TRAINER_13113EC0] =
    {
#line 5699
        .trainerName = _("Blank"),
#line 5700
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5701
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5703
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5705
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5704
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5706
    [DIFFICULTY_NORMAL][TRAINER_1387ABBC] =
    {
#line 5707
        .trainerName = _("Blank"),
#line 5708
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5709
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5711
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5713
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5712
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5714
    [DIFFICULTY_NORMAL][TRAINER_148A3C6B] =
    {
#line 5715
        .trainerName = _("Blank"),
#line 5716
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5717
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5719
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5721
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5720
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5722
    [DIFFICULTY_NORMAL][TRAINER_14C5EE6C] =
    {
#line 5723
        .trainerName = _("Blank"),
#line 5724
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5725
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5727
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5729
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5728
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5730
    [DIFFICULTY_NORMAL][TRAINER_1508BB71] =
    {
#line 5731
        .trainerName = _("Blank"),
#line 5732
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5733
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5735
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5737
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5736
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5738
    [DIFFICULTY_NORMAL][TRAINER_1510C80A] =
    {
#line 5739
        .trainerName = _("Blank"),
#line 5740
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5741
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5743
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5745
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5744
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5746
    [DIFFICULTY_NORMAL][TRAINER_15598A38] =
    {
#line 5747
        .trainerName = _("Blank"),
#line 5748
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5749
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5751
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5753
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5752
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5754
    [DIFFICULTY_NORMAL][TRAINER_15A66566] =
    {
#line 5755
        .trainerName = _("Blank"),
#line 5756
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5757
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5759
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5761
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5760
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5762
    [DIFFICULTY_NORMAL][TRAINER_15C87858] =
    {
#line 5763
        .trainerName = _("Blank"),
#line 5764
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5765
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5767
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5769
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5768
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5770
    [DIFFICULTY_NORMAL][TRAINER_1648CE6E] =
    {
#line 5771
        .trainerName = _("Blank"),
#line 5772
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5773
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5775
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5777
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5776
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5778
    [DIFFICULTY_NORMAL][TRAINER_1710375D] =
    {
#line 5779
        .trainerName = _("Blank"),
#line 5780
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5781
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5783
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5785
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5784
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5786
    [DIFFICULTY_NORMAL][TRAINER_17DCC938] =
    {
#line 5787
        .trainerName = _("Blank"),
#line 5788
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5789
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5791
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5793
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5792
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5794
    [DIFFICULTY_NORMAL][TRAINER_188A6F20] =
    {
#line 5795
        .trainerName = _("Blank"),
#line 5796
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5797
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5799
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5801
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5800
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5802
    [DIFFICULTY_NORMAL][TRAINER_1932C509] =
    {
#line 5803
        .trainerName = _("Blank"),
#line 5804
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5805
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5807
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5809
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5808
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5810
    [DIFFICULTY_NORMAL][TRAINER_19477C78] =
    {
#line 5811
        .trainerName = _("Blank"),
#line 5812
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5813
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5815
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5817
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5816
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5818
    [DIFFICULTY_NORMAL][TRAINER_19C5BAD7] =
    {
#line 5819
        .trainerName = _("Blank"),
#line 5820
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5821
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5823
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5825
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5824
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5826
    [DIFFICULTY_NORMAL][TRAINER_19CD0726] =
    {
#line 5827
        .trainerName = _("Blank"),
#line 5828
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5829
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5831
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5833
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5832
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5834
    [DIFFICULTY_NORMAL][TRAINER_19D7682B] =
    {
#line 5835
        .trainerName = _("Blank"),
#line 5836
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5837
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5839
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5841
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5840
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5842
    [DIFFICULTY_NORMAL][TRAINER_1A2CA162] =
    {
#line 5843
        .trainerName = _("Blank"),
#line 5844
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5845
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5847
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5849
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5848
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5850
    [DIFFICULTY_NORMAL][TRAINER_1A763631] =
    {
#line 5851
        .trainerName = _("Blank"),
#line 5852
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5855
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5857
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5856
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5858
    [DIFFICULTY_NORMAL][TRAINER_1AE5CAF7] =
    {
#line 5859
        .trainerName = _("Blank"),
#line 5860
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5861
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5863
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5865
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5864
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5866
    [DIFFICULTY_NORMAL][TRAINER_1AE89BEB] =
    {
#line 5867
        .trainerName = _("Blank"),
#line 5868
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5869
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5871
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5873
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5872
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5874
    [DIFFICULTY_NORMAL][TRAINER_1AEA3CEA] =
    {
#line 5875
        .trainerName = _("Blank"),
#line 5876
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5877
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5879
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5881
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5880
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5882
    [DIFFICULTY_NORMAL][TRAINER_1B517ABD] =
    {
#line 5883
        .trainerName = _("Blank"),
#line 5884
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5885
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5887
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5889
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5888
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5890
    [DIFFICULTY_NORMAL][TRAINER_1B616469] =
    {
#line 5891
        .trainerName = _("Blank"),
#line 5892
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5893
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5895
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5897
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5896
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5898
    [DIFFICULTY_NORMAL][TRAINER_1BA35D11] =
    {
#line 5899
        .trainerName = _("Blank"),
#line 5900
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5901
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5903
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5905
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5904
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5906
    [DIFFICULTY_NORMAL][TRAINER_1BB1218F] =
    {
#line 5907
        .trainerName = _("Blank"),
#line 5908
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5909
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5911
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5913
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5912
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5914
    [DIFFICULTY_NORMAL][TRAINER_1BC45966] =
    {
#line 5915
        .trainerName = _("Blank"),
#line 5916
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5917
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5919
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5921
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5920
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5922
    [DIFFICULTY_NORMAL][TRAINER_1C2B088C] =
    {
#line 5923
        .trainerName = _("Blank"),
#line 5924
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5925
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5927
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5929
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5928
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5930
    [DIFFICULTY_NORMAL][TRAINER_1C6CA7F6] =
    {
#line 5931
        .trainerName = _("Blank"),
#line 5932
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5933
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5935
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5937
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5936
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5938
    [DIFFICULTY_NORMAL][TRAINER_1CBE4FB1] =
    {
#line 5939
        .trainerName = _("Blank"),
#line 5940
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5941
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5943
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5945
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5944
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5946
    [DIFFICULTY_NORMAL][TRAINER_1CBFAF10] =
    {
#line 5947
        .trainerName = _("Blank"),
#line 5948
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5949
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5951
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5953
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5952
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5954
    [DIFFICULTY_NORMAL][TRAINER_1CC4D5D6] =
    {
#line 5955
        .trainerName = _("Blank"),
#line 5956
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5957
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5959
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5961
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5960
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5962
    [DIFFICULTY_NORMAL][TRAINER_1D63E5A1] =
    {
#line 5963
        .trainerName = _("Blank"),
#line 5964
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5965
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5967
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5969
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5968
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5970
    [DIFFICULTY_NORMAL][TRAINER_1D7A6DED] =
    {
#line 5971
        .trainerName = _("Blank"),
#line 5972
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5973
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5975
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5977
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5976
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5978
    [DIFFICULTY_NORMAL][TRAINER_1D93B10D] =
    {
#line 5979
        .trainerName = _("Blank"),
#line 5980
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5981
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5983
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5985
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5984
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5986
    [DIFFICULTY_NORMAL][TRAINER_1DD07C78] =
    {
#line 5987
        .trainerName = _("Blank"),
#line 5988
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5989
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5991
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5993
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5992
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5994
    [DIFFICULTY_NORMAL][TRAINER_1E5E6E80] =
    {
#line 5995
        .trainerName = _("Blank"),
#line 5996
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5999
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6001
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6000
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6002
    [DIFFICULTY_NORMAL][TRAINER_1EE34E30] =
    {
#line 6003
        .trainerName = _("Blank"),
#line 6004
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6005
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6007
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6009
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6008
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6010
    [DIFFICULTY_NORMAL][TRAINER_1F24A6B1] =
    {
#line 6011
        .trainerName = _("Blank"),
#line 6012
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6013
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6015
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6017
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6016
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6018
    [DIFFICULTY_NORMAL][TRAINER_1F2A70D3] =
    {
#line 6019
        .trainerName = _("Blank"),
#line 6020
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6021
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6023
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6025
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6024
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6026
    [DIFFICULTY_NORMAL][TRAINER_1FD08020] =
    {
#line 6027
        .trainerName = _("Blank"),
#line 6028
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6029
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6031
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6033
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6032
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6034
    [DIFFICULTY_NORMAL][TRAINER_200650CA] =
    {
#line 6035
        .trainerName = _("Blank"),
#line 6036
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6037
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6039
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6041
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6040
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6042
    [DIFFICULTY_NORMAL][TRAINER_20170FA5] =
    {
#line 6043
        .trainerName = _("Blank"),
#line 6044
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6045
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6047
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6049
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6048
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6050
    [DIFFICULTY_NORMAL][TRAINER_20993B87] =
    {
#line 6051
        .trainerName = _("Blank"),
#line 6052
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6053
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6055
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6057
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6056
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6058
    [DIFFICULTY_NORMAL][TRAINER_20A10A97] =
    {
#line 6059
        .trainerName = _("Blank"),
#line 6060
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6061
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6063
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6065
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6064
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6066
    [DIFFICULTY_NORMAL][TRAINER_20A6F3A6] =
    {
#line 6067
        .trainerName = _("Blank"),
#line 6068
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6069
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6071
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6073
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6072
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6074
    [DIFFICULTY_NORMAL][TRAINER_20DC389D] =
    {
#line 6075
        .trainerName = _("Blank"),
#line 6076
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6077
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6079
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6081
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6080
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6082
    [DIFFICULTY_NORMAL][TRAINER_2177173C] =
    {
#line 6083
        .trainerName = _("Blank"),
#line 6084
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6085
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6087
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6089
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6088
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6090
    [DIFFICULTY_NORMAL][TRAINER_2180E5CD] =
    {
#line 6091
        .trainerName = _("Blank"),
#line 6092
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6093
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6095
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6097
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6096
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6098
    [DIFFICULTY_NORMAL][TRAINER_21EB8B2C] =
    {
#line 6099
        .trainerName = _("Blank"),
#line 6100
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6101
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6103
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6105
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6104
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6106
    [DIFFICULTY_NORMAL][TRAINER_22BA389B] =
    {
#line 6107
        .trainerName = _("Blank"),
#line 6108
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6109
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6111
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6113
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6112
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6114
    [DIFFICULTY_NORMAL][TRAINER_22DD5E2B] =
    {
#line 6115
        .trainerName = _("Blank"),
#line 6116
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6117
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6119
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6121
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6120
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6122
    [DIFFICULTY_NORMAL][TRAINER_22E7DE36] =
    {
#line 6123
        .trainerName = _("Blank"),
#line 6124
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6125
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6127
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6129
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6128
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6130
    [DIFFICULTY_NORMAL][TRAINER_23C3170F] =
    {
#line 6131
        .trainerName = _("Blank"),
#line 6132
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6133
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6135
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6137
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6136
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6138
    [DIFFICULTY_NORMAL][TRAINER_23F50BC3] =
    {
#line 6139
        .trainerName = _("Blank"),
#line 6140
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6141
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6143
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6145
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6144
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6146
    [DIFFICULTY_NORMAL][TRAINER_2434A25C] =
    {
#line 6147
        .trainerName = _("Blank"),
#line 6148
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6149
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6151
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6153
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6152
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6154
    [DIFFICULTY_NORMAL][TRAINER_245235C9] =
    {
#line 6155
        .trainerName = _("Blank"),
#line 6156
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6157
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6159
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6161
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6160
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6162
    [DIFFICULTY_NORMAL][TRAINER_246CBBD5] =
    {
#line 6163
        .trainerName = _("Blank"),
#line 6164
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6165
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6167
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6169
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6168
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6170
    [DIFFICULTY_NORMAL][TRAINER_247FE019] =
    {
#line 6171
        .trainerName = _("Blank"),
#line 6172
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6175
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6177
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6176
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6178
    [DIFFICULTY_NORMAL][TRAINER_24AAFD0D] =
    {
#line 6179
        .trainerName = _("Blank"),
#line 6180
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6181
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6183
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6185
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6184
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6186
    [DIFFICULTY_NORMAL][TRAINER_24AC96DF] =
    {
#line 6187
        .trainerName = _("Blank"),
#line 6188
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6189
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6191
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6193
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6192
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6194
    [DIFFICULTY_NORMAL][TRAINER_2561CB61] =
    {
#line 6195
        .trainerName = _("Blank"),
#line 6196
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6197
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6199
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6201
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6200
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6202
    [DIFFICULTY_NORMAL][TRAINER_26268FB4] =
    {
#line 6203
        .trainerName = _("Blank"),
#line 6204
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6205
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6207
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6209
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6208
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6210
    [DIFFICULTY_NORMAL][TRAINER_265174A6] =
    {
#line 6211
        .trainerName = _("Blank"),
#line 6212
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6213
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6215
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6217
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6216
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6218
    [DIFFICULTY_NORMAL][TRAINER_272FA5B8] =
    {
#line 6219
        .trainerName = _("Blank"),
#line 6220
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6221
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6223
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6225
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6224
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6226
    [DIFFICULTY_NORMAL][TRAINER_27B23C10] =
    {
#line 6227
        .trainerName = _("Blank"),
#line 6228
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6229
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6231
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6233
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6232
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6234
    [DIFFICULTY_NORMAL][TRAINER_27CEF8F2] =
    {
#line 6235
        .trainerName = _("Blank"),
#line 6236
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6237
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6239
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6241
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6240
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6242
    [DIFFICULTY_NORMAL][TRAINER_27E6F69F] =
    {
#line 6243
        .trainerName = _("Blank"),
#line 6244
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6245
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6247
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6249
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6248
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6250
    [DIFFICULTY_NORMAL][TRAINER_28B294D2] =
    {
#line 6251
        .trainerName = _("Blank"),
#line 6252
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6253
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6255
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6257
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6256
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6258
    [DIFFICULTY_NORMAL][TRAINER_28E0625E] =
    {
#line 6259
        .trainerName = _("Blank"),
#line 6260
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6261
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6263
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6265
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6264
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6266
    [DIFFICULTY_NORMAL][TRAINER_292E386F] =
    {
#line 6267
        .trainerName = _("Blank"),
#line 6268
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6269
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6271
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6273
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6272
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6274
    [DIFFICULTY_NORMAL][TRAINER_29AE727B] =
    {
#line 6275
        .trainerName = _("Blank"),
#line 6276
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6277
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6279
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6281
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6280
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6282
    [DIFFICULTY_NORMAL][TRAINER_2A305E88] =
    {
#line 6283
        .trainerName = _("Blank"),
#line 6284
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6285
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6287
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6289
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6288
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6290
    [DIFFICULTY_NORMAL][TRAINER_2A3F43CA] =
    {
#line 6291
        .trainerName = _("Blank"),
#line 6292
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6293
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6295
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6297
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6296
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6298
    [DIFFICULTY_NORMAL][TRAINER_2A7BF9FF] =
    {
#line 6299
        .trainerName = _("Blank"),
#line 6300
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6301
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6303
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6305
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6304
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6306
    [DIFFICULTY_NORMAL][TRAINER_2A83B15E] =
    {
#line 6307
        .trainerName = _("Blank"),
#line 6308
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6309
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6311
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6313
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6312
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6314
    [DIFFICULTY_NORMAL][TRAINER_2AD73BF3] =
    {
#line 6315
        .trainerName = _("Blank"),
#line 6316
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6317
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6319
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6321
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6320
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6322
    [DIFFICULTY_NORMAL][TRAINER_2B163825] =
    {
#line 6323
        .trainerName = _("Blank"),
#line 6324
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6325
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6327
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6329
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6328
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6330
    [DIFFICULTY_NORMAL][TRAINER_2B249E40] =
    {
#line 6331
        .trainerName = _("Blank"),
#line 6332
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6333
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6335
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6337
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6336
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6338
    [DIFFICULTY_NORMAL][TRAINER_2BCA066C] =
    {
#line 6339
        .trainerName = _("Blank"),
#line 6340
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6341
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6343
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6345
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6344
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6346
    [DIFFICULTY_NORMAL][TRAINER_2C040422] =
    {
#line 6347
        .trainerName = _("Blank"),
#line 6348
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6349
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6351
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6353
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6352
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6354
    [DIFFICULTY_NORMAL][TRAINER_2C22CE48] =
    {
#line 6355
        .trainerName = _("Blank"),
#line 6356
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6357
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6359
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6361
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6360
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6362
    [DIFFICULTY_NORMAL][TRAINER_2C398893] =
    {
#line 6363
        .trainerName = _("Blank"),
#line 6364
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6365
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6367
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6369
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6368
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6370
    [DIFFICULTY_NORMAL][TRAINER_2C5FFA9F] =
    {
#line 6371
        .trainerName = _("Blank"),
#line 6372
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6373
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6375
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6377
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6376
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6378
    [DIFFICULTY_NORMAL][TRAINER_2D1A100A] =
    {
#line 6379
        .trainerName = _("Blank"),
#line 6380
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6381
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6383
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6385
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6384
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6386
    [DIFFICULTY_NORMAL][TRAINER_2D203158] =
    {
#line 6387
        .trainerName = _("Blank"),
#line 6388
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6389
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6391
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6393
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6392
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6394
    [DIFFICULTY_NORMAL][TRAINER_2D29DC23] =
    {
#line 6395
        .trainerName = _("Blank"),
#line 6396
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6397
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6402
    [DIFFICULTY_NORMAL][TRAINER_2D6DE246] =
    {
#line 6403
        .trainerName = _("Blank"),
#line 6404
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6405
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6410
    [DIFFICULTY_NORMAL][TRAINER_2D92F001] =
    {
#line 6411
        .trainerName = _("Blank"),
#line 6412
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6413
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6418
    [DIFFICULTY_NORMAL][TRAINER_2DC29B9E] =
    {
#line 6419
        .trainerName = _("Blank"),
#line 6420
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6421
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6426
    [DIFFICULTY_NORMAL][TRAINER_2E218A8E] =
    {
#line 6427
        .trainerName = _("Blank"),
#line 6428
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6429
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6434
    [DIFFICULTY_NORMAL][TRAINER_2E593FA9] =
    {
#line 6435
        .trainerName = _("Blank"),
#line 6436
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6437
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6442
    [DIFFICULTY_NORMAL][TRAINER_2EC49459] =
    {
#line 6443
        .trainerName = _("Blank"),
#line 6444
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6445
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6450
    [DIFFICULTY_NORMAL][TRAINER_2F0770D3] =
    {
#line 6451
        .trainerName = _("Blank"),
#line 6452
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6453
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6458
    [DIFFICULTY_NORMAL][TRAINER_2F09421D] =
    {
#line 6459
        .trainerName = _("Blank"),
#line 6460
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6461
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6466
    [DIFFICULTY_NORMAL][TRAINER_2FF79A0B] =
    {
#line 6467
        .trainerName = _("Blank"),
#line 6468
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6469
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6474
    [DIFFICULTY_NORMAL][TRAINER_3009CC76] =
    {
#line 6475
        .trainerName = _("Blank"),
#line 6476
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6477
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6482
    [DIFFICULTY_NORMAL][TRAINER_30522A9A] =
    {
#line 6483
        .trainerName = _("Blank"),
#line 6484
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6485
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6490
    [DIFFICULTY_NORMAL][TRAINER_30ACE135] =
    {
#line 6491
        .trainerName = _("Blank"),
#line 6492
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6493
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6498
    [DIFFICULTY_NORMAL][TRAINER_311B3EFC] =
    {
#line 6499
        .trainerName = _("Blank"),
#line 6500
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6501
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6506
    [DIFFICULTY_NORMAL][TRAINER_317B8932] =
    {
#line 6507
        .trainerName = _("Blank"),
#line 6508
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6509
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6514
    [DIFFICULTY_NORMAL][TRAINER_31D36FE6] =
    {
#line 6515
        .trainerName = _("Blank"),
#line 6516
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6517
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6522
    [DIFFICULTY_NORMAL][TRAINER_32C1F13D] =
    {
#line 6523
        .trainerName = _("Blank"),
#line 6524
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6525
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6530
    [DIFFICULTY_NORMAL][TRAINER_33AB4856] =
    {
#line 6531
        .trainerName = _("Blank"),
#line 6532
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6533
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6538
    [DIFFICULTY_NORMAL][TRAINER_3566F099] =
    {
#line 6539
        .trainerName = _("Blank"),
#line 6540
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6541
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6546
    [DIFFICULTY_NORMAL][TRAINER_35E0E027] =
    {
#line 6547
        .trainerName = _("Blank"),
#line 6548
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6549
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6554
    [DIFFICULTY_NORMAL][TRAINER_36662EEF] =
    {
#line 6555
        .trainerName = _("Blank"),
#line 6556
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6557
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6562
    [DIFFICULTY_NORMAL][TRAINER_3681E8DE] =
    {
#line 6563
        .trainerName = _("Blank"),
#line 6564
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6565
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6570
    [DIFFICULTY_NORMAL][TRAINER_3789DC6E] =
    {
#line 6571
        .trainerName = _("Blank"),
#line 6572
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6573
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6578
    [DIFFICULTY_NORMAL][TRAINER_37B9EFB7] =
    {
#line 6579
        .trainerName = _("Blank"),
#line 6580
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6581
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6586
    [DIFFICULTY_NORMAL][TRAINER_37EDB78E] =
    {
#line 6587
        .trainerName = _("Blank"),
#line 6588
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6589
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6594
    [DIFFICULTY_NORMAL][TRAINER_382E2AB3] =
    {
#line 6595
        .trainerName = _("Blank"),
#line 6596
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6597
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6602
    [DIFFICULTY_NORMAL][TRAINER_3842496B] =
    {
#line 6603
        .trainerName = _("Blank"),
#line 6604
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6605
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6610
    [DIFFICULTY_NORMAL][TRAINER_387351C1] =
    {
#line 6611
        .trainerName = _("Blank"),
#line 6612
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6613
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6618
    [DIFFICULTY_NORMAL][TRAINER_38A47BDB] =
    {
#line 6619
        .trainerName = _("Blank"),
#line 6620
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6621
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6626
    [DIFFICULTY_NORMAL][TRAINER_3924756E] =
    {
#line 6627
        .trainerName = _("Blank"),
#line 6628
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6634
    [DIFFICULTY_NORMAL][TRAINER_3947ACC3] =
    {
#line 6635
        .trainerName = _("Blank"),
#line 6636
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6637
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6642
    [DIFFICULTY_NORMAL][TRAINER_39AD4606] =
    {
#line 6643
        .trainerName = _("Blank"),
#line 6644
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6645
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6650
    [DIFFICULTY_NORMAL][TRAINER_39E0AE4F] =
    {
#line 6651
        .trainerName = _("Blank"),
#line 6652
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6653
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6658
    [DIFFICULTY_NORMAL][TRAINER_39E78D45] =
    {
#line 6659
        .trainerName = _("Blank"),
#line 6660
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6661
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6666
    [DIFFICULTY_NORMAL][TRAINER_3A11452B] =
    {
#line 6667
        .trainerName = _("Blank"),
#line 6668
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6669
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6674
    [DIFFICULTY_NORMAL][TRAINER_3A840205] =
    {
#line 6675
        .trainerName = _("Blank"),
#line 6676
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6677
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6682
    [DIFFICULTY_NORMAL][TRAINER_3AD97475] =
    {
#line 6683
        .trainerName = _("Blank"),
#line 6684
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6685
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6690
    [DIFFICULTY_NORMAL][TRAINER_3AEE4974] =
    {
#line 6691
        .trainerName = _("Blank"),
#line 6692
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6693
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6698
    [DIFFICULTY_NORMAL][TRAINER_3BAF0C60] =
    {
#line 6699
        .trainerName = _("Blank"),
#line 6700
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6701
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6706
    [DIFFICULTY_NORMAL][TRAINER_3BDED445] =
    {
#line 6707
        .trainerName = _("Blank"),
#line 6708
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6709
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6714
    [DIFFICULTY_NORMAL][TRAINER_3C621048] =
    {
#line 6715
        .trainerName = _("Blank"),
#line 6716
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6717
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6722
    [DIFFICULTY_NORMAL][TRAINER_3C74DAE2] =
    {
#line 6723
        .trainerName = _("Blank"),
#line 6724
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6725
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6730
    [DIFFICULTY_NORMAL][TRAINER_3C7AC359] =
    {
#line 6731
        .trainerName = _("Blank"),
#line 6732
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6733
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6738
    [DIFFICULTY_NORMAL][TRAINER_3CDE5F9E] =
    {
#line 6739
        .trainerName = _("Blank"),
#line 6740
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6741
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6746
    [DIFFICULTY_NORMAL][TRAINER_3CECE368] =
    {
#line 6747
        .trainerName = _("Blank"),
#line 6748
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6749
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6754
    [DIFFICULTY_NORMAL][TRAINER_3CFF3841] =
    {
#line 6755
        .trainerName = _("Blank"),
#line 6756
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6757
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6762
    [DIFFICULTY_NORMAL][TRAINER_3D502E2F] =
    {
#line 6763
        .trainerName = _("Blank"),
#line 6764
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6765
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6770
    [DIFFICULTY_NORMAL][TRAINER_3D7FDE57] =
    {
#line 6771
        .trainerName = _("Blank"),
#line 6772
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6773
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6778
    [DIFFICULTY_NORMAL][TRAINER_3DCD0BBC] =
    {
#line 6779
        .trainerName = _("Blank"),
#line 6780
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6781
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6786
    [DIFFICULTY_NORMAL][TRAINER_3E17924C] =
    {
#line 6787
        .trainerName = _("Blank"),
#line 6788
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6789
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6794
    [DIFFICULTY_NORMAL][TRAINER_3EB6FA04] =
    {
#line 6795
        .trainerName = _("Blank"),
#line 6796
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6797
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6802
    [DIFFICULTY_NORMAL][TRAINER_3EFCF1C8] =
    {
#line 6803
        .trainerName = _("Blank"),
#line 6804
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6805
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6810
    [DIFFICULTY_NORMAL][TRAINER_3F0BF52E] =
    {
#line 6811
        .trainerName = _("Blank"),
#line 6812
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6813
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6818
    [DIFFICULTY_NORMAL][TRAINER_4000C8A0] =
    {
#line 6819
        .trainerName = _("Blank"),
#line 6820
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6821
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6826
    [DIFFICULTY_NORMAL][TRAINER_403D932D] =
    {
#line 6827
        .trainerName = _("Blank"),
#line 6828
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6829
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6834
    [DIFFICULTY_NORMAL][TRAINER_408862C4] =
    {
#line 6835
        .trainerName = _("Blank"),
#line 6836
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6837
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6842
    [DIFFICULTY_NORMAL][TRAINER_419282AD] =
    {
#line 6843
        .trainerName = _("Blank"),
#line 6844
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6845
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6850
    [DIFFICULTY_NORMAL][TRAINER_419FCBAE] =
    {
#line 6851
        .trainerName = _("Blank"),
#line 6852
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6858
    [DIFFICULTY_NORMAL][TRAINER_41B8591B] =
    {
#line 6859
        .trainerName = _("Blank"),
#line 6860
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6861
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6866
    [DIFFICULTY_NORMAL][TRAINER_41DCF7BA] =
    {
#line 6867
        .trainerName = _("Blank"),
#line 6868
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6869
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6874
    [DIFFICULTY_NORMAL][TRAINER_4227B911] =
    {
#line 6875
        .trainerName = _("Blank"),
#line 6876
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6877
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6882
    [DIFFICULTY_NORMAL][TRAINER_4239B726] =
    {
#line 6883
        .trainerName = _("Blank"),
#line 6884
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6885
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6890
    [DIFFICULTY_NORMAL][TRAINER_42BC1D70] =
    {
#line 6891
        .trainerName = _("Blank"),
#line 6892
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6893
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6898
    [DIFFICULTY_NORMAL][TRAINER_42BE3E94] =
    {
#line 6899
        .trainerName = _("Blank"),
#line 6900
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6901
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6906
    [DIFFICULTY_NORMAL][TRAINER_42C68371] =
    {
#line 6907
        .trainerName = _("Blank"),
#line 6908
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6909
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6914
    [DIFFICULTY_NORMAL][TRAINER_432F34FA] =
    {
#line 6915
        .trainerName = _("Blank"),
#line 6916
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6917
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6922
    [DIFFICULTY_NORMAL][TRAINER_437E553A] =
    {
#line 6923
        .trainerName = _("Blank"),
#line 6924
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6925
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6930
    [DIFFICULTY_NORMAL][TRAINER_4394141C] =
    {
#line 6931
        .trainerName = _("Blank"),
#line 6932
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6933
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6938
    [DIFFICULTY_NORMAL][TRAINER_43B111AD] =
    {
#line 6939
        .trainerName = _("Blank"),
#line 6940
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6941
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6946
    [DIFFICULTY_NORMAL][TRAINER_43B30B5D] =
    {
#line 6947
        .trainerName = _("Blank"),
#line 6948
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6949
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6954
    [DIFFICULTY_NORMAL][TRAINER_43D6557C] =
    {
#line 6955
        .trainerName = _("Blank"),
#line 6956
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6957
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6962
    [DIFFICULTY_NORMAL][TRAINER_44251BF9] =
    {
#line 6963
        .trainerName = _("Blank"),
#line 6964
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6965
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6970
    [DIFFICULTY_NORMAL][TRAINER_44D28B98] =
    {
#line 6971
        .trainerName = _("Blank"),
#line 6972
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6973
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6978
    [DIFFICULTY_NORMAL][TRAINER_44E68738] =
    {
#line 6979
        .trainerName = _("Blank"),
#line 6980
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6981
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6986
    [DIFFICULTY_NORMAL][TRAINER_44F86666] =
    {
#line 6987
        .trainerName = _("Blank"),
#line 6988
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6989
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6994
    [DIFFICULTY_NORMAL][TRAINER_458C3B90] =
    {
#line 6995
        .trainerName = _("Blank"),
#line 6996
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7002
    [DIFFICULTY_NORMAL][TRAINER_45CBA787] =
    {
#line 7003
        .trainerName = _("Blank"),
#line 7004
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7005
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7010
    [DIFFICULTY_NORMAL][TRAINER_45E5EB22] =
    {
#line 7011
        .trainerName = _("Blank"),
#line 7012
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7013
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7018
    [DIFFICULTY_NORMAL][TRAINER_45ECBA80] =
    {
#line 7019
        .trainerName = _("Blank"),
#line 7020
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7021
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7026
    [DIFFICULTY_NORMAL][TRAINER_460AB144] =
    {
#line 7027
        .trainerName = _("Blank"),
#line 7028
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7029
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7034
    [DIFFICULTY_NORMAL][TRAINER_46169EA5] =
    {
#line 7035
        .trainerName = _("Blank"),
#line 7036
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7037
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7042
    [DIFFICULTY_NORMAL][TRAINER_464C4C44] =
    {
#line 7043
        .trainerName = _("Blank"),
#line 7044
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7045
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7050
    [DIFFICULTY_NORMAL][TRAINER_473EE9DE] =
    {
#line 7051
        .trainerName = _("Blank"),
#line 7052
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7053
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7058
    [DIFFICULTY_NORMAL][TRAINER_4787A98D] =
    {
#line 7059
        .trainerName = _("Blank"),
#line 7060
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7061
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7066
    [DIFFICULTY_NORMAL][TRAINER_479BBFEB] =
    {
#line 7067
        .trainerName = _("Blank"),
#line 7068
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7069
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7074
    [DIFFICULTY_NORMAL][TRAINER_47EACF7E] =
    {
#line 7075
        .trainerName = _("Blank"),
#line 7076
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7077
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7082
    [DIFFICULTY_NORMAL][TRAINER_4848801D] =
    {
#line 7083
        .trainerName = _("Blank"),
#line 7084
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7085
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7090
    [DIFFICULTY_NORMAL][TRAINER_487BEC6D] =
    {
#line 7091
        .trainerName = _("Blank"),
#line 7092
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7093
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7098
    [DIFFICULTY_NORMAL][TRAINER_492E0A66] =
    {
#line 7099
        .trainerName = _("Blank"),
#line 7100
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7101
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7106
    [DIFFICULTY_NORMAL][TRAINER_494ECB35] =
    {
#line 7107
        .trainerName = _("Blank"),
#line 7108
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7109
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7114
    [DIFFICULTY_NORMAL][TRAINER_494F5379] =
    {
#line 7115
        .trainerName = _("Blank"),
#line 7116
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7117
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7122
    [DIFFICULTY_NORMAL][TRAINER_49805D55] =
    {
#line 7123
        .trainerName = _("Blank"),
#line 7124
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7125
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7130
    [DIFFICULTY_NORMAL][TRAINER_49EA8A40] =
    {
#line 7131
        .trainerName = _("Blank"),
#line 7132
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7133
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7138
    [DIFFICULTY_NORMAL][TRAINER_4A323E4A] =
    {
#line 7139
        .trainerName = _("Blank"),
#line 7140
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7141
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7146
    [DIFFICULTY_NORMAL][TRAINER_4A3EB696] =
    {
#line 7147
        .trainerName = _("Blank"),
#line 7148
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7149
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7154
    [DIFFICULTY_NORMAL][TRAINER_4ABDB43A] =
    {
#line 7155
        .trainerName = _("Blank"),
#line 7156
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7157
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7162
    [DIFFICULTY_NORMAL][TRAINER_4AD6DB47] =
    {
#line 7163
        .trainerName = _("Blank"),
#line 7164
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7165
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7170
    [DIFFICULTY_NORMAL][TRAINER_4AF51B8A] =
    {
#line 7171
        .trainerName = _("Blank"),
#line 7172
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7178
    [DIFFICULTY_NORMAL][TRAINER_4B2BC403] =
    {
#line 7179
        .trainerName = _("Blank"),
#line 7180
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7181
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7186
    [DIFFICULTY_NORMAL][TRAINER_4B3B0356] =
    {
#line 7187
        .trainerName = _("Blank"),
#line 7188
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7189
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7194
    [DIFFICULTY_NORMAL][TRAINER_4B431569] =
    {
#line 7195
        .trainerName = _("Blank"),
#line 7196
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7197
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7202
    [DIFFICULTY_NORMAL][TRAINER_4B5B4954] =
    {
#line 7203
        .trainerName = _("Blank"),
#line 7204
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7205
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7210
    [DIFFICULTY_NORMAL][TRAINER_4C2D23EC] =
    {
#line 7211
        .trainerName = _("Blank"),
#line 7212
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7213
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7218
    [DIFFICULTY_NORMAL][TRAINER_4CE97031] =
    {
#line 7219
        .trainerName = _("Blank"),
#line 7220
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7221
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7226
    [DIFFICULTY_NORMAL][TRAINER_4CF43F23] =
    {
#line 7227
        .trainerName = _("Blank"),
#line 7228
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7229
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7234
    [DIFFICULTY_NORMAL][TRAINER_4D8F9D46] =
    {
#line 7235
        .trainerName = _("Blank"),
#line 7236
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7237
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7242
    [DIFFICULTY_NORMAL][TRAINER_4D98F6C4] =
    {
#line 7243
        .trainerName = _("Blank"),
#line 7244
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7245
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7250
    [DIFFICULTY_NORMAL][TRAINER_4E072263] =
    {
#line 7251
        .trainerName = _("Blank"),
#line 7252
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7253
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7258
    [DIFFICULTY_NORMAL][TRAINER_4E0C1EFE] =
    {
#line 7259
        .trainerName = _("Blank"),
#line 7260
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7261
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7266
    [DIFFICULTY_NORMAL][TRAINER_4E226A6E] =
    {
#line 7267
        .trainerName = _("Blank"),
#line 7268
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7269
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7274
    [DIFFICULTY_NORMAL][TRAINER_4E5AAFAE] =
    {
#line 7275
        .trainerName = _("Blank"),
#line 7276
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7277
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7282
    [DIFFICULTY_NORMAL][TRAINER_4F10DCA9] =
    {
#line 7283
        .trainerName = _("Blank"),
#line 7284
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7285
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7290
    [DIFFICULTY_NORMAL][TRAINER_50AE78E5] =
    {
#line 7291
        .trainerName = _("Blank"),
#line 7292
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7293
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7298
    [DIFFICULTY_NORMAL][TRAINER_513A43EE] =
    {
#line 7299
        .trainerName = _("Blank"),
#line 7300
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7301
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7306
    [DIFFICULTY_NORMAL][TRAINER_51A32DCA] =
    {
#line 7307
        .trainerName = _("Blank"),
#line 7308
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7309
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7314
    [DIFFICULTY_NORMAL][TRAINER_51F6B834] =
    {
#line 7315
        .trainerName = _("Blank"),
#line 7316
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7317
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7322
    [DIFFICULTY_NORMAL][TRAINER_5209EDF0] =
    {
#line 7323
        .trainerName = _("Blank"),
#line 7324
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7325
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7330
    [DIFFICULTY_NORMAL][TRAINER_52CFC159] =
    {
#line 7331
        .trainerName = _("Blank"),
#line 7332
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7333
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7338
    [DIFFICULTY_NORMAL][TRAINER_538D052D] =
    {
#line 7339
        .trainerName = _("Blank"),
#line 7340
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7341
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7346
    [DIFFICULTY_NORMAL][TRAINER_53A1A61A] =
    {
#line 7347
        .trainerName = _("Blank"),
#line 7348
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7349
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7354
    [DIFFICULTY_NORMAL][TRAINER_53B06C7B] =
    {
#line 7355
        .trainerName = _("Blank"),
#line 7356
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7357
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7362
    [DIFFICULTY_NORMAL][TRAINER_54110A38] =
    {
#line 7363
        .trainerName = _("Blank"),
#line 7364
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7365
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7370
    [DIFFICULTY_NORMAL][TRAINER_549792BA] =
    {
#line 7371
        .trainerName = _("Blank"),
#line 7372
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7373
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7378
    [DIFFICULTY_NORMAL][TRAINER_54BAC2DA] =
    {
#line 7379
        .trainerName = _("Blank"),
#line 7380
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7381
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7386
    [DIFFICULTY_NORMAL][TRAINER_54F170BE] =
    {
#line 7387
        .trainerName = _("Blank"),
#line 7388
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7389
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7394
    [DIFFICULTY_NORMAL][TRAINER_558F80F9] =
    {
#line 7395
        .trainerName = _("Blank"),
#line 7396
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7397
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7402
    [DIFFICULTY_NORMAL][TRAINER_55CA00A1] =
    {
#line 7403
        .trainerName = _("Blank"),
#line 7404
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7405
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7410
    [DIFFICULTY_NORMAL][TRAINER_55D0BEAA] =
    {
#line 7411
        .trainerName = _("Blank"),
#line 7412
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7413
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7418
    [DIFFICULTY_NORMAL][TRAINER_55D90FA8] =
    {
#line 7419
        .trainerName = _("Blank"),
#line 7420
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7421
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7426
    [DIFFICULTY_NORMAL][TRAINER_55EBF949] =
    {
#line 7427
        .trainerName = _("Blank"),
#line 7428
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7429
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7434
    [DIFFICULTY_NORMAL][TRAINER_565DE3C4] =
    {
#line 7435
        .trainerName = _("Blank"),
#line 7436
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7437
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7442
    [DIFFICULTY_NORMAL][TRAINER_56775C71] =
    {
#line 7443
        .trainerName = _("Blank"),
#line 7444
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7445
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7450
    [DIFFICULTY_NORMAL][TRAINER_56C1FE08] =
    {
#line 7451
        .trainerName = _("Blank"),
#line 7452
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7453
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7458
    [DIFFICULTY_NORMAL][TRAINER_56E6EFAA] =
    {
#line 7459
        .trainerName = _("Blank"),
#line 7460
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7461
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7466
    [DIFFICULTY_NORMAL][TRAINER_57E254F5] =
    {
#line 7467
        .trainerName = _("Blank"),
#line 7468
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7469
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7474
    [DIFFICULTY_NORMAL][TRAINER_57E7E83A] =
    {
#line 7475
        .trainerName = _("Blank"),
#line 7476
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7477
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7482
    [DIFFICULTY_NORMAL][TRAINER_5819E497] =
    {
#line 7483
        .trainerName = _("Blank"),
#line 7484
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7485
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7490
    [DIFFICULTY_NORMAL][TRAINER_58A6A51E] =
    {
#line 7491
        .trainerName = _("Blank"),
#line 7492
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7493
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7498
    [DIFFICULTY_NORMAL][TRAINER_58BEBECC] =
    {
#line 7499
        .trainerName = _("Blank"),
#line 7500
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7501
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7506
    [DIFFICULTY_NORMAL][TRAINER_58F43966] =
    {
#line 7507
        .trainerName = _("Blank"),
#line 7508
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7509
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7514
    [DIFFICULTY_NORMAL][TRAINER_59592DE4] =
    {
#line 7515
        .trainerName = _("Blank"),
#line 7516
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7517
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7522
    [DIFFICULTY_NORMAL][TRAINER_598585C1] =
    {
#line 7523
        .trainerName = _("Blank"),
#line 7524
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7525
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7530
    [DIFFICULTY_NORMAL][TRAINER_59981F0D] =
    {
#line 7531
        .trainerName = _("Blank"),
#line 7532
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7533
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7538
    [DIFFICULTY_NORMAL][TRAINER_59E335AB] =
    {
#line 7539
        .trainerName = _("Blank"),
#line 7540
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7541
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7546
    [DIFFICULTY_NORMAL][TRAINER_59FFFCED] =
    {
#line 7547
        .trainerName = _("Blank"),
#line 7548
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7549
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7554
    [DIFFICULTY_NORMAL][TRAINER_5ABF4FA4] =
    {
#line 7555
        .trainerName = _("Blank"),
#line 7556
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7557
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7562
    [DIFFICULTY_NORMAL][TRAINER_5AC61FE5] =
    {
#line 7563
        .trainerName = _("Blank"),
#line 7564
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7565
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7570
    [DIFFICULTY_NORMAL][TRAINER_5AD29FF8] =
    {
#line 7571
        .trainerName = _("Blank"),
#line 7572
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7573
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7578
    [DIFFICULTY_NORMAL][TRAINER_5AD4C218] =
    {
#line 7579
        .trainerName = _("Blank"),
#line 7580
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7581
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7586
    [DIFFICULTY_NORMAL][TRAINER_5B5F6AE8] =
    {
#line 7587
        .trainerName = _("Blank"),
#line 7588
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7589
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7594
    [DIFFICULTY_NORMAL][TRAINER_5B6304FF] =
    {
#line 7595
        .trainerName = _("Blank"),
#line 7596
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7597
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7602
    [DIFFICULTY_NORMAL][TRAINER_5B75B30F] =
    {
#line 7603
        .trainerName = _("Blank"),
#line 7604
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7605
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7610
    [DIFFICULTY_NORMAL][TRAINER_5B983361] =
    {
#line 7611
        .trainerName = _("Blank"),
#line 7612
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7613
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7618
    [DIFFICULTY_NORMAL][TRAINER_5BD8EA81] =
    {
#line 7619
        .trainerName = _("Blank"),
#line 7620
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7621
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7626
    [DIFFICULTY_NORMAL][TRAINER_5C315841] =
    {
#line 7627
        .trainerName = _("Blank"),
#line 7628
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7634
    [DIFFICULTY_NORMAL][TRAINER_5C573C11] =
    {
#line 7635
        .trainerName = _("Blank"),
#line 7636
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7637
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7642
    [DIFFICULTY_NORMAL][TRAINER_5CAB03DD] =
    {
#line 7643
        .trainerName = _("Blank"),
#line 7644
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7645
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7650
    [DIFFICULTY_NORMAL][TRAINER_5CBDB116] =
    {
#line 7651
        .trainerName = _("Blank"),
#line 7652
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7653
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7658
    [DIFFICULTY_NORMAL][TRAINER_5D0C4B8F] =
    {
#line 7659
        .trainerName = _("Blank"),
#line 7660
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7661
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7666
    [DIFFICULTY_NORMAL][TRAINER_5D2CCD41] =
    {
#line 7667
        .trainerName = _("Blank"),
#line 7668
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7669
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7674
    [DIFFICULTY_NORMAL][TRAINER_5D5F491E] =
    {
#line 7675
        .trainerName = _("Blank"),
#line 7676
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7677
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7682
    [DIFFICULTY_NORMAL][TRAINER_5D81D8F9] =
    {
#line 7683
        .trainerName = _("Blank"),
#line 7684
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7685
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7690
    [DIFFICULTY_NORMAL][TRAINER_5D86E702] =
    {
#line 7691
        .trainerName = _("Blank"),
#line 7692
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7693
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7698
    [DIFFICULTY_NORMAL][TRAINER_5D9ABC58] =
    {
#line 7699
        .trainerName = _("Blank"),
#line 7700
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7701
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7706
    [DIFFICULTY_NORMAL][TRAINER_5DA9F2AE] =
    {
#line 7707
        .trainerName = _("Blank"),
#line 7708
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7709
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7714
    [DIFFICULTY_NORMAL][TRAINER_5E13316C] =
    {
#line 7715
        .trainerName = _("Blank"),
#line 7716
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7717
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7722
    [DIFFICULTY_NORMAL][TRAINER_5EA7A638] =
    {
#line 7723
        .trainerName = _("Blank"),
#line 7724
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7725
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7730
    [DIFFICULTY_NORMAL][TRAINER_5EB4C98F] =
    {
#line 7731
        .trainerName = _("Blank"),
#line 7732
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7733
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7738
    [DIFFICULTY_NORMAL][TRAINER_5EF71DA1] =
    {
#line 7739
        .trainerName = _("Blank"),
#line 7740
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7741
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7746
    [DIFFICULTY_NORMAL][TRAINER_5F858802] =
    {
#line 7747
        .trainerName = _("Blank"),
#line 7748
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7749
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7754
    [DIFFICULTY_NORMAL][TRAINER_5FA4C80F] =
    {
#line 7755
        .trainerName = _("Blank"),
#line 7756
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7757
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7762
    [DIFFICULTY_NORMAL][TRAINER_5FD48FB2] =
    {
#line 7763
        .trainerName = _("Blank"),
#line 7764
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7765
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7770
    [DIFFICULTY_NORMAL][TRAINER_5FF1DEC5] =
    {
#line 7771
        .trainerName = _("Blank"),
#line 7772
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7773
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7778
    [DIFFICULTY_NORMAL][TRAINER_6016A968] =
    {
#line 7779
        .trainerName = _("Blank"),
#line 7780
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7781
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7786
    [DIFFICULTY_NORMAL][TRAINER_6058C03B] =
    {
#line 7787
        .trainerName = _("Blank"),
#line 7788
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7789
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7794
    [DIFFICULTY_NORMAL][TRAINER_60C3BD24] =
    {
#line 7795
        .trainerName = _("Blank"),
#line 7796
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7797
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7802
    [DIFFICULTY_NORMAL][TRAINER_60C56554] =
    {
#line 7803
        .trainerName = _("Blank"),
#line 7804
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7805
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7810
    [DIFFICULTY_NORMAL][TRAINER_60D66B86] =
    {
#line 7811
        .trainerName = _("Blank"),
#line 7812
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7813
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7818
    [DIFFICULTY_NORMAL][TRAINER_6102A0FC] =
    {
#line 7819
        .trainerName = _("Blank"),
#line 7820
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7821
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7826
    [DIFFICULTY_NORMAL][TRAINER_61E76999] =
    {
#line 7827
        .trainerName = _("Blank"),
#line 7828
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7829
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7834
    [DIFFICULTY_NORMAL][TRAINER_626AECE8] =
    {
#line 7835
        .trainerName = _("Blank"),
#line 7836
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7837
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7842
    [DIFFICULTY_NORMAL][TRAINER_62851FFB] =
    {
#line 7843
        .trainerName = _("Blank"),
#line 7844
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7845
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7850
    [DIFFICULTY_NORMAL][TRAINER_62C33409] =
    {
#line 7851
        .trainerName = _("Blank"),
#line 7852
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7858
    [DIFFICULTY_NORMAL][TRAINER_62D0F875] =
    {
#line 7859
        .trainerName = _("Blank"),
#line 7860
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7861
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7866
    [DIFFICULTY_NORMAL][TRAINER_63409A54] =
    {
#line 7867
        .trainerName = _("Blank"),
#line 7868
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7869
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7874
    [DIFFICULTY_NORMAL][TRAINER_6397B964] =
    {
#line 7875
        .trainerName = _("Blank"),
#line 7876
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7877
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7882
    [DIFFICULTY_NORMAL][TRAINER_63DB05B6] =
    {
#line 7883
        .trainerName = _("Blank"),
#line 7884
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7885
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7890
    [DIFFICULTY_NORMAL][TRAINER_63DC02C9] =
    {
#line 7891
        .trainerName = _("Blank"),
#line 7892
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7893
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7898
    [DIFFICULTY_NORMAL][TRAINER_6439D44C] =
    {
#line 7899
        .trainerName = _("Blank"),
#line 7900
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7901
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7906
    [DIFFICULTY_NORMAL][TRAINER_64E30596] =
    {
#line 7907
        .trainerName = _("Blank"),
#line 7908
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7909
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7914
    [DIFFICULTY_NORMAL][TRAINER_6566F645] =
    {
#line 7915
        .trainerName = _("Blank"),
#line 7916
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7917
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7922
    [DIFFICULTY_NORMAL][TRAINER_656A39C8] =
    {
#line 7923
        .trainerName = _("Blank"),
#line 7924
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7925
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7930
    [DIFFICULTY_NORMAL][TRAINER_656EC067] =
    {
#line 7931
        .trainerName = _("Blank"),
#line 7932
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7933
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7938
    [DIFFICULTY_NORMAL][TRAINER_65CE4F87] =
    {
#line 7939
        .trainerName = _("Blank"),
#line 7940
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7941
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7946
    [DIFFICULTY_NORMAL][TRAINER_662EBAAA] =
    {
#line 7947
        .trainerName = _("Blank"),
#line 7948
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7949
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7954
    [DIFFICULTY_NORMAL][TRAINER_66531C74] =
    {
#line 7955
        .trainerName = _("Blank"),
#line 7956
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7957
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7962
    [DIFFICULTY_NORMAL][TRAINER_66B16F22] =
    {
#line 7963
        .trainerName = _("Blank"),
#line 7964
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7965
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7970
    [DIFFICULTY_NORMAL][TRAINER_66D26AEC] =
    {
#line 7971
        .trainerName = _("Blank"),
#line 7972
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7973
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7978
    [DIFFICULTY_NORMAL][TRAINER_675DA518] =
    {
#line 7979
        .trainerName = _("Blank"),
#line 7980
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7981
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7986
    [DIFFICULTY_NORMAL][TRAINER_677A22D7] =
    {
#line 7987
        .trainerName = _("Blank"),
#line 7988
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7989
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7994
    [DIFFICULTY_NORMAL][TRAINER_6792B394] =
    {
#line 7995
        .trainerName = _("Blank"),
#line 7996
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8002
    [DIFFICULTY_NORMAL][TRAINER_683A2305] =
    {
#line 8003
        .trainerName = _("Blank"),
#line 8004
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8005
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8010
    [DIFFICULTY_NORMAL][TRAINER_692DD7CF] =
    {
#line 8011
        .trainerName = _("Blank"),
#line 8012
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8013
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8018
    [DIFFICULTY_NORMAL][TRAINER_698BB117] =
    {
#line 8019
        .trainerName = _("Blank"),
#line 8020
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8021
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8026
    [DIFFICULTY_NORMAL][TRAINER_69EE8132] =
    {
#line 8027
        .trainerName = _("Blank"),
#line 8028
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8029
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8034
    [DIFFICULTY_NORMAL][TRAINER_6A35EE35] =
    {
#line 8035
        .trainerName = _("Blank"),
#line 8036
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8037
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8042
    [DIFFICULTY_NORMAL][TRAINER_6A3930E6] =
    {
#line 8043
        .trainerName = _("Blank"),
#line 8044
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8045
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8050
    [DIFFICULTY_NORMAL][TRAINER_6A48F28F] =
    {
#line 8051
        .trainerName = _("Blank"),
#line 8052
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8053
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8058
    [DIFFICULTY_NORMAL][TRAINER_6A8EEC78] =
    {
#line 8059
        .trainerName = _("Blank"),
#line 8060
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8061
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8066
    [DIFFICULTY_NORMAL][TRAINER_6AABC7EA] =
    {
#line 8067
        .trainerName = _("Blank"),
#line 8068
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8069
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8074
    [DIFFICULTY_NORMAL][TRAINER_6ABE3EC1] =
    {
#line 8075
        .trainerName = _("Blank"),
#line 8076
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8077
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8082
    [DIFFICULTY_NORMAL][TRAINER_6B14C259] =
    {
#line 8083
        .trainerName = _("Blank"),
#line 8084
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8085
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8090
    [DIFFICULTY_NORMAL][TRAINER_6BEEE6BE] =
    {
#line 8091
        .trainerName = _("Blank"),
#line 8092
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8093
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8098
    [DIFFICULTY_NORMAL][TRAINER_6C7736F9] =
    {
#line 8099
        .trainerName = _("Blank"),
#line 8100
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8101
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8106
    [DIFFICULTY_NORMAL][TRAINER_6CC913A2] =
    {
#line 8107
        .trainerName = _("Blank"),
#line 8108
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8109
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8114
    [DIFFICULTY_NORMAL][TRAINER_6D45549A] =
    {
#line 8115
        .trainerName = _("Blank"),
#line 8116
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8117
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8122
    [DIFFICULTY_NORMAL][TRAINER_6E1E82B2] =
    {
#line 8123
        .trainerName = _("Blank"),
#line 8124
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8125
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8130
    [DIFFICULTY_NORMAL][TRAINER_6E663040] =
    {
#line 8131
        .trainerName = _("Blank"),
#line 8132
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8133
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8138
    [DIFFICULTY_NORMAL][TRAINER_6ED2C120] =
    {
#line 8139
        .trainerName = _("Blank"),
#line 8140
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8141
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8146
    [DIFFICULTY_NORMAL][TRAINER_6F5C8078] =
    {
#line 8147
        .trainerName = _("Blank"),
#line 8148
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8149
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8154
    [DIFFICULTY_NORMAL][TRAINER_6F5E9CF9] =
    {
#line 8155
        .trainerName = _("Blank"),
#line 8156
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8157
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8162
    [DIFFICULTY_NORMAL][TRAINER_6FC24896] =
    {
#line 8163
        .trainerName = _("Blank"),
#line 8164
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8165
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8170
    [DIFFICULTY_NORMAL][TRAINER_6FF3213D] =
    {
#line 8171
        .trainerName = _("Blank"),
#line 8172
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8178
    [DIFFICULTY_NORMAL][TRAINER_701AC24E] =
    {
#line 8179
        .trainerName = _("Blank"),
#line 8180
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8181
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8186
    [DIFFICULTY_NORMAL][TRAINER_703B73C4] =
    {
#line 8187
        .trainerName = _("Blank"),
#line 8188
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8189
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8194
    [DIFFICULTY_NORMAL][TRAINER_70C712D3] =
    {
#line 8195
        .trainerName = _("Blank"),
#line 8196
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8197
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8202
    [DIFFICULTY_NORMAL][TRAINER_70EAAAF5] =
    {
#line 8203
        .trainerName = _("Blank"),
#line 8204
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8205
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8210
    [DIFFICULTY_NORMAL][TRAINER_70F1A62B] =
    {
#line 8211
        .trainerName = _("Blank"),
#line 8212
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8213
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8218
    [DIFFICULTY_NORMAL][TRAINER_7169C897] =
    {
#line 8219
        .trainerName = _("Blank"),
#line 8220
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8221
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8226
    [DIFFICULTY_NORMAL][TRAINER_7178DF27] =
    {
#line 8227
        .trainerName = _("Blank"),
#line 8228
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8229
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8234
    [DIFFICULTY_NORMAL][TRAINER_7190E405] =
    {
#line 8235
        .trainerName = _("Blank"),
#line 8236
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8237
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8242
    [DIFFICULTY_NORMAL][TRAINER_71CE545E] =
    {
#line 8243
        .trainerName = _("Blank"),
#line 8244
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8245
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8250
    [DIFFICULTY_NORMAL][TRAINER_7249425F] =
    {
#line 8251
        .trainerName = _("Blank"),
#line 8252
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8253
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8258
    [DIFFICULTY_NORMAL][TRAINER_72641C9D] =
    {
#line 8259
        .trainerName = _("Blank"),
#line 8260
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8261
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8266
    [DIFFICULTY_NORMAL][TRAINER_729F2BBB] =
    {
#line 8267
        .trainerName = _("Blank"),
#line 8268
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8269
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8274
    [DIFFICULTY_NORMAL][TRAINER_72F25B41] =
    {
#line 8275
        .trainerName = _("Blank"),
#line 8276
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8277
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8282
    [DIFFICULTY_NORMAL][TRAINER_732D4997] =
    {
#line 8283
        .trainerName = _("Blank"),
#line 8284
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8285
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8290
    [DIFFICULTY_NORMAL][TRAINER_73A561CC] =
    {
#line 8291
        .trainerName = _("Blank"),
#line 8292
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8293
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8298
    [DIFFICULTY_NORMAL][TRAINER_7420DB0C] =
    {
#line 8299
        .trainerName = _("Blank"),
#line 8300
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8301
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8306
    [DIFFICULTY_NORMAL][TRAINER_7435DE7C] =
    {
#line 8307
        .trainerName = _("Blank"),
#line 8308
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8309
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8314
    [DIFFICULTY_NORMAL][TRAINER_75A2A667] =
    {
#line 8315
        .trainerName = _("Blank"),
#line 8316
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8317
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8322
    [DIFFICULTY_NORMAL][TRAINER_75D602F2] =
    {
#line 8323
        .trainerName = _("Blank"),
#line 8324
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8325
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8330
    [DIFFICULTY_NORMAL][TRAINER_77DDBBAF] =
    {
#line 8331
        .trainerName = _("Blank"),
#line 8332
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8333
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8338
    [DIFFICULTY_NORMAL][TRAINER_783AB388] =
    {
#line 8339
        .trainerName = _("Blank"),
#line 8340
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8341
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8346
    [DIFFICULTY_NORMAL][TRAINER_78564BE5] =
    {
#line 8347
        .trainerName = _("Blank"),
#line 8348
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8349
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8354
    [DIFFICULTY_NORMAL][TRAINER_7885ECAF] =
    {
#line 8355
        .trainerName = _("Blank"),
#line 8356
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8357
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8362
    [DIFFICULTY_NORMAL][TRAINER_78B73516] =
    {
#line 8363
        .trainerName = _("Blank"),
#line 8364
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8365
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8370
    [DIFFICULTY_NORMAL][TRAINER_78BD858D] =
    {
#line 8371
        .trainerName = _("Blank"),
#line 8372
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8373
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8378
    [DIFFICULTY_NORMAL][TRAINER_7933DA6C] =
    {
#line 8379
        .trainerName = _("Blank"),
#line 8380
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8381
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8386
    [DIFFICULTY_NORMAL][TRAINER_793992D8] =
    {
#line 8387
        .trainerName = _("Blank"),
#line 8388
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8389
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8394
    [DIFFICULTY_NORMAL][TRAINER_797E296B] =
    {
#line 8395
        .trainerName = _("Blank"),
#line 8396
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8397
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8402
    [DIFFICULTY_NORMAL][TRAINER_79EF1DEB] =
    {
#line 8403
        .trainerName = _("Blank"),
#line 8404
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8405
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8410
    [DIFFICULTY_NORMAL][TRAINER_7A03677D] =
    {
#line 8411
        .trainerName = _("Blank"),
#line 8412
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8413
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8418
    [DIFFICULTY_NORMAL][TRAINER_7A0C086F] =
    {
#line 8419
        .trainerName = _("Blank"),
#line 8420
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8421
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8426
    [DIFFICULTY_NORMAL][TRAINER_7A89C403] =
    {
#line 8427
        .trainerName = _("Blank"),
#line 8428
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8429
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8434
    [DIFFICULTY_NORMAL][TRAINER_7A8D30C6] =
    {
#line 8435
        .trainerName = _("Blank"),
#line 8436
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8437
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8442
    [DIFFICULTY_NORMAL][TRAINER_7ABC77C1] =
    {
#line 8443
        .trainerName = _("Blank"),
#line 8444
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8445
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8450
    [DIFFICULTY_NORMAL][TRAINER_7B5DF36F] =
    {
#line 8451
        .trainerName = _("Blank"),
#line 8452
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8453
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8458
    [DIFFICULTY_NORMAL][TRAINER_7C3BD57C] =
    {
#line 8459
        .trainerName = _("Blank"),
#line 8460
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8461
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8466
    [DIFFICULTY_NORMAL][TRAINER_7C4240E1] =
    {
#line 8467
        .trainerName = _("Blank"),
#line 8468
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8469
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8474
    [DIFFICULTY_NORMAL][TRAINER_7C5056CA] =
    {
#line 8475
        .trainerName = _("Blank"),
#line 8476
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8477
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8482
    [DIFFICULTY_NORMAL][TRAINER_7C8BD62F] =
    {
#line 8483
        .trainerName = _("Blank"),
#line 8484
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8485
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8490
    [DIFFICULTY_NORMAL][TRAINER_7C9308EF] =
    {
#line 8491
        .trainerName = _("Blank"),
#line 8492
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8493
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8498
    [DIFFICULTY_NORMAL][TRAINER_7CAF6877] =
    {
#line 8499
        .trainerName = _("Blank"),
#line 8500
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8501
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8506
    [DIFFICULTY_NORMAL][TRAINER_7CBB25EB] =
    {
#line 8507
        .trainerName = _("Blank"),
#line 8508
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8509
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8514
    [DIFFICULTY_NORMAL][TRAINER_7CD1AAE1] =
    {
#line 8515
        .trainerName = _("Blank"),
#line 8516
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8517
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8522
    [DIFFICULTY_NORMAL][TRAINER_7D0F1751] =
    {
#line 8523
        .trainerName = _("Blank"),
#line 8524
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8525
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8530
    [DIFFICULTY_NORMAL][TRAINER_7D28CB20] =
    {
#line 8531
        .trainerName = _("Blank"),
#line 8532
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8533
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8538
    [DIFFICULTY_NORMAL][TRAINER_7D536E72] =
    {
#line 8539
        .trainerName = _("Blank"),
#line 8540
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8541
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8546
    [DIFFICULTY_NORMAL][TRAINER_7DC358C0] =
    {
#line 8547
        .trainerName = _("Blank"),
#line 8548
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8549
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8554
    [DIFFICULTY_NORMAL][TRAINER_7DEC9A40] =
    {
#line 8555
        .trainerName = _("Blank"),
#line 8556
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8557
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8562
    [DIFFICULTY_NORMAL][TRAINER_7E2F7EB8] =
    {
#line 8563
        .trainerName = _("Blank"),
#line 8564
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8565
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8570
    [DIFFICULTY_NORMAL][TRAINER_7E7CD9D3] =
    {
#line 8571
        .trainerName = _("Blank"),
#line 8572
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8573
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8578
    [DIFFICULTY_NORMAL][TRAINER_7E8CCD84] =
    {
#line 8579
        .trainerName = _("Blank"),
#line 8580
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8581
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8586
    [DIFFICULTY_NORMAL][TRAINER_8010F97E] =
    {
#line 8587
        .trainerName = _("Blank"),
#line 8588
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8589
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8594
    [DIFFICULTY_NORMAL][TRAINER_805C25F0] =
    {
#line 8595
        .trainerName = _("Blank"),
#line 8596
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8597
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8602
    [DIFFICULTY_NORMAL][TRAINER_80941A21] =
    {
#line 8603
        .trainerName = _("Blank"),
#line 8604
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8605
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8610
    [DIFFICULTY_NORMAL][TRAINER_80AAA333] =
    {
#line 8611
        .trainerName = _("Blank"),
#line 8612
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8613
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8618
    [DIFFICULTY_NORMAL][TRAINER_810A3F32] =
    {
#line 8619
        .trainerName = _("Blank"),
#line 8620
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8621
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8626
    [DIFFICULTY_NORMAL][TRAINER_811C7730] =
    {
#line 8627
        .trainerName = _("Blank"),
#line 8628
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8634
    [DIFFICULTY_NORMAL][TRAINER_814D0113] =
    {
#line 8635
        .trainerName = _("Blank"),
#line 8636
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8637
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8642
    [DIFFICULTY_NORMAL][TRAINER_822DC7A8] =
    {
#line 8643
        .trainerName = _("Blank"),
#line 8644
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8645
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8650
    [DIFFICULTY_NORMAL][TRAINER_827A5D21] =
    {
#line 8651
        .trainerName = _("Blank"),
#line 8652
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8653
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8658
    [DIFFICULTY_NORMAL][TRAINER_82A19B69] =
    {
#line 8659
        .trainerName = _("Blank"),
#line 8660
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8661
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8666
    [DIFFICULTY_NORMAL][TRAINER_83008F9D] =
    {
#line 8667
        .trainerName = _("Blank"),
#line 8668
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8669
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8674
    [DIFFICULTY_NORMAL][TRAINER_831DE561] =
    {
#line 8675
        .trainerName = _("Blank"),
#line 8676
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8677
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8682
    [DIFFICULTY_NORMAL][TRAINER_8327758B] =
    {
#line 8683
        .trainerName = _("Blank"),
#line 8684
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8685
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8690
    [DIFFICULTY_NORMAL][TRAINER_834B75E7] =
    {
#line 8691
        .trainerName = _("Blank"),
#line 8692
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8693
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8698
    [DIFFICULTY_NORMAL][TRAINER_8365EA32] =
    {
#line 8699
        .trainerName = _("Blank"),
#line 8700
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8701
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8706
    [DIFFICULTY_NORMAL][TRAINER_83A26233] =
    {
#line 8707
        .trainerName = _("Blank"),
#line 8708
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8709
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8714
    [DIFFICULTY_NORMAL][TRAINER_83B9A038] =
    {
#line 8715
        .trainerName = _("Blank"),
#line 8716
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8717
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8722
    [DIFFICULTY_NORMAL][TRAINER_840416CD] =
    {
#line 8723
        .trainerName = _("Blank"),
#line 8724
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8725
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8730
    [DIFFICULTY_NORMAL][TRAINER_843DFC91] =
    {
#line 8731
        .trainerName = _("Blank"),
#line 8732
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8733
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8738
    [DIFFICULTY_NORMAL][TRAINER_857ACD94] =
    {
#line 8739
        .trainerName = _("Blank"),
#line 8740
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8741
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8746
    [DIFFICULTY_NORMAL][TRAINER_8580525E] =
    {
#line 8747
        .trainerName = _("Blank"),
#line 8748
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8749
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8754
    [DIFFICULTY_NORMAL][TRAINER_866AE208] =
    {
#line 8755
        .trainerName = _("Blank"),
#line 8756
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8757
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8762
    [DIFFICULTY_NORMAL][TRAINER_8677EFB3] =
    {
#line 8763
        .trainerName = _("Blank"),
#line 8764
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8765
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8770
    [DIFFICULTY_NORMAL][TRAINER_86D37FF1] =
    {
#line 8771
        .trainerName = _("Blank"),
#line 8772
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8773
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8778
    [DIFFICULTY_NORMAL][TRAINER_86F7AA4A] =
    {
#line 8779
        .trainerName = _("Blank"),
#line 8780
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8781
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8786
    [DIFFICULTY_NORMAL][TRAINER_872183CD] =
    {
#line 8787
        .trainerName = _("Blank"),
#line 8788
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8789
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8794
    [DIFFICULTY_NORMAL][TRAINER_87B5E929] =
    {
#line 8795
        .trainerName = _("Blank"),
#line 8796
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8797
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8802
    [DIFFICULTY_NORMAL][TRAINER_885C781B] =
    {
#line 8803
        .trainerName = _("Blank"),
#line 8804
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8805
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8810
    [DIFFICULTY_NORMAL][TRAINER_8878003B] =
    {
#line 8811
        .trainerName = _("Blank"),
#line 8812
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8813
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8818
    [DIFFICULTY_NORMAL][TRAINER_88864D1E] =
    {
#line 8819
        .trainerName = _("Blank"),
#line 8820
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8821
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8826
    [DIFFICULTY_NORMAL][TRAINER_8972F540] =
    {
#line 8827
        .trainerName = _("Blank"),
#line 8828
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8829
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8834
    [DIFFICULTY_NORMAL][TRAINER_898AF31D] =
    {
#line 8835
        .trainerName = _("Blank"),
#line 8836
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8837
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8842
    [DIFFICULTY_NORMAL][TRAINER_8A0B40C0] =
    {
#line 8843
        .trainerName = _("Blank"),
#line 8844
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8845
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8850
    [DIFFICULTY_NORMAL][TRAINER_8A2C65A3] =
    {
#line 8851
        .trainerName = _("Blank"),
#line 8852
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8858
    [DIFFICULTY_NORMAL][TRAINER_8A829476] =
    {
#line 8859
        .trainerName = _("Blank"),
#line 8860
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8861
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8866
    [DIFFICULTY_NORMAL][TRAINER_8AC1B5C1] =
    {
#line 8867
        .trainerName = _("Blank"),
#line 8868
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8869
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8874
    [DIFFICULTY_NORMAL][TRAINER_8AF40B23] =
    {
#line 8875
        .trainerName = _("Blank"),
#line 8876
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8877
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8882
    [DIFFICULTY_NORMAL][TRAINER_8B31AC38] =
    {
#line 8883
        .trainerName = _("Blank"),
#line 8884
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8885
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8890
    [DIFFICULTY_NORMAL][TRAINER_8B32317E] =
    {
#line 8891
        .trainerName = _("Blank"),
#line 8892
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8893
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8898
    [DIFFICULTY_NORMAL][TRAINER_8B3657A9] =
    {
#line 8899
        .trainerName = _("Blank"),
#line 8900
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8901
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8906
    [DIFFICULTY_NORMAL][TRAINER_8B3C49E3] =
    {
#line 8907
        .trainerName = _("Blank"),
#line 8908
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8909
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8914
    [DIFFICULTY_NORMAL][TRAINER_8B6D195D] =
    {
#line 8915
        .trainerName = _("Blank"),
#line 8916
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8917
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8922
    [DIFFICULTY_NORMAL][TRAINER_8BB65E5E] =
    {
#line 8923
        .trainerName = _("Blank"),
#line 8924
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8925
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8930
    [DIFFICULTY_NORMAL][TRAINER_8C186D17] =
    {
#line 8931
        .trainerName = _("Blank"),
#line 8932
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8933
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8938
    [DIFFICULTY_NORMAL][TRAINER_8C853607] =
    {
#line 8939
        .trainerName = _("Blank"),
#line 8940
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8941
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8946
    [DIFFICULTY_NORMAL][TRAINER_8D6D5B2C] =
    {
#line 8947
        .trainerName = _("Blank"),
#line 8948
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8949
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8954
    [DIFFICULTY_NORMAL][TRAINER_8D93124A] =
    {
#line 8955
        .trainerName = _("Blank"),
#line 8956
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8957
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8962
    [DIFFICULTY_NORMAL][TRAINER_8DAF08C5] =
    {
#line 8963
        .trainerName = _("Blank"),
#line 8964
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8965
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8970
    [DIFFICULTY_NORMAL][TRAINER_8DE17D94] =
    {
#line 8971
        .trainerName = _("Blank"),
#line 8972
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8973
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8978
    [DIFFICULTY_NORMAL][TRAINER_8E60CF6E] =
    {
#line 8979
        .trainerName = _("Blank"),
#line 8980
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8981
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8986
    [DIFFICULTY_NORMAL][TRAINER_8EA873A0] =
    {
#line 8987
        .trainerName = _("Blank"),
#line 8988
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8989
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8994
    [DIFFICULTY_NORMAL][TRAINER_8EB76821] =
    {
#line 8995
        .trainerName = _("Blank"),
#line 8996
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9002
    [DIFFICULTY_NORMAL][TRAINER_8ED15D51] =
    {
#line 9003
        .trainerName = _("Blank"),
#line 9004
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9005
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9010
    [DIFFICULTY_NORMAL][TRAINER_8F28F86A] =
    {
#line 9011
        .trainerName = _("Blank"),
#line 9012
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9013
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9018
    [DIFFICULTY_NORMAL][TRAINER_8F2EA270] =
    {
#line 9019
        .trainerName = _("Blank"),
#line 9020
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9021
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9026
    [DIFFICULTY_NORMAL][TRAINER_8F9579E4] =
    {
#line 9027
        .trainerName = _("Blank"),
#line 9028
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9029
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9034
    [DIFFICULTY_NORMAL][TRAINER_8F988020] =
    {
#line 9035
        .trainerName = _("Blank"),
#line 9036
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9037
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9042
    [DIFFICULTY_NORMAL][TRAINER_8FE817BA] =
    {
#line 9043
        .trainerName = _("Blank"),
#line 9044
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9045
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9050
    [DIFFICULTY_NORMAL][TRAINER_90353D81] =
    {
#line 9051
        .trainerName = _("Blank"),
#line 9052
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9053
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9058
    [DIFFICULTY_NORMAL][TRAINER_9054973F] =
    {
#line 9059
        .trainerName = _("Blank"),
#line 9060
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9061
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9066
    [DIFFICULTY_NORMAL][TRAINER_90A72ACF] =
    {
#line 9067
        .trainerName = _("Blank"),
#line 9068
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9069
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9074
    [DIFFICULTY_NORMAL][TRAINER_90E1658C] =
    {
#line 9075
        .trainerName = _("Blank"),
#line 9076
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9077
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9082
    [DIFFICULTY_NORMAL][TRAINER_918A1734] =
    {
#line 9083
        .trainerName = _("Blank"),
#line 9084
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9085
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9090
    [DIFFICULTY_NORMAL][TRAINER_91D249C3] =
    {
#line 9091
        .trainerName = _("Blank"),
#line 9092
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9093
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9098
    [DIFFICULTY_NORMAL][TRAINER_91D48E4E] =
    {
#line 9099
        .trainerName = _("Blank"),
#line 9100
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9101
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9106
    [DIFFICULTY_NORMAL][TRAINER_922542C3] =
    {
#line 9107
        .trainerName = _("Blank"),
#line 9108
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9109
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9114
    [DIFFICULTY_NORMAL][TRAINER_93009D3B] =
    {
#line 9115
        .trainerName = _("Blank"),
#line 9116
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9117
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9122
    [DIFFICULTY_NORMAL][TRAINER_93D9B506] =
    {
#line 9123
        .trainerName = _("Blank"),
#line 9124
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9125
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9130
    [DIFFICULTY_NORMAL][TRAINER_9427896B] =
    {
#line 9131
        .trainerName = _("Blank"),
#line 9132
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9133
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9138
    [DIFFICULTY_NORMAL][TRAINER_9501C16B] =
    {
#line 9139
        .trainerName = _("Blank"),
#line 9140
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9141
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9146
    [DIFFICULTY_NORMAL][TRAINER_9566DD87] =
    {
#line 9147
        .trainerName = _("Blank"),
#line 9148
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9149
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9154
    [DIFFICULTY_NORMAL][TRAINER_95A74E78] =
    {
#line 9155
        .trainerName = _("Blank"),
#line 9156
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9157
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9162
    [DIFFICULTY_NORMAL][TRAINER_963F893A] =
    {
#line 9163
        .trainerName = _("Blank"),
#line 9164
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9165
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9170
    [DIFFICULTY_NORMAL][TRAINER_966F37E6] =
    {
#line 9171
        .trainerName = _("Blank"),
#line 9172
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9178
    [DIFFICULTY_NORMAL][TRAINER_96859C9B] =
    {
#line 9179
        .trainerName = _("Blank"),
#line 9180
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9181
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9186
    [DIFFICULTY_NORMAL][TRAINER_9695D7CC] =
    {
#line 9187
        .trainerName = _("Blank"),
#line 9188
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9189
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9194
    [DIFFICULTY_NORMAL][TRAINER_96A60AED] =
    {
#line 9195
        .trainerName = _("Blank"),
#line 9196
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9197
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9202
    [DIFFICULTY_NORMAL][TRAINER_973C00CE] =
    {
#line 9203
        .trainerName = _("Blank"),
#line 9204
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9205
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9210
    [DIFFICULTY_NORMAL][TRAINER_9784BB4E] =
    {
#line 9211
        .trainerName = _("Blank"),
#line 9212
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9213
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9218
    [DIFFICULTY_NORMAL][TRAINER_9834CDCC] =
    {
#line 9219
        .trainerName = _("Blank"),
#line 9220
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9221
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9226
    [DIFFICULTY_NORMAL][TRAINER_98547A36] =
    {
#line 9227
        .trainerName = _("Blank"),
#line 9228
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9229
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9234
    [DIFFICULTY_NORMAL][TRAINER_98C7143B] =
    {
#line 9235
        .trainerName = _("Blank"),
#line 9236
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9237
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9242
    [DIFFICULTY_NORMAL][TRAINER_992FCC96] =
    {
#line 9243
        .trainerName = _("Blank"),
#line 9244
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9245
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9250
    [DIFFICULTY_NORMAL][TRAINER_99D74322] =
    {
#line 9251
        .trainerName = _("Blank"),
#line 9252
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9253
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9258
    [DIFFICULTY_NORMAL][TRAINER_9A45ED29] =
    {
#line 9259
        .trainerName = _("Blank"),
#line 9260
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9261
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9266
    [DIFFICULTY_NORMAL][TRAINER_9AAFB9A8] =
    {
#line 9267
        .trainerName = _("Blank"),
#line 9268
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9269
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9274
    [DIFFICULTY_NORMAL][TRAINER_9B4CAAEF] =
    {
#line 9275
        .trainerName = _("Blank"),
#line 9276
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9277
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9282
    [DIFFICULTY_NORMAL][TRAINER_9B92F975] =
    {
#line 9283
        .trainerName = _("Blank"),
#line 9284
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9285
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9290
    [DIFFICULTY_NORMAL][TRAINER_9BA8D6B8] =
    {
#line 9291
        .trainerName = _("Blank"),
#line 9292
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9293
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9298
    [DIFFICULTY_NORMAL][TRAINER_9BBA4D3E] =
    {
#line 9299
        .trainerName = _("Blank"),
#line 9300
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9301
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9306
    [DIFFICULTY_NORMAL][TRAINER_9BD745C1] =
    {
#line 9307
        .trainerName = _("Blank"),
#line 9308
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9309
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9314
    [DIFFICULTY_NORMAL][TRAINER_9C9A9B43] =
    {
#line 9315
        .trainerName = _("Blank"),
#line 9316
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9317
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9322
    [DIFFICULTY_NORMAL][TRAINER_9CC51698] =
    {
#line 9323
        .trainerName = _("Blank"),
#line 9324
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9325
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9330
    [DIFFICULTY_NORMAL][TRAINER_9D0B799C] =
    {
#line 9331
        .trainerName = _("Blank"),
#line 9332
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9333
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9338
    [DIFFICULTY_NORMAL][TRAINER_9D2974CA] =
    {
#line 9339
        .trainerName = _("Blank"),
#line 9340
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9341
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9346
    [DIFFICULTY_NORMAL][TRAINER_9DE6AF69] =
    {
#line 9347
        .trainerName = _("Blank"),
#line 9348
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9349
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9354
    [DIFFICULTY_NORMAL][TRAINER_9E9E96C3] =
    {
#line 9355
        .trainerName = _("Blank"),
#line 9356
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9357
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9362
    [DIFFICULTY_NORMAL][TRAINER_9EBDE860] =
    {
#line 9363
        .trainerName = _("Blank"),
#line 9364
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9365
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9370
    [DIFFICULTY_NORMAL][TRAINER_9F335F56] =
    {
#line 9371
        .trainerName = _("Blank"),
#line 9372
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9373
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9378
    [DIFFICULTY_NORMAL][TRAINER_9FB07CC0] =
    {
#line 9379
        .trainerName = _("Blank"),
#line 9380
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9381
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9386
    [DIFFICULTY_NORMAL][TRAINER_9FFBEDD1] =
    {
#line 9387
        .trainerName = _("Blank"),
#line 9388
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9389
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9394
    [DIFFICULTY_NORMAL][TRAINER_A03F3B0B] =
    {
#line 9395
        .trainerName = _("Blank"),
#line 9396
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9397
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9402
    [DIFFICULTY_NORMAL][TRAINER_A0852317] =
    {
#line 9403
        .trainerName = _("Blank"),
#line 9404
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9405
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9410
    [DIFFICULTY_NORMAL][TRAINER_A0CE2BCF] =
    {
#line 9411
        .trainerName = _("Blank"),
#line 9412
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9413
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9418
    [DIFFICULTY_NORMAL][TRAINER_A122FEC6] =
    {
#line 9419
        .trainerName = _("Blank"),
#line 9420
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9421
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9426
    [DIFFICULTY_NORMAL][TRAINER_A1502FA5] =
    {
#line 9427
        .trainerName = _("Blank"),
#line 9428
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9429
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9434
    [DIFFICULTY_NORMAL][TRAINER_A173BD9E] =
    {
#line 9435
        .trainerName = _("Blank"),
#line 9436
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9437
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9442
    [DIFFICULTY_NORMAL][TRAINER_A1B34299] =
    {
#line 9443
        .trainerName = _("Blank"),
#line 9444
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9445
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9450
    [DIFFICULTY_NORMAL][TRAINER_A226BBD6] =
    {
#line 9451
        .trainerName = _("Blank"),
#line 9452
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9453
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9458
    [DIFFICULTY_NORMAL][TRAINER_A26B64E5] =
    {
#line 9459
        .trainerName = _("Blank"),
#line 9460
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9461
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9466
    [DIFFICULTY_NORMAL][TRAINER_A2F2E8FF] =
    {
#line 9467
        .trainerName = _("Blank"),
#line 9468
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9469
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9474
    [DIFFICULTY_NORMAL][TRAINER_A30D6A65] =
    {
#line 9475
        .trainerName = _("Blank"),
#line 9476
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9477
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9482
    [DIFFICULTY_NORMAL][TRAINER_A33F468D] =
    {
#line 9483
        .trainerName = _("Blank"),
#line 9484
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9485
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9490
    [DIFFICULTY_NORMAL][TRAINER_A377CCDF] =
    {
#line 9491
        .trainerName = _("Blank"),
#line 9492
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9493
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9498
    [DIFFICULTY_NORMAL][TRAINER_A393F9F0] =
    {
#line 9499
        .trainerName = _("Blank"),
#line 9500
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9501
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9506
    [DIFFICULTY_NORMAL][TRAINER_A39AB67C] =
    {
#line 9507
        .trainerName = _("Blank"),
#line 9508
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9509
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9514
    [DIFFICULTY_NORMAL][TRAINER_A3EBD43B] =
    {
#line 9515
        .trainerName = _("Blank"),
#line 9516
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9517
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9522
    [DIFFICULTY_NORMAL][TRAINER_A489434F] =
    {
#line 9523
        .trainerName = _("Blank"),
#line 9524
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9525
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9530
    [DIFFICULTY_NORMAL][TRAINER_A49FED84] =
    {
#line 9531
        .trainerName = _("Blank"),
#line 9532
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9533
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9538
    [DIFFICULTY_NORMAL][TRAINER_A4BDD551] =
    {
#line 9539
        .trainerName = _("Blank"),
#line 9540
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9541
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9546
    [DIFFICULTY_NORMAL][TRAINER_A4D47D9E] =
    {
#line 9547
        .trainerName = _("Blank"),
#line 9548
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9549
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9554
    [DIFFICULTY_NORMAL][TRAINER_A4DC84A0] =
    {
#line 9555
        .trainerName = _("Blank"),
#line 9556
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9557
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9562
    [DIFFICULTY_NORMAL][TRAINER_A4EC97B5] =
    {
#line 9563
        .trainerName = _("Blank"),
#line 9564
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9565
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9570
    [DIFFICULTY_NORMAL][TRAINER_A50CF67B] =
    {
#line 9571
        .trainerName = _("Blank"),
#line 9572
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9573
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9578
    [DIFFICULTY_NORMAL][TRAINER_A62D49C6] =
    {
#line 9579
        .trainerName = _("Blank"),
#line 9580
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9581
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9586
    [DIFFICULTY_NORMAL][TRAINER_A6328173] =
    {
#line 9587
        .trainerName = _("Blank"),
#line 9588
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9589
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9594
    [DIFFICULTY_NORMAL][TRAINER_A646F21E] =
    {
#line 9595
        .trainerName = _("Blank"),
#line 9596
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9597
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9602
    [DIFFICULTY_NORMAL][TRAINER_A685428F] =
    {
#line 9603
        .trainerName = _("Blank"),
#line 9604
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9605
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9610
    [DIFFICULTY_NORMAL][TRAINER_A686809A] =
    {
#line 9611
        .trainerName = _("Blank"),
#line 9612
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9613
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9618
    [DIFFICULTY_NORMAL][TRAINER_A7154C64] =
    {
#line 9619
        .trainerName = _("Blank"),
#line 9620
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9621
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9626
    [DIFFICULTY_NORMAL][TRAINER_A725F3F3] =
    {
#line 9627
        .trainerName = _("Blank"),
#line 9628
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9634
    [DIFFICULTY_NORMAL][TRAINER_A7376C87] =
    {
#line 9635
        .trainerName = _("Blank"),
#line 9636
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9637
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9642
    [DIFFICULTY_NORMAL][TRAINER_A76F8352] =
    {
#line 9643
        .trainerName = _("Blank"),
#line 9644
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9645
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9650
    [DIFFICULTY_NORMAL][TRAINER_A783BCA8] =
    {
#line 9651
        .trainerName = _("Blank"),
#line 9652
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9653
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9658
    [DIFFICULTY_NORMAL][TRAINER_A7D689F5] =
    {
#line 9659
        .trainerName = _("Blank"),
#line 9660
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9661
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9666
    [DIFFICULTY_NORMAL][TRAINER_A7DCD657] =
    {
#line 9667
        .trainerName = _("Blank"),
#line 9668
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9669
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9674
    [DIFFICULTY_NORMAL][TRAINER_A80F3799] =
    {
#line 9675
        .trainerName = _("Blank"),
#line 9676
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9677
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9682
    [DIFFICULTY_NORMAL][TRAINER_A82FABFC] =
    {
#line 9683
        .trainerName = _("Blank"),
#line 9684
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9685
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9690
    [DIFFICULTY_NORMAL][TRAINER_A8413608] =
    {
#line 9691
        .trainerName = _("Blank"),
#line 9692
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9693
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9698
    [DIFFICULTY_NORMAL][TRAINER_A8BA94B6] =
    {
#line 9699
        .trainerName = _("Blank"),
#line 9700
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9701
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9706
    [DIFFICULTY_NORMAL][TRAINER_A90E2D03] =
    {
#line 9707
        .trainerName = _("Blank"),
#line 9708
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9709
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9714
    [DIFFICULTY_NORMAL][TRAINER_A968DBA5] =
    {
#line 9715
        .trainerName = _("Blank"),
#line 9716
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9717
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9722
    [DIFFICULTY_NORMAL][TRAINER_A990AE14] =
    {
#line 9723
        .trainerName = _("Blank"),
#line 9724
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9725
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9730
    [DIFFICULTY_NORMAL][TRAINER_A9F2709A] =
    {
#line 9731
        .trainerName = _("Blank"),
#line 9732
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9733
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9738
    [DIFFICULTY_NORMAL][TRAINER_AA81DD0B] =
    {
#line 9739
        .trainerName = _("Blank"),
#line 9740
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9741
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9746
    [DIFFICULTY_NORMAL][TRAINER_AB576C3B] =
    {
#line 9747
        .trainerName = _("Blank"),
#line 9748
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9749
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9754
    [DIFFICULTY_NORMAL][TRAINER_ABD18218] =
    {
#line 9755
        .trainerName = _("Blank"),
#line 9756
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9757
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9762
    [DIFFICULTY_NORMAL][TRAINER_ABF9DAAF] =
    {
#line 9763
        .trainerName = _("Blank"),
#line 9764
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9765
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9770
    [DIFFICULTY_NORMAL][TRAINER_ABFE6286] =
    {
#line 9771
        .trainerName = _("Blank"),
#line 9772
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9773
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9778
    [DIFFICULTY_NORMAL][TRAINER_AC004835] =
    {
#line 9779
        .trainerName = _("Blank"),
#line 9780
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9781
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9786
    [DIFFICULTY_NORMAL][TRAINER_ACB85CBA] =
    {
#line 9787
        .trainerName = _("Blank"),
#line 9788
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9789
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9794
    [DIFFICULTY_NORMAL][TRAINER_ACE2090A] =
    {
#line 9795
        .trainerName = _("Blank"),
#line 9796
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9797
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9802
    [DIFFICULTY_NORMAL][TRAINER_AD1AA26D] =
    {
#line 9803
        .trainerName = _("Blank"),
#line 9804
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9805
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9810
    [DIFFICULTY_NORMAL][TRAINER_AD70C4BA] =
    {
#line 9811
        .trainerName = _("Blank"),
#line 9812
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9813
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9818
    [DIFFICULTY_NORMAL][TRAINER_AD8C8210] =
    {
#line 9819
        .trainerName = _("Blank"),
#line 9820
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9821
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9826
    [DIFFICULTY_NORMAL][TRAINER_ADC94E2C] =
    {
#line 9827
        .trainerName = _("Blank"),
#line 9828
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9829
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9834
    [DIFFICULTY_NORMAL][TRAINER_AE0ED10D] =
    {
#line 9835
        .trainerName = _("Blank"),
#line 9836
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9837
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9842
    [DIFFICULTY_NORMAL][TRAINER_AE99A6E1] =
    {
#line 9843
        .trainerName = _("Blank"),
#line 9844
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9845
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9850
    [DIFFICULTY_NORMAL][TRAINER_AE9CFA41] =
    {
#line 9851
        .trainerName = _("Blank"),
#line 9852
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9858
    [DIFFICULTY_NORMAL][TRAINER_AEDC9768] =
    {
#line 9859
        .trainerName = _("Blank"),
#line 9860
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9861
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9866
    [DIFFICULTY_NORMAL][TRAINER_AF0898E7] =
    {
#line 9867
        .trainerName = _("Blank"),
#line 9868
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9869
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9874
    [DIFFICULTY_NORMAL][TRAINER_AF765F9F] =
    {
#line 9875
        .trainerName = _("Blank"),
#line 9876
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9877
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9882
    [DIFFICULTY_NORMAL][TRAINER_AFA4A980] =
    {
#line 9883
        .trainerName = _("Blank"),
#line 9884
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9885
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9890
    [DIFFICULTY_NORMAL][TRAINER_AFA5BAC9] =
    {
#line 9891
        .trainerName = _("Blank"),
#line 9892
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9893
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9898
    [DIFFICULTY_NORMAL][TRAINER_AFD8F2EF] =
    {
#line 9899
        .trainerName = _("Blank"),
#line 9900
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9901
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9906
    [DIFFICULTY_NORMAL][TRAINER_AFE855B1] =
    {
#line 9907
        .trainerName = _("Blank"),
#line 9908
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9909
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9914
    [DIFFICULTY_NORMAL][TRAINER_AFFCC47E] =
    {
#line 9915
        .trainerName = _("Blank"),
#line 9916
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9917
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9922
    [DIFFICULTY_NORMAL][TRAINER_B0FC622D] =
    {
#line 9923
        .trainerName = _("Blank"),
#line 9924
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9925
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9930
    [DIFFICULTY_NORMAL][TRAINER_B1DA7383] =
    {
#line 9931
        .trainerName = _("Blank"),
#line 9932
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9933
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9938
    [DIFFICULTY_NORMAL][TRAINER_B253DEF2] =
    {
#line 9939
        .trainerName = _("Blank"),
#line 9940
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9941
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9946
    [DIFFICULTY_NORMAL][TRAINER_B2925134] =
    {
#line 9947
        .trainerName = _("Blank"),
#line 9948
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9949
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9954
    [DIFFICULTY_NORMAL][TRAINER_B2A5CB2B] =
    {
#line 9955
        .trainerName = _("Blank"),
#line 9956
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9957
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9962
    [DIFFICULTY_NORMAL][TRAINER_B32A1E98] =
    {
#line 9963
        .trainerName = _("Blank"),
#line 9964
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9965
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9970
    [DIFFICULTY_NORMAL][TRAINER_B3B1644E] =
    {
#line 9971
        .trainerName = _("Blank"),
#line 9972
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9973
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9978
    [DIFFICULTY_NORMAL][TRAINER_B3CE95A4] =
    {
#line 9979
        .trainerName = _("Blank"),
#line 9980
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9981
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9986
    [DIFFICULTY_NORMAL][TRAINER_B3FB2F4B] =
    {
#line 9987
        .trainerName = _("Blank"),
#line 9988
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9989
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9994
    [DIFFICULTY_NORMAL][TRAINER_B42E7E27] =
    {
#line 9995
        .trainerName = _("Blank"),
#line 9996
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10002
    [DIFFICULTY_NORMAL][TRAINER_B42F5023] =
    {
#line 10003
        .trainerName = _("Blank"),
#line 10004
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10005
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10010
    [DIFFICULTY_NORMAL][TRAINER_B435B7EF] =
    {
#line 10011
        .trainerName = _("Blank"),
#line 10012
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10013
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10018
    [DIFFICULTY_NORMAL][TRAINER_B438F348] =
    {
#line 10019
        .trainerName = _("Blank"),
#line 10020
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10021
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10026
    [DIFFICULTY_NORMAL][TRAINER_B489F821] =
    {
#line 10027
        .trainerName = _("Blank"),
#line 10028
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10029
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10034
    [DIFFICULTY_NORMAL][TRAINER_B490300F] =
    {
#line 10035
        .trainerName = _("Blank"),
#line 10036
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10037
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10042
    [DIFFICULTY_NORMAL][TRAINER_B53E1C28] =
    {
#line 10043
        .trainerName = _("Blank"),
#line 10044
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10045
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10050
    [DIFFICULTY_NORMAL][TRAINER_B5E055E7] =
    {
#line 10051
        .trainerName = _("Blank"),
#line 10052
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10053
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10058
    [DIFFICULTY_NORMAL][TRAINER_B6330B06] =
    {
#line 10059
        .trainerName = _("Blank"),
#line 10060
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10061
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10066
    [DIFFICULTY_NORMAL][TRAINER_B66CAB9E] =
    {
#line 10067
        .trainerName = _("Blank"),
#line 10068
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10069
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10074
    [DIFFICULTY_NORMAL][TRAINER_B6E3D521] =
    {
#line 10075
        .trainerName = _("Blank"),
#line 10076
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10077
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10082
    [DIFFICULTY_NORMAL][TRAINER_B6F23A27] =
    {
#line 10083
        .trainerName = _("Blank"),
#line 10084
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10085
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10090
    [DIFFICULTY_NORMAL][TRAINER_B71419A1] =
    {
#line 10091
        .trainerName = _("Blank"),
#line 10092
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10093
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10098
    [DIFFICULTY_NORMAL][TRAINER_B77C014B] =
    {
#line 10099
        .trainerName = _("Blank"),
#line 10100
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10101
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10106
    [DIFFICULTY_NORMAL][TRAINER_B791766D] =
    {
#line 10107
        .trainerName = _("Blank"),
#line 10108
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10109
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10114
    [DIFFICULTY_NORMAL][TRAINER_B7998A66] =
    {
#line 10115
        .trainerName = _("Blank"),
#line 10116
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10117
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10122
    [DIFFICULTY_NORMAL][TRAINER_B7C2EB7F] =
    {
#line 10123
        .trainerName = _("Blank"),
#line 10124
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10125
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10130
    [DIFFICULTY_NORMAL][TRAINER_B7EFEE71] =
    {
#line 10131
        .trainerName = _("Blank"),
#line 10132
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10133
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10138
    [DIFFICULTY_NORMAL][TRAINER_B84B3D2A] =
    {
#line 10139
        .trainerName = _("Blank"),
#line 10140
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10141
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10146
    [DIFFICULTY_NORMAL][TRAINER_B8C5628C] =
    {
#line 10147
        .trainerName = _("Blank"),
#line 10148
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10149
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10154
    [DIFFICULTY_NORMAL][TRAINER_B94D66E3] =
    {
#line 10155
        .trainerName = _("Blank"),
#line 10156
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10157
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10162
    [DIFFICULTY_NORMAL][TRAINER_B9C56D15] =
    {
#line 10163
        .trainerName = _("Blank"),
#line 10164
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10165
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10170
    [DIFFICULTY_NORMAL][TRAINER_BA12D98F] =
    {
#line 10171
        .trainerName = _("Blank"),
#line 10172
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10178
    [DIFFICULTY_NORMAL][TRAINER_BA4155D3] =
    {
#line 10179
        .trainerName = _("Blank"),
#line 10180
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10181
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10186
    [DIFFICULTY_NORMAL][TRAINER_BA4DFC3A] =
    {
#line 10187
        .trainerName = _("Blank"),
#line 10188
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10189
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10194
    [DIFFICULTY_NORMAL][TRAINER_BA60011F] =
    {
#line 10195
        .trainerName = _("Blank"),
#line 10196
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10197
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10202
    [DIFFICULTY_NORMAL][TRAINER_BA924FF7] =
    {
#line 10203
        .trainerName = _("Blank"),
#line 10204
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10205
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10210
    [DIFFICULTY_NORMAL][TRAINER_BB07DD1B] =
    {
#line 10211
        .trainerName = _("Blank"),
#line 10212
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10213
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10218
    [DIFFICULTY_NORMAL][TRAINER_BB531FBA] =
    {
#line 10219
        .trainerName = _("Blank"),
#line 10220
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10221
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10226
    [DIFFICULTY_NORMAL][TRAINER_BB6FD0A4] =
    {
#line 10227
        .trainerName = _("Blank"),
#line 10228
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10229
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10234
    [DIFFICULTY_NORMAL][TRAINER_BBBC4B4C] =
    {
#line 10235
        .trainerName = _("Blank"),
#line 10236
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10237
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10242
    [DIFFICULTY_NORMAL][TRAINER_BBD56E26] =
    {
#line 10243
        .trainerName = _("Blank"),
#line 10244
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10245
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10250
    [DIFFICULTY_NORMAL][TRAINER_BC01A85B] =
    {
#line 10251
        .trainerName = _("Blank"),
#line 10252
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10253
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10258
    [DIFFICULTY_NORMAL][TRAINER_BC74FA1D] =
    {
#line 10259
        .trainerName = _("Blank"),
#line 10260
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10261
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10266
    [DIFFICULTY_NORMAL][TRAINER_BC7E8D55] =
    {
#line 10267
        .trainerName = _("Blank"),
#line 10268
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10269
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10274
    [DIFFICULTY_NORMAL][TRAINER_BCDFD312] =
    {
#line 10275
        .trainerName = _("Blank"),
#line 10276
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10277
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10282
    [DIFFICULTY_NORMAL][TRAINER_BCEFD799] =
    {
#line 10283
        .trainerName = _("Blank"),
#line 10284
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10285
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10290
    [DIFFICULTY_NORMAL][TRAINER_BD01F8F4] =
    {
#line 10291
        .trainerName = _("Blank"),
#line 10292
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10293
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10298
    [DIFFICULTY_NORMAL][TRAINER_BDC38E1E] =
    {
#line 10299
        .trainerName = _("Blank"),
#line 10300
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10301
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10306
    [DIFFICULTY_NORMAL][TRAINER_BE2AF14F] =
    {
#line 10307
        .trainerName = _("Blank"),
#line 10308
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10309
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10314
    [DIFFICULTY_NORMAL][TRAINER_BEB2BD3E] =
    {
#line 10315
        .trainerName = _("Blank"),
#line 10316
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10317
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10322
    [DIFFICULTY_NORMAL][TRAINER_BF07B94F] =
    {
#line 10323
        .trainerName = _("Blank"),
#line 10324
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10325
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10330
    [DIFFICULTY_NORMAL][TRAINER_BF2827C0] =
    {
#line 10331
        .trainerName = _("Blank"),
#line 10332
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10333
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10338
    [DIFFICULTY_NORMAL][TRAINER_BF74896F] =
    {
#line 10339
        .trainerName = _("Blank"),
#line 10340
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10341
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10346
    [DIFFICULTY_NORMAL][TRAINER_BF8ADEF1] =
    {
#line 10347
        .trainerName = _("Blank"),
#line 10348
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10349
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10354
    [DIFFICULTY_NORMAL][TRAINER_C0800804] =
    {
#line 10355
        .trainerName = _("Blank"),
#line 10356
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10357
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10362
    [DIFFICULTY_NORMAL][TRAINER_C091F2C5] =
    {
#line 10363
        .trainerName = _("Blank"),
#line 10364
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10365
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10370
    [DIFFICULTY_NORMAL][TRAINER_C10351D2] =
    {
#line 10371
        .trainerName = _("Blank"),
#line 10372
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10373
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10378
    [DIFFICULTY_NORMAL][TRAINER_C1C428F7] =
    {
#line 10379
        .trainerName = _("Blank"),
#line 10380
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10381
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10386
    [DIFFICULTY_NORMAL][TRAINER_C1C621AC] =
    {
#line 10387
        .trainerName = _("Blank"),
#line 10388
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10389
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10394
    [DIFFICULTY_NORMAL][TRAINER_C203C024] =
    {
#line 10395
        .trainerName = _("Blank"),
#line 10396
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10397
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10402
    [DIFFICULTY_NORMAL][TRAINER_C2174D90] =
    {
#line 10403
        .trainerName = _("Blank"),
#line 10404
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10405
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10410
    [DIFFICULTY_NORMAL][TRAINER_C24EFC92] =
    {
#line 10411
        .trainerName = _("Blank"),
#line 10412
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10413
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10418
    [DIFFICULTY_NORMAL][TRAINER_C290C9F5] =
    {
#line 10419
        .trainerName = _("Blank"),
#line 10420
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10421
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10426
    [DIFFICULTY_NORMAL][TRAINER_C29CDC34] =
    {
#line 10427
        .trainerName = _("Blank"),
#line 10428
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10429
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10434
    [DIFFICULTY_NORMAL][TRAINER_C3B3B17B] =
    {
#line 10435
        .trainerName = _("Blank"),
#line 10436
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10437
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10442
    [DIFFICULTY_NORMAL][TRAINER_C414BED0] =
    {
#line 10443
        .trainerName = _("Blank"),
#line 10444
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10445
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10450
    [DIFFICULTY_NORMAL][TRAINER_C42A775B] =
    {
#line 10451
        .trainerName = _("Blank"),
#line 10452
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10453
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10458
    [DIFFICULTY_NORMAL][TRAINER_C4A167E0] =
    {
#line 10459
        .trainerName = _("Blank"),
#line 10460
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10461
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10466
    [DIFFICULTY_NORMAL][TRAINER_C4C98FC4] =
    {
#line 10467
        .trainerName = _("Blank"),
#line 10468
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10469
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10474
    [DIFFICULTY_NORMAL][TRAINER_C533F091] =
    {
#line 10475
        .trainerName = _("Blank"),
#line 10476
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10477
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10482
    [DIFFICULTY_NORMAL][TRAINER_C6600959] =
    {
#line 10483
        .trainerName = _("Blank"),
#line 10484
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10485
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10490
    [DIFFICULTY_NORMAL][TRAINER_C6666859] =
    {
#line 10491
        .trainerName = _("Blank"),
#line 10492
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10493
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10498
    [DIFFICULTY_NORMAL][TRAINER_C690158D] =
    {
#line 10499
        .trainerName = _("Blank"),
#line 10500
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10501
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10506
    [DIFFICULTY_NORMAL][TRAINER_C6E61EDA] =
    {
#line 10507
        .trainerName = _("Blank"),
#line 10508
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10509
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10514
    [DIFFICULTY_NORMAL][TRAINER_C7630112] =
    {
#line 10515
        .trainerName = _("Blank"),
#line 10516
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10517
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10522
    [DIFFICULTY_NORMAL][TRAINER_C789FBF5] =
    {
#line 10523
        .trainerName = _("Blank"),
#line 10524
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10525
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10530
    [DIFFICULTY_NORMAL][TRAINER_C7E06CB4] =
    {
#line 10531
        .trainerName = _("Blank"),
#line 10532
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10533
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10538
    [DIFFICULTY_NORMAL][TRAINER_C7F16F5B] =
    {
#line 10539
        .trainerName = _("Blank"),
#line 10540
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10541
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10546
    [DIFFICULTY_NORMAL][TRAINER_C82E0F99] =
    {
#line 10547
        .trainerName = _("Blank"),
#line 10548
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10549
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10554
    [DIFFICULTY_NORMAL][TRAINER_C84D5BA6] =
    {
#line 10555
        .trainerName = _("Blank"),
#line 10556
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10557
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10562
    [DIFFICULTY_NORMAL][TRAINER_C8563FAA] =
    {
#line 10563
        .trainerName = _("Blank"),
#line 10564
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10565
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10570
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 10571
        .trainerName = _("Blank"),
#line 10572
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10573
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10578
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 10579
        .trainerName = _("Blank"),
#line 10580
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10581
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
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
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
