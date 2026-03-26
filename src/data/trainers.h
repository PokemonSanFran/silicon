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
#line 3277
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3275
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3279
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3282
            .ev = TRAINER_PARTY_EVS(0, 0, 156, 0, 0, 0),
#line 3284
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3280
            .ability = ABILITY_FRIEND_GUARD,
#line 3281
            .lvl = 19,
#line 3283
            .nature = NATURE_LAX,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3285
                MOVE_HELPING_HAND,
                MOVE_LIGHT_SCREEN,
                MOVE_ICY_WIND,
            },
            },
            {
#line 3289
            .species = SPECIES_SMOLIV,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3289
            .heldItem = ITEM_ORAN_BERRY,
#line 3292
            .ev = TRAINER_PARTY_EVS(144, 12, 0, 0, 0, 0),
#line 3294
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3290
            .ability = ABILITY_HARVEST,
#line 3291
            .lvl = 20,
#line 3293
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3295
                MOVE_LEECH_SEED,
                MOVE_CHARM,
                MOVE_RAZOR_LEAF,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 3300
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3303
            .ev = TRAINER_PARTY_EVS(0, 84, 0, 64, 0, 0),
#line 3305
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3301
            .ability = ABILITY_HUSTLE,
#line 3302
            .lvl = 22,
#line 3304
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3306
                MOVE_QUICK_ATTACK,
                MOVE_AIR_CUTTER,
                MOVE_POUNCE,
                MOVE_REVERSAL,
            },
            },
        },
    },
#line 3311
    [DIFFICULTY_NORMAL][TRAINER_0049EFE8] =
    {
#line 3312
        .trainerName = _("0049EFE8"),
#line 3313
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3314
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3316
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3315
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3318
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3318
            .heldItem = ITEM_CHARCOAL,
#line 3320
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 44, 56, 0),
#line 3322
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3319
            .ability = ABILITY_DROUGHT,
#line 3323
            .lvl = 22,
#line 3321
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3324
                MOVE_FIRE_SPIN,
                MOVE_FLAME_CHARGE,
                MOVE_WEATHER_BALL,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3329
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3329
            .heldItem = ITEM_PASSHO_BERRY,
#line 3331
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 100, 0, 0),
#line 3333
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3330
            .ability = ABILITY_FLAME_BODY,
#line 3334
            .lvl = 22,
#line 3332
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3335
                MOVE_BUG_BITE,
                MOVE_FLAME_WHEEL,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 3339
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3342
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3340
            .ability = ABILITY_FLAME_BODY,
#line 3343
            .lvl = 21,
#line 3341
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3344
                MOVE_WILL_O_WISP,
                MOVE_HEX,
                MOVE_FIRE_SPIN,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 3349
    [DIFFICULTY_NORMAL][TRAINER_023957DE] =
    {
#line 3350
        .trainerName = _("023957DE"),
#line 3351
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3352
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3354
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3353
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3356
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3356
            .heldItem = ITEM_ORAN_BERRY,
#line 3359
            .ev = TRAINER_PARTY_EVS(72, 0, 40, 0, 0, 40),
#line 3361
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3357
            .ability = ABILITY_SHED_SKIN,
#line 3358
            .lvl = 25,
#line 3360
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3362
                MOVE_THUNDER_WAVE,
                MOVE_DRAGON_TAIL,
                MOVE_SUPERSONIC,
                MOVE_SLAM,
            },
            },
            {
#line 3367
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3370
            .ev = TRAINER_PARTY_EVS(0, 148, 4, 0, 0, 0),
#line 3372
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3368
            .ability = ABILITY_HUSTLE,
#line 3369
            .lvl = 21,
#line 3371
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3373
                MOVE_BITE,
                MOVE_HEADBUTT,
                MOVE_DRAGON_TAIL,
            },
            },
            {
#line 3377
            .species = SPECIES_ZWEILOUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3380
            .ev = TRAINER_PARTY_EVS(0, 148, 0, 0, 0, 4),
#line 3382
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3378
            .ability = ABILITY_HUSTLE,
#line 3379
            .lvl = 22,
#line 3381
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3383
                MOVE_BITE,
                MOVE_FIRE_FANG,
                MOVE_THUNDER_FANG,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 3388
    [DIFFICULTY_NORMAL][TRAINER_006E7EFD] =
    {
#line 3389
        .trainerName = _("006E7EFD"),
#line 3390
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3391
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3393
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3392
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3395
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3398
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 100, 0, 0),
#line 3400
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3396
            .ability = ABILITY_INNER_FOCUS,
#line 3397
            .lvl = 22,
#line 3399
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3401
                MOVE_BATON_PASS,
                MOVE_SWORDS_DANCE,
                MOVE_VACUUM_WAVE,
                MOVE_METRONOME,
            },
            },
            {
#line 3406
            .species = SPECIES_PAWMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3409
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 100, 0, 0),
#line 3411
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3407
            .ability = ABILITY_IRON_FIST,
#line 3408
            .lvl = 21,
#line 3410
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3412
                MOVE_BATON_PASS,
                MOVE_MACH_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_AGILITY,
            },
            },
            {
#line 3417
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3417
            .heldItem = ITEM_FOCUS_SASH,
#line 3420
            .ev = TRAINER_PARTY_EVS(72, 0, 36, 0, 0, 36),
#line 3422
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3418
            .ability = ABILITY_RECKLESS,
#line 3419
            .lvl = 21,
#line 3421
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3423
                MOVE_HIGH_JUMP_KICK,
                MOVE_DETECT,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
        },
    },
#line 3428
    [DIFFICULTY_NORMAL][TRAINER_007F06A5] =
    {
#line 3429
        .trainerName = _("007F06A5"),
#line 3430
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3431
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3433
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3432
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3435
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3435
            .heldItem = ITEM_SITRUS_BERRY,
#line 3438
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3436
            .ability = ABILITY_TORRENT,
#line 3437
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3439
                MOVE_MIRROR_COAT,
                MOVE_MUDDY_WATER,
                MOVE_COUNTER,
            },
            },
            {
#line 3443
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3446
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3444
            .ability = ABILITY_OWN_TEMPO,
#line 3445
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3447
                MOVE_LIGHT_SCREEN,
                MOVE_RAIN_DANCE,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 3451
            .species = SPECIES_ARROKUDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3451
            .heldItem = ITEM_METRONOME,
#line 3454
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3452
            .ability = ABILITY_PROPELLER_TAIL,
#line 3453
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3454
                MOVE_AQUA_JET,
            },
            },
        },
    },
#line 3456
    [DIFFICULTY_NORMAL][TRAINER_01103D48] =
    {
#line 3457
        .trainerName = _("01103D48"),
#line 3458
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3462
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3459
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3461
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3460
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3464
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3467
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 144, 0),
#line 3469
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3465
            .ability = ABILITY_PICKUP,
#line 3466
            .lvl = 23,
#line 3468
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3470
                MOVE_FOLLOW_ME,
                MOVE_CHARGE_BEAM,
                MOVE_THIEF,
                MOVE_MUD_SHOT,
            },
            },
            {
#line 3475
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3475
            .heldItem = ITEM_ORAN_BERRY,
#line 3478
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 64, 80, 0),
#line 3480
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3476
            .ability = ABILITY_WIND_POWER,
#line 3477
            .lvl = 22,
#line 3479
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3481
                MOVE_TAILWIND,
                MOVE_ROOST,
                MOVE_PLUCK,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 3486
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3486
            .heldItem = ITEM_MAGNET,
#line 3489
            .ev = TRAINER_PARTY_EVS(44, 56, 0, 44, 0, 0),
#line 3490
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3487
            .ability = ABILITY_INTIMIDATE,
#line 3488
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3491
                MOVE_BITE,
                MOVE_CHARGE,
                MOVE_SPARK,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 3496
    [DIFFICULTY_NORMAL][TRAINER_0272920D] =
    {
#line 3497
        .trainerName = _("0272920D"),
#line 3498
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3499
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3501
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3500
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3503
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3503
            .heldItem = ITEM_ROCKY_HELMET,
#line 3506
            .ev = TRAINER_PARTY_EVS(0, 116, 0, 28, 0, 0),
#line 3508
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3504
            .ability = ABILITY_ROUGH_SKIN,
#line 3505
            .lvl = 25,
#line 3507
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3509
                MOVE_AQUA_JET,
                MOVE_BITE,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 3513
            .species = SPECIES_THIEVUL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3516
            .ev = TRAINER_PARTY_EVS(36, 0, 32, 24, 32, 24),
#line 3518
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3514
            .ability = ABILITY_UNBURDEN,
#line 3515
            .lvl = 24,
#line 3517
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3519
                MOVE_NASTY_PLOT,
                MOVE_SNARL,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3523
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3523
            .heldItem = ITEM_MENTAL_HERB,
#line 3526
            .ev = TRAINER_PARTY_EVS(56, 0, 56, 0, 0, 40),
#line 3528
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3524
            .ability = ABILITY_PRANKSTER,
#line 3525
            .lvl = 25,
#line 3527
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3529
                MOVE_HAZE,
                MOVE_WING_ATTACK,
                MOVE_TAUNT,
                MOVE_THIEF,
            },
            },
        },
    },
#line 3534
    [DIFFICULTY_NORMAL][TRAINER_022A53A0] =
    {
#line 3535
        .trainerName = _("022A53A0"),
#line 3536
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3540
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3537
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3539
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3538
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3542
            .species = SPECIES_KRICKETUNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3542
            .heldItem = ITEM_FOCUS_BAND,
#line 3545
            .ev = TRAINER_PARTY_EVS(28, 24, 36, 44, 0, 24),
#line 3547
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3543
            .ability = ABILITY_SWARM,
#line 3544
            .lvl = 20,
#line 3546
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3548
                MOVE_SING,
                MOVE_STICKY_WEB,
                MOVE_LEECH_LIFE,
            },
            },
            {
#line 3552
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3552
            .heldItem = ITEM_FOCUS_BAND,
#line 3555
            .ev = TRAINER_PARTY_EVS(68, 20, 68, 0, 0, 0),
#line 3557
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3553
            .ability = ABILITY_SWARM,
#line 3554
            .lvl = 24,
#line 3556
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3558
                MOVE_RAZOR_LEAF,
                MOVE_STRUGGLE_BUG,
                MOVE_ELECTROWEB,
            },
            },
            {
#line 3562
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3562
            .heldItem = ITEM_SILVER_POWDER,
#line 3565
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 152, 0, 0),
#line 3567
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3563
            .ability = ABILITY_SWARM,
#line 3564
            .lvl = 25,
#line 3566
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3568
                MOVE_NIGHT_SHADE,
                MOVE_FELL_STINGER,
                MOVE_BUG_BITE,
            },
            },
        },
    },
#line 3574
    [DIFFICULTY_NORMAL][TRAINER_012ED80D] =
    {
#line 3575
        .trainerName = _("012ED80D"),
#line 3576
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3577
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3579
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3578
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3581
            .species = SPECIES_MUDBRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3584
            .ev = TRAINER_PARTY_EVS(0, 24, 128, 0, 0, 0),
#line 3586
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3582
            .ability = ABILITY_STAMINA,
#line 3583
            .lvl = 21,
#line 3585
            .nature = NATURE_LAX,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3587
                MOVE_STRENGTH,
                MOVE_COUNTER,
                MOVE_BULLDOZE,
                MOVE_DOUBLE_KICK,
            },
            },
            {
#line 3592
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3595
            .ev = TRAINER_PARTY_EVS(0, 136, 0, 0, 0, 0),
#line 3597
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3593
            .ability = ABILITY_SAND_FORCE,
#line 3594
            .lvl = 20,
#line 3596
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3598
                MOVE_SANDSTORM,
                MOVE_METAL_CLAW,
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3603
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3606
            .ev = TRAINER_PARTY_EVS(0, 76, 0, 0, 72, 0),
#line 3608
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3604
            .ability = ABILITY_SIMPLE,
#line 3605
            .lvl = 21,
#line 3607
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3609
                MOVE_INCINERATE,
                MOVE_BULLDOZE,
                MOVE_FOCUS_ENERGY,
            },
            },
        },
    },
#line 3613
    [DIFFICULTY_NORMAL][TRAINER_01E6E96E] =
    {
#line 3614
        .trainerName = _("01E6E96E"),
#line 3615
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3619
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3616
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3618
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3617
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3621
            .species = SPECIES_MINIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3621
            .heldItem = ITEM_POWER_HERB,
#line 3624
            .ev = TRAINER_PARTY_EVS(0, 92, 0, 0, 56, 0),
#line 3626
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3622
            .ability = ABILITY_SHIELDS_DOWN,
#line 3623
            .lvl = 22,
#line 3625
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3627
                MOVE_METEOR_BEAM,
                MOVE_ROLLOUT,
                MOVE_ACROBATICS,
                MOVE_U_TURN,
            },
            },
            {
#line 3632
            .species = SPECIES_VIVILLON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3632
            .heldItem = ITEM_MENTAL_HERB,
#line 3635
            .ev = TRAINER_PARTY_EVS(80, 0, 0, 68, 0, 0),
#line 3637
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3633
            .ability = ABILITY_FRIEND_GUARD,
#line 3634
            .lvl = 20,
#line 3636
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3638
                MOVE_SWIFT,
                MOVE_U_TURN,
                MOVE_STUN_SPORE,
                MOVE_TAILWIND,
            },
            },
            {
#line 3643
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3643
            .heldItem = ITEM_SILK_SCARF,
#line 3646
            .ev = TRAINER_PARTY_EVS(0, 148, 0, 0, 0, 0),
#line 3648
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3644
            .ability = ABILITY_SCRAPPY,
#line 3645
            .lvl = 22,
#line 3647
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3649
                MOVE_RAGE,
                MOVE_RETURN,
                MOVE_AERIAL_ACE,
                MOVE_U_TURN,
            },
            },
        },
    },
#line 3654
    [DIFFICULTY_NORMAL][TRAINER_0092D526] =
    {
#line 3655
        .trainerName = _("0092D526"),
#line 3656
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3660
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3657
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3659
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3658
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3662
            .species = SPECIES_BOUNSWEET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3665
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 60, 96, 0),
#line 3667
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3663
            .ability = ABILITY_LEAF_GUARD,
#line 3664
            .lvl = 21,
#line 3666
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3668
                MOVE_MAGICAL_LEAF,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 3671
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3671
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3674
            .ev = TRAINER_PARTY_EVS(0, 0, 84, 0, 0, 64),
#line 3675
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3672
            .ability = ABILITY_EFFECT_SPORE,
#line 3673
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3676
                MOVE_RAGE_POWDER,
                MOVE_POISON_POWDER,
                MOVE_VENOSHOCK,
                MOVE_STUN_SPORE,
            },
            },
            {
#line 3681
            .species = SPECIES_CAPSAKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3684
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 156, 0),
#line 3686
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3682
            .ability = ABILITY_CHLOROPHYLL,
#line 3683
            .lvl = 21,
#line 3685
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3687
                MOVE_MAGICAL_LEAF,
                MOVE_GROWTH,
                MOVE_INGRAIN,
            },
            },
        },
    },
#line 3691
    [DIFFICULTY_NORMAL][TRAINER_00C593A8] =
    {
#line 3692
        .trainerName = _("00C593A8"),
#line 3693
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3697
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3694
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3696
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3695
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3699
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3699
            .heldItem = ITEM_WACAN_BERRY,
#line 3702
            .ev = TRAINER_PARTY_EVS(64, 84, 0, 0, 0, 0),
#line 3704
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3700
            .ability = ABILITY_ICE_BODY,
#line 3701
            .lvl = 20,
#line 3703
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3705
                MOVE_ROLLOUT,
                MOVE_SNOWSCAPE,
                MOVE_ICE_BALL,
            },
            },
            {
#line 3709
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3709
            .heldItem = ITEM_METRONOME,
#line 3712
            .ev = TRAINER_PARTY_EVS(44, 100, 0, 0, 0, 0),
#line 3714
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3710
            .ability = ABILITY_ICE_BODY,
#line 3711
            .lvl = 24,
#line 3713
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3715
                MOVE_SNOWSCAPE,
                MOVE_ROLLOUT,
                MOVE_ICE_BALL,
            },
            },
            {
#line 3719
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3722
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 0, 104, 0),
#line 3724
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3720
            .ability = ABILITY_OBLIVIOUS,
#line 3721
            .lvl = 23,
#line 3723
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3725
                MOVE_PSYCHIC_NOISE,
                MOVE_CONFUSION,
                MOVE_ICY_WIND,
            },
            },
        },
    },
#line 3729
    [DIFFICULTY_NORMAL][TRAINER_01E7C79B] =
    {
#line 3730
        .trainerName = _("01E7C79B"),
#line 3731
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3732
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3734
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3733
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3736
            .species = SPECIES_DOTTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3739
            .ev = TRAINER_PARTY_EVS(0, 0, 88, 0, 0, 64),
#line 3741
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3737
            .ability = ABILITY_SWARM,
#line 3738
            .lvl = 22,
#line 3740
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3742
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_CONFUSION,
                MOVE_STRUGGLE_BUG,
            },
            },
            {
#line 3747
            .species = SPECIES_HATENNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3747
            .heldItem = ITEM_TWISTED_SPOON,
#line 3750
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 88, 56, 0),
#line 3752
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3748
            .ability = ABILITY_ANTICIPATION,
#line 3749
            .lvl = 23,
#line 3751
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3753
                MOVE_PSYBEAM,
                MOVE_DISARMING_VOICE,
                MOVE_NUZZLE,
            },
            },
            {
#line 3757
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3760
            .ev = TRAINER_PARTY_EVS(0, 92, 40, 0, 0, 24),
#line 3762
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3758
            .ability = ABILITY_PURE_POWER,
#line 3759
            .lvl = 24,
#line 3761
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3763
                MOVE_ZEN_HEADBUTT,
                MOVE_FORCE_PALM,
                MOVE_WORK_UP,
            },
            },
        },
    },
#line 3767
    [DIFFICULTY_NORMAL][TRAINER_01C7AF3F] =
    {
#line 3768
        .trainerName = _("01C7AF3F"),
#line 3769
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3773
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3770
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3772
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3771
        .mapSec = MAPSEC_GLAVEZ_HILL,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3775
            .nickname = COMPOUND_STRING("Flabebe"),
#line 3775
            .species = SPECIES_FLABEBE_YELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3775
            .heldItem = ITEM_ORAN_BERRY,
#line 3778
            .ev = TRAINER_PARTY_EVS(0, 0, 52, 0, 0, 96),
#line 3780
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 3776
            .ability = ABILITY_SYMBIOSIS,
#line 3777
            .lvl = 23,
#line 3779
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3781
                MOVE_TEARFUL_LOOK,
                MOVE_DISARMING_VOICE,
                MOVE_MAGICAL_LEAF,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 3786
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3789
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 36, 116, 0),
#line 3791
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3787
            .ability = ABILITY_TRACE,
#line 3788
            .lvl = 20,
#line 3790
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3792
                MOVE_DISARMING_VOICE,
                MOVE_PSYBEAM,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 3796
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3796
            .heldItem = ITEM_SITRUS_BERRY,
#line 3799
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 88, 64, 0),
#line 3801
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 3797
            .ability = ABILITY_TRACE,
#line 3798
            .lvl = 21,
#line 3800
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3802
                MOVE_DISARMING_VOICE,
                MOVE_PSYBEAM,
                MOVE_LIFE_DEW,
            },
            },
        },
    },
#line 3808
    [DIFFICULTY_NORMAL][TRAINER_02EEB783] =
    {
#line 3809
        .trainerName = _("02EEB783"),
#line 3810
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3814
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3811
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3813
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3812
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3816
            .species = SPECIES_YAMASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3819
            .ev = TRAINER_PARTY_EVS(80, 0, 0, 0, 76, 0),
#line 3821
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3817
            .ability = ABILITY_MUMMY,
#line 3818
            .lvl = 21,
#line 3820
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3822
                MOVE_WILL_O_WISP,
                MOVE_PROTECT,
                MOVE_HEX,
            },
            },
            {
#line 3826
            .species = SPECIES_HONEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3826
            .heldItem = ITEM_OCCA_BERRY,
#line 3829
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 144),
#line 3831
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3827
            .ability = ABILITY_NO_GUARD,
#line 3828
            .lvl = 25,
#line 3830
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3832
                MOVE_AERIAL_ACE,
                MOVE_SHADOW_SNEAK,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 3836
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3839
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 96, 48),
#line 3841
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3837
            .ability = ABILITY_LEVITATE,
#line 3838
            .lvl = 25,
#line 3840
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3842
                MOVE_CHARGE,
                MOVE_THUNDER_SHOCK,
                MOVE_ASTONISH,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 3847
    [DIFFICULTY_NORMAL][TRAINER_026E91A6] =
    {
#line 3848
        .trainerName = _("026E91A6"),
#line 3849
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3853
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3850
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3852
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3851
        .mapSec = MAPSEC_ROUTE8,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3855
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3855
            .heldItem = ITEM_SITRUS_BERRY,
#line 3858
            .ev = TRAINER_PARTY_EVS(0, 0, 144, 0, 0, 0),
#line 3860
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3856
            .ability = ABILITY_ROCK_HEAD,
#line 3857
            .lvl = 20,
#line 3859
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3861
                MOVE_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_ROCK_TOMB,
                MOVE_ROAR,
            },
            },
            {
#line 3866
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3866
            .heldItem = ITEM_GANLON_BERRY,
#line 3869
            .ev = TRAINER_PARTY_EVS(0, 0, 4, 0, 104, 48),
#line 3871
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 3867
            .ability = ABILITY_CLEAR_BODY,
#line 3868
            .lvl = 24,
#line 3870
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3872
                MOVE_METAL_SOUND,
                MOVE_CHARGE_BEAM,
                MOVE_SANDSTORM,
            },
            },
            {
#line 3876
            .species = SPECIES_VAROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3879
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 152, 0),
#line 3881
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3877
            .ability = ABILITY_OVERCOAT,
#line 3878
            .lvl = 25,
#line 3880
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3882
                MOVE_SLUDGE,
                MOVE_GYRO_BALL,
                MOVE_HEADBUTT,
                MOVE_LICK,
            },
            },
        },
    },
#line 3887
    [DIFFICULTY_NORMAL][TRAINER_029E0EF0] =
    {
#line 3888
        .trainerName = _("029E0EF0"),
#line 3889
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3890
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3892
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3891
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3894
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3897
            .ev = TRAINER_PARTY_EVS(0, 96, 16, 0, 0, 32),
#line 3899
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3895
            .ability = ABILITY_POISON_POINT,
#line 3896
            .lvl = 22,
#line 3898
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3900
                MOVE_TOXIC_SPIKES,
                MOVE_DIG,
                MOVE_POISON_STING,
                MOVE_TRAILBLAZE,
            },
            },
            {
#line 3905
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3908
            .ev = TRAINER_PARTY_EVS(24, 0, 0, 0, 120, 0),
#line 3910
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3906
            .ability = ABILITY_CLEAR_BODY,
#line 3907
            .lvl = 25,
#line 3909
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3911
                MOVE_BUBBLE_BEAM,
                MOVE_ACID_SPRAY,
                MOVE_TOXIC,
            },
            },
            {
#line 3915
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3915
            .heldItem = ITEM_SITRUS_BERRY,
#line 3918
            .ev = TRAINER_PARTY_EVS(80, 72, 0, 0, 0, 0),
#line 3920
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3916
            .ability = ABILITY_GLUTTONY,
#line 3917
            .lvl = 23,
#line 3919
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3921
                MOVE_AMNESIA,
                MOVE_ACID_ARMOR,
                MOVE_ENCORE,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
#line 3926
    [DIFFICULTY_NORMAL][TRAINER_00E46F7D] =
    {
#line 3927
        .trainerName = _("00E46F7D"),
#line 3928
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3932
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3929
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3931
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3930
        .mapSec = MAPSEC_ROUTE6,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3934
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3937
            .ev = TRAINER_PARTY_EVS(12, 92, 32, 0, 0, 12),
#line 3939
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3935
            .ability = ABILITY_SHED_SKIN,
#line 3936
            .lvl = 23,
#line 3938
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3940
                MOVE_STOMPING_TANTRUM,
                MOVE_ROCK_SLIDE,
                MOVE_PAYBACK,
            },
            },
            {
#line 3944
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3947
            .ev = TRAINER_PARTY_EVS(0, 36, 0, 112, 0, 0),
#line 3949
            .iv = TRAINER_PARTY_IVS(14, 31, 14, 14, 14, 14),
#line 3945
            .ability = ABILITY_WEAK_ARMOR,
#line 3946
            .lvl = 22,
#line 3948
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3950
                MOVE_AQUA_JET,
                MOVE_ABSORB,
                MOVE_ROCK_TOMB,
                MOVE_PROTECT,
            },
            },
            {
#line 3955
            .species = SPECIES_TYRUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3955
            .heldItem = ITEM_HARD_STONE,
#line 3958
            .ev = TRAINER_PARTY_EVS(0, 72, 80, 0, 0, 0),
#line 3960
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3956
            .ability = ABILITY_STURDY,
#line 3957
            .lvl = 23,
#line 3959
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3961
                MOVE_DRAGON_TAIL,
                MOVE_BITE,
                MOVE_ANCIENT_POWER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 3966
    [DIFFICULTY_NORMAL][TRAINER_032E8AC9] =
    {
#line 3967
        .trainerName = _("032E8AC9"),
#line 3968
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3969
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 3971
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3970
        .mapSec = MAPSEC_MERMEREZA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3973
            .species = SPECIES_SHROODLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3973
            .heldItem = ITEM_BIG_NUGGET,
#line 3976
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 128, 0, 0),
#line 3978
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3974
            .ability = ABILITY_UNBURDEN,
#line 3975
            .lvl = 21,
#line 3977
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3979
                MOVE_FLING,
                MOVE_ACROBATICS,
                MOVE_BATON_PASS,
            },
            },
            {
#line 3983
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3983
            .heldItem = ITEM_ASPEAR_BERRY,
#line 3986
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 136, 0, 0),
#line 3988
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3984
            .ability = ABILITY_FLASH_FIRE,
#line 3985
            .lvl = 25,
#line 3987
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3989
                MOVE_TRICK,
                MOVE_POLTERGEIST,
                MOVE_BITTER_BLADE,
                MOVE_DESTINY_BOND,
            },
            },
        },
    },
#line 3994
    [DIFFICULTY_NORMAL][TRAINER_0389363C] =
    {
#line 3995
        .trainerName = _("0389363C"),
#line 3996
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 3998
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_WEIGH_ABILITY_PREDICTION | AI_FLAG_PREDICT_SWITCH | AI_FLAG_PREDICT_INCOMING_MON | AI_FLAG_PP_STALL_PREVENTION | AI_FLAG_PREDICT_MOVE,
#line 4000
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 3999
        .mapSec = MAPSEC_MERMEREZA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4002
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4002
            .heldItem = ITEM_FIGY_BERRY,
#line 4005
            .ev = TRAINER_PARTY_EVS(0, 132, 0, 0, 0, 0),
#line 4007
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4003
            .ability = ABILITY_GLUTTONY,
#line 4004
            .lvl = 20,
#line 4006
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4008
                MOVE_BELLY_DRUM,
                MOVE_SNORE,
                MOVE_REST,
                MOVE_SLASH,
            },
            },
        },
    },
#line 4013
    [DIFFICULTY_NORMAL][TRAINER_040CEA33] =
    {
#line 4014
        .trainerName = _("040CEA33"),
#line 4015
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4017
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_WEIGH_ABILITY_PREDICTION | AI_FLAG_PREDICT_SWITCH | AI_FLAG_PREDICT_INCOMING_MON | AI_FLAG_PP_STALL_PREVENTION | AI_FLAG_PREDICT_MOVE,
#line 4016
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4018
        .mapSec = MAPSEC_MERMEREZA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4020
            .species = SPECIES_PALPITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4020
            .heldItem = ITEM_RINDO_BERRY,
#line 4023
            .ev = TRAINER_PARTY_EVS(0, 0, 96, 0, 0, 28),
#line 4025
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4021
            .ability = ABILITY_SWIFT_SWIM,
#line 4022
            .lvl = 23,
#line 4024
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4026
                MOVE_RAIN_DANCE,
                MOVE_MUD_SHOT,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 4030
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4030
            .heldItem = ITEM_CHOPLE_BERRY,
#line 4033
            .ev = TRAINER_PARTY_EVS(0, 0, 68, 0, 0, 56),
#line 4035
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4031
            .ability = ABILITY_STENCH,
#line 4032
            .lvl = 20,
#line 4034
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4036
                MOVE_TOXIC_SPIKES,
                MOVE_VENOSHOCK,
                MOVE_BODY_SLAM,
            },
            },
        },
    },
#line 4040
    [DIFFICULTY_NORMAL][TRAINER_031A849F] =
    {
#line 4041
        .trainerName = _("031A849F"),
#line 4042
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4046
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4043
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4045
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4044
        .mapSec = MAPSEC_TORA_TOWN,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4048
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4048
            .heldItem = ITEM_TWISTED_SPOON,
#line 4051
            .ev = TRAINER_PARTY_EVS(0, 64, 0, 0, 64, 0),
#line 4053
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4049
            .ability = ABILITY_PRANKSTER,
#line 4050
            .lvl = 26,
#line 4052
            .nature = NATURE_DOCILE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4054
                MOVE_TAILWIND,
                MOVE_DUAL_WINGBEAT,
                MOVE_HEAT_WAVE,
            },
            },
            {
#line 4058
            .species = SPECIES_INKAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4058
            .heldItem = ITEM_ROSELI_BERRY,
#line 4061
            .ev = TRAINER_PARTY_EVS(0, 64, 0, 0, 64, 0),
#line 4063
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4059
            .ability = ABILITY_CONTRARY,
#line 4060
            .lvl = 26,
#line 4062
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4064
                MOVE_PSYBEAM,
                MOVE_ROCK_SLIDE,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 4068
            .species = SPECIES_LOKIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4068
            .heldItem = ITEM_CHOPLE_BERRY,
#line 4071
            .ev = TRAINER_PARTY_EVS(0, 128, 0, 0, 0, 0),
#line 4073
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4069
            .ability = ABILITY_TINTED_LENS,
#line 4070
            .lvl = 26,
#line 4072
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4074
                MOVE_AERIAL_ACE,
                MOVE_TRAILBLAZE,
            },
            },
        },
    },
