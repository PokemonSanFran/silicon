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
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5679
            .species = SPECIES_PURUGLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5679
            .heldItem = ITEM_FOCUS_SASH,
#line 5682
            .ev = TRAINER_PARTY_EVS(0, 244, 124, 0, 0, 28),
#line 5684
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5680
            .ability = ABILITY_DEFIANT,
#line 5681
            .lvl = 50,
#line 5683
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5684
                MOVE_FAKE_OUT,
                MOVE_DOUBLE_TEAM,
                MOVE_BODY_SLAM,
                MOVE_SUPER_FANG,
            },
            },
            {
#line 5689
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5689
            .heldItem = ITEM_MUSCLE_BAND,
#line 5692
            .ev = TRAINER_PARTY_EVS(0, 248, 0, 0, 0, 148),
#line 5694
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5690
            .ability = ABILITY_TECHNICIAN,
#line 5691
            .lvl = 48,
#line 5693
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5694
                MOVE_MACH_PUNCH,
                MOVE_BULLET_SEED,
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 5699
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5699
            .heldItem = ITEM_RED_CARD,
#line 5702
            .ev = TRAINER_PARTY_EVS(0, 124, 0, 148, 124, 0),
#line 5704
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5700
            .ability = ABILITY_ILLUSION,
#line 5701
            .lvl = 50,
#line 5703
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5704
                MOVE_NIGHT_DAZE,
                MOVE_FLAMETHROWER,
                MOVE_EXTRASENSORY,
                MOVE_SLUDGE_BOMB,
            },
            },
            {
#line 5709
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5709
            .heldItem = ITEM_TOXIC_ORB,
#line 5712
            .ev = TRAINER_PARTY_EVS(0, 248, 52, 0, 0, 100),
#line 5714
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5710
            .ability = ABILITY_QUICK_FEET,
#line 5711
            .lvl = 49,
#line 5713
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5714
                MOVE_ROAR,
                MOVE_ICE_PUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_PLAY_ROUGH,
            },
            },
        },
    },
#line 5719
    [DIFFICULTY_NORMAL][TRAINER_11EDE0DC] =
    {
#line 5720
        .trainerName = _("Blank"),
#line 5721
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5722
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5724
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5724
            .heldItem = ITEM_PAYAPA_BERRY,
#line 5727
            .ev = TRAINER_PARTY_EVS(0, 0, 88, 0, 216, 96),
#line 5729
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5725
            .ability = ABILITY_STICKY_HOLD,
#line 5726
            .lvl = 49,
#line 5728
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5729
                MOVE_TOXIC_SPIKES,
                MOVE_SLUDGE_WAVE,
                MOVE_GIGA_DRAIN,
                MOVE_MUD_SHOT,
            },
            },
            {
#line 5734
            .species = SPECIES_SCRAFTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5734
            .heldItem = ITEM_ROSELI_BERRY,
#line 5737
            .ev = TRAINER_PARTY_EVS(0, 116, 132, 0, 0, 148),
#line 5739
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5735
            .ability = ABILITY_INTIMIDATE,
#line 5736
            .lvl = 48,
#line 5738
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5739
                MOVE_DRAGON_TAIL,
                MOVE_ZEN_HEADBUTT,
                MOVE_DRAGON_DANCE,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 5744
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5744
            .heldItem = ITEM_RED_CARD,
#line 5747
            .ev = TRAINER_PARTY_EVS(136, 0, 44, 0, 136, 76),
#line 5749
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5745
            .ability = ABILITY_SHEER_FORCE,
#line 5746
            .lvl = 49,
#line 5748
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5749
                MOVE_ICE_BEAM,
                MOVE_VENOSHOCK,
                MOVE_EARTH_POWER,
                MOVE_TOXIC_SPIKES,
            },
            },
            {
#line 5754
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5754
            .heldItem = ITEM_SCOPE_LENS,
#line 5757
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 148, 0),
#line 5759
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5755
            .ability = ABILITY_SUPER_LUCK,
#line 5756
            .lvl = 50,
#line 5758
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5759
                MOVE_HEX,
                MOVE_HEAT_WAVE,
                MOVE_AIR_CUTTER,
                MOVE_PSYCHIC_NOISE,
            },
            },
        },
    },
#line 5764
    [DIFFICULTY_NORMAL][TRAINER_120A20F6] =
    {
#line 5765
        .trainerName = _("Blank"),
#line 5766
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5767
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5769
            .species = SPECIES_KLEFKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5769
            .heldItem = ITEM_RED_CARD,
#line 5772
            .ev = TRAINER_PARTY_EVS(48, 0, 84, 0, 116, 148),
#line 5774
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5770
            .ability = ABILITY_PRANKSTER,
#line 5771
            .lvl = 51,
#line 5773
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5774
                MOVE_SPIKES,
                MOVE_STEEL_BEAM,
                MOVE_MISTY_TERRAIN,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 5779
            .species = SPECIES_SLURPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5779
            .heldItem = ITEM_MISTY_SEED,
#line 5782
            .ev = TRAINER_PARTY_EVS(116, 0, 28, 252, 0, 0),
#line 5784
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5780
            .ability = ABILITY_UNBURDEN,
#line 5781
            .lvl = 50,
#line 5783
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5784
                MOVE_STICKY_WEB,
                MOVE_SURF,
                MOVE_FLAMETHROWER,
                MOVE_ENERGY_BALL,
            },
            },
            {
#line 5789
            .species = SPECIES_MINIOR_INDIGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5789
            .heldItem = ITEM_SITRUS_BERRY,
#line 5792
            .ev = TRAINER_PARTY_EVS(0, 148, 0, 248, 0, 0),
#line 5794
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5790
            .ability = ABILITY_SHIELDS_DOWN,
#line 5791
            .lvl = 49,
#line 5793
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5794
                MOVE_STEALTH_ROCK,
                MOVE_ANCIENT_POWER,
                MOVE_SCORCHING_SANDS,
                MOVE_ACROBATICS,
            },
            },
            {
#line 5799
            .species = SPECIES_PANGORO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5799
            .heldItem = ITEM_LIECHI_BERRY,
#line 5802
            .ev = TRAINER_PARTY_EVS(148, 116, 36, 0, 0, 100),
#line 5804
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5800
            .ability = ABILITY_SCRAPPY,
#line 5801
            .lvl = 50,
#line 5803
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5804
                MOVE_CIRCLE_THROW,
                MOVE_LOW_KICK,
                MOVE_EARTHQUAKE,
                MOVE_DARKEST_LARIAT,
            },
            },
        },
    },
#line 5809
    [DIFFICULTY_NORMAL][TRAINER_13113EC0] =
    {
#line 5810
        .trainerName = _("Blank"),
#line 5811
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5812
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5814
            .species = SPECIES_VIKAVOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5814
            .heldItem = ITEM_QUICK_CLAW,
#line 5817
            .ev = TRAINER_PARTY_EVS(184, 0, 0, 0, 208, 8),
#line 5819
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5815
            .ability = ABILITY_LEVITATE,
#line 5816
            .lvl = 50,
#line 5818
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5820
                MOVE_STICKY_WEB,
                MOVE_VOLT_SWITCH,
                MOVE_ENERGY_BALL,
                MOVE_BUG_BUZZ,
            },
            },
            {
#line 5825
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5825
            .heldItem = ITEM_RED_CARD,
#line 5828
            .ev = TRAINER_PARTY_EVS(248, 0, 140, 0, 0, 8),
#line 5830
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5826
            .ability = ABILITY_HEATPROOF,
#line 5827
            .lvl = 51,
#line 5829
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5831
                MOVE_STEALTH_ROCK,
                MOVE_ZEN_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 5836
            .species = SPECIES_URSALUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5836
            .heldItem = ITEM_BERSERK_GENE,
#line 5839
            .ev = TRAINER_PARTY_EVS(156, 124, 116, 0, 0, 0),
#line 5841
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5837
            .ability = ABILITY_UNNERVE,
#line 5838
            .lvl = 48,
#line 5840
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5842
                MOVE_PLAY_ROUGH,
                MOVE_BRICK_BREAK,
                MOVE_BODY_SLAM,
                MOVE_BULLDOZE,
            },
            },
        },
    },
#line 5847
    [DIFFICULTY_NORMAL][TRAINER_1387ABBC] =
    {
#line 5848
        .trainerName = _("Blank"),
#line 5849
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5850
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5852
            .species = SPECIES_ORBEETLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5852
            .heldItem = ITEM_RED_CARD,
#line 5855
            .ev = TRAINER_PARTY_EVS(136, 0, 40, 224, 0, 0),
#line 5857
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5853
            .ability = ABILITY_SWARM,
#line 5854
            .lvl = 50,
#line 5856
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5858
                MOVE_STICKY_WEB,
                MOVE_HYPNOSIS,
                MOVE_PSYCHIC_NOISE,
                MOVE_BUG_BUZZ,
            },
            },
            {
#line 5863
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5863
            .heldItem = ITEM_EVIOLITE,
#line 5866
            .ev = TRAINER_PARTY_EVS(184, 0, 108, 0, 0, 104),
#line 5868
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5864
            .ability = ABILITY_DEFIANT,
#line 5865
            .lvl = 48,
#line 5867
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5869
                MOVE_STEALTH_ROCK,
                MOVE_STONE_EDGE,
                MOVE_DRAIN_PUNCH,
                MOVE_POISON_JAB,
            },
            },
        },
    },
#line 5874
    [DIFFICULTY_NORMAL][TRAINER_148A3C6B] =
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5879
            .species = SPECIES_TOEDSCRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5879
            .heldItem = ITEM_YACHE_BERRY,
#line 5882
            .ev = TRAINER_PARTY_EVS(140, 0, 72, 0, 104, 80),
#line 5884
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5880
            .ability = ABILITY_MYCELIUM_MIGHT,
#line 5881
            .lvl = 49,
#line 5883
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5885
                MOVE_SPORE,
                MOVE_TOXIC_SPIKES,
                MOVE_EARTH_POWER,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 5890
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5890
            .heldItem = ITEM_BLUNDER_POLICY,
#line 5893
            .ev = TRAINER_PARTY_EVS(80, 0, 112, 52, 152, 0),
#line 5895
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5891
            .ability = ABILITY_INSOMNIA,
#line 5892
            .lvl = 51,
#line 5894
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5896
                MOVE_HYPNOSIS,
                MOVE_HURRICANE,
                MOVE_WHIRLWIND,
                MOVE_EXTRASENSORY,
            },
            },
        },
    },
#line 5901
    [DIFFICULTY_NORMAL][TRAINER_14C5EE6C] =
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
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 5906
            .species = SPECIES_SHIINOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5906
            .heldItem = ITEM_RED_CARD,
#line 5909
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 0, 200, 0),
#line 5911
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 5907
            .ability = ABILITY_EFFECT_SPORE,
#line 5908
            .lvl = 49,
#line 5910
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5912
                MOVE_MOONBLAST,
                MOVE_ENERGY_BALL,
                MOVE_SPORE,
                MOVE_MOONLIGHT,
            },
            },
            {
#line 5917
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5917
            .heldItem = ITEM_RED_CARD,
#line 5920
            .ev = TRAINER_PARTY_EVS(0, 200, 0, 200, 0, 0),
#line 5922
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5918
            .ability = ABILITY_TANGLED_FEET,
#line 5919
            .lvl = 50,
#line 5921
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5923
                MOVE_THRASH,
                MOVE_FAKE_OUT,
                MOVE_SUCKER_PUNCH,
            },
            },
            {
#line 5927
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5927
            .heldItem = ITEM_POISONIUM_Z,
#line 5930
            .ev = TRAINER_PARTY_EVS(200, 100, 0, 0, 100, 0),
#line 5932
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5928
            .ability = ABILITY_LEVITATE,
#line 5929
            .lvl = 50,
#line 5931
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5933
                MOVE_GUNK_SHOT,
                MOVE_DESTINY_BOND,
                MOVE_FLAMETHROWER,
                MOVE_DARK_PULSE,
            },
            },
            {
#line 5938
            .species = SPECIES_MUSHARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5938
            .heldItem = ITEM_RED_CARD,
#line 5941
            .ev = TRAINER_PARTY_EVS(200, 0, 100, 0, 50, 50),
#line 5943
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5939
            .ability = ABILITY_SYNCHRONIZE,
#line 5940
            .lvl = 51,
#line 5942
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5944
                MOVE_DREAM_EATER,
                MOVE_YAWN,
                MOVE_ALLURING_VOICE,
                MOVE_PSYCHIC,
            },
            },
            {
#line 5949
            .species = SPECIES_ANNIHILAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5949
            .heldItem = ITEM_SITRUS_BERRY,
#line 5952
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 200, 0, 0),
#line 5954
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5950
            .ability = ABILITY_DEFIANT,
#line 5951
            .lvl = 52,
#line 5953
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5955
                MOVE_CLOSE_COMBAT,
                MOVE_STOMPING_TANTRUM,
                MOVE_SHADOW_CLAW,
                MOVE_TAUNT,
            },
            },
        },
    },
#line 5960
    [DIFFICULTY_NORMAL][TRAINER_1508BB71] =
    {
#line 5961
        .trainerName = _("Blank"),
#line 5962
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5963
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5965
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5965
            .heldItem = ITEM_LEFTOVERS,
#line 5968
            .ev = TRAINER_PARTY_EVS(208, 0, 184, 0, 8, 0),
#line 5970
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5966
            .ability = ABILITY_SNOW_CLOAK,
#line 5967
            .lvl = 47,
#line 5969
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5971
                MOVE_SNOWSCAPE,
                MOVE_BLIZZARD,
                MOVE_REST,
                MOVE_REFLECT,
            },
            },
            {
#line 5976
            .species = SPECIES_BEARTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5976
            .heldItem = ITEM_STARF_BERRY,
#line 5979
            .ev = TRAINER_PARTY_EVS(0, 252, 72, 0, 0, 72),
#line 5981
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5977
            .ability = ABILITY_SNOW_CLOAK,
#line 5978
            .lvl = 46,
#line 5980
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5982
                MOVE_SNOWSCAPE,
                MOVE_AVALANCHE,
                MOVE_SHEER_COLD,
            },
            },
        },
    },
#line 5986
    [DIFFICULTY_NORMAL][TRAINER_1510C80A] =
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
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5991
            .species = SPECIES_MUDSDALE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5991
            .heldItem = ITEM_SMOOTH_ROCK,
#line 5994
            .ev = TRAINER_PARTY_EVS(156, 0, 244, 0, 0, 0),
#line 5996
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5992
            .ability = ABILITY_STAMINA,
#line 5993
            .lvl = 44,
#line 5995
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5997
                MOVE_SANDSTORM,
                MOVE_BODY_PRESS,
                MOVE_COUNTER,
                MOVE_CURSE,
            },
            },
            {
#line 6002
            .species = SPECIES_SANDACONDA,
#line 6002
            .gender = TRAINER_MON_MALE,
#line 6002
            .heldItem = ITEM_RED_CARD,
#line 6005
            .ev = TRAINER_PARTY_EVS(152, 88, 156, 0, 0, 0),
#line 6006
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6003
            .ability = ABILITY_SAND_SPIT,
#line 6004
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6007
                MOVE_HURRICANE,
                MOVE_DRILL_RUN,
                MOVE_FIRE_FANG,
                MOVE_SKITTER_SMACK,
            },
            },
            {
#line 6012
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6012
            .heldItem = ITEM_LIFE_ORB,
#line 6015
            .ev = TRAINER_PARTY_EVS(0, 0, 148, 0, 252, 0),
#line 6016
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6013
            .ability = ABILITY_MAGIC_GUARD,
#line 6014
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6017
                MOVE_PSYCHIC,
                MOVE_THUNDER_PUNCH,
                MOVE_SHADOW_BALL,
                MOVE_ENERGY_BALL,
            },
            },
        },
    },
#line 6022
    [DIFFICULTY_NORMAL][TRAINER_15598A38] =
    {
#line 6023
        .trainerName = _("Blank"),
#line 6024
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6025
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6027
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6027
            .heldItem = ITEM_EXPERT_BELT,
#line 6030
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 144, 0, 0),
#line 6032
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6028
            .ability = ABILITY_PURE_POWER,
#line 6029
            .lvl = 44,
#line 6031
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6033
                MOVE_HIGH_JUMP_KICK,
                MOVE_POISON_JAB,
                MOVE_ZEN_HEADBUTT,
                MOVE_FIRE_PUNCH,
            },
            },
            {
#line 6038
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6038
            .heldItem = ITEM_EXPERT_BELT,
#line 6041
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 148, 0, 0),
#line 6043
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6039
            .ability = ABILITY_PURE_POWER,
#line 6040
            .lvl = 45,
#line 6042
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6044
                MOVE_ICE_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_ZEN_HEADBUTT,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 6049
            .species = SPECIES_LOKIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6049
            .heldItem = ITEM_EXPERT_BELT,
#line 6052
            .ev = TRAINER_PARTY_EVS(0, 204, 0, 196, 0, 0),
#line 6054
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6050
            .ability = ABILITY_TINTED_LENS,
#line 6051
            .lvl = 45,