#line 4077
    [DIFFICULTY_NORMAL][TRAINER_045FDD44] =
    {
#line 4078
        .trainerName = _("045FDD44"),
#line 4079
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4082
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4080
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4081
        .mapSec = MAPSEC_TORA_TOWN,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4084
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4084
            .heldItem = ITEM_SHUCA_BERRY,
#line 4087
            .ev = TRAINER_PARTY_EVS(0, 0, 84, 0, 0, 40),
#line 4089
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4085
            .ability = ABILITY_EFFECT_SPORE,
#line 4086
            .lvl = 25,
#line 4088
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4090
                MOVE_POISON_POWDER,
                MOVE_STUN_SPORE,
                MOVE_POLLEN_PUFF,
            },
            },
            {
#line 4094
            .species = SPECIES_VAROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4094
            .heldItem = ITEM_PAYAPA_BERRY,
#line 4097
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 4099
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4095
            .ability = ABILITY_OVERCOAT,
#line 4096
            .lvl = 26,
#line 4098
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4100
                MOVE_TOXIC_SPIKES,
                MOVE_TOXIC,
                MOVE_VENOSHOCK,
            },
            },
            {
#line 4104
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4104
            .heldItem = ITEM_SPELL_TAG,
#line 4107
            .ev = TRAINER_PARTY_EVS(0, 60, 52, 0, 0, 20),
#line 4109
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4105
            .ability = ABILITY_SWARM,
#line 4106
            .lvl = 24,
#line 4108
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4110
                MOVE_HEX,
                MOVE_LEECH_LIFE,
            },
            },
        },
    },
#line 4113
    [DIFFICULTY_NORMAL][TRAINER_041FD20E] =
    {
#line 4114
        .trainerName = _("041FD20E"),
#line 4115
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4118
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4116
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4117
        .mapSec = MAPSEC_TORA_TOWN,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4120
            .species = SPECIES_MAREANIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4120
            .heldItem = ITEM_MYSTIC_WATER,
#line 4123
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 136),
#line 4125
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4121
            .ability = ABILITY_LIMBER,
#line 4122
            .lvl = 25,
#line 4124
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4126
                MOVE_LIQUIDATION,
                MOVE_ICE_SPINNER,
            },
            },
            {
#line 4129
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4129
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 4132
            .ev = TRAINER_PARTY_EVS(0, 64, 0, 0, 64, 0),
#line 4134
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4130
            .ability = ABILITY_HUSTLE,
#line 4131
            .lvl = 26,
#line 4133
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4135
                MOVE_ICE_FANG,
                MOVE_DRAGON_BREATH,
            },
            },
        },
    },
#line 4138
    [DIFFICULTY_NORMAL][TRAINER_0465BF77] =
    {
#line 4139
        .trainerName = _("0465BF77"),
#line 4140
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4143
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4141
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4142
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4145
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4145
            .heldItem = ITEM_QUICK_CLAW,
#line 4148
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 132, 0, 0),
#line 4150
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4146
            .ability = ABILITY_LEVITATE,
#line 4147
            .lvl = 26,
#line 4149
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4151
                MOVE_TAUNT,
                MOVE_DESTINY_BOND,
                MOVE_SHADOW_SNEAK,
            },
            },
            {
#line 4155
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4158
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 132, 0, 0),
#line 4160
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4156
            .ability = ABILITY_SPEED_BOOST,
#line 4157
            .lvl = 25,
#line 4159
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4161
                MOVE_DESTINY_BOND,
                MOVE_TAUNT,
                MOVE_ASSURANCE,
                MOVE_PSYCHIC_FANGS,
            },
            },
        },
    },
#line 4166
    [DIFFICULTY_NORMAL][TRAINER_0467DF00] =
    {
#line 4167
        .trainerName = _("0467DF00"),
#line 4168
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4171
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4169
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4170
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4173
            .species = SPECIES_MILTANK,
#line 4173
            .gender = TRAINER_MON_FEMALE,
#line 4173
            .heldItem = ITEM_COVERT_CLOAK,
#line 4176
            .ev = TRAINER_PARTY_EVS(44, 0, 48, 0, 0, 40),
#line 4178
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4174
            .ability = ABILITY_THICK_FAT,
#line 4175
            .lvl = 26,
#line 4177
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4179
                MOVE_SANDSTORM,
                MOVE_ROLLOUT,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4183
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4183
            .heldItem = ITEM_BRIGHT_POWDER,
#line 4186
            .ev = TRAINER_PARTY_EVS(132, 0, 0, 0, 0, 0),
#line 4188
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4184
            .ability = ABILITY_SAND_VEIL,
#line 4185
            .lvl = 23,
#line 4187
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4189
                MOVE_FURY_CUTTER,
                MOVE_TOXIC,
                MOVE_KNOCK_OFF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 4194
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4194
            .heldItem = ITEM_SMOOTH_ROCK,
#line 4197
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 136),
#line 4199
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4195
            .ability = ABILITY_HEALER,
#line 4196
            .lvl = 23,
#line 4198
            .nature = NATURE_GENTLE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4200
                MOVE_SANDSTORM,
                MOVE_HEAL_PULSE,
                MOVE_HYPER_VOICE,
            },
            },
        },
    },
#line 4204
    [DIFFICULTY_NORMAL][TRAINER_04687C53] =
    {
#line 4205
        .trainerName = _("04687C53"),
#line 4206
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4209
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4210
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4208
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4212
            .species = SPECIES_SLIGGOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4212
            .heldItem = ITEM_ORAN_BERRY,
#line 4215
            .ev = TRAINER_PARTY_EVS(0, 0, 136, 0, 0, 0),
#line 4217
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4213
            .ability = ABILITY_GOOEY,
#line 4214
            .lvl = 26,
#line 4216
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4218
                MOVE_ACID_SPRAY,
                MOVE_CHILLING_WATER,
                MOVE_SKITTER_SMACK,
            },
            },
        },
    },
#line 4222
    [DIFFICULTY_NORMAL][TRAINER_048D5D99] =
    {
#line 4223
        .trainerName = _("048D5D99"),
#line 4224
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4227
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4225
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4228
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4226
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4230
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4230
            .heldItem = ITEM_SITRUS_BERRY,
#line 4233
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 132),
#line 4235
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4231
            .ability = ABILITY_STURDY,
#line 4232
            .lvl = 27,
#line 4234
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4236
                MOVE_METAL_BURST,
                MOVE_CURSE,
                MOVE_HARDEN,
            },
            },
            {
#line 4240
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4240
            .heldItem = ITEM_FOCUS_BAND,
#line 4243
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 132),
#line 4245
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4241
            .ability = ABILITY_STURDY,
#line 4242
            .lvl = 24,
#line 4244
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4246
                MOVE_METAL_BURST,
                MOVE_CURSE,
                MOVE_ENDEAVOR,
                MOVE_SANDSTORM,
            },
            },
        },
    },
#line 4251
    [DIFFICULTY_NORMAL][TRAINER_04A59E40] =
    {
#line 4252
        .trainerName = _("04A59E40"),
#line 4253
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4256
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4254
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4257
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4255
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4259
            .species = SPECIES_FLOETTE,
#line 4259
            .gender = TRAINER_MON_FEMALE,
#line 4259
            .heldItem = ITEM_LUM_BERRY,
#line 4262
            .ev = TRAINER_PARTY_EVS(32, 0, 104, 0, 0, 0),
#line 4264
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4260
            .ability = ABILITY_FLOWER_VEIL,
#line 4261
            .lvl = 24,
#line 4263
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4265
                MOVE_WISH,
                MOVE_BATON_PASS,
                MOVE_LIGHT_SCREEN,
                MOVE_MAGICAL_LEAF,
            },
            },
            {
#line 4270
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4270
            .heldItem = ITEM_MYSTIC_WATER,
#line 4273
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 88, 0, 0),
#line 4275
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4271
            .ability = ABILITY_SHELL_ARMOR,
#line 4272
            .lvl = 25,
#line 4274
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4276
                MOVE_BRICK_BREAK,
                MOVE_RAZOR_SHELL,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 4280
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4280
            .heldItem = ITEM_MYSTIC_WATER,
#line 4283
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 136, 0),
#line 4285
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4281
            .ability = ABILITY_REGENERATOR,
#line 4282
            .lvl = 24,
#line 4284
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4286
                MOVE_AVALANCHE,
                MOVE_PSYCHIC_NOISE,
                MOVE_MUDDY_WATER,
            },
            },
        },
    },
#line 4291
    [DIFFICULTY_NORMAL][TRAINER_04E334E9] =
    {
#line 4292
        .trainerName = _("04E334E9"),
#line 4293
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4296
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4294
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4297
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4295
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4299
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4299
            .heldItem = ITEM_ORAN_BERRY,
#line 4302
            .ev = TRAINER_PARTY_EVS(0, 136, 0, 0, 0, 0),
#line 4304
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4300
            .ability = ABILITY_MOODY,
#line 4301
            .lvl = 25,
#line 4303
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4305
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
                MOVE_ICY_WIND,
                MOVE_ROCK_BLAST,
            },
            },
            {
#line 4310
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4310
            .heldItem = ITEM_ORAN_BERRY,
#line 4313
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 136, 0),
#line 4315
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4311
            .ability = ABILITY_MOODY,
#line 4312
            .lvl = 25,
#line 4314
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4316
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
                MOVE_BULLET_SEED,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 4321
            .species = SPECIES_SCOVILLAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4321
            .heldItem = ITEM_ORAN_BERRY,
#line 4324
            .ev = TRAINER_PARTY_EVS(16, 32, 16, 24, 32, 16),
#line 4326
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4322
            .ability = ABILITY_MOODY,
#line 4323
            .lvl = 24,
#line 4325
            .nature = NATURE_QUIRKY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4327
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
                MOVE_MAGICAL_LEAF,
                MOVE_TEMPER_FLARE,
            },
            },
        },
    },
#line 4332
    [DIFFICULTY_NORMAL][TRAINER_05BDEABF] =
    {
#line 4333
        .trainerName = _("05BDEABF"),
#line 4334
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4337
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4335
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4338
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4336
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4340
            .species = SPECIES_CAPSAKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4340
            .heldItem = ITEM_SMOOTH_ROCK,
#line 4343
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4341
            .ability = ABILITY_INSOMNIA,
#line 4342
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4344
                MOVE_SANDSTORM,
                MOVE_LEECH_SEED,
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
            },
            },
            {
#line 4349
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4349
            .heldItem = ITEM_SITRUS_BERRY,
#line 4352
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4350
            .ability = ABILITY_EFFECT_SPORE,
#line 4351
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4353
                MOVE_POISON_POWDER,
                MOVE_POLLEN_PUFF,
                MOVE_PROTECT,
                MOVE_ABSORB,
            },
            },
            {
#line 4358
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4358
            .heldItem = ITEM_LEFTOVERS,
#line 4361
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4359
            .ability = ABILITY_IRON_FIST,
#line 4360
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4362
                MOVE_SANDSTORM,
                MOVE_CURSE,
                MOVE_KNOCK_OFF,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 4367
    [DIFFICULTY_NORMAL][TRAINER_06400A0C] =
    {
#line 4368
        .trainerName = _("06400A0C"),
#line 4369
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4372
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4370
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4373
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4371
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4375
            .species = SPECIES_CHARJABUG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4375
            .heldItem = ITEM_EJECT_BUTTON,
#line 4378
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4376
            .ability = ABILITY_BATTERY,
#line 4377
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4379
                MOVE_STICKY_WEB,
                MOVE_LIGHT_SCREEN,
                MOVE_ELECTROWEB,
                MOVE_BUG_BITE,
            },
            },
            {
#line 4384
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4384
            .heldItem = ITEM_CHERI_BERRY,
#line 4387
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4385
            .ability = ABILITY_FLAME_BODY,
#line 4386
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4388
                MOVE_NIGHT_SHADE,
                MOVE_EMBER,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 4392
            .species = SPECIES_DOUBLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4395
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4393
            .ability = ABILITY_NO_GUARD,
#line 4394
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4396
                MOVE_SHADOW_SNEAK,
                MOVE_SHADOW_CLAW,
                MOVE_BRUTAL_SWING,
            },
            },
        },
    },
#line 4400
    [DIFFICULTY_NORMAL][TRAINER_068B06CE] =
    {
#line 4401
        .trainerName = _("068B06CE"),
#line 4402
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4405
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4403
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4406
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4404
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4408
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4411
            .ev = TRAINER_PARTY_EVS(0, 56, 72, 0, 0, 0),
#line 4413
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4409
            .ability = ABILITY_NEUTRALIZING_GAS,
#line 4410
            .lvl = 23,
#line 4412
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4414
                MOVE_WILL_O_WISP,
                MOVE_SLUDGE,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 4418
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4418
            .heldItem = ITEM_WIDE_LENS,
#line 4421
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 136, 0, 0),
#line 4423
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4419
            .ability = ABILITY_FLASH_FIRE,
#line 4420
            .lvl = 23,
#line 4422
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4424
                MOVE_INFERNO,
                MOVE_BABY_DOLL_EYES,
                MOVE_DIG,
                MOVE_HEX,
            },
            },
            {
#line 4429
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4429
            .heldItem = ITEM_FLAME_ORB,
#line 4432
            .ev = TRAINER_PARTY_EVS(0, 28, 0, 0, 0, 108),
#line 4434
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4430
            .ability = ABILITY_QUICK_FEET,
#line 4431
            .lvl = 24,
#line 4433
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4435
                MOVE_FLING,
                MOVE_FACADE,
                MOVE_PROTECT,
            },
            },
            {
#line 4439
            .species = SPECIES_MAGBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4439
            .heldItem = ITEM_CHARCOAL,
#line 4442
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 48, 0, 0),
#line 4444
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4440
            .ability = ABILITY_FLAME_BODY,
#line 4441
            .lvl = 25,
#line 4443
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4445
                MOVE_WILL_O_WISP,
                MOVE_FLAME_WHEEL,
                MOVE_LOW_KICK,
            },
            },
        },
    },
#line 4450
    [DIFFICULTY_NORMAL][TRAINER_06BE2D1B] =
    {
#line 4451
        .trainerName = _("06BE2D1B"),
#line 4452
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4454
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4453
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4456
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4455
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4458
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4458
            .heldItem = ITEM_SCOPE_LENS,
#line 4461
            .ev = TRAINER_PARTY_EVS(0, 0, 72, 0, 0, 64),
#line 4463
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4459
            .ability = ABILITY_SUPER_LUCK,
#line 4460
            .lvl = 24,
#line 4462
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4464
                MOVE_ANCIENT_POWER,
                MOVE_PLAY_ROUGH,
                MOVE_POUNCE,
                MOVE_FOLLOW_ME,
            },
            },
            {
#line 4469
            .species = SPECIES_CUBCHOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4472
            .ev = TRAINER_PARTY_EVS(0, 92, 44, 0, 0, 0),
#line 4473
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4470
            .ability = ABILITY_RATTLED,
#line 4471
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4474
                MOVE_FROST_BREATH,
                MOVE_DIG,
            },
            },
            {
#line 4477
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4477
            .heldItem = ITEM_SCOPE_LENS,
#line 4480
            .ev = TRAINER_PARTY_EVS(0, 92, 0, 36, 0, 0),
#line 4482
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4478
            .ability = ABILITY_SUPER_LUCK,
#line 4479
            .lvl = 25,
#line 4481
            .nature = NATURE_DOCILE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4483
                MOVE_TAILWIND,
                MOVE_AIR_CUTTER,
                MOVE_SNARL,
            },
            },
            {
#line 4487
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4487
            .heldItem = ITEM_SCOPE_LENS,
#line 4491
            .ev = TRAINER_PARTY_EVS(0, 136, 0, 0, 0, 0),
#line 4493
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4488
            .ability = ABILITY_SNIPER,
#line 4489
            .lvl = 23,
#line 4492
            .nature = NATURE_ADAMANT,
#line 4490
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4494
                MOVE_CROSS_POISON,
                MOVE_NIGHT_SLASH,
            },
            },
        },
    },
#line 4497
    [DIFFICULTY_NORMAL][TRAINER_06C68007] =
    {
#line 4498
        .trainerName = _("06C68007"),
#line 4499
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4501
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4500
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4503
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4502
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4505
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4505
            .heldItem = ITEM_FAIRY_FEATHER,
#line 4508
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 20, 104, 0),
#line 4510
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4506
            .ability = ABILITY_STATIC,
#line 4507
            .lvl = 25,
#line 4509
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4511
                MOVE_DISCHARGE,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 4514
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4514
            .heldItem = ITEM_EXPERT_BELT,
#line 4517
            .ev = TRAINER_PARTY_EVS(0, 96, 0, 0, 0, 32),
#line 4519
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4515
            .ability = ABILITY_OBLIVIOUS,
#line 4516
            .lvl = 25,
#line 4518
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4520
                MOVE_BULLDOZE,
                MOVE_ICY_WIND,
            },
            },
        },
    },
#line 4523
    [DIFFICULTY_NORMAL][TRAINER_06D2BD08] =
    {
#line 4524
        .trainerName = _("06D2BD08"),
#line 4525
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4528
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4526
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4529
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4527
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4531
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4531
            .heldItem = ITEM_MAGO_BERRY,
#line 4534
            .ev = TRAINER_PARTY_EVS(36, 0, 0, 0, 96, 0),
#line 4536
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4532
            .ability = ABILITY_TANGLED_FEET,
#line 4533
            .lvl = 27,
#line 4535
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4537
                MOVE_ICY_WIND,
                MOVE_PSYBEAM,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 4541
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4541
            .heldItem = ITEM_BLUNDER_POLICY,
#line 4544
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4542
            .ability = ABILITY_QUICK_FEET,
#line 4543
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4545
                MOVE_ICY_WIND,
                MOVE_BODY_SLAM,
                MOVE_FURY_SWIPES,
            },
            },
            {
#line 4549
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4552
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4550
            .ability = ABILITY_DOWNLOAD,
#line 4551
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4553
                MOVE_ICY_WIND,
                MOVE_TRI_ATTACK,
            },
            },
        },
    },
#line 4556
    [DIFFICULTY_NORMAL][TRAINER_070F6125] =
    {
#line 4557
        .trainerName = _("070F6125"),
#line 4558
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4561
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4562
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4560
        .mapSec = MAPSEC_ROUTE10,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4564
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4564
            .heldItem = ITEM_SALAC_BERRY,
#line 4567
            .ev = TRAINER_PARTY_EVS(20, 116, 0, 0, 0, 0),
#line 4569
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4565
            .ability = ABILITY_INNER_FOCUS,
#line 4566
            .lvl = 27,
#line 4568
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4569
                MOVE_ENDURE,
                MOVE_REVERSAL,
                MOVE_ACROBATICS,
            },
            },
            {
#line 4573
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4573
            .heldItem = ITEM_BLACK_BELT,
#line 4576
            .ev = TRAINER_PARTY_EVS(0, 116, 0, 0, 0, 12),
#line 4578
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4574
            .ability = ABILITY_UNBURDEN,
#line 4575
            .lvl = 26,
#line 4577
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4578
                MOVE_ENDURE,
                MOVE_REVERSAL,
                MOVE_VACUUM_WAVE,
            },
            },
        },
    },
#line 4582
    [DIFFICULTY_NORMAL][TRAINER_07D063A5] =
    {
#line 4583
        .trainerName = _("07D063A5"),
#line 4584
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4587
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4585
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4588
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4586
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4590
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4593
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4595
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4591
            .ability = ABILITY_INTIMIDATE,
#line 4592
            .lvl = 25,
#line 4594
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4596
                MOVE_HELPING_HAND,
                MOVE_U_TURN,
            },
            },
            {
#line 4599
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4599
            .heldItem = ITEM_SHED_SHELL,
#line 4602
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4604
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4600
            .ability = ABILITY_INTIMIDATE,
#line 4601
            .lvl = 25,
#line 4603
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4605
                MOVE_HELPING_HAND,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 4608
            .species = SPECIES_SQUAWKABILLY_WHITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4608
            .heldItem = ITEM_RED_CARD,
#line 4611
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4613
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4609
            .ability = ABILITY_INTIMIDATE,
#line 4610
            .lvl = 25,
#line 4612
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4614
                MOVE_HELPING_HAND,
                MOVE_HEAT_WAVE,
            },
            },
            {
#line 4617
            .species = SPECIES_SQUAWKABILLY_YELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4617
            .heldItem = ITEM_EJECT_BUTTON,
#line 4620
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4622
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4618
            .ability = ABILITY_INTIMIDATE,
#line 4619
            .lvl = 25,
#line 4621
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4623
                MOVE_HELPING_HAND,
                MOVE_AERIAL_ACE,
            },
            },
        },
    },
#line 4626
    [DIFFICULTY_NORMAL][TRAINER_09AEC824] =
    {
#line 4627
        .trainerName = _("09AEC824"),
#line 4628
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4631
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4630
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4633
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4636
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 124, 0),
#line 4637
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4634
            .ability = ABILITY_INNER_FOCUS,
#line 4635
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4638
                MOVE_THUNDER_WAVE,
                MOVE_NIGHT_SHADE,
                MOVE_CONFUSION,
            },
            },
            {
#line 4642
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4645
            .ev = TRAINER_PARTY_EVS(64, 0, 40, 0, 0, 24),
#line 4647
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4643
            .ability = ABILITY_VOLT_ABSORB,
#line 4644
            .lvl = 22,
#line 4646
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4648
                MOVE_BITE,
                MOVE_NUZZLE,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 4652
            .species = SPECIES_SNIVY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4655
            .ev = TRAINER_PARTY_EVS(0, 120, 0, 0, 0, 16),
#line 4657
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4653
            .ability = ABILITY_OVERGROW,
#line 4654
            .lvl = 24,
#line 4656
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4658
                MOVE_PETAL_BLIZZARD,
                MOVE_GLARE,
                MOVE_BULLET_SEED,
            },
            },
            {
#line 4662
            .species = SPECIES_SHIINOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4665
            .ev = TRAINER_PARTY_EVS(84, 0, 0, 0, 0, 44),
#line 4667
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4663
            .ability = ABILITY_EFFECT_SPORE,
#line 4664
            .lvl = 24,
#line 4666
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4668
                MOVE_STUN_SPORE,
                MOVE_REVIVAL_BLESSING,
                MOVE_DRAINING_KISS,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 4673
    [DIFFICULTY_NORMAL][TRAINER_09B7B6C8] =
    {
#line 4674
        .trainerName = _("09B7B6C8"),
#line 4675
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4678
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4676
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4679
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4677
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4681
            .species = SPECIES_MALAMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4681
            .heldItem = ITEM_SITRUS_BERRY,
#line 4684
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 128, 0, 0),
#line 4686
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4682
            .ability = ABILITY_CONTRARY,
#line 4683
            .lvl = 23,
#line 4685
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4687
                MOVE_SWAGGER,
                MOVE_LIGHT_SCREEN,
                MOVE_ACUPRESSURE,
            },
            },
            {
#line 4691
            .species = SPECIES_DITTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4691
            .heldItem = ITEM_CHOICE_SCARF,
#line 4694
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 0, 72, 0),
#line 4696
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4692
            .ability = ABILITY_IMPOSTER,
#line 4693
            .lvl = 29,
#line 4695
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4698
    [DIFFICULTY_NORMAL][TRAINER_0A542D33] =
    {
#line 4699
        .trainerName = _("0A542D33"),
#line 4700
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4703
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4701
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4702
        .mapSec = MAPSEC_ROUTE9,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4705
            .species = SPECIES_CLEFFA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4705
            .heldItem = ITEM_MENTAL_HERB,
#line 4708
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 128, 0),
#line 4710
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4706
            .ability = ABILITY_CUTE_CHARM,
#line 4707
            .lvl = 25,
#line 4709
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4711
                MOVE_HELPING_HAND,
                MOVE_DAZZLING_GLEAM,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 4715
            .species = SPECIES_CLEFAIRY,
#line 4715
            .gender = TRAINER_MON_MALE,
#line 4715
            .heldItem = ITEM_MENTAL_HERB,
#line 4718
            .ev = TRAINER_PARTY_EVS(0, 0, 64, 0, 0, 64),
#line 4720
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4716
            .ability = ABILITY_CUTE_CHARM,
#line 4717
            .lvl = 25,
#line 4719
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4721
                MOVE_HELPING_HAND,
                MOVE_DAZZLING_GLEAM,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 4725
            .species = SPECIES_CLEFABLE,
#line 4725
            .gender = TRAINER_MON_FEMALE,
#line 4725
            .heldItem = ITEM_MENTAL_HERB,
#line 4728
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 128, 0),
#line 4730
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4726
            .ability = ABILITY_CUTE_CHARM,
#line 4727
            .lvl = 25,
#line 4729
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4731
                MOVE_HELPING_HAND,
                MOVE_DAZZLING_GLEAM,
                MOVE_LIGHT_SCREEN,
            },
            },
        },
    },
#line 4735
    [DIFFICULTY_NORMAL][TRAINER_0A8B9F88] =
    {
#line 4736
        .trainerName = _("0A8B9F88"),
#line 4737
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4739
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4738
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4741
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4740
        .mapSec = MAPSEC_ROUTE2,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4743
            .species = SPECIES_MINIOR_METEOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4743
            .heldItem = ITEM_METRONOME,
#line 4746
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 84, 0, 0),
#line 4748
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4744
            .ability = ABILITY_SHIELDS_DOWN,
#line 4745
            .lvl = 35,
#line 4747
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4749
                MOVE_ROLLOUT,
            },
            },
            {
#line 4751
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4751
            .heldItem = ITEM_EVIOLITE,
#line 4754
            .ev = TRAINER_PARTY_EVS(52, 80, 0, 0, 0, 0),
#line 4756
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4752
            .ability = ABILITY_THICK_FAT,
#line 4753
            .lvl = 36,
#line 4755
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4757
                MOVE_ICE_BALL,
            },
            },
            {
#line 4759
            .species = SPECIES_ANORITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4759
            .heldItem = ITEM_PASSHO_BERRY,
#line 4762
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 80, 0, 0),
#line 4764
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4760
            .ability = ABILITY_BATTLE_ARMOR,
#line 4761
            .lvl = 36,
#line 4763
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4765
                MOVE_FURY_CUTTER,
            },
            },
        },
    },
#line 4767
    [DIFFICULTY_NORMAL][TRAINER_0A8FC005] =
    {
#line 4768
        .trainerName = _("0A8FC005"),
#line 4769
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4771
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4770
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4773
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4772
        .mapSec = MAPSEC_ROUTE4,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4775
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4775
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 4778
            .ev = TRAINER_PARTY_EVS(72, 0, 0, 0, 56, 0),
#line 4780
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4776
            .ability = ABILITY_DRIZZLE,
#line 4777
            .lvl = 35,
#line 4779
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4781
                MOVE_AIR_CUTTER,
                MOVE_ICY_WIND,
                MOVE_CHILLING_WATER,
                MOVE_STOCKPILE,
            },
            },
            {
#line 4786
            .species = SPECIES_TYRUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4786
            .heldItem = ITEM_UTILITY_UMBRELLA,
#line 4789
            .ev = TRAINER_PARTY_EVS(40, 0, 0, 0, 0, 88),
#line 4791
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4787
            .ability = ABILITY_STURDY,
#line 4788
            .lvl = 35,
#line 4790
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4792
                MOVE_ICE_FANG,
                MOVE_THUNDER_FANG,
                MOVE_BITE,
                MOVE_BULLDOZE,
            },
            },
            {
#line 4797
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4797
            .heldItem = ITEM_LEFTOVERS,
#line 4800
            .ev = TRAINER_PARTY_EVS(84, 0, 56, 0, 0, 0),
#line 4802
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4798
            .ability = ABILITY_RAIN_DISH,
#line 4799
            .lvl = 35,
#line 4801
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4803
                MOVE_WHIRLPOOL,
                MOVE_TOXIC,
                MOVE_ACID_ARMOR,
                MOVE_PROTECT,
            },
            },
            {
#line 4808
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4808
            .heldItem = ITEM_SNOWBALL,
#line 4811
            .ev = TRAINER_PARTY_EVS(0, 56, 0, 0, 0, 76),
#line 4813
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4809
            .ability = ABILITY_HYPER_CUTTER,
#line 4810
            .lvl = 35,
#line 4812
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4814
                MOVE_VENOSHOCK,
                MOVE_AERIAL_ACE,
                MOVE_BREAKING_SWIPE,
                MOVE_SAND_TOMB,
            },
            },
        },
    },
#line 4819
    [DIFFICULTY_NORMAL][TRAINER_0AAB38A6] =
    {
#line 4820
        .trainerName = _("0AAB38A6"),
#line 4821
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4823
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4822
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4825
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4824
        .mapSec = MAPSEC_ROUTE4,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4827
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4827
            .heldItem = ITEM_EVIOLITE,
#line 4830
            .ev = TRAINER_PARTY_EVS(60, 0, 0, 0, 72, 0),
#line 4832
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4828
            .ability = ABILITY_LEVITATE,
#line 4829
            .lvl = 35,
#line 4831
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4833
                MOVE_EXTRASENSORY,
                MOVE_SCORCHING_SANDS,
                MOVE_HEX,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 4838
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4838
            .heldItem = ITEM_AIR_BALLOON,
#line 4841
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 0, 0, 88),
#line 4843
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4839
            .ability = ABILITY_ANGER_SHELL,
#line 4840
            .lvl = 35,
#line 4842
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4844
                MOVE_BULLDOZE,
                MOVE_VISE_GRIP,
                MOVE_METAL_CLAW,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 4849
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4849
            .heldItem = ITEM_ASSAULT_VEST,
#line 4852
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 44, 84),
#line 4854
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4850
            .ability = ABILITY_LEVITATE,
#line 4851
            .lvl = 36,
#line 4853
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4855
                MOVE_SLUDGE_BOMB,
                MOVE_BODY_SLAM,
                MOVE_VENOSHOCK,
                MOVE_GYRO_BALL,
            },
            },
        },
    },
#line 4860
    [DIFFICULTY_NORMAL][TRAINER_0AF40D0B] =
    {
#line 4861
        .trainerName = _("0AF40D0B"),
#line 4862
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4864
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4863
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4866
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4865
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4868
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4868
            .heldItem = ITEM_CHOICE_SCARF,
#line 4871
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 4873
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4869
            .ability = ABILITY_SWIFT_SWIM,
#line 4870
            .lvl = 36,
#line 4872
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4874
                MOVE_SURF,
            },
            },
            {
#line 4876
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4876
            .heldItem = ITEM_CHOPLE_BERRY,
#line 4879
            .ev = TRAINER_PARTY_EVS(52, 0, 76, 0, 0, 0),
#line 4881
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4877
            .ability = ABILITY_STORM_DRAIN,
#line 4878
            .lvl = 36,
#line 4880
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4882
                MOVE_EARTH_POWER,
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_RECOVER,
            },
            },
        },
    },
#line 4887
    [DIFFICULTY_NORMAL][TRAINER_0B48C7D0] =
    {
#line 4888
        .trainerName = _("0B48C7D0"),
#line 4889
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4891
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4890
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4892
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4893
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4895
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4895
            .heldItem = ITEM_DRAGON_FANG,
#line 4898
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 132, 0, 0),
#line 4900
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4896
            .ability = ABILITY_PRESSURE,
#line 4897
            .lvl = 33,
#line 4899
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4901
                MOVE_ICE_FANG,
                MOVE_BITE,
                MOVE_DRAGON_BREATH,
                MOVE_ROCK_BLAST,
            },
            },
            {
#line 4906
            .species = SPECIES_SILICOBRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4906
            .heldItem = ITEM_SMOOTH_ROCK,
#line 4909
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 4911
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4907
            .ability = ABILITY_SAND_SPIT,
#line 4908
            .lvl = 34,
#line 4910
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4912
                MOVE_SAND_TOMB,
                MOVE_WRAP,
                MOVE_GLARE,
            },
            },
            {
#line 4916
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4916
            .heldItem = ITEM_WIDE_LENS,
#line 4919
            .ev = TRAINER_PARTY_EVS(36, 0, 88, 0, 0, 0),
#line 4921
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4917
            .ability = ABILITY_PRESSURE,
#line 4918
            .lvl = 35,
#line 4920
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4922
                MOVE_DREAM_EATER,
                MOVE_NIGHT_SHADE,
                MOVE_HYPNOSIS,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 4927
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4927
            .heldItem = ITEM_HARD_STONE,
#line 4930
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 4932
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4928
            .ability = ABILITY_SAND_VEIL,
#line 4929
            .lvl = 34,
#line 4931
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4933
                MOVE_FIRE_FANG,
                MOVE_ICE_FANG,
                MOVE_THUNDER_FANG,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 4938
    [DIFFICULTY_NORMAL][TRAINER_0C0A9B2F] =
    {
#line 4939
        .trainerName = _("0C0A9B2F"),
#line 4940
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4942
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4941
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4944
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4943
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4946
            .species = SPECIES_TIRTOUGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4946
            .heldItem = ITEM_RINDO_BERRY,
#line 4949
            .ev = TRAINER_PARTY_EVS(0, 32, 0, 0, 0, 96),
#line 4951
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4947
            .ability = ABILITY_SOLID_ROCK,
#line 4948
            .lvl = 36,
#line 4950
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4952
                MOVE_ZEN_HEADBUTT,
                MOVE_ANCIENT_POWER,
                MOVE_AQUA_JET,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 4957
            .species = SPECIES_SHIELDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4957
            .heldItem = ITEM_RED_CARD,
#line 4960
            .ev = TRAINER_PARTY_EVS(48, 80, 0, 0, 0, 0),
#line 4962
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4958
            .ability = ABILITY_STURDY,
#line 4959
            .lvl = 35,
#line 4961
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4963
                MOVE_IRON_HEAD,
                MOVE_POWER_GEM,
                MOVE_METAL_BURST,
                MOVE_ROAR,
            },
            },
            {
#line 4968
            .species = SPECIES_KLEAVOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4968
            .heldItem = ITEM_KINGS_ROCK,
#line 4971
            .ev = TRAINER_PARTY_EVS(20, 0, 0, 0, 0, 108),
#line 4973
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4969
            .ability = ABILITY_SWARM,
#line 4970
            .lvl = 36,
#line 4972
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4974
                MOVE_WING_ATTACK,
                MOVE_POUNCE,
                MOVE_SMACK_DOWN,
                MOVE_DOUBLE_HIT,
            },
            },
        },
    },
#line 4979
    [DIFFICULTY_NORMAL][TRAINER_0C543C80] =
    {
#line 4980
        .trainerName = _("0C543C80"),
#line 4981
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 4983
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4982
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 4985
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 4984
        .mapSec = MAPSEC_ROUTE2,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4987
            .species = SPECIES_SIGILYPH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4987
            .heldItem = ITEM_FLAME_ORB,
#line 4990
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 80, 0, 0),
#line 4992
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4988
            .ability = ABILITY_MAGIC_GUARD,
#line 4989
            .lvl = 34,
#line 4991
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4993
                MOVE_AIR_CUTTER,
                MOVE_CONFUSION,
                MOVE_PSYCHO_SHIFT,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 4998
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4998
            .heldItem = ITEM_EJECT_BUTTON,
#line 5001
            .ev = TRAINER_PARTY_EVS(44, 0, 80, 0, 0, 0),
#line 5003
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4999
            .ability = ABILITY_FRIEND_GUARD,
#line 5000
            .lvl = 37,
#line 5002
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5004
                MOVE_FOLLOW_ME,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 5007
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5007
            .heldItem = ITEM_FOCUS_SASH,
#line 5010
            .ev = TRAINER_PARTY_EVS(0, 128, 0, 0, 0, 0),
#line 5012
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5008
            .ability = ABILITY_ARENA_TRAP,
#line 5009
            .lvl = 33,
#line 5011
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5013
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
                MOVE_BITE,
                MOVE_BUG_BITE,
            },
            },
            {
#line 5018
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5018
            .heldItem = ITEM_SITRUS_BERRY,
#line 5021
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 124),
#line 5023
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5019
            .ability = ABILITY_MUMMY,
#line 5020
            .lvl = 35,
#line 5022
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5024
                MOVE_HEX,
                MOVE_WILL_O_WISP,
                MOVE_MEAN_LOOK,
                MOVE_CURSE,
            },
            },
        },
    },
#line 5029
    [DIFFICULTY_NORMAL][TRAINER_0C95C833] =
    {
#line 5030
        .trainerName = _("0C95C833"),
#line 5031
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5033
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5032
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5034
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5035
        .mapSec = MAPSEC_PERLACIA_CITY,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5037
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5037
            .heldItem = ITEM_CHOICE_SCARF,
#line 5040
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 124, 0, 0),
#line 5042
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5038
            .ability = ABILITY_ROUGH_SKIN,
#line 5039
            .lvl = 36,
#line 5041
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5043
                MOVE_FLIP_TURN,
            },
            },
            {
#line 5045
            .species = SPECIES_ARCTOZOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5045
            .heldItem = ITEM_SALAC_BERRY,
#line 5048
            .ev = TRAINER_PARTY_EVS(24, 0, 0, 100, 0, 0),
#line 5050
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5046
            .ability = ABILITY_VOLT_ABSORB,
#line 5047
            .lvl = 35,
#line 5049
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5051
                MOVE_ROCK_TOMB,
                MOVE_ICY_WIND,
                MOVE_ELECTRO_BALL,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 5056
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5056
            .heldItem = ITEM_SOFT_SAND,
#line 5059
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 128),
#line 5061
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5057
            .ability = ABILITY_SHELL_ARMOR,
#line 5058
            .lvl = 35,
#line 5060
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5062
                MOVE_BODY_SLAM,
                MOVE_FLAME_WHEEL,
                MOVE_BULLDOZE,
                MOVE_YAWN,
            },
            },
        },
    },
#line 5067
    [DIFFICULTY_NORMAL][TRAINER_0D416B2C] =
    {
#line 5068
        .trainerName = _("0D416B2C"),
#line 5069
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5071
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5070
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5072
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5073
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5075
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5075
            .heldItem = ITEM_EVIOLITE,
#line 5078
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 80, 60, 0),
#line 5080
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5076
            .ability = ABILITY_WIND_POWER,
#line 5077
            .lvl = 43,
#line 5079
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5080
                MOVE_DISCHARGE,
                MOVE_U_TURN,
                MOVE_TAILWIND,
            },
            },
            {
#line 5084
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5084
            .heldItem = ITEM_CELL_BATTERY,
#line 5087
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 60, 0, 0),
#line 5089
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5085
            .ability = ABILITY_LIMBER,
#line 5086
            .lvl = 43,
#line 5088
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5089
                MOVE_BLAZE_KICK,
                MOVE_SUCKER_PUNCH,
                MOVE_LOW_SWEEP,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 5094
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5094
            .heldItem = ITEM_TOXIC_ORB,
#line 5097
            .ev = TRAINER_PARTY_EVS(60, 0, 0, 0, 0, 80),
#line 5099
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5095
            .ability = ABILITY_MARVEL_SCALE,
#line 5096
            .lvl = 42,
#line 5098
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5099
                MOVE_BODY_SLAM,
                MOVE_WATER_PULSE,
                MOVE_BREAKING_SWIPE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 5104
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5104
            .heldItem = ITEM_IAPAPA_BERRY,
#line 5107
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 0, 0, 60),
#line 5109
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5105
            .ability = ABILITY_STURDY,
#line 5106
            .lvl = 43,
#line 5108
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5109
                MOVE_STOMPING_TANTRUM,
                MOVE_KNOCK_OFF,
                MOVE_FIRE_FANG,
                MOVE_COUNTER,
            },
            },
        },
    },
#line 5114
    [DIFFICULTY_NORMAL][TRAINER_0D4BA0F1] =
    {
#line 5115
        .trainerName = _("0D4BA0F1"),
#line 5116
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5118
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5117
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5119
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5120
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5122
            .species = SPECIES_BARRASKEWDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5122
            .heldItem = ITEM_ROCKY_HELMET,
#line 5125
            .ev = TRAINER_PARTY_EVS(0, 0, 40, 0, 0, 100),
#line 5127
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5123
            .ability = ABILITY_PROPELLER_TAIL,
#line 5124
            .lvl = 43,
#line 5126
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5127
                MOVE_DIVE,
                MOVE_DRILL_RUN,
                MOVE_BITE,
                MOVE_AQUA_JET,
            },
            },
            {
#line 5132
            .species = SPECIES_CRAMORANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5132
            .heldItem = ITEM_MYSTIC_WATER,
#line 5135
            .ev = TRAINER_PARTY_EVS(0, 0, 40, 100, 0, 0),
#line 5137
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5133
            .ability = ABILITY_GULP_MISSILE,
#line 5134
            .lvl = 44,
#line 5136
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5137
                MOVE_SURF,
                MOVE_DIVE,
                MOVE_DRILL_PECK,
                MOVE_STOCKPILE,
            },
            },
            {
#line 5142
            .species = SPECIES_PAWMOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5142
            .heldItem = ITEM_PUNCHING_GLOVE,
#line 5145
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 100, 0, 40),
#line 5147
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5143
            .ability = ABILITY_VOLT_ABSORB,
#line 5144
            .lvl = 44,
#line 5146
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5147
                MOVE_THUNDER_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_BRICK_BREAK,
                MOVE_UPPER_HAND,
            },
            },
        },
    },
#line 5152
    [DIFFICULTY_NORMAL][TRAINER_0DA021EF] =
    {
#line 5153
        .trainerName = _("Billy"),
#line 5154
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
0,
#line 5156
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5155
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5157
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5158
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_BIRD_KEEPER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5160
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5160
            .heldItem = ITEM_WACAN_BERRY,
#line 5163
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5165
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5161
            .ability = ABILITY_INTIMIDATE,
#line 5162
            .lvl = 43,
#line 5164
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5165
                MOVE_TAKE_DOWN,
                MOVE_FLY,
                MOVE_U_TURN,
                MOVE_PARTING_SHOT,
            },
            },
            {
#line 5170
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5170
            .heldItem = ITEM_FLAME_ORB,
#line 5173
            .ev = TRAINER_PARTY_EVS(60, 0, 0, 80, 0, 0),
#line 5175
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5171
            .ability = ABILITY_GUTS,
#line 5172
            .lvl = 44,
#line 5174
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5175
                MOVE_FACADE,
                MOVE_LASH_OUT,
                MOVE_DUAL_WINGBEAT,
                MOVE_TORMENT,
            },
            },
            {
#line 5180
            .species = SPECIES_SQUAWKABILLY_YELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5180
            .heldItem = ITEM_WIDE_LENS,
#line 5183
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 80, 0, 0),
#line 5185
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5181
            .ability = ABILITY_HUSTLE,
#line 5182
            .lvl = 43,
#line 5184
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5185
                MOVE_FOUL_PLAY,
                MOVE_AERIAL_ACE,
                MOVE_QUICK_ATTACK,
                MOVE_ROOST,
            },
            },
            {
#line 5190
            .species = SPECIES_SQUAWKABILLY_WHITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5190
            .heldItem = ITEM_LIFE_ORB,
#line 5193
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 80, 60, 0),
#line 5195
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5191
            .ability = ABILITY_SHEER_FORCE,
#line 5192
            .lvl = 44,
#line 5194
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5195
                MOVE_HURRICANE,
                MOVE_HEAT_WAVE,
                MOVE_POUNCE,
                MOVE_MIMIC,
            },
            },
        },
    },
#line 5200
    [DIFFICULTY_NORMAL][TRAINER_0E19F1A8] =
    {
#line 5201
        .trainerName = _("0E19F1A8"),
#line 5202
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5204
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5203
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5205
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5206
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5208
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5208
            .heldItem = ITEM_ADRENALINE_ORB,
#line 5211
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 60, 0, 0),
#line 5213
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5209
            .ability = ABILITY_KEEN_EYE,
#line 5210
            .lvl = 44,
#line 5212
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5213
                MOVE_DRAIN_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_BULLET_PUNCH,
            },
            },
            {
#line 5218
            .species = SPECIES_FLETCHINDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5218
            .heldItem = ITEM_FOCUS_SASH,
#line 5221
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 80, 0, 0),
#line 5223
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5219
            .ability = ABILITY_GALE_WINGS,
#line 5220
            .lvl = 45,
#line 5222
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5223
                MOVE_FLY,
                MOVE_STEEL_WING,
                MOVE_FIRE_SPIN,
                MOVE_TAILWIND,
            },
            },
            {
#line 5228
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5228
            .heldItem = ITEM_POWER_HERB,
#line 5231
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5233
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5229
            .ability = ABILITY_WIND_RIDER,
#line 5230
            .lvl = 44,
#line 5232
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5233
                MOVE_SOLAR_BLADE,
                MOVE_THIEF,
                MOVE_AERIAL_ACE,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 5238
            .species = SPECIES_NOIVERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5238
            .heldItem = ITEM_YACHE_BERRY,
#line 5241
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5243
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5239
            .ability = ABILITY_INFILTRATOR,
#line 5240
            .lvl = 44,
#line 5242
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5243
                MOVE_DRAGON_PULSE,
                MOVE_PSYCHIC_NOISE,
                MOVE_AIR_CUTTER,
                MOVE_TAILWIND,
            },
            },
        },
    },
#line 5248
    [DIFFICULTY_NORMAL][TRAINER_0E42221A] =
    {
#line 5249
        .trainerName = _("0E42221A"),
#line 5250
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5252
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5251
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5253
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5254
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5256
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5256
            .heldItem = ITEM_WEAKNESS_POLICY,
#line 5259
            .ev = TRAINER_PARTY_EVS(0, 0, 140, 0, 0, 0),
#line 5261
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5257
            .ability = ABILITY_TECHNICIAN,
#line 5258
            .lvl = 46,
#line 5260
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5261
                MOVE_BUG_BITE,
                MOVE_TRAILBLAZE,
                MOVE_DUAL_WINGBEAT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 5266
            .species = SPECIES_SWOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5266
            .heldItem = ITEM_MARANGA_BERRY,
#line 5269
            .ev = TRAINER_PARTY_EVS(0, 0, 60, 0, 0, 80),
#line 5271
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5267
            .ability = ABILITY_SIMPLE,
#line 5268
            .lvl = 44,
#line 5270
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5271
                MOVE_STORED_POWER,
                MOVE_CALM_MIND,
            },
            },
            {
#line 5274
            .species = SPECIES_GREEDENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5274
            .heldItem = ITEM_GANLON_BERRY,
#line 5277
            .ev = TRAINER_PARTY_EVS(0, 80, 60, 0, 0, 0),
#line 5278
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5275
            .ability = ABILITY_CHEEK_POUCH,
#line 5276
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5278
                MOVE_BODY_PRESS,
                MOVE_BODY_SLAM,
                MOVE_SEED_BOMB,
                MOVE_STUFF_CHEEKS,
            },
            },
        },
    },
#line 5283
    [DIFFICULTY_NORMAL][TRAINER_0ED24EF1] =
    {
#line 5284
        .trainerName = _("0ED24EF1"),
#line 5285
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5287
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5286
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5288
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5289
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5291
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5291
            .heldItem = ITEM_YACHE_BERRY,
#line 5294
            .ev = TRAINER_PARTY_EVS(0, 60, 0, 80, 0, 0),
#line 5296
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5292
            .ability = ABILITY_HYPER_CUTTER,
#line 5293
            .lvl = 45,
#line 5295
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5296
                MOVE_ROCK_SLIDE,
                MOVE_BULLDOZE,
                MOVE_FIRE_FANG,
                MOVE_TOXIC_SPIKES,
            },
            },
            {
#line 5301
            .species = SPECIES_SHUCKLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5301
            .heldItem = ITEM_LEFTOVERS,
#line 5304
            .ev = TRAINER_PARTY_EVS(0, 0, 80, 0, 0, 60),
#line 5306
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5302
            .ability = ABILITY_STURDY,
#line 5303
            .lvl = 46,
#line 5305
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5306
                MOVE_KNOCK_OFF,
                MOVE_INFESTATION,
                MOVE_WRAP,
                MOVE_PROTECT,
            },
            },
            {
#line 5311
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5311
            .heldItem = ITEM_ASSAULT_VEST,
#line 5314
            .ev = TRAINER_PARTY_EVS(0, 0, 60, 0, 0, 80),
#line 5316
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5312
            .ability = ABILITY_SHEER_FORCE,
#line 5313
            .lvl = 45,
#line 5315
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5316
                MOVE_LIQUIDATION,
                MOVE_NIGHT_SLASH,
                MOVE_METAL_CLAW,
                MOVE_HAMMER_ARM,
            },
            },
        },
    },
#line 5321
    [DIFFICULTY_NORMAL][TRAINER_0F03CF8D] =
    {
#line 5322
        .trainerName = _("0F03CF8D"),
#line 5323
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5325
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5324
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5327
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5326
        .mapSec = MAPSEC_ARANTRAZ,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5329
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5329
            .heldItem = ITEM_SCOPE_LENS,
#line 5332
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 0, 60, 0),
#line 5334
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5330
            .ability = ABILITY_KEEN_EYE,
#line 5331
            .lvl = 46,
#line 5333
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5335
                MOVE_DUAL_WINGBEAT,
                MOVE_STEEL_WING,
                MOVE_TAILWIND,
                MOVE_UPROAR,
            },
            },
            {
#line 5340
            .species = SPECIES_BOMBIRDIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5340
            .heldItem = ITEM_CHARTI_BERRY,
#line 5343
            .ev = TRAINER_PARTY_EVS(0, 80, 0, 0, 0, 60),
#line 5345
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5341
            .ability = ABILITY_ROCKY_PAYLOAD,
#line 5342
            .lvl = 45,
#line 5344
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5345
                MOVE_FOUL_PLAY,
                MOVE_ROCK_SLIDE,
                MOVE_ACROBATICS,
                MOVE_FEATHER_DANCE,
            },
            },
            {
#line 5350
            .species = SPECIES_ORICORIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5350
            .heldItem = ITEM_ABSORB_BULB,
#line 5353
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 60, 80),
#line 5355
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5351
            .ability = ABILITY_DANCER,
#line 5352
            .lvl = 45,
#line 5354
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5355
                MOVE_REVELATION_DANCE,
                MOVE_ACROBATICS,
                MOVE_SWORDS_DANCE,
                MOVE_TAILWIND,
            },
            },
            {
#line 5360
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5360
            .heldItem = ITEM_WIDE_LENS,
#line 5363
            .ev = TRAINER_PARTY_EVS(0, 0, 100, 40, 0, 0),
#line 5365
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5361
            .ability = ABILITY_KEEN_EYE,
#line 5362
            .lvl = 45,
#line 5364
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5365
                MOVE_DREAM_EATER,
                MOVE_AIR_SLASH,
                MOVE_PSYBEAM,
                MOVE_HYPNOSIS,
            },
            },
        },
    },
#line 5370
    [DIFFICULTY_NORMAL][TRAINER_0F3D8011] =
    {
#line 5371
        .trainerName = _("0F3D8011"),
#line 5372
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5374
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5373
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5375
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5376
        .mapSec = MAPSEC_ROUTE11,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 5378
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5378
            .heldItem = ITEM_EVIOLITE,
#line 5381
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5382
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5379
            .ability = ABILITY_FRIEND_GUARD,
#line 5380
            .lvl = 54,
#line 5383
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5384
                MOVE_FOLLOW_ME,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_NIGHT_SHADE,
            },
            },
            {
#line 5389
            .species = SPECIES_GREEDENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5389
            .heldItem = ITEM_SITRUS_BERRY,
#line 5392
            .ev = TRAINER_PARTY_EVS(252, 48, 0, 0, 0, 0),
#line 5393
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5390
            .ability = ABILITY_CHEEK_POUCH,
#line 5391
            .lvl = 51,
#line 5394
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5395
                MOVE_BODY_PRESS,
                MOVE_BODY_SLAM,
                MOVE_COUNTER,
                MOVE_CRUNCH,
            },
            },
            {
#line 5400
            .species = SPECIES_ARBOLIVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5400
            .heldItem = ITEM_SITRUS_BERRY,
#line 5403
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 0, 252, 0),
#line 5404
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5401
            .ability = ABILITY_HARVEST,
#line 5402
            .lvl = 49,
#line 5405
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5406
                MOVE_GIGA_DRAIN,
                MOVE_EARTH_POWER,
                MOVE_LEECH_SEED,
                MOVE_SYNTHESIS,
            },
            },
            {
#line 5411
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5411
            .heldItem = ITEM_SITRUS_BERRY,
#line 5414
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 48, 0, 0),
#line 5415
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5412
            .ability = ABILITY_PICKUP,
#line 5413
            .lvl = 52,
#line 5416
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5417
                MOVE_WILD_CHARGE,
                MOVE_PLAY_ROUGH,
                MOVE_SEED_BOMB,
                MOVE_FOLLOW_ME,
            },
            },
            {
#line 5422
            .species = SPECIES_POLTEAGEIST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5422
            .heldItem = ITEM_STARF_BERRY,
#line 5425
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 148, 152, 0),
#line 5427
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5423
            .ability = ABILITY_WEAK_ARMOR,
#line 5424
            .lvl = 49,
#line 5426
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5428
                MOVE_TEATIME,
                MOVE_GIGA_DRAIN,
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
            },
            },
        },
    },
#line 5433
    [DIFFICULTY_NORMAL][TRAINER_0F3DB5D8] =
    {
#line 5434
        .trainerName = _("0F3DB5D8"),
#line 5435
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5437
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5436
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5439
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5438
        .mapSec = MAPSEC_ROUTE11,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5441
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5441
            .heldItem = ITEM_BLACK_SLUDGE,
#line 5444
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 252, 0, 0),
#line 5446
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5442
            .ability = ABILITY_CLEAR_BODY,
#line 5443
            .lvl = 50,
#line 5445
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5447
                MOVE_TOXIC_SPIKES,
                MOVE_VENOSHOCK,
                MOVE_HEX,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 5452
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5452
            .heldItem = ITEM_SPELL_TAG,
#line 5455
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 48, 0),
#line 5456
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5453
            .ability = ABILITY_LEVITATE,
#line 5454
            .lvl = 51,
#line 5457
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5458
                MOVE_HEX,
                MOVE_DAZZLING_GLEAM,
                MOVE_MEAN_LOOK,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 5463
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5463
            .heldItem = ITEM_FOCUS_SASH,
#line 5466
            .ev = TRAINER_PARTY_EVS(48, 252, 0, 0, 0, 0),
#line 5467
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5464
            .ability = ABILITY_SNIPER,
#line 5465
            .lvl = 52,
#line 5468
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5469
                MOVE_VENOSHOCK,
                MOVE_TOXIC_THREAD,
                MOVE_FELL_STINGER,
                MOVE_SUCKER_PUNCH,
            },
            },
        },
    },
#line 5474
    [DIFFICULTY_NORMAL][TRAINER_0F5F82C3] =
    {
#line 5475
        .trainerName = _("0F5F82C3"),
#line 5476
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5478
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5477
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5480
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5479
        .mapSec = MAPSEC_ROUTE11,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5482
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5482
            .heldItem = ITEM_PAYAPA_BERRY,
#line 5485
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 48, 0, 0),
#line 5486
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5483
            .ability = ABILITY_POISON_TOUCH,
#line 5484
            .lvl = 51,
#line 5487
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5488
                MOVE_FAKE_OUT,
                MOVE_SUCKER_PUNCH,
                MOVE_POISON_JAB,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 5493
    [DIFFICULTY_NORMAL][TRAINER_0FFBCCB9] =
    {
#line 5494
        .trainerName = _("0FFBCCB9"),
#line 5495
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5497
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5496
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5499
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5498
        .mapSec = MAPSEC_ROUTE11,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5501
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5501
            .heldItem = ITEM_WEAKNESS_POLICY,
#line 5504
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5505
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5502
            .ability = ABILITY_PRESSURE,
#line 5503
            .lvl = 50,
#line 5506
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5507
                MOVE_FUTURE_SIGHT,
                MOVE_SHADOW_SNEAK,
                MOVE_LEECH_LIFE,
                MOVE_PAIN_SPLIT,
            },
            },
            {
#line 5512
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5512
            .heldItem = ITEM_EXPERT_BELT,
#line 5515
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5516
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5513
            .ability = ABILITY_JUSTIFIED,
#line 5514
            .lvl = 50,
#line 5517
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5518
                MOVE_FUTURE_SIGHT,
                MOVE_DRAIN_PUNCH,
                MOVE_PSYCHO_CUT,
                MOVE_X_SCISSOR,
            },
            },
            {
#line 5523
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5523
            .heldItem = ITEM_FAIRY_FEATHER,
#line 5526
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 48, 0),
#line 5528
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5524
            .ability = ABILITY_TRACE,
#line 5525
            .lvl = 50,
#line 5527
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5529
                MOVE_FUTURE_SIGHT,
                MOVE_DRAINING_KISS,
                MOVE_PSYCHIC,
                MOVE_MYSTICAL_FIRE,
            },
            },
            {
#line 5534
            .species = SPECIES_ORBEETLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5534
            .heldItem = ITEM_LEFTOVERS,
#line 5537
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 48, 252, 0),
#line 5539
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5535
            .ability = ABILITY_SWARM,
#line 5536
            .lvl = 51,
#line 5538
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5540
                MOVE_FUTURE_SIGHT,
                MOVE_BUG_BUZZ,
                MOVE_INFESTATION,
                MOVE_SUBSTITUTE,
            },
            },
        },
    },
#line 5545
    [DIFFICULTY_NORMAL][TRAINER_1075163A] =
    {
#line 5546
        .trainerName = _("1075163A"),
#line 5547
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5551
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5548
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5550
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5549
        .mapSec = MAPSEC_FORT_YOBU,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5553
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5553
            .heldItem = ITEM_ROSELI_BERRY,
#line 5556
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 48, 0),
#line 5557
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5554
            .ability = ABILITY_LEVITATE,
#line 5555
            .lvl = 43,
#line 5558
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5559
                MOVE_BELCH,
                MOVE_ACROBATICS,
                MOVE_DRAGON_BREATH,
                MOVE_TAILWIND,
            },
            },
            {
#line 5564
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5564
            .heldItem = ITEM_SALAC_BERRY,
#line 5567
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 48, 0, 0),
#line 5568
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5565
            .ability = ABILITY_STURDY,
#line 5566
            .lvl = 46,
#line 5569
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5570
                MOVE_FLAIL,
                MOVE_ROCK_TOMB,
                MOVE_WATERFALL,
                MOVE_SCALE_SHOT,
            },
            },
            {
#line 5575
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5575
            .heldItem = ITEM_IAPAPA_BERRY,
#line 5578
            .ev = TRAINER_PARTY_EVS(52, 248, 0, 0, 0, 0),
#line 5580
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5576
            .ability = ABILITY_GLUTTONY,
#line 5577
            .lvl = 46,
#line 5579
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5581
                MOVE_BELLY_DRUM,
                MOVE_EXTREME_SPEED,
                MOVE_THROAT_CHOP,
                MOVE_THUNDER_WAVE,
            },
            },
        },
    },
#line 5586
    [DIFFICULTY_NORMAL][TRAINER_10751EAA] =
    {
#line 5587
        .trainerName = _("10751EAA"),
#line 5588
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5592
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5589
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5591
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5590
        .mapSec = MAPSEC_FORT_YOBU,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 5594
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5594
            .heldItem = ITEM_PAYAPA_BERRY,
#line 5597
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 48),
#line 5599
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5595
            .ability = ABILITY_LEVITATE,
#line 5596
            .lvl = 46,
#line 5598
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5600
                MOVE_TOXIC_SPIKES,
                MOVE_SLUDGE_BOMB,
                MOVE_HEAT_WAVE,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 5605
            .species = SPECIES_PANGORO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5605
            .heldItem = ITEM_SITRUS_BERRY,
#line 5608
            .ev = TRAINER_PARTY_EVS(48, 252, 0, 0, 0, 0),
#line 5610
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5606
            .ability = ABILITY_SCRAPPY,
#line 5607
            .lvl = 43,
#line 5609
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5611
                MOVE_SUBSTITUTE,
                MOVE_CIRCLE_THROW,
                MOVE_DARKEST_LARIAT,
                MOVE_GUNK_SHOT,
            },
            },
            {
#line 5616
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5616
            .heldItem = ITEM_ASSAULT_VEST,
#line 5619
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 48, 252, 0),
#line 5620
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5617
            .ability = ABILITY_FLAME_BODY,
#line 5618
            .lvl = 45,
#line 5621
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5622
                MOVE_LAVA_PLUME,
                MOVE_SCORCHING_SANDS,
                MOVE_THUNDERBOLT,
                MOVE_FIRE_SPIN,
            },
            },
            {
#line 5627
            .species = SPECIES_CRAMORANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5627
            .heldItem = ITEM_FOCUS_SASH,
#line 5630
            .ev = TRAINER_PARTY_EVS(48, 0, 0, 0, 252, 0),
#line 5632
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5628
            .ability = ABILITY_GULP_MISSILE,
#line 5629
            .lvl = 46,
#line 5631
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5633
                MOVE_AGILITY,
                MOVE_SURF,
                MOVE_ENDEAVOR,
                MOVE_WHIRLPOOL,
            },
            },
            {
#line 5638
            .species = SPECIES_SKUNTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5638
            .heldItem = ITEM_AIR_BALLOON,
#line 5641
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 48, 252, 0),
#line 5643
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5639
            .ability = ABILITY_AFTERMATH,
#line 5640
            .lvl = 44,