#line 6053
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6055
                MOVE_BUG_BITE,
                MOVE_AERIAL_ACE,
                MOVE_LASH_OUT,
                MOVE_DOUBLE_KICK,
            },
            },
        },
    },
#line 6060
    [DIFFICULTY_NORMAL][TRAINER_15A66566] =
    {
#line 6061
        .trainerName = _("Blank"),
#line 6062
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6063
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6065
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6067
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6066
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6068
    [DIFFICULTY_NORMAL][TRAINER_15C87858] =
    {
#line 6069
        .trainerName = _("Blank"),
#line 6070
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6071
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6073
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6075
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6074
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6076
    [DIFFICULTY_NORMAL][TRAINER_1648CE6E] =
    {
#line 6077
        .trainerName = _("Blank"),
#line 6078
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6079
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6081
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6083
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6082
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6084
    [DIFFICULTY_NORMAL][TRAINER_1710375D] =
    {
#line 6085
        .trainerName = _("Blank"),
#line 6086
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6087
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6089
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6091
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6090
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6092
    [DIFFICULTY_NORMAL][TRAINER_17DCC938] =
    {
#line 6093
        .trainerName = _("Blank"),
#line 6094
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6095
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6097
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6099
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6098
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6100
    [DIFFICULTY_NORMAL][TRAINER_188A6F20] =
    {
#line 6101
        .trainerName = _("Blank"),
#line 6102
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6103
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6105
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6107
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6106
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6108
    [DIFFICULTY_NORMAL][TRAINER_1932C509] =
    {
#line 6109
        .trainerName = _("Blank"),
#line 6110
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6111
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6113
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6115
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6114
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6116
    [DIFFICULTY_NORMAL][TRAINER_19477C78] =
    {
#line 6117
        .trainerName = _("Blank"),
#line 6118
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6119
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6121
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6123
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6122
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6124
    [DIFFICULTY_NORMAL][TRAINER_19C5BAD7] =
    {
#line 6125
        .trainerName = _("Blank"),
#line 6126
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6127
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6129
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6131
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6130
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6132
    [DIFFICULTY_NORMAL][TRAINER_19CD0726] =
    {
#line 6133
        .trainerName = _("Blank"),
#line 6134
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6135
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6137
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6139
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6138
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6140
    [DIFFICULTY_NORMAL][TRAINER_19D7682B] =
    {
#line 6141
        .trainerName = _("Blank"),
#line 6142
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6143
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6145
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6147
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6146
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6148
    [DIFFICULTY_NORMAL][TRAINER_1A2CA162] =
    {
#line 6149
        .trainerName = _("Blank"),
#line 6150
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6151
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6153
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6155
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6154
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6156
    [DIFFICULTY_NORMAL][TRAINER_1A763631] =
    {
#line 6157
        .trainerName = _("Blank"),
#line 6158
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6159
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6161
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6163
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6162
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6164
    [DIFFICULTY_NORMAL][TRAINER_1AE5CAF7] =
    {
#line 6165
        .trainerName = _("Blank"),
#line 6166
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6167
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6169
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6171
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6170
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6172
    [DIFFICULTY_NORMAL][TRAINER_1AE89BEB] =
    {
#line 6173
        .trainerName = _("Blank"),
#line 6174
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6175
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6177
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6179
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6178
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6180
    [DIFFICULTY_NORMAL][TRAINER_1AEA3CEA] =
    {
#line 6181
        .trainerName = _("Blank"),
#line 6182
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6183
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6185
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6187
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6186
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6188
    [DIFFICULTY_NORMAL][TRAINER_1B517ABD] =
    {
#line 6189
        .trainerName = _("Blank"),
#line 6190
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6193
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6195
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6194
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6196
    [DIFFICULTY_NORMAL][TRAINER_1B616469] =
    {
#line 6197
        .trainerName = _("Blank"),
#line 6198
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6199
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6201
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6203
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6202
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6204
    [DIFFICULTY_NORMAL][TRAINER_1BA35D11] =
    {
#line 6205
        .trainerName = _("Blank"),
#line 6206
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6209
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6211
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6210
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6212
    [DIFFICULTY_NORMAL][TRAINER_1BB1218F] =
    {
#line 6213
        .trainerName = _("Blank"),
#line 6214
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6215
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6217
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6219
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6218
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6220
    [DIFFICULTY_NORMAL][TRAINER_1BC45966] =
    {
#line 6221
        .trainerName = _("Blank"),
#line 6222
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6223
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6225
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6227
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6226
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6228
    [DIFFICULTY_NORMAL][TRAINER_1C2B088C] =
    {
#line 6229
        .trainerName = _("Blank"),
#line 6230
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6231
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6233
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6235
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6234
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6236
    [DIFFICULTY_NORMAL][TRAINER_1C6CA7F6] =
    {
#line 6237
        .trainerName = _("Blank"),
#line 6238
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6239
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6241
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6243
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6242
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6244
    [DIFFICULTY_NORMAL][TRAINER_1CBE4FB1] =
    {
#line 6245
        .trainerName = _("Blank"),
#line 6246
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6247
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6249
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6251
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6250
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6252
    [DIFFICULTY_NORMAL][TRAINER_1CBFAF10] =
    {
#line 6253
        .trainerName = _("Blank"),
#line 6254
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6255
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6257
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6259
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6258
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6260
    [DIFFICULTY_NORMAL][TRAINER_1CC4D5D6] =
    {
#line 6261
        .trainerName = _("Blank"),
#line 6262
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6263
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6265
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6267
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6266
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6268
    [DIFFICULTY_NORMAL][TRAINER_1D63E5A1] =
    {
#line 6269
        .trainerName = _("Blank"),
#line 6270
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6271
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6273
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6275
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6274
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6276
    [DIFFICULTY_NORMAL][TRAINER_1D7A6DED] =
    {
#line 6277
        .trainerName = _("Blank"),
#line 6278
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6279
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6281
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6283
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6282
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6284
    [DIFFICULTY_NORMAL][TRAINER_1D93B10D] =
    {
#line 6285
        .trainerName = _("Blank"),
#line 6286
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6287
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6289
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6291
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6290
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6292
    [DIFFICULTY_NORMAL][TRAINER_1DD07C78] =
    {
#line 6293
        .trainerName = _("Blank"),
#line 6294
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6295
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6297
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6299
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6298
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6300
    [DIFFICULTY_NORMAL][TRAINER_1E5E6E80] =
    {
#line 6301
        .trainerName = _("Blank"),
#line 6302
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6303
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6305
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6307
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6306
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6308
    [DIFFICULTY_NORMAL][TRAINER_1EE34E30] =
    {
#line 6309
        .trainerName = _("Blank"),
#line 6310
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6311
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6313
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6315
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6314
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6316
    [DIFFICULTY_NORMAL][TRAINER_1F24A6B1] =
    {
#line 6317
        .trainerName = _("Blank"),
#line 6318
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6319
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6321
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6323
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6322
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6324
    [DIFFICULTY_NORMAL][TRAINER_1F2A70D3] =
    {
#line 6325
        .trainerName = _("Blank"),
#line 6326
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6327
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6329
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6331
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6330
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6332
    [DIFFICULTY_NORMAL][TRAINER_1FD08020] =
    {
#line 6333
        .trainerName = _("Blank"),
#line 6334
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6335
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6337
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6339
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6338
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6340
    [DIFFICULTY_NORMAL][TRAINER_200650CA] =
    {
#line 6341
        .trainerName = _("Blank"),
#line 6342
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6343
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6345
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6347
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6346
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6348
    [DIFFICULTY_NORMAL][TRAINER_20170FA5] =
    {
#line 6349
        .trainerName = _("Blank"),
#line 6350
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6351
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6353
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6355
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6354
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6356
    [DIFFICULTY_NORMAL][TRAINER_20993B87] =
    {
#line 6357
        .trainerName = _("Blank"),
#line 6358
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6359
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6361
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6363
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6362
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6364
    [DIFFICULTY_NORMAL][TRAINER_20A10A97] =
    {
#line 6365
        .trainerName = _("Blank"),
#line 6366
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6367
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6369
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6371
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6370
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6372
    [DIFFICULTY_NORMAL][TRAINER_20A6F3A6] =
    {
#line 6373
        .trainerName = _("Blank"),
#line 6374
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6375
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6377
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6379
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6378
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6380
    [DIFFICULTY_NORMAL][TRAINER_20DC389D] =
    {
#line 6381
        .trainerName = _("Blank"),
#line 6382
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6383
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6385
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6387
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6386
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6388
    [DIFFICULTY_NORMAL][TRAINER_2177173C] =
    {
#line 6389
        .trainerName = _("Blank"),
#line 6390
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6391
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6393
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6395
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6394
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6396
    [DIFFICULTY_NORMAL][TRAINER_2180E5CD] =
    {
#line 6397
        .trainerName = _("Blank"),
#line 6398
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6399
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6401
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6403
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6402
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6404
    [DIFFICULTY_NORMAL][TRAINER_21EB8B2C] =
    {
#line 6405
        .trainerName = _("Blank"),
#line 6406
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6407
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6409
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6411
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6410
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6412
    [DIFFICULTY_NORMAL][TRAINER_22BA389B] =
    {
#line 6413
        .trainerName = _("Blank"),
#line 6414
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6417
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6419
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6418
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6420
    [DIFFICULTY_NORMAL][TRAINER_22DD5E2B] =
    {
#line 6421
        .trainerName = _("Blank"),
#line 6422
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6423
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6425
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6427
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6426
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6428
    [DIFFICULTY_NORMAL][TRAINER_22E7DE36] =
    {
#line 6429
        .trainerName = _("Blank"),
#line 6430
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6431
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6433
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6435
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6434
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6436
    [DIFFICULTY_NORMAL][TRAINER_23C3170F] =
    {
#line 6437
        .trainerName = _("Blank"),
#line 6438
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6439
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6441
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6443
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6442
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6444
    [DIFFICULTY_NORMAL][TRAINER_23F50BC3] =
    {
#line 6445
        .trainerName = _("Blank"),
#line 6446
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6447
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6449
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6451
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6450
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6452
    [DIFFICULTY_NORMAL][TRAINER_2434A25C] =
    {
#line 6453
        .trainerName = _("Blank"),
#line 6454
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6455
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6457
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6459
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6458
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6460
    [DIFFICULTY_NORMAL][TRAINER_245235C9] =
    {
#line 6461
        .trainerName = _("Blank"),
#line 6462
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6463
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6465
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6467
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6466
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6468
    [DIFFICULTY_NORMAL][TRAINER_246CBBD5] =
    {
#line 6469
        .trainerName = _("Blank"),
#line 6470
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6471
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6473
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6475
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6474
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6476
    [DIFFICULTY_NORMAL][TRAINER_247FE019] =
    {
#line 6477
        .trainerName = _("Blank"),
#line 6478
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6479
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6481
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6483
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6482
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6484
    [DIFFICULTY_NORMAL][TRAINER_24AAFD0D] =
    {
#line 6485
        .trainerName = _("Blank"),
#line 6486
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6487
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6489
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6491
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6490
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6492
    [DIFFICULTY_NORMAL][TRAINER_24AC96DF] =
    {
#line 6493
        .trainerName = _("Blank"),
#line 6494
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6495
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6497
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6499
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6498
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6500
    [DIFFICULTY_NORMAL][TRAINER_2561CB61] =
    {
#line 6501
        .trainerName = _("Blank"),
#line 6502
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6503
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6505
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6507
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6506
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6508
    [DIFFICULTY_NORMAL][TRAINER_26268FB4] =
    {
#line 6509
        .trainerName = _("Blank"),
#line 6510
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6511
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6513
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6515
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6514
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6516
    [DIFFICULTY_NORMAL][TRAINER_265174A6] =
    {
#line 6517
        .trainerName = _("Blank"),
#line 6518
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6519
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6521
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6523
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6522
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6524
    [DIFFICULTY_NORMAL][TRAINER_272FA5B8] =
    {
#line 6525
        .trainerName = _("Blank"),
#line 6526
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6527
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6529
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6531
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6530
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6532
    [DIFFICULTY_NORMAL][TRAINER_27B23C10] =
    {
#line 6533
        .trainerName = _("Blank"),
#line 6534
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6535
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6537
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6539
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6538
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6540
    [DIFFICULTY_NORMAL][TRAINER_27CEF8F2] =
    {
#line 6541
        .trainerName = _("Blank"),
#line 6542
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6543
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6545
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6547
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6546
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6548
    [DIFFICULTY_NORMAL][TRAINER_27E6F69F] =
    {
#line 6549
        .trainerName = _("Blank"),
#line 6550
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6551
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6553
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6555
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6554
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6556
    [DIFFICULTY_NORMAL][TRAINER_28B294D2] =
    {
#line 6557
        .trainerName = _("Blank"),
#line 6558
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6561
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6563
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6562
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6564
    [DIFFICULTY_NORMAL][TRAINER_28E0625E] =
    {
#line 6565
        .trainerName = _("Blank"),
#line 6566
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6567
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6569
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6571
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6570
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6572
    [DIFFICULTY_NORMAL][TRAINER_292E386F] =
    {
#line 6573
        .trainerName = _("Blank"),
#line 6574
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6575
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6577
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6579
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6578
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6580
    [DIFFICULTY_NORMAL][TRAINER_29AE727B] =
    {
#line 6581
        .trainerName = _("Blank"),
#line 6582
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6583
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6585
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6587
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6586
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6588
    [DIFFICULTY_NORMAL][TRAINER_2A305E88] =
    {
#line 6589
        .trainerName = _("Blank"),
#line 6590
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6591
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6593
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6595
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6594
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6596
    [DIFFICULTY_NORMAL][TRAINER_2A3F43CA] =
    {
#line 6597
        .trainerName = _("Blank"),
#line 6598
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6599
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6601
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6603
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6602
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6604
    [DIFFICULTY_NORMAL][TRAINER_2A7BF9FF] =
    {
#line 6605
        .trainerName = _("Blank"),
#line 6606
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6607
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6609
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6611
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6610
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6612
    [DIFFICULTY_NORMAL][TRAINER_2A83B15E] =
    {
#line 6613
        .trainerName = _("Blank"),
#line 6614
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6615
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6617
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6619
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6618
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6620
    [DIFFICULTY_NORMAL][TRAINER_2AD73BF3] =
    {
#line 6621
        .trainerName = _("Blank"),
#line 6622
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6623
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6625
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6627
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6626
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6628
    [DIFFICULTY_NORMAL][TRAINER_2B163825] =
    {
#line 6629
        .trainerName = _("Blank"),
#line 6630
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6631
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6633
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6635
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6634
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6636
    [DIFFICULTY_NORMAL][TRAINER_2B249E40] =
    {
#line 6637
        .trainerName = _("Blank"),
#line 6638
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6639
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6641
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6643
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6642
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6644
    [DIFFICULTY_NORMAL][TRAINER_2BCA066C] =
    {
#line 6645
        .trainerName = _("Blank"),
#line 6646
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6647
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6649
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6651
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6650
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6652
    [DIFFICULTY_NORMAL][TRAINER_2C040422] =
    {
#line 6653
        .trainerName = _("Blank"),
#line 6654
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6655
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6657
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6659
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6658
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6660
    [DIFFICULTY_NORMAL][TRAINER_2C22CE48] =
    {
#line 6661
        .trainerName = _("Blank"),
#line 6662
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6663
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6665
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6667
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6666
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6668
    [DIFFICULTY_NORMAL][TRAINER_2C398893] =
    {
#line 6669
        .trainerName = _("Blank"),
#line 6670
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6671
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6673
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6675
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6674
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6676
    [DIFFICULTY_NORMAL][TRAINER_2C5FFA9F] =
    {
#line 6677
        .trainerName = _("Blank"),
#line 6678
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6679
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6681
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6683
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6682
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6684
    [DIFFICULTY_NORMAL][TRAINER_2D1A100A] =
    {
#line 6685
        .trainerName = _("Blank"),
#line 6686
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6687
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6689
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6691
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6690
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6692
    [DIFFICULTY_NORMAL][TRAINER_2D203158] =
    {
#line 6693
        .trainerName = _("Blank"),
#line 6694
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6695
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6697
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6699
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6698
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6700
    [DIFFICULTY_NORMAL][TRAINER_2D29DC23] =
    {
#line 6701
        .trainerName = _("Blank"),
#line 6702
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6703
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6705
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6707
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6706
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6708
    [DIFFICULTY_NORMAL][TRAINER_2D6DE246] =
    {
#line 6709
        .trainerName = _("Blank"),
#line 6710
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6711
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6713
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6715
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6714
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6716
    [DIFFICULTY_NORMAL][TRAINER_2D92F001] =
    {
#line 6717
        .trainerName = _("Blank"),
#line 6718
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6719
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6721
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6723
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6722
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6724
    [DIFFICULTY_NORMAL][TRAINER_2DC29B9E] =
    {
#line 6725
        .trainerName = _("Blank"),
#line 6726
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6727
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6729
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6731
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6730
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6732
    [DIFFICULTY_NORMAL][TRAINER_2E218A8E] =
    {
#line 6733
        .trainerName = _("Blank"),
#line 6734
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6735
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6737
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6739
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6738
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6740
    [DIFFICULTY_NORMAL][TRAINER_2E593FA9] =
    {
#line 6741
        .trainerName = _("Blank"),
#line 6742
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6743
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6745
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6747
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6746
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6748
    [DIFFICULTY_NORMAL][TRAINER_2EC49459] =
    {
#line 6749
        .trainerName = _("Blank"),
#line 6750
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6753
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6755
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6754
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6756
    [DIFFICULTY_NORMAL][TRAINER_2F0770D3] =
    {
#line 6757
        .trainerName = _("Blank"),
#line 6758
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6759
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6761
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6763
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6762
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6764
    [DIFFICULTY_NORMAL][TRAINER_2F09421D] =
    {
#line 6765
        .trainerName = _("Blank"),
#line 6766
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6767
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6769
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6771
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6770
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6772
    [DIFFICULTY_NORMAL][TRAINER_2FF79A0B] =
    {
#line 6773
        .trainerName = _("Blank"),
#line 6774
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6775
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6777
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6779
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6778
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6780
    [DIFFICULTY_NORMAL][TRAINER_3009CC76] =
    {
#line 6781
        .trainerName = _("Blank"),
#line 6782
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6783
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6785
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6787
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6786
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6788
    [DIFFICULTY_NORMAL][TRAINER_30522A9A] =
    {
#line 6789
        .trainerName = _("Blank"),
#line 6790
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6791
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6793
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6795
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6794
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6796
    [DIFFICULTY_NORMAL][TRAINER_30ACE135] =
    {
#line 6797
        .trainerName = _("Blank"),
#line 6798
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6799
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6801
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6803
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6802
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6804
    [DIFFICULTY_NORMAL][TRAINER_311B3EFC] =
    {
#line 6805
        .trainerName = _("Blank"),
#line 6806
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6807
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6809
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6811
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6810
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6812
    [DIFFICULTY_NORMAL][TRAINER_317B8932] =
    {
#line 6813
        .trainerName = _("Blank"),
#line 6814
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6815
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6817
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6819
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6818
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6820
    [DIFFICULTY_NORMAL][TRAINER_31D36FE6] =
    {
#line 6821
        .trainerName = _("Blank"),
#line 6822
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6823
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6825
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6827
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6826
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6828
    [DIFFICULTY_NORMAL][TRAINER_32C1F13D] =
    {
#line 6829
        .trainerName = _("Blank"),
#line 6830
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6831
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6833
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6835
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6834
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6836
    [DIFFICULTY_NORMAL][TRAINER_33AB4856] =
    {
#line 6837
        .trainerName = _("Blank"),
#line 6838
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6839
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6841
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6843
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6842
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6844
    [DIFFICULTY_NORMAL][TRAINER_3566F099] =
    {
#line 6845
        .trainerName = _("Blank"),
#line 6846
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6847
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6849
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6851
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6850
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6852
    [DIFFICULTY_NORMAL][TRAINER_35E0E027] =
    {
#line 6853
        .trainerName = _("Blank"),
#line 6854
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6855
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6857
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6859
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6858
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6860
    [DIFFICULTY_NORMAL][TRAINER_36662EEF] =
    {
#line 6861
        .trainerName = _("Blank"),
#line 6862
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6863
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6865
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6867
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6866
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6868
    [DIFFICULTY_NORMAL][TRAINER_3681E8DE] =
    {
#line 6869
        .trainerName = _("Blank"),
#line 6870
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6871
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6873
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6875
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6874
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6876
    [DIFFICULTY_NORMAL][TRAINER_3789DC6E] =
    {
#line 6877
        .trainerName = _("Blank"),
#line 6878
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6879
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6881
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6883
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6882
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6884
    [DIFFICULTY_NORMAL][TRAINER_37B9EFB7] =
    {
#line 6885
        .trainerName = _("Blank"),
#line 6886
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6887
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6889
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6891
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6890
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6892
    [DIFFICULTY_NORMAL][TRAINER_37EDB78E] =
    {
#line 6893
        .trainerName = _("Blank"),
#line 6894
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6895
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6897
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6899
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6898
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6900
    [DIFFICULTY_NORMAL][TRAINER_382E2AB3] =
    {
#line 6901
        .trainerName = _("Blank"),
#line 6902
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6903
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6905
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6907
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6906
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6908
    [DIFFICULTY_NORMAL][TRAINER_3842496B] =
    {
#line 6909
        .trainerName = _("Blank"),
#line 6910
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6913
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6915
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6914
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6916
    [DIFFICULTY_NORMAL][TRAINER_387351C1] =
    {
#line 6917
        .trainerName = _("Blank"),
#line 6918
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6919
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6921
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6923
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6922
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6924
    [DIFFICULTY_NORMAL][TRAINER_38A47BDB] =
    {
#line 6925
        .trainerName = _("Blank"),
#line 6926
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6927
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6929
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6931
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6930
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6932
    [DIFFICULTY_NORMAL][TRAINER_3924756E] =
    {
#line 6933
        .trainerName = _("Blank"),
#line 6934
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6935
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6937
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6939
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6938
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6940
    [DIFFICULTY_NORMAL][TRAINER_3947ACC3] =
    {
#line 6941
        .trainerName = _("Blank"),
#line 6942
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6943
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6945
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6947
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6946
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6948
    [DIFFICULTY_NORMAL][TRAINER_39AD4606] =
    {
#line 6949
        .trainerName = _("Blank"),
#line 6950
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6951
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6953
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6955
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6954
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6956
    [DIFFICULTY_NORMAL][TRAINER_39E0AE4F] =
    {
#line 6957
        .trainerName = _("Blank"),
#line 6958
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6959
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6961
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6963
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6962
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6964
    [DIFFICULTY_NORMAL][TRAINER_39E78D45] =
    {
#line 6965
        .trainerName = _("Blank"),
#line 6966
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6967
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6969
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6971
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6970
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6972
    [DIFFICULTY_NORMAL][TRAINER_3A11452B] =
    {
#line 6973
        .trainerName = _("Blank"),
#line 6974
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6975
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6977
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6979
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6978
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6980
    [DIFFICULTY_NORMAL][TRAINER_3A840205] =
    {
#line 6981
        .trainerName = _("Blank"),
#line 6982
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6983
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6985
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6987
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6986
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6988
    [DIFFICULTY_NORMAL][TRAINER_3AD97475] =
    {
#line 6989
        .trainerName = _("Blank"),
#line 6990
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6991
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6993
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6995
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6994
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6996
    [DIFFICULTY_NORMAL][TRAINER_3AEE4974] =
    {
#line 6997
        .trainerName = _("Blank"),
#line 6998
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6999
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7001
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7003
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7002
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7004
    [DIFFICULTY_NORMAL][TRAINER_3BAF0C60] =
    {
#line 7005
        .trainerName = _("Blank"),
#line 7006
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7007
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7009
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7011
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7010
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7012
    [DIFFICULTY_NORMAL][TRAINER_3BDED445] =
    {
#line 7013
        .trainerName = _("Blank"),
#line 7014
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7015
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7017
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7019
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7018
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7020
    [DIFFICULTY_NORMAL][TRAINER_3C621048] =
    {
#line 7021
        .trainerName = _("Blank"),
#line 7022
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7023
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7025
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7027
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7026
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7028
    [DIFFICULTY_NORMAL][TRAINER_3C74DAE2] =
    {
#line 7029
        .trainerName = _("Blank"),
#line 7030
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7031
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7033
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7035
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7034
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7036
    [DIFFICULTY_NORMAL][TRAINER_3C7AC359] =
    {
#line 7037
        .trainerName = _("Blank"),
#line 7038
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7039
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7041
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7043
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7042
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7044
    [DIFFICULTY_NORMAL][TRAINER_3CDE5F9E] =
    {
#line 7045
        .trainerName = _("Blank"),
#line 7046
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7047
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7049
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7051
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7050
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7052
    [DIFFICULTY_NORMAL][TRAINER_3CECE368] =
    {
#line 7053
        .trainerName = _("Blank"),
#line 7054
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7055
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7057
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7059
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7058
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7060
    [DIFFICULTY_NORMAL][TRAINER_3CFF3841] =
    {
#line 7061
        .trainerName = _("Blank"),
#line 7062
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7063
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7065
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7067
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7066
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7068
    [DIFFICULTY_NORMAL][TRAINER_3D502E2F] =
    {
#line 7069
        .trainerName = _("Blank"),
#line 7070
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7071
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7073
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7075
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7074
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7076
    [DIFFICULTY_NORMAL][TRAINER_3D7FDE57] =
    {
#line 7077
        .trainerName = _("Blank"),
#line 7078
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7079
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7081
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7083
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7082
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7084
    [DIFFICULTY_NORMAL][TRAINER_3DCD0BBC] =
    {
#line 7085
        .trainerName = _("Blank"),
#line 7086
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7087
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7089
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7091
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7090
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7092
    [DIFFICULTY_NORMAL][TRAINER_3E17924C] =
    {
#line 7093
        .trainerName = _("Blank"),
#line 7094
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7095
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7097
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7099
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7098
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7100
    [DIFFICULTY_NORMAL][TRAINER_3EB6FA04] =
    {
#line 7101
        .trainerName = _("Blank"),
#line 7102
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7103
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7105
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7107
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7106
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7108
    [DIFFICULTY_NORMAL][TRAINER_3EFCF1C8] =
    {
#line 7109
        .trainerName = _("Blank"),
#line 7110
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7111
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7113
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7115
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7114
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7116
    [DIFFICULTY_NORMAL][TRAINER_3F0BF52E] =
    {
#line 7117
        .trainerName = _("Blank"),
#line 7118
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7119
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7121
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7123
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7122
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7124
    [DIFFICULTY_NORMAL][TRAINER_4000C8A0] =
    {
#line 7125
        .trainerName = _("Blank"),
#line 7126
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7127
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7129
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7131
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7130
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7132
    [DIFFICULTY_NORMAL][TRAINER_403D932D] =
    {
#line 7133
        .trainerName = _("Blank"),
#line 7134
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7135
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7137
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7139
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7138
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7140
    [DIFFICULTY_NORMAL][TRAINER_408862C4] =
    {
#line 7141
        .trainerName = _("Blank"),
#line 7142
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7143
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7145
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7147
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7146
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7148
    [DIFFICULTY_NORMAL][TRAINER_419282AD] =
    {
#line 7149
        .trainerName = _("Blank"),
#line 7150
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7151
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7153
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7155
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7154
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7156
    [DIFFICULTY_NORMAL][TRAINER_419FCBAE] =
    {
#line 7157
        .trainerName = _("Blank"),
#line 7158
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7159
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7161
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7163
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7162
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7164
    [DIFFICULTY_NORMAL][TRAINER_41B8591B] =
    {
#line 7165
        .trainerName = _("Blank"),
#line 7166
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7167
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7169
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7171
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7170
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7172
    [DIFFICULTY_NORMAL][TRAINER_41DCF7BA] =
    {
#line 7173
        .trainerName = _("Blank"),
#line 7174
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7175
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7177
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7179
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7178
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7180
    [DIFFICULTY_NORMAL][TRAINER_4227B911] =
    {
#line 7181
        .trainerName = _("Blank"),
#line 7182
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7183
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7185
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7187
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7186
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7188
    [DIFFICULTY_NORMAL][TRAINER_4239B726] =
    {
#line 7189
        .trainerName = _("Blank"),
#line 7190
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7193
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7195
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7194
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7196
    [DIFFICULTY_NORMAL][TRAINER_42BC1D70] =
    {
#line 7197
        .trainerName = _("Blank"),
#line 7198
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7199
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7201
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7203
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7202
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7204
    [DIFFICULTY_NORMAL][TRAINER_42BE3E94] =
    {
#line 7205
        .trainerName = _("Blank"),
#line 7206
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7209
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7211
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7210
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7212
    [DIFFICULTY_NORMAL][TRAINER_42C68371] =
    {
#line 7213
        .trainerName = _("Blank"),
#line 7214
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7215
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7217
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7219
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7218
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7220
    [DIFFICULTY_NORMAL][TRAINER_432F34FA] =
    {
#line 7221
        .trainerName = _("Blank"),
#line 7222
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7223
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7225
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7227
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7226
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7228
    [DIFFICULTY_NORMAL][TRAINER_437E553A] =
    {
#line 7229
        .trainerName = _("Blank"),
#line 7230
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7231
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7233
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7235
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7234
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7236
    [DIFFICULTY_NORMAL][TRAINER_4394141C] =
    {
#line 7237
        .trainerName = _("Blank"),
#line 7238
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7239
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7241
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7243
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7242
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7244
    [DIFFICULTY_NORMAL][TRAINER_43B111AD] =
    {
#line 7245
        .trainerName = _("Blank"),
#line 7246
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7247
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7249
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7251
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7250
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7252
    [DIFFICULTY_NORMAL][TRAINER_43B30B5D] =
    {
#line 7253
        .trainerName = _("Blank"),
#line 7254
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7255
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7257
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7259
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7258
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7260
    [DIFFICULTY_NORMAL][TRAINER_43D6557C] =
    {
#line 7261
        .trainerName = _("Blank"),
#line 7262
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7263
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7265
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7267
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7266
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7268
    [DIFFICULTY_NORMAL][TRAINER_44251BF9] =
    {
#line 7269
        .trainerName = _("Blank"),
#line 7270
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7271
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7273
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7275
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7274
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7276
    [DIFFICULTY_NORMAL][TRAINER_44D28B98] =
    {
#line 7277
        .trainerName = _("Blank"),
#line 7278
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7279
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7281
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7283
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7282
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7284
    [DIFFICULTY_NORMAL][TRAINER_44E68738] =
    {
#line 7285
        .trainerName = _("Blank"),
#line 7286
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7287
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7289
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7291
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7290
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7292
    [DIFFICULTY_NORMAL][TRAINER_44F86666] =
    {
#line 7293
        .trainerName = _("Blank"),
#line 7294
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7295
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7297
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7299
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7298
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7300
    [DIFFICULTY_NORMAL][TRAINER_458C3B90] =
    {
#line 7301
        .trainerName = _("Blank"),
#line 7302
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7303
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7305
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7307
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7306
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7308
    [DIFFICULTY_NORMAL][TRAINER_45CBA787] =
    {
#line 7309
        .trainerName = _("Blank"),
#line 7310
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7311
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7313
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7315
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7314
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7316
    [DIFFICULTY_NORMAL][TRAINER_45E5EB22] =
    {
#line 7317
        .trainerName = _("Blank"),
#line 7318
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7319
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7321
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7323
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7322
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7324
    [DIFFICULTY_NORMAL][TRAINER_45ECBA80] =
    {
#line 7325
        .trainerName = _("Blank"),
#line 7326
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7327
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7329
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7331
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7330
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7332
    [DIFFICULTY_NORMAL][TRAINER_460AB144] =
    {
#line 7333
        .trainerName = _("Blank"),
#line 7334
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7335
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7337
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7339
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7338
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7340
    [DIFFICULTY_NORMAL][TRAINER_46169EA5] =
    {
#line 7341
        .trainerName = _("Blank"),
#line 7342
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7343
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7345
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7347
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7346
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7348
    [DIFFICULTY_NORMAL][TRAINER_464C4C44] =
    {
#line 7349
        .trainerName = _("Blank"),
#line 7350
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7351
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7353
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7355
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7354
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7356
    [DIFFICULTY_NORMAL][TRAINER_473EE9DE] =
    {
#line 7357
        .trainerName = _("Blank"),
#line 7358
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7359
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7361
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7363
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7362
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7364
    [DIFFICULTY_NORMAL][TRAINER_4787A98D] =
    {
#line 7365
        .trainerName = _("Blank"),
#line 7366
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7367
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7369
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7371
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7370
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7372
    [DIFFICULTY_NORMAL][TRAINER_479BBFEB] =
    {
#line 7373
        .trainerName = _("Blank"),
#line 7374
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7375
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7377
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7379
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7378
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7380
    [DIFFICULTY_NORMAL][TRAINER_47EACF7E] =
    {
#line 7381
        .trainerName = _("Blank"),
#line 7382
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7383
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7385
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7387
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7386
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7388
    [DIFFICULTY_NORMAL][TRAINER_4848801D] =
    {
#line 7389
        .trainerName = _("Blank"),
#line 7390
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7391
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7393
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7395
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7394
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7396
    [DIFFICULTY_NORMAL][TRAINER_487BEC6D] =
    {
#line 7397
        .trainerName = _("Blank"),
#line 7398
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7399
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7401
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7403
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7402
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7404
    [DIFFICULTY_NORMAL][TRAINER_492E0A66] =
    {
#line 7405
        .trainerName = _("Blank"),
#line 7406
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7407
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7409
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7411
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7410
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7412
    [DIFFICULTY_NORMAL][TRAINER_494ECB35] =
    {
#line 7413
        .trainerName = _("Blank"),
#line 7414
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7417
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7419
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7418
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7420
    [DIFFICULTY_NORMAL][TRAINER_494F5379] =
    {
#line 7421
        .trainerName = _("Blank"),
#line 7422
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7423
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7425
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7427
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7426
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7428
    [DIFFICULTY_NORMAL][TRAINER_49805D55] =
    {
#line 7429
        .trainerName = _("Blank"),
#line 7430
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7431
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7433
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7435
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7434
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7436
    [DIFFICULTY_NORMAL][TRAINER_49EA8A40] =
    {
#line 7437
        .trainerName = _("Blank"),
#line 7438
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7439
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7441
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7443
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7442
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7444
    [DIFFICULTY_NORMAL][TRAINER_4A323E4A] =
    {
#line 7445
        .trainerName = _("Blank"),
#line 7446
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7447
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7449
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7451
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7450
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7452
    [DIFFICULTY_NORMAL][TRAINER_4A3EB696] =
    {
#line 7453
        .trainerName = _("Blank"),
#line 7454
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7455
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7457
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7459
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7458
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7460
    [DIFFICULTY_NORMAL][TRAINER_4ABDB43A] =
    {
#line 7461
        .trainerName = _("Blank"),
#line 7462
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7463
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7465
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7467
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7466
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7468
    [DIFFICULTY_NORMAL][TRAINER_4AD6DB47] =
    {
#line 7469
        .trainerName = _("Blank"),
#line 7470
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7471
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7473
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7475
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7474
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7476
    [DIFFICULTY_NORMAL][TRAINER_4AF51B8A] =
    {
#line 7477
        .trainerName = _("Blank"),
#line 7478
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7479
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7481
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7483
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7482
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7484
    [DIFFICULTY_NORMAL][TRAINER_4B2BC403] =
    {
#line 7485
        .trainerName = _("Blank"),
#line 7486
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7487
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7489
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7491
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7490
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7492
    [DIFFICULTY_NORMAL][TRAINER_4B3B0356] =
    {
#line 7493
        .trainerName = _("Blank"),
#line 7494
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7495
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7497
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7499
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7498
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7500
    [DIFFICULTY_NORMAL][TRAINER_4B431569] =
    {
#line 7501
        .trainerName = _("Blank"),
#line 7502
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7503
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7505
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7507
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7506
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7508
    [DIFFICULTY_NORMAL][TRAINER_4B5B4954] =
    {
#line 7509
        .trainerName = _("Blank"),
#line 7510
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7511
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7513
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7515
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7514
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7516
    [DIFFICULTY_NORMAL][TRAINER_4C2D23EC] =
    {
#line 7517
        .trainerName = _("Blank"),
#line 7518
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7519
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7521
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7523
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7522
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7524
    [DIFFICULTY_NORMAL][TRAINER_4CE97031] =
    {
#line 7525
        .trainerName = _("Blank"),
#line 7526
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7527
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7529
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7531
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7530
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7532
    [DIFFICULTY_NORMAL][TRAINER_4CF43F23] =
    {
#line 7533
        .trainerName = _("Blank"),
#line 7534
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7535
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7537
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7539
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7538
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7540
    [DIFFICULTY_NORMAL][TRAINER_4D8F9D46] =
    {
#line 7541
        .trainerName = _("Blank"),
#line 7542
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7543
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7545
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7547
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7546
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7548
    [DIFFICULTY_NORMAL][TRAINER_4D98F6C4] =
    {
#line 7549
        .trainerName = _("Blank"),
#line 7550
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7551
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7553
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7555
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7554
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7556
    [DIFFICULTY_NORMAL][TRAINER_4E072263] =
    {
#line 7557
        .trainerName = _("Blank"),
#line 7558
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7561
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7563
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7562
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7564
    [DIFFICULTY_NORMAL][TRAINER_4E0C1EFE] =
    {
#line 7565
        .trainerName = _("Blank"),
#line 7566
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7567
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7569
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7571
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7570
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7572
    [DIFFICULTY_NORMAL][TRAINER_4E226A6E] =
    {
#line 7573
        .trainerName = _("Blank"),
#line 7574
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7575
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7577
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7579
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7578
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7580
    [DIFFICULTY_NORMAL][TRAINER_4E5AAFAE] =
    {
#line 7581
        .trainerName = _("Blank"),
#line 7582
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7583
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7585
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7587
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7586
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7588
    [DIFFICULTY_NORMAL][TRAINER_4F10DCA9] =
    {
#line 7589
        .trainerName = _("Blank"),
#line 7590
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7591
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7593
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7595
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7594
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7596
    [DIFFICULTY_NORMAL][TRAINER_50AE78E5] =
    {
#line 7597
        .trainerName = _("Blank"),
#line 7598
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7599
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7601
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7603
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7602
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7604
    [DIFFICULTY_NORMAL][TRAINER_513A43EE] =
    {
#line 7605
        .trainerName = _("Blank"),
#line 7606
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7607
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7609
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7611
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7610
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7612
    [DIFFICULTY_NORMAL][TRAINER_51A32DCA] =
    {
#line 7613
        .trainerName = _("Blank"),
#line 7614
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7615
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7617
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7619
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7618
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7620
    [DIFFICULTY_NORMAL][TRAINER_51F6B834] =
    {
#line 7621
        .trainerName = _("Blank"),
#line 7622
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7623
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7625
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7627
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7626
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7628
    [DIFFICULTY_NORMAL][TRAINER_5209EDF0] =
    {
#line 7629
        .trainerName = _("Blank"),
#line 7630
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7631
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7633
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7635
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7634
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7636
    [DIFFICULTY_NORMAL][TRAINER_52CFC159] =
    {
#line 7637
        .trainerName = _("Blank"),
#line 7638
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7639
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7641
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7643
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7642
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7644
    [DIFFICULTY_NORMAL][TRAINER_538D052D] =
    {
#line 7645
        .trainerName = _("Blank"),
#line 7646
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7647
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7649
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7651
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7650
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7652
    [DIFFICULTY_NORMAL][TRAINER_53A1A61A] =
    {
#line 7653
        .trainerName = _("Blank"),
#line 7654
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7655
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7657
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7659
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7658
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7660
    [DIFFICULTY_NORMAL][TRAINER_53B06C7B] =
    {
#line 7661
        .trainerName = _("Blank"),
#line 7662
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7663
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7665
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7667
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7666
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7668
    [DIFFICULTY_NORMAL][TRAINER_54110A38] =
    {
#line 7669
        .trainerName = _("Blank"),
#line 7670
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7671
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7673
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7675
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7674
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7676
    [DIFFICULTY_NORMAL][TRAINER_549792BA] =
    {
#line 7677
        .trainerName = _("Blank"),
#line 7678
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7679
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7681
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7683
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7682
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7684
    [DIFFICULTY_NORMAL][TRAINER_54BAC2DA] =
    {
#line 7685
        .trainerName = _("Blank"),
#line 7686
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7687
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7689
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7691
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7690
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7692
    [DIFFICULTY_NORMAL][TRAINER_54F170BE] =
    {
#line 7693
        .trainerName = _("Blank"),
#line 7694
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7695
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7697
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7699
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7698
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7700
    [DIFFICULTY_NORMAL][TRAINER_558F80F9] =
    {
#line 7701
        .trainerName = _("Blank"),
#line 7702
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7703
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7705
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7707
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7706
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7708
    [DIFFICULTY_NORMAL][TRAINER_55CA00A1] =
    {
#line 7709
        .trainerName = _("Blank"),
#line 7710
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7711
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7713
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7715
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7714
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7716
    [DIFFICULTY_NORMAL][TRAINER_55D0BEAA] =
    {
#line 7717
        .trainerName = _("Blank"),
#line 7718
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7719
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7721
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7723
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7722
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7724
    [DIFFICULTY_NORMAL][TRAINER_55D90FA8] =
    {
#line 7725
        .trainerName = _("Blank"),
#line 7726
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7727
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7729
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7731
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7730
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7732
    [DIFFICULTY_NORMAL][TRAINER_55EBF949] =
    {
#line 7733
        .trainerName = _("Blank"),
#line 7734
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7735
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7737
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7739
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7738
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7740
    [DIFFICULTY_NORMAL][TRAINER_565DE3C4] =
    {
#line 7741
        .trainerName = _("Blank"),
#line 7742
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7743
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7745
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7747
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7746
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7748
    [DIFFICULTY_NORMAL][TRAINER_56775C71] =
    {
#line 7749
        .trainerName = _("Blank"),
#line 7750
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7753
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7755
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7754
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7756
    [DIFFICULTY_NORMAL][TRAINER_56C1FE08] =
    {
#line 7757
        .trainerName = _("Blank"),
#line 7758
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7759
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7761
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7763
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7762
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7764
    [DIFFICULTY_NORMAL][TRAINER_56E6EFAA] =
    {
#line 7765
        .trainerName = _("Blank"),
#line 7766
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7767
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7769
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7771
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7770
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7772
    [DIFFICULTY_NORMAL][TRAINER_57E254F5] =
    {
#line 7773
        .trainerName = _("Blank"),
#line 7774
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7775
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7777
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7779
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7778
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7780
    [DIFFICULTY_NORMAL][TRAINER_57E7E83A] =
    {
#line 7781
        .trainerName = _("Blank"),
#line 7782
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7783
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7785
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7787
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7786
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7788
    [DIFFICULTY_NORMAL][TRAINER_5819E497] =
    {
#line 7789
        .trainerName = _("Blank"),
#line 7790
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7791
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7793
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7795
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7794
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7796
    [DIFFICULTY_NORMAL][TRAINER_58A6A51E] =
    {
#line 7797
        .trainerName = _("Blank"),
#line 7798
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7799
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7801
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7803
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7802
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7804
    [DIFFICULTY_NORMAL][TRAINER_58BEBECC] =
    {
#line 7805
        .trainerName = _("Blank"),
#line 7806
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7807
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7809
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7811
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7810
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7812
    [DIFFICULTY_NORMAL][TRAINER_58F43966] =
    {
#line 7813
        .trainerName = _("Blank"),
#line 7814
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7815
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7817
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7819
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7818
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7820
    [DIFFICULTY_NORMAL][TRAINER_59592DE4] =
    {
#line 7821
        .trainerName = _("Blank"),
#line 7822
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7823
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7825
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7827
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7826
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7828
    [DIFFICULTY_NORMAL][TRAINER_598585C1] =
    {
#line 7829
        .trainerName = _("Blank"),
#line 7830
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7831
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7833
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7835
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7834
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7836
    [DIFFICULTY_NORMAL][TRAINER_59981F0D] =
    {
#line 7837
        .trainerName = _("Blank"),
#line 7838
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7839
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7841
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7843
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7842
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7844
    [DIFFICULTY_NORMAL][TRAINER_59E335AB] =
    {
#line 7845
        .trainerName = _("Blank"),
#line 7846
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7847
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7849
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7851
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7850
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7852
    [DIFFICULTY_NORMAL][TRAINER_59FFFCED] =
    {
#line 7853
        .trainerName = _("Blank"),
#line 7854
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7855
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7857
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7859
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7858
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7860
    [DIFFICULTY_NORMAL][TRAINER_5ABF4FA4] =
    {
#line 7861
        .trainerName = _("Blank"),
#line 7862
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7863
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7865
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7867
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7866
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7868
    [DIFFICULTY_NORMAL][TRAINER_5AC61FE5] =
    {
#line 7869
        .trainerName = _("Blank"),
#line 7870
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7871
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7873
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7875
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7874
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7876
    [DIFFICULTY_NORMAL][TRAINER_5AD29FF8] =
    {
#line 7877
        .trainerName = _("Blank"),
#line 7878
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7879
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7881
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7883
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7882
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7884
    [DIFFICULTY_NORMAL][TRAINER_5AD4C218] =
    {
#line 7885
        .trainerName = _("Blank"),
#line 7886
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7887
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7889
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7891
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7890
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7892
    [DIFFICULTY_NORMAL][TRAINER_5B5F6AE8] =
    {
#line 7893
        .trainerName = _("Blank"),
#line 7894
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7895
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7897
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7899
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7898
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7900
    [DIFFICULTY_NORMAL][TRAINER_5B6304FF] =
    {
#line 7901
        .trainerName = _("Blank"),
#line 7902
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7903
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7905
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7907
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7906
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7908
    [DIFFICULTY_NORMAL][TRAINER_5B75B30F] =
    {
#line 7909
        .trainerName = _("Blank"),
#line 7910
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7913
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7915
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7914
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7916
    [DIFFICULTY_NORMAL][TRAINER_5B983361] =
    {
#line 7917
        .trainerName = _("Blank"),
#line 7918
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7919
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7921
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7923
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7922
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7924
    [DIFFICULTY_NORMAL][TRAINER_5BD8EA81] =
    {
#line 7925
        .trainerName = _("Blank"),
#line 7926
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7927
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7929
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7931
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7930
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7932
    [DIFFICULTY_NORMAL][TRAINER_5C315841] =
    {
#line 7933
        .trainerName = _("Blank"),
#line 7934
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7935
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7937
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7939
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7938
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7940
    [DIFFICULTY_NORMAL][TRAINER_5C573C11] =
    {
#line 7941
        .trainerName = _("Blank"),
#line 7942
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7943
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7945
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7947
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7946
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7948
    [DIFFICULTY_NORMAL][TRAINER_5CAB03DD] =
    {
#line 7949
        .trainerName = _("Blank"),
#line 7950
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7951
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7953
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7955
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7954
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7956
    [DIFFICULTY_NORMAL][TRAINER_5CBDB116] =
    {
#line 7957
        .trainerName = _("Blank"),
#line 7958
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7959
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7961
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7963
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7962
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7964
    [DIFFICULTY_NORMAL][TRAINER_5D0C4B8F] =
    {
#line 7965
        .trainerName = _("Blank"),
#line 7966
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7967
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7969
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7971
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7970
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7972
    [DIFFICULTY_NORMAL][TRAINER_5D2CCD41] =
    {
#line 7973
        .trainerName = _("Blank"),
#line 7974
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7975
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7977
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7979
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7978
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7980
    [DIFFICULTY_NORMAL][TRAINER_5D5F491E] =
    {
#line 7981
        .trainerName = _("Blank"),
#line 7982
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7983
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7985
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7987
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7986
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7988
    [DIFFICULTY_NORMAL][TRAINER_5D81D8F9] =
    {
#line 7989
        .trainerName = _("Blank"),
#line 7990
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7991
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7993
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7995
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7994
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7996
    [DIFFICULTY_NORMAL][TRAINER_5D86E702] =
    {
#line 7997
        .trainerName = _("Blank"),
#line 7998
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7999
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8001
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8003
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8002
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8004
    [DIFFICULTY_NORMAL][TRAINER_5D9ABC58] =
    {
#line 8005
        .trainerName = _("Blank"),
#line 8006
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8007
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8009
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8011
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8010
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8012
    [DIFFICULTY_NORMAL][TRAINER_5DA9F2AE] =
    {
#line 8013
        .trainerName = _("Blank"),
#line 8014
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8015
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8017
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8019
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8018
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8020
    [DIFFICULTY_NORMAL][TRAINER_5E13316C] =
    {
#line 8021
        .trainerName = _("Blank"),
#line 8022
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8023
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8025
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8027
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8026
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8028
    [DIFFICULTY_NORMAL][TRAINER_5EA7A638] =
    {
#line 8029
        .trainerName = _("Blank"),
#line 8030
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8031
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8033
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8035
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8034
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8036
    [DIFFICULTY_NORMAL][TRAINER_5EB4C98F] =
    {
#line 8037
        .trainerName = _("Blank"),
#line 8038
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8039
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8041
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8043
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8042
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8044
    [DIFFICULTY_NORMAL][TRAINER_5EF71DA1] =
    {
#line 8045
        .trainerName = _("Blank"),
#line 8046
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8047
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8049
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8051
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8050
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8052
    [DIFFICULTY_NORMAL][TRAINER_5F858802] =
    {
#line 8053
        .trainerName = _("Blank"),
#line 8054
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8055
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8057
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8059
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8058
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8060
    [DIFFICULTY_NORMAL][TRAINER_5FA4C80F] =
    {
#line 8061
        .trainerName = _("Blank"),
#line 8062
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8063
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8065
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8067
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8066
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8068
    [DIFFICULTY_NORMAL][TRAINER_5FD48FB2] =
    {
#line 8069
        .trainerName = _("Blank"),
#line 8070
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8071
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8073
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8075
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8074
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8076
    [DIFFICULTY_NORMAL][TRAINER_5FF1DEC5] =
    {
#line 8077
        .trainerName = _("Blank"),
#line 8078
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8079
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8081
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8083
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8082
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8084
    [DIFFICULTY_NORMAL][TRAINER_6016A968] =
    {
#line 8085
        .trainerName = _("Blank"),
#line 8086
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8087
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8089
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8091
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8090
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8092
    [DIFFICULTY_NORMAL][TRAINER_6058C03B] =
    {
#line 8093
        .trainerName = _("Blank"),
#line 8094
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8095
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8097
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8099
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8098
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8100
    [DIFFICULTY_NORMAL][TRAINER_60C3BD24] =
    {
#line 8101
        .trainerName = _("Blank"),
#line 8102
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8103
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8105
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8107
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8106
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8108
    [DIFFICULTY_NORMAL][TRAINER_60C56554] =
    {
#line 8109
        .trainerName = _("Blank"),
#line 8110
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8111
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8113
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8115
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8114
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8116
    [DIFFICULTY_NORMAL][TRAINER_60D66B86] =
    {
#line 8117
        .trainerName = _("Blank"),
#line 8118
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8119
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8121
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8123
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8122
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8124
    [DIFFICULTY_NORMAL][TRAINER_6102A0FC] =
    {
#line 8125
        .trainerName = _("Blank"),
#line 8126
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8127
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8129
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8131
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8130
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8132
    [DIFFICULTY_NORMAL][TRAINER_61E76999] =
    {
#line 8133
        .trainerName = _("Blank"),
#line 8134
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8135
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8137
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8139
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8138
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8140
    [DIFFICULTY_NORMAL][TRAINER_626AECE8] =
    {
#line 8141
        .trainerName = _("Blank"),
#line 8142
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8143
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8145
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8147
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8146
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8148
    [DIFFICULTY_NORMAL][TRAINER_62851FFB] =
    {
#line 8149
        .trainerName = _("Blank"),
#line 8150
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8151
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8153
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8155
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8154
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8156
    [DIFFICULTY_NORMAL][TRAINER_62C33409] =
    {
#line 8157
        .trainerName = _("Blank"),
#line 8158
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8159
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8161
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8163
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8162
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8164
    [DIFFICULTY_NORMAL][TRAINER_62D0F875] =
    {
#line 8165
        .trainerName = _("Blank"),
#line 8166
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8167
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8169
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8171
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8170
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8172
    [DIFFICULTY_NORMAL][TRAINER_63409A54] =
    {
#line 8173
        .trainerName = _("Blank"),
#line 8174
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8175
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8177
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8179
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8178
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8180
    [DIFFICULTY_NORMAL][TRAINER_6397B964] =
    {
#line 8181
        .trainerName = _("Blank"),
#line 8182
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8183
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8185
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8187
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8186
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8188
    [DIFFICULTY_NORMAL][TRAINER_63DB05B6] =
    {
#line 8189
        .trainerName = _("Blank"),
#line 8190
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8193
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8195
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8194
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8196
    [DIFFICULTY_NORMAL][TRAINER_63DC02C9] =
    {
#line 8197
        .trainerName = _("Blank"),
#line 8198
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8199
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8201
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8203
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8202
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8204
    [DIFFICULTY_NORMAL][TRAINER_6439D44C] =
    {
#line 8205
        .trainerName = _("Blank"),
#line 8206
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8209
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8211
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8210
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8212
    [DIFFICULTY_NORMAL][TRAINER_64E30596] =
    {
#line 8213
        .trainerName = _("Blank"),
#line 8214
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8215
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8217
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8219
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8218
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8220
    [DIFFICULTY_NORMAL][TRAINER_6566F645] =
    {
#line 8221
        .trainerName = _("Blank"),
#line 8222
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8223
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8225
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8227
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8226
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8228
    [DIFFICULTY_NORMAL][TRAINER_656A39C8] =
    {
#line 8229
        .trainerName = _("Blank"),
#line 8230
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8231
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8233
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8235
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8234
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8236
    [DIFFICULTY_NORMAL][TRAINER_656EC067] =
    {
#line 8237
        .trainerName = _("Blank"),
#line 8238
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8239
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8241
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8243
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8242
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8244
    [DIFFICULTY_NORMAL][TRAINER_65CE4F87] =
    {
#line 8245
        .trainerName = _("Blank"),
#line 8246
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8247
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8249
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8251
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8250
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8252
    [DIFFICULTY_NORMAL][TRAINER_662EBAAA] =
    {
#line 8253
        .trainerName = _("Blank"),
#line 8254
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8255
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8257
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8259
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8258
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8260
    [DIFFICULTY_NORMAL][TRAINER_66531C74] =
    {
#line 8261
        .trainerName = _("Blank"),
#line 8262
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8263
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8265
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8267
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8266
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8268
    [DIFFICULTY_NORMAL][TRAINER_66B16F22] =
    {
#line 8269
        .trainerName = _("Blank"),
#line 8270
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8271
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8273
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8275
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8274
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8276
    [DIFFICULTY_NORMAL][TRAINER_66D26AEC] =
    {
#line 8277
        .trainerName = _("Blank"),
#line 8278
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8279
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8281
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8283
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8282
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8284
    [DIFFICULTY_NORMAL][TRAINER_675DA518] =
    {
#line 8285
        .trainerName = _("Blank"),
#line 8286
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8287
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8289
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8291
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8290
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8292
    [DIFFICULTY_NORMAL][TRAINER_677A22D7] =
    {
#line 8293
        .trainerName = _("Blank"),
#line 8294
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8295
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8297
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8299
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8298
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8300
    [DIFFICULTY_NORMAL][TRAINER_6792B394] =
    {
#line 8301
        .trainerName = _("Blank"),
#line 8302
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8303
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8305
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8307
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8306
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8308
    [DIFFICULTY_NORMAL][TRAINER_683A2305] =
    {
#line 8309
        .trainerName = _("Blank"),
#line 8310
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8311
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8313
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8315
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8314
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8316
    [DIFFICULTY_NORMAL][TRAINER_692DD7CF] =
    {
#line 8317
        .trainerName = _("Blank"),
#line 8318
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8319
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8321
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8323
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8322
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8324
    [DIFFICULTY_NORMAL][TRAINER_698BB117] =
    {
#line 8325
        .trainerName = _("Blank"),
#line 8326
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8327
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8329
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8331
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8330
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8332
    [DIFFICULTY_NORMAL][TRAINER_69EE8132] =
    {
#line 8333
        .trainerName = _("Blank"),
#line 8334
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8335
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8337
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8339
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8338
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8340
    [DIFFICULTY_NORMAL][TRAINER_6A35EE35] =
    {
#line 8341
        .trainerName = _("Blank"),
#line 8342
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8343
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8345
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8347
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8346
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8348
    [DIFFICULTY_NORMAL][TRAINER_6A3930E6] =
    {
#line 8349
        .trainerName = _("Blank"),
#line 8350
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8351
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8353
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8355
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8354
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8356
    [DIFFICULTY_NORMAL][TRAINER_6A48F28F] =
    {
#line 8357
        .trainerName = _("Blank"),
#line 8358
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8359
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8361
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8363
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8362
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8364
    [DIFFICULTY_NORMAL][TRAINER_6A8EEC78] =
    {
#line 8365
        .trainerName = _("Blank"),
#line 8366
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8367
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8369
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8371
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8370
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8372
    [DIFFICULTY_NORMAL][TRAINER_6AABC7EA] =
    {
#line 8373
        .trainerName = _("Blank"),
#line 8374
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8375
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8377
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8379
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8378
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8380
    [DIFFICULTY_NORMAL][TRAINER_6ABE3EC1] =
    {
#line 8381
        .trainerName = _("Blank"),
#line 8382
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8383
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8385
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8387
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8386
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8388
    [DIFFICULTY_NORMAL][TRAINER_6B14C259] =
    {
#line 8389
        .trainerName = _("Blank"),
#line 8390
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8391
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8393
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8395
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8394
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8396
    [DIFFICULTY_NORMAL][TRAINER_6BEEE6BE] =
    {
#line 8397
        .trainerName = _("Blank"),
#line 8398
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8399
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8401
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8403
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8402
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8404
    [DIFFICULTY_NORMAL][TRAINER_6C7736F9] =
    {
#line 8405
        .trainerName = _("Blank"),
#line 8406
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8407
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8409
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8411
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8410
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8412
    [DIFFICULTY_NORMAL][TRAINER_6CC913A2] =
    {
#line 8413
        .trainerName = _("Blank"),
#line 8414
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8417
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8419
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8418
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8420
    [DIFFICULTY_NORMAL][TRAINER_6D45549A] =
    {
#line 8421
        .trainerName = _("Blank"),
#line 8422
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8423
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8425
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8427
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8426
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8428
    [DIFFICULTY_NORMAL][TRAINER_6E1E82B2] =
    {
#line 8429
        .trainerName = _("Blank"),
#line 8430
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8431
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8433
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8435
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8434
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8436
    [DIFFICULTY_NORMAL][TRAINER_6E663040] =
    {
#line 8437
        .trainerName = _("Blank"),
#line 8438
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8439
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8441
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8443
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8442
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8444
    [DIFFICULTY_NORMAL][TRAINER_6ED2C120] =
    {
#line 8445
        .trainerName = _("Blank"),
#line 8446
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8447
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8449
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8451
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8450
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8452
    [DIFFICULTY_NORMAL][TRAINER_6F5C8078] =
    {
#line 8453
        .trainerName = _("Blank"),
#line 8454
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8455
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8457
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8459
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8458
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8460
    [DIFFICULTY_NORMAL][TRAINER_6F5E9CF9] =
    {
#line 8461
        .trainerName = _("Blank"),
#line 8462
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8463
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8465
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8467
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8466
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8468
    [DIFFICULTY_NORMAL][TRAINER_6FC24896] =
    {
#line 8469
        .trainerName = _("Blank"),
#line 8470
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8471
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8473
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8475
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8474
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8476
    [DIFFICULTY_NORMAL][TRAINER_6FF3213D] =
    {
#line 8477
        .trainerName = _("Blank"),
#line 8478
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8479
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8481
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8483
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8482
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8484
    [DIFFICULTY_NORMAL][TRAINER_701AC24E] =
    {
#line 8485
        .trainerName = _("Blank"),
#line 8486
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8487
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8489
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8491
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8490
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8492
    [DIFFICULTY_NORMAL][TRAINER_703B73C4] =
    {
#line 8493
        .trainerName = _("Blank"),
#line 8494
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8495
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8497
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8499
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8498
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8500
    [DIFFICULTY_NORMAL][TRAINER_70C712D3] =
    {
#line 8501
        .trainerName = _("Blank"),
#line 8502
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8503
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8505
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8507
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8506
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8508
    [DIFFICULTY_NORMAL][TRAINER_70EAAAF5] =
    {
#line 8509
        .trainerName = _("Blank"),
#line 8510
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8511
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8513
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8515
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8514
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8516
    [DIFFICULTY_NORMAL][TRAINER_70F1A62B] =
    {
#line 8517
        .trainerName = _("Blank"),
#line 8518
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8519
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8521
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8523
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8522
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8524
    [DIFFICULTY_NORMAL][TRAINER_7169C897] =
    {
#line 8525
        .trainerName = _("Blank"),
#line 8526
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8527
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8529
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8531
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8530
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8532
    [DIFFICULTY_NORMAL][TRAINER_7178DF27] =
    {
#line 8533
        .trainerName = _("Blank"),
#line 8534
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8535
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8537
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8539
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8538
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8540
    [DIFFICULTY_NORMAL][TRAINER_7190E405] =
    {
#line 8541
        .trainerName = _("Blank"),
#line 8542
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8543
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8545
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8547
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8546
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8548
    [DIFFICULTY_NORMAL][TRAINER_71CE545E] =
    {
#line 8549
        .trainerName = _("Blank"),
#line 8550
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8551
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8553
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8555
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8554
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8556
    [DIFFICULTY_NORMAL][TRAINER_7249425F] =
    {
#line 8557
        .trainerName = _("Blank"),
#line 8558
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8561
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8563
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8562
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8564
    [DIFFICULTY_NORMAL][TRAINER_72641C9D] =
    {
#line 8565
        .trainerName = _("Blank"),
#line 8566
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8567
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8569
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8571
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8570
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8572
    [DIFFICULTY_NORMAL][TRAINER_729F2BBB] =
    {
#line 8573
        .trainerName = _("Blank"),
#line 8574
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8575
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8577
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8579
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8578
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8580
    [DIFFICULTY_NORMAL][TRAINER_72F25B41] =
    {
#line 8581
        .trainerName = _("Blank"),
#line 8582
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8583
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8585
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8587
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8586
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8588
    [DIFFICULTY_NORMAL][TRAINER_732D4997] =
    {
#line 8589
        .trainerName = _("Blank"),
#line 8590
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8591
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8593
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8595
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8594
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8596
    [DIFFICULTY_NORMAL][TRAINER_73A561CC] =
    {
#line 8597
        .trainerName = _("Blank"),
#line 8598
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8599
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8601
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8603
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8602
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8604
    [DIFFICULTY_NORMAL][TRAINER_7420DB0C] =
    {
#line 8605
        .trainerName = _("Blank"),
#line 8606
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8607
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8609
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8611
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8610
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8612
    [DIFFICULTY_NORMAL][TRAINER_7435DE7C] =
    {
#line 8613
        .trainerName = _("Blank"),
#line 8614
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8615
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8617
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8619
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8618
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8620
    [DIFFICULTY_NORMAL][TRAINER_75A2A667] =
    {
#line 8621
        .trainerName = _("Blank"),
#line 8622
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8623
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8625
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8627
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8626
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8628
    [DIFFICULTY_NORMAL][TRAINER_75D602F2] =
    {
#line 8629
        .trainerName = _("Blank"),
#line 8630
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8631
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8633
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8635
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8634
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8636
    [DIFFICULTY_NORMAL][TRAINER_77DDBBAF] =
    {
#line 8637
        .trainerName = _("Blank"),
#line 8638
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8639
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8641
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8643
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8642
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8644
    [DIFFICULTY_NORMAL][TRAINER_783AB388] =
    {
#line 8645
        .trainerName = _("Blank"),
#line 8646
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8647
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8649
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8651
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8650
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8652
    [DIFFICULTY_NORMAL][TRAINER_78564BE5] =
    {
#line 8653
        .trainerName = _("Blank"),
#line 8654
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8655
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8657
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8659
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8658
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8660
    [DIFFICULTY_NORMAL][TRAINER_7885ECAF] =
    {
#line 8661
        .trainerName = _("Blank"),
#line 8662
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8663
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8665
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8667
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8666
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8668
    [DIFFICULTY_NORMAL][TRAINER_78B73516] =
    {
#line 8669
        .trainerName = _("Blank"),
#line 8670
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8671
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8673
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8675
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8674
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8676
    [DIFFICULTY_NORMAL][TRAINER_78BD858D] =
    {
#line 8677
        .trainerName = _("Blank"),
#line 8678
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8679
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8681
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8683
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8682
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8684
    [DIFFICULTY_NORMAL][TRAINER_7933DA6C] =
    {
#line 8685
        .trainerName = _("Blank"),
#line 8686
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8687
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8689
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8691
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8690
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8692
    [DIFFICULTY_NORMAL][TRAINER_793992D8] =
    {
#line 8693
        .trainerName = _("Blank"),
#line 8694
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8695
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8697
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8699
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8698
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8700
    [DIFFICULTY_NORMAL][TRAINER_797E296B] =
    {
#line 8701
        .trainerName = _("Blank"),
#line 8702
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8703
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8705
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8707
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8706
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8708
    [DIFFICULTY_NORMAL][TRAINER_79EF1DEB] =
    {
#line 8709
        .trainerName = _("Blank"),
#line 8710
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8711
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8713
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8715
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8714
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8716
    [DIFFICULTY_NORMAL][TRAINER_7A03677D] =
    {
#line 8717
        .trainerName = _("Blank"),
#line 8718
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8719
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8721
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8723
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8722
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8724
    [DIFFICULTY_NORMAL][TRAINER_7A0C086F] =
    {
#line 8725
        .trainerName = _("Blank"),
#line 8726
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8727
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8729
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8731
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8730
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8732
    [DIFFICULTY_NORMAL][TRAINER_7A89C403] =
    {
#line 8733
        .trainerName = _("Blank"),
#line 8734
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8735
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8737
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8739
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8738
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8740
    [DIFFICULTY_NORMAL][TRAINER_7A8D30C6] =
    {
#line 8741
        .trainerName = _("Blank"),
#line 8742
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8743
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8745
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8747
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8746
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8748
    [DIFFICULTY_NORMAL][TRAINER_7ABC77C1] =
    {
#line 8749
        .trainerName = _("Blank"),
#line 8750
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8753
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8755
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8754
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8756
    [DIFFICULTY_NORMAL][TRAINER_7B5DF36F] =
    {
#line 8757
        .trainerName = _("Blank"),
#line 8758
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8759
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8761
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8763
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8762
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8764
    [DIFFICULTY_NORMAL][TRAINER_7C3BD57C] =
    {
#line 8765
        .trainerName = _("Blank"),
#line 8766
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8767
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8769
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8771
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8770
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8772
    [DIFFICULTY_NORMAL][TRAINER_7C4240E1] =
    {
#line 8773
        .trainerName = _("Blank"),
#line 8774
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8775
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8777
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8779
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8778
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8780
    [DIFFICULTY_NORMAL][TRAINER_7C5056CA] =
    {
#line 8781
        .trainerName = _("Blank"),
#line 8782
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8783
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8785
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8787
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8786
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8788
    [DIFFICULTY_NORMAL][TRAINER_7C8BD62F] =
    {
#line 8789
        .trainerName = _("Blank"),
#line 8790
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8791
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8793
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8795
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8794
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8796
    [DIFFICULTY_NORMAL][TRAINER_7C9308EF] =
    {
#line 8797
        .trainerName = _("Blank"),
#line 8798
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8799
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8801
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8803
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8802
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8804
    [DIFFICULTY_NORMAL][TRAINER_7CAF6877] =
    {
#line 8805
        .trainerName = _("Blank"),
#line 8806
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8807
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8809
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8811
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8810
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8812
    [DIFFICULTY_NORMAL][TRAINER_7CBB25EB] =
    {
#line 8813
        .trainerName = _("Blank"),
#line 8814
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8815
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8817
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8819
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8818
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8820
    [DIFFICULTY_NORMAL][TRAINER_7CD1AAE1] =
    {
#line 8821
        .trainerName = _("Blank"),
#line 8822
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8823
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8825
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8827
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8826
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8828
    [DIFFICULTY_NORMAL][TRAINER_7D0F1751] =
    {
#line 8829
        .trainerName = _("Blank"),
#line 8830
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8831
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8833
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8835
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8834
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8836
    [DIFFICULTY_NORMAL][TRAINER_7D28CB20] =
    {
#line 8837
        .trainerName = _("Blank"),
#line 8838
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8839
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8841
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8843
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8842
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8844
    [DIFFICULTY_NORMAL][TRAINER_7D536E72] =
    {
#line 8845
        .trainerName = _("Blank"),
#line 8846
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8847
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8849
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8851
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8850
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8852
    [DIFFICULTY_NORMAL][TRAINER_7DC358C0] =
    {
#line 8853
        .trainerName = _("Blank"),
#line 8854
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8855
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8857
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8859
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8858
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8860
    [DIFFICULTY_NORMAL][TRAINER_7DEC9A40] =
    {
#line 8861
        .trainerName = _("Blank"),
#line 8862
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8863
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8865
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8867
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8866
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8868
    [DIFFICULTY_NORMAL][TRAINER_7E2F7EB8] =
    {
#line 8869
        .trainerName = _("Blank"),
#line 8870
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8871
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8873
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8875
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8874
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8876
    [DIFFICULTY_NORMAL][TRAINER_7E7CD9D3] =
    {
#line 8877
        .trainerName = _("Blank"),
#line 8878
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8879
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8881
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8883
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8882
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8884
    [DIFFICULTY_NORMAL][TRAINER_7E8CCD84] =
    {
#line 8885
        .trainerName = _("Blank"),
#line 8886
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8887
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8889
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8891
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8890
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8892
    [DIFFICULTY_NORMAL][TRAINER_8010F97E] =
    {
#line 8893
        .trainerName = _("Blank"),
#line 8894
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8895
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8897
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8899
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8898
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8900
    [DIFFICULTY_NORMAL][TRAINER_805C25F0] =
    {
#line 8901
        .trainerName = _("Blank"),
#line 8902
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8903
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8905
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8907
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8906
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8908
    [DIFFICULTY_NORMAL][TRAINER_80941A21] =
    {
#line 8909
        .trainerName = _("Blank"),
#line 8910
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8913
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8915
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8914
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8916
    [DIFFICULTY_NORMAL][TRAINER_80AAA333] =
    {
#line 8917
        .trainerName = _("Blank"),
#line 8918
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8919
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8921
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8923
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8922
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8924
    [DIFFICULTY_NORMAL][TRAINER_810A3F32] =
    {
#line 8925
        .trainerName = _("Blank"),
#line 8926
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8927
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8929
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8931
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8930
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8932
    [DIFFICULTY_NORMAL][TRAINER_811C7730] =
    {
#line 8933
        .trainerName = _("Blank"),
#line 8934
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8935
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8937
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8939
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8938
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8940
    [DIFFICULTY_NORMAL][TRAINER_814D0113] =
    {
#line 8941
        .trainerName = _("Blank"),
#line 8942
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8943
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8945
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8947
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8946
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8948
    [DIFFICULTY_NORMAL][TRAINER_822DC7A8] =
    {
#line 8949
        .trainerName = _("Blank"),
#line 8950
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8951
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8953
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8955
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8954
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8956
    [DIFFICULTY_NORMAL][TRAINER_827A5D21] =
    {
#line 8957
        .trainerName = _("Blank"),
#line 8958
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8959
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8961
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8963
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8962
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8964
    [DIFFICULTY_NORMAL][TRAINER_82A19B69] =
    {
#line 8965
        .trainerName = _("Blank"),
#line 8966
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8967
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8969
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8971
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8970
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8972
    [DIFFICULTY_NORMAL][TRAINER_83008F9D] =
    {
#line 8973
        .trainerName = _("Blank"),
#line 8974
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8975
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8977
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8979
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8978
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8980
    [DIFFICULTY_NORMAL][TRAINER_831DE561] =
    {
#line 8981
        .trainerName = _("Blank"),
#line 8982
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8983
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8985
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8987
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8986
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8988
    [DIFFICULTY_NORMAL][TRAINER_8327758B] =
    {
#line 8989
        .trainerName = _("Blank"),
#line 8990
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8991
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8993
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8995
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8994
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8996
    [DIFFICULTY_NORMAL][TRAINER_834B75E7] =
    {
#line 8997
        .trainerName = _("Blank"),
#line 8998
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8999
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9001
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9003
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9002
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9004
    [DIFFICULTY_NORMAL][TRAINER_8365EA32] =
    {
#line 9005
        .trainerName = _("Blank"),
#line 9006
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9007
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9009
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9011
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9010
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9012
    [DIFFICULTY_NORMAL][TRAINER_83A26233] =
    {
#line 9013
        .trainerName = _("Blank"),
#line 9014
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9015
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9017
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9019
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9018
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9020
    [DIFFICULTY_NORMAL][TRAINER_83B9A038] =
    {
#line 9021
        .trainerName = _("Blank"),
#line 9022
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9023
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9025
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9027
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9026
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9028
    [DIFFICULTY_NORMAL][TRAINER_840416CD] =
    {
#line 9029
        .trainerName = _("Blank"),
#line 9030
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9031
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9033
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9035
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9034
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9036
    [DIFFICULTY_NORMAL][TRAINER_843DFC91] =
    {
#line 9037
        .trainerName = _("Blank"),
#line 9038
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9039
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9041
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9043
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9042
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9044
    [DIFFICULTY_NORMAL][TRAINER_857ACD94] =
    {
#line 9045
        .trainerName = _("Blank"),
#line 9046
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9047
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9049
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9051
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9050
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9052
    [DIFFICULTY_NORMAL][TRAINER_8580525E] =
    {
#line 9053
        .trainerName = _("Blank"),
#line 9054
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9055
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9057
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9059
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9058
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9060
    [DIFFICULTY_NORMAL][TRAINER_866AE208] =
    {
#line 9061
        .trainerName = _("Blank"),
#line 9062
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9063
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9065
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9067
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9066
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9068
    [DIFFICULTY_NORMAL][TRAINER_8677EFB3] =
    {
#line 9069
        .trainerName = _("Blank"),
#line 9070
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9071
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9073
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9075
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9074
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9076
    [DIFFICULTY_NORMAL][TRAINER_86D37FF1] =
    {
#line 9077
        .trainerName = _("Blank"),
#line 9078
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9079
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9081
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9083
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9082
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9084
    [DIFFICULTY_NORMAL][TRAINER_86F7AA4A] =
    {
#line 9085
        .trainerName = _("Blank"),
#line 9086
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9087
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9089
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9091
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9090
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9092
    [DIFFICULTY_NORMAL][TRAINER_872183CD] =
    {
#line 9093
        .trainerName = _("Blank"),
#line 9094
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9095
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9097
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9099
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9098
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9100
    [DIFFICULTY_NORMAL][TRAINER_87B5E929] =
    {
#line 9101
        .trainerName = _("Blank"),
#line 9102
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9103
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9105
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9107
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9106
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9108
    [DIFFICULTY_NORMAL][TRAINER_885C781B] =
    {
#line 9109
        .trainerName = _("Blank"),
#line 9110
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9111
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9113
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9115
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9114
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9116
    [DIFFICULTY_NORMAL][TRAINER_8878003B] =
    {
#line 9117
        .trainerName = _("Blank"),
#line 9118
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9119
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9121
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9123
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9122
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9124
    [DIFFICULTY_NORMAL][TRAINER_88864D1E] =
    {
#line 9125
        .trainerName = _("Blank"),
#line 9126
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9127
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9129
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9131
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9130
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9132
    [DIFFICULTY_NORMAL][TRAINER_8972F540] =
    {
#line 9133
        .trainerName = _("Blank"),
#line 9134
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9135
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9137
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9139
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9138
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9140
    [DIFFICULTY_NORMAL][TRAINER_898AF31D] =
    {
#line 9141
        .trainerName = _("Blank"),
#line 9142
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9143
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9145
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9147
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9146
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9148
    [DIFFICULTY_NORMAL][TRAINER_8A0B40C0] =
    {
#line 9149
        .trainerName = _("Blank"),
#line 9150
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9151
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9153
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9155
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9154
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9156
    [DIFFICULTY_NORMAL][TRAINER_8A2C65A3] =
    {
#line 9157
        .trainerName = _("Blank"),
#line 9158
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9159
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9161
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9163
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9162
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9164
    [DIFFICULTY_NORMAL][TRAINER_8A829476] =
    {
#line 9165
        .trainerName = _("Blank"),
#line 9166
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9167
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9169
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9171
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9170
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9172
    [DIFFICULTY_NORMAL][TRAINER_8AC1B5C1] =
    {
#line 9173
        .trainerName = _("Blank"),
#line 9174
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9175
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9177
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9179
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9178
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9180
    [DIFFICULTY_NORMAL][TRAINER_8AF40B23] =
    {
#line 9181
        .trainerName = _("Blank"),
#line 9182
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9183
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9185
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9187
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9186
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9188
    [DIFFICULTY_NORMAL][TRAINER_8B31AC38] =
    {
#line 9189
        .trainerName = _("Blank"),
#line 9190
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9193
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9195
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9194
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9196
    [DIFFICULTY_NORMAL][TRAINER_8B32317E] =
    {
#line 9197
        .trainerName = _("Blank"),
#line 9198
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9199
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9201
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9203
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9202
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9204
    [DIFFICULTY_NORMAL][TRAINER_8B3657A9] =
    {
#line 9205
        .trainerName = _("Blank"),
#line 9206
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9209
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9211
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9210
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9212
    [DIFFICULTY_NORMAL][TRAINER_8B3C49E3] =
    {
#line 9213
        .trainerName = _("Blank"),
#line 9214
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9215
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9217
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9219
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9218
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9220
    [DIFFICULTY_NORMAL][TRAINER_8B6D195D] =
    {
#line 9221
        .trainerName = _("Blank"),
#line 9222
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9223
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9225
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9227
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9226
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9228
    [DIFFICULTY_NORMAL][TRAINER_8BB65E5E] =
    {
#line 9229
        .trainerName = _("Blank"),
#line 9230
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9231
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9233
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9235
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9234
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9236
    [DIFFICULTY_NORMAL][TRAINER_8C186D17] =
    {
#line 9237
        .trainerName = _("Blank"),
#line 9238
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9239
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9241
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9243
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9242
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9244
    [DIFFICULTY_NORMAL][TRAINER_8C853607] =
    {
#line 9245
        .trainerName = _("Blank"),
#line 9246
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9247
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9249
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9251
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9250
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9252
    [DIFFICULTY_NORMAL][TRAINER_8D6D5B2C] =
    {
#line 9253
        .trainerName = _("Blank"),
#line 9254
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9255
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9257
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9259
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9258
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9260
    [DIFFICULTY_NORMAL][TRAINER_8D93124A] =
    {
#line 9261
        .trainerName = _("Blank"),
#line 9262
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9263
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9265
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9267
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9266
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9268
    [DIFFICULTY_NORMAL][TRAINER_8DAF08C5] =
    {
#line 9269
        .trainerName = _("Blank"),
#line 9270
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9271
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9273
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9275
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9274
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9276
    [DIFFICULTY_NORMAL][TRAINER_8DE17D94] =
    {
#line 9277
        .trainerName = _("Blank"),
#line 9278
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9279
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9281
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9283
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9282
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9284
    [DIFFICULTY_NORMAL][TRAINER_8E60CF6E] =
    {
#line 9285
        .trainerName = _("Blank"),
#line 9286
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9287
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9289
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9291
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9290
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9292
    [DIFFICULTY_NORMAL][TRAINER_8EA873A0] =
    {
#line 9293
        .trainerName = _("Blank"),
#line 9294
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9295
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9297
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9299
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9298
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9300
    [DIFFICULTY_NORMAL][TRAINER_8EB76821] =
    {
#line 9301
        .trainerName = _("Blank"),
#line 9302
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9303
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9305
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9307
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9306
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9308
    [DIFFICULTY_NORMAL][TRAINER_8ED15D51] =
    {
#line 9309
        .trainerName = _("Blank"),
#line 9310
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9311
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9313
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9315
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9314
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9316
    [DIFFICULTY_NORMAL][TRAINER_8F28F86A] =
    {
#line 9317
        .trainerName = _("Blank"),
#line 9318
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9319
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9321
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9323
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9322
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9324
    [DIFFICULTY_NORMAL][TRAINER_8F2EA270] =
    {
#line 9325
        .trainerName = _("Blank"),
#line 9326
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9327
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9329
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9331
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9330
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9332
    [DIFFICULTY_NORMAL][TRAINER_8F9579E4] =
    {
#line 9333
        .trainerName = _("Blank"),
#line 9334
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9335
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9337
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9339
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9338
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9340
    [DIFFICULTY_NORMAL][TRAINER_8F988020] =
    {
#line 9341
        .trainerName = _("Blank"),
#line 9342
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9343
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9345
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9347
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9346
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9348
    [DIFFICULTY_NORMAL][TRAINER_8FE817BA] =
    {
#line 9349
        .trainerName = _("Blank"),
#line 9350
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9351
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9353
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9355
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9354
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9356
    [DIFFICULTY_NORMAL][TRAINER_90353D81] =
    {
#line 9357
        .trainerName = _("Blank"),
#line 9358
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9359
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9361
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9363
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9362
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9364
    [DIFFICULTY_NORMAL][TRAINER_9054973F] =
    {
#line 9365
        .trainerName = _("Blank"),
#line 9366
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9367
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9369
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9371
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9370
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9372
    [DIFFICULTY_NORMAL][TRAINER_90A72ACF] =
    {
#line 9373
        .trainerName = _("Blank"),
#line 9374
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9375
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9377
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9379
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9378
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9380
    [DIFFICULTY_NORMAL][TRAINER_90E1658C] =
    {
#line 9381
        .trainerName = _("Blank"),
#line 9382
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9383
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9385
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9387
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9386
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9388
    [DIFFICULTY_NORMAL][TRAINER_918A1734] =
    {
#line 9389
        .trainerName = _("Blank"),
#line 9390
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9391
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9393
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9395
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9394
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9396
    [DIFFICULTY_NORMAL][TRAINER_91D249C3] =
    {
#line 9397
        .trainerName = _("Blank"),
#line 9398
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9399
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9401
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9403
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9402
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9404
    [DIFFICULTY_NORMAL][TRAINER_91D48E4E] =
    {
#line 9405
        .trainerName = _("Blank"),
#line 9406
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9407
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9409
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9411
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9410
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9412
    [DIFFICULTY_NORMAL][TRAINER_922542C3] =
    {
#line 9413
        .trainerName = _("Blank"),
#line 9414
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9417
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9419
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9418
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9420
    [DIFFICULTY_NORMAL][TRAINER_93009D3B] =
    {
#line 9421
        .trainerName = _("Blank"),
#line 9422
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9423
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9425
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9427
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9426
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9428
    [DIFFICULTY_NORMAL][TRAINER_93D9B506] =
    {
#line 9429
        .trainerName = _("Blank"),
#line 9430
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9431
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9433
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9435
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9434
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9436
    [DIFFICULTY_NORMAL][TRAINER_9427896B] =
    {
#line 9437
        .trainerName = _("Blank"),
#line 9438
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9439
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9441
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9443
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9442
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9444
    [DIFFICULTY_NORMAL][TRAINER_9501C16B] =
    {
#line 9445
        .trainerName = _("Blank"),
#line 9446
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9447
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9449
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9451
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9450
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9452
    [DIFFICULTY_NORMAL][TRAINER_9566DD87] =
    {
#line 9453
        .trainerName = _("Blank"),
#line 9454
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9455
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9457
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9459
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9458
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9460
    [DIFFICULTY_NORMAL][TRAINER_95A74E78] =
    {
#line 9461
        .trainerName = _("Blank"),
#line 9462
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9463
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9465
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9467
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9466
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9468
    [DIFFICULTY_NORMAL][TRAINER_963F893A] =
    {
#line 9469
        .trainerName = _("Blank"),
#line 9470
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9471
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9473
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9475
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9474
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9476
    [DIFFICULTY_NORMAL][TRAINER_966F37E6] =
    {
#line 9477
        .trainerName = _("Blank"),
#line 9478
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9479
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9481
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9483
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9482
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9484
    [DIFFICULTY_NORMAL][TRAINER_96859C9B] =
    {
#line 9485
        .trainerName = _("Blank"),
#line 9486
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9487
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9489
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9491
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9490
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9492
    [DIFFICULTY_NORMAL][TRAINER_9695D7CC] =
    {
#line 9493
        .trainerName = _("Blank"),
#line 9494
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9495
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9497
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9499
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9498
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9500
    [DIFFICULTY_NORMAL][TRAINER_96A60AED] =
    {
#line 9501
        .trainerName = _("Blank"),
#line 9502
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9503
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9505
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9507
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9506
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9508
    [DIFFICULTY_NORMAL][TRAINER_973C00CE] =
    {
#line 9509
        .trainerName = _("Blank"),
#line 9510
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9511
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9513
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9515
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9514
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9516
    [DIFFICULTY_NORMAL][TRAINER_9784BB4E] =
    {
#line 9517
        .trainerName = _("Blank"),
#line 9518
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9519
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9521
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9523
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9522
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9524
    [DIFFICULTY_NORMAL][TRAINER_9834CDCC] =
    {
#line 9525
        .trainerName = _("Blank"),
#line 9526
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9527
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9529
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9531
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9530
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9532
    [DIFFICULTY_NORMAL][TRAINER_98547A36] =
    {
#line 9533
        .trainerName = _("Blank"),
#line 9534
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9535
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9537
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9539
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9538
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9540
    [DIFFICULTY_NORMAL][TRAINER_98C7143B] =
    {
#line 9541
        .trainerName = _("Blank"),
#line 9542
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9543
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9545
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9547
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9546
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9548
    [DIFFICULTY_NORMAL][TRAINER_992FCC96] =
    {
#line 9549
        .trainerName = _("Blank"),
#line 9550
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9551
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9553
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9555
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9554
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9556
    [DIFFICULTY_NORMAL][TRAINER_99D74322] =
    {
#line 9557
        .trainerName = _("Blank"),
#line 9558
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9561
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9563
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9562
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9564
    [DIFFICULTY_NORMAL][TRAINER_9A45ED29] =
    {
#line 9565
        .trainerName = _("Blank"),
#line 9566
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9567
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9569
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9571
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9570
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9572
    [DIFFICULTY_NORMAL][TRAINER_9AAFB9A8] =
    {
#line 9573
        .trainerName = _("Blank"),
#line 9574
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9575
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9577
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9579
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9578
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9580
    [DIFFICULTY_NORMAL][TRAINER_9B4CAAEF] =
    {
#line 9581
        .trainerName = _("Blank"),
#line 9582
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9583
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9585
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9587
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9586
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9588
    [DIFFICULTY_NORMAL][TRAINER_9B92F975] =
    {
#line 9589
        .trainerName = _("Blank"),
#line 9590
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9591
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9593
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9595
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9594
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9596
    [DIFFICULTY_NORMAL][TRAINER_9BA8D6B8] =
    {
#line 9597
        .trainerName = _("Blank"),
#line 9598
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9599
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9601
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9603
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9602
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9604
    [DIFFICULTY_NORMAL][TRAINER_9BBA4D3E] =
    {
#line 9605
        .trainerName = _("Blank"),
#line 9606
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9607
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9609
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9611
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9610
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9612
    [DIFFICULTY_NORMAL][TRAINER_9BD745C1] =
    {
#line 9613
        .trainerName = _("Blank"),
#line 9614
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9615
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9617
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9619
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9618
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9620
    [DIFFICULTY_NORMAL][TRAINER_9C9A9B43] =
    {
#line 9621
        .trainerName = _("Blank"),
#line 9622
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9623
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9625
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9627
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9626
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9628
    [DIFFICULTY_NORMAL][TRAINER_9CC51698] =
    {
#line 9629
        .trainerName = _("Blank"),
#line 9630
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9631
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9633
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9635
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9634
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9636
    [DIFFICULTY_NORMAL][TRAINER_9D0B799C] =
    {
#line 9637
        .trainerName = _("Blank"),
#line 9638
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9639
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9641
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9643
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9642
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9644
    [DIFFICULTY_NORMAL][TRAINER_9D2974CA] =
    {
#line 9645
        .trainerName = _("Blank"),
#line 9646
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9647
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9649
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9651
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9650
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9652
    [DIFFICULTY_NORMAL][TRAINER_9DE6AF69] =
    {
#line 9653
        .trainerName = _("Blank"),
#line 9654
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9655
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9657
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9659
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9658
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9660
    [DIFFICULTY_NORMAL][TRAINER_9E9E96C3] =
    {
#line 9661
        .trainerName = _("Blank"),
#line 9662
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9663
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9665
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9667
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9666
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9668
    [DIFFICULTY_NORMAL][TRAINER_9EBDE860] =
    {
#line 9669
        .trainerName = _("Blank"),
#line 9670
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9671
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9673
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9675
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9674
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9676
    [DIFFICULTY_NORMAL][TRAINER_9F335F56] =
    {
#line 9677
        .trainerName = _("Blank"),
#line 9678
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9679
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9681
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9683
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9682
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9684
    [DIFFICULTY_NORMAL][TRAINER_9FB07CC0] =
    {
#line 9685
        .trainerName = _("Blank"),
#line 9686
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9687
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9689
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9691
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9690
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9692
    [DIFFICULTY_NORMAL][TRAINER_9FFBEDD1] =
    {
#line 9693
        .trainerName = _("Blank"),
#line 9694
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9695
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9697
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9699
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9698
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9700
    [DIFFICULTY_NORMAL][TRAINER_A03F3B0B] =
    {
#line 9701
        .trainerName = _("Blank"),
#line 9702
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9703
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9705
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9707
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9706
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9708
    [DIFFICULTY_NORMAL][TRAINER_A0852317] =
    {
#line 9709
        .trainerName = _("Blank"),
#line 9710
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9711
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9713
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9715
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9714
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9716
    [DIFFICULTY_NORMAL][TRAINER_A0CE2BCF] =
    {
#line 9717
        .trainerName = _("Blank"),
#line 9718
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9719
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9721
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9723
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9722
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9724
    [DIFFICULTY_NORMAL][TRAINER_A122FEC6] =
    {
#line 9725
        .trainerName = _("Blank"),
#line 9726
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9727
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9729
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9731
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9730
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9732
    [DIFFICULTY_NORMAL][TRAINER_A1502FA5] =
    {
#line 9733
        .trainerName = _("Blank"),
#line 9734
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9735
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9737
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9739
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9738
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9740
    [DIFFICULTY_NORMAL][TRAINER_A173BD9E] =
    {
#line 9741
        .trainerName = _("Blank"),
#line 9742
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9743
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9745
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9747
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9746
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9748
    [DIFFICULTY_NORMAL][TRAINER_A1B34299] =
    {
#line 9749
        .trainerName = _("Blank"),
#line 9750
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9753
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9755
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9754
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9756
    [DIFFICULTY_NORMAL][TRAINER_A226BBD6] =
    {
#line 9757
        .trainerName = _("Blank"),
#line 9758
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9759
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9761
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9763
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9762
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9764
    [DIFFICULTY_NORMAL][TRAINER_A26B64E5] =
    {
#line 9765
        .trainerName = _("Blank"),
#line 9766
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9767
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9769
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9771
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9770
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9772
    [DIFFICULTY_NORMAL][TRAINER_A2F2E8FF] =
    {
#line 9773
        .trainerName = _("Blank"),
#line 9774
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9775
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9777
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9779
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9778
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9780
    [DIFFICULTY_NORMAL][TRAINER_A30D6A65] =
    {
#line 9781
        .trainerName = _("Blank"),
#line 9782
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9783
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9785
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9787
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9786
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9788
    [DIFFICULTY_NORMAL][TRAINER_A33F468D] =
    {
#line 9789
        .trainerName = _("Blank"),
#line 9790
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9791
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9793
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9795
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9794
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9796
    [DIFFICULTY_NORMAL][TRAINER_A377CCDF] =
    {
#line 9797
        .trainerName = _("Blank"),
#line 9798
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9799
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9801
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9803
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9802
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9804
    [DIFFICULTY_NORMAL][TRAINER_A393F9F0] =
    {
#line 9805
        .trainerName = _("Blank"),
#line 9806
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9807
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9809
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9811
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9810
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9812
    [DIFFICULTY_NORMAL][TRAINER_A39AB67C] =
    {
#line 9813
        .trainerName = _("Blank"),
#line 9814
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9815
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9817
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9819
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9818
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9820
    [DIFFICULTY_NORMAL][TRAINER_A3EBD43B] =
    {
#line 9821
        .trainerName = _("Blank"),
#line 9822
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9823
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9825
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9827
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9826
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9828
    [DIFFICULTY_NORMAL][TRAINER_A489434F] =
    {
#line 9829
        .trainerName = _("Blank"),
#line 9830
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9831
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9833
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9835
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9834
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9836
    [DIFFICULTY_NORMAL][TRAINER_A49FED84] =
    {
#line 9837
        .trainerName = _("Blank"),
#line 9838
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9839
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9841
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9843
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9842
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9844
    [DIFFICULTY_NORMAL][TRAINER_A4BDD551] =
    {
#line 9845
        .trainerName = _("Blank"),
#line 9846
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9847
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9849
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9851
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9850
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9852
    [DIFFICULTY_NORMAL][TRAINER_A4D47D9E] =
    {
#line 9853
        .trainerName = _("Blank"),
#line 9854
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9855
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9857
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9859
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9858
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9860
    [DIFFICULTY_NORMAL][TRAINER_A4DC84A0] =
    {
#line 9861
        .trainerName = _("Blank"),
#line 9862
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9863
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9865
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9867
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9866
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9868
    [DIFFICULTY_NORMAL][TRAINER_A4EC97B5] =
    {
#line 9869
        .trainerName = _("Blank"),
#line 9870
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9871
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9873
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9875
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9874
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9876
    [DIFFICULTY_NORMAL][TRAINER_A50CF67B] =
    {
#line 9877
        .trainerName = _("Blank"),
#line 9878
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9879
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9881
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9883
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9882
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9884
    [DIFFICULTY_NORMAL][TRAINER_A62D49C6] =
    {
#line 9885
        .trainerName = _("Blank"),
#line 9886
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9887
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9889
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9891
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9890
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9892
    [DIFFICULTY_NORMAL][TRAINER_A6328173] =
    {
#line 9893
        .trainerName = _("Blank"),
#line 9894
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9895
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9897
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9899
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9898
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9900
    [DIFFICULTY_NORMAL][TRAINER_A646F21E] =
    {
#line 9901
        .trainerName = _("Blank"),
#line 9902
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9903
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9905
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9907
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9906
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9908
    [DIFFICULTY_NORMAL][TRAINER_A685428F] =
    {
#line 9909
        .trainerName = _("Blank"),
#line 9910
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9913
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9915
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9914
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9916
    [DIFFICULTY_NORMAL][TRAINER_A686809A] =
    {
#line 9917
        .trainerName = _("Blank"),
#line 9918
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9919
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9921
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9923
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9922
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9924
    [DIFFICULTY_NORMAL][TRAINER_A7154C64] =
    {
#line 9925
        .trainerName = _("Blank"),
#line 9926
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9927
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9929
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9931
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9930
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9932
    [DIFFICULTY_NORMAL][TRAINER_A725F3F3] =
    {
#line 9933
        .trainerName = _("Blank"),
#line 9934
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9935
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9937
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9939
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9938
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9940
    [DIFFICULTY_NORMAL][TRAINER_A7376C87] =
    {
#line 9941
        .trainerName = _("Blank"),
#line 9942
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9943
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9945
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9947
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9946
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9948
    [DIFFICULTY_NORMAL][TRAINER_A76F8352] =
    {
#line 9949
        .trainerName = _("Blank"),
#line 9950
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9951
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9953
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9955
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9954
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9956
    [DIFFICULTY_NORMAL][TRAINER_A783BCA8] =
    {
#line 9957
        .trainerName = _("Blank"),
#line 9958
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9959
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9961
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9963
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9962
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9964
    [DIFFICULTY_NORMAL][TRAINER_A7D689F5] =
    {
#line 9965
        .trainerName = _("Blank"),
#line 9966
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9967
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9969
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9971
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9970
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9972
    [DIFFICULTY_NORMAL][TRAINER_A7DCD657] =
    {
#line 9973
        .trainerName = _("Blank"),
#line 9974
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9975
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9977
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9979
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9978
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9980
    [DIFFICULTY_NORMAL][TRAINER_A80F3799] =
    {
#line 9981
        .trainerName = _("Blank"),
#line 9982
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9983
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9985
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9987
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9986
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9988
    [DIFFICULTY_NORMAL][TRAINER_A82FABFC] =
    {
#line 9989
        .trainerName = _("Blank"),
#line 9990
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9991
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9993
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9995
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9994
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9996
    [DIFFICULTY_NORMAL][TRAINER_A8413608] =
    {
#line 9997
        .trainerName = _("Blank"),
#line 9998
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9999
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10001
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10003
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10002
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10004
    [DIFFICULTY_NORMAL][TRAINER_A8BA94B6] =
    {
#line 10005
        .trainerName = _("Blank"),
#line 10006
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10007
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10009
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10011
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10010
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10012
    [DIFFICULTY_NORMAL][TRAINER_A90E2D03] =
    {
#line 10013
        .trainerName = _("Blank"),
#line 10014
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10015
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10017
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10019
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10018
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10020
    [DIFFICULTY_NORMAL][TRAINER_A968DBA5] =
    {
#line 10021
        .trainerName = _("Blank"),
#line 10022
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10023
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10025
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10027
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10026
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10028
    [DIFFICULTY_NORMAL][TRAINER_A990AE14] =
    {
#line 10029
        .trainerName = _("Blank"),
#line 10030
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10031
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10033
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10035
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10034
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10036
    [DIFFICULTY_NORMAL][TRAINER_A9F2709A] =
    {
#line 10037
        .trainerName = _("Blank"),
#line 10038
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10039
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10041
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10043
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10042
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10044
    [DIFFICULTY_NORMAL][TRAINER_AA81DD0B] =
    {
#line 10045
        .trainerName = _("Blank"),
#line 10046
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10047
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10049
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10051
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10050
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10052
    [DIFFICULTY_NORMAL][TRAINER_AB576C3B] =
    {
#line 10053
        .trainerName = _("Blank"),
#line 10054
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10055
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10057
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10059
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10058
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10060
    [DIFFICULTY_NORMAL][TRAINER_ABD18218] =
    {
#line 10061
        .trainerName = _("Blank"),
#line 10062
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10063
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10065
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10067
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10066
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10068
    [DIFFICULTY_NORMAL][TRAINER_ABF9DAAF] =
    {
#line 10069
        .trainerName = _("Blank"),
#line 10070
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10071
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10073
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10075
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10074
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10076
    [DIFFICULTY_NORMAL][TRAINER_ABFE6286] =
    {
#line 10077
        .trainerName = _("Blank"),
#line 10078
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10079
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10081
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10083
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10082
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10084
    [DIFFICULTY_NORMAL][TRAINER_AC004835] =
    {
#line 10085
        .trainerName = _("Blank"),
#line 10086
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10087
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10089
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10091
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10090
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10092
    [DIFFICULTY_NORMAL][TRAINER_ACB85CBA] =
    {
#line 10093
        .trainerName = _("Blank"),
#line 10094
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10095
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10097
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10099
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10098
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10100
    [DIFFICULTY_NORMAL][TRAINER_ACE2090A] =
    {
#line 10101
        .trainerName = _("Blank"),
#line 10102
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10103
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10105
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10107
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10106
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10108
    [DIFFICULTY_NORMAL][TRAINER_AD1AA26D] =
    {
#line 10109
        .trainerName = _("Blank"),
#line 10110
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10111
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10113
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10115
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10114
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10116
    [DIFFICULTY_NORMAL][TRAINER_AD70C4BA] =
    {
#line 10117
        .trainerName = _("Blank"),
#line 10118
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10119
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10121
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10123
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10122
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10124
    [DIFFICULTY_NORMAL][TRAINER_AD8C8210] =
    {
#line 10125
        .trainerName = _("Blank"),
#line 10126
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10127
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10129
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10131
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10130
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10132
    [DIFFICULTY_NORMAL][TRAINER_ADC94E2C] =
    {
#line 10133
        .trainerName = _("Blank"),
#line 10134
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10135
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10137
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10139
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10138
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10140
    [DIFFICULTY_NORMAL][TRAINER_AE0ED10D] =
    {
#line 10141
        .trainerName = _("Blank"),
#line 10142
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10143
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10145
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10147
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10146
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10148
    [DIFFICULTY_NORMAL][TRAINER_AE99A6E1] =
    {
#line 10149
        .trainerName = _("Blank"),
#line 10150
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10151
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10153
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10155
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10154
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10156
    [DIFFICULTY_NORMAL][TRAINER_AE9CFA41] =
    {
#line 10157
        .trainerName = _("Blank"),
#line 10158
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10159
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10161
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10163
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10162
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10164
    [DIFFICULTY_NORMAL][TRAINER_AEDC9768] =
    {
#line 10165
        .trainerName = _("Blank"),
#line 10166
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10167
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10169
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10171
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10170
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10172
    [DIFFICULTY_NORMAL][TRAINER_AF0898E7] =
    {
#line 10173
        .trainerName = _("Blank"),
#line 10174
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10175
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10177
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10179
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10178
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10180
    [DIFFICULTY_NORMAL][TRAINER_AF765F9F] =
    {
#line 10181
        .trainerName = _("Blank"),
#line 10182
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10183
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10185
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10187
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10186
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10188
    [DIFFICULTY_NORMAL][TRAINER_AFA4A980] =
    {
#line 10189
        .trainerName = _("Blank"),
#line 10190
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10193
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10195
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10194
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10196
    [DIFFICULTY_NORMAL][TRAINER_AFA5BAC9] =
    {
#line 10197
        .trainerName = _("Blank"),
#line 10198
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10199
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10201
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10203
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10202
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10204
    [DIFFICULTY_NORMAL][TRAINER_AFD8F2EF] =
    {
#line 10205
        .trainerName = _("Blank"),
#line 10206
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10209
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10211
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10210
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10212
    [DIFFICULTY_NORMAL][TRAINER_AFE855B1] =
    {
#line 10213
        .trainerName = _("Blank"),
#line 10214
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10215
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10217
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10219
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10218
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10220
    [DIFFICULTY_NORMAL][TRAINER_AFFCC47E] =
    {
#line 10221
        .trainerName = _("Blank"),
#line 10222
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10223
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10225
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10227
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10226
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10228
    [DIFFICULTY_NORMAL][TRAINER_B0FC622D] =
    {
#line 10229
        .trainerName = _("Blank"),
#line 10230
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10231
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10233
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10235
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10234
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10236
    [DIFFICULTY_NORMAL][TRAINER_B1DA7383] =
    {
#line 10237
        .trainerName = _("Blank"),
#line 10238
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10239
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10241
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10243
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10242
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10244
    [DIFFICULTY_NORMAL][TRAINER_B253DEF2] =
    {
#line 10245
        .trainerName = _("Blank"),
#line 10246
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10247
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10249
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10251
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10250
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10252
    [DIFFICULTY_NORMAL][TRAINER_B2925134] =
    {
#line 10253
        .trainerName = _("Blank"),
#line 10254
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10255
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10257
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10259
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10258
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10260
    [DIFFICULTY_NORMAL][TRAINER_B2A5CB2B] =
    {
#line 10261
        .trainerName = _("Blank"),
#line 10262
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10263
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10265
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10267
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10266
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10268
    [DIFFICULTY_NORMAL][TRAINER_B32A1E98] =
    {
#line 10269
        .trainerName = _("Blank"),
#line 10270
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10271
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10273
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10275
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10274
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10276
    [DIFFICULTY_NORMAL][TRAINER_B3B1644E] =
    {
#line 10277
        .trainerName = _("Blank"),
#line 10278
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10279
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10281
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10283
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10282
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10284
    [DIFFICULTY_NORMAL][TRAINER_B3CE95A4] =
    {
#line 10285
        .trainerName = _("Blank"),
#line 10286
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10287
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10289
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10291
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10290
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10292
    [DIFFICULTY_NORMAL][TRAINER_B3FB2F4B] =
    {
#line 10293
        .trainerName = _("Blank"),
#line 10294
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10295
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10297
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10299
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10298
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10300
    [DIFFICULTY_NORMAL][TRAINER_B42E7E27] =
    {
#line 10301
        .trainerName = _("Blank"),
#line 10302
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10303
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10305
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10307
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10306
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10308
    [DIFFICULTY_NORMAL][TRAINER_B42F5023] =
    {
#line 10309
        .trainerName = _("Blank"),
#line 10310
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10311
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10313
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10315
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10314
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10316
    [DIFFICULTY_NORMAL][TRAINER_B435B7EF] =
    {
#line 10317
        .trainerName = _("Blank"),
#line 10318
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10319
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10321
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10323
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10322
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10324
    [DIFFICULTY_NORMAL][TRAINER_B438F348] =
    {
#line 10325
        .trainerName = _("Blank"),
#line 10326
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10327
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10329
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10331
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10330
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10332
    [DIFFICULTY_NORMAL][TRAINER_B489F821] =
    {
#line 10333
        .trainerName = _("Blank"),
#line 10334
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10335
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10337
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10339
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10338
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10340
    [DIFFICULTY_NORMAL][TRAINER_B490300F] =
    {
#line 10341
        .trainerName = _("Blank"),
#line 10342
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10343
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10345
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10347
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10346
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10348
    [DIFFICULTY_NORMAL][TRAINER_B53E1C28] =
    {
#line 10349
        .trainerName = _("Blank"),
#line 10350
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10351
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10353
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10355
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10354
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10356
    [DIFFICULTY_NORMAL][TRAINER_B5E055E7] =
    {
#line 10357
        .trainerName = _("Blank"),
#line 10358
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10359
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10361
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10363
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10362
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10364
    [DIFFICULTY_NORMAL][TRAINER_B6330B06] =
    {
#line 10365
        .trainerName = _("Blank"),
#line 10366
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10367
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10369
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10371
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10370
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10372
    [DIFFICULTY_NORMAL][TRAINER_B66CAB9E] =
    {
#line 10373
        .trainerName = _("Blank"),
#line 10374
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10375
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10377
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10379
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10378
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10380
    [DIFFICULTY_NORMAL][TRAINER_B6E3D521] =
    {
#line 10381
        .trainerName = _("Blank"),
#line 10382
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10383
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10385
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10387
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10386
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10388
    [DIFFICULTY_NORMAL][TRAINER_B6F23A27] =
    {
#line 10389
        .trainerName = _("Blank"),
#line 10390
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10391
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10393
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10395
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10394
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10396
    [DIFFICULTY_NORMAL][TRAINER_B71419A1] =
    {
#line 10397
        .trainerName = _("Blank"),
#line 10398
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10399
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10401
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10403
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10402
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10404
    [DIFFICULTY_NORMAL][TRAINER_B77C014B] =
    {
#line 10405
        .trainerName = _("Blank"),
#line 10406
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10407
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10409
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10411
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10410
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10412
    [DIFFICULTY_NORMAL][TRAINER_B791766D] =
    {
#line 10413
        .trainerName = _("Blank"),
#line 10414
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10417
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10419
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10418
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10420
    [DIFFICULTY_NORMAL][TRAINER_B7998A66] =
    {
#line 10421
        .trainerName = _("Blank"),
#line 10422
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10423
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10425
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10427
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10426
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10428
    [DIFFICULTY_NORMAL][TRAINER_B7C2EB7F] =
    {
#line 10429
        .trainerName = _("Blank"),
#line 10430
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10431
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10433
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10435
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10434
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10436
    [DIFFICULTY_NORMAL][TRAINER_B7EFEE71] =
    {
#line 10437
        .trainerName = _("Blank"),
#line 10438
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10439
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10441
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10443
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10442
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10444
    [DIFFICULTY_NORMAL][TRAINER_B84B3D2A] =
    {
#line 10445
        .trainerName = _("Blank"),
#line 10446
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10447
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10449
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10451
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10450
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10452
    [DIFFICULTY_NORMAL][TRAINER_B8C5628C] =
    {
#line 10453
        .trainerName = _("Blank"),
#line 10454
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10455
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10457
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10459
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10458
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10460
    [DIFFICULTY_NORMAL][TRAINER_B94D66E3] =
    {
#line 10461
        .trainerName = _("Blank"),
#line 10462
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10463
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10465
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10467
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10466
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10468
    [DIFFICULTY_NORMAL][TRAINER_B9C56D15] =
    {
#line 10469
        .trainerName = _("Blank"),
#line 10470
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10471
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10473
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10475
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10474
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10476
    [DIFFICULTY_NORMAL][TRAINER_BA12D98F] =
    {
#line 10477
        .trainerName = _("Blank"),
#line 10478
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10479
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10481
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10483
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10482
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10484
    [DIFFICULTY_NORMAL][TRAINER_BA4155D3] =
    {
#line 10485
        .trainerName = _("Blank"),
#line 10486
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10487
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10489
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10491
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10490
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10492
    [DIFFICULTY_NORMAL][TRAINER_BA4DFC3A] =
    {
#line 10493
        .trainerName = _("Blank"),
#line 10494
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10495
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10497
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10499
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10498
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10500
    [DIFFICULTY_NORMAL][TRAINER_BA60011F] =
    {
#line 10501
        .trainerName = _("Blank"),
#line 10502
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10503
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10505
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10507
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10506
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10508
    [DIFFICULTY_NORMAL][TRAINER_BA924FF7] =
    {
#line 10509
        .trainerName = _("Blank"),
#line 10510
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10511
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10513
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10515
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10514
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10516
    [DIFFICULTY_NORMAL][TRAINER_BB07DD1B] =
    {
#line 10517
        .trainerName = _("Blank"),
#line 10518
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10519
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10521
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10523
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10522
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10524
    [DIFFICULTY_NORMAL][TRAINER_BB531FBA] =
    {
#line 10525
        .trainerName = _("Blank"),
#line 10526
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10527
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10529
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10531
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10530
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10532
    [DIFFICULTY_NORMAL][TRAINER_BB6FD0A4] =
    {
#line 10533
        .trainerName = _("Blank"),
#line 10534
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10535
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10537
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10539
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10538
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10540
    [DIFFICULTY_NORMAL][TRAINER_BBBC4B4C] =
    {
#line 10541
        .trainerName = _("Blank"),
#line 10542
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10543
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10545
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10547
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10546
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10548
    [DIFFICULTY_NORMAL][TRAINER_BBD56E26] =
    {
#line 10549
        .trainerName = _("Blank"),
#line 10550
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10551
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10553
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10555
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10554
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10556
    [DIFFICULTY_NORMAL][TRAINER_BC01A85B] =
    {
#line 10557
        .trainerName = _("Blank"),
#line 10558
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10561
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10563
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10562
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10564
    [DIFFICULTY_NORMAL][TRAINER_BC74FA1D] =
    {
#line 10565
        .trainerName = _("Blank"),
#line 10566
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10567
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10569
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10571
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10570
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10572
    [DIFFICULTY_NORMAL][TRAINER_BC7E8D55] =
    {
#line 10573
        .trainerName = _("Blank"),
#line 10574
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10575
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10577
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10579
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10578
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10580
    [DIFFICULTY_NORMAL][TRAINER_BCDFD312] =
    {
#line 10581
        .trainerName = _("Blank"),
#line 10582
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10583
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10585
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10587
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10586
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10588
    [DIFFICULTY_NORMAL][TRAINER_BCEFD799] =
    {
#line 10589
        .trainerName = _("Blank"),
#line 10590
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10591
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10593
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10595
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10594
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10596
    [DIFFICULTY_NORMAL][TRAINER_BD01F8F4] =
    {
#line 10597
        .trainerName = _("Blank"),
#line 10598
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10599
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10601
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10603
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10602
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10604
    [DIFFICULTY_NORMAL][TRAINER_BDC38E1E] =
    {
#line 10605
        .trainerName = _("Blank"),
#line 10606
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10607
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10609
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10611
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10610
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10612
    [DIFFICULTY_NORMAL][TRAINER_BE2AF14F] =
    {
#line 10613
        .trainerName = _("Blank"),
#line 10614
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10615
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10617
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10619
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10618
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10620
    [DIFFICULTY_NORMAL][TRAINER_BEB2BD3E] =
    {
#line 10621
        .trainerName = _("Blank"),
#line 10622
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10623
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10625
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10627
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10626
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10628
    [DIFFICULTY_NORMAL][TRAINER_BF07B94F] =
    {
#line 10629
        .trainerName = _("Blank"),
#line 10630
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10631
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10633
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10635
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10634
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10636
    [DIFFICULTY_NORMAL][TRAINER_BF2827C0] =
    {
#line 10637
        .trainerName = _("Blank"),
#line 10638
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10639
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10641
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10643
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10642
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10644
    [DIFFICULTY_NORMAL][TRAINER_BF74896F] =
    {
#line 10645
        .trainerName = _("Blank"),
#line 10646
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10647
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10649
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10651
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10650
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10652
    [DIFFICULTY_NORMAL][TRAINER_BF8ADEF1] =
    {
#line 10653
        .trainerName = _("Blank"),
#line 10654
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10655
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10657
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10659
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10658
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10660
    [DIFFICULTY_NORMAL][TRAINER_C0800804] =
    {
#line 10661
        .trainerName = _("Blank"),
#line 10662
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10663
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10665
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10667
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10666
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10668
    [DIFFICULTY_NORMAL][TRAINER_C091F2C5] =
    {
#line 10669
        .trainerName = _("Blank"),
#line 10670
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10671
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10673
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10675
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10674
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10676
    [DIFFICULTY_NORMAL][TRAINER_C10351D2] =
    {
#line 10677
        .trainerName = _("Blank"),
#line 10678
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10679
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10681
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10683
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10682
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10684
    [DIFFICULTY_NORMAL][TRAINER_C1C428F7] =
    {
#line 10685
        .trainerName = _("Blank"),
#line 10686
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10687
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10689
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10691
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10690
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10692
    [DIFFICULTY_NORMAL][TRAINER_C1C621AC] =
    {
#line 10693
        .trainerName = _("Blank"),
#line 10694
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10695
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10697
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10699
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10698
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10700
    [DIFFICULTY_NORMAL][TRAINER_C203C024] =
    {
#line 10701
        .trainerName = _("Blank"),
#line 10702
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10703
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10705
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10707
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10706
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10708
    [DIFFICULTY_NORMAL][TRAINER_C2174D90] =
    {
#line 10709
        .trainerName = _("Blank"),
#line 10710
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10711
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10713
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10715
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10714
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10716
    [DIFFICULTY_NORMAL][TRAINER_C24EFC92] =
    {
#line 10717
        .trainerName = _("Blank"),
#line 10718
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10719
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10721
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10723
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10722
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10724
    [DIFFICULTY_NORMAL][TRAINER_C290C9F5] =
    {
#line 10725
        .trainerName = _("Blank"),
#line 10726
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10727
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10729
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10731
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10730
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10732
    [DIFFICULTY_NORMAL][TRAINER_C29CDC34] =
    {
#line 10733
        .trainerName = _("Blank"),
#line 10734
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10735
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10737
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10739
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10738
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10740
    [DIFFICULTY_NORMAL][TRAINER_C3B3B17B] =
    {
#line 10741
        .trainerName = _("Blank"),
#line 10742
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10743
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10745
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10747
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10746
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10748
    [DIFFICULTY_NORMAL][TRAINER_C414BED0] =
    {
#line 10749
        .trainerName = _("Blank"),
#line 10750
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10753
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10755
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10754
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10756
    [DIFFICULTY_NORMAL][TRAINER_C42A775B] =
    {
#line 10757
        .trainerName = _("Blank"),
#line 10758
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10759
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10761
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10763
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10762
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10764
    [DIFFICULTY_NORMAL][TRAINER_C4A167E0] =
    {
#line 10765
        .trainerName = _("Blank"),
#line 10766
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10767
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10769
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10771
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10770
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10772
    [DIFFICULTY_NORMAL][TRAINER_C4C98FC4] =
    {
#line 10773
        .trainerName = _("Blank"),
#line 10774
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10775
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10777
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10779
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10778
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10780
    [DIFFICULTY_NORMAL][TRAINER_C533F091] =
    {
#line 10781
        .trainerName = _("Blank"),
#line 10782
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10783
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10785
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10787
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10786
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10788
    [DIFFICULTY_NORMAL][TRAINER_C6600959] =
    {
#line 10789
        .trainerName = _("Blank"),
#line 10790
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10791
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10793
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10795
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10794
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10796
    [DIFFICULTY_NORMAL][TRAINER_C6666859] =
    {
#line 10797
        .trainerName = _("Blank"),
#line 10798
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10799
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10801
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10803
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10802
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10804
    [DIFFICULTY_NORMAL][TRAINER_C690158D] =
    {
#line 10805
        .trainerName = _("Blank"),
#line 10806
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10807
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10809
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10811
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10810
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10812
    [DIFFICULTY_NORMAL][TRAINER_C6E61EDA] =
    {
#line 10813
        .trainerName = _("Blank"),
#line 10814
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10815
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10817
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10819
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10818
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10820
    [DIFFICULTY_NORMAL][TRAINER_C7630112] =
    {
#line 10821
        .trainerName = _("Blank"),
#line 10822
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10823
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10825
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10827
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10826
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10828
    [DIFFICULTY_NORMAL][TRAINER_C789FBF5] =
    {
#line 10829
        .trainerName = _("Blank"),
#line 10830
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10831
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10833
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10835
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10834
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10836
    [DIFFICULTY_NORMAL][TRAINER_C7E06CB4] =
    {
#line 10837
        .trainerName = _("Blank"),
#line 10838
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10839
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10841
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10843
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10842
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10844
    [DIFFICULTY_NORMAL][TRAINER_C7F16F5B] =
    {
#line 10845
        .trainerName = _("Blank"),
#line 10846
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10847
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10849
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10851
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10850
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10852
    [DIFFICULTY_NORMAL][TRAINER_C82E0F99] =
    {
#line 10853
        .trainerName = _("Blank"),
#line 10854
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10855
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10857
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10859
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10858
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10860
    [DIFFICULTY_NORMAL][TRAINER_C84D5BA6] =
    {
#line 10861
        .trainerName = _("Blank"),
#line 10862
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10863
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10865
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10867
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10866
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10868
    [DIFFICULTY_NORMAL][TRAINER_C8563FAA] =
    {
#line 10869
        .trainerName = _("Blank"),
#line 10870
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10871
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10873
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10875
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10874
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10876
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 10877
        .trainerName = _("Blank"),
#line 10878
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10879
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10881
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10883
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10882
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10884
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 10885
        .trainerName = _("Blank"),
#line 10886
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10887
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10889
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10891
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10890
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