#line 5642
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5644
                MOVE_HEX,
                MOVE_VENOSHOCK,
                MOVE_NASTY_PLOT,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 5649
    [DIFFICULTY_NORMAL][TRAINER_10E3552B] =
    {
#line 5650
        .trainerName = _("10E3552B"),
#line 5651
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5653
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5652
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5654
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5655
        .mapSec = MAPSEC_FORT_YOBU,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5657
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5657
            .heldItem = ITEM_FOCUS_SASH,
#line 5660
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5661
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5658
            .ability = ABILITY_REGENERATOR,
#line 5659
            .lvl = 45,
#line 5662
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5663
                MOVE_FAKE_OUT,
                MOVE_DRAIN_PUNCH,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 5668
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5668
            .heldItem = ITEM_LEFTOVERS,
#line 5671
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 48),
#line 5673
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5669
            .ability = ABILITY_REGENERATOR,
#line 5670
            .lvl = 45,
#line 5672
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5674
                MOVE_SCALD,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
                MOVE_SLACK_OFF,
            },
            },
            {
#line 5679
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5679
            .heldItem = ITEM_EVIOLITE,
#line 5682
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5684
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5680
            .ability = ABILITY_SERENE_GRACE,
#line 5681
            .lvl = 48,
#line 5683
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5685
                MOVE_DRAINING_KISS,
                MOVE_ANCIENT_POWER,
                MOVE_WISH,
                MOVE_BATON_PASS,
            },
            },
            {
#line 5690
            .species = SPECIES_LIEPARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5690
            .heldItem = ITEM_NORMAL_GEM,
#line 5693
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5695
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5691
            .ability = ABILITY_UNBURDEN,
#line 5692
            .lvl = 46,
#line 5694
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5696
                MOVE_U_TURN,
                MOVE_FAKE_OUT,
                MOVE_DARK_PULSE,
                MOVE_PLAY_ROUGH,
            },
            },
        },
    },
#line 5701
    [DIFFICULTY_NORMAL][TRAINER_1114BC23] =
    {
#line 5702
        .trainerName = _("1114BC23"),
#line 5703
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5705
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5704
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5706
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5707
        .mapSec = MAPSEC_FORT_YOBU,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5709
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5709
            .heldItem = ITEM_TOXIC_ORB,
#line 5712
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 48, 0, 0),
#line 5714
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5710
            .ability = ABILITY_POISON_HEAL,
#line 5711
            .lvl = 45,
#line 5713
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5715
                MOVE_SUBSTITUTE,
                MOVE_DRAIN_PUNCH,
                MOVE_GIGA_DRAIN,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 5720
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5720
            .heldItem = ITEM_BIG_ROOT,
#line 5723
            .ev = TRAINER_PARTY_EVS(252, 0, 24, 0, 0, 24),
#line 5725
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5721
            .ability = ABILITY_DRY_SKIN,
#line 5722
            .lvl = 47,
#line 5724
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5726
                MOVE_LEECH_SEED,
                MOVE_LEECH_LIFE,
                MOVE_GIGA_DRAIN,
                MOVE_SPORE,
            },
            },
            {
#line 5731
            .species = SPECIES_CERULEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5731
            .heldItem = ITEM_LEFTOVERS,
#line 5734
            .ev = TRAINER_PARTY_EVS(0, 48, 0, 252, 0, 0),
#line 5736
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5732
            .ability = ABILITY_FLASH_FIRE,
#line 5733
            .lvl = 48,
#line 5735
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5737
                MOVE_BITTER_BLADE,
                MOVE_PHANTOM_FORCE,
                MOVE_WILL_O_WISP,
                MOVE_BULK_UP,
            },
            },
            {
#line 5742
            .species = SPECIES_FLORGES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5742
            .heldItem = ITEM_BABIRI_BERRY,
#line 5745
            .ev = TRAINER_PARTY_EVS(252, 0, 48, 0, 0, 0),
#line 5747
            .iv = TRAINER_PARTY_IVS(14, 0, 14, 14, 14, 14),
#line 5743
            .ability = ABILITY_FLOWER_VEIL,
#line 5744
            .lvl = 46,
#line 5746
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5748
                MOVE_MOONBLAST,
                MOVE_STORED_POWER,
                MOVE_CALM_MIND,
                MOVE_SYNTHESIS,
            },
            },
        },
    },
#line 5753
    [DIFFICULTY_NORMAL][TRAINER_114EB3AD] =
    {
#line 5754
        .trainerName = _("114EB3AD"),
#line 5755
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5757
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5756
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5758
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5759
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5761
            .species = SPECIES_PURUGLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5761
            .heldItem = ITEM_FOCUS_SASH,
#line 5764
            .ev = TRAINER_PARTY_EVS(0, 244, 124, 0, 0, 28),
#line 5766
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5762
            .ability = ABILITY_DEFIANT,
#line 5763
            .lvl = 50,
#line 5765
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5766
                MOVE_FAKE_OUT,
                MOVE_DOUBLE_TEAM,
                MOVE_BODY_SLAM,
                MOVE_SUPER_FANG,
            },
            },
            {
#line 5771
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5771
            .heldItem = ITEM_MUSCLE_BAND,
#line 5774
            .ev = TRAINER_PARTY_EVS(0, 248, 0, 0, 0, 148),
#line 5776
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5772
            .ability = ABILITY_TECHNICIAN,
#line 5773
            .lvl = 48,
#line 5775
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5776
                MOVE_MACH_PUNCH,
                MOVE_BULLET_SEED,
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 5781
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5781
            .heldItem = ITEM_RED_CARD,
#line 5784
            .ev = TRAINER_PARTY_EVS(0, 124, 0, 148, 124, 0),
#line 5786
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5782
            .ability = ABILITY_ILLUSION,
#line 5783
            .lvl = 50,
#line 5785
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5786
                MOVE_NIGHT_DAZE,
                MOVE_FLAMETHROWER,
                MOVE_EXTRASENSORY,
                MOVE_SLUDGE_BOMB,
            },
            },
            {
#line 5791
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5791
            .heldItem = ITEM_TOXIC_ORB,
#line 5794
            .ev = TRAINER_PARTY_EVS(0, 248, 52, 0, 0, 100),
#line 5796
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5792
            .ability = ABILITY_QUICK_FEET,
#line 5793
            .lvl = 49,
#line 5795
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5796
                MOVE_ROAR,
                MOVE_ICE_PUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_PLAY_ROUGH,
            },
            },
        },
    },
#line 5801
    [DIFFICULTY_NORMAL][TRAINER_11EDE0DC] =
    {
#line 5802
        .trainerName = _("11EDE0DC"),
#line 5803
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5805
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5804
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5806
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5807
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5809
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5809
            .heldItem = ITEM_PAYAPA_BERRY,
#line 5812
            .ev = TRAINER_PARTY_EVS(0, 0, 88, 0, 216, 96),
#line 5814
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5810
            .ability = ABILITY_STICKY_HOLD,
#line 5811
            .lvl = 49,
#line 5813
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5814
                MOVE_TOXIC_SPIKES,
                MOVE_SLUDGE_WAVE,
                MOVE_GIGA_DRAIN,
                MOVE_MUD_SHOT,
            },
            },
            {
#line 5819
            .species = SPECIES_SCRAFTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5819
            .heldItem = ITEM_ROSELI_BERRY,
#line 5822
            .ev = TRAINER_PARTY_EVS(0, 116, 132, 0, 0, 148),
#line 5824
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5820
            .ability = ABILITY_INTIMIDATE,
#line 5821
            .lvl = 48,
#line 5823
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5824
                MOVE_DRAGON_TAIL,
                MOVE_ZEN_HEADBUTT,
                MOVE_DRAGON_DANCE,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 5829
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5829
            .heldItem = ITEM_RED_CARD,
#line 5832
            .ev = TRAINER_PARTY_EVS(136, 0, 44, 0, 136, 76),
#line 5834
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5830
            .ability = ABILITY_SHEER_FORCE,
#line 5831
            .lvl = 49,
#line 5833
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5834
                MOVE_ICE_BEAM,
                MOVE_VENOSHOCK,
                MOVE_EARTH_POWER,
                MOVE_TOXIC_SPIKES,
            },
            },
            {
#line 5839
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5839
            .heldItem = ITEM_SCOPE_LENS,
#line 5842
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 148, 0),
#line 5844
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5840
            .ability = ABILITY_SUPER_LUCK,
#line 5841
            .lvl = 50,
#line 5843
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5844
                MOVE_HEX,
                MOVE_HEAT_WAVE,
                MOVE_AIR_CUTTER,
                MOVE_PSYCHIC_NOISE,
            },
            },
        },
    },
#line 5849
    [DIFFICULTY_NORMAL][TRAINER_120A20F6] =
    {
#line 5850
        .trainerName = _("120A20F6"),
#line 5851
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5853
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5852
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5854
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5855
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5857
            .species = SPECIES_KLEFKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5857
            .heldItem = ITEM_RED_CARD,
#line 5860
            .ev = TRAINER_PARTY_EVS(48, 0, 84, 0, 116, 148),
#line 5862
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5858
            .ability = ABILITY_PRANKSTER,
#line 5859
            .lvl = 51,
#line 5861
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5862
                MOVE_SPIKES,
                MOVE_STEEL_BEAM,
                MOVE_MISTY_TERRAIN,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 5867
            .species = SPECIES_SLURPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5867
            .heldItem = ITEM_MISTY_SEED,
#line 5870
            .ev = TRAINER_PARTY_EVS(116, 0, 28, 252, 0, 0),
#line 5872
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5868
            .ability = ABILITY_UNBURDEN,
#line 5869
            .lvl = 50,
#line 5871
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5872
                MOVE_STICKY_WEB,
                MOVE_SURF,
                MOVE_FLAMETHROWER,
                MOVE_ENERGY_BALL,
            },
            },
            {
#line 5877
            .species = SPECIES_MINIOR_INDIGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5877
            .heldItem = ITEM_SITRUS_BERRY,
#line 5880
            .ev = TRAINER_PARTY_EVS(0, 148, 0, 248, 0, 0),
#line 5882
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5878
            .ability = ABILITY_SHIELDS_DOWN,
#line 5879
            .lvl = 49,
#line 5881
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5882
                MOVE_STEALTH_ROCK,
                MOVE_ANCIENT_POWER,
                MOVE_SCORCHING_SANDS,
                MOVE_ACROBATICS,
            },
            },
            {
#line 5887
            .species = SPECIES_PANGORO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5887
            .heldItem = ITEM_LIECHI_BERRY,
#line 5890
            .ev = TRAINER_PARTY_EVS(148, 116, 36, 0, 0, 100),
#line 5892
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5888
            .ability = ABILITY_SCRAPPY,
#line 5889
            .lvl = 50,
#line 5891
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5892
                MOVE_CIRCLE_THROW,
                MOVE_LOW_KICK,
                MOVE_EARTHQUAKE,
                MOVE_DARKEST_LARIAT,
            },
            },
        },
    },
#line 5897
    [DIFFICULTY_NORMAL][TRAINER_13113EC0] =
    {
#line 5898
        .trainerName = _("13113EC0"),
#line 5899
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5901
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5900
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5902
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5903
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5905
            .species = SPECIES_VIKAVOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5905
            .heldItem = ITEM_QUICK_CLAW,
#line 5908
            .ev = TRAINER_PARTY_EVS(184, 0, 0, 0, 208, 8),
#line 5910
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5906
            .ability = ABILITY_LEVITATE,
#line 5907
            .lvl = 50,
#line 5909
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5911
                MOVE_STICKY_WEB,
                MOVE_VOLT_SWITCH,
                MOVE_ENERGY_BALL,
                MOVE_BUG_BUZZ,
            },
            },
            {
#line 5916
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5916
            .heldItem = ITEM_RED_CARD,
#line 5919
            .ev = TRAINER_PARTY_EVS(248, 0, 140, 0, 0, 8),
#line 5921
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5917
            .ability = ABILITY_HEATPROOF,
#line 5918
            .lvl = 51,
#line 5920
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5922
                MOVE_STEALTH_ROCK,
                MOVE_ZEN_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 5927
            .species = SPECIES_URSALUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5927
            .heldItem = ITEM_BERSERK_GENE,
#line 5930
            .ev = TRAINER_PARTY_EVS(156, 124, 116, 0, 0, 0),
#line 5932
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5928
            .ability = ABILITY_UNNERVE,
#line 5929
            .lvl = 48,
#line 5931
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5933
                MOVE_PLAY_ROUGH,
                MOVE_BRICK_BREAK,
                MOVE_BODY_SLAM,
                MOVE_BULLDOZE,
            },
            },
        },
    },
#line 5938
    [DIFFICULTY_NORMAL][TRAINER_1387ABBC] =
    {
#line 5939
        .trainerName = _("1387ABBC"),
#line 5940
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5942
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5941
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5943
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5944
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5946
            .species = SPECIES_ORBEETLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5946
            .heldItem = ITEM_RED_CARD,
#line 5949
            .ev = TRAINER_PARTY_EVS(136, 0, 40, 224, 0, 0),
#line 5951
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5947
            .ability = ABILITY_SWARM,
#line 5948
            .lvl = 50,
#line 5950
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5952
                MOVE_STICKY_WEB,
                MOVE_HYPNOSIS,
                MOVE_PSYCHIC_NOISE,
                MOVE_BUG_BUZZ,
            },
            },
            {
#line 5957
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5957
            .heldItem = ITEM_EVIOLITE,
#line 5960
            .ev = TRAINER_PARTY_EVS(184, 0, 108, 0, 0, 104),
#line 5962
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5958
            .ability = ABILITY_DEFIANT,
#line 5959
            .lvl = 48,
#line 5961
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5963
                MOVE_STEALTH_ROCK,
                MOVE_STONE_EDGE,
                MOVE_DRAIN_PUNCH,
                MOVE_POISON_JAB,
            },
            },
        },
    },
#line 5968
    [DIFFICULTY_NORMAL][TRAINER_148A3C6B] =
    {
#line 5969
        .trainerName = _("148A3C6B"),
#line 5970
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 5972
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5971
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 5973
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 5974
        .mapSec = MAPSEC_TIRABUDIN_PLACE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5976
            .species = SPECIES_TOEDSCRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5976
            .heldItem = ITEM_YACHE_BERRY,
#line 5979
            .ev = TRAINER_PARTY_EVS(140, 0, 72, 0, 104, 80),
#line 5981
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5977
            .ability = ABILITY_MYCELIUM_MIGHT,
#line 5978
            .lvl = 49,
#line 5980
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5982
                MOVE_SPORE,
                MOVE_TOXIC_SPIKES,
                MOVE_EARTH_POWER,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 5987
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5987
            .heldItem = ITEM_BLUNDER_POLICY,
#line 5990
            .ev = TRAINER_PARTY_EVS(80, 0, 112, 52, 152, 0),
#line 5992
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5988
            .ability = ABILITY_INSOMNIA,
#line 5989
            .lvl = 51,
#line 5991
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5993
                MOVE_HYPNOSIS,
                MOVE_HURRICANE,
                MOVE_WHIRLWIND,
                MOVE_EXTRASENSORY,
            },
            },
        },
    },
#line 5998
    [DIFFICULTY_NORMAL][TRAINER_14C5EE6C] =
    {
#line 5999
        .trainerName = _("14C5EE6C"),
#line 6000
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6001
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6003
            .species = SPECIES_SHIINOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6003
            .heldItem = ITEM_RED_CARD,
#line 6006
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 0, 200, 0),
#line 6008
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6004
            .ability = ABILITY_EFFECT_SPORE,
#line 6005
            .lvl = 49,
#line 6007
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6009
                MOVE_MOONBLAST,
                MOVE_ENERGY_BALL,
                MOVE_SPORE,
                MOVE_MOONLIGHT,
            },
            },
            {
#line 6014
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6014
            .heldItem = ITEM_RED_CARD,
#line 6017
            .ev = TRAINER_PARTY_EVS(0, 200, 0, 200, 0, 0),
#line 6019
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6015
            .ability = ABILITY_TANGLED_FEET,
#line 6016
            .lvl = 50,
#line 6018
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6020
                MOVE_THRASH,
                MOVE_FAKE_OUT,
                MOVE_SUCKER_PUNCH,
            },
            },
            {
#line 6024
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6024
            .heldItem = ITEM_POISONIUM_Z,
#line 6027
            .ev = TRAINER_PARTY_EVS(200, 100, 0, 0, 100, 0),
#line 6029
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6025
            .ability = ABILITY_LEVITATE,
#line 6026
            .lvl = 50,
#line 6028
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6030
                MOVE_GUNK_SHOT,
                MOVE_DESTINY_BOND,
                MOVE_FLAMETHROWER,
                MOVE_DARK_PULSE,
            },
            },
            {
#line 6035
            .species = SPECIES_MUSHARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6035
            .heldItem = ITEM_RED_CARD,
#line 6038
            .ev = TRAINER_PARTY_EVS(200, 0, 100, 0, 50, 50),
#line 6040
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6036
            .ability = ABILITY_SYNCHRONIZE,
#line 6037
            .lvl = 51,
#line 6039
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6041
                MOVE_DREAM_EATER,
                MOVE_YAWN,
                MOVE_ALLURING_VOICE,
                MOVE_PSYCHIC,
            },
            },
            {
#line 6046
            .species = SPECIES_ANNIHILAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6046
            .heldItem = ITEM_SITRUS_BERRY,
#line 6049
            .ev = TRAINER_PARTY_EVS(200, 0, 0, 200, 0, 0),
#line 6051
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6047
            .ability = ABILITY_DEFIANT,
#line 6048
            .lvl = 52,
#line 6050
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6052
                MOVE_CLOSE_COMBAT,
                MOVE_STOMPING_TANTRUM,
                MOVE_SHADOW_CLAW,
                MOVE_TAUNT,
            },
            },
        },
    },
#line 6057
    [DIFFICULTY_NORMAL][TRAINER_1508BB71] =
    {
#line 6058
        .trainerName = _("1508BB71"),
#line 6059
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6061
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6060
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6062
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6063
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6065
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6065
            .heldItem = ITEM_LEFTOVERS,
#line 6068
            .ev = TRAINER_PARTY_EVS(208, 0, 184, 0, 8, 0),
#line 6070
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6066
            .ability = ABILITY_SNOW_CLOAK,
#line 6067
            .lvl = 47,
#line 6069
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6071
                MOVE_SNOWSCAPE,
                MOVE_BLIZZARD,
                MOVE_REST,
                MOVE_REFLECT,
            },
            },
            {
#line 6076
            .species = SPECIES_BEARTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6076
            .heldItem = ITEM_STARF_BERRY,
#line 6079
            .ev = TRAINER_PARTY_EVS(0, 252, 72, 0, 0, 72),
#line 6081
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6077
            .ability = ABILITY_SNOW_CLOAK,
#line 6078
            .lvl = 46,
#line 6080
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6082
                MOVE_SNOWSCAPE,
                MOVE_AVALANCHE,
                MOVE_SHEER_COLD,
            },
            },
        },
    },
#line 6086
    [DIFFICULTY_NORMAL][TRAINER_1510C80A] =
    {
#line 6087
        .trainerName = _("1510C80A"),
#line 6088
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6090
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6089
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6091
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6092
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6094
            .species = SPECIES_MUDSDALE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6094
            .heldItem = ITEM_SMOOTH_ROCK,
#line 6097
            .ev = TRAINER_PARTY_EVS(156, 0, 244, 0, 0, 0),
#line 6099
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6095
            .ability = ABILITY_STAMINA,
#line 6096
            .lvl = 44,
#line 6098
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6100
                MOVE_SANDSTORM,
                MOVE_BODY_PRESS,
                MOVE_COUNTER,
                MOVE_CURSE,
            },
            },
            {
#line 6105
            .species = SPECIES_SANDACONDA,
#line 6105
            .gender = TRAINER_MON_MALE,
#line 6105
            .heldItem = ITEM_RED_CARD,
#line 6108
            .ev = TRAINER_PARTY_EVS(152, 88, 156, 0, 0, 0),
#line 6109
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6106
            .ability = ABILITY_SAND_SPIT,
#line 6107
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6110
                MOVE_HURRICANE,
                MOVE_DRILL_RUN,
                MOVE_FIRE_FANG,
                MOVE_SKITTER_SMACK,
            },
            },
            {
#line 6115
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6115
            .heldItem = ITEM_LIFE_ORB,
#line 6118
            .ev = TRAINER_PARTY_EVS(0, 0, 148, 0, 252, 0),
#line 6119
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6116
            .ability = ABILITY_MAGIC_GUARD,
#line 6117
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6120
                MOVE_PSYCHIC,
                MOVE_THUNDER_PUNCH,
                MOVE_SHADOW_BALL,
                MOVE_ENERGY_BALL,
            },
            },
        },
    },
#line 6125
    [DIFFICULTY_NORMAL][TRAINER_15598A38] =
    {
#line 6126
        .trainerName = _("15598A38"),
#line 6127
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6129
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6128
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6130
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6131
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6133
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6133
            .heldItem = ITEM_EXPERT_BELT,
#line 6136
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 144, 0, 0),
#line 6138
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6134
            .ability = ABILITY_PURE_POWER,
#line 6135
            .lvl = 44,
#line 6137
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6139
                MOVE_HIGH_JUMP_KICK,
                MOVE_POISON_JAB,
                MOVE_ZEN_HEADBUTT,
                MOVE_FIRE_PUNCH,
            },
            },
            {
#line 6144
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6144
            .heldItem = ITEM_EXPERT_BELT,
#line 6147
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 148, 0, 0),
#line 6149
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6145
            .ability = ABILITY_PURE_POWER,
#line 6146
            .lvl = 45,
#line 6148
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6150
                MOVE_ICE_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_ZEN_HEADBUTT,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 6155
            .species = SPECIES_LOKIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6155
            .heldItem = ITEM_EXPERT_BELT,
#line 6158
            .ev = TRAINER_PARTY_EVS(0, 204, 0, 196, 0, 0),
#line 6160
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6156
            .ability = ABILITY_TINTED_LENS,
#line 6157
            .lvl = 45,
#line 6159
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6161
                MOVE_BUG_BITE,
                MOVE_AERIAL_ACE,
                MOVE_LASH_OUT,
                MOVE_DOUBLE_KICK,
            },
            },
        },
    },
#line 6166
    [DIFFICULTY_NORMAL][TRAINER_15A66566] =
    {
#line 6167
        .trainerName = _("15A66566"),
#line 6168
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6170
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6169
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6171
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6172
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6174
            .species = SPECIES_HAWLUCHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6174
            .heldItem = ITEM_ORAN_BERRY,
#line 6177
            .ev = TRAINER_PARTY_EVS(252, 0, 72, 0, 0, 72),
#line 6179
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6175
            .ability = ABILITY_UNBURDEN,
#line 6176
            .lvl = 45,
#line 6178
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6180
                MOVE_TAUNT,
                MOVE_ENCORE,
                MOVE_HELPING_HAND,
                MOVE_BRICK_BREAK,
            },
            },
            {
#line 6185
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6185
            .heldItem = ITEM_KINGS_ROCK,
#line 6188
            .ev = TRAINER_PARTY_EVS(76, 252, 72, 0, 0, 0),
#line 6190
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6186
            .ability = ABILITY_ARENA_TRAP,
#line 6187
            .lvl = 40,
#line 6189
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6191
                MOVE_QUICK_ATTACK,
                MOVE_BITE,
                MOVE_STONE_EDGE,
                MOVE_BULLDOZE,
            },
            },
            {
#line 6196
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6196
            .heldItem = ITEM_CHOICE_BAND,
#line 6199
            .ev = TRAINER_PARTY_EVS(76, 252, 72, 0, 0, 0),
#line 6201
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6197
            .ability = ABILITY_ARENA_TRAP,
#line 6198
            .lvl = 40,
#line 6200
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6202
                MOVE_QUICK_ATTACK,
                MOVE_BUG_BITE,
                MOVE_STONE_EDGE,
                MOVE_BULLDOZE,
            },
            },
        },
    },
#line 6207
    [DIFFICULTY_NORMAL][TRAINER_15C87858] =
    {
#line 6208
        .trainerName = _("15C87858"),
#line 6209
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6211
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6210
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6212
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6213
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6215
            .species = SPECIES_SWADLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6218
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6216
            .ability = ABILITY_OVERCOAT,
#line 6217
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6219
                MOVE_LIGHT_SCREEN,
                MOVE_SUBSTITUTE,
                MOVE_PROTECT,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6224
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6227
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6225
            .ability = ABILITY_HYPER_CUTTER,
#line 6226
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6228
                MOVE_TOXIC,
                MOVE_PROTECT,
                MOVE_SUBSTITUTE,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 6233
            .species = SPECIES_TOEDSCRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6236
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6234
            .ability = ABILITY_MYCELIUM_MIGHT,
#line 6235
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6237
                MOVE_SUBSTITUTE,
                MOVE_LEECH_SEED,
                MOVE_PROTECT,
                MOVE_HEX,
            },
            },
        },
    },
#line 6242
    [DIFFICULTY_NORMAL][TRAINER_1648CE6E] =
    {
#line 6243
        .trainerName = _("1648CE6E"),
#line 6244
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6246
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6245
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6247
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6248
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6250
            .species = SPECIES_VANILLUXE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6250
            .heldItem = ITEM_ICY_ROCK,
#line 6253
            .ev = TRAINER_PARTY_EVS(132, 0, 76, 0, 172, 16),
#line 6255
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6251
            .ability = ABILITY_SNOW_WARNING,
#line 6252
            .lvl = 42,
#line 6254
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6256
                MOVE_MIST,
                MOVE_BLIZZARD,
                MOVE_EXPLOSION,
            },
            },
            {
#line 6260
            .species = SPECIES_CHANSEY,
#line 6260
            .gender = TRAINER_MON_FEMALE,
#line 6260
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 6263
            .ev = TRAINER_PARTY_EVS(0, 0, 144, 0, 252, 0),
#line 6265
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6261
            .ability = ABILITY_SERENE_GRACE,
#line 6262
            .lvl = 46,
#line 6264
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6266
                MOVE_SNOWSCAPE,
                MOVE_BLIZZARD,
                MOVE_HEALING_WISH,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 6271
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6271
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 6274
            .ev = TRAINER_PARTY_EVS(64, 0, 44, 0, 252, 40),
#line 6276
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6272
            .ability = ABILITY_WATER_ABSORB,
#line 6273
            .lvl = 46,
#line 6275
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6277
                MOVE_SNOWSCAPE,
                MOVE_BLIZZARD,
                MOVE_PSYCHIC_NOISE,
                MOVE_FREEZE_DRY,
            },
            },
            {
#line 6282
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6282
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 6285
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 148, 252, 0),
#line 6287
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6283
            .ability = ABILITY_SWIFT_SWIM,
#line 6284
            .lvl = 41,
#line 6286
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6288
                MOVE_SNOWSCAPE,
                MOVE_BLIZZARD,
                MOVE_BOUNCE,
                MOVE_SHELL_SMASH,
            },
            },
        },
    },
#line 6293
    [DIFFICULTY_NORMAL][TRAINER_1710375D] =
    {
#line 6294
        .trainerName = _("1710375D"),
#line 6295
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6297
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6296
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6298
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6299
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6301
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6301
            .heldItem = ITEM_AIR_BALLOON,
#line 6304
            .ev = TRAINER_PARTY_EVS(104, 252, 44, 0, 0, 0),
#line 6305
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6302
            .ability = ABILITY_MOLD_BREAKER,
#line 6303
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6306
                MOVE_EARTHQUAKE,
                MOVE_SWORDS_DANCE,
                MOVE_RAPID_SPIN,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 6311
            .species = SPECIES_FRAXURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6311
            .heldItem = ITEM_SITRUS_BERRY,
#line 6314
            .ev = TRAINER_PARTY_EVS(92, 108, 172, 0, 0, 28),
#line 6315
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6312
            .ability = ABILITY_MOLD_BREAKER,
#line 6313
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6316
                MOVE_STOMPING_TANTRUM,
                MOVE_SWORDS_DANCE,
                MOVE_SCALE_SHOT,
                MOVE_BREAKING_SWIPE,
            },
            },
            {
#line 6321
            .species = SPECIES_PANGORO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6321
            .heldItem = ITEM_EXPERT_BELT,
#line 6324
            .ev = TRAINER_PARTY_EVS(108, 248, 44, 0, 0, 0),
#line 6325
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6322
            .ability = ABILITY_MOLD_BREAKER,
#line 6323
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6326
                MOVE_DRAIN_PUNCH,
                MOVE_THIEF,
                MOVE_ICE_PUNCH,
                MOVE_BULLET_PUNCH,
            },
            },
            {
#line 6331
            .species = SPECIES_HAWLUCHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6331
            .heldItem = ITEM_PAYAPA_BERRY,
#line 6334
            .ev = TRAINER_PARTY_EVS(68, 248, 0, 0, 0, 80),
#line 6335
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6332
            .ability = ABILITY_MOLD_BREAKER,
#line 6333
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6336
                MOVE_SWORDS_DANCE,
                MOVE_DUAL_WINGBEAT,
                MOVE_FLYING_PRESS,
                MOVE_GRASS_KNOT,
            },
            },
        },
    },
#line 6341
    [DIFFICULTY_NORMAL][TRAINER_17DCC938] =
    {
#line 6342
        .trainerName = _("17DCC938"),
#line 6343
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6345
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6344
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 6346
        .trainerType = GLASS_TRAINER_TYPE_REGULAR,
#line 6347
        .mapSec = MAPSEC_HALERBAWILDS,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6349
            .species = SPECIES_HONEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6349
            .heldItem = ITEM_ORAN_BERRY,
#line 6352
            .ev = TRAINER_PARTY_EVS(80, 160, 80, 0, 0, 80),
#line 6353
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6350
            .ability = ABILITY_NO_GUARD,
#line 6351
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6354
                MOVE_ROCK_SLIDE,
                MOVE_FURY_CUTTER,
                MOVE_STEEL_BEAM,
            },
            },
            {
#line 6358
            .species = SPECIES_DOUBLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6358
            .heldItem = ITEM_SITRUS_BERRY,
#line 6361
            .ev = TRAINER_PARTY_EVS(172, 92, 132, 0, 0, 0),
#line 6362
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6359
            .ability = ABILITY_NO_GUARD,
#line 6360
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6363
                MOVE_BRICK_BREAK,
                MOVE_GYRO_BALL,
                MOVE_NIGHT_SLASH,
                MOVE_BRUTAL_SWING,
            },
            },
            {
#line 6368
            .species = SPECIES_AEGISLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6368
            .heldItem = ITEM_AIR_BALLOON,
#line 6371
            .ev = TRAINER_PARTY_EVS(108, 252, 36, 0, 0, 0),
#line 6373
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6369
            .ability = ABILITY_STANCE_CHANGE,
#line 6370
            .lvl = 42,
#line 6372
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6374
                MOVE_KINGS_SHIELD,
                MOVE_SWORDS_DANCE,
                MOVE_SHADOW_SNEAK,
                MOVE_CLOSE_COMBAT,
            },
            },
            {
#line 6379
            .species = SPECIES_AEGISLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6379
            .heldItem = ITEM_LEFTOVERS,
#line 6382
            .ev = TRAINER_PARTY_EVS(108, 0, 36, 0, 252, 0),
#line 6384
            .iv = TRAINER_PARTY_IVS(22, 22, 22, 22, 22, 22),
#line 6380
            .ability = ABILITY_STANCE_CHANGE,
#line 6381
            .lvl = 42,
#line 6383
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6385
                MOVE_KINGS_SHIELD,
                MOVE_SHADOW_BALL,
                MOVE_SUBSTITUTE,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 6390
    [DIFFICULTY_NORMAL][TRAINER_188A6F20] =
    {
#line 6391
        .trainerName = _("188A6F20"),
#line 6392
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6393
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6395
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6397
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6396
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6398
    [DIFFICULTY_NORMAL][TRAINER_1932C509] =
    {
#line 6399
        .trainerName = _("1932C509"),
#line 6400
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6401
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6403
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6405
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6404
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6406
    [DIFFICULTY_NORMAL][TRAINER_19477C78] =
    {
#line 6407
        .trainerName = _("19477C78"),
#line 6408
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6409
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6411
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6413
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6412
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6414
    [DIFFICULTY_NORMAL][TRAINER_19C5BAD7] =
    {
#line 6415
        .trainerName = _("19C5BAD7"),
#line 6416
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6417
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6419
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6421
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6420
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6422
    [DIFFICULTY_NORMAL][TRAINER_19CD0726] =
    {
#line 6423
        .trainerName = _("19CD0726"),
#line 6424
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6425
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6427
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6429
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6428
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6430
    [DIFFICULTY_NORMAL][TRAINER_19D7682B] =
    {
#line 6431
        .trainerName = _("19D7682B"),
#line 6432
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6433
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6435
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6437
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6436
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6438
    [DIFFICULTY_NORMAL][TRAINER_1A2CA162] =
    {
#line 6439
        .trainerName = _("1A2CA162"),
#line 6440
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6441
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6443
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6445
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6444
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6446
    [DIFFICULTY_NORMAL][TRAINER_1A763631] =
    {
#line 6447
        .trainerName = _("1A763631"),
#line 6448
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6449
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6451
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6453
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6452
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6454
    [DIFFICULTY_NORMAL][TRAINER_1AE5CAF7] =
    {
#line 6455
        .trainerName = _("1AE5CAF7"),
#line 6456
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6457
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6459
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6461
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6460
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6462
    [DIFFICULTY_NORMAL][TRAINER_1AE89BEB] =
    {
#line 6463
        .trainerName = _("1AE89BEB"),
#line 6464
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6465
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6467
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6469
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6468
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6470
    [DIFFICULTY_NORMAL][TRAINER_1AEA3CEA] =
    {
#line 6471
        .trainerName = _("1AEA3CEA"),
#line 6472
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6473
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6475
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6477
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6476
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6478
    [DIFFICULTY_NORMAL][TRAINER_1B517ABD] =
    {
#line 6479
        .trainerName = _("1B517ABD"),
#line 6480
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6481
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6483
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6485
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6484
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6486
    [DIFFICULTY_NORMAL][TRAINER_1B616469] =
    {
#line 6487
        .trainerName = _("1B616469"),
#line 6488
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6489
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6491
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6493
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6492
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6494
    [DIFFICULTY_NORMAL][TRAINER_1BA35D11] =
    {
#line 6495
        .trainerName = _("1BA35D11"),
#line 6496
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6497
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6499
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6501
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6500
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6502
    [DIFFICULTY_NORMAL][TRAINER_1BB1218F] =
    {
#line 6503
        .trainerName = _("1BB1218F"),
#line 6504
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6505
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6507
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6509
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6508
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6510
    [DIFFICULTY_NORMAL][TRAINER_1BC45966] =
    {
#line 6511
        .trainerName = _("1BC45966"),
#line 6512
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6513
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6515
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6517
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6516
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6518
    [DIFFICULTY_NORMAL][TRAINER_1C2B088C] =
    {
#line 6519
        .trainerName = _("1C2B088C"),
#line 6520
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6521
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6523
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6525
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6524
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6526
    [DIFFICULTY_NORMAL][TRAINER_1C6CA7F6] =
    {
#line 6527
        .trainerName = _("1C6CA7F6"),
#line 6528
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6529
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6531
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6533
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6532
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6534
    [DIFFICULTY_NORMAL][TRAINER_1CBE4FB1] =
    {
#line 6535
        .trainerName = _("1CBE4FB1"),
#line 6536
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6537
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6539
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6541
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6540
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6542
    [DIFFICULTY_NORMAL][TRAINER_1CBFAF10] =
    {
#line 6543
        .trainerName = _("1CBFAF10"),
#line 6544
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6545
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6547
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6549
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6548
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6550
    [DIFFICULTY_NORMAL][TRAINER_1CC4D5D6] =
    {
#line 6551
        .trainerName = _("1CC4D5D6"),
#line 6552
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6553
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6555
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6557
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6556
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6558
    [DIFFICULTY_NORMAL][TRAINER_1D63E5A1] =
    {
#line 6559
        .trainerName = _("1D63E5A1"),
#line 6560
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6561
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6563
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6565
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6564
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6566
    [DIFFICULTY_NORMAL][TRAINER_1D7A6DED] =
    {
#line 6567
        .trainerName = _("1D7A6DED"),
#line 6568
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6569
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6571
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6573
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6572
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6574
    [DIFFICULTY_NORMAL][TRAINER_1D93B10D] =
    {
#line 6575
        .trainerName = _("1D93B10D"),
#line 6576
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6577
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6579
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6581
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6580
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6582
    [DIFFICULTY_NORMAL][TRAINER_1DD07C78] =
    {
#line 6583
        .trainerName = _("1DD07C78"),
#line 6584
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6585
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6587
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6589
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6588
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6590
    [DIFFICULTY_NORMAL][TRAINER_1E5E6E80] =
    {
#line 6591
        .trainerName = _("1E5E6E80"),
#line 6592
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6593
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6595
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6597
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6596
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6598
    [DIFFICULTY_NORMAL][TRAINER_1EE34E30] =
    {
#line 6599
        .trainerName = _("1EE34E30"),
#line 6600
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6601
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6603
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6605
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6604
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6606
    [DIFFICULTY_NORMAL][TRAINER_1F24A6B1] =
    {
#line 6607
        .trainerName = _("1F24A6B1"),
#line 6608
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6609
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6611
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6613
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6612
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6614
    [DIFFICULTY_NORMAL][TRAINER_1F2A70D3] =
    {
#line 6615
        .trainerName = _("1F2A70D3"),
#line 6616
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6617
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6619
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6621
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6620
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6622
    [DIFFICULTY_NORMAL][TRAINER_1FD08020] =
    {
#line 6623
        .trainerName = _("1FD08020"),
#line 6624
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6625
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6627
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6629
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6628
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6630
    [DIFFICULTY_NORMAL][TRAINER_200650CA] =
    {
#line 6631
        .trainerName = _("200650CA"),
#line 6632
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6633
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6635
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6637
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6636
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6638
    [DIFFICULTY_NORMAL][TRAINER_20170FA5] =
    {
#line 6639
        .trainerName = _("20170FA5"),
#line 6640
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6641
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6643
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6645
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6644
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6646
    [DIFFICULTY_NORMAL][TRAINER_20993B87] =
    {
#line 6647
        .trainerName = _("20993B87"),
#line 6648
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6649
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6651
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6653
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6652
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6654
    [DIFFICULTY_NORMAL][TRAINER_20A10A97] =
    {
#line 6655
        .trainerName = _("20A10A97"),
#line 6656
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6657
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6659
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6661
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6660
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6662
    [DIFFICULTY_NORMAL][TRAINER_20A6F3A6] =
    {
#line 6663
        .trainerName = _("20A6F3A6"),
#line 6664
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6665
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6667
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6669
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6668
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6670
    [DIFFICULTY_NORMAL][TRAINER_20DC389D] =
    {
#line 6671
        .trainerName = _("20DC389D"),
#line 6672
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6673
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6675
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6677
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6676
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6678
    [DIFFICULTY_NORMAL][TRAINER_2177173C] =
    {
#line 6679
        .trainerName = _("2177173C"),
#line 6680
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6681
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6683
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6685
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6684
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6686
    [DIFFICULTY_NORMAL][TRAINER_2180E5CD] =
    {
#line 6687
        .trainerName = _("2180E5CD"),
#line 6688
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6689
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6691
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6693
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6692
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6694
    [DIFFICULTY_NORMAL][TRAINER_21EB8B2C] =
    {
#line 6695
        .trainerName = _("21EB8B2C"),
#line 6696
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6697
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6699
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6701
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6700
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6702
    [DIFFICULTY_NORMAL][TRAINER_22BA389B] =
    {
#line 6703
        .trainerName = _("22BA389B"),
#line 6704
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6705
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6707
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6709
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6708
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6710
    [DIFFICULTY_NORMAL][TRAINER_22DD5E2B] =
    {
#line 6711
        .trainerName = _("22DD5E2B"),
#line 6712
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6713
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6715
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6717
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6716
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6718
    [DIFFICULTY_NORMAL][TRAINER_22E7DE36] =
    {
#line 6719
        .trainerName = _("22E7DE36"),
#line 6720
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6721
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6723
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6725
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6724
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6726
    [DIFFICULTY_NORMAL][TRAINER_23C3170F] =
    {
#line 6727
        .trainerName = _("23C3170F"),
#line 6728
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6729
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6731
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6733
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6732
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6734
    [DIFFICULTY_NORMAL][TRAINER_23F50BC3] =
    {
#line 6735
        .trainerName = _("23F50BC3"),
#line 6736
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6737
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6739
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6741
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6740
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6742
    [DIFFICULTY_NORMAL][TRAINER_2434A25C] =
    {
#line 6743
        .trainerName = _("2434A25C"),
#line 6744
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6745
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6747
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6749
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6748
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6750
    [DIFFICULTY_NORMAL][TRAINER_245235C9] =
    {
#line 6751
        .trainerName = _("245235C9"),
#line 6752
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6753
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6755
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6757
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6756
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6758
    [DIFFICULTY_NORMAL][TRAINER_246CBBD5] =
    {
#line 6759
        .trainerName = _("246CBBD5"),
#line 6760
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6761
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6763
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6765
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6764
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6766
    [DIFFICULTY_NORMAL][TRAINER_247FE019] =
    {
#line 6767
        .trainerName = _("247FE019"),
#line 6768
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6769
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6771
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6773
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6772
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6774
    [DIFFICULTY_NORMAL][TRAINER_24AAFD0D] =
    {
#line 6775
        .trainerName = _("24AAFD0D"),
#line 6776
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6777
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6779
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6781
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6780
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6782
    [DIFFICULTY_NORMAL][TRAINER_24AC96DF] =
    {
#line 6783
        .trainerName = _("24AC96DF"),
#line 6784
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6785
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6787
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6789
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6788
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6790
    [DIFFICULTY_NORMAL][TRAINER_2561CB61] =
    {
#line 6791
        .trainerName = _("2561CB61"),
#line 6792
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6793
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6795
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6797
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6796
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6798
    [DIFFICULTY_NORMAL][TRAINER_26268FB4] =
    {
#line 6799
        .trainerName = _("26268FB4"),
#line 6800
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6801
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6803
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6805
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6804
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6806
    [DIFFICULTY_NORMAL][TRAINER_265174A6] =
    {
#line 6807
        .trainerName = _("265174A6"),
#line 6808
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6809
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6811
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6813
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6812
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6814
    [DIFFICULTY_NORMAL][TRAINER_272FA5B8] =
    {
#line 6815
        .trainerName = _("272FA5B8"),
#line 6816
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6817
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6819
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6821
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6820
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6822
    [DIFFICULTY_NORMAL][TRAINER_27B23C10] =
    {
#line 6823
        .trainerName = _("27B23C10"),
#line 6824
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6825
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6827
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6829
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6828
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6830
    [DIFFICULTY_NORMAL][TRAINER_27CEF8F2] =
    {
#line 6831
        .trainerName = _("27CEF8F2"),
#line 6832
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6833
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6835
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6837
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6836
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6838
    [DIFFICULTY_NORMAL][TRAINER_27E6F69F] =
    {
#line 6839
        .trainerName = _("27E6F69F"),
#line 6840
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6841
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6843
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6845
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6844
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6846
    [DIFFICULTY_NORMAL][TRAINER_28B294D2] =
    {
#line 6847
        .trainerName = _("28B294D2"),
#line 6848
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6849
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6851
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6853
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6852
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6854
    [DIFFICULTY_NORMAL][TRAINER_28E0625E] =
    {
#line 6855
        .trainerName = _("28E0625E"),
#line 6856
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6857
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6859
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6861
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6860
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6862
    [DIFFICULTY_NORMAL][TRAINER_292E386F] =
    {
#line 6863
        .trainerName = _("292E386F"),
#line 6864
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6865
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6867
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6869
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6868
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6870
    [DIFFICULTY_NORMAL][TRAINER_29AE727B] =
    {
#line 6871
        .trainerName = _("29AE727B"),
#line 6872
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6873
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6875
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6877
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6876
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6878
    [DIFFICULTY_NORMAL][TRAINER_2A305E88] =
    {
#line 6879
        .trainerName = _("2A305E88"),
#line 6880
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6881
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6883
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6885
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6884
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6886
    [DIFFICULTY_NORMAL][TRAINER_2A3F43CA] =
    {
#line 6887
        .trainerName = _("2A3F43CA"),
#line 6888
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6889
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6891
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6893
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6892
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6894
    [DIFFICULTY_NORMAL][TRAINER_2A7BF9FF] =
    {
#line 6895
        .trainerName = _("2A7BF9FF"),
#line 6896
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6897
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6899
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6901
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6900
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6902
    [DIFFICULTY_NORMAL][TRAINER_2A83B15E] =
    {
#line 6903
        .trainerName = _("2A83B15E"),
#line 6904
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6905
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6907
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6909
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6908
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6910
    [DIFFICULTY_NORMAL][TRAINER_2AD73BF3] =
    {
#line 6911
        .trainerName = _("2AD73BF3"),
#line 6912
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6913
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6915
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6917
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6916
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6918
    [DIFFICULTY_NORMAL][TRAINER_2B163825] =
    {
#line 6919
        .trainerName = _("2B163825"),
#line 6920
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6921
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6923
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6925
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6924
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6926
    [DIFFICULTY_NORMAL][TRAINER_2B249E40] =
    {
#line 6927
        .trainerName = _("2B249E40"),
#line 6928
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6929
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6931
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6933
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6932
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6934
    [DIFFICULTY_NORMAL][TRAINER_2BCA066C] =
    {
#line 6935
        .trainerName = _("2BCA066C"),
#line 6936
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6937
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6939
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6941
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6940
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6942
    [DIFFICULTY_NORMAL][TRAINER_2C040422] =
    {
#line 6943
        .trainerName = _("2C040422"),
#line 6944
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6945
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6947
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6949
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6948
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6950
    [DIFFICULTY_NORMAL][TRAINER_2C22CE48] =
    {
#line 6951
        .trainerName = _("2C22CE48"),
#line 6952
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6953
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6955
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6957
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6956
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6958
    [DIFFICULTY_NORMAL][TRAINER_2C398893] =
    {
#line 6959
        .trainerName = _("2C398893"),
#line 6960
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6961
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6963
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6965
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6964
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6966
    [DIFFICULTY_NORMAL][TRAINER_2C5FFA9F] =
    {
#line 6967
        .trainerName = _("2C5FFA9F"),
#line 6968
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6969
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6971
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6973
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6972
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6974
    [DIFFICULTY_NORMAL][TRAINER_2D1A100A] =
    {
#line 6975
        .trainerName = _("2D1A100A"),
#line 6976
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6977
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6979
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6981
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6980
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6982
    [DIFFICULTY_NORMAL][TRAINER_2D203158] =
    {
#line 6983
        .trainerName = _("2D203158"),
#line 6984
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6985
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6987
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6989
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6988
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6990
    [DIFFICULTY_NORMAL][TRAINER_2D29DC23] =
    {
#line 6991
        .trainerName = _("2D29DC23"),
#line 6992
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 6993
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6995
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6997
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6996
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6998
    [DIFFICULTY_NORMAL][TRAINER_2D6DE246] =
    {
#line 6999
        .trainerName = _("2D6DE246"),
#line 7000
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7001
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7003
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7005
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7004
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7006
    [DIFFICULTY_NORMAL][TRAINER_2D92F001] =
    {
#line 7007
        .trainerName = _("2D92F001"),
#line 7008
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7009
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7011
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7013
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7012
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7014
    [DIFFICULTY_NORMAL][TRAINER_2DC29B9E] =
    {
#line 7015
        .trainerName = _("2DC29B9E"),
#line 7016
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7017
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7019
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7021
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7020
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7022
    [DIFFICULTY_NORMAL][TRAINER_2E218A8E] =
    {
#line 7023
        .trainerName = _("2E218A8E"),
#line 7024
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7025
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7027
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7029
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7028
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7030
    [DIFFICULTY_NORMAL][TRAINER_2E593FA9] =
    {
#line 7031
        .trainerName = _("2E593FA9"),
#line 7032
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7033
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7035
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7037
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7036
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7038
    [DIFFICULTY_NORMAL][TRAINER_2EC49459] =
    {
#line 7039
        .trainerName = _("2EC49459"),
#line 7040
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7041
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7043
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7045
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7044
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7046
    [DIFFICULTY_NORMAL][TRAINER_2F0770D3] =
    {
#line 7047
        .trainerName = _("2F0770D3"),
#line 7048
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7049
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7051
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7053
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7052
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7054
    [DIFFICULTY_NORMAL][TRAINER_2F09421D] =
    {
#line 7055
        .trainerName = _("2F09421D"),
#line 7056
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7057
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7059
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7061
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7060
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7062
    [DIFFICULTY_NORMAL][TRAINER_2FF79A0B] =
    {
#line 7063
        .trainerName = _("2FF79A0B"),
#line 7064
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7065
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7067
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7069
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7068
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7070
    [DIFFICULTY_NORMAL][TRAINER_3009CC76] =
    {
#line 7071
        .trainerName = _("3009CC76"),
#line 7072
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7073
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7075
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7077
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7076
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7078
    [DIFFICULTY_NORMAL][TRAINER_30522A9A] =
    {
#line 7079
        .trainerName = _("30522A9A"),
#line 7080
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7081
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7083
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7085
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7084
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7086
    [DIFFICULTY_NORMAL][TRAINER_30ACE135] =
    {
#line 7087
        .trainerName = _("30ACE135"),
#line 7088
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7089
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7091
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7093
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7092
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7094
    [DIFFICULTY_NORMAL][TRAINER_311B3EFC] =
    {
#line 7095
        .trainerName = _("311B3EFC"),
#line 7096
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7097
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7099
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7101
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7100
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7102
    [DIFFICULTY_NORMAL][TRAINER_317B8932] =
    {
#line 7103
        .trainerName = _("317B8932"),
#line 7104
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7105
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7107
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7109
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7108
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7110
    [DIFFICULTY_NORMAL][TRAINER_31D36FE6] =
    {
#line 7111
        .trainerName = _("31D36FE6"),
#line 7112
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7113
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7115
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7117
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7116
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7118
    [DIFFICULTY_NORMAL][TRAINER_32C1F13D] =
    {
#line 7119
        .trainerName = _("32C1F13D"),
#line 7120
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7121
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7123
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7125
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7124
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7126
    [DIFFICULTY_NORMAL][TRAINER_33AB4856] =
    {
#line 7127
        .trainerName = _("33AB4856"),
#line 7128
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7129
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7131
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7133
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7132
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7134
    [DIFFICULTY_NORMAL][TRAINER_3566F099] =
    {
#line 7135
        .trainerName = _("3566F099"),
#line 7136
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7137
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7139
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7141
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7140
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7142
    [DIFFICULTY_NORMAL][TRAINER_35E0E027] =
    {
#line 7143
        .trainerName = _("35E0E027"),
#line 7144
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7145
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7147
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7149
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7148
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7150
    [DIFFICULTY_NORMAL][TRAINER_36662EEF] =
    {
#line 7151
        .trainerName = _("36662EEF"),
#line 7152
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7153
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7155
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7157
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7156
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7158
    [DIFFICULTY_NORMAL][TRAINER_3681E8DE] =
    {
#line 7159
        .trainerName = _("3681E8DE"),
#line 7160
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7161
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7163
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7165
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7164
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7166
    [DIFFICULTY_NORMAL][TRAINER_3789DC6E] =
    {
#line 7167
        .trainerName = _("3789DC6E"),
#line 7168
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7169
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7171
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7173
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7172
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7174
    [DIFFICULTY_NORMAL][TRAINER_37B9EFB7] =
    {
#line 7175
        .trainerName = _("37B9EFB7"),
#line 7176
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7177
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7179
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7181
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7180
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7182
    [DIFFICULTY_NORMAL][TRAINER_37EDB78E] =
    {
#line 7183
        .trainerName = _("37EDB78E"),
#line 7184
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7185
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7187
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7189
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7188
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7190
    [DIFFICULTY_NORMAL][TRAINER_382E2AB3] =
    {
#line 7191
        .trainerName = _("382E2AB3"),
#line 7192
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7193
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7195
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7197
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7196
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7198
    [DIFFICULTY_NORMAL][TRAINER_3842496B] =
    {
#line 7199
        .trainerName = _("3842496B"),
#line 7200
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7201
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7203
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7205
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7204
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7206
    [DIFFICULTY_NORMAL][TRAINER_387351C1] =
    {
#line 7207
        .trainerName = _("387351C1"),
#line 7208
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7209
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7211
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7213
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7212
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7214
    [DIFFICULTY_NORMAL][TRAINER_38A47BDB] =
    {
#line 7215
        .trainerName = _("38A47BDB"),
#line 7216
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7217
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7219
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7221
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7220
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7222
    [DIFFICULTY_NORMAL][TRAINER_3924756E] =
    {
#line 7223
        .trainerName = _("3924756E"),
#line 7224
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7225
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7227
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7229
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7228
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7230
    [DIFFICULTY_NORMAL][TRAINER_3947ACC3] =
    {
#line 7231
        .trainerName = _("3947ACC3"),
#line 7232
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7233
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7235
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7237
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7236
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7238
    [DIFFICULTY_NORMAL][TRAINER_39AD4606] =
    {
#line 7239
        .trainerName = _("39AD4606"),
#line 7240
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7241
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7243
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7245
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7244
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7246
    [DIFFICULTY_NORMAL][TRAINER_39E0AE4F] =
    {
#line 7247
        .trainerName = _("39E0AE4F"),
#line 7248
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7249
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7251
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7253
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7252
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7254
    [DIFFICULTY_NORMAL][TRAINER_39E78D45] =
    {
#line 7255
        .trainerName = _("39E78D45"),
#line 7256
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7257
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7259
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7261
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7260
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7262
    [DIFFICULTY_NORMAL][TRAINER_3A11452B] =
    {
#line 7263
        .trainerName = _("3A11452B"),
#line 7264
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7265
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7267
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7269
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7268
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7270
    [DIFFICULTY_NORMAL][TRAINER_3A840205] =
    {
#line 7271
        .trainerName = _("3A840205"),
#line 7272
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7273
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7275
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7277
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7276
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7278
    [DIFFICULTY_NORMAL][TRAINER_3AD97475] =
    {
#line 7279
        .trainerName = _("3AD97475"),
#line 7280
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7281
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7283
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7285
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7284
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7286
    [DIFFICULTY_NORMAL][TRAINER_3AEE4974] =
    {
#line 7287
        .trainerName = _("3AEE4974"),
#line 7288
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7289
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7291
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7293
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7292
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7294
    [DIFFICULTY_NORMAL][TRAINER_3BAF0C60] =
    {
#line 7295
        .trainerName = _("3BAF0C60"),
#line 7296
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7297
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7299
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7301
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7300
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7302
    [DIFFICULTY_NORMAL][TRAINER_3BDED445] =
    {
#line 7303
        .trainerName = _("3BDED445"),
#line 7304
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7305
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7307
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7309
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7308
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7310
    [DIFFICULTY_NORMAL][TRAINER_3C621048] =
    {
#line 7311
        .trainerName = _("3C621048"),
#line 7312
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7313
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7315
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7317
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7316
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7318
    [DIFFICULTY_NORMAL][TRAINER_3C74DAE2] =
    {
#line 7319
        .trainerName = _("3C74DAE2"),
#line 7320
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7321
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7323
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7325
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7324
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7326
    [DIFFICULTY_NORMAL][TRAINER_3C7AC359] =
    {
#line 7327
        .trainerName = _("3C7AC359"),
#line 7328
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7329
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7331
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7333
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7332
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7334
    [DIFFICULTY_NORMAL][TRAINER_3CDE5F9E] =
    {
#line 7335
        .trainerName = _("3CDE5F9E"),
#line 7336
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7337
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7339
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7341
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7340
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7342
    [DIFFICULTY_NORMAL][TRAINER_3CECE368] =
    {
#line 7343
        .trainerName = _("3CECE368"),
#line 7344
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7345
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7347
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7349
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7348
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7350
    [DIFFICULTY_NORMAL][TRAINER_3CFF3841] =
    {
#line 7351
        .trainerName = _("3CFF3841"),
#line 7352
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7353
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7355
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7357
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7356
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7358
    [DIFFICULTY_NORMAL][TRAINER_3D502E2F] =
    {
#line 7359
        .trainerName = _("3D502E2F"),
#line 7360
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7361
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7363
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7365
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7364
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7366
    [DIFFICULTY_NORMAL][TRAINER_3D7FDE57] =
    {
#line 7367
        .trainerName = _("3D7FDE57"),
#line 7368
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7369
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7371
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7373
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7372
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7374
    [DIFFICULTY_NORMAL][TRAINER_3DCD0BBC] =
    {
#line 7375
        .trainerName = _("3DCD0BBC"),
#line 7376
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7377
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7379
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7381
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7380
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7382
    [DIFFICULTY_NORMAL][TRAINER_3E17924C] =
    {
#line 7383
        .trainerName = _("3E17924C"),
#line 7384
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7385
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7387
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7389
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7388
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7390
    [DIFFICULTY_NORMAL][TRAINER_3EB6FA04] =
    {
#line 7391
        .trainerName = _("3EB6FA04"),
#line 7392
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7393
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7395
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7397
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7396
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7398
    [DIFFICULTY_NORMAL][TRAINER_3EFCF1C8] =
    {
#line 7399
        .trainerName = _("3EFCF1C8"),
#line 7400
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7401
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7403
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7405
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7404
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7406
    [DIFFICULTY_NORMAL][TRAINER_3F0BF52E] =
    {
#line 7407
        .trainerName = _("3F0BF52E"),
#line 7408
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7409
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7411
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7413
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7412
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7414
    [DIFFICULTY_NORMAL][TRAINER_4000C8A0] =
    {
#line 7415
        .trainerName = _("4000C8A0"),
#line 7416
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7417
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7419
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7421
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7420
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7422
    [DIFFICULTY_NORMAL][TRAINER_403D932D] =
    {
#line 7423
        .trainerName = _("403D932D"),
#line 7424
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7425
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7427
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7429
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7428
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7430
    [DIFFICULTY_NORMAL][TRAINER_408862C4] =
    {
#line 7431
        .trainerName = _("408862C4"),
#line 7432
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7433
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7435
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7437
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7436
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7438
    [DIFFICULTY_NORMAL][TRAINER_419282AD] =
    {
#line 7439
        .trainerName = _("419282AD"),
#line 7440
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7441
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7443
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7445
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7444
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7446
    [DIFFICULTY_NORMAL][TRAINER_419FCBAE] =
    {
#line 7447
        .trainerName = _("419FCBAE"),
#line 7448
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7449
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7451
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7453
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7452
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7454
    [DIFFICULTY_NORMAL][TRAINER_41B8591B] =
    {
#line 7455
        .trainerName = _("41B8591B"),
#line 7456
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7457
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7459
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7461
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7460
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7462
    [DIFFICULTY_NORMAL][TRAINER_41DCF7BA] =
    {
#line 7463
        .trainerName = _("41DCF7BA"),
#line 7464
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7465
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7467
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7469
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7468
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7470
    [DIFFICULTY_NORMAL][TRAINER_4227B911] =
    {
#line 7471
        .trainerName = _("4227B911"),
#line 7472
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7473
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7475
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7477
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7476
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7478
    [DIFFICULTY_NORMAL][TRAINER_4239B726] =
    {
#line 7479
        .trainerName = _("4239B726"),
#line 7480
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7481
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7483
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7485
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7484
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7486
    [DIFFICULTY_NORMAL][TRAINER_42BC1D70] =
    {
#line 7487
        .trainerName = _("42BC1D70"),
#line 7488
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7489
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7491
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7493
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7492
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7494
    [DIFFICULTY_NORMAL][TRAINER_42BE3E94] =
    {
#line 7495
        .trainerName = _("42BE3E94"),
#line 7496
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7497
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7499
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7501
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7500
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7502
    [DIFFICULTY_NORMAL][TRAINER_42C68371] =
    {
#line 7503
        .trainerName = _("42C68371"),
#line 7504
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7505
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7507
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7509
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7508
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7510
    [DIFFICULTY_NORMAL][TRAINER_432F34FA] =
    {
#line 7511
        .trainerName = _("432F34FA"),
#line 7512
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7513
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7515
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7517
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7516
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7518
    [DIFFICULTY_NORMAL][TRAINER_437E553A] =
    {
#line 7519
        .trainerName = _("437E553A"),
#line 7520
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7521
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7523
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7525
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7524
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7526
    [DIFFICULTY_NORMAL][TRAINER_4394141C] =
    {
#line 7527
        .trainerName = _("4394141C"),
#line 7528
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7529
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7531
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7533
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7532
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7534
    [DIFFICULTY_NORMAL][TRAINER_43B111AD] =
    {
#line 7535
        .trainerName = _("43B111AD"),
#line 7536
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7537
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7539
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7541
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7540
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7542
    [DIFFICULTY_NORMAL][TRAINER_43B30B5D] =
    {
#line 7543
        .trainerName = _("43B30B5D"),
#line 7544
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7545
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7547
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7549
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7548
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7550
    [DIFFICULTY_NORMAL][TRAINER_43D6557C] =
    {
#line 7551
        .trainerName = _("43D6557C"),
#line 7552
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7553
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7555
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7557
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7556
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7558
    [DIFFICULTY_NORMAL][TRAINER_44251BF9] =
    {
#line 7559
        .trainerName = _("44251BF9"),
#line 7560
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7561
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7563
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7565
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7564
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7566
    [DIFFICULTY_NORMAL][TRAINER_44D28B98] =
    {
#line 7567
        .trainerName = _("44D28B98"),
#line 7568
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7569
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7571
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7573
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7572
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7574
    [DIFFICULTY_NORMAL][TRAINER_44E68738] =
    {
#line 7575
        .trainerName = _("44E68738"),
#line 7576
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7577
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7579
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7581
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7580
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7582
    [DIFFICULTY_NORMAL][TRAINER_44F86666] =
    {
#line 7583
        .trainerName = _("44F86666"),
#line 7584
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7585
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7587
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7589
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7588
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7590
    [DIFFICULTY_NORMAL][TRAINER_458C3B90] =
    {
#line 7591
        .trainerName = _("458C3B90"),
#line 7592
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7593
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7595
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7597
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7596
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7598
    [DIFFICULTY_NORMAL][TRAINER_45CBA787] =
    {
#line 7599
        .trainerName = _("45CBA787"),
#line 7600
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7601
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7603
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7605
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7604
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7606
    [DIFFICULTY_NORMAL][TRAINER_45E5EB22] =
    {
#line 7607
        .trainerName = _("45E5EB22"),
#line 7608
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7609
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7611
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7613
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7612
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7614
    [DIFFICULTY_NORMAL][TRAINER_45ECBA80] =
    {
#line 7615
        .trainerName = _("45ECBA80"),
#line 7616
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7617
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7619
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7621
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7620
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7622
    [DIFFICULTY_NORMAL][TRAINER_460AB144] =
    {
#line 7623
        .trainerName = _("460AB144"),
#line 7624
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7625
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7627
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7629
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7628
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7630
    [DIFFICULTY_NORMAL][TRAINER_46169EA5] =
    {
#line 7631
        .trainerName = _("46169EA5"),
#line 7632
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7633
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7635
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7637
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7636
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7638
    [DIFFICULTY_NORMAL][TRAINER_464C4C44] =
    {
#line 7639
        .trainerName = _("464C4C44"),
#line 7640
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7641
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7643
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7645
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7644
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7646
    [DIFFICULTY_NORMAL][TRAINER_473EE9DE] =
    {
#line 7647
        .trainerName = _("473EE9DE"),
#line 7648
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7649
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7651
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7653
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7652
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7654
    [DIFFICULTY_NORMAL][TRAINER_4787A98D] =
    {
#line 7655
        .trainerName = _("4787A98D"),
#line 7656
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7657
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7659
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7661
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7660
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7662
    [DIFFICULTY_NORMAL][TRAINER_479BBFEB] =
    {
#line 7663
        .trainerName = _("479BBFEB"),
#line 7664
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7665
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7667
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7669
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7668
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7670
    [DIFFICULTY_NORMAL][TRAINER_47EACF7E] =
    {
#line 7671
        .trainerName = _("47EACF7E"),
#line 7672
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7673
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7675
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7677
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7676
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7678
    [DIFFICULTY_NORMAL][TRAINER_4848801D] =
    {
#line 7679
        .trainerName = _("4848801D"),
#line 7680
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7681
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7683
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7685
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7684
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7686
    [DIFFICULTY_NORMAL][TRAINER_487BEC6D] =
    {
#line 7687
        .trainerName = _("487BEC6D"),
#line 7688
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7689
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7691
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7693
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7692
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7694
    [DIFFICULTY_NORMAL][TRAINER_492E0A66] =
    {
#line 7695
        .trainerName = _("492E0A66"),
#line 7696
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7697
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7699
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7701
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7700
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7702
    [DIFFICULTY_NORMAL][TRAINER_494ECB35] =
    {
#line 7703
        .trainerName = _("494ECB35"),
#line 7704
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7705
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7707
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7709
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7708
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7710
    [DIFFICULTY_NORMAL][TRAINER_494F5379] =
    {
#line 7711
        .trainerName = _("494F5379"),
#line 7712
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7713
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7715
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7717
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7716
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7718
    [DIFFICULTY_NORMAL][TRAINER_49805D55] =
    {
#line 7719
        .trainerName = _("49805D55"),
#line 7720
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7721
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7723
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7725
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7724
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7726
    [DIFFICULTY_NORMAL][TRAINER_49EA8A40] =
    {
#line 7727
        .trainerName = _("49EA8A40"),
#line 7728
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7729
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7731
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7733
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7732
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7734
    [DIFFICULTY_NORMAL][TRAINER_4A323E4A] =
    {
#line 7735
        .trainerName = _("4A323E4A"),
#line 7736
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7737
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7739
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7741
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7740
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7742
    [DIFFICULTY_NORMAL][TRAINER_4A3EB696] =
    {
#line 7743
        .trainerName = _("4A3EB696"),
#line 7744
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7745
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7747
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7749
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7748
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7750
    [DIFFICULTY_NORMAL][TRAINER_4ABDB43A] =
    {
#line 7751
        .trainerName = _("4ABDB43A"),
#line 7752
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7753
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7755
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7757
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7756
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7758
    [DIFFICULTY_NORMAL][TRAINER_4AD6DB47] =
    {
#line 7759
        .trainerName = _("4AD6DB47"),
#line 7760
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7761
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7763
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7765
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7764
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7766
    [DIFFICULTY_NORMAL][TRAINER_4AF51B8A] =
    {
#line 7767
        .trainerName = _("4AF51B8A"),
#line 7768
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7769
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7771
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7773
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7772
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7774
    [DIFFICULTY_NORMAL][TRAINER_4B2BC403] =
    {
#line 7775
        .trainerName = _("4B2BC403"),
#line 7776
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7777
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7779
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7781
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7780
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7782
    [DIFFICULTY_NORMAL][TRAINER_4B3B0356] =
    {
#line 7783
        .trainerName = _("4B3B0356"),
#line 7784
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7785
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7787
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7789
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7788
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7790
    [DIFFICULTY_NORMAL][TRAINER_4B431569] =
    {
#line 7791
        .trainerName = _("4B431569"),
#line 7792
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7793
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7795
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7797
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7796
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7798
    [DIFFICULTY_NORMAL][TRAINER_4B5B4954] =
    {
#line 7799
        .trainerName = _("4B5B4954"),
#line 7800
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7801
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7803
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7805
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7804
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7806
    [DIFFICULTY_NORMAL][TRAINER_4C2D23EC] =
    {
#line 7807
        .trainerName = _("4C2D23EC"),
#line 7808
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7809
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7811
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7813
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7812
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7814
    [DIFFICULTY_NORMAL][TRAINER_4CE97031] =
    {
#line 7815
        .trainerName = _("4CE97031"),
#line 7816
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7817
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7819
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7821
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7820
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7822
    [DIFFICULTY_NORMAL][TRAINER_4CF43F23] =
    {
#line 7823
        .trainerName = _("4CF43F23"),
#line 7824
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7825
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7827
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7829
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7828
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7830
    [DIFFICULTY_NORMAL][TRAINER_4D8F9D46] =
    {
#line 7831
        .trainerName = _("4D8F9D46"),
#line 7832
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7833
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7835
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7837
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7836
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7838
    [DIFFICULTY_NORMAL][TRAINER_4D98F6C4] =
    {
#line 7839
        .trainerName = _("4D98F6C4"),
#line 7840
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7841
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7843
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7845
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7844
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7846
    [DIFFICULTY_NORMAL][TRAINER_4E072263] =
    {
#line 7847
        .trainerName = _("4E072263"),
#line 7848
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7849
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7851
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7853
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7852
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7854
    [DIFFICULTY_NORMAL][TRAINER_4E0C1EFE] =
    {
#line 7855
        .trainerName = _("4E0C1EFE"),
#line 7856
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7857
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7859
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7861
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7860
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7862
    [DIFFICULTY_NORMAL][TRAINER_4E226A6E] =
    {
#line 7863
        .trainerName = _("4E226A6E"),
#line 7864
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7865
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7867
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7869
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7868
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7870
    [DIFFICULTY_NORMAL][TRAINER_4E5AAFAE] =
    {
#line 7871
        .trainerName = _("4E5AAFAE"),
#line 7872
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7873
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7875
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7877
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7876
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7878
    [DIFFICULTY_NORMAL][TRAINER_4F10DCA9] =
    {
#line 7879
        .trainerName = _("4F10DCA9"),
#line 7880
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7881
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7883
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7885
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7884
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7886
    [DIFFICULTY_NORMAL][TRAINER_50AE78E5] =
    {
#line 7887
        .trainerName = _("50AE78E5"),
#line 7888
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7889
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7891
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7893
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7892
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7894
    [DIFFICULTY_NORMAL][TRAINER_513A43EE] =
    {
#line 7895
        .trainerName = _("513A43EE"),
#line 7896
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7897
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7899
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7901
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7900
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7902
    [DIFFICULTY_NORMAL][TRAINER_51A32DCA] =
    {
#line 7903
        .trainerName = _("51A32DCA"),
#line 7904
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7905
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7907
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7909
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7908
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7910
    [DIFFICULTY_NORMAL][TRAINER_51F6B834] =
    {
#line 7911
        .trainerName = _("51F6B834"),
#line 7912
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7913
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7915
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7917
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7916
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7918
    [DIFFICULTY_NORMAL][TRAINER_5209EDF0] =
    {
#line 7919
        .trainerName = _("5209EDF0"),
#line 7920
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7921
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7923
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7925
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7924
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7926
    [DIFFICULTY_NORMAL][TRAINER_52CFC159] =
    {
#line 7927
        .trainerName = _("52CFC159"),
#line 7928
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7929
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7931
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7933
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7932
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7934
    [DIFFICULTY_NORMAL][TRAINER_538D052D] =
    {
#line 7935
        .trainerName = _("538D052D"),
#line 7936
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7937
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7939
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7941
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7940
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7942
    [DIFFICULTY_NORMAL][TRAINER_53A1A61A] =
    {
#line 7943
        .trainerName = _("53A1A61A"),
#line 7944
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7945
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7947
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7949
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7948
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7950
    [DIFFICULTY_NORMAL][TRAINER_53B06C7B] =
    {
#line 7951
        .trainerName = _("53B06C7B"),
#line 7952
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7953
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7955
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7957
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7956
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7958
    [DIFFICULTY_NORMAL][TRAINER_54110A38] =
    {
#line 7959
        .trainerName = _("54110A38"),
#line 7960
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7961
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7963
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7965
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7964
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7966
    [DIFFICULTY_NORMAL][TRAINER_549792BA] =
    {
#line 7967
        .trainerName = _("549792BA"),
#line 7968
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7969
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7971
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7973
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7972
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7974
    [DIFFICULTY_NORMAL][TRAINER_54BAC2DA] =
    {
#line 7975
        .trainerName = _("54BAC2DA"),
#line 7976
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7977
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7979
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7981
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7980
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7982
    [DIFFICULTY_NORMAL][TRAINER_54F170BE] =
    {
#line 7983
        .trainerName = _("54F170BE"),
#line 7984
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7985
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7987
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7989
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7988
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7990
    [DIFFICULTY_NORMAL][TRAINER_558F80F9] =
    {
#line 7991
        .trainerName = _("558F80F9"),
#line 7992
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 7993
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7995
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7997
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7996
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7998
    [DIFFICULTY_NORMAL][TRAINER_55CA00A1] =
    {
#line 7999
        .trainerName = _("55CA00A1"),
#line 8000
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8001
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8003
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8005
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8004
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8006
    [DIFFICULTY_NORMAL][TRAINER_55D0BEAA] =
    {
#line 8007
        .trainerName = _("55D0BEAA"),
#line 8008
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8009
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8011
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8013
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8012
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8014
    [DIFFICULTY_NORMAL][TRAINER_55D90FA8] =
    {
#line 8015
        .trainerName = _("55D90FA8"),
#line 8016
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8017
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8019
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8021
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8020
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8022
    [DIFFICULTY_NORMAL][TRAINER_55EBF949] =
    {
#line 8023
        .trainerName = _("55EBF949"),
#line 8024
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8025
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8027
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8029
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8028
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8030
    [DIFFICULTY_NORMAL][TRAINER_565DE3C4] =
    {
#line 8031
        .trainerName = _("565DE3C4"),
#line 8032
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8033
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8035
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8037
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8036
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8038
    [DIFFICULTY_NORMAL][TRAINER_56775C71] =
    {
#line 8039
        .trainerName = _("56775C71"),
#line 8040
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8041
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8043
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8045
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8044
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8046
    [DIFFICULTY_NORMAL][TRAINER_56C1FE08] =
    {
#line 8047
        .trainerName = _("56C1FE08"),
#line 8048
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8049
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8051
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8053
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8052
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8054
    [DIFFICULTY_NORMAL][TRAINER_56E6EFAA] =
    {
#line 8055
        .trainerName = _("56E6EFAA"),
#line 8056
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8057
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8059
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8061
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8060
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8062
    [DIFFICULTY_NORMAL][TRAINER_57E254F5] =
    {
#line 8063
        .trainerName = _("57E254F5"),
#line 8064
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8065
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8067
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8069
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8068
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8070
    [DIFFICULTY_NORMAL][TRAINER_57E7E83A] =
    {
#line 8071
        .trainerName = _("57E7E83A"),
#line 8072
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8073
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8075
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8077
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8076
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8078
    [DIFFICULTY_NORMAL][TRAINER_5819E497] =
    {
#line 8079
        .trainerName = _("5819E497"),
#line 8080
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8081
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8083
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8085
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8084
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8086
    [DIFFICULTY_NORMAL][TRAINER_58A6A51E] =
    {
#line 8087
        .trainerName = _("58A6A51E"),
#line 8088
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8089
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8091
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8093
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8092
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8094
    [DIFFICULTY_NORMAL][TRAINER_58BEBECC] =
    {
#line 8095
        .trainerName = _("58BEBECC"),
#line 8096
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8097
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8099
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8101
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8100
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8102
    [DIFFICULTY_NORMAL][TRAINER_58F43966] =
    {
#line 8103
        .trainerName = _("58F43966"),
#line 8104
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8105
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8107
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8109
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8108
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8110
    [DIFFICULTY_NORMAL][TRAINER_59592DE4] =
    {
#line 8111
        .trainerName = _("59592DE4"),
#line 8112
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8113
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8115
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8117
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8116
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8118
    [DIFFICULTY_NORMAL][TRAINER_598585C1] =
    {
#line 8119
        .trainerName = _("598585C1"),
#line 8120
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8121
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8123
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8125
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8124
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8126
    [DIFFICULTY_NORMAL][TRAINER_59981F0D] =
    {
#line 8127
        .trainerName = _("59981F0D"),
#line 8128
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8129
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8131
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8133
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8132
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8134
    [DIFFICULTY_NORMAL][TRAINER_59E335AB] =
    {
#line 8135
        .trainerName = _("59E335AB"),
#line 8136
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8137
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8139
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8141
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8140
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8142
    [DIFFICULTY_NORMAL][TRAINER_59FFFCED] =
    {
#line 8143
        .trainerName = _("59FFFCED"),
#line 8144
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8145
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8147
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8149
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8148
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8150
    [DIFFICULTY_NORMAL][TRAINER_5ABF4FA4] =
    {
#line 8151
        .trainerName = _("5ABF4FA4"),
#line 8152
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8153
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8155
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8157
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8156
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8158
    [DIFFICULTY_NORMAL][TRAINER_5AC61FE5] =
    {
#line 8159
        .trainerName = _("5AC61FE5"),
#line 8160
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8161
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8163
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8165
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8164
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8166
    [DIFFICULTY_NORMAL][TRAINER_5AD29FF8] =
    {
#line 8167
        .trainerName = _("5AD29FF8"),
#line 8168
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8169
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8171
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8173
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8172
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8174
    [DIFFICULTY_NORMAL][TRAINER_5AD4C218] =
    {
#line 8175
        .trainerName = _("5AD4C218"),
#line 8176
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8177
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8179
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8181
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8180
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8182
    [DIFFICULTY_NORMAL][TRAINER_5B5F6AE8] =
    {
#line 8183
        .trainerName = _("5B5F6AE8"),
#line 8184
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8185
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8187
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8189
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8188
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8190
    [DIFFICULTY_NORMAL][TRAINER_5B6304FF] =
    {
#line 8191
        .trainerName = _("5B6304FF"),
#line 8192
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8193
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8195
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8197
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8196
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8198
    [DIFFICULTY_NORMAL][TRAINER_5B75B30F] =
    {
#line 8199
        .trainerName = _("5B75B30F"),
#line 8200
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8201
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8203
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8205
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8204
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8206
    [DIFFICULTY_NORMAL][TRAINER_5B983361] =
    {
#line 8207
        .trainerName = _("5B983361"),
#line 8208
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8209
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8211
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8213
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8212
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8214
    [DIFFICULTY_NORMAL][TRAINER_5BD8EA81] =
    {
#line 8215
        .trainerName = _("5BD8EA81"),
#line 8216
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8217
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8219
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8221
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8220
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8222
    [DIFFICULTY_NORMAL][TRAINER_5C315841] =
    {
#line 8223
        .trainerName = _("5C315841"),
#line 8224
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8225
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8227
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8229
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8228
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8230
    [DIFFICULTY_NORMAL][TRAINER_5C573C11] =
    {
#line 8231
        .trainerName = _("5C573C11"),
#line 8232
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8233
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8235
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8237
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8236
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8238
    [DIFFICULTY_NORMAL][TRAINER_5CAB03DD] =
    {
#line 8239
        .trainerName = _("5CAB03DD"),
#line 8240
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8241
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8243
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8245
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8244
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8246
    [DIFFICULTY_NORMAL][TRAINER_5CBDB116] =
    {
#line 8247
        .trainerName = _("5CBDB116"),
#line 8248
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8249
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8251
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8253
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8252
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8254
    [DIFFICULTY_NORMAL][TRAINER_5D0C4B8F] =
    {
#line 8255
        .trainerName = _("5D0C4B8F"),
#line 8256
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8257
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8259
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8261
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8260
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8262
    [DIFFICULTY_NORMAL][TRAINER_5D2CCD41] =
    {
#line 8263
        .trainerName = _("5D2CCD41"),
#line 8264
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8265
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8267
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8269
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8268
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8270
    [DIFFICULTY_NORMAL][TRAINER_5D5F491E] =
    {
#line 8271
        .trainerName = _("5D5F491E"),
#line 8272
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8273
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8275
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8277
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8276
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8278
    [DIFFICULTY_NORMAL][TRAINER_5D81D8F9] =
    {
#line 8279
        .trainerName = _("5D81D8F9"),
#line 8280
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8281
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8283
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8285
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8284
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8286
    [DIFFICULTY_NORMAL][TRAINER_5D86E702] =
    {
#line 8287
        .trainerName = _("5D86E702"),
#line 8288
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8289
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8291
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8293
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8292
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8294
    [DIFFICULTY_NORMAL][TRAINER_5D9ABC58] =
    {
#line 8295
        .trainerName = _("5D9ABC58"),
#line 8296
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8297
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8299
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8301
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8300
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8302
    [DIFFICULTY_NORMAL][TRAINER_5DA9F2AE] =
    {
#line 8303
        .trainerName = _("5DA9F2AE"),
#line 8304
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8305
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8307
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8309
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8308
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8310
    [DIFFICULTY_NORMAL][TRAINER_5E13316C] =
    {
#line 8311
        .trainerName = _("5E13316C"),
#line 8312
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8313
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8315
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8317
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8316
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8318
    [DIFFICULTY_NORMAL][TRAINER_5EA7A638] =
    {
#line 8319
        .trainerName = _("5EA7A638"),
#line 8320
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8321
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8323
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8325
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8324
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8326
    [DIFFICULTY_NORMAL][TRAINER_5EB4C98F] =
    {
#line 8327
        .trainerName = _("5EB4C98F"),
#line 8328
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8329
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8331
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8333
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8332
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8334
    [DIFFICULTY_NORMAL][TRAINER_5EF71DA1] =
    {
#line 8335
        .trainerName = _("5EF71DA1"),
#line 8336
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8337
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8339
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8341
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8340
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8342
    [DIFFICULTY_NORMAL][TRAINER_5F858802] =
    {
#line 8343
        .trainerName = _("5F858802"),
#line 8344
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8345
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8347
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8349
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8348
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8350
    [DIFFICULTY_NORMAL][TRAINER_5FA4C80F] =
    {
#line 8351
        .trainerName = _("5FA4C80F"),
#line 8352
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8353
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8355
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8357
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8356
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8358
    [DIFFICULTY_NORMAL][TRAINER_5FD48FB2] =
    {
#line 8359
        .trainerName = _("5FD48FB2"),
#line 8360
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8361
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8363
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8365
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8364
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8366
    [DIFFICULTY_NORMAL][TRAINER_5FF1DEC5] =
    {
#line 8367
        .trainerName = _("5FF1DEC5"),
#line 8368
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8369
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8371
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8373
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8372
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8374
    [DIFFICULTY_NORMAL][TRAINER_6016A968] =
    {
#line 8375
        .trainerName = _("6016A968"),
#line 8376
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8377
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8379
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8381
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8380
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8382
    [DIFFICULTY_NORMAL][TRAINER_6058C03B] =
    {
#line 8383
        .trainerName = _("6058C03B"),
#line 8384
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8385
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8387
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8389
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8388
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8390
    [DIFFICULTY_NORMAL][TRAINER_60C3BD24] =
    {
#line 8391
        .trainerName = _("60C3BD24"),
#line 8392
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8393
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8395
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8397
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8396
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8398
    [DIFFICULTY_NORMAL][TRAINER_60C56554] =
    {
#line 8399
        .trainerName = _("60C56554"),
#line 8400
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8401
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8403
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8405
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8404
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8406
    [DIFFICULTY_NORMAL][TRAINER_60D66B86] =
    {
#line 8407
        .trainerName = _("60D66B86"),
#line 8408
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8409
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8411
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8413
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8412
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8414
    [DIFFICULTY_NORMAL][TRAINER_6102A0FC] =
    {
#line 8415
        .trainerName = _("6102A0FC"),
#line 8416
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8417
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8419
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8421
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8420
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8422
    [DIFFICULTY_NORMAL][TRAINER_61E76999] =
    {
#line 8423
        .trainerName = _("61E76999"),
#line 8424
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8425
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8427
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8429
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8428
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8430
    [DIFFICULTY_NORMAL][TRAINER_626AECE8] =
    {
#line 8431
        .trainerName = _("626AECE8"),
#line 8432
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8433
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8435
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8437
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8436
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8438
    [DIFFICULTY_NORMAL][TRAINER_62851FFB] =
    {
#line 8439
        .trainerName = _("62851FFB"),
#line 8440
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8441
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8443
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8445
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8444
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8446
    [DIFFICULTY_NORMAL][TRAINER_62C33409] =
    {
#line 8447
        .trainerName = _("62C33409"),
#line 8448
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8449
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8451
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8453
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8452
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8454
    [DIFFICULTY_NORMAL][TRAINER_62D0F875] =
    {
#line 8455
        .trainerName = _("62D0F875"),
#line 8456
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8457
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8459
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8461
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8460
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8462
    [DIFFICULTY_NORMAL][TRAINER_63409A54] =
    {
#line 8463
        .trainerName = _("63409A54"),
#line 8464
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8465
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8467
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8469
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8468
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8470
    [DIFFICULTY_NORMAL][TRAINER_6397B964] =
    {
#line 8471
        .trainerName = _("6397B964"),
#line 8472
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8473
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8475
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8477
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8476
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8478
    [DIFFICULTY_NORMAL][TRAINER_63DB05B6] =
    {
#line 8479
        .trainerName = _("63DB05B6"),
#line 8480
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8481
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8483
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8485
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8484
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8486
    [DIFFICULTY_NORMAL][TRAINER_63DC02C9] =
    {
#line 8487
        .trainerName = _("63DC02C9"),
#line 8488
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8489
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8491
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8493
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8492
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8494
    [DIFFICULTY_NORMAL][TRAINER_6439D44C] =
    {
#line 8495
        .trainerName = _("6439D44C"),
#line 8496
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8497
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8499
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8501
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8500
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8502
    [DIFFICULTY_NORMAL][TRAINER_64E30596] =
    {
#line 8503
        .trainerName = _("64E30596"),
#line 8504
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8505
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8507
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8509
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8508
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8510
    [DIFFICULTY_NORMAL][TRAINER_6566F645] =
    {
#line 8511
        .trainerName = _("6566F645"),
#line 8512
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8513
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8515
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8517
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8516
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8518
    [DIFFICULTY_NORMAL][TRAINER_656A39C8] =
    {
#line 8519
        .trainerName = _("656A39C8"),
#line 8520
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8521
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8523
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8525
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8524
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8526
    [DIFFICULTY_NORMAL][TRAINER_656EC067] =
    {
#line 8527
        .trainerName = _("656EC067"),
#line 8528
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8529
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8531
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8533
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8532
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8534
    [DIFFICULTY_NORMAL][TRAINER_65CE4F87] =
    {
#line 8535
        .trainerName = _("65CE4F87"),
#line 8536
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8537
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8539
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8541
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8540
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8542
    [DIFFICULTY_NORMAL][TRAINER_662EBAAA] =
    {
#line 8543
        .trainerName = _("662EBAAA"),
#line 8544
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8545
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8547
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8549
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8548
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8550
    [DIFFICULTY_NORMAL][TRAINER_66531C74] =
    {
#line 8551
        .trainerName = _("66531C74"),
#line 8552
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8553
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8555
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8557
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8556
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8558
    [DIFFICULTY_NORMAL][TRAINER_66B16F22] =
    {
#line 8559
        .trainerName = _("66B16F22"),
#line 8560
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8561
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8563
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8565
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8564
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8566
    [DIFFICULTY_NORMAL][TRAINER_66D26AEC] =
    {
#line 8567
        .trainerName = _("66D26AEC"),
#line 8568
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8569
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8571
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8573
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8572
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8574
    [DIFFICULTY_NORMAL][TRAINER_675DA518] =
    {
#line 8575
        .trainerName = _("675DA518"),
#line 8576
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8577
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8579
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8581
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8580
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8582
    [DIFFICULTY_NORMAL][TRAINER_677A22D7] =
    {
#line 8583
        .trainerName = _("677A22D7"),
#line 8584
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8585
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8587
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8589
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8588
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8590
    [DIFFICULTY_NORMAL][TRAINER_6792B394] =
    {
#line 8591
        .trainerName = _("6792B394"),
#line 8592
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8593
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8595
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8597
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8596
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8598
    [DIFFICULTY_NORMAL][TRAINER_683A2305] =
    {
#line 8599
        .trainerName = _("683A2305"),
#line 8600
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8601
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8603
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8605
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8604
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8606
    [DIFFICULTY_NORMAL][TRAINER_692DD7CF] =
    {
#line 8607
        .trainerName = _("692DD7CF"),
#line 8608
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8609
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8611
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8613
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8612
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8614
    [DIFFICULTY_NORMAL][TRAINER_698BB117] =
    {
#line 8615
        .trainerName = _("698BB117"),
#line 8616
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8617
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8619
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8621
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8620
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8622
    [DIFFICULTY_NORMAL][TRAINER_69EE8132] =
    {
#line 8623
        .trainerName = _("69EE8132"),
#line 8624
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8625
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8627
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8629
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8628
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8630
    [DIFFICULTY_NORMAL][TRAINER_6A35EE35] =
    {
#line 8631
        .trainerName = _("6A35EE35"),
#line 8632
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8633
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8635
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8637
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8636
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8638
    [DIFFICULTY_NORMAL][TRAINER_6A3930E6] =
    {
#line 8639
        .trainerName = _("6A3930E6"),
#line 8640
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8641
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8643
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8645
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8644
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8646
    [DIFFICULTY_NORMAL][TRAINER_6A48F28F] =
    {
#line 8647
        .trainerName = _("6A48F28F"),
#line 8648
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8649
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8651
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8653
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8652
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8654
    [DIFFICULTY_NORMAL][TRAINER_6A8EEC78] =
    {
#line 8655
        .trainerName = _("6A8EEC78"),
#line 8656
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8657
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8659
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8661
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8660
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8662
    [DIFFICULTY_NORMAL][TRAINER_6AABC7EA] =
    {
#line 8663
        .trainerName = _("6AABC7EA"),
#line 8664
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8665
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8667
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8669
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8668
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8670
    [DIFFICULTY_NORMAL][TRAINER_6ABE3EC1] =
    {
#line 8671
        .trainerName = _("6ABE3EC1"),
#line 8672
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8673
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8675
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8677
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8676
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8678
    [DIFFICULTY_NORMAL][TRAINER_6B14C259] =
    {
#line 8679
        .trainerName = _("6B14C259"),
#line 8680
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8681
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8683
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8685
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8684
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8686
    [DIFFICULTY_NORMAL][TRAINER_6BEEE6BE] =
    {
#line 8687
        .trainerName = _("6BEEE6BE"),
#line 8688
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8689
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8691
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8693
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8692
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8694
    [DIFFICULTY_NORMAL][TRAINER_6C7736F9] =
    {
#line 8695
        .trainerName = _("6C7736F9"),
#line 8696
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8697
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8699
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8701
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8700
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8702
    [DIFFICULTY_NORMAL][TRAINER_6CC913A2] =
    {
#line 8703
        .trainerName = _("6CC913A2"),
#line 8704
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8705
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8707
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8709
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8708
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8710
    [DIFFICULTY_NORMAL][TRAINER_6D45549A] =
    {
#line 8711
        .trainerName = _("6D45549A"),
#line 8712
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8713
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8715
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8717
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8716
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8718
    [DIFFICULTY_NORMAL][TRAINER_6E1E82B2] =
    {
#line 8719
        .trainerName = _("6E1E82B2"),
#line 8720
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8721
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8723
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8725
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8724
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8726
    [DIFFICULTY_NORMAL][TRAINER_6E663040] =
    {
#line 8727
        .trainerName = _("6E663040"),
#line 8728
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8729
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8731
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8733
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8732
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8734
    [DIFFICULTY_NORMAL][TRAINER_6ED2C120] =
    {
#line 8735
        .trainerName = _("6ED2C120"),
#line 8736
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8737
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8739
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8741
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8740
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8742
    [DIFFICULTY_NORMAL][TRAINER_6F5C8078] =
    {
#line 8743
        .trainerName = _("6F5C8078"),
#line 8744
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8745
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8747
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8749
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8748
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8750
    [DIFFICULTY_NORMAL][TRAINER_6F5E9CF9] =
    {
#line 8751
        .trainerName = _("6F5E9CF9"),
#line 8752
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8753
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8755
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8757
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8756
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8758
    [DIFFICULTY_NORMAL][TRAINER_6FC24896] =
    {
#line 8759
        .trainerName = _("6FC24896"),
#line 8760
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8761
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8763
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8765
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8764
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8766
    [DIFFICULTY_NORMAL][TRAINER_6FF3213D] =
    {
#line 8767
        .trainerName = _("6FF3213D"),
#line 8768
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8769
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8771
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8773
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8772
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8774
    [DIFFICULTY_NORMAL][TRAINER_701AC24E] =
    {
#line 8775
        .trainerName = _("701AC24E"),
#line 8776
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8777
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8779
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8781
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8780
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8782
    [DIFFICULTY_NORMAL][TRAINER_703B73C4] =
    {
#line 8783
        .trainerName = _("703B73C4"),
#line 8784
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8785
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8787
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8789
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8788
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8790
    [DIFFICULTY_NORMAL][TRAINER_70C712D3] =
    {
#line 8791
        .trainerName = _("70C712D3"),
#line 8792
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8793
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8795
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8797
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8796
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8798
    [DIFFICULTY_NORMAL][TRAINER_70EAAAF5] =
    {
#line 8799
        .trainerName = _("70EAAAF5"),
#line 8800
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8801
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8803
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8805
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8804
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8806
    [DIFFICULTY_NORMAL][TRAINER_70F1A62B] =
    {
#line 8807
        .trainerName = _("70F1A62B"),
#line 8808
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8809
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8811
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8813
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8812
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8814
    [DIFFICULTY_NORMAL][TRAINER_7169C897] =
    {
#line 8815
        .trainerName = _("7169C897"),
#line 8816
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8817
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8819
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8821
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8820
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8822
    [DIFFICULTY_NORMAL][TRAINER_7178DF27] =
    {
#line 8823
        .trainerName = _("7178DF27"),
#line 8824
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8825
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8827
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8829
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8828
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8830
    [DIFFICULTY_NORMAL][TRAINER_7190E405] =
    {
#line 8831
        .trainerName = _("7190E405"),
#line 8832
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8833
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8835
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8837
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8836
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8838
    [DIFFICULTY_NORMAL][TRAINER_71CE545E] =
    {
#line 8839
        .trainerName = _("71CE545E"),
#line 8840
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8841
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8843
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8845
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8844
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8846
    [DIFFICULTY_NORMAL][TRAINER_7249425F] =
    {
#line 8847
        .trainerName = _("7249425F"),
#line 8848
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8849
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8851
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8853
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8852
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8854
    [DIFFICULTY_NORMAL][TRAINER_72641C9D] =
    {
#line 8855
        .trainerName = _("72641C9D"),
#line 8856
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8857
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8859
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8861
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8860
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8862
    [DIFFICULTY_NORMAL][TRAINER_729F2BBB] =
    {
#line 8863
        .trainerName = _("729F2BBB"),
#line 8864
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8865
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8867
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8869
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8868
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8870
    [DIFFICULTY_NORMAL][TRAINER_72F25B41] =
    {
#line 8871
        .trainerName = _("72F25B41"),
#line 8872
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8873
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8875
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8877
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8876
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8878
    [DIFFICULTY_NORMAL][TRAINER_732D4997] =
    {
#line 8879
        .trainerName = _("732D4997"),
#line 8880
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8881
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8883
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8885
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8884
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8886
    [DIFFICULTY_NORMAL][TRAINER_73A561CC] =
    {
#line 8887
        .trainerName = _("73A561CC"),
#line 8888
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8889
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8891
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8893
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8892
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8894
    [DIFFICULTY_NORMAL][TRAINER_7420DB0C] =
    {
#line 8895
        .trainerName = _("7420DB0C"),
#line 8896
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8897
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8899
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8901
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8900
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8902
    [DIFFICULTY_NORMAL][TRAINER_7435DE7C] =
    {
#line 8903
        .trainerName = _("7435DE7C"),
#line 8904
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8905
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8907
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8909
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8908
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8910
    [DIFFICULTY_NORMAL][TRAINER_75A2A667] =
    {
#line 8911
        .trainerName = _("75A2A667"),
#line 8912
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8913
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8915
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8917
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8916
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8918
    [DIFFICULTY_NORMAL][TRAINER_75D602F2] =
    {
#line 8919
        .trainerName = _("75D602F2"),
#line 8920
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8921
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8923
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8925
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8924
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8926
    [DIFFICULTY_NORMAL][TRAINER_77DDBBAF] =
    {
#line 8927
        .trainerName = _("77DDBBAF"),
#line 8928
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8929
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8931
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8933
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8932
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8934
    [DIFFICULTY_NORMAL][TRAINER_783AB388] =
    {
#line 8935
        .trainerName = _("783AB388"),
#line 8936
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8937
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8939
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8941
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8940
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8942
    [DIFFICULTY_NORMAL][TRAINER_78564BE5] =
    {
#line 8943
        .trainerName = _("78564BE5"),
#line 8944
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8945
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8947
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8949
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8948
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8950
    [DIFFICULTY_NORMAL][TRAINER_7885ECAF] =
    {
#line 8951
        .trainerName = _("7885ECAF"),
#line 8952
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8953
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8955
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8957
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8956
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8958
    [DIFFICULTY_NORMAL][TRAINER_78B73516] =
    {
#line 8959
        .trainerName = _("78B73516"),
#line 8960
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8961
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8963
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8965
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8964
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8966
    [DIFFICULTY_NORMAL][TRAINER_78BD858D] =
    {
#line 8967
        .trainerName = _("78BD858D"),
#line 8968
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8969
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8971
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8973
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8972
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8974
    [DIFFICULTY_NORMAL][TRAINER_7933DA6C] =
    {
#line 8975
        .trainerName = _("7933DA6C"),
#line 8976
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8977
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8979
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8981
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8980
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8982
    [DIFFICULTY_NORMAL][TRAINER_793992D8] =
    {
#line 8983
        .trainerName = _("793992D8"),
#line 8984
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8985
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8987
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8989
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8988
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8990
    [DIFFICULTY_NORMAL][TRAINER_797E296B] =
    {
#line 8991
        .trainerName = _("797E296B"),
#line 8992
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 8993
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8995
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8997
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8996
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8998
    [DIFFICULTY_NORMAL][TRAINER_79EF1DEB] =
    {
#line 8999
        .trainerName = _("79EF1DEB"),
#line 9000
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9001
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9003
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9005
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9004
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9006
    [DIFFICULTY_NORMAL][TRAINER_7A03677D] =
    {
#line 9007
        .trainerName = _("7A03677D"),
#line 9008
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9009
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9011
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9013
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9012
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9014
    [DIFFICULTY_NORMAL][TRAINER_7A0C086F] =
    {
#line 9015
        .trainerName = _("7A0C086F"),
#line 9016
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9017
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9019
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9021
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9020
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9022
    [DIFFICULTY_NORMAL][TRAINER_7A89C403] =
    {
#line 9023
        .trainerName = _("7A89C403"),
#line 9024
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9025
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9027
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9029
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9028
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9030
    [DIFFICULTY_NORMAL][TRAINER_7A8D30C6] =
    {
#line 9031
        .trainerName = _("7A8D30C6"),
#line 9032
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9033
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9035
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9037
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9036
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9038
    [DIFFICULTY_NORMAL][TRAINER_7ABC77C1] =
    {
#line 9039
        .trainerName = _("7ABC77C1"),
#line 9040
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9041
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9043
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9045
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9044
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9046
    [DIFFICULTY_NORMAL][TRAINER_7B5DF36F] =
    {
#line 9047
        .trainerName = _("7B5DF36F"),
#line 9048
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9049
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9051
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9053
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9052
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9054
    [DIFFICULTY_NORMAL][TRAINER_7C3BD57C] =
    {
#line 9055
        .trainerName = _("7C3BD57C"),
#line 9056
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9057
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9059
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9061
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9060
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9062
    [DIFFICULTY_NORMAL][TRAINER_7C4240E1] =
    {
#line 9063
        .trainerName = _("7C4240E1"),
#line 9064
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9065
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9067
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9069
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9068
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9070
    [DIFFICULTY_NORMAL][TRAINER_7C5056CA] =
    {
#line 9071
        .trainerName = _("7C5056CA"),
#line 9072
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9073
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9075
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9077
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9076
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9078
    [DIFFICULTY_NORMAL][TRAINER_7C8BD62F] =
    {
#line 9079
        .trainerName = _("7C8BD62F"),
#line 9080
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9081
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9083
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9085
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9084
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9086
    [DIFFICULTY_NORMAL][TRAINER_7C9308EF] =
    {
#line 9087
        .trainerName = _("7C9308EF"),
#line 9088
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9089
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9091
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9093
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9092
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9094
    [DIFFICULTY_NORMAL][TRAINER_7CAF6877] =
    {
#line 9095
        .trainerName = _("7CAF6877"),
#line 9096
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9097
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9099
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9101
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9100
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9102
    [DIFFICULTY_NORMAL][TRAINER_7CBB25EB] =
    {
#line 9103
        .trainerName = _("7CBB25EB"),
#line 9104
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9105
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9107
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9109
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9108
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9110
    [DIFFICULTY_NORMAL][TRAINER_7CD1AAE1] =
    {
#line 9111
        .trainerName = _("7CD1AAE1"),
#line 9112
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9113
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9115
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9117
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9116
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9118
    [DIFFICULTY_NORMAL][TRAINER_7D0F1751] =
    {
#line 9119
        .trainerName = _("7D0F1751"),
#line 9120
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9121
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9123
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9125
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9124
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9126
    [DIFFICULTY_NORMAL][TRAINER_7D28CB20] =
    {
#line 9127
        .trainerName = _("7D28CB20"),
#line 9128
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9129
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9131
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9133
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9132
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9134
    [DIFFICULTY_NORMAL][TRAINER_7D536E72] =
    {
#line 9135
        .trainerName = _("7D536E72"),
#line 9136
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9137
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9139
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9141
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9140
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9142
    [DIFFICULTY_NORMAL][TRAINER_7DC358C0] =
    {
#line 9143
        .trainerName = _("7DC358C0"),
#line 9144
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9145
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9147
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9149
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9148
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9150
    [DIFFICULTY_NORMAL][TRAINER_7DEC9A40] =
    {
#line 9151
        .trainerName = _("7DEC9A40"),
#line 9152
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9153
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9155
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9157
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9156
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9158
    [DIFFICULTY_NORMAL][TRAINER_7E2F7EB8] =
    {
#line 9159
        .trainerName = _("7E2F7EB8"),
#line 9160
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9161
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9163
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9165
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9164
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9166
    [DIFFICULTY_NORMAL][TRAINER_7E7CD9D3] =
    {
#line 9167
        .trainerName = _("7E7CD9D3"),
#line 9168
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9169
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9171
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9173
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9172
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9174
    [DIFFICULTY_NORMAL][TRAINER_7E8CCD84] =
    {
#line 9175
        .trainerName = _("7E8CCD84"),
#line 9176
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9177
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9179
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9181
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9180
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9182
    [DIFFICULTY_NORMAL][TRAINER_8010F97E] =
    {
#line 9183
        .trainerName = _("8010F97E"),
#line 9184
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9185
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9187
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9189
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9188
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9190
    [DIFFICULTY_NORMAL][TRAINER_805C25F0] =
    {
#line 9191
        .trainerName = _("805C25F0"),
#line 9192
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9193
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9195
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9197
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9196
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9198
    [DIFFICULTY_NORMAL][TRAINER_80941A21] =
    {
#line 9199
        .trainerName = _("80941A21"),
#line 9200
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9201
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9203
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9205
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9204
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9206
    [DIFFICULTY_NORMAL][TRAINER_80AAA333] =
    {
#line 9207
        .trainerName = _("80AAA333"),
#line 9208
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9209
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9211
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9213
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9212
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9214
    [DIFFICULTY_NORMAL][TRAINER_810A3F32] =
    {
#line 9215
        .trainerName = _("810A3F32"),
#line 9216
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9217
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9219
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9221
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9220
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9222
    [DIFFICULTY_NORMAL][TRAINER_811C7730] =
    {
#line 9223
        .trainerName = _("811C7730"),
#line 9224
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9225
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9227
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9229
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9228
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9230
    [DIFFICULTY_NORMAL][TRAINER_814D0113] =
    {
#line 9231
        .trainerName = _("814D0113"),
#line 9232
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9233
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9235
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9237
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9236
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9238
    [DIFFICULTY_NORMAL][TRAINER_822DC7A8] =
    {
#line 9239
        .trainerName = _("822DC7A8"),
#line 9240
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9241
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9243
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9245
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9244
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9246
    [DIFFICULTY_NORMAL][TRAINER_827A5D21] =
    {
#line 9247
        .trainerName = _("827A5D21"),
#line 9248
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9249
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9251
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9253
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9252
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9254
    [DIFFICULTY_NORMAL][TRAINER_82A19B69] =
    {
#line 9255
        .trainerName = _("82A19B69"),
#line 9256
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9257
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9259
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9261
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9260
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9262
    [DIFFICULTY_NORMAL][TRAINER_83008F9D] =
    {
#line 9263
        .trainerName = _("83008F9D"),
#line 9264
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9265
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9267
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9269
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9268
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9270
    [DIFFICULTY_NORMAL][TRAINER_831DE561] =
    {
#line 9271
        .trainerName = _("831DE561"),
#line 9272
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9273
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9275
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9277
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9276
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9278
    [DIFFICULTY_NORMAL][TRAINER_8327758B] =
    {
#line 9279
        .trainerName = _("8327758B"),
#line 9280
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9281
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9283
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9285
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9284
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9286
    [DIFFICULTY_NORMAL][TRAINER_834B75E7] =
    {
#line 9287
        .trainerName = _("834B75E7"),
#line 9288
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9289
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9291
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9293
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9292
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9294
    [DIFFICULTY_NORMAL][TRAINER_8365EA32] =
    {
#line 9295
        .trainerName = _("8365EA32"),
#line 9296
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9297
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9299
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9301
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9300
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9302
    [DIFFICULTY_NORMAL][TRAINER_83A26233] =
    {
#line 9303
        .trainerName = _("83A26233"),
#line 9304
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9305
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9307
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9309
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9308
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9310
    [DIFFICULTY_NORMAL][TRAINER_83B9A038] =
    {
#line 9311
        .trainerName = _("83B9A038"),
#line 9312
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9313
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9315
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9317
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9316
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9318
    [DIFFICULTY_NORMAL][TRAINER_840416CD] =
    {
#line 9319
        .trainerName = _("840416CD"),
#line 9320
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9321
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9323
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9325
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9324
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9326
    [DIFFICULTY_NORMAL][TRAINER_843DFC91] =
    {
#line 9327
        .trainerName = _("843DFC91"),
#line 9328
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9329
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9331
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9333
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9332
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9334
    [DIFFICULTY_NORMAL][TRAINER_857ACD94] =
    {
#line 9335
        .trainerName = _("857ACD94"),
#line 9336
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9337
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9339
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9341
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9340
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9342
    [DIFFICULTY_NORMAL][TRAINER_8580525E] =
    {
#line 9343
        .trainerName = _("8580525E"),
#line 9344
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9345
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9347
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9349
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9348
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9350
    [DIFFICULTY_NORMAL][TRAINER_866AE208] =
    {
#line 9351
        .trainerName = _("866AE208"),
#line 9352
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9353
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9355
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9357
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9356
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9358
    [DIFFICULTY_NORMAL][TRAINER_8677EFB3] =
    {
#line 9359
        .trainerName = _("8677EFB3"),
#line 9360
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9361
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9363
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9365
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9364
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9366
    [DIFFICULTY_NORMAL][TRAINER_86D37FF1] =
    {
#line 9367
        .trainerName = _("86D37FF1"),
#line 9368
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9369
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9371
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9373
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9372
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9374
    [DIFFICULTY_NORMAL][TRAINER_86F7AA4A] =
    {
#line 9375
        .trainerName = _("86F7AA4A"),
#line 9376
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9377
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9379
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9381
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9380
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9382
    [DIFFICULTY_NORMAL][TRAINER_872183CD] =
    {
#line 9383
        .trainerName = _("872183CD"),
#line 9384
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9385
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9387
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9389
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9388
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9390
    [DIFFICULTY_NORMAL][TRAINER_87B5E929] =
    {
#line 9391
        .trainerName = _("87B5E929"),
#line 9392
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9393
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9395
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9397
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9396
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9398
    [DIFFICULTY_NORMAL][TRAINER_885C781B] =
    {
#line 9399
        .trainerName = _("885C781B"),
#line 9400
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9401
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9403
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9405
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9404
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9406
    [DIFFICULTY_NORMAL][TRAINER_8878003B] =
    {
#line 9407
        .trainerName = _("8878003B"),
#line 9408
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9409
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9411
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9413
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9412
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9414
    [DIFFICULTY_NORMAL][TRAINER_88864D1E] =
    {
#line 9415
        .trainerName = _("88864D1E"),
#line 9416
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9417
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9419
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9421
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9420
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9422
    [DIFFICULTY_NORMAL][TRAINER_8972F540] =
    {
#line 9423
        .trainerName = _("8972F540"),
#line 9424
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9425
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9427
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9429
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9428
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9430
    [DIFFICULTY_NORMAL][TRAINER_898AF31D] =
    {
#line 9431
        .trainerName = _("898AF31D"),
#line 9432
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9433
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9435
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9437
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9436
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9438
    [DIFFICULTY_NORMAL][TRAINER_8A0B40C0] =
    {
#line 9439
        .trainerName = _("8A0B40C0"),
#line 9440
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9441
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9443
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9445
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9444
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9446
    [DIFFICULTY_NORMAL][TRAINER_8A2C65A3] =
    {
#line 9447
        .trainerName = _("8A2C65A3"),
#line 9448
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9449
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9451
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9453
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9452
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9454
    [DIFFICULTY_NORMAL][TRAINER_8A829476] =
    {
#line 9455
        .trainerName = _("8A829476"),
#line 9456
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9457
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9459
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9461
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9460
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9462
    [DIFFICULTY_NORMAL][TRAINER_8AC1B5C1] =
    {
#line 9463
        .trainerName = _("8AC1B5C1"),
#line 9464
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9465
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9467
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9469
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9468
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9470
    [DIFFICULTY_NORMAL][TRAINER_8AF40B23] =
    {
#line 9471
        .trainerName = _("8AF40B23"),
#line 9472
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9473
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9475
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9477
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9476
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9478
    [DIFFICULTY_NORMAL][TRAINER_8B31AC38] =
    {
#line 9479
        .trainerName = _("8B31AC38"),
#line 9480
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9481
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9483
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9485
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9484
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9486
    [DIFFICULTY_NORMAL][TRAINER_8B32317E] =
    {
#line 9487
        .trainerName = _("8B32317E"),
#line 9488
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9489
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9491
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9493
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9492
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9494
    [DIFFICULTY_NORMAL][TRAINER_8B3657A9] =
    {
#line 9495
        .trainerName = _("8B3657A9"),
#line 9496
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9497
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9499
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9501
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9500
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9502
    [DIFFICULTY_NORMAL][TRAINER_8B3C49E3] =
    {
#line 9503
        .trainerName = _("8B3C49E3"),
#line 9504
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9505
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9507
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9509
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9508
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9510
    [DIFFICULTY_NORMAL][TRAINER_8B6D195D] =
    {
#line 9511
        .trainerName = _("8B6D195D"),
#line 9512
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9513
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9515
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9517
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9516
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9518
    [DIFFICULTY_NORMAL][TRAINER_8BB65E5E] =
    {
#line 9519
        .trainerName = _("8BB65E5E"),
#line 9520
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9521
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9523
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9525
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9524
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9526
    [DIFFICULTY_NORMAL][TRAINER_8C186D17] =
    {
#line 9527
        .trainerName = _("8C186D17"),
#line 9528
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9529
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9531
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9533
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9532
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9534
    [DIFFICULTY_NORMAL][TRAINER_8C853607] =
    {
#line 9535
        .trainerName = _("8C853607"),
#line 9536
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9537
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9539
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9541
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9540
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9542
    [DIFFICULTY_NORMAL][TRAINER_8D6D5B2C] =
    {
#line 9543
        .trainerName = _("8D6D5B2C"),
#line 9544
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9545
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9547
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9549
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9548
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9550
    [DIFFICULTY_NORMAL][TRAINER_8D93124A] =
    {
#line 9551
        .trainerName = _("8D93124A"),
#line 9552
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9553
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9555
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9557
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9556
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9558
    [DIFFICULTY_NORMAL][TRAINER_8DAF08C5] =
    {
#line 9559
        .trainerName = _("8DAF08C5"),
#line 9560
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9561
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9563
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9565
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9564
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9566
    [DIFFICULTY_NORMAL][TRAINER_8DE17D94] =
    {
#line 9567
        .trainerName = _("8DE17D94"),
#line 9568
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9569
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9571
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9573
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9572
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9574
    [DIFFICULTY_NORMAL][TRAINER_8E60CF6E] =
    {
#line 9575
        .trainerName = _("8E60CF6E"),
#line 9576
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9577
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9579
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9581
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9580
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9582
    [DIFFICULTY_NORMAL][TRAINER_8EA873A0] =
    {
#line 9583
        .trainerName = _("8EA873A0"),
#line 9584
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9585
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9587
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9589
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9588
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9590
    [DIFFICULTY_NORMAL][TRAINER_8EB76821] =
    {
#line 9591
        .trainerName = _("8EB76821"),
#line 9592
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9593
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9595
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9597
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9596
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9598
    [DIFFICULTY_NORMAL][TRAINER_8ED15D51] =
    {
#line 9599
        .trainerName = _("8ED15D51"),
#line 9600
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9601
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9603
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9605
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9604
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9606
    [DIFFICULTY_NORMAL][TRAINER_8F28F86A] =
    {
#line 9607
        .trainerName = _("8F28F86A"),
#line 9608
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9609
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9611
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9613
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9612
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9614
    [DIFFICULTY_NORMAL][TRAINER_8F2EA270] =
    {
#line 9615
        .trainerName = _("8F2EA270"),
#line 9616
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9617
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9619
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9621
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9620
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9622
    [DIFFICULTY_NORMAL][TRAINER_8F9579E4] =
    {
#line 9623
        .trainerName = _("8F9579E4"),
#line 9624
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9625
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9627
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9629
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9628
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9630
    [DIFFICULTY_NORMAL][TRAINER_8F988020] =
    {
#line 9631
        .trainerName = _("8F988020"),
#line 9632
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9633
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9635
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9637
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9636
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9638
    [DIFFICULTY_NORMAL][TRAINER_8FE817BA] =
    {
#line 9639
        .trainerName = _("8FE817BA"),
#line 9640
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9641
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9643
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9645
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9644
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9646
    [DIFFICULTY_NORMAL][TRAINER_90353D81] =
    {
#line 9647
        .trainerName = _("90353D81"),
#line 9648
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9649
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9651
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9653
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9652
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9654
    [DIFFICULTY_NORMAL][TRAINER_9054973F] =
    {
#line 9655
        .trainerName = _("9054973F"),
#line 9656
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9657
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9659
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9661
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9660
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9662
    [DIFFICULTY_NORMAL][TRAINER_90A72ACF] =
    {
#line 9663
        .trainerName = _("90A72ACF"),
#line 9664
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9665
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9667
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9669
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9668
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9670
    [DIFFICULTY_NORMAL][TRAINER_90E1658C] =
    {
#line 9671
        .trainerName = _("90E1658C"),
#line 9672
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9673
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9675
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9677
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9676
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9678
    [DIFFICULTY_NORMAL][TRAINER_918A1734] =
    {
#line 9679
        .trainerName = _("918A1734"),
#line 9680
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9681
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9683
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9685
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9684
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9686
    [DIFFICULTY_NORMAL][TRAINER_91D249C3] =
    {
#line 9687
        .trainerName = _("91D249C3"),
#line 9688
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9689
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9691
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9693
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9692
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9694
    [DIFFICULTY_NORMAL][TRAINER_91D48E4E] =
    {
#line 9695
        .trainerName = _("91D48E4E"),
#line 9696
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9697
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9699
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9701
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9700
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9702
    [DIFFICULTY_NORMAL][TRAINER_922542C3] =
    {
#line 9703
        .trainerName = _("922542C3"),
#line 9704
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9705
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9707
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9709
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9708
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9710
    [DIFFICULTY_NORMAL][TRAINER_93009D3B] =
    {
#line 9711
        .trainerName = _("93009D3B"),
#line 9712
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9713
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9715
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9717
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9716
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9718
    [DIFFICULTY_NORMAL][TRAINER_93D9B506] =
    {
#line 9719
        .trainerName = _("93D9B506"),
#line 9720
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9721
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9723
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9725
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9724
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9726
    [DIFFICULTY_NORMAL][TRAINER_9427896B] =
    {
#line 9727
        .trainerName = _("9427896B"),
#line 9728
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9729
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9731
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9733
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9732
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9734
    [DIFFICULTY_NORMAL][TRAINER_9501C16B] =
    {
#line 9735
        .trainerName = _("9501C16B"),
#line 9736
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9737
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9739
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9741
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9740
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9742
    [DIFFICULTY_NORMAL][TRAINER_9566DD87] =
    {
#line 9743
        .trainerName = _("9566DD87"),
#line 9744
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9745
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9747
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9749
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9748
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9750
    [DIFFICULTY_NORMAL][TRAINER_95A74E78] =
    {
#line 9751
        .trainerName = _("95A74E78"),
#line 9752
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9753
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9755
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9757
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9756
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9758
    [DIFFICULTY_NORMAL][TRAINER_963F893A] =
    {
#line 9759
        .trainerName = _("963F893A"),
#line 9760
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9761
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9763
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9765
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9764
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9766
    [DIFFICULTY_NORMAL][TRAINER_966F37E6] =
    {
#line 9767
        .trainerName = _("966F37E6"),
#line 9768
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9769
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9771
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9773
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9772
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9774
    [DIFFICULTY_NORMAL][TRAINER_96859C9B] =
    {
#line 9775
        .trainerName = _("96859C9B"),
#line 9776
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9777
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9779
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9781
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9780
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9782
    [DIFFICULTY_NORMAL][TRAINER_9695D7CC] =
    {
#line 9783
        .trainerName = _("9695D7CC"),
#line 9784
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9785
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9787
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9789
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9788
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9790
    [DIFFICULTY_NORMAL][TRAINER_96A60AED] =
    {
#line 9791
        .trainerName = _("96A60AED"),
#line 9792
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9793
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9795
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9797
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9796
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9798
    [DIFFICULTY_NORMAL][TRAINER_973C00CE] =
    {
#line 9799
        .trainerName = _("973C00CE"),
#line 9800
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9801
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9803
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9805
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9804
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9806
    [DIFFICULTY_NORMAL][TRAINER_9784BB4E] =
    {
#line 9807
        .trainerName = _("9784BB4E"),
#line 9808
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9809
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9811
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9813
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9812
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9814
    [DIFFICULTY_NORMAL][TRAINER_9834CDCC] =
    {
#line 9815
        .trainerName = _("9834CDCC"),
#line 9816
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9817
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9819
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9821
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9820
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9822
    [DIFFICULTY_NORMAL][TRAINER_98547A36] =
    {
#line 9823
        .trainerName = _("98547A36"),
#line 9824
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9825
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9827
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9829
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9828
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9830
    [DIFFICULTY_NORMAL][TRAINER_98C7143B] =
    {
#line 9831
        .trainerName = _("98C7143B"),
#line 9832
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9833
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9835
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9837
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9836
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9838
    [DIFFICULTY_NORMAL][TRAINER_992FCC96] =
    {
#line 9839
        .trainerName = _("992FCC96"),
#line 9840
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9841
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9843
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9845
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9844
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9846
    [DIFFICULTY_NORMAL][TRAINER_99D74322] =
    {
#line 9847
        .trainerName = _("99D74322"),
#line 9848
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9849
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9851
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9853
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9852
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9854
    [DIFFICULTY_NORMAL][TRAINER_9A45ED29] =
    {
#line 9855
        .trainerName = _("9A45ED29"),
#line 9856
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9857
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9859
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9861
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9860
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9862
    [DIFFICULTY_NORMAL][TRAINER_9AAFB9A8] =
    {
#line 9863
        .trainerName = _("9AAFB9A8"),
#line 9864
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9865
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9867
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9869
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9868
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9870
    [DIFFICULTY_NORMAL][TRAINER_9B4CAAEF] =
    {
#line 9871
        .trainerName = _("9B4CAAEF"),
#line 9872
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9873
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9875
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9877
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9876
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9878
    [DIFFICULTY_NORMAL][TRAINER_9B92F975] =
    {
#line 9879
        .trainerName = _("9B92F975"),
#line 9880
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9881
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9883
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9885
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9884
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9886
    [DIFFICULTY_NORMAL][TRAINER_9BA8D6B8] =
    {
#line 9887
        .trainerName = _("9BA8D6B8"),
#line 9888
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9889
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9891
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9893
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9892
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9894
    [DIFFICULTY_NORMAL][TRAINER_9BBA4D3E] =
    {
#line 9895
        .trainerName = _("9BBA4D3E"),
#line 9896
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9897
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9899
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9901
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9900
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9902
    [DIFFICULTY_NORMAL][TRAINER_9BD745C1] =
    {
#line 9903
        .trainerName = _("9BD745C1"),
#line 9904
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9905
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9907
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9909
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9908
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9910
    [DIFFICULTY_NORMAL][TRAINER_9C9A9B43] =
    {
#line 9911
        .trainerName = _("9C9A9B43"),
#line 9912
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9913
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9915
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9917
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9916
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9918
    [DIFFICULTY_NORMAL][TRAINER_9CC51698] =
    {
#line 9919
        .trainerName = _("9CC51698"),
#line 9920
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9921
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9923
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9925
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9924
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9926
    [DIFFICULTY_NORMAL][TRAINER_9D0B799C] =
    {
#line 9927
        .trainerName = _("9D0B799C"),
#line 9928
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9929
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9931
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9933
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9932
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9934
    [DIFFICULTY_NORMAL][TRAINER_9D2974CA] =
    {
#line 9935
        .trainerName = _("9D2974CA"),
#line 9936
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9937
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9939
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9941
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9940
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9942
    [DIFFICULTY_NORMAL][TRAINER_9DE6AF69] =
    {
#line 9943
        .trainerName = _("9DE6AF69"),
#line 9944
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9945
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9947
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9949
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9948
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9950
    [DIFFICULTY_NORMAL][TRAINER_9E9E96C3] =
    {
#line 9951
        .trainerName = _("9E9E96C3"),
#line 9952
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9953
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9955
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9957
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9956
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9958
    [DIFFICULTY_NORMAL][TRAINER_9EBDE860] =
    {
#line 9959
        .trainerName = _("9EBDE860"),
#line 9960
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9961
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9963
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9965
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9964
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9966
    [DIFFICULTY_NORMAL][TRAINER_9F335F56] =
    {
#line 9967
        .trainerName = _("9F335F56"),
#line 9968
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9969
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9971
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9973
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9972
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9974
    [DIFFICULTY_NORMAL][TRAINER_9FB07CC0] =
    {
#line 9975
        .trainerName = _("9FB07CC0"),
#line 9976
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9977
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9979
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9981
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9980
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9982
    [DIFFICULTY_NORMAL][TRAINER_9FFBEDD1] =
    {
#line 9983
        .trainerName = _("9FFBEDD1"),
#line 9984
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9985
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9987
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9989
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9988
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9990
    [DIFFICULTY_NORMAL][TRAINER_A03F3B0B] =
    {
#line 9991
        .trainerName = _("A03F3B0B"),
#line 9992
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 9993
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9995
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9997
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9996
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9998
    [DIFFICULTY_NORMAL][TRAINER_A0852317] =
    {
#line 9999
        .trainerName = _("A0852317"),
#line 10000
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10001
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10003
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10005
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10004
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10006
    [DIFFICULTY_NORMAL][TRAINER_A0CE2BCF] =
    {
#line 10007
        .trainerName = _("A0CE2BCF"),
#line 10008
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10009
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10011
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10013
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10012
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10014
    [DIFFICULTY_NORMAL][TRAINER_A122FEC6] =
    {
#line 10015
        .trainerName = _("A122FEC6"),
#line 10016
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10017
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10019
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10021
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10020
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10022
    [DIFFICULTY_NORMAL][TRAINER_A1502FA5] =
    {
#line 10023
        .trainerName = _("A1502FA5"),
#line 10024
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10025
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10027
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10029
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10028
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10030
    [DIFFICULTY_NORMAL][TRAINER_A173BD9E] =
    {
#line 10031
        .trainerName = _("A173BD9E"),
#line 10032
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10033
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10035
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10037
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10036
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10038
    [DIFFICULTY_NORMAL][TRAINER_A1B34299] =
    {
#line 10039
        .trainerName = _("A1B34299"),
#line 10040
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10041
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10043
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10045
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10044
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10046
    [DIFFICULTY_NORMAL][TRAINER_A226BBD6] =
    {
#line 10047
        .trainerName = _("A226BBD6"),
#line 10048
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10049
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10051
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10053
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10052
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10054
    [DIFFICULTY_NORMAL][TRAINER_A26B64E5] =
    {
#line 10055
        .trainerName = _("A26B64E5"),
#line 10056
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10057
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10059
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10061
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10060
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10062
    [DIFFICULTY_NORMAL][TRAINER_A2F2E8FF] =
    {
#line 10063
        .trainerName = _("A2F2E8FF"),
#line 10064
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10065
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10067
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10069
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10068
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10070
    [DIFFICULTY_NORMAL][TRAINER_A30D6A65] =
    {
#line 10071
        .trainerName = _("A30D6A65"),
#line 10072
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10073
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10075
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10077
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10076
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10078
    [DIFFICULTY_NORMAL][TRAINER_A33F468D] =
    {
#line 10079
        .trainerName = _("A33F468D"),
#line 10080
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10081
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10083
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10085
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10084
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10086
    [DIFFICULTY_NORMAL][TRAINER_A377CCDF] =
    {
#line 10087
        .trainerName = _("A377CCDF"),
#line 10088
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10089
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10091
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10093
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10092
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10094
    [DIFFICULTY_NORMAL][TRAINER_A393F9F0] =
    {
#line 10095
        .trainerName = _("A393F9F0"),
#line 10096
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10097
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10099
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10101
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10100
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10102
    [DIFFICULTY_NORMAL][TRAINER_A39AB67C] =
    {
#line 10103
        .trainerName = _("A39AB67C"),
#line 10104
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10105
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10107
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10109
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10108
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10110
    [DIFFICULTY_NORMAL][TRAINER_A3EBD43B] =
    {
#line 10111
        .trainerName = _("A3EBD43B"),
#line 10112
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10113
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10115
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10117
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10116
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10118
    [DIFFICULTY_NORMAL][TRAINER_A489434F] =
    {
#line 10119
        .trainerName = _("A489434F"),
#line 10120
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10121
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10123
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10125
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10124
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10126
    [DIFFICULTY_NORMAL][TRAINER_A49FED84] =
    {
#line 10127
        .trainerName = _("A49FED84"),
#line 10128
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10129
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10131
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10133
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10132
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10134
    [DIFFICULTY_NORMAL][TRAINER_A4BDD551] =
    {
#line 10135
        .trainerName = _("A4BDD551"),
#line 10136
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10137
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10139
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10141
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10140
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10142
    [DIFFICULTY_NORMAL][TRAINER_A4D47D9E] =
    {
#line 10143
        .trainerName = _("A4D47D9E"),
#line 10144
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10145
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10147
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10149
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10148
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10150
    [DIFFICULTY_NORMAL][TRAINER_A4DC84A0] =
    {
#line 10151
        .trainerName = _("A4DC84A0"),
#line 10152
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10153
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10155
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10157
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10156
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10158
    [DIFFICULTY_NORMAL][TRAINER_A4EC97B5] =
    {
#line 10159
        .trainerName = _("A4EC97B5"),
#line 10160
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10161
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10163
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10165
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10164
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10166
    [DIFFICULTY_NORMAL][TRAINER_A50CF67B] =
    {
#line 10167
        .trainerName = _("A50CF67B"),
#line 10168
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10169
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10171
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10173
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10172
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10174
    [DIFFICULTY_NORMAL][TRAINER_A62D49C6] =
    {
#line 10175
        .trainerName = _("A62D49C6"),
#line 10176
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10177
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10179
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10181
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10180
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10182
    [DIFFICULTY_NORMAL][TRAINER_A6328173] =
    {
#line 10183
        .trainerName = _("A6328173"),
#line 10184
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10185
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10187
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10189
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10188
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10190
    [DIFFICULTY_NORMAL][TRAINER_A646F21E] =
    {
#line 10191
        .trainerName = _("A646F21E"),
#line 10192
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10193
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10195
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10197
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10196
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10198
    [DIFFICULTY_NORMAL][TRAINER_A685428F] =
    {
#line 10199
        .trainerName = _("A685428F"),
#line 10200
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10201
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10203
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10205
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10204
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10206
    [DIFFICULTY_NORMAL][TRAINER_A686809A] =
    {
#line 10207
        .trainerName = _("A686809A"),
#line 10208
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10209
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10211
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10213
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10212
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10214
    [DIFFICULTY_NORMAL][TRAINER_A7154C64] =
    {
#line 10215
        .trainerName = _("A7154C64"),
#line 10216
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10217
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10219
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10221
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10220
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10222
    [DIFFICULTY_NORMAL][TRAINER_A725F3F3] =
    {
#line 10223
        .trainerName = _("A725F3F3"),
#line 10224
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10225
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10227
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10229
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10228
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10230
    [DIFFICULTY_NORMAL][TRAINER_A7376C87] =
    {
#line 10231
        .trainerName = _("A7376C87"),
#line 10232
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10233
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10235
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10237
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10236
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10238
    [DIFFICULTY_NORMAL][TRAINER_A76F8352] =
    {
#line 10239
        .trainerName = _("A76F8352"),
#line 10240
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10241
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10243
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10245
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10244
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10246
    [DIFFICULTY_NORMAL][TRAINER_A783BCA8] =
    {
#line 10247
        .trainerName = _("A783BCA8"),
#line 10248
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10249
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10251
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10253
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10252
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10254
    [DIFFICULTY_NORMAL][TRAINER_A7D689F5] =
    {
#line 10255
        .trainerName = _("A7D689F5"),
#line 10256
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10257
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10259
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10261
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10260
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10262
    [DIFFICULTY_NORMAL][TRAINER_A7DCD657] =
    {
#line 10263
        .trainerName = _("A7DCD657"),
#line 10264
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10265
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10267
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10269
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10268
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10270
    [DIFFICULTY_NORMAL][TRAINER_A80F3799] =
    {
#line 10271
        .trainerName = _("A80F3799"),
#line 10272
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10273
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10275
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10277
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10276
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10278
    [DIFFICULTY_NORMAL][TRAINER_A82FABFC] =
    {
#line 10279
        .trainerName = _("A82FABFC"),
#line 10280
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10281
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10283
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10285
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10284
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10286
    [DIFFICULTY_NORMAL][TRAINER_A8413608] =
    {
#line 10287
        .trainerName = _("A8413608"),
#line 10288
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10289
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10291
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10293
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10292
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10294
    [DIFFICULTY_NORMAL][TRAINER_A8BA94B6] =
    {
#line 10295
        .trainerName = _("A8BA94B6"),
#line 10296
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10297
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10299
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10301
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10300
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10302
    [DIFFICULTY_NORMAL][TRAINER_A90E2D03] =
    {
#line 10303
        .trainerName = _("A90E2D03"),
#line 10304
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10305
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10307
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10309
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10308
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10310
    [DIFFICULTY_NORMAL][TRAINER_A968DBA5] =
    {
#line 10311
        .trainerName = _("A968DBA5"),
#line 10312
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10313
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10315
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10317
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10316
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10318
    [DIFFICULTY_NORMAL][TRAINER_A990AE14] =
    {
#line 10319
        .trainerName = _("A990AE14"),
#line 10320
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10321
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10323
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10325
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10324
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10326
    [DIFFICULTY_NORMAL][TRAINER_A9F2709A] =
    {
#line 10327
        .trainerName = _("A9F2709A"),
#line 10328
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10329
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10331
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10333
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10332
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10334
    [DIFFICULTY_NORMAL][TRAINER_AA81DD0B] =
    {
#line 10335
        .trainerName = _("AA81DD0B"),
#line 10336
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10337
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10339
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10341
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10340
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10342
    [DIFFICULTY_NORMAL][TRAINER_AB576C3B] =
    {
#line 10343
        .trainerName = _("AB576C3B"),
#line 10344
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10345
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10347
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10349
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10348
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10350
    [DIFFICULTY_NORMAL][TRAINER_ABD18218] =
    {
#line 10351
        .trainerName = _("ABD18218"),
#line 10352
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10353
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10355
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10357
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10356
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10358
    [DIFFICULTY_NORMAL][TRAINER_ABF9DAAF] =
    {
#line 10359
        .trainerName = _("ABF9DAAF"),
#line 10360
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10361
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10363
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10365
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10364
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10366
    [DIFFICULTY_NORMAL][TRAINER_ABFE6286] =
    {
#line 10367
        .trainerName = _("ABFE6286"),
#line 10368
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10369
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10371
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10373
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10372
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10374
    [DIFFICULTY_NORMAL][TRAINER_AC004835] =
    {
#line 10375
        .trainerName = _("AC004835"),
#line 10376
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10377
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10379
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10381
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10380
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10382
    [DIFFICULTY_NORMAL][TRAINER_ACB85CBA] =
    {
#line 10383
        .trainerName = _("ACB85CBA"),
#line 10384
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10385
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10387
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10389
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10388
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10390
    [DIFFICULTY_NORMAL][TRAINER_ACE2090A] =
    {
#line 10391
        .trainerName = _("ACE2090A"),
#line 10392
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10393
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10395
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10397
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10396
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10398
    [DIFFICULTY_NORMAL][TRAINER_AD1AA26D] =
    {
#line 10399
        .trainerName = _("AD1AA26D"),
#line 10400
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10401
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10403
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10405
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10404
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10406
    [DIFFICULTY_NORMAL][TRAINER_AD70C4BA] =
    {
#line 10407
        .trainerName = _("AD70C4BA"),
#line 10408
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10409
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10411
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10413
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10412
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10414
    [DIFFICULTY_NORMAL][TRAINER_AD8C8210] =
    {
#line 10415
        .trainerName = _("AD8C8210"),
#line 10416
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10417
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10419
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10421
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10420
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10422
    [DIFFICULTY_NORMAL][TRAINER_ADC94E2C] =
    {
#line 10423
        .trainerName = _("ADC94E2C"),
#line 10424
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10425
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10427
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10429
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10428
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10430
    [DIFFICULTY_NORMAL][TRAINER_AE0ED10D] =
    {
#line 10431
        .trainerName = _("AE0ED10D"),
#line 10432
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10433
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10435
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10437
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10436
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10438
    [DIFFICULTY_NORMAL][TRAINER_AE99A6E1] =
    {
#line 10439
        .trainerName = _("AE99A6E1"),
#line 10440
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10441
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10443
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10445
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10444
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10446
    [DIFFICULTY_NORMAL][TRAINER_AE9CFA41] =
    {
#line 10447
        .trainerName = _("AE9CFA41"),
#line 10448
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10449
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10451
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10453
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10452
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10454
    [DIFFICULTY_NORMAL][TRAINER_AEDC9768] =
    {
#line 10455
        .trainerName = _("AEDC9768"),
#line 10456
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10457
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10459
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10461
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10460
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10462
    [DIFFICULTY_NORMAL][TRAINER_AF0898E7] =
    {
#line 10463
        .trainerName = _("AF0898E7"),
#line 10464
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10465
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10467
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10469
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10468
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10470
    [DIFFICULTY_NORMAL][TRAINER_AF765F9F] =
    {
#line 10471
        .trainerName = _("AF765F9F"),
#line 10472
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10473
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10475
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10477
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10476
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10478
    [DIFFICULTY_NORMAL][TRAINER_AFA4A980] =
    {
#line 10479
        .trainerName = _("AFA4A980"),
#line 10480
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10481
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10483
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10485
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10484
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10486
    [DIFFICULTY_NORMAL][TRAINER_AFA5BAC9] =
    {
#line 10487
        .trainerName = _("AFA5BAC9"),
#line 10488
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10489
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10491
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10493
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10492
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10494
    [DIFFICULTY_NORMAL][TRAINER_AFD8F2EF] =
    {
#line 10495
        .trainerName = _("AFD8F2EF"),
#line 10496
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10497
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10499
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10501
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10500
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10502
    [DIFFICULTY_NORMAL][TRAINER_AFE855B1] =
    {
#line 10503
        .trainerName = _("AFE855B1"),
#line 10504
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10505
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10507
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10509
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10508
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10510
    [DIFFICULTY_NORMAL][TRAINER_AFFCC47E] =
    {
#line 10511
        .trainerName = _("AFFCC47E"),
#line 10512
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10513
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10515
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10517
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10516
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10518
    [DIFFICULTY_NORMAL][TRAINER_B0FC622D] =
    {
#line 10519
        .trainerName = _("B0FC622D"),
#line 10520
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10521
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10523
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10525
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10524
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10526
    [DIFFICULTY_NORMAL][TRAINER_B1DA7383] =
    {
#line 10527
        .trainerName = _("B1DA7383"),
#line 10528
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10529
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10531
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10533
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10532
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10534
    [DIFFICULTY_NORMAL][TRAINER_B253DEF2] =
    {
#line 10535
        .trainerName = _("B253DEF2"),
#line 10536
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10537
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10539
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10541
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10540
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10542
    [DIFFICULTY_NORMAL][TRAINER_B2925134] =
    {
#line 10543
        .trainerName = _("B2925134"),
#line 10544
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10545
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10547
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10549
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10548
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10550
    [DIFFICULTY_NORMAL][TRAINER_B2A5CB2B] =
    {
#line 10551
        .trainerName = _("B2A5CB2B"),
#line 10552
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10553
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10555
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10557
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10556
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10558
    [DIFFICULTY_NORMAL][TRAINER_B32A1E98] =
    {
#line 10559
        .trainerName = _("B32A1E98"),
#line 10560
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10561
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10563
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10565
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10564
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10566
    [DIFFICULTY_NORMAL][TRAINER_B3B1644E] =
    {
#line 10567
        .trainerName = _("B3B1644E"),
#line 10568
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10569
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10571
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10573
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10572
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10574
    [DIFFICULTY_NORMAL][TRAINER_B3CE95A4] =
    {
#line 10575
        .trainerName = _("B3CE95A4"),
#line 10576
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10577
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10579
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10581
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10580
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10582
    [DIFFICULTY_NORMAL][TRAINER_B3FB2F4B] =
    {
#line 10583
        .trainerName = _("B3FB2F4B"),
#line 10584
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10585
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10587
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10589
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10588
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10590
    [DIFFICULTY_NORMAL][TRAINER_B42E7E27] =
    {
#line 10591
        .trainerName = _("B42E7E27"),
#line 10592
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10593
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10595
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10597
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10596
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10598
    [DIFFICULTY_NORMAL][TRAINER_B42F5023] =
    {
#line 10599
        .trainerName = _("B42F5023"),
#line 10600
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10601
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10603
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10605
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10604
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10606
    [DIFFICULTY_NORMAL][TRAINER_B435B7EF] =
    {
#line 10607
        .trainerName = _("B435B7EF"),
#line 10608
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10609
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10611
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10613
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10612
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10614
    [DIFFICULTY_NORMAL][TRAINER_B438F348] =
    {
#line 10615
        .trainerName = _("B438F348"),
#line 10616
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10617
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10619
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10621
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10620
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10622
    [DIFFICULTY_NORMAL][TRAINER_B489F821] =
    {
#line 10623
        .trainerName = _("B489F821"),
#line 10624
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10625
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10627
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10629
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10628
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10630
    [DIFFICULTY_NORMAL][TRAINER_B490300F] =
    {
#line 10631
        .trainerName = _("B490300F"),
#line 10632
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10633
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10635
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10637
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10636
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10638
    [DIFFICULTY_NORMAL][TRAINER_B53E1C28] =
    {
#line 10639
        .trainerName = _("B53E1C28"),
#line 10640
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10641
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10643
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10645
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10644
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10646
    [DIFFICULTY_NORMAL][TRAINER_B5E055E7] =
    {
#line 10647
        .trainerName = _("B5E055E7"),
#line 10648
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10649
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10651
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10653
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10652
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10654
    [DIFFICULTY_NORMAL][TRAINER_B6330B06] =
    {
#line 10655
        .trainerName = _("B6330B06"),
#line 10656
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10657
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10659
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10661
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10660
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10662
    [DIFFICULTY_NORMAL][TRAINER_B66CAB9E] =
    {
#line 10663
        .trainerName = _("B66CAB9E"),
#line 10664
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10665
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10667
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10669
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10668
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10670
    [DIFFICULTY_NORMAL][TRAINER_B6E3D521] =
    {
#line 10671
        .trainerName = _("B6E3D521"),
#line 10672
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10673
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10675
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10677
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10676
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10678
    [DIFFICULTY_NORMAL][TRAINER_B6F23A27] =
    {
#line 10679
        .trainerName = _("B6F23A27"),
#line 10680
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10681
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10683
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10685
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10684
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10686
    [DIFFICULTY_NORMAL][TRAINER_B71419A1] =
    {
#line 10687
        .trainerName = _("B71419A1"),
#line 10688
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10689
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10691
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10693
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10692
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10694
    [DIFFICULTY_NORMAL][TRAINER_B77C014B] =
    {
#line 10695
        .trainerName = _("B77C014B"),
#line 10696
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10697
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10699
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10701
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10700
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10702
    [DIFFICULTY_NORMAL][TRAINER_B791766D] =
    {
#line 10703
        .trainerName = _("B791766D"),
#line 10704
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10705
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10707
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10709
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10708
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10710
    [DIFFICULTY_NORMAL][TRAINER_B7998A66] =
    {
#line 10711
        .trainerName = _("B7998A66"),
#line 10712
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10713
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10715
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10717
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10716
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10718
    [DIFFICULTY_NORMAL][TRAINER_B7C2EB7F] =
    {
#line 10719
        .trainerName = _("B7C2EB7F"),
#line 10720
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10721
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10723
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10725
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10724
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10726
    [DIFFICULTY_NORMAL][TRAINER_B7EFEE71] =
    {
#line 10727
        .trainerName = _("B7EFEE71"),
#line 10728
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10729
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10731
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10733
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10732
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10734
    [DIFFICULTY_NORMAL][TRAINER_B84B3D2A] =
    {
#line 10735
        .trainerName = _("B84B3D2A"),
#line 10736
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10737
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10739
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10741
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10740
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10742
    [DIFFICULTY_NORMAL][TRAINER_B8C5628C] =
    {
#line 10743
        .trainerName = _("B8C5628C"),
#line 10744
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10745
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10747
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10749
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10748
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10750
    [DIFFICULTY_NORMAL][TRAINER_B94D66E3] =
    {
#line 10751
        .trainerName = _("B94D66E3"),
#line 10752
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10753
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10755
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10757
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10756
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10758
    [DIFFICULTY_NORMAL][TRAINER_B9C56D15] =
    {
#line 10759
        .trainerName = _("B9C56D15"),
#line 10760
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10761
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10763
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10765
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10764
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10766
    [DIFFICULTY_NORMAL][TRAINER_BA12D98F] =
    {
#line 10767
        .trainerName = _("BA12D98F"),
#line 10768
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10769
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10771
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10773
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10772
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10774
    [DIFFICULTY_NORMAL][TRAINER_BA4155D3] =
    {
#line 10775
        .trainerName = _("BA4155D3"),
#line 10776
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10777
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10779
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10781
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10780
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10782
    [DIFFICULTY_NORMAL][TRAINER_BA4DFC3A] =
    {
#line 10783
        .trainerName = _("BA4DFC3A"),
#line 10784
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10785
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10787
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10789
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10788
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10790
    [DIFFICULTY_NORMAL][TRAINER_BA60011F] =
    {
#line 10791
        .trainerName = _("BA60011F"),
#line 10792
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10793
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10795
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10797
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10796
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10798
    [DIFFICULTY_NORMAL][TRAINER_BA924FF7] =
    {
#line 10799
        .trainerName = _("BA924FF7"),
#line 10800
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10801
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10803
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10805
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10804
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10806
    [DIFFICULTY_NORMAL][TRAINER_BB07DD1B] =
    {
#line 10807
        .trainerName = _("BB07DD1B"),
#line 10808
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10809
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10811
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10813
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10812
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10814
    [DIFFICULTY_NORMAL][TRAINER_BB531FBA] =
    {
#line 10815
        .trainerName = _("BB531FBA"),
#line 10816
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10817
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10819
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10821
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10820
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10822
    [DIFFICULTY_NORMAL][TRAINER_BB6FD0A4] =
    {
#line 10823
        .trainerName = _("BB6FD0A4"),
#line 10824
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10825
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10827
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10829
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10828
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10830
    [DIFFICULTY_NORMAL][TRAINER_BBBC4B4C] =
    {
#line 10831
        .trainerName = _("BBBC4B4C"),
#line 10832
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10833
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10835
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10837
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10836
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10838
    [DIFFICULTY_NORMAL][TRAINER_BBD56E26] =
    {
#line 10839
        .trainerName = _("BBD56E26"),
#line 10840
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10841
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10843
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10845
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10844
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10846
    [DIFFICULTY_NORMAL][TRAINER_BC01A85B] =
    {
#line 10847
        .trainerName = _("BC01A85B"),
#line 10848
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10849
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10851
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10853
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10852
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10854
    [DIFFICULTY_NORMAL][TRAINER_BC74FA1D] =
    {
#line 10855
        .trainerName = _("BC74FA1D"),
#line 10856
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10857
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10859
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10861
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10860
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10862
    [DIFFICULTY_NORMAL][TRAINER_BC7E8D55] =
    {
#line 10863
        .trainerName = _("BC7E8D55"),
#line 10864
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10865
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10867
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10869
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10868
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10870
    [DIFFICULTY_NORMAL][TRAINER_BCDFD312] =
    {
#line 10871
        .trainerName = _("BCDFD312"),
#line 10872
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10873
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10875
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10877
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10876
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10878
    [DIFFICULTY_NORMAL][TRAINER_BCEFD799] =
    {
#line 10879
        .trainerName = _("BCEFD799"),
#line 10880
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10881
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10883
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10885
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10884
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10886
    [DIFFICULTY_NORMAL][TRAINER_BD01F8F4] =
    {
#line 10887
        .trainerName = _("BD01F8F4"),
#line 10888
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10889
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10891
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10893
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10892
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10894
    [DIFFICULTY_NORMAL][TRAINER_BDC38E1E] =
    {
#line 10895
        .trainerName = _("BDC38E1E"),
#line 10896
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10897
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10899
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10901
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10900
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10902
    [DIFFICULTY_NORMAL][TRAINER_BE2AF14F] =
    {
#line 10903
        .trainerName = _("BE2AF14F"),
#line 10904
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10905
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10907
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10909
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10908
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10910
    [DIFFICULTY_NORMAL][TRAINER_BEB2BD3E] =
    {
#line 10911
        .trainerName = _("BEB2BD3E"),
#line 10912
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10913
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10915
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10917
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10916
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10918
    [DIFFICULTY_NORMAL][TRAINER_BF07B94F] =
    {
#line 10919
        .trainerName = _("BF07B94F"),
#line 10920
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10921
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10923
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10925
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10924
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10926
    [DIFFICULTY_NORMAL][TRAINER_BF2827C0] =
    {
#line 10927
        .trainerName = _("BF2827C0"),
#line 10928
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10929
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10931
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10933
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10932
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10934
    [DIFFICULTY_NORMAL][TRAINER_BF74896F] =
    {
#line 10935
        .trainerName = _("BF74896F"),
#line 10936
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10937
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10939
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10941
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10940
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10942
    [DIFFICULTY_NORMAL][TRAINER_BF8ADEF1] =
    {
#line 10943
        .trainerName = _("BF8ADEF1"),
#line 10944
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10945
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10947
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10949
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10948
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10950
    [DIFFICULTY_NORMAL][TRAINER_C0800804] =
    {
#line 10951
        .trainerName = _("C0800804"),
#line 10952
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10953
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10955
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10957
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10956
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10958
    [DIFFICULTY_NORMAL][TRAINER_C091F2C5] =
    {
#line 10959
        .trainerName = _("C091F2C5"),
#line 10960
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10961
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10963
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10965
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10964
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10966
    [DIFFICULTY_NORMAL][TRAINER_C10351D2] =
    {
#line 10967
        .trainerName = _("C10351D2"),
#line 10968
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10969
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10971
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10973
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10972
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10974
    [DIFFICULTY_NORMAL][TRAINER_C1C428F7] =
    {
#line 10975
        .trainerName = _("C1C428F7"),
#line 10976
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10977
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10979
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10981
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10980
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10982
    [DIFFICULTY_NORMAL][TRAINER_C1C621AC] =
    {
#line 10983
        .trainerName = _("C1C621AC"),
#line 10984
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10985
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10987
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10989
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10988
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10990
    [DIFFICULTY_NORMAL][TRAINER_C203C024] =
    {
#line 10991
        .trainerName = _("C203C024"),
#line 10992
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 10993
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10995
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10997
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10996
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10998
    [DIFFICULTY_NORMAL][TRAINER_C2174D90] =
    {
#line 10999
        .trainerName = _("C2174D90"),
#line 11000
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 11001
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11003
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11005
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11004
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11006
    [DIFFICULTY_NORMAL][TRAINER_C24EFC92] =
    {
#line 11007
        .trainerName = _("C24EFC92"),
#line 11008
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 11009
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11011
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11013
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11012
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11014
    [DIFFICULTY_NORMAL][TRAINER_C290C9F5] =
    {
#line 11015
        .trainerName = _("C290C9F5"),
#line 11016
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 11017
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11019
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11021
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11020
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11022
    [DIFFICULTY_NORMAL][TRAINER_C29CDC34] =
    {
#line 11023
        .trainerName = _("C29CDC34"),
#line 11024
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 11025
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11027
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11029
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11028
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11030
    [DIFFICULTY_NORMAL][TRAINER_C3B3B17B] =
    {
#line 11031
        .trainerName = _("C3B3B17B"),
#line 11032
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 11033
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11035
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11037
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11036
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11038
    [DIFFICULTY_NORMAL][TRAINER_C414BED0] =
    {
#line 11039
        .trainerName = _("C414BED0"),
#line 11040
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 11041
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11043
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11045
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11044
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11046
    [DIFFICULTY_NORMAL][TRAINER_C42A775B] =
    {
#line 11047
        .trainerName = _("C42A775B"),
#line 11048
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 11049
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11051
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11053
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11052
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11054
    [DIFFICULTY_NORMAL][TRAINER_C4A167E0] =
    {
#line 11055
        .trainerName = _("C4A167E0"),
#line 11056
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 11057
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11059
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11061
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11060
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11062
    [DIFFICULTY_NORMAL][TRAINER_C4C98FC4] =
    {
#line 11063
        .trainerName = _("C4C98FC4"),
#line 11064
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 11065
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11067
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11069
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11068
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11070
    [DIFFICULTY_NORMAL][TRAINER_C533F091] =
    {
#line 11071
        .trainerName = _("C533F091"),
#line 11072
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 11073
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11075
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11077
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11076
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11078
    [DIFFICULTY_NORMAL][TRAINER_C6600959] =
    {
#line 11079
        .trainerName = _("C6600959"),
#line 11080
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 11081
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11083
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11085
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11084
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11086
    [DIFFICULTY_NORMAL][TRAINER_C6666859] =
    {
#line 11087
        .trainerName = _("C6666859"),
#line 11088
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 11089
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11091
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11093
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11092
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11094
    [DIFFICULTY_NORMAL][TRAINER_C690158D] =
    {
#line 11095
        .trainerName = _("C690158D"),
#line 11096
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 11097
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11099
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11101
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11100
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11102
    [DIFFICULTY_NORMAL][TRAINER_C6E61EDA] =
    {
#line 11103
        .trainerName = _("C6E61EDA"),
#line 11104
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 11105
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11107
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11109
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11108
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11110
    [DIFFICULTY_NORMAL][TRAINER_C7630112] =
    {
#line 11111
        .trainerName = _("C7630112"),
#line 11112
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 11113
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11115
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11117
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11116
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11118
    [DIFFICULTY_NORMAL][TRAINER_C789FBF5] =
    {
#line 11119
        .trainerName = _("C789FBF5"),
#line 11120
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 11121
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11123
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11125
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11124
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11126
    [DIFFICULTY_NORMAL][TRAINER_C7E06CB4] =
    {
#line 11127
        .trainerName = _("C7E06CB4"),
#line 11128
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 11129
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11131
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11133
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11132
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11134
    [DIFFICULTY_NORMAL][TRAINER_C7F16F5B] =
    {
#line 11135
        .trainerName = _("C7F16F5B"),
#line 11136
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 11137
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11139
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11141
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11140
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11142
    [DIFFICULTY_NORMAL][TRAINER_C82E0F99] =
    {
#line 11143
        .trainerName = _("C82E0F99"),
#line 11144
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 11145
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11147
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11149
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11148
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11150
    [DIFFICULTY_NORMAL][TRAINER_C84D5BA6] =
    {
#line 11151
        .trainerName = _("C84D5BA6"),
#line 11152
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 11153
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11155
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11157
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11156
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11158
    [DIFFICULTY_NORMAL][TRAINER_C8563FAA] =
    {
#line 11159
        .trainerName = _("C8563FAA"),
#line 11160
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 11161
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11163
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11165
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11164
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11166
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 11167
        .trainerName = _("LEAF"),
#line 11168
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 11169
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11171
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11173
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11172
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11174
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 11175
        .trainerName = _("RED"),
#line 11176
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
0,
#line 11177
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_OMNISCIENT,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11179
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11181
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11180
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
